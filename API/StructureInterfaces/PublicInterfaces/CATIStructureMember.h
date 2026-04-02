//===================================================================
// COPYRIGHT Dassault Systemes 2003+
//===================================================================
//
// CATIStructureMember.h
// Define the CATIStructureMember interface
//
//===================================================================
//
// Usage notes:
//   CATIStructureMember : Interface to manage the member information.
//
//===================================================================
//
// Inheritance: CATIStructureObject
//  
//===================================================================
//
// Historic:
//
//				  Author: Brian Yin
//				  Date  : 07/28/2003
//
//===================================================================
#ifndef CATIStructureMember_H
#define CATIStructureMember_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System Framework
#include "CATUnicodeString.h"

// StructureInterface Framework
#include "CATIAStrServices.h"
#include "CATIStructureObject.h"
//#include "CATIStructureFactory.h"

// KnowledgeInterfaces Framework
#include "CATICkeParm.h"

// ObjectModelerBase Framework
#include "CATDocument.h"

// Mathematics Framework
#include "CATMathAxis.h"
#include "CATMathPoint.h"
#include "CATMathVector.h"

// CATMatInterfaces Framework
#include "CATIMaterialFeature.h"

extern "C" const IID IID_CATIStructureMember;

//------------------------------------------------------------------

/**
 * Interface to manage the member information.
 * <b>Role</b>: To retrieve data from a member such as
 * member attributes, materials, start coordinates and 
 * end coordinates.
 */
class CATIStructureMember: public CATIStructureObject
{

  public:

  /**
  * Get the member section profile document.
  * @param CATDocument
  *   Returns the parameter defining the profile document 
	*   of the section.
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
	virtual HRESULT GetSection(CATDocument *&oSectionDoc)=0;

  /**
  * Set the member section profile document. It is only useful when creating a new 
	* member, it should not be used to repalce section of an existing member.
  * @param CATDocument
  *   Inputs the parameter defining the profile document 
	*   of the section.
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
	virtual HRESULT SetSection(const CATDocument *iSectionDoc)=0;

  /**
  * Replace the current member section profile.
  * @param CATDocument
  *   Inputs the parameter defining the profile document 
	*   of the section.
  * @param CATUnicodeString
  *   Inputs the parameter defining the section catalog path.
  * @param CATUnicodeString
  *   Inputs the parameter defining the section name.
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
	virtual HRESULT ReplaceMemberSection(CATDocument *iSectionDoc,
		                                   CATUnicodeString iCatalogPath,
																			 CATUnicodeString iSectionName)=0;

  /**
  * Get the member section name.
  * @param CATUnicodeString
  *   Returns the parameter defining the section name. 
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
	virtual HRESULT GetSectionName(CATUnicodeString &oName)=0;  

  /**
  * Get the member section family name.
  * @param CATUnicodeString
  *   Returns the parameter defining the section family name. 
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
	virtual HRESULT GetFamilyName(CATUnicodeString &oName)=0;

  /**
  * Get the member section catalog name.
  * @param CATUnicodeString
  *   Returns the parameter defining catalog name. 
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
	virtual HRESULT GetCatalogName(CATUnicodeString &oName)=0;

  /**
  * Get the member section profile type.
  * @param CATUnicodeString
  *   Returns the parameter defining the section profile type. 
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
	virtual HRESULT GetProfileType(CATUnicodeString &oName)=0;

  /**
  * Get the member start cutback type.
  * @param CatStrCutbackType 
  *   Returns the parameter defining member's start cutback type.
  * @param CATICkeParm [out, CATICkeParm#Release]
  *   Returns the parameter defining member's start cutback value. 
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
	virtual HRESULT GetStartCutback(CatStrCutbackType &oCutbackType, 
				                          CATICkeParm **oCutback)=0;

  /**
  * Get the member end cutback type.
  * @param CatStrCutbackType 
  *   Returns the parameter defining member's end cutback type. 
  * @param CATICkeParm [out, CATICkeParm#Release]
  *   Returns the parameter defining member's end cutback value. 
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
	virtual HRESULT GetEndCutback(CatStrCutbackType &oCutbackType, 
				                        CATICkeParm **oCutback)=0;

  /**
  * Get the member's current anchor point.
  * @param CatStrPlacementPoint 
  *   Returns the current anchor point used to locate the section on the support object. 
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
	virtual HRESULT GetCurrentSetPoint(CatStrPlacementPoint &oSetPoint)=0;

  /**
  * Get the member's current anchor point.
  * @param CATUnicodeString 
  *   Returns the current anchor point used to locate the section on the support object. 
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
	virtual HRESULT GetCurrentSetPoint(CATUnicodeString &oSetPoint)=0;

  /**
  * Set the member's current anchor point.
  * @param CATUnicodeString 
  *   Inputs the current anchor point used to locate the section on the support object. 
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
	virtual HRESULT SetCurrentSetPoint(const CATUnicodeString iSetPoint)=0;

  /**
  * Get the member's orientation.
  * @param CATICkeParm [out, CATICkeParm#Release] 
  *   Returns the orientation of the section on the support object. 
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
	virtual HRESULT GetAngle(CATICkeParm **oAngle)=0;

  /**
  * Set the member's orientation.
  * @param double 
  *   Inputs the orientation of the section on the support object. 
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
	virtual HRESULT SetAngle(const double iAngle)=0;

  /**
  * Get the member's section orientation.
  * @param CatStrMaterialOrientation 
  *   Returns the member's section orientation on the support object. 
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
	virtual HRESULT GetSectionOrientation(CatStrMaterialOrientation &oSectionOrientation)=0;

  /**
  * Set the member's section orientation.
  * @param CatStrMaterialOrientation 
  *   Inputs the parameter defining the member's section orientation on the support object. 
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
	virtual HRESULT SetSectionOrientation(CatStrMaterialOrientation &iSectionOrientation)=0;

  /**
  * Get the member's absolute orientation of the section.
  * @param CATMathVector 
  *   Returns the member's section absolute orientation on U. 
  * @param CATMathVector 
  *   Returns the member's section absolute orientation on V. 
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
	virtual HRESULT GetSectionOrientation(CATMathVector &oU, CATMathVector &oV)=0; 

  /**
  * Set the member's absolute orientation of the section.
  * @param CATMathVector 
  *   Inputs defining the member's section absolute orientation on U. 
  * @param CATMathVector 
  *   Inputs defining the member's section absolute orientation on V. 
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
	virtual HRESULT SetSectionOrientation(const CATMathVector iU, const CATMathVector iV)=0; 

  /**
  * Get the member's section side orientation.
  * @param CatStrMaterialOrientation 
  *   Returns the member's section side orientation on the support object. 
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
	virtual HRESULT GetSideOrientation(CatStrMaterialOrientation &oSideOrientation)=0;

  /**
  * Set the member's section side orientation.
  * @param CatStrMaterialOrientation 
  *   Inputs the parameter defining the member's section side orientation on the support object. 
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
	virtual HRESULT SetSideOrientation(CatStrMaterialOrientation &iSideOrientation)=0;

  /**
  * Get the location for the member's start point.
  * @param CATMathPoint 
  *   Returns the parameter defining the coordinates for the member's start point. 
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
	virtual HRESULT GetStartCoord(CATMathPoint &oStartMath)=0;

  /**
  * Set the location for the member's start point. It is only useful when creating a new 
	* member, it should not be used to change the end coordinate of an existing member.
  * @param CATMathPoint 
  *   Inputs the parameter defining the coordinates for the member's start point. 
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
	virtual HRESULT SetStartCoord(const CATMathPoint iStartMath)=0;

  /**
  * Get the location for the member's end point.
  * @param CATMathPoint 
  *   Returns the parameter defining the coordinates for the member's end point. 
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
	virtual HRESULT GetEndCoord(CATMathPoint &oEndMath)=0;

  /**
  * Set the location for the member's end point. It is only useful when creating a new 
	* member, it should not be used to change the end coordinate of an existing member.
  * @param CATMathPoint 
  *   Inputs the parameter defining the coordinates for the member's end point. 
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
	virtual HRESULT SetEndCoord(const CATMathPoint iEndMath)=0;

  /**
  * Get the offset for the member's start point.
  * @param CATICkeParm [out, CATICkeParm#Release]
  *   Returns the parameter defining the offset for the member's start point value. 
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
	virtual HRESULT GetStartOffset(CATICkeParm **oOffsetParm)=0; 

  /**
  * Get the offset for the member's end point.
  * @param CATICkeParm [out, CATICkeParm#Release]
  *   Returns the parameter defining the offset for the member's end point value. 
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
	virtual HRESULT GetEndOffset(CATICkeParm **oOffsetParm)=0; 
	
	/**
  * Set the member object's support.
  * @param CATISpecObject 
  *   inputs defining the member object's support. 
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
	virtual HRESULT SetMemberSupport(const CATISpecObject *iSupport)=0; 

  /**
  * Get the member support.
  * @param CATISpecObject [out, CATISpecObject#Release]
  *   Returns the member support as CATISpecObject.
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
	virtual HRESULT GetMemberSupport(CATISpecObject **oMemberSupport)=0; 

  /**
  * Get the member section axis.
  * @param CATMathAxis 
  *   Returns the member section axis defining the positioning of the member.
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
	virtual HRESULT GetMemberSectionAxis(CATMathAxis &oMemberSectionAxis)=0; 

	/**
  * Get the member section reference object.
  * @param CATISpecObject 
  *   Returns the member section reference object defining the orientation of the member.
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
	virtual HRESULT GetMemberReference(CATISpecObject **oMemberReference)=0; 

	/**
  * Set the member section reference object.
  * @param CATISpecObject 
  *   inputs reference object defining the member section orientation.
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
	virtual HRESULT SetMemberReference(const CATISpecObject *iMemberReference)=0; 

  /**
  * Flip the member's section profile orientation.
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
	virtual HRESULT Flip()=0;

  /**
  * Get the member's length.
  * @param double 
  *   Returns the value of member's length.
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
	virtual HRESULT GetMemberLength(double &oLength)=0;

	/**
  * Calculate the member object information. It is only useful when creating a new 
	* member, it is not necessary to use this method when modifying an existing member.
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
	virtual HRESULT Compute()=0; 


};
#endif

