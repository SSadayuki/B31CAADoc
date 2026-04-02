//===================================================================
// COPYRIGHT Dassault Systemes 2012
//===================================================================

#ifndef CATIMfgGeometryDefinition_H
#define CATIMfgGeometryDefinition_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATString.h"


extern ExportedByMfgItfEnv  IID IID_CATIMfgGeometryDefinition ;

/**
* Interface dedicated to geometry definition.
*
* <br><b>Role</b>: This interface offers service to set or get the geometries.<br>
* <p>
* The methods are consider geometries from the given type.
* This iType parameter corresponds to a key word ending the wanted interface. (CATIM3xiType, CATIMfgiType or CATIiType)
* For example iType = "Parts" to consider the parts geometries (for CATIMfgParts)
* iType = "Checks" to consider the checks geometries (for CATIMfgChecks)
* iType = "MultiAxisPart" to consider the parts geometries for multi-axis operation
* iType = "FirstGuideLine"
* iType = "FirstStopLine"
* iType = "SecondGuideLine"
* iType = "SecondStopLine"
* iType = "AuxGuidingCurves"
* iType = "FirstRelimitingElement"
* iType = "SecondRelimitingElement"
* iType = "MultiAxisRefPoint"
* iType = "MultiAxisStartElement"
* iType = "MultiAxisEndElement"
* iType = "GuidingCurves"
* iType = "Drives"
* iType = "RoughStock"
* iType = "PartBottom"
* iType = "RelimitingFace"
* iType = "RelimitingPlane"
* iType = "EndingPoint"
* iType = "StartingPoint"
* iType = "Island"
* iType = "SetupStocks" to consider the stock of the PO
* iType = "SetupDesigns" to consider the design part of the PO
*/
class ExportedByMfgItfEnv CATIMfgGeometryDefinition : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Adds a geometry.
	* @param iType		
	*		Type of the geometry to add.
	* @param iReference	
	*		Geometry to add.
	* @param iProduct		
	*		Product to whech belongs the geometry to add.
	* @param iVerify		
	*		<br><b>Legal values</b>: The parameter can be
	*		<dl>
	*     <dt><tt>0</tt>   <dd>Add the geometry without any checks. (default value)
	*     <dt><tt>1</tt>   <dd>Add the geometry only if it is not already in the geometries list.
	*     </dl>
	* @param iPostion		
	*		Position at which add the geometry in the geometries list. (default value = 0)
	*/
	virtual HRESULT AddGeometry(const CATString & iType, const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, int iVerify = 0, int iPosition=0) = 0;

	/**
	* Remove geometries of the given type.
	* @param iType		
	*		Type of the geometries to remove.
	*/
	virtual HRESULT RemoveGeometries(const CATString & iType) = 0;

};

CATDeclareHandler(CATIMfgGeometryDefinition, CATBaseUnknown);

//-----------------------------------------------------------------------

#endif
