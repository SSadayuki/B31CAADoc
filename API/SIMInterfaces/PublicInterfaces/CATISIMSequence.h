#ifndef CATISIMSequence_H
#define CATISIMSequence_H
// COPYRIGHT Dassault Systemes 2000
//===================================================================
// CATISIMSequence.h
// Define the CATISIMSequence interface
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */
#include "SIMItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfDouble.h"
#include "CATIAV5Level.h"
#ifdef CATIAV5R8
#include "CatSIMSequenceAddMode.h"
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySIMItfCPP IID IID_CATISIMSequence ;
#else
extern "C" const IID IID_CATISIMSequence;
#endif

class ExportedBySIMItfCPP CATISIMSequence: public CATBaseUnknown
  {
  CATDeclareInterface;
  
  public:

#ifdef CATIAV5R8
    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
     virtual HRESULT AddActions
      (CATListValCATBaseUnknown_var& iListActions,
       CatSIMSequenceAddMode iMode,
       CATListValCATBaseUnknown_var& oListActivities) = 0;

     virtual HRESULT GetLogicalContent
      (CATListValCATBaseUnknown_var& oListActions,
       CATListValCATBaseUnknown_var& oListActivities) = 0;

     virtual HRESULT GetTimeContent
      (CATListValCATBaseUnknown_var& oListActions,
       CATRawColldouble& oListStart,       
       CATRawColldouble& oListStop,
       CATRawColldouble& oListLocalDuration) = 0;

     virtual HRESULT IsActionValidForSequence
       (CATBaseUnknown_var iCandidateAction) = 0;

#else
    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
     virtual HRESULT GetLogicalContent
      (CATListValCATBaseUnknown_var& oListActions) = 0;

     virtual HRESULT GetTimeContent
      (CATListValCATBaseUnknown_var& oListAction,
       CATRawColldouble& oListStart,       
       CATRawColldouble& oListStop,
       CATRawColldouble& oListLocalDuration) = 0;

     virtual HRESULT IsActionValidForSequence
       (CATBaseUnknown_var iCandidateAction) = 0;

#endif
  };

CATDeclareHandler(CATISIMSequence,CATBaseUnknown);
  
#endif
