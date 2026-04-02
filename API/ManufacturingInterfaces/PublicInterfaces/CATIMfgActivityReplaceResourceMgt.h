#ifndef CATIMfgActivityReplaceResourceMgt_H
#define CATIMfgActivityReplaceResourceMgt_H
//
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2005
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

//
// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// Forwards 
#include "CATInterfaceEvents.h"
#include "CATIContainer.h"
#include "CATISpecObject.h"

#include "CATListOfInt.h"
#include "CATListOfDouble.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATISpecObject.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgActivityReplaceResourceMgt ;
#else
extern "C" const IID IID_CATIMfgActivityReplaceResourceMgt ;
#endif

/**   
 * Interface to let CAA partner decide which resource should be put on an activity.
 */

class ExportedByMfgItfEnv CATIMfgActivityReplaceResourceMgt : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     *  Let CAA partner decide which resource should be put on an activity.
     *  This method gives the resource that has been selected by the user.
     *  The implementation should decide if it is the good one ot not.
     *  If the selected one is suitable then the returned value should be NULL_var
     *  or equal to the input value.
     *  Otherwise the ouput should be the correct resource to assign to the activity.
     *  @param ispBUResourceSelected
     *   The resource that is to be put on the current activity
     *  @param ospBUResourceToPutOnActivity : 
     *   The correct resource to put on the activity
     */
    virtual HRESULT GetResourceReplacementToDo (const CATBaseUnknown_var &ispBUResourceSelected,
                                                CATBaseUnknown_var       &ospBUResourceToPutOnActivity)=0;
    
};
CATDeclareHandler(CATIMfgActivityReplaceResourceMgt, CATBaseUnknown) ;
#endif
