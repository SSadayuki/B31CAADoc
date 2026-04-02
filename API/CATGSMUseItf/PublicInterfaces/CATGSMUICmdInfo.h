/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef CATGSMUICmdInfo_H_
#define CATGSMUICmdInfo_H_

#include "CATGSMUseItfExportedBy.h"
#include "CATUnicodeString.h"

/**
 * Class to define informations  for running contextual GSD command. 
 * <b>Role</b>: Allows to choose some paramerters when running GSD contextual commands. 
 *  @see CATIGSMUIFactory 
 */

class CATPathElement;
class ExportedByCATGSMUseItf CATGSMUICmdInfo
{
   public:
       
       //   Constructeur/Destructeur
       //---------------------------
       /** 
        * Constructor. 
        */ 
       CATGSMUICmdInfo();
       /** 
        * Destructor. 
        */ 
       ~CATGSMUICmdInfo();
       
       
       // StartUp Name of GSD Contextual feature 
       // -----------------------------------------------------------
       /** 
       * Sets the startUp name for the Command to be launch. 
       *  @param StartUpName
       *      Interface name of the element to create, 
	   * <br>  List of available commands :
	   * <pre>
	   *     Command                         StartUp Name                Icon Name          
	   *   ------------------------------------------------------------------------------
	   *   Point interactive command       "GSMPoint"                  "I_Point"
	   *   MidPoint                        "GSMMidPoint"               "I_Midpoint"
	   *   EndPoint                        "GSMEndPoint"               "I_Endpoint"
	   *   Line interactive command        "GSMLine"                   "I_Line"
	   *   Plane interactive command       "GSMPlane"                  "I_Plane"
	   *   Intersect interactive command   "GSMIntersect"              "I_Intersection"
	   *   Project interactive command     "GSMProject"                "I_Project"
	   *   Join interactive command        "GSMAssemble"               "I_AssembleBipar"
	   *   Boundary interactive command    "GSMBoundary"               "I_Boundary"
	   *   Extract interactive command     "GSMExtract"                "I_Extract"
	   *   Extrapol interactive command    "GSMExtrapol"               "I_Extrapol"
	   *   Law  interactive command        "GSMLaw"                    "I_Law"
	   *   Extremum interactive command    "GSMExtremum"               "I_Extremum"
	   *   CurveSmooth interactive command "GSMCurveSmooth"            "I_CurveSmooth"
	   *   Spine interactive command       "GSMSpine"                  "I_Spine"
	   *   Loft interactive command        "GSMLoft"                   "I_Loft"
	   *   Blend interactive command       "GSMBlend"                  "I_Blend"
	   *   Multiple Pt interactive command "GSMMultiplePoint"          "I_MultiplePoint"
	   *   Trim  interactive command       "GSMTrim"                   "I_Trim"	
	   *   Spline interactive command      "GSMCurve"                  "I_Curve"
	   *   Polyline interactive command    "GSMLineCorner"             "I_LineCorner"
	   *   Near  interactive command       "GSMNear"                   "I_Near"
	   *   3D Curve offset interactive cmd "GSM3DurveOffset"           "I_3DCurveOffset"
	   *   Sketch command				   "PRTSketch"				   "I_Sketcher"
	   *   Axis System interactive command "AxisSystem"				   "I_3DAxisSystemGSD"
	   *   3D Curve interactive command	   "St3DCurveFeature"		   "I_St3DCurve"
	   *  </pre>        
       */
       
       void SetStartUpName(CATUnicodeString StartUpName);
       /** 
        * Gets the startUp name for the Command to be launch.  
        */ 
       CATUnicodeString GetStartUpName();
       
       // Datum Mode 
       //   -----------------------------------------------------------
       /** 
        * Sets he datum mode for creation in context.  
        *   @param iDatumMode
        *     Mode = 0 / Creation of feature 
        *     Mode = 1 / creation in datuim mode 
        *	  <br>	if DatumMode=1, the command is started in datum mode (no history) otherwise 
        *		it is started in procedural mode
        *		<br> Note: Default is procedural mode
        */
       void SetDatumMode(int mode);
       /** 
        * Gets he datum mode for creation in context.
        *   @return 
        *     Mode = 0 / Creation of feature 
        *     Mode = 1 / creation in datuim mode 
        *	  <br>	if DatumMode=1, the command is started in datum mode (no history) otherwise 
        *		it is started in procedural mode
        *		<br> Note: Default is procedural mode
        */ 
        int GetDatumMode();
       
       // Additionnal for some StartUp Name 
       // ------------------------------------------------------------------
       /** 
       * Sets the contextual additionnal information.
       *  @param ContextualItem
       *         Item to precise when running the start up
       * <br> used to element to create on the fly 
       * <pre>
       *     Command           StartUp Name           Item                   Icon Name  
       *     -----------------------------------------------------------------------------
       *     X Axis             "GSMRefElementOnFly"   ItemX_AxisCreate       "I_LineXAxis" 
       *     Y Axis             "GSMRefElementOnFly"   ItemY_AxisCreate       "I_LineYAxis" 
       *     Z Axis             "GSMRefElementOnFly"   ItemZ_AxisCreate       "I_LineZAxis" 
       *     X Axis (Current)   "GSMRefElementOnFly"   ItemLocalX_AxisCreate  "I_LineXAxis" 
       *     Y Axis (Current)   "GSMRefElementOnFly"   ItemLocalY_AxisCreate  "I_LineYAxis" 
       *     Z Axis (Current)   "GSMRefElementOnFly"   ItemLocalZ_AxisCreate  "I_LineZAxis" 
       *     XY Plane           "GSMRefElementOnFly"   ItemXYPlaneCreate      "I_LineXAxis" 
       *     YZ Plane           "GSMRefElementOnFly"   ItemYZPlaneCreate      "I_LineYAxis" 
       *     ZX Plane           "GSMRefElementOnFly"   ItemZXPlaneCreate      "I_LineZAxis" 
       *     XY Plane (Current) "GSMRefElementOnFly"   ItemLocalXYPlaneCreate "I_LineXAxis" 
       *     YZ Plane (Current) "GSMRefElementOnFly"   ItemLocalYZPlaneCreate "I_LineYAxis" 
       *     ZX Plane (Current) "GSMRefElementOnFly"   ItemLocalZXPlaneCreate "I_LineZAxis" 
       *  </pre>     
       */
       void SetSelectorContextualItem(CATUnicodeString ContextualItem);
       
       /** 
       * Gets the contextual additionnal information. 
       *  @return 
       *         Item to precise when running the start up 
       */ 
       CATUnicodeString GetSelectorContextualItem ();
       
       // Aggregation mode 
       //  ------------------------------------------------------------------
       /** 
       * Sets the aggregate mode for generated featuree in context. 
       *  @param iMode 
       * <br> mode = 0 Normal     / feature is insert in OpenBody at creation  (default and standard mode CAA) 
       * <br> mode = 1 Aggregated / feature is inserted in open body and tag to be aggreagated == Internal Use Only ==
       *  The feature has to be re-aggregated in the Activate method of the caller command (Chage father)
       *  <br> Note: It is reauire to perform the re-aggregation coirrectly other wise model if garbaged 
       *  @see CATIMmiContextualManager 
       */ 
       void SetContextualFeaturesAggregMode(int mode);
       /** 
       * Gets the aggregate mode for generated feature in context. 
       *  @return  
       * <br> mode = 0 Normal     / feature is insert in OpenBody at creation  (default and standard mode CAA) 
       * <br> mode = 1 Aggregated / feature is inserted in open body and tag to be aggreagated == Internal Use Only ==
       */
       int GetContextualFeaturesAggregMode();
       

       // DMU context / activation of a GSD command whithin a  given part  
       //   -----------------------------------------------------------
       /** 
       *  Sets the class name corresponding to GSD command.
       * <br> note : Used in DMU context / activation of a GSD command whithin a given part  
       *   @param ClassName 
       *      Class Name  string  of the element to create, 
       */
       void SetClassName(char* ClassName);
       /* 
       *  Gets the class name correspondintd to GSD command. 
       *   @return 
       *      Class Name  string  of the element to create, 
       */
       char* GetClassName();
       
       /** 
       * Sets the working part. 
       *   @param iWorkingPart
       *		The complete path to the CATPart in which one the new geometrical element will be created.
       *		If set, the UI-Active element does not have to be a CATPart.
       *		<br> Note: Default is NULL
       */
       void SetWorkingPart(CATPathElement* WorkingPart);
       /** 
       * Gets the working part. 
       *   @return  
       *		The complete path to the CATPart in which one the new geometrical element will be created.
       *		If set, the UI-Active element does not have to be a CATPart.
       *		<br> Note: Default is NULL
       */ 
       CATPathElement* GetWorkingPart();
       
       // InsertAfterCurrentFeatMode
       //  ------------------------------------------------------------------
       /** 
       * Sets the insertion position for generated feature. 
       *  @param iInsertAfterCurrentFeatMode 
       * <br> iInsertAfterCurrentFeatMode = 0 If the tool is Hybrid Body or OGS the new feature would be inserted before current feature
       * <br> iInsertAfterCurrentFeatMode = 1 If the tool is Hybrid Body or OGS the new feature would be inserted after current feature
       * <br> Note: By default the value of "iInsertAfterCurrentFeatMode" is 0
       */ 
       void SetInsertAfterCurrentFeatMode(int iInsertAfterCurrentFeatMode);
       /** 
       * Gets the insertion position for generated feature. 
       *  @return  
       * <br> mode = 0 If the tool is Hybrid Body or OGS the new feature would be inserted before current feature
       * <br> mode = 1 If the tool is Hybrid Body or OGS the new feature would be inserted after current feature
       */
       int GetInsertAfterCurrentFeatMode();

    
   private:
        CATGSMUICmdInfo( const CATGSMUICmdInfo& );
        void	operator=( const CATGSMUICmdInfo& );
        
        char*						_ClassName;
        CATUnicodeString			_StartUpName;
        int						_DatumMode;
        CATPathElement*			_WorkingPart;
        CATUnicodeString		_ContextualItem;
        int						_CtxAggregMode;
        int           _insertAfterCurrentFeatMode;        
        
};

#endif

