/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
#ifndef CATIMfgTPMultipleMotion_H
#define CATIMfgTPMultipleMotion_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolMotion.h"
#include "CATErrorDef.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPMultipleMotion;
#else
extern "C" const IID IID_CATIMfgTPMultipleMotion;
#endif

/**
* Interface for management of tool motions inside tool path model.
* A CATIMfgTPMultipleMotion must be the child of a @href CATIMfgCompoundTraject object.<br>
* A CATIMfgTPMultipleMotion object is a tool path object in which it is possible to store several subtrajects.<br>
* A subtraject can describe, either a set of linear motions ("Polyline"), either a circular motion ("Circle Arc"),
*  either a "PP Command" (NC Command which is evaluated from syntax described in PP Table),
*  either a "User Syntax" (which is generated as it is in APT file),
*  either an helical motion ("Helix").<br>
* To model cutter profile data, you must use @href CATIMfgTPMultipleMotionWithProfileData object.<br>
* A CATIMfgTPMultipleMotion object can have nurbs data to retrieve with @href CATIMfgTPMultipleMotionNurbs interface. <br>
*
* @see CATIMfgToolPathFactory
* @see CATIMfgCompoundTraject
*/

class ExportedByMfgItfEnv CATIMfgTPMultipleMotion : public CATIMfgToolMotion
{
  CATDeclareInterface ;
  
  public :
/**
*   Add a subtraject describing a "Polyline" (set of linear motions).<br>
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
	  virtual CATBoolean AddPolyline			   (const CATUnicodeString& iTrajectType,
													const CATUnicodeString& iFeedrateType,
													const CATListOfDouble& iX,
													const CATListOfDouble& iY,
													const CATListOfDouble& iZ) = 0;	
/**
*   Add a subtraject describing a "Circle Arc" (circular motion).<br>
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
*   @param iNormale
*     The oriented normal to the plane containing the circle arc
*   @param iCenter
*     The center of the circle arc
*    @param iRadius
*     The radius of the circle arc.
**/
      virtual CATBoolean AddCircleArc			   (const CATUnicodeString& iTrajectType,
													const CATUnicodeString& iFeedrateType,
													const CATListOfDouble&  iX,
													const CATListOfDouble&  iY,
													const CATListOfDouble&  iZ,
													const CATMathVector&    iNormal,
												    const CATMathPoint&     iCenter,
												          double            iRadius)  = 0 ;
/**
*   Add a subtraject describing a "PP command".<br>
*   A PP Syntax is a "NC Command" described in PP Table and evaluated from it during generation of APT file.
*   @param iPPCommand
*      The name of "NC Command"
*   @param iSequenceNumber
*      The number of sequence in the PP Table
**/
	  virtual CATBoolean AddPPCommand             (const CATUnicodeString& iPPCommand,
		                                           int SequenceNumber = 1) = 0;
/**
*   Add a subtraject describing a "user syntax".<br>
*   A user syntax is a string generated as it is in APT file.
*   @param iUserSyntax
*      The user syntax
**/
	  virtual CATBoolean AddUserSyntax            (const CATUnicodeString& iUserSyntax) = 0;	  
/**
*   Add contact points in the last subtraject.<br>
*   The last subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iX,iY,iZ
*     The coordinates of contact points
*/     
	  virtual CATBoolean AddContactPoints         (const CATListOfDouble& iX,
												   const CATListOfDouble& iY,
												   const CATListOfDouble& iZ) = 0;
/**
*   Add contact normals in the last subtraject.<br>
*   The last subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iX,iY,iZ
*     The coordinates of contact normals
*/     
      virtual CATBoolean AddContactNormals        (const CATListOfDouble& iX,
												   const CATListOfDouble& iY,
												   const CATListOfDouble& iZ) = 0;
/**
*   Add tool axis in the last subtraject (to describe a 5 axis motion).<br>
*   The last subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iX,iY,iZ
*     The coordinates of tool axis
*/     
      virtual CATBoolean AddToolAxis              (const CATListOfDouble& iX,
												   const CATListOfDouble& iY,
												   const CATListOfDouble& iZ) = 0;
/**
*   Save datas relative to the current object in the model.<br>
*   THIS SERVICE MUST BE CALLED AT THE END OF CREATION AND STORAGE OF SUBTRAJECTS IN THE MULTIPLE MOTION.
*/  
	  virtual CATBoolean SaveDatas                () = 0;

/**
*   Type of subtraject that can exist in a multiple motion object.<br>
*      <br><b>Legal values</b>:
*      <ul>
*      <li>Polyline : subtraject describing a "polyline" (Set of linear motions)</li>
*      <li>Circle : subtraject describing a "circle arc" (circular motion)  </li>
*      <li>PPCommand : subtraject describing a "PP command" </li>
*      <li>UserSyntax : subtraject describing a "user syntax" </li>
*      <li>Helix : subtraject describing an "Helix" (helical motion) </li>
*      </ul>
*/  
      enum SubTrajectType {PolyLine=0, Circle=1, PPCommand=2, UserSyntax=3, Helix=4};
/**
*   Gets type of a subtraject.<br>
*   @param iSubTraject
*     The number of the subtraject
*   @param oSubTraject
*     The type of the subtraject
*/  	  
	  virtual CATBoolean GetSubTrajectType        (int iSubTraject,
												   SubTrajectType& oSubTrajectType) = 0;

/**
*   Gets characteristics of a subtraject describing a "circle arc" (circular motion).<br>
*   @param iSubTraject
*     The number of subtraject
*   @param oNormal
*     The oriented normal to the plane containing the circle arc
*   @param oCenter
*     The center of the circle arc
*   @param oRadius
*     The radius of the circle arc.
*   @param oAngle
*     The angle described by the circle arc.
*   @param oStartTangent
*     The tangent vector to the circle at its start point    
*/  
	  virtual CATBoolean GetCircleCharacteristics (int iSubTraject,
												   CATMathVector& oNormal,
												   CATMathPoint&  oCenter,
												   double&        oRadius,
												   CATAngle&      oAngle,
												   CATMathVector& oStartTangent) = 0;

/**
*   Gets characteristics of a subtraject describing a "PP command".<br>
*   @param iSubTraject
*     The number of subtraject
*   @param oPPCommand
*      The name of "NC Command"
*   @param oSequenceNumber
*      The number of sequence in the PP Table
*   
*/  
	  virtual CATBoolean GetPPCommandCharacteristics  (int               iSubTraject,
		                                               CATUnicodeString& oPPCommandName,
		                                               int&              oSequenceNumber) = 0;

/**
*   Evaluates syntax relative to a subtraject describing a "PP command".<br>
*   @param iSubTraject
*     The number of subtraject
*   @param oSyntax
*	 The value of syntax 
**/
  virtual CATBoolean GetCommandEvaluation (int iSubTraject,CATListValCATUnicodeString& oSyntax) =0 ;


/**
*   Gets characteristics of a subtraject describing a "user syntax".<br>
*   @param iSubTraject
*     The number of subtraject
*   @param oUserSyntax
*      The user syntax
*   
*/ 	  
	  virtual CATBoolean GetUserSyntaxCharacteristics (int               iSubTraject,
		                                               CATUnicodeString& oUserSyntax) = 0;
/**
*   Sets a local feedrate on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iFeedrate
*	   The local feedrate
*   @param iSubTraject
*	   The number of subtraject
**/
      virtual CATBoolean SetSpecificFeedrate (CATIMfgToolPathFeedrate_var& iFeedrate,
		                                      int iSubTraject=1) =0 ;
/**
*   Retrieves local feedrate on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param oFeedrate 
*	The local feedrate
*   @param iSubTraject
*	   The number of subtraject
*   @return
*    Return code.
*   <br><b>Legal values</b>:
*   <ul>
*   <li>TRUE: a local feedrate has been found </li>
*   <li>FALSE: no local feedrate has been found</li>
*   </ul>
**/
      virtual CATBoolean GetSpecificFeedrate (CATIMfgToolPathFeedrate_var& oFeedrate,
		  int iSubTraject=1) =0 ;
/**
*   Sets a local spindle on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iSpindle
*	   The local spindle
*   @param iSubTraject
*	   The number of subtraject
**/
      virtual CATBoolean SetSpecificSpindle  (CATIMfgToolPathSpindle_var& iSpindle,
											  int                         iSubTraject=1) =0 ;
/**
*   Retrieves local spindle on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param oSpindle
*	The local spindle
*   @param iSubTraject
*	   The number of subtraject
*   @return
*    Return code.
*   <br><b>Legal values</b>:
*   <ul>
*   <li>TRUE: a local spindle has been found </li>
*   <li>FALSE: no local spindle has been found</li>
*   </ul>
**/
      virtual CATBoolean GetSpecificSpindle  (CATIMfgToolPathSpindle_var& oSpindle,
											  int                         iSubTraject=1) =0 ;
/**
*   Sets a local tool axis on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iSpindle
*	   The local tool axis
*   @param iSubTraject
*	   The number of subtraject
**/
      virtual CATBoolean SetSpecificToolAxis (CATIMfgToolPathToolAxis_var& iToolAxis,
											  int                         iSubTraject=1) =0 ;
/**
*   Retrieves local tool axis on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param oToolAxis
*	The local tool axis
*   @param iSubTraject
*	   The number of subtraject
*   @return
*    Return code.
*   <br><b>Legal values</b>:
*   <ul>
*   <li>TRUE: a local tool axis has been found </li>
*   <li>FALSE: no local tool axis has been found</li>
*   </ul>
**/
      virtual CATBoolean GetSpecificToolAxis (CATIMfgToolPathToolAxis_var& oToolAxis,
											  int                          iSubTraject=1) =0 ;
/**
*   Sets a local tool corrector number on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param iCorrectorNumber
*      The tool corrector number value
*   @param iSubTraject
*	   The number of subtraject
**/
      virtual CATBoolean SetSpecificCorrectorNumber (int iCorrectorNumber,int iSubTraject) =0 ;
/**
*   Inverts the way of rotation of the spindle on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
**/
	  virtual CATBoolean SetSpindleInverseRotationWay (int iSubTraject) = 0;
/**
*   Sets the normal way of rotation for the spindle on a subtraject (according to the right/left way of rotation for the tool).<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
**/
	  virtual CATBoolean SetSpindleNormalRotationWay (int iSubTraject) = 0;
/**
*   Retrieves the way of rotation for the spindle on a subtraject.<br>
*   The subtraject must be a "Polyline", a "Circle Arc" or an "Helix".
*   @param oRotationWay
*   <br><b>Legal values</b>:
*   <ul>
*   <li>oRotationWay = 1 : normal way of rotation of the spindle (according the right/left way of rotation for the tool)</li>
*   <li>oRotationWay = 2 : inverted way of rotation </li>
*   </ul>
*   @param iSubTraject
*	   The number of subtraject
**/
	  virtual CATBoolean GetSpindleRotationWay (int& oRotationWay,int iSubTraject) = 0;
/**
*     Retrieves the total number of 'PQR' vectors stored in the MultipleMotion.
*   @param oNumber
* 	   The number of 'PQR' vectors
*      <br><b>Legal values</b>:
*      <ul>
*      <li> 0 : no 'PQR' vector in the multiple motion object </li>
*      <li> >0 : at least one subtraject contains a 'PQR' vector </li>
*      </ul>
*/  
	  virtual CATBoolean GetTotalNumberOfPQRDatas (int& oNumber) = 0;
/**
*     Retrieves the number of 'PQR' vectors for a subtraject.
*   @param iSubTraject
* 	   The index of subtraject
*   @param oNumber
* 	   The number of 'PQR' vectors
*/     
	  virtual CATBoolean GetNumberOfPQRDatas (int iSubTraject,
											  int& oNumber) = 0;
/**
*     Retrieves the coordinates of 'PQR' vectors for a subtraject.
*   @param iSubTraject
* 	   The index of subtraject
*   @param oP,oQ,oR
* 	   The lists of coordinates of 'PQR' vectors
*/      
	  virtual CATBoolean GetPQRDatas (int iSubTraject,
									  CATListOfDouble&  oP,
									  CATListOfDouble&  oQ,
									  CATListOfDouble&  oR) = 0;
/**
*     Retrieves the coordinates of one 'PQR' vector for a subtraject.
*   @param iSubTraject
* 	   The index of subtraject
*   @param iIndex
*      The index of point in the subtraject
*   @param oP,oQ,oR
* 	   The coordinates of one 'PQR' vector
*/  
	  virtual CATBoolean GetPQRData (int iSubMotion,
								     int iIndex,
								     double&  oP,
								     double&  oQ,
								     double&  oR) = 0;

/**
*   Edition status for each point of the object.<br>
*      <br><b>Legal values</b>:
*      <ul>
*      <li>None         : point has not edited</li>
*      <li>Modified     : point has been modified</li>
*      <li>Inserted     : point has been inserted </li>
*      <li>RemovedAfter : at least one point has been removed after the current one </li>
*      </ul>
*/  
      enum EditionStatus {TP_None=0, Modified=1, Inserted=2, RemovedAfter=3};

/**
*     Retrieves the edition status for a point of the tool path.
*     @param iNumber
* 	      The number of the point
*     @param oEditionStatus
*         The edition status of the point
*/  
	  virtual CATBoolean GetEditionStatus (int                                     iNumber,
		                                   CATIMfgTPMultipleMotion::EditionStatus  &oEditionStatus) = 0;


/**
*     Sets the edition status for a point of the tool path.
*     @param iNumber
* 	      The number of the point
*     @param iEditionStatus
*         The edition status of the point
*/  
	  virtual CATBoolean SetEditionStatus (int                                      iNumber,
		                                   CATIMfgTPMultipleMotion::EditionStatus   iEditionStatus) = 0;
/**
* @nodoc
*/     
	  virtual CATBoolean AddPolyline			   (const CATUnicodeString& iTrajectType,
													const CATUnicodeString& iFeedrateType,
													double X,double Y,double Z) = 0;
/**
* @nodoc
*/     
	  virtual CATBoolean AddTipPointInLastPolyline      (double X,double Y,double Z) = 0;
/**
* @nodoc
*/     
      virtual CATBoolean AddContactPointInLastPolyline  (double X,double Y,double Z) = 0;
/**
* @nodoc
*/     
      virtual CATBoolean AddContactNormalInLastPolyline (double X,double Y,double Z) = 0;
/**
* @nodoc
*/     
      virtual CATBoolean AddToolAxisInLastPolyline      (double X,double Y,double Z) = 0;
/**
* @nodoc
*/     
	  virtual CATBoolean GetPointsStorageMode         (int& imode) = 0;
/**
* @nodoc
*/     	  
	  virtual CATBoolean TransferPointsToExternalFile (const CATUnicodeString& Path) = 0;
/**
* @nodoc
*/     	  
	  virtual CATBoolean TransferPointsFromExternalFile () = 0;
	  
/**
* @nodoc
*/     
	  virtual CATBoolean SetTipPoint (int iNumber,double iX,double iY,double iZ) = 0;
	  
/**
* @nodoc
*/     
	  virtual CATBoolean SetContactPoint (int iNumber,double iX,double iY,double iZ) = 0;
	  
/**
* @nodoc
*/     
	  virtual CATBoolean SetContactNormal (int iNumber,double iX,double iY,double iZ) = 0;
	  
/**
* @nodoc
*/     
	  virtual CATBoolean SetToolAxisPoint (int iNumber,double iX,double iY,double iZ) = 0;
/**
* @nodoc
*/     	  
	  virtual CATBoolean ClearContactPoints () =0 ;
/**
* @nodoc
*/     
	  virtual CATBoolean ClearContactNormals () = 0;
/**
* @nodoc
*/     
	  virtual CATBoolean ClearToolAxis () = 0;
/**
* Quick access to coordinates in the case of a packed tool path.<br>
* To avoid possible performance problems (especially when coordinates
* of points are not read in a growing order), you should call this method 
* before to access points (with GetTipPoint, etc ..).
* If you call this method, you have to call "EndReadExternalFile"
* at the end of the session to free memory (when you do not need anymore to
* access coordinates).
*/     	  
	  virtual CATBoolean StartReadExternalFile () = 0;
/**
* This method has to be used if "StartReadExternalFile" has been used.
*/     
	  virtual CATBoolean EndReadExternalFile () = 0;
/**
* @nodoc
*/     	  
	  virtual HRESULT CheckExternalFile () = 0;	  
/**
* @nodoc
*/     
	  virtual CATBoolean SetApproximativeNumberOfDatas (int NumberOfTipPoints,
		  int NumberOfContactPoints,
		  int NumberOfContactNormals,
		  int NumberOfToolAxis,
		  int NumberOfSubTrajects,
		  int NumberOfCircles,
		  int NumberOfPPCommands,
		  int NumberOfUserSyntax) = 0;

/**
* @nodoc
*/   
	  virtual CATBoolean DeleteDatas                   () = 0;

/**
* @nodoc
*/   
	  virtual CATBoolean Optimize                      () = 0;

/**
* @nodoc
*/   
	  virtual CATBoolean RemoveExternalFile            () = 0;

/**
* @nodoc
*/   	  
	  virtual CATBoolean SetLocalFeedrate (int    iSubTraject,
										   int    iLocalFeedrate)=0;

/**
* @nodoc
*/  
	  virtual CATBoolean AddPQRDatas (int                     iSubMotion,
									  const CATListOfDouble&  iP,
									  const CATListOfDouble&  iQ,
									  const CATListOfDouble&  iR) = 0;

/**
* @nodoc
*/  
	  virtual CATBoolean GetTipPointsAndToolAxis (int iFirstPoint,int iLastPoint,
		                                          CATListOfDouble& oListeX, CATListOfDouble& oListeY, CATListOfDouble& oListeZ,
												  CATListOfDouble& oListeAX,CATListOfDouble& oListeAY,CATListOfDouble& oListeAZ) = 0;
/**
* @nodoc
*/  
	  virtual CATBoolean GetCompoundTraject (CATBaseUnknown_var& oCompound) = 0;

/**
* @nodoc
*/  
      virtual CATBoolean GetLocalCharacteristics (int iPoint1,
												  int iPoint2,
												  double& oMillingTime,
				                                  double& oTotalTime,
				                                  long& oNumberOfLinearMotions,
				                                  long& oNumberOfCircularMotions) =0 ;
	  
/**
* @nodoc
*/  
	  virtual HRESULT InsertPPCommand(int iblock, const CATUnicodeString& iPPCommandName, int iSequenceNumber, const CATISpecObject_var & ihSynchronisation  ) =0;

/**
* @nodoc
*/  
	  virtual HRESULT RemovePPCommand(int iblock) =0;
/**
* @nodoc
*/ 
	  virtual HRESULT RemovePPCommandWithSpecObj(const CATISpecObject_var& ihSynchronisation) =0;
/**
* @nodoc
*/  
	  virtual HRESULT GetSpecObjectOfPPCommand( int iblock, CATISpecObject_var & ohSynchronisation ) =0;

/**
* @nodoc
*/  
	  virtual HRESULT InsertUserSyntax(int iblock, const CATUnicodeString& iUserSyntax) =0;

/**
* @nodoc
*/  
	  virtual HRESULT RemoveUserSyntax(int iblock) =0;

/**
*   Add a subtraject describing a "Helix" (helical motion).<br>
*   @param iTrajectType
*      The type of traject
*      <br><b>Legal values</b>:
*      <ul>
*      <li>"TPApproachTraject" : approach traject </li>
*      <li>"TPMachiningTraject" : machining traject </li>
*      <li>"TPRetractTraject" : retract traject </li>
*      <li>"TPLinkingTraject" : linking traject </li>
*      <li>"TPBetweenPathTraject" : traject between path </li>
*      <li>"TPApproachTrajectAlongSection" : approach traject along section< /li>
*      <li>"TPLinkingTrajectAlongSection" : linking traject along section </li>
*      <li>"TPRetractTrajectAlongSection" : retract traject along section </li>
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
*      <li>"TPAirCuttingFeedrate" : air cutting feedrate
*      </ul>
*   @param iX
*     The X coordinate of tip points (discretization of the helix)
*   @param iY
*     The Y coordinate of tip points (discretization of the helix)
*   @param iZ
*     The Z coordinate of tip points (discretization of the helix)
*   @param iAxis
*     The oriented axis of the helix
*   @param iCenter
*     The center of the helix
*    @param iRadius
*     The radius of the helix
*    @param iStartTangent
*     The oriented tangent to the helix at the start point
*    @param iPitch
*     The pitch of the helix
**/
      virtual HRESULT AddHelix			   (const CATUnicodeString& iTrajectType,
												const CATUnicodeString& iFeedrateType,
												const CATListOfDouble&  iX,
												const CATListOfDouble&  iY,
												const CATListOfDouble&  iZ,
												const CATMathVector&    iAxis,
											    const CATMathPoint&     iCenter,
											          double            iRadius,
												const CATMathVector&    iStartTangent,
													  double            iPitch)  = 0 ;

/**
*   Gets characteristics of a subtraject describing a "helix" (helical motion).<br>
*   @param iSubTraject
*     The number of subtraject
*   @param oAxis
*     The oriented axis of the helix
*   @param oCenter
*     The center of the helix
*   @param oRadius
*     The radius of the helix
*   @param oStartTangent
*     The tangent vector to the helix at its start point    
*   @param oPitch
*     The pitch of the helix    
*/  
	  virtual HRESULT GetHelixCharacteristics (int iSubTraject,
												   CATMathVector& oAxis,
												   CATMathPoint&  oCenter,
												   double&        oRadius,
												   CATMathVector& oStartTangent,
												   double&        oPitch) = 0;

};

CATDeclareHandler(CATIMfgTPMultipleMotion, CATIMfgToolMotion);

#endif







