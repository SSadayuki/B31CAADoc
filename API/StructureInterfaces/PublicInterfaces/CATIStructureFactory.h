//===================================================================
// COPYRIGHT Dassault Systemes 2003+
//===================================================================
//
// CATIStructureFactory.h
// Define the CATIStructureFactory interface
//
//===================================================================
//
// Usage notes:
//   CATIStructureFactory : Interface to create structure objects.
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
//				  Date  : 10/22/2003
//
//===================================================================
#ifndef CATIStructureFactory_H
#define CATIStructureFactory_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System Framework
#include "IUnknown.h"

#include "CATIStructureMember.h"
#include "CATIStructurePlate.h"

extern "C" const IID IID_CATIStructureFactory;

//------------------------------------------------------------------

/**
 * Interface to create the structure object.
 * <b>Role</b>: To create the structure object such as plate and member.
 */
class CATIStructureFactory: public IUnknown
{
  public:

  /**
  * Create an empty structure member object.
  * @param CATIStructureMember [out, CATIStructureMember#Release]
  *   Returns the pointer to the created empty member object. 
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
  virtual HRESULT CreateMember(CATIStructureMember **oMember)=0;
																		
  /**
  * Creates an empty structure plate object.
  * @param CATIStructurePlate [out, CATIStructurePlate#Release]
	*		Returns the pointer to the created empty plate object. 
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
	virtual HRESULT CreatePlate(CATIStructurePlate **oPlate)=0;

};

#endif
