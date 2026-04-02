/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
#ifndef CATIMachinableFeatureProperties_IDL
#define CATIMachinableFeatureProperties_IDL

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMachinableFeatureProperties;
#else
extern "C" const IID IID_CATIMachinableFeatureProperties;
#endif

/**
* Interface to retrieve the activities associated to a feature.
* <br><b>Role</b>: CATIMachinableFeatureProperties has methods to retrieve 
* the activities machining a feature.
*/

class ExportedByMfgItfEnv CATIMachinableFeatureProperties : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
* Retrieves the activities associated to a feature. 
* @param oAssignedActivities
*   The list of the activities associated to a feature  
*/

    virtual HRESULT AssignedActivities (CATListValCATBaseUnknown_var& oAssignedActivities) const = 0 ;

/**
*   @nodoc
**/

    virtual HRESULT OrderedActivities (CATListValCATBaseUnknown_var& oOrderedActivities) const = 0 ;

/**
* Retrieves the MAFs associated to a feature. 
* @param oMAFs
*   The list of the MAFs associated to a feature  
*/

    virtual HRESULT AssignedMAFs (CATListValCATBaseUnknown_var& oMAFs) const = 0 ;
};

CATDeclareHandler(CATIMachinableFeatureProperties, CATBaseUnknown) ;

#endif

