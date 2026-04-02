//===================================================================
// COPYRIGHT Dassault Systemes 2003+
//===================================================================
//
// CATIStructureObject.h
// Define the CATIStructureObject interface
//
//===================================================================
//
// Usage notes:
//   CATIStructureObject : Common interface to manage the structure 
//                         object (Plates/Memebers) information.
//
//===================================================================
//
// Inheritance: IUnknown
//  
//===================================================================
//
// Historic:
//
//				  Author: Brian Yin
//				  Date  : 07/28/2003
//
//===================================================================
#ifndef CATIStructureObject_H
#define CATIStructureObject_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System Framework
#include "IUnknown.h"
#include "CATUnicodeString.h"

// KnowledgeInterfaces Framework
#include "CATICkeParm.h"

// CATMatInterfaces Framework
#include "CATIMaterialFeature.h"

extern "C" const IID IID_CATIStructureObject;

//------------------------------------------------------------------

class CATListValCATUnicodeString;
/**
 * Interface to manage the structure object information.
 * <b>Role</b>: To retrieve data from a structure object 
 * such as attributes and materials.
 */
class CATIStructureObject: public IUnknown
{

  public:

  /**
  * Get the list attribute names of a structure object.
  * @param CATListValCATUnicodeString
  *   Returns the list of attribute names of a structure object.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
	virtual HRESULT ListAttributeName(CATListValCATUnicodeString **oListOfAttributeNames)=0; 

  /**
  * Get the structure object attribute value.
  * @param CATUnicodeString 
  *   Input the structure object attribute name. 
  * @param CATICkeParm [out, CATICkeParm#Release]
  *   Returns the parameter defining structure object attribute value. 
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
	virtual HRESULT GetAttribute(CATUnicodeString &ipName,   
				                       CATICkeParm **opParm)=0;

  /**
  * Get the material of a structure object.
  * @param CATIMaterialFeature [out, CATIMaterialFeature#Release]
  *   Returns the parameter defining the structure object material. 
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
	virtual HRESULT GetMaterial(CATIMaterialFeature **oMaterial)=0;
	 
  /**
  * Set the material of a structure object.
  * @param CATIMaterialFeature [in, CATIMaterialFeature#Release]
  *   Specifies parameter defining the structure object material. 
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
	virtual HRESULT SetMaterial(const CATIMaterialFeature *iMaterial)=0;

};
#endif


