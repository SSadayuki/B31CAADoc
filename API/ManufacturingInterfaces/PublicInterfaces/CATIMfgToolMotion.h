/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolMotion_H
#define CATIMfgToolMotion_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "IUnknown.h"
#include "CATMathVector.h"
#include "CATIMfgElementaryTraject.h"
#include "CATIMfgToolPathFeedrate.h"
#include "CATIMfgToolPathSpindle.h"
#include "CATIMfgToolPathToolAxis.h"
#include "CATIMfgToolPathToolAssembly.h"
#include "CATUnicodeString.h"
#include "CATBooleanDef.h"
#include "CATICkeParm.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolMotion;
#else
extern "C" const IID IID_CATIMfgToolMotion;
#endif

/**
* Interface to manage tool motion object.
* <b>Role</b>: This interface offers services to manage attributes of tool motion object <br>
*/

class ExportedByMfgItfEnv CATIMfgToolMotion : public CATIMfgElementaryTraject
{
  CATDeclareInterface ;  

  public:

  /**
  * Retrieves total number of subtrajects for a tool motion.
  *   @param oNumber
  *      The total number of subtrajects
  *   <br><b>Legal values</b>:
  *   <ul>
  *   <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
  *   <li>>=0 : for a @href CATIMfgTPMultipleMotion object</li>
  *   </ul>
  */
  virtual CATBoolean GetNumberOfSubTrajects   (int& oNumber) = 0;
  
 /**
  * Retrieves start and end number in the list of coordinates (tip points, contact points, contact normals, tool axis).
  *   @param iSubTraject
  *      The number of subtraject
  *      <br><b>Legal values</b>:
  *      <ul>
  *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
  *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
  *      </ul>
  *   @param oStartNumber
  *      The start number in the list of coordinates
  *   @param oEndNumber
  *      The end number in the list of coordinates
  */
  virtual CATBoolean GetStartAndEndNumber     (const int iSubTraject,
		                                             int& oStartNumber,
												     int& oEndNumber) = 0;
  /**
   *   Sets "symbolic" feedrate on a tool motion with a ratio to apply on it.<br>
   *   Feedrate is "symbolic" like "MachiningFeedrate".
   *   @param iString
   *      The feedrate symbol : use constants defined in CATMfgToolPathDefs.h
   *   @param iRatio
   *	  The ratio to apply on the feedrate
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   **/
  virtual CATBoolean SetReferenceFeedrate (const CATUnicodeString& iString,
					const double iRatio,const int iSubTraject) =0 ;

  /**
   *   Retrieves "symbolic" feedrate on a tool motion with the ratio to apply on it.<br>
   *   @param oString
   *      The feedrate symbol : use constants defined in CATMfgToolPathDefs.h
   *   @param oRatio
   *	  The ratio to apply on the feedrate
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   *   @return
   *      Return code.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>TRUE: feedrate stored on the tool motion is "symbolic"</li>
   *      <li>FALSE: feedrate stored on the tool motion is not "symbolic"</li>
   *      </ul>
   **/
  virtual CATBoolean GetFeedrate (CATUnicodeString& oString,double& oRatio,const int iSubTraject) =0 ;

  /**
   *   Retrieves value of "symbolic" feedrate stored on the tool motion.
   *   @param oFeedrate 
   *	  The feedrate value
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   *   @return
   *      Return code.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>TRUE: feedrate stored on the tool motion is "symbolic"</li>
   *      <li>FALSE: feedrate stored on the tool motion is not "symbolic"</li>
   *      </ul>
   **/
  virtual CATBoolean GetReferenceFeedrate (CATIMfgToolPathFeedrate_var& oFeedrate,const int iSubTraject) =0 ;

  /**
   *   Declares that the tool axis on the tool motion is equal to the tool axis stored on the manufacturing operation.
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   **/
  virtual CATBoolean SetReferenceToolAxis (const int iSubTraject) =0 ;

  /**
   *   Retrieves value of tool axis stored on the tool motion.
   *   @param oToolAxis
   *	 The tool axis value 
   *   @return
   *      Return code.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>TRUE: the tool axis on the tool motion is equal to the tool axis stored on the manufacturing operation</li>
   *      <li>FALSE: the tool axis on the tool motion is not equal to the tool axis stored on the manufacturing operation</li>
   *      </ul>
   **/
  virtual CATBoolean GetReferenceToolAxis (CATIMfgToolPathToolAxis_var& oToolAxis) =0 ;

  /**
   *   Declares that the spindle feedrate on the tool motion is equal to the spindle feedrate stored on the manufacturing operation.
   *   @param iRatio
   *	  The ratio to apply on the spindle feedrate stored on the manufacturing operation
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   **/
  virtual CATBoolean SetReferenceSpindle (const double iRatio,const int iSubTraject) =0 ;

  /**
   *   Retrieves spindle feedrate stored on the tool motion in the case where it is equal to the spindle
   *     feedrate stored on the manufacturing operation.
   *   @param oRatio
   *	  The ratio on the spindle feedrate
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   *   @return
   *      Return code.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>TRUE: the spindle feedrate on the tool motion is equal to the spindle feedrate stored on the manufacturing operation</li>
   *      <li>FALSE: the spindle feedrate on the tool motion is not equal to the spindle feedrate axis on the manufacturing operation</li>
   *      </ul>
   **/
  virtual CATBoolean GetSpindle (double& oRatio,const int iSubTraject) =0 ;

  /**
   *   Retrieves value of spindle feedrate stored on the tool motion.
   *   @param oFeedrate 
   *	  The feedrate value
   *   @return
   *      Return code.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>TRUE: spindle feedrate stored on the tool motion is equal to the spindle feedrate stored on the manufacturing operation</li>
   *      <li>FALSE: spindle feedrate stored on the tool motion is equal to the spindle feedrate stored on the manufacturing operation</li>
   *      </ul>
   **/
  virtual CATBoolean GetReferenceSpindle (CATIMfgToolPathSpindle_var& oSpindle) =0 ;

  /**
   *   Sets type of traject of the tool motion.
   *   @param iType
   *	The type of traject : use constants defined in CATMfgToolPathDefs.h
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   **/
  virtual CATBoolean SetTrajectType (const CATUnicodeString& iType,const int iSubTraject) =0 ;

  /**
   *   Retrieves type of traject of the tool motion.
   *   @param oType
   *	The type of traject  : use constants defined in CATMfgToolPathDefs.h
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   **/
  virtual CATBoolean GetTrajectType (CATUnicodeString& oType,const int iSubTraject) =0 ;

  /**
   *   Retrieves tool object stored on the manufacturing operation.
   *   @param oToolAssembly
   *	  The tool object
   **/
  virtual CATBoolean GetReferenceToolAssembly (CATIMfgToolPathToolAssembly_var& oToolAssembly) =0 ;

  /**
   *   Retrieves tool object stored on the manufacturing operation.
   *   @param oToolAssembly
   *	  The tool object (supports @href CATIMfgTool interface)
   **/
   virtual CATBoolean GetToolAssembly (CATBaseUnknown_var& oToolAssembly) =0 ;

   /**
   *   Retrieves the tool corrector number on the tool motion. 
   *   If possible, you should use GetCorrectorNumber (int& oCorrectorNumber,const int iSubTraject)
   *   @param oCorrectorNumber
   *	  The value of tool corrector number
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>0: no tool corrector defined</li>
   *      <li>other value: tool corrector number</li>
   *      </ul>  
   **/
   virtual CATBoolean GetCorrectorNumber (int& oCorrectorNumber) =0 ;

   /**
   *   Retrieves the tool corrector number on the tool motion.
   *   @param oCorrectorNumber
   *	  The value of tool corrector number
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>0: no tool corrector defined</li>
   *      <li>other value: tool corrector number</li>
   *      </ul>  
   *   @param iSubTraject
   *      The number of subtraject
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *      <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *      </ul>
   **/
   virtual CATBoolean GetCorrectorNumber (int& oCorrectorNumber,const int iSubTraject) =0 ;

   /**
   *   Applies tool correction on a given point.
   *   If possible, do not use this method.
   *   @param x1,y1,z1
   *	The coordinates of the point where to apply tool correction
   *   @param x2,y2,z2
   *	The coordinates of the point after tool correction
   **/
   virtual CATBoolean ApplyToolCompensation (const int numbloc,const double x1,const double y1,const double z1,
	                                      double& x2,double& y2,double& z2) =0 ;

   /**
   *   Retrieves CKE value of feedrate on the tool motion.
   *   @param oFeedrate
   *	The value of feedrate modelized by a CATICkeParm
   *   @param oRatio
   *	The ratio to apply on the feedrate value
   *   @param iSubTraject
   *      The number of subtraject
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *   <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *   </ul>
   **/
  virtual CATBoolean GetFeedrateConstantValue (CATICkeParm_var& oFeedrate,double& oRatio,const int iSubTraject) =0 ;

 /**
   *   Retrieves CKE value of spindle feedrate on the tool motion.
   *   @param oSpindle
   *	The value of spindle feedrate modelized by a CATICkeParm
   *   @param oRatio
   *	The ratio to apply on the spindle feedrate value
   *   @param iSubTraject
   *      The number of subtraject
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *   <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *   </ul>
   **/
  virtual CATBoolean GetSpindleConstantValue (CATICkeParm_var& oSpindle,double& oRatio,const int iSubTraject) =0 ;

 /**
   *   Retrieves value of tool axis on the tool motion.
   *   @param oToolAxis
   *	The value of tool axis
   *   @param iSubTraject
   *      The number of subtraject
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>=1  : for a @href CATIMfgTPSingleMotion object </li>
   *   <li>>=1 : for a @href CATIMfgTPMultipleMotion object</li>
   *   </ul>
   **/
  virtual CATBoolean GetToolAxisConstantValue (CATMathVector& oFeedrate,const int iSubTraject) =0 ;

  /**
   *	Retrieves the coordinates of a tip point of the tool motion.
   *    @param iNumber
   *	   The range of the tip point
   *    @param oX,oY,oZ
   *	   The coordinates of the tip point
   **/
  virtual CATBoolean GetTipPoint (int iNumber,double& oX,double & oY,double & oZ) = 0;

  /**
   *	Retrieves the coordinates of a contact point of the tool motion.
   *    @param iNumber
   *	   The range of the contact point
   *    @param oX,oY,oZ
   *	   The coordinates of the contact point
   **/
  virtual CATBoolean GetContactPoint (int iNumber,double& oX,double & oY,double & oZ) = 0;

  /**
   *	Retrieves the coordinates of a contact normal of the tool motion.
   *    @param iNumber
   *	   The range of the contact normal
   *    @param oX,oY,oZ
   *	   The coordinates of the contact normal
   **/
  virtual CATBoolean GetContactNormal (int iNumber,double& oX,double & oY,double & oZ) = 0;

  /**
   *	Retrieves the coordinates of a tool axis of the tool motion.
   *    @param iNumber
   *	   The range of the tool axis
   *    @param oX,oY,oZ
   *	   The coordinates of the tool axis
   **/
  virtual CATBoolean GetToolAxisPoint (int iNumber,double& oX,double & oY,double & oZ) = 0;

  /**
  * @nodoc
  */
  virtual CATBoolean UnsetContactPoints () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean UnsetContactNormals () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean UnsetToolAxisPoints () =0 ;

  /**
   *	Retrieves total number of tip points of the tool motion.
   *    @return
   *       The total number of tip points
   **/
  virtual long GetNumberOfTipPoints () =0 ;

  /**
   *	Retrieves total number of contact points of the tool motion.
   *    @return
   *       The total number of contact points
   **/
  virtual long GetNumberOfContactPoints () =0 ;

  /**
   *	Retrieves number of contact normals of the tool motion.
   *    @return
   *       The total number of contact normals
   **/
  virtual long GetNumberOfContactNormals () =0 ;

  /**
   *	Retrieves number of tool axis of the tool motion.
   *    @return
   *       The total number of tool axis
   **/
  virtual long GetNumberOfToolAxisPoints () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetMachiningTolerance (double& oMachiningTolerance) =0 ;
  
  /**
  * @nodoc
  */
  virtual CATBoolean GetTipPoints  (int iFirstPoint,int iLastPoint,CATListOfDouble& oListeX,CATListOfDouble& oListeY,CATListOfDouble& oListeZ) = 0;

 /**
  * @nodoc
  */
  virtual CATBoolean GetContactPoints  (int iFirstPoint,int iLastPoint,CATListOfDouble& oListeX,CATListOfDouble& oListeY,CATListOfDouble& oListeZ) = 0;

 /**
  * @nodoc
  */
  virtual CATBoolean GetContactNormals (int iFirstPoint,int iLastPoint,CATListOfDouble& oListeX,CATListOfDouble& oListeY,CATListOfDouble& oListeZ) = 0;

 /**
  * @nodoc
  */
  virtual CATBoolean GetToolAxisPoints (int iFirstPoint,int iLastPoint,CATListOfDouble& oListeX,CATListOfDouble& oListeY,CATListOfDouble& oListeZ) = 0;
};

CATDeclareHandler(CATIMfgToolMotion, CATIMfgElementaryTraject);

#endif







