/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgTPCycleLinkingMotion_H
#define CATIMfgTPCycleLinkingMotion_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATListOfDouble.h"

class CATUnicodeString;
class CATMathVector;
class CATMathPoint;
class CATIMfgToolPathFeedrate_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPCycleLinkingMotion;
#else
extern "C" const IID IID_CATIMfgTPCycleLinkingMotion;
#endif

/**
* Interface to manage linking motions between cycle location points.
* This interface is available on @href CATIMfgToolPathCycle object.<br>
* A linking motion has an index which is the number of relative cycle location point.<br>
* The linking motion index 'i' describes the linking traject between the cycle location point index 'i' and
* the cycle location point index 'i+1'.<br>
* The linking motion index '0' describes the approach traject to the first cycle location point.<br>
* The linking motion index 'N' with 'N' equal to the last cycle location point number is the retract traject
*  from the last location point.<br>
* A linking motion can be composed of several 'polylines' (linear motions), 'circle arcs' (circular motions) and
*  syntaxes.<br>
* If the linking motion index 'i' exists, it means that, in APT file, current CYCLE/ statement has to be stopped 
*  on cycle location point index 'i', that the linking motion has to be generated (with GOTO/,... statements) and
*  a new CYCLE/ statement has to be generated on cycle location point index 'i+1'.<br> 
*
* @see CATIMfgToolPathCycle
*/

class ExportedByMfgItfEnv CATIMfgTPCycleLinkingMotion : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Adds a sub-motion describing a "Polyline" (set of linear motions).
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iTrajectType
*      The type of traject
*      <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachTraject" : approach traject </li>
*      <li>"TPMachiningTraject" : machining traject </li>
*      <li>"TPRetractTraject" : retract traject </li>
*      <li>"TPLinkingTraject" : linking traject </li>
*      <li>"TPBetweenPathTraject" : traject between path </li>
*      </ul>
*   @param iFeedrateType
*      The type of feedrate
*       <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachFeedrate" : approach feedrate
*      <li>"TPMachiningFeedrate": machining feedrate
*      <li>"TPRetractFeedrate" : retract feedrate
*      <li>"TPRapidFeedrate" : rapid feedrate
*      <li>"TPFinishingFeedrate" : finishing feedrate
*      <li>"TPChamferingFeedrate" : chamfering feedrate
*      <li>"TPPlungeFeedrate" : plunge feedrate
*      </ul>
*   @param iX,iY,iZ
*     The coordinates of tip points
**/
	  virtual CATBoolean AddAPolylineSubMotion        (int                     iLocationPoint,
									                   const CATUnicodeString& iTrajectType,
									                   const CATUnicodeString& iFeedrateType,
									                   const CATListOfDouble&  iX,
									                   const CATListOfDouble&  iY,
									                   const CATListOfDouble&  iZ) = 0;

/**
*   Adds a sub-motion describing a "Circle Arc" (circular motion).
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iTrajectType
*      The type of traject
*      <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachTraject" : approach traject </li>
*      <li>"TPMachiningTraject" : machining traject </li>
*      <li>"TPRetractTraject" : retract traject </li>
*      <li>"TPLinkingTraject" : linking traject </li>
*      <li>"TPBetweenPathTraject" : traject between path </li>
*      </ul>
*   @param iFeedrateType
*      The type of feedrate
*       <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachFeedrate" : approach feedrate
*      <li>"TPMachiningFeedrate": machining feedrate
*      <li>"TPRetractFeedrate" : retract feedrate
*      <li>"TPRapidFeedrate" : rapid feedrate
*      <li>"TPFinishingFeedrate" : finishing feedrate
*      <li>"TPChamferingFeedrate" : chamfering feedrate
*      <li>"TPPlungeFeedrate" : plunge feedrate
*      </ul>
*   @param iX,iY,iZ
*     The coordinates of tip points (discretization of the circle arc)
*   @param iNormal
*     The oriented normal to the plane containing the circle arc
*   @param iCenter
*     The center of the circle arc
*    @param iRadius
*     The radius of the circle arc.
**/
	  virtual CATBoolean AddACircleArcSubMotion       (int                     iLocationPoint,
									                   const CATUnicodeString& iTrajectType,
									                   const CATUnicodeString& iFeedrateType,
									                   const CATListOfDouble&  iX,
									                   const CATListOfDouble&  iY,
									                   const CATListOfDouble&  iZ,
													   const CATMathVector&    iNormal,
												       const CATMathPoint&     iCenter,
												       double            iRadius) = 0;
/**
*   Adds a sub-motion describing a "PP command".
*   A PP Syntax is a "NC Command" described in PP Table and evaluated from it during generation of APT file.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iPPCommand
*      The name of "NC Command"
*   @param iSequenceNumber
*      The number of sequence in the PP Table
**/
	  virtual CATBoolean AddAPPCommandSubMotion       (int                     iLocationPoint,
										               const CATUnicodeString& iPPCommand,
		                                               int                     iSequenceNumber = 1) = 0;
/**
*   Adds a sub-motion describing a "user syntax".
*   A user syntax is a string generated as it is in APT file.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iUserSyntax
*      The user syntax
**/
	  virtual CATBoolean AddAUserSyntaxSubMotion      (int                     iLocationPoint,
										               const CATUnicodeString& iUserSyntax) = 0;


/**
*   Adds tool axis on each point for a "Polyline" or a "Circle arc" for 5 Axis machining.
*   This method should be called just after "AddAPolylineSubMotion" or "AddACircleArcSubMotion" in 5 Axis Machining.
*   @param iX,iY,iZ
*      The tool axis values
**/
	  virtual CATBoolean AddToolAxisInSubMotion       (const CATListOfDouble&  iX,
										               const CATListOfDouble&  iY,
										               const CATListOfDouble&  iZ) = 0;
/**
*   Sets a local feedrate on a sub-motion.
*   The sub-motion must be a "Polyline" or a "Circle Arc".
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*	   The number of sub-motion
*   @param iFeedrate
*	   The local feedrate
**/
      virtual CATBoolean SetSpecificFeedrate          (int                          iLocationPoint,
													   int                          iSubMotion,
		                                               CATIMfgToolPathFeedrate_var& iFeedrate) =0 ;

/**
*   Sets a ratio on the feedrate of a sub-motion.
*   The sub-motion must be a "Polyline" or a "Circle Arc".
*   The feedrate must be a symbolic one.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*	   The number of sub-motion
*   @param iRatio
*	   The ratio to apply to the symbolic feedrate
**/
	  virtual CATBoolean SetRatioOnFeedrate           (int                          iLocationPoint,
													   int                          iSubMotion,
		                                               double                       iRatio) =0 ;

/**
*   Sets a symbolic feedrate on a sub-motion.
*   The sub-motion must be a "Polyline" or a "Circle Arc".
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*	   The number of sub-motion
*   @param iFeedrateType
*      The type of feedrate
*       <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachFeedrate" : approach feedrate
*      <li>"TPMachiningFeedrate": machining feedrate
*      <li>"TPRetractFeedrate" : retract feedrate
*      <li>"TPRapidFeedrate" : rapid feedrate
*      <li>"TPFinishingFeedrate" : finishing feedrate
*      <li>"TPChamferingFeedrate" : chamfering feedrate
*      <li>"TPPlungeFeedrate" : plunge feedrate
*      </ul>
**/
	  virtual CATBoolean SetSymbolicFeedrate          (int                          iLocationPoint,
													   int                          iSubMotion,
		                                               const CATUnicodeString&      iFeedrateType) =0 ;

/**
*   Retrieves if at least a location point owns linking sub-motions.
*   @return
* 	   The return code
*      <br><b>Legal values</b>:
*      <ul>
*      <li> 0 : no location point owns linking sub-motions </li>
*      <li> >0 : at least one location point owns one or several linking sub-motions </li>
*      </ul>
**/
	  virtual int AreThereLinkingMotions              () = 0;

/**
*   Retrieves the number of linking sub-motions for a location point.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param oNumberOfMotions
*      The number of linking sub-motions
**/
	  virtual CATBoolean GetNumberOfSubMotions        (int                     iLocationPoint,
		                                               int&                    oNumberOfMotions) = 0;

/**
*   Retrieves the type of a sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*    @param iSubMotion
*      The index of sub-motion
*    @param oMotionType
*      The type of sub-motion
**/
	  virtual CATBoolean GetSubMotionType             (int                     iLocationPoint,
													   int                     iSubMotion,
													   int&                    oMotionType) = 0;

/**
*   The type of sub-motion.
*      <br><b>Legal values</b>:
*      <ul>
*      <li>Polyline : sub-motion describing a "polyline" (Set of linear motions)</li>
*      <li>Circle : sub-motion describing a "circle arc" (circular motion)  </li>
*      <li>PPCommand : sub-motion describing a "PP command" </li>
*      <li>UserSyntax : sub-motion describing a "user syntax" </li>
*      </ul>
*/  
      enum SubMotionType {PolyLine=0, Circle=1, PPCommand=2, UserSyntax=3};

/**
*   Retrieves the characteristics of a "polyline" sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*    @param iSubMotion
*      The index of sub-motion (must be a "polyline" one)
*   @param oTrajectType
*      The type of traject
*      <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachTraject" : approach traject </li>
*      <li>"TPMachiningTraject" : machining traject </li>
*      <li>"TPRetractTraject" : retract traject </li>
*      <li>"TPLinkingTraject" : linking traject </li>
*      <li>"TPBetweenPathTraject" : traject between path </li>
*      </ul>
*   @param oFeedrateType
*      The type of feedrate
*       <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachFeedrate" : approach feedrate
*      <li>"TPMachiningFeedrate": machining feedrate
*      <li>"TPRetractFeedrate" : retract feedrate
*      <li>"TPRapidFeedrate" : rapid feedrate
*      <li>"TPFinishingFeedrate" : finishing feedrate
*      <li>"TPChamferingFeedrate" : chamfering feedrate
*      <li>"TPPlungeFeedrate" : plunge feedrate
*      </ul>
*   @param oX,oY,oZ
*     The coordinates of tip points
*/  
	  virtual CATBoolean GetPolylineCharacteristics   (int                     iLocationPoint,
													   int                     iSubMotion,
													   CATUnicodeString&       oTrajectType,
									                   CATListOfDouble&        oX,
									                   CATListOfDouble&        oY,
									                   CATListOfDouble&        oZ) = 0;

/**
*   Retrieves the characteristics of a "circle arc" sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*    @param iSubMotion
*      The index of sub-motion (must be a "circle arc" one)
*   @param oTrajectType
*      The type of traject
*      <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachTraject" : approach traject </li>
*      <li>"TPMachiningTraject" : machining traject </li>
*      <li>"TPRetractTraject" : retract traject </li>
*      <li>"TPLinkingTraject" : linking traject </li>
*      <li>"TPBetweenPathTraject" : traject between path </li>
*      </ul>
*   @param oFeedrateType
*      The type of feedrate
*       <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachFeedrate" : approach feedrate
*      <li>"TPMachiningFeedrate": machining feedrate
*      <li>"TPRetractFeedrate" : retract feedrate
*      <li>"TPRapidFeedrate" : rapid feedrate
*      <li>"TPFinishingFeedrate" : finishing feedrate
*      <li>"TPChamferingFeedrate" : chamfering feedrate
*      <li>"TPPlungeFeedrate" : plunge feedrate
*      </ul>
*   @param oX,oY,oZ
*     The coordinates of tip points
*   @param oNormal
*     The oriented normal to the plane containing the circle arc
*   @param oCenter
*     The center of the circle arc
*    @param oRadius
*     The radius of the circle arc.
*/  
	  virtual CATBoolean GetCircleArcCharacteristics   (int                    iLocationPoint,
													    int                    iSubMotion,
													    CATUnicodeString&      oTrajectType,
									                    CATListOfDouble&       oX,
									                    CATListOfDouble&       oY,
									                    CATListOfDouble&       oZ,
														CATMathVector&         oNormal,
		                                                CATMathPoint&          oCenter,
		                                                double&                oRadius) = 0;

/**
*   Evaluates syntax relative to a "PP command" sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*     The index of sub-motion (must be a "PP command" one)
*   @param oSyntax
*	 The value of syntax 
**/
  virtual CATBoolean GetCommandEvaluation (int                         iLocationPoint,
										   int                         iSubMotion,
										   CATListValCATUnicodeString& oSyntax) =0 ;

/**
*   Retrieves the characteristics of a "PP command" sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*     The index of sub-motion (must be a "PP command" one)
*   @param oPPCommand
*      The name of "NC Command"
*   @param oSequenceNumber
*      The number of sequence in the PP Table
*/  
	  virtual CATBoolean GetPPCommandCharacteristics   (int                    iLocationPoint,
													    int                    iSubMotion,
													    CATUnicodeString&      oPPCommand,
		                                                int&                   oSequenceNumber) = 0;
/**
*   Retrieves the characteristics of a "User syntax" sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*     The index of sub-motion (must be a "user syntax" one)
*   @param oUserSyntax
*      The user syntax
*/  
	  virtual CATBoolean GetUserSyntaxCharacteristics  (int                    iLocationPoint,
													    int                    iSubMotion,
														CATUnicodeString&      oUserSyntax) = 0;
/**
*   Retrieves the tool axis stored on a sub-motion.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*     The index of sub-motion (must be a "polyline" or a "circle" one)
*   @param oX,oY,oZ
*     The tool axis values
*   @return
* 	   The return code
*      <br><b>Legal values</b>:
*      <ul>
*      <li> FALSE : no tool axis stored for the sub-motion</li>
*      </ul>
*/  
	  virtual CATBoolean GetToolAxis                   (int                    iLocationPoint,
														int                    iSubMotion,
														CATListOfDouble&       oX,
									                    CATListOfDouble&       oY,
									                    CATListOfDouble&       oZ) = 0;

/**
*   Retrieves the feedrate stored on a sub-motion.
*   The sub-motion must be a "Polyline" or a "Circle Arc".
*   The feedrate must not be a local one.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*	   The number of sub-motion
*   @param oFeedrate
*	   The feedrate
*      <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachFeedrate" : approach feedrate
*      <li>"TPMachiningFeedrate": machining feedrate
*      <li>"TPRetractFeedrate" : retract feedrate
*      <li>"TPRapidFeedrate" : rapid feedrate
*      <li>"TPFinishingFeedrate" : finishing feedrate
*      <li>"TPChamferingFeedrate" : chamfering feedrate
*      <li>"TPPlungeFeedrate" : plunge feedrate
*      </ul>
*   @param oRatio
*	   The ratio value
*   @return
* 	   The return code
*      <br><b>Legal values</b>:
*      <ul>
*      <li>FALSE : the feedrate is a local one (use "GetSpecificFeedrate" method)
*      </ul>
**/
	  virtual CATBoolean GetSymbolicFeedrate		  (int                          iLocationPoint,
													   int                          iSubMotion,
		                                               CATUnicodeString&            oFeedrate,
													   double&                      oRatio) =0 ;

/**
*   Retrieves the local feedrate stored on a sub-motion.
*   The sub-motion must be a "Polyline" or a "Circle Arc".
*   The feedrate must be a local one.
*   @param iLocationPoint
*      The index of location point
*      <br><b>Legal values</b>:
*      <ul>
*      <li>0 : approach traject to the first location point </li>
*      <li>last location point index : retract traject from the last location point</li>
*      <li>i : linking traject from the location point index i to the location point index i+1 </li>
*      </ul>
*   @param iSubMotion
*	   The number of sub-motion
*   @param oFeedrate
*	   The feedrate
*   @return
* 	   The return code
*      <br><b>Legal values</b>:
*      <ul>
*      <li>FALSE : the feedrate is a not a local one (use "GetSymbolicFeedrate" method) </li>
*      </ul>
**/
	  virtual CATBoolean GetSpecificFeedrate		  (int                          iLocationPoint,
													   int                          iSubMotion,
		                                               CATIMfgToolPathFeedrate_var& oFeedrate) =0 ;
};

CATDeclareHandler(CATIMfgTPCycleLinkingMotion, CATBaseUnknown);

#endif







