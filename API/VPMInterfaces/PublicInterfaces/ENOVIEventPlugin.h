// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================
//
// ENOVIEventPlugin
//
//=============================================================================
// Sep. 03   Creation                                   LFE
//=============================================================================

#ifndef ENOVIEventPlugin_H
#define ENOVIEventPlugin_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "ENOVIEventManager.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIEventPlugin ;
#else
extern "C" const IID IID_ENOVIEventPlugin ;
#endif

/**
 * Interface allowing to early subscribe to the event <b>CreateLoginSession</b> step <b>After</b>, before the creation of the Login Session.
 *
 * <br><b>Role</b> : This unique entry point enables to postpone any additional subscription to any other event just
 * after the creation of the Login Session, i.e. when a safe transactional context is available. 
 * <br> All additional subscriptions have hence to be coded in the method <b>onAfterCreateLoginSession</b> of the subscriber class implementing the callback interface @href ENOVISessionEvent.
 *
 * <br>This interface replaces the deprecated interface ENOVIPlugin since V5R13. It is strongly recommended that you migrate your existing code before the next release to comply with the new rules.
 *
 * <br><b>Usage</b> : The implementation of ENOVIEventPlugin has to be an extension of a dummy late type :
 * <br>
 * <br> CATImplementClass( MyEventPluginCode, DataExtension, CATBaseUnknown, MyDummyLateType );
 * <br> #include "TIE_ENOVIEventPlugin.h"
 * <br> TIE_ENOVIEventPlugin( MyEventPluginCode );
 * <br>
 * <br> A new line is to be added to the dictionary :
 * <br> MyDummyLateType            ENOVIEventPlugin             libWhere_MyEventPluginCode_Is
 * <br>
 * <br> The only code 
 * <br>
 *
 */
class ExportedByGUIDVPMInterfaces ENOVIEventPlugin : public CATBaseUnknown 
{
    CATDeclareInterface;
    
    public:

    /**
     * Unique method of the plug-in interface called during the initialization of the Login Session (i.e. before any transactional context has been setup).
     * <br><b>Role</b> : Method in which the subscription to the event CreateLoginSession, step After, must be coded thanks to the interface @href ENOVIEventManager passed as argument.
     * <br>It is forbidden to perform other subscriptions or to raise events in any implementation of this method.
     * <br>See the CAA use case CAAVpiAutomaticSubscription of the framework CAAVPMInterfaces.edu for an example of such an implementation.
     */
    virtual HRESULT Init ( const ENOVIEventManager_var &iEventManager ) = 0;
};

#endif
