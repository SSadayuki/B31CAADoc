// COPYRIGHT Dassault Systemes 2008
//===================================================================
// CATIMmiPrtContainer.h
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiPrtContainer_H
#define CATIMmiPrtContainer_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
class CATICGMContainer_var;
class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiPrtContainer;
#else
extern "C" const IID IID_CATIMmiPrtContainer ;
#endif

//------------------------------------------------------------------
/**
 * Interface to retrieve the MechanicalPart feature.
 * <b>Role</b>:The MechanicalPart feature is a mechanical feature which is
 * contained in the specification container of a 3D Shape.  In the 
 * specification tree, its name is Part.
 * <br><br>This interface is implemented by the specification container, "CATPrtCont", 
 * that you retrieve using CATIPLMNavRepRefReference#RetrieveApplicativeContainer.
 * To manage the MechanicalPart feature use the @href CATIPartRequest 
 * and the @href CATIMmiUsePrtPart interfaces.
 */
class ExportedByCATMecModUseItf CATIMmiPrtContainer: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Returns the MechanicalPart feature.
 * @param oPart
 * The mechanical part.
 * @return
 * The error code.
 * <br><b>Legal values</b>: <ul>
 * <li><tt>S_OK</tt>: The part is retrieved </li>
 * <li><tt>E_FAIL</tt>: The part could not be accessed.</li></ul>
 */
  virtual HRESULT GetMechanicalPart( CATIMmiMechanicalFeature_var & oPart ) = 0;

  /**
 * Returns the geometrical container.
 * @param oGeocont
 * The geometrical container.
 * @return
 * The error code.
 * <br><b>Legal values</b>: <ul>
 * <li><tt>S_OK</tt>: The container is retrieved </li>
 * <li><tt>E_FAIL</tt>: The container could not be accessed.</li></ul>
  */
  virtual HRESULT GetGeometricalContainer( CATICGMContainer_var & oGeocont )  = 0;
};
CATDeclareHandler(CATIMmiPrtContainer,CATInterfaceObject);
#endif
