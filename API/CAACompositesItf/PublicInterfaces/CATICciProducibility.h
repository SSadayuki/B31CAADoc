// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATICciProducibility.h
// Define the CATICciProducibility interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//  Inheritance : CATICciProducibility (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciProducibility_H
#define CATICciProducibility_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICkeParm.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciProducibility;
#else
extern "C" const IID IID_CATICciProducibility ;
#endif

//------------------------------------------------------------------
class CATISpecObject_var;
class CATUnicodeString;
class CATIMmiMechanicalFeature_var;

/**
* Interface to Producibility.
* <b>Role</b>: Allows to manage a Composites producibility feature.
*/
class ExportedByCAACompositesItf CATICciProducibility: public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
    * Gets the seed point of the producibility feature.
    * @param oX
    *   The coordinate along X axis of the seed point.
    * @param oY
    *   The coordinate along Y axis of the seed point.
    * @param oZ
    *   The coordinate along Z axis of the seed point.
    */
    virtual HRESULT GetSeedPoint (double & oX, double & oY, double & oZ) = 0;

    /**
    * Gets the seed point of the producibility feature.
    * @param oSeedPoint
    *   The seed point feature.
    */
    virtual HRESULT GetSeedPoint (CATIMmiMechanicalFeature_var & oSeedPoint) = 0;

    /**
    * Gets the seed curve of the producibility feature.
    * @param oSeedCurve
    *   The seed curve feature.
    */
    virtual HRESULT GetSeedCurve (CATIMmiMechanicalFeature_var & oSeedCurve) = 0;

    /**
    * Gets the drape curves of the producibility feature.
    * @param oDrapeCurves
    *   The list of drap curves.
    */
    virtual HRESULT GetDrapeCurves (CATLISTV(CATIMmiMechanicalFeature_var) & oDrapeCurves) = 0;

    /**
    * Gets the fiber propagation type of the producibility feature.
    * @param oPropType
    *   The fiber propagation type as string. Possible values are:
    *    <ul>
    *      <li>"Symmetric" = symetrical fiber propagation
    *      <li>"Minimum distortion" = fiber propagation with distortion
    *    </ul>
    */
    virtual HRESULT GetFiberPropagationType (CATUnicodeString & oPropType) = 0;

    /**
    * Gets the warp and weft properties of the producibility feature.
    * @param oWarp
    *   The warp value.
    * @param oWeft
    *   The weft value.
    */
    virtual HRESULT GetWarpAndWeft (double & oWarp,
        double & oWeft) = 0;

    /**
    * Gets the uniaxial limit shearing and maximum elongation of the producibility feature.
    * @param oULS
    *   The uniaxial limit shearing value.
    * @param oUME
    *   The uniaxial maximum elongation value.
    */
    virtual HRESULT GetUniLimitShearingAndMaxElong (double & oULS,
        double & oUME) = 0;

    // Sector 
    // --------------------------------------------------------------

    // Point Selection 
    /**
    * Gets list of Seed points.
    * @param oListPoints
    *  List of points 
    */
    virtual HRESULT GetSeedPointList(CATLISTV(CATIMmiMechanicalFeature_var) &oListPoints) = 0;

    // Curve  Selection 
    /**
    * Gets list of Seed curves .
    * @param oListPoints. 
    *  List of points
    */
    virtual HRESULT GetSeedCurveList(CATLISTV(CATIMmiMechanicalFeature_var) &oListCurves) = 0; 

    /**
    * Gets list of the status Active or Inactivefor each sector. 
    * <ul>
    * <li>List size correspond to the number of sectors </li>
    * <li>Active(=1)/Inactive(=0)</li>
    * </ul>
    */
    virtual HRESULT  GetSectorActivationState(CATListOfInt &oListSectorActState) =0 ; 


    // Propagation 
    // ------------------------------------------------------
    /**
    * Gets the fiber init propagation type of the producibility feature.
    * @param oFiberInitType
    *   The fiber init propagation type as string. 
    */
    virtual HRESULT GetFiberInitType(CATUnicodeString &oFiberInitType) = 0;


    // Fiber  Unidirectionnal 
    // ------------------------------------------------------

    //- Warn and Limit Steering Length 
    /**
    * Gets the uniaxial warn and limit Steering of the producibility feature.
    * @param oParmUWSt
    *   Paramter feature for warn steering 
    * @param oParmULSt
    *   Paramter feature for limit steering 
    */
    virtual HRESULT GetUniaxialWarnAndlimitSteering(CATICkeParm_var &oParmUWSt,CATICkeParm_var &oParmULSt) = 0;

    // - Min Fiber or tape length 
    /**
    * Gets the min tape length. 
    * @param oParmMFTL
    *   Paramter feature for min tape length 
    */
    virtual HRESULT GetMinTapeOrFiberLength(CATICkeParm_var &oParmMFTL) = 0;

    // Thickness infos 
    // ------------------------------------------------------
    /**
    * @deprecated V5R28 
    * Gets thickness mode.
    * @param iState
    *     iState = True use thickness computation wiothin CSRange value 
    */
    virtual HRESULT GetThicknessUpdate (CATBoolean & oState) = 0;

    /**
    * Gets thickness mode.
    * @param oThickMode
    *    oThickMode = 0 Without ThicknessUpdate and  oThickMode != 0  With Thickness Update, moreover   oThickMode =  1 Constant Offset  mode ,   oThickMode = 2 CoreSample  mode 
    * <br> Note : 
    * <br>   oThickMode = 2 : Thickness computation within CSRange value  (Legacy and default mode) 
    * <br>   oThickMode = 1 : Thickness computation withinConstOffsetRange
    */
    virtual HRESULT GetThicknessUpdate (int & oThickMode) = 0;

    /**
    * Gets CS range value.
    * <br>note : Value to be set in MKS unit system, Ex: .01 means .01 meters 
    * @param CSRange 
    *  CS Value - default = 0,0
    */
    virtual HRESULT GetCSRange         (double & oCSRange ) = 0;

    /**
    * Gets fullStacking evaluation. 
    * @param iState
    *     oState = True use thickness computation wiothin CRange value 
    */
    virtual HRESULT GetFullStacking    (CATBoolean & iState) = 0;

    /**
    * Gets Constant Offset range  value.
    * <br>note : Value to be set in MKS unit system, Ex: .01 means .01 meters 
    * @param oConstOffsetRange
    *  ConstOffsetRange Value - default = 0.0
    */
    virtual HRESULT GetConstOffsetRange        (double & oConstOffsetRange) = 0;

    // Analysis Infos 
    // ------------------------------------------------------
    // - Deformation type 
    /**
    * Gets deformation type in case of derform analyse mode.
    * @paramo oDeformType
    *    Deform type 
    *  <br> default is :
    *    <ul>
    *      <li>"ShearingAngle" = Shearing Angle deformation 
    *         <li>"........."
    *    </ul>
    *   
    */
    virtual HRESULT GetAnalysisDeformationType(CATUnicodeString &oDeformType) = 0;

    // - Other
    /**
    * Gets type for other analysis define mode.
    * @paramo oOtherType 
    *    Other Type 
    *  <br> default is :
    *    <ul>
    *      <li>"MinTapeLength" = Min tape length 
    *      <li>"........."
    *    </ul>
    *   
    */
    virtual HRESULT GetAnalysisOtherType(CATUnicodeString &oOtherType) = 0;

    // Sector specialized 
    /**
    * Gets list of Propagation Types.
    * @param oListPropagationTypes
    *  List of Propagation Types
    */
    virtual HRESULT GetPropagationTypeList(CATListOfCATUnicodeString &oListPropagationTypes) = 0;

    /**
    * Gets list of Fiber Initializations.
    * @param oListFiberInit
    *  List of Fiber Initializations
    */
    virtual HRESULT GetFiberInitList(CATListOfCATUnicodeString &oListFiberInit) = 0;

    // --------------------------------------------------------------
    // SET PRODUCIBILITY PARAM  
    // --------------------------------------------------------------

    // Sectors  
    // ------------------------------------------------------
    /**
    * Sector definition, sets reference seed points , seed curves and regions.  
    * <br> note : 
    * <br>- PlyGroup father handle HandlayUp , Tape laying  or fiber placement mod. 
    * <br>- Number of seed curves should not exceed number of seed points, and each corresponding points index k  should lyes in the k index  seed curve 
    * <br>- Number of region is independant of point/Seed curves definitions 
    * @param iListPoints
    *     List Of Seed points 
    * @param iListCurve
    *     List Of Seed curves , (seed point need has  to ly on seed curve of same index, nb seed curve =< nb seed point  )  
    * @param  iListRegionCurves
    *     List of region 
    * @param  odiag
    *   <> 0  Not a correct points/curves/region initialization . method returns E_FAIL and does not initialized Points/Curves/regions on producibility feature. 
    *   <br>  1= number of seed curves is greater number seed points 
    *   <br>  2= point of index k does not lay on curve index k - (if corresponding curve is defined..) 
    *   <br>  3= case HANDLAYUP - at least one points is outside ply relimited support surface  
    *   <br>     case TAPELAYING or FIBERPLACEMENT  - at least one points is not on the reference surface (PLYGROUP support reference) 
    */

    virtual HRESULT SetReferencePointsAndCurves     ( const CATLISTV(CATIMmiMechanicalFeature_var) iListPoints,
        const  CATLISTV(CATIMmiMechanicalFeature_var) iListCurves, 
        const CATLISTV(CATIMmiMechanicalFeature_var) iListRegionCurves,
        int &odiag) =0 ;

    /**
    * Sector definition, sets list of the status Active or Inactivefor each sector. 
    * <ul>
    * <li>List size correspond to the number of sectors </li>
    * <li>Active(=1)/Inactive(=0)</li>
    * </ul>
    */
    virtual HRESULT  SetSectorActivationState(const CATListOfInt &iListSectorActState) =0 ; 


    // Propagation mode 
    // ------------------------------------------------------
    /**
    * Sets fiber infos and propagation type.
    * <br> note : (iFiberInitType,iPropagationType) have to correspond to a supported runtime couple of propagations information  
    * @param iFiberInitType
    *     FiberInit strategy , depends on  propagation type definition  
    * @param iPropagationType
    *    propagation type strategy definition
    * @param  odiag
    *  <> 0  Warning ! Not a runtime supported propagation type. 
    * <br> 1= iPropagationType is not a valid propagation type, 
    * @param iForceInitalization 
    *   =1  Force to set with given input (iFiberInitType,iPropagationType) couple value anyhow  , returns diagnostic info but returns S_OK  
    * <br>returns  E_FAIL if iForce=0 and initialization is wrong :  default is used default is used  : iPropagationType = "Symmetry" and   iFiberInitType is undefined  
    */
    virtual HRESULT SetFiberInfos  (const CATUnicodeString iFiberInitType, 
        const CATUnicodeString iPropagationType,
        int &odiag, int iForce =0 ) =0 ;



    // Miscellaneaous parameters 
    // ------------------------------------------------------
    /**
    * @deprecated V5R28 
    * Sets thickness mode.
    * @param iState
    *     iState = True use thickness computation wiothin CSRange value 
    */
    virtual HRESULT SetThicknessUpdate (const CATBoolean iState=FALSE) = 0;

    /**
    * Sets thickness mode.
    * @param iThickMode
    *    iThickMode = 0 Without ThicknessUpdate and  iThickMode != 0  With Thickness Update, moreover   iThickMode =  1 Constant Offset  mode ,   iThickMode = 2 CoreSample  mode 
    * <br> Note : 
    * <br>   iThickMode = 2 : Thickness computation within CSRange value  (Legacy and default mode) 
    * <br>   iThickMode = 1 : Thickness computation withinConstOffsetRange
    */
    virtual HRESULT SetThicknessUpdate (const int iThickMode ) = 0;

    /**
    * Sets CS range value.
    * <br>note : Value to be set in MKS unit system, Ex: .01 means .01 meters 
    * @param CSRange 
    *  CS Value - default = 0,0
    */
    virtual HRESULT SetCSRange         (const double iCSRange  =0.0) = 0;

    /**
    * Sets fullStacking evaluation. 
    * @param iState
    *     iState = True use thickness computation wiothin CRange value 
    */
    virtual HRESULT SetFullStacking    (const CATBoolean iState=FALSE) = 0;

    /**
    * Sets Constant Offset range  value.
    * <br>note : Value to be set in MKS unit system, Ex: .01 means .01 meters 
    * @param oConstOffsetRange
    *    ConstOffsetRange Value - default = 0.0
    */
    virtual HRESULT SetConstOffsetRange  (const double iConstOffsetRange=0.0) = 0;

    /**
    * Sets Warp Weft .
    * <br>note : Value to be set in MKS unit system , Ex = .01 -  means .01 meters  
    * @param iWarp
    *    warp length value (in MKS)  
    * @param iWeft
    *    weft length  value (in MKS) 
    */
    virtual HRESULT SetWarpWeft        (const double iWarp=.01, const double iWeft=.01) = 0;

    /**
    * Sets Min tape length.
    * <br>note : Value to be set in MKS unit system , Ex = .01 -  means .01 meters  
    * @param iMinTapeLength
    *    minimum tape length value (in MKS) 
    */
    virtual HRESULT SetMinTapelength (const double iMinTapeLength=.05)=0;

    /**
    * Sets UD paramateres Shearing.
    * <br>note : Value to be set in MKS unit system , Ex = 3.14159 -  means PI radians 
    * @param iULShearing
    *     unidirectionnal limit angle shearing (in MKS  i.e: in radians, between 0 to PI) 
    * @param iUMElong
    *    unidirectionnal maximum elongation ratio  ( i.e: between 0.0 to 1.0)
    */
    virtual HRESULT SetUniaxialLimitShearingAndMaxElong (const double iULShearing, const double iUMElong)=0; 

    /**
    * Sets UD paramateres Steering.
    * <br>note : Value to be set in MKS unit system , Ex = .01 -  means .01 meters  
    * @param iUWSteering
    *    Unidirectionnal warn steering  length value (in MKS)  
    * @param iULSteering
    *    Unidirectionnal limit steering  length value (in MKS)  
    */
    virtual HRESULT SetUniaxialWarnAndlimitSteering (const double iUWSteering,const double iULSteering)=0; 

    /**
    * Sets analyse type.
    * <br> note : (iDeformType, iOtherType) have to correspond to a supported runtime couple of propagation 
    * @param iDeformType
    *    Deform type 
    * @param iOtherType
    *    Other types 
    * @param  odiag
    *  <> 0  Warning ! Not a runtime supported propagation type. 
    * <br> 1= iDeformType or iOtherType  is not a valid type, 
    * @param iForce
    *   =0  (default and strongly recommends in order not to risk to corrupt data model) 
    *   =1   Force to set with given input(iDeformType, iOtherType) couple value , returns a diagnostic but retruns S_OK  
    * <br> returns E_FAIL: if iForce=0 and initialization is wrong , default is used :  type "ShearingAngle" for iDeformType and "MinTapeLength" for  iOtherType
    */
    virtual HRESULT SetAnalysisTypes (const CATUnicodeString &iDeformType,   const CATUnicodeString &iOtherType,
        int &odiag, int iForce =0 ) =0 ;

    /**
    * Sector definition, sets list of Propagation Types.
    *<br> each sector can have a specialized Propagation type value , if not the producibility generic propagation is used  
    * @param iListPropagationTypes
    *  List of Propagation Types
    * @see CATICciProducibilityAdv#SetFiberInfos
    */
    virtual HRESULT SetPropagationTypeList(CATListOfCATUnicodeString &iListPropagationTypes) = 0;

    /**
    * Sector definition, sets list of Fiber Initializations.
    *<br> if not seed curve is defined, each sector can have a specialized Fiber Init  type value, 
    * if not, the Fiber Init generic is used  
    * @param iListFiberInit
    *  List of Fiber Initializations
    *  @see CATICciProducibilityAdv#SetFiberInfos
    */
    virtual HRESULT SetFiberInitList(CATListOfCATUnicodeString &iListFiberInit) = 0;


    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------

    /**
    * @deprecated V5R27 
    * Use @see #GetSeedPoint(CATIMmiMechanicalFeature_var&) method instead.
    * Gets the seed point of the producibility feature.
    * @param oSeedPoint
    *   The seed point feature.
    */
    virtual HRESULT GetSeedPoint (CATISpecObject_var & oSeedPoint) = 0;

    /**
    * @deprecated V5R27 
    * Use @see #GetSeedCurve(CATIMmiMechanicalFeature_var&) method instead.
    * Gets the seed curve of the producibility feature.
    * @param oSeedCurve
    *   The seed curve feature.
    */
    virtual HRESULT GetSeedCurve (CATISpecObject_var & oSeedCurve) = 0;

    /**
    * @deprecated V5R27 
    * Use @see #GetDrapeCurves(CATLISTV(CATIMmiMechanicalFeature_var)&) method instead.
    * Gets the drape curves of the producibility feature.
    * @param oDrapeCurves
    *   The list of drap curves.
    */
    virtual HRESULT GetDrapeCurves (CATLISTV(CATISpecObject_var) & oDrapeCurves) = 0;

    // Point Selection 
    /**
    * @deprecated V5R27 
    * Use @see #GetSeedPointList(CATLISTV(CATIMmiMechanicalFeature_var)&) method instead.
    * Gets list of Seed points.
    * @param oListPoints
    *  List of points 
    */
    virtual HRESULT GetSeedPointList(CATListValCATISpecObject_var &oListPoints) = 0;

    // Curve  Selection 
    /**
    * @deprecated V5R27 
    * Use @see #GetSeedCurveList(CATLISTV(CATIMmiMechanicalFeature_var)&) method instead.
    * Gets list of Seed curves .
    * @param oListPoints. 
    *  List of points
    */
    virtual HRESULT GetSeedCurveList(CATListValCATISpecObject_var &oListCurves) = 0; 

    /**
    * @deprecated V5R27 
    * Use @see #SetReferencePointsAndCurves overloaded method which accepts CATIMmiMechanicalFeatures as arguments instead.
    * Sector definition, sets reference seed points , seed curves and regions.  
    * <br> note : 
    * <br>- PlyGroup father handle HandlayUp , Tape laying  or fiber placement mod. 
    * <br>- Number of seed curves should not exceed number of seed points, and each corresponding points index k  should lyes in the k index  seed curve 
    * <br>- Number of region is independant of point/Seed curves definitions 
    * @param iListPoints
    *     List Of Seed points 
    * @param iListCurve
    *     List Of Seed curves , (seed point need has  to ly on seed curve of same index, nb seed curve =< nb seed point  )  
    * @param  iListRegionCurves
    *     List of region 
    * @param  odiag
    *   <> 0  Not a correct points/curves/region initialization . method returns E_FAIL and does not initialized Points/Curves/regions on producibility feature. 
    *   <br>  1= number of seed curves is greater number seed points 
    *   <br>  2= point of index k does not lay on curve index k - (if corresponding curve is defined..) 
    *   <br>  3= case HANDLAYUP - at least one points is outside ply relimited support surface  
    *   <br>     case TAPELAYING or FIBERPLACEMENT  - at least one points is not on the reference surface (PLYGROUP support reference) 
    */

    virtual HRESULT SetReferencePointsAndCurves     ( const CATListValCATISpecObject_var iListPoints,
        const  CATListValCATISpecObject_var iListCurves, 
        const CATListValCATISpecObject_var iListRegionCurves,
        int &odiag) =0 ;

    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};

CATDeclareHandler(CATICciProducibility, CATBaseUnknown);
//------------------------------------------------------------------

#endif
