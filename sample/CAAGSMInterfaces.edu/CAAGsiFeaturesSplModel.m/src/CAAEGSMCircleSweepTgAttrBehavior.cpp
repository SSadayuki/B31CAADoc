// COPYRIGHT Dassault Systemes 2005
//===================================================================
// CATIA ShapeDesign And Styling  
// ------------------------------------------------------------------
//
//CAAEGSMCircleSweepTgAttrBehavior
// Provide implementation to interface
//    CATIAttrBehavior
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//June 2006 : Creation CAA Sample 
//===================================================================

// MINC 
#include "CATCollec.h"
#include "CATLISTP_IID.h"

#include <CAAEGSMCircleSweepTgAttrBehavior.h>

// System Framework
#include "CATUnicodeString.h"       // To handle Unicode String 

// MechanicalModeler Framework
#include "CATIMfMonoDimResult.h"    // To put the CATIMfMonoDimResult IID int the CATBehaviorSpecs
#include "CATIMfBiDimResult.h"    // To put the CATIMfMonoDimResult IID int the CATBehaviorSpecs

// #include <iostream.h>

CATImplementClass(CAAEGSMCircleSweepTgAttrBehavior,CodeExtension,CATBaseUnknown,CAACircleSweepTg);

#include "TIE_CATIGeomExtendAttrBehavior.h"
TIE_CATIGeomExtendAttrBehavior(CAAEGSMCircleSweepTgAttrBehavior);

//========================================================================
// Constructor - Destructor
//========================================================================
CAAEGSMCircleSweepTgAttrBehavior::CAAEGSMCircleSweepTgAttrBehavior():CATBaseUnknown()
{
//    cout << "CAAEGSMCircleSweepTgAttrBehavior::CAAEGSMCircleSweepTgAttrBehavior" << endl;
}

CAAEGSMCircleSweepTgAttrBehavior::~CAAEGSMCircleSweepTgAttrBehavior()
{
//    cout << "CAAEGSMCircleSweepTgAttrBehavior::~CAAEGSMCircleSweepTgAttrBehavior" << endl;
}

//------------------------------------------------------------------------
//   GetRequestedBehavior
//------------------------------------------------------------------------
HRESULT CAAEGSMCircleSweepTgAttrBehavior::GetRequestedBehavior(const CATUnicodeString* ipAttrId, CATListBehaviorSpecs& oBehaviorList)
{
	// cout << "CAAEGSMCircleSweepTgAttrBehavior::GetRequestedBehavior" << endl;

	HRESULT exit = E_FAIL;
	if (NULL != ipAttrId)
	{
		// If the input String is equal to "CurveRef" which are the name 
		// of attributes then the Filter will be IID_CATIMfMonoDimResult
		// That is to say, we can Replace in  the attribute Feature  implementing the interface CATIMfMonoDimResult by another one 
		if (2 == ipAttrId->Compare("CurveRef"))
		{
			CATListPtrIID aMyFirstList;
			aMyFirstList.Append(&IID_CATIMfMonoDimResult);
			oBehaviorList.AppendListIID(aMyFirstList);
			exit = S_OK;
		}
		// If the input String is equal to "SurfaceSupport" which are the name 
		// of two attributes then the Filter will be IID_CATIMfBiDimResult
		// That is to say, we can Replace the attribute Feature implementing the interface CATIMfBiDimResult by another one
		else if (2 == ipAttrId->Compare("SurfaceSupport"))
		{
			CATListPtrIID aMyFirstList;
			aMyFirstList.Append(&IID_CATIMfBiDimResult);
			oBehaviorList.AppendListIID(aMyFirstList);
			exit = S_OK;
		}
	}
	return exit;
}
