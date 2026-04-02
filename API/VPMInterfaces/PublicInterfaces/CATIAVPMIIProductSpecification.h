// -*-C++-*-

#ifndef CATIAVPMIIProductSpecification_h
#define CATIAVPMIIProductSpecification_h

// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
// System
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObject.h"
#include "CATCORBABoolean.h"
#include "CATLISTV_CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMIIProductSpecification;
#else
extern "C" const IID IID_CATIAVPMIIProductSpecification;
#endif

//------------------------------------------------------------------
/**
 * Interface to retrieve ProductSpecs that qualify an item instance.
 * <b>Role</b>: The CATIAVPMIIProductSpecification enables you to:
 * <ul>
 *   <li>Retrieves the Product Specifications for which an IIs effectivity is true</li>
 *   <li>This interface is implemented on the ItemInstance entity</li>
 * </ul>
 */

class ExportedByGUIDVPMInterfaces CATIAVPMIIProductSpecification : public CATBaseUnknown 
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================
	   /**
		 * Retrieve the Product Specifications under which this Item Instance is true.
		 * @param iListPS
		 *   List of Product Specifications to check for this Item Instance.
		 * @param oListPS
		 *   List of Product Specifications for which the Item Instance is true.
		 *   @return S_OK in case of success,
		 *           E_FAIL in case of error.
	   */
	   virtual HRESULT get_PSTrueForII(CATLISTV(CATBaseUnknown_var) & iListPS,  CATLISTV(CATBaseUnknown_var) & oListPS)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(CATIAVPMIIProductSpecification, CATBaseUnknown);

#endif

