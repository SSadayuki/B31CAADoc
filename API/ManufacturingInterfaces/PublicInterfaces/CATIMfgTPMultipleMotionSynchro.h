/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgTPMultipleMotionSynchro_H
#define CATIMfgTPMultipleMotionSynchro_H

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
extern ExportedByMfgItfEnv IID IID_CATIMfgTPMultipleMotionSynchro;
#else
extern "C" const IID IID_CATIMfgTPMultipleMotionSynchro;
#endif

/**
* This interface offers methods to add entities in the last MfgTPMultipleMotion object of a tool path. <br>
* Methods return list of index that can be used with @href CATIMfgTPSynchro interface.
*/

class ExportedByMfgItfEnv CATIMfgTPMultipleMotionSynchro : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Adds a subtraject describing a "Polyline" (set of linear motions).<br>
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
**/
	  virtual HRESULT AddPolyline						     (const CATUnicodeString& iTrajectType,
													          const CATUnicodeString& iFeedrateType,
													          const CATListOfDouble&  iX,
													          const CATListOfDouble&  iY,
													          const CATListOfDouble&  iZ,
													          CATListOfInt&           oIndex) = 0;
/**
*   Adds a subtraject describing a "Circle Arc" (circular motion).<br>
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
*   @param oIndex
*     The list of index values (depending on management mode for circle, an index value for each point of discretization of the circle
*     or only one index value for the circle)
**/
      virtual HRESULT AddCircleArc							 (const CATUnicodeString& iTrajectType,
															  const CATUnicodeString& iFeedrateType,
															  const CATListOfDouble&  iX,
															  const CATListOfDouble&  iY,
															  const CATListOfDouble&  iZ,
															  const CATMathVector&    iNormal,
															  const CATMathPoint&     iCenter,
															  double                  iRadius,
															  CATListOfInt&           oIndex) = 0;
/**
*   Adds a subtraject describing a "PP command".<br>
*   A PP Syntax is a "NC Command" described in PP Table and evaluated from it during generation of APT file.
*   @param iPPCommand
*      The name of "NC Command"
*   @param iSequenceNumber
*      The number of sequence in the PP Table
*   @param oIndex
*     The list of index values (one value for the "PP command")
**/
	  virtual HRESULT AddPPCommand							 (const CATUnicodeString& iPPCommand,
															  int                     iSequenceNumber,
															  CATListOfInt&           oIndex) = 0;
/**
*   Adds a subtraject describing a "user syntax".<br>
*   A user syntax is a string generated as it is in APT file.
*   @param iUserSyntax
*      The user syntax
*   @param oIndex
*     The list of index values (one value for the "user syntax")
**/
	  virtual HRESULT AddUserSyntax                          (const CATUnicodeString& iUserSyntax,
												              CATListOfInt&     oIndex) = 0;	  
/**
* @nodoc
*/
	  virtual void Clean () = 0;


};

CATDeclareHandler(CATIMfgTPMultipleMotionSynchro, CATBaseUnknown);

#endif







