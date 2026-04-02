#ifndef CATMecModAutoServices_H_ 
#define CATMecModAutoServices_H_ 

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//
// CATMecModAutoServices:
// global services involved in mechanical modeler automation impl.
//
//====================================================================
// Usage notes: Automation implementations
//

#include "IUnknown.h"
#include "MecModItfCPP.h" 

#include "CATVariant.h"

class CATListValCATISpecObject_var; 
class CATListValCATBaseUnknown_var; 
class CATIABase;
class CATIAReference; 
class CATISpecObject_var; 
class CATILinkableObject_var; 
class CATIAPart_var; 

/**
 * Retrieves an object in a given spec list, an index has been given. 
 * The index can be either numeric (short/long/unsigned short/unsigned long)
 * either name-based (key defined thru CATIAlias)
 * The result is  the actual numeric index of the required element
 * ( Automation context )
 */
/** @nodoc */
ExportedByMecModItfCPP HRESULT GetSpecObjectByVariantIndex(
		const CATListValCATISpecObject_var* 	iTargetList,
                const CATVariant			iIndex,
		long&					oNumIndex);
/** @nodoc */
ExportedByMecModItfCPP HRESULT GetSpecObjectByVariantIndex(
		const CATListValCATBaseUnknown_var*	iTargetList,
                const CATVariant			iIndex,
		long&					oNumIndex);

/**
 * Generates or retrieves a Reference from a feature.
 * @param iSpec
 * The input feature
 * @param oReference
 * The output reference
 */
ExportedByMecModItfCPP HRESULT GetReferenceFromSpec(CATISpecObject_var &iSpec,
                                                    CATIAReference *&oReference);

/**
 * Generates or retrieves a feature from a reference.
 * @param iReference
 * The input reference
 * @param oSpec
 * The output feature
 */
ExportedByMecModItfCPP HRESULT GetSpecFromReference(CATIAReference *iReference,
                                                    CATISpecObject_var &oSpec);

/**
 * @nodoc
 * <br>Use the <tt>CreateReferenceFromObject</tt> method of the CATIAPart interface.
 * Generates or retrieves a Reference from Geometry, BREP feature or Select Object.
 * @param iTheObject
 * The input object
 * @param oReference
 * The output reference
 */
ExportedByMecModItfCPP HRESULT GetReferenceFromObject(CATBaseUnknown_var &iTheObject,
                                                      CATIAReference *&oReference);

/**
 * Generates or retrieves an object from a Reference on Geometry, BREP feature or Select Object.
 * @param iRef
 * The input reference
 * @param oObject
 * The output object
 */
ExportedByMecModItfCPP HRESULT GetObjectFromReference(CATIAReference *iRef,
                                                      CATBaseUnknown_var &oObject);


/**
 * Creates a reference on a NULL specification.
 * @param iPart
 * The part where to create the reference to a null specification
 * @param oRef
 * The null specification
 */
ExportedByMecModItfCPP HRESULT GetNullReference(CATIAPart_var &iPart,
                                                CATIAReference *&oRef);

/**
 * Retrieves a valid CATIABase on feature.
 * <br>DO NOT USE  iSpec->QueryInterface(CATIABase::ClassID(),(void**) &oRef)
 * @param iSpec
 * The feature you want as a CATIAReference
 * @param oRef
 * The CATIAReference corresponding to the feature iSpec
 */
ExportedByMecModItfCPP HRESULT GetCATIABaseAccessFromSpec(const CATISpecObject_var &iSpec,
                                                          CATIABase **oRef);

/**
 * Retrieves a valid CATIABase on feature.
 * <br>DO NOT USE iSpec->QueryInterface(CATBaseDispatch::ClassID(),(void**) &oRef)
 * @param iSpec
 * The feature you want as a CATBaseDispatch
 * @param oRef
 * The CATBaseDispatch corresponding to the feature iSpec
 */
ExportedByMecModItfCPP HRESULT GetCATIABaseAccessFromSpec(const CATISpecObject_var& iSpec,
                                                          CATBaseDispatch** oRef);


#endif
