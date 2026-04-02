#ifndef CATICciPliesGroup_H
#define CATICciPliesGroup_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciPliesGroup :
//   Interface to manage a group of plies.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciPliesGroup (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATICciRosette.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciPliesGroup;
#else
extern "C" const IID IID_CATICciPliesGroup;
#endif

class CATMathAxis;
class CATIMmiMechanicalFeature_var;

/**
 * Interface to Plies group.
 * <b>Role</b>: Allows to manage a Composites Plies group feature, obtained from a Composites ply.
 * @see CATICciPly
 */
class ExportedByCAACompositesItf CATICciPliesGroup : public CATBaseUnknown
{
    CATDeclareInterface;

public :

   /**
   * Gets the reference shell and draping direction of the group of plies.
   * @param oRefShell
   *  The Object corresponding to the reference shell.
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
   * Gets the list of sequences that are in the group of plies.
   * @param oListOfSequences
   *   The list of sequences (CATICciSequence).
   */
   virtual HRESULT GetSequences(CATLISTV(CATBaseUnknown_var)& oListOfSequences) = 0;

   /**
   * Sets the order of the sequences in the plies group.
   * <br> Note: All sequences of the plies group (see #GetSequences) must be in the list.
   * @param iListOfSequences
   *   The list of sequences (CATICciSequence) in the desired order
   */
   virtual HRESULT ReorderSequences( const CATLISTV(CATBaseUnknown_var)& iListOfSequences ) = 0;

    /**
	* Returns the extended rosette of the plies group.
	* @param ospRosette
	*    The CATICciRosette corresponding to the rosette.
	*/
	virtual HRESULT GetExtendedRosette (CATICciRosette_var& ospRosette) = 0;

	/**
	* Sets the extended rosette of the plies group.
	* @param ispRosette
	*    The feature CATICciRosette to the rosette.
	*/
	virtual HRESULT SetExtendedRosette (const CATICciRosette_var& ispRosette) = 0;
	
	//--------------------------------------------------------------------------------------------------
	//------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
	//--------------------------------------------------------------------------------------------------

	/**
    * @deprecated V5R26
	* Use @href #GetReferenceShell(CATIMmiMechanicalFeature_var&,CATBoolean&) method instead.
    * Gets the reference shell and draping direction of the group of plies.
    * @param oRefShell
    *  The specObject corresponding to the reference shell.
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
   * pCciPliesGroup->GetExtendedRosette (spRosette);
   * if(NULL_var != spRosette)
   *{
   *	CATIMf3DAxisSystem_var ospGeometricalRosette
   * 	spRosette->GetMainAxis (ospGeometricalRosette); 
   *	if(NULL_var != ospGeometricalRosette)
   *		ospGeometricalRosette->GetMathAxis(CATMathAxis& oMathAxis) ...
   *}
   * Gets the rosette of the group of plies.
   * @param oRosette
   *   The rosette.
   */
   virtual HRESULT GetRosette(CATMathAxis & oRosette) = 0;

};

CATDeclareHandler(CATICciPliesGroup, CATBaseUnknown);

#endif
