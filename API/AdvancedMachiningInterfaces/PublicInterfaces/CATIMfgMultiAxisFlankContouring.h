#ifndef CATIMfgMultiAxisFlankContouring_h
#define CATIMfgMultiAxisFlankContouring_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//=================================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMfgAMGItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATTopDefine.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgAMGItfEnv IID IID_CATIMfgMultiAxisFlankContouring;
#else
extern "C" const IID IID_CATIMfgMultiAxisFlankContouring;
#endif

/**
 * Interface dedicated to Multi-Axis Flank Contouring Object.
 * <b>Role</b>:
 * This inferface offers services to populate geometric inputs of Multi-Axis Flank Contouring activity.<br>
 *
 */

class ExportedByCATMfgAMGItfEnv CATIMfgMultiAxisFlankContouring : public CATBaseUnknown
{
	CATDeclareInterface;
	
	public:

   /**
	* Sets the Part geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a Part by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	* @param iPosition
	*		the position where to set the referenced geometry in the Parts list 
	*		(optional: if not set, elements are added at the end of the list)
	*/
	virtual HRESULT SetPartsGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct, const int & iPosition = 0) = 0;

   /**
	* Resets all the Parts geometry of the operation.
	*/
	virtual HRESULT RemovePartsGeometries () = 0;

   /**
	* Sets the Drive geometry of the operation.
	*		Faces set as Drives must be sorted from the first to machine to the last one
	*
	* @param iReference
	*		the geometry referenced as a Drive by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	* @param iPosition
	*		the position where to set the referenced geometry in the Drives list 
	*		(optional: if not set, elements are added at the end of the list)
	*/
	virtual HRESULT SetDrivesGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct, const int & iPosition = 0) = 0;

   /**
	* Resets all the Drives geometry of the operation.
	*/
	virtual HRESULT RemoveDrivesGeometries () = 0;

   /**
	* Sets the Check geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a Check by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	* @param iPosition
	*		the position where to set the referenced geometry in the Checks list 
	*		(optional: if not set, elements are added at the end of the list)
	*/
	virtual HRESULT SetChecksGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct, const int & iPosition = 0) = 0;

   /**
	* Resets all the Checks geometry of the operation.
	*/
	virtual HRESULT RemoveChecksGeometries () = 0;

   /**
	* Sets the single first relimiting element geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a first relimiting element by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*
	* Returns S_FALSE if a geometry is already defined 
	*/
	virtual HRESULT SetFirstRelimitingElementGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets the first relimiting element geometry of the operation.
	*/
	virtual HRESULT RemoveFirstRelimitingElementGeometry () = 0;
	
   /**
	* Sets the single second relimiting element geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a second relimiting element by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*
	* Returns S_FALSE if a geometry is already defined 
	*/
	virtual HRESULT SetSecondRelimitingElementGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets the second relimiting element geometry of the operation.
	*/
	virtual HRESULT RemoveSecondRelimitingElementGeometry () = 0;

   /**
	* Sets the optional Reference Point geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as Reference Point element by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*
	* Returns S_FALSE if a geometry is already defined 
	*/
	virtual HRESULT SetReferencePointGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets the Reference Point geometry of the operation.
	*/
	virtual HRESULT RemoveReferencePointGeometry () = 0;

	/**
	* Modifies the orientation of the Drive with regards to its geometry.
	* <br>The system will automatically initialize the 'Side to mill' arrow based on orientation stored on first Face provided as Drive element.
	* This orientation stored on CATCell itself is naturally defined outer the material in case of solid faces but stays unpredictable in case of wireframe surfaces.
	* @param iNewOrientation
	*   The new relative orientation.
	*/
	virtual HRESULT SetDrivesOrientation (CATOrientation iNewOrientation) = 0 ;
	
	/**
	* Sets the 'Tool Axis' geometry to the operation.
	* <br> This will also force the definition mode of this direction as 'Selection'.
	* @param iReference
	*		the geometry referenced as Tool Axis by the operation
	*
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
    virtual HRESULT SetToolAxisGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;	
	
	/**
	* Resets the 'Tool Axis' geometry of the operation.
	* <br> This will also reset the definition mode of this direction as 'Manual'.
	*/
	virtual HRESULT RemoveToolAxisGeometry () = 0 ;

   /**
	* Sets the Local Modifications parameters of a Drive.
	*
	* @param iPosition
	*		the position of Drive where to set Local Modifications (start to idx 1)
	* @param iOffset
	*		the additional offset on current Drive
	* @param iGuidance
	*		the local tool axis strategy
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt><tt>1</tt>  <dd> keep global axis strategy
	*     <dt><tt>2</tt>  <dd> Tanto Fan 
	*     <dt><tt>3</tt>  <dd> Combin Tanto
	*     <dt><tt>4</tt>  <dd> Combin Parelm 
	*     <dt><tt>5</tt>  <dd> Mixed Combin
	*     <dt><tt>6</tt>  <dd> Fixed Axis 
	*     <dt><tt>7</tt>  <dd> Normal To Part
	*     <dt><tt>8</tt>  <dd> Tanto
	*   </dl>
	* @param iEnable4X
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt><tt>0</tt>  <dd> Deactivate 4 Axis constraint
	*     <dt><tt>1</tt>  <dd> Activate 4 Axis constraint
	*   </dl>
	* @param iStartCondition
	*		the restarting condition from previous Drive to current one
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt><tt>1</tt>  <dd> Auto 
	*     <dt><tt>2</tt>  <dd> Left
	*     <dt><tt>3</tt>  <dd> Right 
	*     <dt><tt>4</tt>  <dd> Forward
	*   </dl>
	* @param iStopCondition
	*		the stopping condition between current Drive and next one
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt><tt>1</tt>  <dd> Auto 
	*     <dt><tt>2</tt>  <dd> To
	*     <dt><tt>3</tt>  <dd> On 
	*     <dt><tt>4</tt>  <dd> Past
	*     <dt><tt>5</tt>  <dd> Tangent to Drives
	*   </dl>
	* @param iToolSide
	*		the tool side on current Drive
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt><tt>1</tt>  <dd> Same as first Drive 
	*     <dt><tt>2</tt>  <dd> Swap
	*     <dt><tt>3</tt>  <dd> On
	*   </dl>
	*
	* Returns E_Fail if a Drive is not already defined for given Position 
	*/
	virtual HRESULT SetDrivesGeometryWithLocalModification (const CATBaseUnknown_var & ihReference, const CATBaseUnknown_var & ihProduct, const int & iPosition, 
												const double & iOffset, const int & iGuidance, const int & iEnable4X,
												const int & iStartCondition, const int & iStopCondition, const int & iToolSide)	= 0;
};
CATDeclareHandler (CATIMfgMultiAxisFlankContouring, CATBaseUnknown);
#endif
