/* -*-c++-*- */
#ifndef _DS_COMPUTE_SERVER
#ifndef CATIGSMUseUIFactory_H
#define CATIGSMUseUIFactory_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//---------------------------------------------------------------------
// CATIGSMUseUIFactory.h
// Factory for activating Wireframe and Shape design interactive commands 
//---------------------------------------------------------------------

#include "CATGSMUseItfExportedBy.h"
#include "CATDlgEngUtility.h"
#include "CATCommand.h"

class CATIMmiMechanicalFeature_var;
class CATString;

// DMUNavigator / geometry creation
class CATGSMUICmdInfo;
class CATPathElement; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseUIFactory;
#else
extern "C" const IID IID_CATIGSMUseUIFactory;
#endif

/**
 * Factory allowing to access interactive components of Shape Design.
 * <b>Role</b>: Allows  to call shape design command.
 * <br>
 * This interface allows to run wireframe and surface commands
 * from other commands 
 * <br> either in exclusive mode (current command is cancel)
 * <br> or in shared mode (current command is handled until the end of 
 * launched command).
 *
 * <br>  List of available commands :
 * <pre>
 *     Command                         StartUp Name                Icon Name
 *   -------------------------------------------------------------------------
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
 *	 Sketch command					 "PRTSketch"				 "I_Sketcher"
 *   Axis System interactive command "AxisSystem"				 "I_3DAxisSystemGSD"
 *   3D Curve interactive command	 "St3DCurveFeature"			 "I_St3DCurve"
 * </pre>
 * <br>
 */

class ExportedByCATGSMUseItf CATIGSMUseUIFactory : public CATBaseUnknown
{
   CATDeclareInterface;
public: 


   /**
    * Starts a Shape Design command in creation mode.
	* Notice that the resulting command can be NULL 
	* if the catalog needed for the feature creation was not loaded previously.
    *   @param CmdInfo 
    *      Class defining parameters to activatefor GSD command creation 
    *  <ul>
    *  <li>      StartUpName or Typename/WorkingPart
    *  <li>      Datum Mode 
    *  <li>      Contextual Item 
    *  <li>      Aggregation mode (=Internal GSD use Only=) 
    *  </ul>
    *   @param Name
    *		The name of the created CATCommand
    *		<br> Note: Default is "CATIGSMUseUICommandCreation"
    *   @param Behavior
    *		The behavior parameter of the CATStateCommand
    *		<br> Note: Default is NULL
    *   @param iMode
    *		The CATCommand start mode (exclusive or shared)
    *		<br> Note: Default is exclusive mode
    *	@see CATCommand, CATStateCommand 
    *	@see CATGSMUICmdInfo
    */
    virtual CATCommand *CreationCommand(CATGSMUICmdInfo* CmdInfo,const CATString & Name="CATGSMUICommandCreation", CATDlgEngBehavior Behavior=NULL, CATCommandMode iMode=CATCommandModeExclusive) = 0;
 

   /**
    * Starts a Shape Design command in edit mode.
    *   @param EditedSpec
    *      The element to edit
    *   @param Name
    *		The name of the created CATCommand
    *		<br> Note:Default is "CATIGSMUseUICommandEdit"
    *   @param Behavior
    *		The behavior parameter of the CATStateCommand
    *		<br> Note:Default is NULL
    *   @param iMode
    *		The CATCommand start mode (exclusive or shared)
    *		<br> Note:Default is exclusive mode
    *	@see CATCommand, CATStateCommand
    */
   virtual CATCommand *EditCommand(CATIMmiMechanicalFeature_var &EditedSpec, const CATString & Name="CATIGSMUseUICommandEdit", CATDlgEngBehavior Behavior=NULL, CATCommandMode iMode=CATCommandModeExclusive) = 0;

};
CATDeclareHandler (CATIGSMUseUIFactory, CATBaseUnknown);

#endif
#endif
