#ifndef CATIPrtContainer_h
#define CATIPrtContainer_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"
class CATIContainer_var;
class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIPrtContainer;
#else
extern "C" const IID IID_CATIPrtContainer;
#endif

/**
 * Interface to retrieve the MechanicalPart feature.
 * <b>Role</b>:The MechanicalPart feature is a mechanical feature which is
 * contained in the specification container of a Part document.  In the 
 * specification tree, its name is Part.
 * <br><br>This interface is implemented by the specification container 
 * that you retrieve by two means:
 * <ul>
 * <li>@href CATIContainerOfDocument#GetSpecContainer </li>
 * <li>@href CATInit#GetRootContainer </li>
 * </ul>
 * To manage the MechanicalPart feature use the @href CATIPartRequest 
 * and the @href CATIPrtPart interfaces.
 */
class ExportedByMecModItfCPP CATIPrtContainer : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the MechanicalPart feature.
   */
  virtual CATISpecObject_var GetPart() = 0;

  /** @nodoc */
  virtual CATIContainer_var  GetMechanicalContainer() = 0;

 /**
	* Returns the geometrical container.
	*/
  virtual CATIContainer_var  GetGeometricContainer()  = 0;

  /** @nodoc */
  virtual CATIContainer_var  GetSolidContainer() = 0;

  /** @nodoc */
  virtual CATIContainer_var  GetBrepContainer () = 0;
};

CATDeclareHandler(CATIPrtContainer,CATInterfaceObject);

#endif
