#ifndef CATISIMAction_H
#define CATISIMAction_H
// COPYRIGHT Dassault Systemes 2000
//===================================================================
// CATISIMAction.h
// Define the CATISIMAction interface
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "SIMItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATEventSubscriber.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySIMItfCPP IID IID_CATISIMAction ;
#else
extern "C" const IID IID_CATISIMAction;
#endif

/**
* Describe the functionality of your interface here
* <p>
* Using this prefered syntax will enable mkdoc to document your class.
*/
class ExportedBySIMItfCPP CATISIMAction: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public:
    
    // Locking the Sequence Duration
    // =============================
    // + Locked : the Duration of the Action by the application is actual
    // unvariable the same for all the Sequences referring to it
    // + Unlocked : the Durztion of the Action can be scaled in Sequences

    enum DurationLockMode{Locked, Unlocked};


    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
    virtual HRESULT AddWatchOut
      (CATBaseUnknown* iActivity) = 0; 
    
    virtual HRESULT RemoveWatchOut
      (CATBaseUnknown* iActivity) = 0; 
    
    virtual HRESULT GetDuration
      (double& oDuration) = 0; 

    // Test that the Action can be inserted in a partricular Sequence
    virtual HRESULT TestSequenceInsertion
      (CATBaseUnknown* iCandidateSequence, int& oInsertionIsValid) = 0; 
    
    virtual HRESULT UpdateWatchOut
      () = 0; 

    virtual HRESULT GetDurationChangeNotifier
      (CATEventSubscriber*& oEventSubscriber ) = 0; 
    
    virtual HRESULT GetLockMode
      (DurationLockMode& oMode) = 0; 

    // For Unlock Activities only
    // Only valid for Unlock moded Actions
    // The corresponding activities in the Sequence have their duration recomputed
    // w.r.t. the changes of duration of the Action they refer to
    // To remove this mode set Sequence to NULL
    virtual HRESULT SetAutoDuration       
      (CATBaseUnknown* iSequence)= 0; 

    // Only valid for Unlock moded Actions
    virtual HRESULT TestAutoDuration       
      (int& oAutoDurationActive) = 0;

    /** Get the object to see in the navigate tree. By default, the adapter
      *will return the object associated to the action.
      */
    virtual HRESULT GetNavigateExtendedObject(CATBaseUnknown** opBU)=0;

};

CATDeclareHandler(CATISIMAction,CATBaseUnknown);

#endif
