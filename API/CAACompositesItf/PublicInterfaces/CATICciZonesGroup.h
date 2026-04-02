#ifndef CATICciZonesGroup_H
#define CATICciZonesGroup_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciZonesGroup :
//   Interface to manage a group of zones.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciZonesGroup (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATICciRosette.h"
#include "CATISpecObject.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciZonesGroup;
#else
extern "C" const IID IID_CATICciZonesGroup;
#endif

class CATMathAxis;

/**
 * Interface to Zone Group.
 * <b>Role</b>: Allows to manage a Composites Zone group feature that contains Zones features.
 * @see CATICciZone
 */
class ExportedByCAACompositesItf CATICciZonesGroup : public CATBaseUnknown
{
   CATDeclareInterface;

public :

   /**
   * Gets the reference shell and draping direction of the group of zones.
   * @param oRefShell
   * The specObject corresponding to the reference shell.
   * @param oDrapingDirection
   *    The draping direction as boolean.
   *    <ul>
   *      <li>FALSE when draping direction is opposite to the normal of the shell. 
   *      <li>TRUE when draping direction is equal to the normal of the shell. 
   *    </ul>
   */
   virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell,
      CATBoolean & oDrapingDirection) = 0;

   /**
   * Gets the list of zones that are in the group of zones.
   * @param oListOfZones
   *  The list of zones (CATICciZone).
   */
   virtual HRESULT GetZones(CATLISTV(CATBaseUnknown_var)& oListOfZones) = 0;

   /**
	* Returns the extended rosette of the zones group.
	* @param ospRosette
	*    The CATICciRosette corresponding to the rosette.
	*/
	virtual HRESULT GetExtendedRosette (CATICciRosette_var& ospRosette) = 0;

	/**
	* Sets the extended rosette of the zones group.
	* @param ispRosette
	*    The feature CATICciRosette to the rosette.
	*/
	virtual HRESULT SetExtendedRosette (const CATICciRosette_var& ispRosette) = 0;

	/**
	* @deprecated V5R26
	* Use @see #GetReferenceShell(CATIMmiMechanicalFeature_var&,CATBoolean&) method instead.
    * Gets the reference shell and draping direction of the group of zones.
   * @param oRefShell
   * The specObject corresponding to the reference shell.
   * @param oDrapingDirection
   *    The draping direction as boolean.
   *    <ul>
   *      <li>FALSE when draping direction is opposite to the normal of the shell. 
   *      <li>TRUE when draping direction is equal to the normal of the shell. 
   *    </ul>
   */
   virtual HRESULT GetReferenceShell(CATISpecObject_var & oRefShell,
      CATBoolean & oDrapingDirection) = 0;

   /**
    * @deprecated V5R25
   * Please use:
   * CATICciRosette_var spRosette;
   * pCciZonesGroup->GetExtendedRosette (spRosette);
   * if(NULL_var != spRosette)
   *{
   *	CATIMf3DAxisSystem_var ospGeometricalRosette
   * 	spRosette->GetMainAxis (ospGeometricalRosette); 
   *	if(NULL_var != ospGeometricalRosette)
   *		ospGeometricalRosette->GetMathAxis(CATMathAxis& oMathAxis) ...
   *}
   * Gets the rosette of the group of zones.
   * @param oRosette
   *  The rosette.
   */
   virtual HRESULT GetRosette(CATMathAxis & oRosette) = 0;


};

CATDeclareHandler(CATICciZonesGroup, CATBaseUnknown);

#endif
