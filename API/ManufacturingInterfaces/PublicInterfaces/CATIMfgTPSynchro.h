/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgTPSynchro_H
#define CATIMfgTPSynchro_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATErrorDef.h"
#include "CATListOfDouble.h"
#include "CATListOfInt.h"

class CATUnicodeString;
class CATMathVector;
class CATMathPoint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPSynchro;
#else
extern "C" const IID IID_CATIMfgTPSynchro;
#endif

/**
*    Interface on the tool path to give an index value to each entity of the tool path. <br>
*    Depending on options, each index value can indicate a linear motion, a circular motion 
*      or a @href CATIMfgToolPathCycle object to describe a machining cycle.
*/

class ExportedByMfgItfEnv CATIMfgTPSynchro : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
	/**
	*   Mode of management for circle.<br>
	*      <br><b>Legal values</b>:
	*      <ul>
	*      <li>Circle_OFF : each circle is seen as a set of linear motions and each point
	*            of discretization of the circle has an index value </li>
	*      <li>Circle_ON : only one index value for the circle  </li>
	*      </ul>
	*/  
	  enum CircleMode{Circle_OFF=0, Circle_ON=1};

	/**
	*   Mode of management for helical.<br>
	*      <br><b>Legal values</b>:
	*      <ul>
	*      <li>Helix_OFF : each helix is seen as a set of linear motions and each point
	*            of discretization of the helix has an index value </li>
	*      <li>Helix_ON : only one index value for the helix  </li>
	*      </ul>
	*/  
	  enum HelixMode{Helix_OFF=0, Helix_ON=1};

	/**
	*   Mode of management for cycle.<br>
	*      <br><b>Legal values</b>:
	*      <ul>
	*      <li>Cycle_OFF : each cycle is seen as a set of motions (linear, circular,..) or PP instructions and
	*        each one has an index value </li>
	*      <li>Cycle_ON : only one index value for the @href CATIMfgToolPathCycle object which describes the machining cycle.</li>
	*      </ul>
	*/  
	  enum CycleMode {Cycle_OFF=0, Cycle_ON=1};

	/**
	*   Opens the working session.<br>
	*   First method to call when using this interface.
	*/  
	  virtual HRESULT OpenSynchroSession		             () = 0;	

	/**
	*   Sets the management mode for circle.<br>
	*   @param iCircleMode
    *     The mode of management for circle
	*/  
	  virtual HRESULT SetCircleMode                          (const CATIMfgTPSynchro::CircleMode& iCircleMode) = 0;

	/**
	*   Sets the management mode for cycle.<br>
	*   @param iCycleMode
    *     The mode of management for cycle
	*/  
	  virtual HRESULT SetCycleMode                           (const CATIMfgTPSynchro::CycleMode& iCycleMode) = 0;
	
	/**
	*   Sets the management mode for helical.<br>
	*   @param iHelixMode
    *     The mode of management for helix
	*/  
	  virtual HRESULT SetHelixMode                           (const CATIMfgTPSynchro::HelixMode& iHelix) = 0;

	/**
	*   Returns the total number of index values.<br>
	*   @param oSubMotion
    *     The number of index values
	*/  
	  virtual HRESULT GetNumberOfMotions                     (int& oSubMotion) = 0;

	/**
	*   Retrieves data on the tool path from an index value.<br>
	*   @param iIndex
	*     The value of index
	*   @param ospToolPathData
    *     The interface on the tool path objet (see @href CATIMfgTPMultipleMotion, @href CATIMfgTPMultipleMotionWithProfileData,
	*     @href CATIMfgToolPathCycle )
	*   @param oTipPointRank
	*     The number of tip point (in case of a linear motion on an @href CATIMfgTPMultipleMotion object)
	*   @param oSubTrajectRank
	*     The number of sub-motion (in case of an @href CATIMfgTPMultipleMotion object)
	*/  
	  virtual HRESULT GetToolPathDataFromIndex               (int                 iIndex,
												              CATBaseUnknown_var& ospToolPathData,
												              int&                oTipPointRank,
												              int&                oSubTrajectRank) = 0;
	/**
	*   Retrieves an index value from data on the tool path.<br>
	*   @param ispToolPathData
    *     The interface on the tool path objet (see @href CATIMfgTPMultipleMotion, @href CATIMfgTPMultipleMotionWithProfileData,
	*     @href CATIMfgToolPathCycle )
	*   @param iTipPointRank
	*     The number of tip point (in case of a linear motion on an @href CATIMfgTPMultipleMotion object)
	*   @param iSubTrajectRank
	*     The number of sub-motion (in case of an @href CATIMfgTPMultipleMotion object)
	*   @param oIndex
	*     The value of index
	*/  
	  virtual HRESULT GetIndexFromToolPathData               (const CATBaseUnknown_var& ispToolPathData,
												              int                       iTipPointRank,
												              int                       iSubTrajectRank,
												              int&                      oIndex) = 0;

	/**
	*   Closes the working session.<br>
	*   Last method to call when using this interface.
	*/  
	  virtual HRESULT CloseSynchroSession                    () = 0;

	/**
	*   Adds a subtraject describing a "Polyline" (set of linear motions) in the last MfgMultipleMotion object of the tool path.<br>
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
	*   @param oIndex
	*     The list of index values (an index value for each tip point)
	*/  
	  virtual HRESULT AddPolylineInLastMultipleMotion        (const CATUnicodeString& iTrajectType,
													          const CATUnicodeString& iFeedrateType,
													          const CATListOfDouble&  iX,
													          const CATListOfDouble&  iY,
													          const CATListOfDouble&  iZ,
													          CATListOfInt&           oIndex) = 0;

/**
*   Add a subtraject describing a "Circle Arc" (circular motion) in the last MfgMultipleMotion object of the tool path.<br>
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
*     The radius of the circle arc
*   @param oIndex
*     The list of index values (depending on management mode for circle, an index value for each point of discretization of the circle
*     or only one index value for the circle)
**/
      virtual HRESULT AddCircleArcInLastMultipleMotion	     (const CATUnicodeString& iTrajectType,
															  const CATUnicodeString& iFeedrateType,
															  const CATListOfDouble&  iX,
															  const CATListOfDouble&  iY,
															  const CATListOfDouble&  iZ,
															  const CATMathVector&    iNormal,
															  const CATMathPoint&     iCenter,
															  double                  iRadius,
															  CATListOfInt&           oIndex) = 0;
/**
*   Add a subtraject describing a "Helix" (helical motion) in the last MfgMultipleMotion object of the tool path.<br>
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
*     The Z coordinates of tip points (discretization of the helix)
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
*   @param oIndex
*     The list of index values (depending on management mode for helix, an index value for each point of discretization of the helix
*     or only one index value for the helix)
**/
      virtual HRESULT AddHelixInLastMultipleMotion	(const CATUnicodeString& iTrajectType,
												     const CATUnicodeString& iFeedrateType,
													 const CATListOfDouble&  iX,
													 const CATListOfDouble&  iY,
													 const CATListOfDouble&  iZ,
													 const CATMathVector&    iAxis,
													 const CATMathPoint&     iCenter,
													 double                  iRadius,
													 const CATMathVector&    iStartTangent,
													 double                  iPitch,
													 CATListOfInt&           oIndex) = 0;

/**
*   Adds a subtraject describing a "PP command" in the last MfgMultipleMotion object of the tool path.<br>
*   A PP Syntax is a "NC Command" described in PP Table and evaluated from it during generation of APT file.
*   @param iPPCommand
*      The name of "NC Command"
*   @param iSequenceNumber
*      The number of sequence in the PP Table
*   @param oIndex
*     The list of index values (one value for the "PP command")
**/
	  virtual HRESULT AddPPCommandInLastMultipleMotion       (const CATUnicodeString& iPPCommand,
															  int                     iSequenceNumber,
															  CATListOfInt&           oIndex) = 0;
/**
*   Adds a subtraject describing a "user syntax" in the last MfgMultipleMotion object of the tool path.<br>
*   A user syntax is a string generated as it is in APT file.
*   @param iUserSyntax
*      The user syntax
*   @param oIndex
*     The list of index values (one value for the "user syntax")
**/
	  virtual HRESULT AddUserSyntaxInLastMultipleMotion      (const CATUnicodeString& iUserSyntax,
												              CATListOfInt&     oIndex) = 0;	  

};

CATDeclareHandler(CATIMfgTPSynchro, CATBaseUnknown);

#endif







