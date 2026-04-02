// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATICciGridCell.h
//		Interface to manage a composites grid.
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATICciGridCell_H
#define CATICciGridCell_H

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATICciGridNode.h"
#include "CATLISTV_CATICciMaterialCache.h"
#include "CATListValCATICkeParm.h"


class CATICciGridCellProperties_var;

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciGridCell;
#else
extern "C" const IID IID_CATICciGridCell ;
#endif

//------------------------------------------------------------------

/**
* Interface representing a composites grid.
* <b>Role</b>: Allows to manage a Grid feature.
*/
class ExportedByCAACompositesItf CATICciGridCell: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Returns the name of the cell.
	* @param oName
	*    The name of the cell.
	*/
	virtual HRESULT GetName(CATUnicodeString & oName)=0;

	/**
	* Sets the name of the cell.
	* @param iName
	*    The name of the cell.
	*/
	virtual HRESULT SetName(const CATUnicodeString & iName)=0;

	/**
	* Returns the list of nodes defining  the cell.
	* @param oListOfNodes
	*    The list of nodes defining the cell.
	*/
	virtual HRESULT GetNodes(CATLISTV(CATICciGridNode_var) & oListOfNodes)=0;

	/**
	* Retrieves the stacking type i.e. thickness law or stacking sequence.
	* @param iVersion
	*	The version for which the type is requested.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*   </ul>
	* @param oType
	*	The returned stacking type.
	*	<br><b>Legal values</b>:
	*	<ul>
	*		<li><tt>0</tt> for thickness law
	*		<li><tt>1</tt> for stacking sequence
	*	</ul>
	*/
	virtual HRESULT GetStackingType(int iVersion,int & oType)=0;

	/**
	* Retrieves the list of materials defining the stacking sequence of the cell.
	* <br> Note: cell always stores a stacking sequence even for thickness law type. 
	* @param iVersion
	*	The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*	<ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*	</ul>
	* @param oMaterials
	*    The list of materials defining the staking sequence. Each element of the list responds to @href CATICciMaterialCache.
	*/
	virtual HRESULT GetMaterials(int iVersion,CATLISTV(CATICciMaterialCache_var)& oMaterials)=0;

	/**
	* Retrieves the list of orientations defining the stacking sequence of the cell.
	* <br> Note: cell always stores a stacking sequence even for thickness law type. 
	* @param iVersion
	*	The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*	</ul>
	* @param oOrientations
	*    The list of orientations defining the stacking sequence.
	*/
	virtual HRESULT GetOrientations(int iVersion,CATLISTV(CATICkeParm_var)& oOrientations)=0;

	/**
	* Sets the stacking type i.e. thicknes law or stacking sequence.
	* @param iVersion
	*   The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*   </ul>
	* @param iType
	*   The Stacking type.
	*   <br><b>Legal values</b>:
	*	<ul>
	*		<li><tt>0</tt> for thickness law
	*		<li><tt>1</tt> for stacking sequence
	*   </ul>
	*/
	virtual HRESULT SetStackingType(int iVersion,int iType)=0;

	/**
	* Sets the the stacking sequence of the cell.
	* <br> Note: cell always stores a stacking sequence even for thickness law type 
	* @param iVersion
	*   The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*   </ul>
	* @param iOrientations
	*    The list of orientations defining the staking sequence.
	* @param iMaterials
	*    The list of materials defining the staking sequence. Each element of the list MUST respond to @href CATICciMaterialCache.
	*/
	virtual HRESULT SetStackingSeq(int iVersion,const CATLISTV(CATICkeParm_var) &iOrientations, const CATLISTV(CATICciMaterialCache_var) &iMaterials)=0;

	/**
	* Sets the Cell properties. 
    * @param iVersion 
    *    Version 
    * @param iCellProperties
    *    CellProperties Object 
    */
    virtual HRESULT SetCellProperties (int iVersion, const CATICciGridCellProperties_var & iCellProperties) = 0;

	/**
	* Gets the Cell properties.
    * @param iVersion 
    *    Version 
    * @param oCellProperties
    *    CellProperties Object 
    */
    virtual HRESULT GetCellProperties (int iVersion, CATICciGridCellProperties_var & oCellProperties) = 0;
  
	
    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
	/**
	* @deprecated V5R26 
	* Use @see #GetMaterials(int,CATLISTV(CATICciMaterialCache_var)&) method instead.
	* Retrieves the list of materials defining the stacking sequence of the cell.
	* <br> Note: cell always stores a stacking sequence even for thickness law type. 
	* @param iVersion
	*	The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*	<ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*	</ul>
	* @param oMaterials
	*    The list of materials defining the staking sequence. Each element of the list responds to @href CATICciMaterialCache.
	*/
	virtual HRESULT GetMaterials(int iVersion,CATLISTV(CATISpecObject_var)& oMaterials)=0; 

	/**
	* @deprecated V5R26 
	* Use @see #GetOrientations(int, CATLISTV(CATICkeParm_var)&) method instead.
	* Retrieves the list of orientations defining the stacking sequence of the cell.
	* <br> Note: cell always stores a stacking sequence even for thickness law type. 
	* @param iVersion
	*	The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*	</ul>
	* @param oOrientations
	*    The list of orientations defining the stacking sequence.
	*/
	virtual HRESULT GetOrientations(int iVersion,CATLISTV(CATISpecObject_var)& oOrientations)=0;
    
	/**
	* @deprecated V5R26 
	* Use @see #SetStackingSeq(int, CATLISTV(CATICkeParm_var)& , CATLISTV(CATICciMaterialCache_var)&) method instead.
	* Sets the the stacking sequence of the cell.
	* <br> Note: cell always stores a stacking sequence even for thickness law type 
	* @param iVersion
	*   The version for which the list is requested.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>0</tt> for reference
	*		<li><tt>1</tt> for modified
	*		<li><tt>2</tt> for latest (i.e modified otherwise reference)
	*   </ul>
	* @param iOrientations
	*    The list of orientations defining the staking sequence.
	* @param iMaterials
	*    The list of materials defining the staking sequence. Each element of the list MUST respond to @href CATICciMaterialCache.
	*/
	virtual HRESULT SetStackingSeq(int iVersion,const CATLISTV(CATISpecObject_var) &iOrientations, const CATLISTV(CATISpecObject_var) &iMaterials)=0;

};

CATDeclareHandler(CATICciGridCell, CATBaseUnknown);

#endif
