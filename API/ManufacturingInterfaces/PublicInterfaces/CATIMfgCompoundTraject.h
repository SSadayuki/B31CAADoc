/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

#ifndef CATIMfgCompoundTraject_H
#define CATIMfgCompoundTraject_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgTraject.h"
#include "CATIMfgToolPathToolAxis.h"
#include "CATIMfgToolPathFeedrate.h"
#include "CATIMfgToolPathSpindle.h"
#include "CATIMfgToolPathToolAssembly.h"
#include "CATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATMathPoint.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCompoundTraject;
#else
extern "C" const IID IID_CATIMfgCompoundTraject;
#endif

 /**   
 * Interface for management of tool path object.<br>
 * The object linked to the manufacturing operation (activity) to model the tool path is a CATIMfgCompoundTraject object .<br>
 * It can have children of several types : other CATIMfgCompoundTraject objects, @href CATIMfgToolPathCycle objects to model cycles for
 *    drilling and lathe operations, @href CATIMfgToolPathMotionCommand objects to model rotations and @href CATIMfgTPMultipleMotion objects
 *    to model tool motions.<br>
 * The interface to manage children of a CATIMfgCompoundTraject object is @href CATIMfgToolPathComponents.<br>
 * A CATIMfgCompoundTraject object owns reference values (linear feedrates, spindle feedrate, tool axis, ...).<br>
 * 
 * @see CATIMfgToolPathFactory
 * @see CATIMfgToolPathComponents
 * @see CATIMfgToolPathMotionCommand
 * @see CATIMfgToolPathCycle
 * @see CATIMfgTPMultipleMotion
 */


class ExportedByMfgItfEnv CATIMfgCompoundTraject : public CATIMfgTraject
{
  CATDeclareInterface ;  

  public:

  /**
   *	Sets reference tool axis of tool path.
   *    @param iToolAxis
   *	  The reference tool axis 
   **/
  virtual CATBoolean SetToolAxis (CATIMfgToolPathToolAxis_var& iToolAxis) =0 ;

  /**
   *	Retrieves reference tool axis of tool path.
   *   @param oToolAxis
   *	  The reference tool axis 
   **/
  virtual CATBoolean GetToolAxis (CATIMfgToolPathToolAxis_var& oToolAxis) =0 ;

  /**
   *	Unsets reference tool axis of tool path.
   **/
  virtual CATBoolean UnsetToolAxis () =0 ;

  /**
   *   Sets reference feedrate of a given type on the tool path.<br>
   *   Note that all values of feedrate can be stored on CATIMfgCompoundTraject
   *   object from the current activity with "Init" method.
   *   @param iFeedrateType
   *      The feedrate type (see CATMfgToolPathDefs.h for legal values)
   *   @param iFeedrateValue
   *      The feedrate value
   **/
  virtual CATBoolean SetFeedrate (const CATUnicodeString&      iFeedrateType,
			                   CATIMfgToolPathFeedrate_var& iFeedrateValue) =0 ;

  /**
   *   Retrieves reference feedrate of a given type on the tool path.
   *   @param iFeedrateType
   *      The feedrate type (see CATMfgToolPathDefs.h for legal values)
   *   @param oFeedrateValue
   *	  The feedrate value 
   **/
  virtual CATBoolean GetFeedrate (CATUnicodeString& iFeedrateString,
			                   CATIMfgToolPathFeedrate_var& oFeedrateValue) =0 ;

  /**
   *	Unsets reference feedrate of a given type on the tool path.
   *   @param iFeedrateType
   *      The feedrate type (see CATMfgToolPathDefs.h for legal values)
   **/
  virtual CATBoolean UnsetFeedrate (const CATUnicodeString& iString) =0 ;

  /**
   *	Sets reference spindle on the tool path.<br>
   *   Note that value of spindle can be stored on CATIMfgCompoundTraject
   *   object from the current activity with "Init" method.
   *   @param iSpindle
   *	  The reference spindle value
   **/
  virtual CATBoolean SetSpindle (CATIMfgToolPathSpindle_var& iSpindle) =0 ;

  /**
   *   Retrieves reference spindle on the tool path.
   *   @param oSpindle
   *	  The reference spindle value
   **/
  virtual CATBoolean GetSpindle (CATIMfgToolPathSpindle_var& oSpindle) =0 ;

  /**
   *	Unsets reference spindle on the tool path.
   **/
  virtual CATBoolean UnsetSpindle () =0;

  /**
   *	Sets tool assembly or tool on the tool path.<br>
   *   Note that value of tool assembly or tool can be stored on CATIMfgCompoundTraject
   *   object from the current activity with "Init" method.
   *   @param iToolAssembly
   *	  The tool assembly.
   **/
  virtual CATBoolean SetToolAssembly (CATIMfgToolPathToolAssembly_var& iToolAssembly) =0 ;

  /**
   *	Retrieves tool assembly on the tool path.
   *   @param oToolAssembly
   *	The tool assembly
   **/
  virtual CATBoolean GetToolAssembly (CATIMfgToolPathToolAssembly_var& oToolAssembly) =0 ;

  /**
   *	Unsets tool assembly on the tool path.
   **/
  virtual CATBoolean UnsetToolAssembly () =0;

  /**
   *	Sets the current corrector number for the tool on the tool path.<br>
   *   Note that value of corrector number can be stored on CATIMfgCompoundTraject
   *   object from the current activity with "Init" method.
   *   @param iCorrectorNumber
   *	 The tool corrector number
   **/
  virtual CATBoolean SetCorrectorNumber (const int CorrectorNumber) =0 ;

  /**
   *	Retrieves the current corrector number for the tool on the tool path.
   *   @param oCorrectorNumber
   *	The tool corrector number
   **/
  virtual CATBoolean GetCorrectorNumber (int& CorrectorNumber) =0 ;

  /**
   *	Unsets value of current corrector number for the tool on the tool path.
   **/
  virtual CATBoolean UnsetCorrectorNumber () =0;

  /**
   *	Retrieves tool motions objects linked to the tool path .<br>
   *   @param oList
   *	The list of objects (only @href CATIMfgTPMultipleMotion elements)
   **/
  virtual CATBoolean GetAllElementaryTrajects (CATListValCATBaseUnknown_var& oList) =0 ;


  /**
   *	Initializes parameters of tool path from the manufacturing operation.
   *   @param iOperation
   *	 The manufacturing operation
  **/
  virtual CATBoolean Init (CATBaseUnknown_var& iOperation) =0 ;

  /**
   *	Retrieves start tip point and start tool axis of the tool path.
   *    @param oTipPoint
   *	  The start tip point 
   *    @param oToolAxis
   *	  The start tool axis
  **/
  virtual CATBoolean GetStartPoint (CATMathPoint& oTipPoint, CATMathVector& oToolAxis) =0 ;

  /**
   *	Retrieves end tip point and end tool axis of the tool path.
   *    @param oTipPoint
   *	  The end tip point 
   *    @param oToolAxis
   *	  The end tool axis
  **/
  virtual CATBoolean GetEndPoint (CATMathPoint& oTipPoint, CATMathVector& oToolAxis) =0 ;

  /**
   *	Loads PP Table.<br>
   *    Mandatory for evaluation of syntax relative to NC_Command stored on the CATIMfgCompoundTraject object or one of its children.
   *    @param iActivity
   *	  The operation which is linked to the tool path
  **/
  virtual CATBoolean LoadsPPTable (const CATBaseUnknown_var& iActivity) =0 ;

  /**
   *    Retrieves the value of machining tolerance.
   *    @param oMachiningTolerance
   *	  The value of machining tolerance
   */
  virtual CATBoolean GetMachiningTolerance (double& oMachiningTolerance) =0 ;

  /**
  *     Checks the consistency of tool path.
  */
  virtual HRESULT CheckToolPath () =0 ;

  /**
   *   Mode of compensation used on the tool path.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>None_Compensation : no compensation </li>
   *      <li>PlanarTip_Compensation : Cutcom compensation on tip point  </li>
   *      <li>PlanarProfile_Compensation : Cutcom compensation on profile point </li>
   *      <li>NormDSVector_Compensation : Compensation with PQR vector (non normalized) </li>
   *      <li>NormDSDirection_Compensation : Compensation with PQR vector (normalized) </li>
   *      <li>NormPSTip_Compensation : Compensation on tip point and contact data </li>
   *      <li>NormPSContact_Compensation : Compensation on contact data only </li>
   *      </ul>
   */  
  enum CompensationMode {None_Compensation,
	                     PlanarTip_Compensation,
						 PlanarProfile_Compensation,
						 NormDSVector_Compensation,
						 NormDSDirection_Compensation,
						 NormPSTip_Compensation,
						 NormPSContact_Compensation};

  /**
   *    Retrieves the mode of compensation.
   *    @param oCompensationMode
   *	  The mode of compensation
   */
  virtual CATBoolean GetCompensationMode (CATIMfgCompoundTraject::CompensationMode& oCompensationMode) =0 ;

  /**
   *    Indicates if a point of the tool path has been edited.
   *    @param oEditionStatus
   *	  The mode of compensation
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>TRUE : at least one point has been removed, modified or inserted </li>
   *      <li>FALSE : no point removed, modified or inserted </li>
   *      </ul>
   */
  virtual CATBoolean GetEditionStatus (CATBoolean &oEditionStatus) =0 ;

 /**
  * @nodoc
  */
  virtual CATBoolean SetCompensationMode (CATIMfgCompoundTraject::CompensationMode& iCompensationMode) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean Lock () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean Unlock () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean IsUnlocked (CATBoolean &iLockStatus) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetToolAxisMode (const int iAxisMode) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetToolAxisMode (int& oAxisMode) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean UnsetToolAxisMode () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetMachiningTolerance (const double iMachiningTolerance) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetMachiningTimeObject (const CATBaseUnknown_var& iMachiningTimeObject) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetMachiningTimeObject (CATBaseUnknown_var& oMachiningTimeObject) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetSubToolPathFlag (const CATBoolean& iFlag) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetSubToolPathFlag (CATBoolean& oFlag) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetListOfSubToolPathes(CATListValCATBaseUnknown_var& oList) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean HasContactPoints(CATBoolean& oHasContactPoints) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetOpenToolPathFlag (const CATBoolean& iFlag) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetOpenToolPathFlag (CATBoolean& oFlag) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetControlLength (double& oControlLength) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetControlLength (double iControlLength) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetMinimumDiscretizationStep (double& oMinimumStep) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetMinimumDiscretizationStep (double iMinimumStep) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetAllTrajectsForNCOutput (CATListValCATBaseUnknown_var& oList,const int iCycle=1) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetLocalFeedrateList (const CATListValCATBaseUnknown_var& iList) = 0;

  /**
  * @nodoc
  */
  virtual CATBoolean GetLocalFeedrateList (CATListValCATBaseUnknown_var& oList) = 0;

  /**
  * @nodoc
  */
  virtual CATBoolean GetSafeToolMinimumLength (double& oLength) = 0;

  /**
  * @nodoc
  */
  virtual CATBoolean SetSafeToolMinimumLength (double oLength) = 0;

  /**
  * @nodoc
  */
  virtual CATBoolean UnsetSafeToolMinimumLength () = 0;

  /**
  * @nodoc
  */
  virtual HRESULT LockToolPathOnly () =0 ;

  /**
  * @nodoc
  */
  virtual HRESULT LevelOfLock (int &iLockStatus) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean SetNormaleForCircle (const CATMathVector& iNormaleForCircle) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean GetNormaleForCircle (CATMathVector& oNormaleForCircle) =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean UnsetNormaleForCircle () =0 ;

    /**
  * @nodoc
  */
  virtual CATBoolean ToolPathIsUpToDateForISOFileManagement () =0 ;

  /**
  * @nodoc
  */
  virtual CATBoolean ToolPathIsNotUpToDateForISOFileManagement () =0 ;


  /**
  * @nodoc
  */
  virtual CATBoolean IsToolPathUpToDateForISOFileManagement (CATBoolean& oStatus) =0 ;


};

CATDeclareHandler(CATIMfgCompoundTraject, CATIMfgTraject);

#endif







