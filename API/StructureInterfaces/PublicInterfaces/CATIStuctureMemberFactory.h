//===================================================================
// COPYRIGHT Dassault Systemes 2012
//===================================================================
//
// CATIStuctureMemberFactory.h
// Define the CATIStuctureMemberFactory interface
//
//===================================================================
//
// Usage notes:
//   CATIStuctureMemberFactory : Interface to create structure objects.
//
//===================================================================
//
// Inheritance: IUnknown
//  
//===================================================================
//
// Historic:
//
//				  Author: Long Tang
//				  Date  : 07/07/2012
//
//===================================================================
#ifndef CATIStuctureMemberFactory_H
#define CATIStuctureMemberFactory_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

// System Framework
#include "IUnknown.h"

#include "CATIStructureMember.h"

extern "C" const IID IID_CATIStuctureMemberFactory;

//------------------------------------------------------------------

/**
 * Interface to create the structure member object.
 * <b>Role</b>: To create the structure object such as member.
 */
class CATIStuctureMemberFactory: public IUnknown
{
  public:
   
  /**
  * Create SR1 member from given two points
  * @param ipSectionDoc
  *		The member section profile document.
  * @param iAnchorPoint
  *   The current anchor point used to locate the section on the support object. 
	* @param iStartPoint
  *   The member starting point
	* @param iEndPoint
  *   The member ending point
	* @param ipMaterial
	*   The material of the member.
	* @param CATIStructureMember [out, CATIStructureMember#Release]
  *   The created member
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>E_INVALIDARG
  *     <dd>Invalid argument
  *     <dt>S_OK</dt>
  *     <dd>Member is created successfully</dd>
  *     <dt>E_FALSE</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
   virtual HRESULT CreateMember( const CATDocument *ipSectionDoc,
																 const CATUnicodeString& iAnchorPoint,
																 const double iAngle,
																 const CATMathPoint& iStartPoint,
																 const CATMathPoint& iEndPoint,
																 const CATIMaterialFeature* ipMaterial,
																 CATIStructureMember **oStructureMember )=0;

};

#endif
