// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATICciGridPanel.h
//		Interface to manage a grid panel
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATICciGridPanel_H
#define CATICciGridPanel_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATICciRosette.h"
#include "CATLISTV_CATICciGridElemRefGroup.h"

class CATIMmiMechanicalFeature_var;
class CATISpecObject_var;
class CATICciGridElemRefGroup_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciGridPanel;
#else
extern "C" const IID IID_CATICciGridPanel ;
#endif

//------------------------------------------------------------------

/**
* Interface representing a composites grid panel.
* <b>Role</b>: Allows to manage a Grid Panel feature.
*/
class ExportedByCAACompositesItf CATICciGridPanel: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Returns the reference shell.
	* @param ospRefShell
	*    The specObject corresponding to the reference shell.
	*/
	virtual HRESULT GetSurface (CATIMmiMechanicalFeature_var& ospRefShell) = 0;

	/**
	* Sets the reference shell.
	* @param ispRefShell
	*    The specObject corresponding to the reference shell.
	*/
	virtual HRESULT SetSurface (const CATIMmiMechanicalFeature_var& ispRefShell) = 0;

	/**
	* Returns the draping direction.
	* @param oDrapingDirection
	*    The draping direction as boolean.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>FALSE</tt> when draping direction is opposite to the normal of the shell
	*		<li><tt>TRUE</tt> when draping direction is equal to the normal of the shell
	*   </ul>
	*/
	virtual HRESULT GetDrapingDirection (CATBoolean& oDrapingDirection) = 0;

	/**
	* Sets the draping direction.
	* @param iDrapingDirection
	*    The draping direction as boolean.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>FALSE</tt> when draping direction is opposite to the normal of the shell
	*		<li><tt>TRUE</tt> when draping direction is equal to the normal of the shell
	*   </ul>
	*/
	virtual HRESULT SetDrapingDirection (const CATBoolean& iDrapingDirection) = 0;

	/**
	* Returns all the groups of reference elements.
	* @param oListOfElemRefGroups
	*    The list of groups of reference elements
	*/
	virtual HRESULT GetElementRefGroups	(CATLISTV(CATICciGridElemRefGroup_var)& oListOfElemRefGroups) = 0;

	/**
	* Add a new group of reference elements.
	* @param ospGridElemRefGroup
	*    The created group of reference element.
	*/
	virtual HRESULT AddNewRefGroup (CATICciGridElemRefGroup_var&  ospGridElemRefGroup) = 0;
	
	/**
	* Returns the extended rosette of the grid panel.
	* @param ospRosette
	*    The CATICciRosette corresponding to the rosette.
	*/
	virtual HRESULT GetExtendedRosette (CATICciRosette_var& ospRosette) = 0;

	/**
	* Sets the extended rosette of the grid panel.
	* @param ispRosette
	*    The feature CATICciRosette to the rosette.
	*/
	virtual HRESULT SetExtendedRosette (const CATICciRosette_var& ispRosette) = 0;
		
	//--------------------------------------------------------------------------------------------------
	//------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
	//--------------------------------------------------------------------------------------------------
	/**
	* @deprecated V5R26 
	* Use @see #GetSurface(CATIMmiMechanicalFeature_var&) method instead.
	* Returns the reference shell.
	* @param ospRefShell
	*    The specObject corresponding to the reference shell.
	*/
	virtual HRESULT GetSurface (CATISpecObject_var& ospRefShell) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetSurface(CATIMmiMechanicalFeature_var&) method instead.
	* Sets the reference shell.
	* @param ispRefShell
	*    The specObject corresponding to the reference shell.
	*/
	virtual HRESULT SetSurface (const CATISpecObject_var& ispRefShell) = 0;

	/**
	* @deprecated V5R25
	* Please use:
	* CATICciRosette_var spRosette;
	* GridPanel->GetExtendedRosette (spRosette);
	* if(NULL_var != spRosette)
	* 	spRosette->GetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette); ...
	* Returns the rosette.
	* @param ospRosette
	*    The specObject corresponding to the rosette.
	*/
	virtual HRESULT GetRosette (CATISpecObject_var& ospRosette) = 0;

	/**
	* @deprecated V5R25
	* NOT USE FOR MODEL MIGRATED TO EXTENDED ROSETTE
	* Behavior for model migrated to extended rosette:
	* If an extended rosette exists with the axis system ispRosette in cartesian mode, it is setted to the grid panel, else a new extended rosette is created and setted.
	* Please use:
	* CATICciRosette_var spRosette;
	* GridPanel->GetExtendedRosette (spRosette);
	* if(NULL_var != spRosette)
	* 	spRosette->SetMainAxis (CATIMf3DAxisSystem_var& ospGeometricalRosette); ...
	* Sets the rosette.
	* @param ispRosette
	*    The feature corresponding to the rosette.
	*/
	virtual HRESULT SetRosette (const CATISpecObject_var& ispRosette) = 0;

};

CATDeclareHandler(CATICciGridPanel, CATBaseUnknown);

#endif
