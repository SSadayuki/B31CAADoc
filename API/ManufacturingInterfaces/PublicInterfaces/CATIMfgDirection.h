#ifndef CATIMfgDirection_H
#define CATIMfgDirection_H

//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathDirection.h"
#include "CATUnicodeString.h"
#include "CATMathTransformation.h"
#include "CATIMfgActivity.h"

class CATListPtrCATGeometry;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgDirection;
#else
extern "C" const IID IID_CATIMfgDirection;
#endif

/**   
 * Interface dedicated to machining direction management.
 * <b>Role</b>: This interface offers services mainly to manage the MfgDirection object <br>
 */

class ExportedByMfgItfEnv CATIMfgDirection : public CATBaseUnknown
{
  CATDeclareInterface;

  public:
	
    /**
	* Update the results of the Machining Direction object.
	*/
    virtual HRESULT Evaluate ()=0;

	/**
	* Gets the Direction of the Machining Direction Object.
    * @param oDirection
	*  The mathematical direction of the object
	*/
    virtual HRESULT GetDirection (CATMathDirection &oDirection)=0;

	/**
	* Gets the definition mode of the Machining Direction Object.
    * @param oString
	*  The mode
	*/    
	virtual HRESULT GetMode (CATUnicodeString& oString) const=0;
	
	/**
	* Gets the parameter defining if the Machining Direction has been modified or not.
    * @param oFlag
	*  The flag to get the modification status
	*/    
	virtual HRESULT GetFlagModif(int& oFlag)=0;

	/**
	* Gets the geometry associated to the Machining Direction Object.
    * @param oElement
	*  The associated geometry
	*/    
	virtual HRESULT GetSelectedGeometry (CATBaseUnknown_var& oElement)=0;

	/**
	* Sets the direction of the Machining Direction Object.
    * @param iDirection
	*  The mathematic direction
	* @param iNotify
	*  The notification
	*/
    virtual HRESULT SetDirection (const CATMathDirection &iDirection, int iNotify=1)=0;

	/**
	* Sets the definition mode of the Machining Direction Object.
    * @param String
	*  The mode
	*/    
	virtual HRESULT SetMode (const CATUnicodeString& iString)=0;

	/**
	* Sets the modification flag of the Machining Direction Object.
    * @param iFlag
	*  The flag
	*/
    virtual HRESULT SetFlagModif(const int& iFlag)=0;
	
	/**
	* Sets the geometry associated to the Machining Direction Object.
    * @param iElement
	*  The geometric element
	* @param iProduct
	*  The belonging product
	*/    
	virtual HRESULT SetSelectedGeometry (const CATBaseUnknown_var& iElement,
		                                 const CATBaseUnknown_var& iProduct=NULL_var)=0;
	/**
	* Sets the selection mode to Normal To Bottom.
    * @param iMode
	*  The mode
	*/
	virtual HRESULT SetSelectionModeNormalBottom(const int iMode)=0;
	
	/**
	* Sets the selection mode to Selection.
    * @param iMode
	*  The mode
	*/    
	virtual HRESULT SetSelectionModeSelection(const int iMode)=0;

	/**
	* Sets the selection mode to Normal To View.
    * @param iMode
	*  The mode
	*/    
	virtual HRESULT SetSelectionModeNormalView(const int iMode)=0;
	
	/**
	* Sets selection mode to Two Rotations.
    * @param iMode
	*  The mode
	*/    
	virtual HRESULT SetSelectionMode2Rotations (const int iMode)=0;

	/**
	* Sets selection mode to Manual.
    * @param iMode
	*  The mode
	*/
    virtual HRESULT SetSelectionModeManual (const int iMode)=0;

    /**
	* Sets semection mode to Axis.
    * @param iMode
	*  The mode
	*/
	virtual HRESULT SetSelectionModeAxis (const int iMode)=0;
    
	/**
	* Sets seleciton mode to Point In the View.
    * @param iMode
	*  The mode
	*/
	
	virtual HRESULT SetSelectionModePtView (const int iMode)=0;

	/**
	* Gets Normal To Bottom selection mode.
    * @param oMode
	*  The mode
	*/
    
	virtual HRESULT GetSelectionModeNormalBottom(int& oMode)=0;
    
	/**
	* Gets Selection selection mode.
    * @param oMode
	*  The mode
	*/

	virtual HRESULT GetSelectionModeSelection(int& oMode)=0;

    /**
	* Gets Normal To View selection mode.
    * @param oMode
	*  The mode
	*/

	virtual HRESULT GetSelectionModeNormalView(int& oMode)=0;
    
	/**
	* Gets Two Rotations selection mode.
    * @param oMode
	*  The mode
	*/

	virtual HRESULT GetSelectionMode2Rotations (int& oMode)=0;

	/**
	* Gets Manual selection mode.
    * @param oMode
	*  The mode
	*/

    virtual HRESULT GetSelectionModeManual (int& oMode)=0;
    
	/**
	* Gets Axis selection mode.
    * @param oMode
	*  The mode
	*/

	virtual HRESULT GetSelectionModeAxis (int& oMode)=0;
    
	/**
	* Gets Pont in The View selection mode.
    * @param oMode
	*  The mode
	*/
	
	virtual HRESULT GetSelectionModePtView (int& oMode)=0;

	/**
	* Machining machining direction.
	*/

    virtual HRESULT InvertDirection ()=0;	
	
	/**
	* Sets Machining Direction origin.
    * @param iPoint
	*  The mathematical point
	*/
    
	virtual HRESULT SetOrigin(const CATMathPoint& iPoint)=0;
    
	/**
	* Gets Machining Direction origin.
    * @param oPoint
	*  The mathematical point
	*/
	
	virtual HRESULT GetOrigin(CATMathPoint &oPoint)=0;
    
	/**
	* Gets Machining Direction Vector.
    * @param oDirection
	*  The vector
	*/

	virtual HRESULT GetVector(CATMathDirection &oDirection)=0;

	/**
	* Sets Machining Direction Vector.
    * @param iDirection
	*  The vector
	*/
    
	virtual HRESULT SetVector(const CATMathDirection &iDirection)=0;

	/**
	* Gets Machining Direction Vector.
    * @param oCoordX
	*  The X coordinate of the vector
    * @param oCoordY
	*  The Y coordinate of the vector
    * @param oCoordZ
	*  The Z coordinate of the vector
	*/
	
	virtual HRESULT GetVector (double & oCoordX, double & oCoordY, double & oCoordZ)=0;
	
	/**
	* Resets vector definition.
	*/
	
	virtual HRESULT NullifyVector ()=0;

	/**
	* Sets Machining Direction transformation matrix.
    * @param iTransformation
	*  The transformation
	*/
    
	virtual HRESULT SetTransformation(CATMathTransformation iTransformation)=0;
    
	/**
	* Gets Machining Direction transformation matrix.
    * @param oTransformation The transformation
	*/
	virtual HRESULT GetTransformation (CATMathTransformation& oTransformation)=0;
    
	/**
	* Gets activity to which machining direction belongs.
    * @param oActivity
	*  The activity
	*/
	
	virtual HRESULT GetActivity(CATIMfgActivity_var &oActivity)=0;
	
	/**
	* Sets the activity on chich the machining direction is attached (not in the data model, pure run time).
    * @param oActivity
	*  The activity
	*/

	virtual HRESULT SetActivity(CATIMfgActivity_var &oActivity)=0;
    
	/**
	* Sets Machining Direction origin mode.
    * @param iMode
	*  The mode
	*/
	
	virtual HRESULT SetOriginMode(const int& iMode)=0;
    
	/**
	* Gets Machining Direciton origin mode.
    * @param oMode
	*  The mode
	*/
	
	virtual HRESULT GetOriginMode(int& oMode)=0;

	/**
	* Sets Machining Direction current origin.
    * @param iCurrentOrigin
	*  The current origin
	*/
    
	virtual HRESULT SetCurrentOrigin(const int &iCurrentOrigin)=0;

	/**
	* Gets Machining Direction current origin.
    * @param oCurrentOrigin
	*  The current origin
	*/

    virtual HRESULT GetCurrentOrigin(int &oCurrentOrigin)=0;
	
	/**
	* Gets Machining Direction Inversion status.
    * @param oStatus The inversion status
	*/	
	virtual HRESULT GetInvertStatus(int& oStatus)=0;	

    /**
	* Gets Machining Direction status.
    * @param oName
	*  The Machining Direction Name
    * @param oGeoNames
	*  The Machining Direction Geometric References names
    * @param oStatus
	*  The Machining Direction Geometric References status
    * @param oPubName
	*  The Machining Direction Geometric References publication names
	*/

	virtual HRESULT GetStatus (CATUnicodeString& oName, CATUnicodeString& oGeoNames, 
							   int &oStatus, CATUnicodeString* oPubName = NULL) const = 0;
    
	/**
	* Checks if Machining Direction is valid.
    * @param oIsValid
	*  The validity
    * @param iIsRequired
	*  The required characteristic of the object
	*/
	
	virtual HRESULT IsValid   (int &oIsValid,int iIsRequired=1) const = 0;

	/**
	* Gets the geometries attached to the Machining Direction.
    * @param iMode
	*  The query mode
    * @param oGeometries
	*  The resulting geometries

	*/
    
	virtual HRESULT GetGeometries (const int iMode, CATLISTP(CATGeometry)& oGeometries)=0;

    /**
	* GEts the elemnt associated to the Machining Direction.
    * @param oElement
	*  The referenced element
	*/

	virtual HRESULT GetGeometry (CATBaseUnknown_var& oElement)=0;

	/**
	* Sets the visualization transformation of the Machining Direction object.
    * @param iTransForAxis
	*  The transformation for the axis
    * @param oTransForOrigin
	*  The transofrmation for the origin
	*/

	virtual HRESULT SetVisuTransformation(CATMathTransformation iTransForAxis, CATMathTransformation iTransForOrigin)=0;
	
	/**
	* Gets the visualization transformation of the Machining Direction object.
    * @param iTransForAxis
	*  The transformation for the axis
    * @param oTransForOrigin
	*  The transofrmation for the origin
	*/

	virtual	HRESULT GetVisuTransformation(CATMathTransformation &oTransForAxis, CATMathTransformation &oTransForOrigin)=0;

    /**
	* Indicates if one of the parameter of the direction is a result of a CKE relation.
    * @return <br><b>Legal values</b>: 
    * <tt>TRUE</tt> At least one parameter is valuated by an active CATICkeRelation.
    * <tt>FALSE</tt> No parameter is valuated by an active CATICkeRelation .
    */

	virtual	CATBoolean IsDrivenByRelation()=0;
};

//------------------------------------------------------------------

CATDeclareHandler(CATIMfgDirection,CATBaseUnknown);

#endif
