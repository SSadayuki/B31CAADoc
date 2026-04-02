/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgTPSingleMotion_H
#define CATIMfgTPSingleMotion_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolMotion.h"
#include "CATIMfgToolPathFeedrate.h"
#include "CATIMfgToolPathSpindle.h"
#include "CATIMfgToolPathToolAxis.h"
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATMathSetOfPoints.h"
#include "CATMathSetOfVectors.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPSingleMotion;
#else
extern "C" const IID IID_CATIMfgTPSingleMotion;
#endif

/**
* Interface for objects describing single tool motions (like polyline traject object, circular traject object).
* <b>Role</b>: This interface offers services to manage attributes on the single motion object.<br>
*
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface to modelize your tool motions.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
* 
* @see CATIMfgTPMultipleMotion
*/

class ExportedByMfgItfEnv CATIMfgTPSingleMotion : public CATIMfgToolMotion
{
  CATDeclareInterface ;
  
  public :

  /**
   *   Sets a local feedrate on the single motion object.
   *   @param iFeedrate
   *	The local feedrate
   **/
  virtual CATBoolean SetSpecificFeedrate (CATIMfgToolPathFeedrate_var& iFeedrate) =0 ;

  /**
   *   Retrieves local feedrate on the single motion object.
   *   @param oFeedrate 
   *	The local feedrate
   *   @return
   *    Return code.
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE: a local feedrate has been found </li>
   *   <li>FALSE: no local feedrate has been found</li>
   *   </ul>
   **/
  virtual CATBoolean GetSpecificFeedrate (CATIMfgToolPathFeedrate_var& oFeedrate) =0 ;

  /**
   *   Sets a local tool axis on the single motion object.
   *   @param iToolAxis
   *	The local tool axis
   **/
  virtual CATBoolean SetSpecificToolAxis (CATIMfgToolPathToolAxis_var& iToolAxis) =0 ;

  /**
   *   Retrieves local tool axis on the single motion object.
   *   @param oToolAxis 
   *	The local tool axis
   *   @return
   *    Return code.
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE: a local tool axis has been found </li>
   *   <li>FALSE: no local tool axis has been found</li>
   *   </ul>
   **/
  virtual CATBoolean GetSpecificToolAxis (CATIMfgToolPathToolAxis_var& oToolAxis) =0 ;

  /**
   *   Sets a local spindle on the single motion object.
   *   @param iSpindle
   *	The local spindle
   **/
  virtual CATBoolean SetSpecificSpindle (CATIMfgToolPathSpindle_var& iSpindle) =0 ;

   /**
   *   Retrieves local spindle on the single motion object.
   *   @param oSpindle
   *	The local spindle
   *   @return
   *    Return code.
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE: a local spindle has been found </li>
   *   <li>FALSE: no local spindle has been found</li>
   *   </ul>
   **/
  virtual CATBoolean GetSpecificSpindle (CATIMfgToolPathSpindle_var& oSpindle) =0 ;

  /**
   *   Inverts the way of rotation of the spindle.
   **/
  virtual CATBoolean SetSpindleInverseRotationWay () =0 ;

  /**
   *   Sets the normal way of rotation for the spindle (according to the right/left way of rotation for the tool).
   **/
  virtual CATBoolean SetSpindleNormalRotationWay () =0 ;

  /**
   *   Retrieves the way of rotation for the spindle.
   *   @param oRotationWay
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>oRotationWay = 1 : normal way of rotation of the spindle (according the right/left way of rotation for the tool)</li>
   *   <li>oRotationWay = 2 : inverted way of rotation </li>
   *   </ul>
   **/
  virtual CATBoolean GetSpindleRotationWay (int& oRotationWay) =0 ;

  /**
   *   Sets coordinates of tip points on the single motion.
   *   @param iTipPoints
   *	  The list of tip points
   **/
  virtual CATBoolean SetTipPoints (CATMathSetOfPoints& iTipPoints) =0 ;

  /**
   *   Sets coordinates of contact points on the single motion.
   *   @param iContactPoints
   *	  The list of contact points
   **/
  virtual CATBoolean SetContactPoints (CATMathSetOfPoints& iContactPoints) =0 ;

  /**
   *   Sets coordinates of contact normals on the single motion.
   *   @param iContactNormals
   *	  The list of contact normals
   **/
  virtual CATBoolean SetContactNormals (CATMathSetOfVectors& iContactNormals) =0 ;

  /**
   *   Sets coordinates of tool axis (for 5 axis) on the single motion.
   *   @param iToolAxis
   *	  The list of tool axis
  **/
  virtual CATBoolean SetToolAxisPoints (CATMathSetOfVectors& iToolAxis) =0 ;

  /**
   *   Sets a local tool corrector number on the single motion.
   *   @param iToolAxis
   *	  The tool corrector number value
   **/
  virtual CATBoolean SetSpecificCorrectorNumber (const int iCorrectorNumber) =0 ;

  /**
   *	Unsets the local tool corrector number on the single motion.
   **/
  virtual CATBoolean UnsetSpecificCorrectorNumber () =0 ;
};

CATDeclareHandler(CATIMfgTPSingleMotion, CATIMfgToolMotion);

#endif







