/* -*-c++-*- */
#ifndef CATISketchPositioning_h
#define CATISketchPositioning_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

#include "CATSktPosSupportMode.h"
#include "CATSktPosOriginMode.h"
#include "CATSktPosOrientationMode.h"
#include "CATSktPosDirection.h"

class CATListValCATISpecObject_var;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchPositioning;
#else
extern "C" const IID IID_CATISketchPositioning;
#endif

/**
 * Interface to manage the positioning of a sketch.
 * <b>Role</b>: This interface is used to manage the attributes of a sketch 
 * from which the position will be computed.
 */

class ExportedByCATSketcherInterfaces CATISketchPositioning : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Retrieves the support reference elements.
   * @param <tt>oReferences</tt>
   * [out] List of support reference elements.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetSupportReferences(CATListValCATISpecObject_var& oReferences) = 0;

  /**
   * Sets the support reference elements.
   * @param <tt>iReferences</tt>
   * [in] List of support reference elements.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetSupportReferences(const CATListValCATBaseUnknown_var& iReferences) = 0;
  
  /**
   * Retrieves the support definition mode.
   * <br><b>Role</b>: The support definition mode lets you define the sketch support references.
   * Support definition modes are listed in the @href CATSktPosSupportMode definition.
   * @param oMode
   *   [out] Support definition mode.
   *   <br>e.g.: <code>CATSktSupOnePlane</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetSupportMode(CATSktPosSupportMode& oMode)= 0;

  /**
   * Sets the support definition mode.
   * <br><b>Role</b>: The support definition mode lets you define the sketch support references.
   * Support definition modes are listed in the @href CATSktPosSupportMode definition.
   * @param iMode
   *   [in] Support definition mode.
   *   <br>e.g.: <code>CATSktSupOnePlane</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetSupportMode(const CATSktPosSupportMode iMode) = 0;

  /**
   * Retrieves the origin reference elements.
   * @param <tt>oReferences</tt>
   * [out] List of origin reference elements.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetOriginReferences(CATListValCATISpecObject_var& oReferences) = 0;

  /**
   * Sets the origin reference elements and definition mode.
   * @param <tt>iReferences</tt>
   * [in] List of origin reference elements.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetOriginReferences(const CATListValCATBaseUnknown_var& iReferences) = 0;

  /**
   * Retrieves the origin definition mode.
   * <br><b>Role</b>: The origin definition mode lets you define the sketch origin.
   * Origin definition modes are listed in the @href CATSktPosOriginMode definition.
   * @param oMode
   *   [out] Origin definition mode.
   *   <br>e.g.: <code>CATSktOriPartOrigin</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetOriginMode(CATSktPosOriginMode& oMode)= 0;

  /**
   * Sets the origin definition mode.
   * <br><b>Role</b>: The origin definition mode lets you define the sketch origin.
   * Origin definition modes are listed in the @href CATSktPosOriginMode definition.
   * @param iMode
   *   [in] Origin definition mode.
   *   <br>e.g.: <code>CATSktOriPartOrigin</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetOriginMode(const CATSktPosOriginMode iMode) = 0;

  /**
   * Retrieves the orientation reference elements.
   * @param <tt>oReferences</tt>
   * [out] List of orientation reference elements.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetOrientationReferences(CATListValCATISpecObject_var& oReferences) = 0;

  /**
   * Sets the orientation reference elements.
   * @param <tt>iReferences</tt>
   * [in] List of orientation reference elements.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetOrientationReferences(const CATListValCATBaseUnknown_var& iReferences) = 0;

  /**
   * Retrieves the orientation definition mode.
   * <br><b>Role</b>: The orientation definition mode lets you define the absolute axis orientation.
   * Orientation definition modes are listed in the @href CATSktPosOrientationMode definition.
   * @param oMode
   *   [out] Orientation definition mode.
   *   <br>e.g.: <code>CATSktOrtThroughAPoint</code>
   * @return <tt>HRESULT</tt>
   */
 virtual HRESULT GetOrientationMode(CATSktPosOrientationMode& oMode)= 0;

  /**
   * Sets the orientation definition mode.
   * <br><b>Role</b>: The orientation definition mode lets you define the absolute axis orientation.
   * Orientation definition modes are listed in the @href CATSktPosOrientationMode definition.
   * @param iMode
   *   [in] Origin definition mode.
   *   <br>e.g.: <code>CATSktOrtThroughAPoint</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetOrientationMode(const CATSktPosOrientationMode iMode) = 0;

  /**
   * Retrieves the direction of the sketch axis which is oriented.
   * <br><b>Role</b>: The orientation direction lets you specify whether 
   * the orientation references will be applied on axis H or V.
   * Direction definitions are listed in the @href CATSktPosDirection definition.
   * @param oDirection
   *   [out] Oriented direction.
   *   <br><b>Legal values</b>: The oriented direction value can be CATSktDirHorizontal for the horizontal axis
   *   or CATSktDirVertical for the vertical axis.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetOrientationDirection(CATSktPosDirection& oDirection)= 0;

  /**
   * Sets the oriented direction of the sketch axis.
   * <br><b>Role</b>: The orientation direction allows lets you specify whether 
   * the orientation references will be applied on axis H or V.
   * Direction definitions are listed in the @href CATSktPosDirection definition.
   * @param iDirection
   *   [in] Oriented direction.
   *   <br><b>Legal values</b>: The oriented direction value can be CATSktDirHorizontal for the horizontal axis
   *   or CATSktDirVertical for the vertical axis.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetOrientationDirection(const CATSktPosDirection iDirection )= 0;

  /**
   * Retrieves the direction coordinates for orientation.
   * @param <tt>oXYZ</tt>
   * [out] A list of 3 literal parameters for each coordinate.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetDirectionCoordinates(CATListValCATISpecObject_var& oXYZ)= 0;

  /**
   * Retrieves the Horizontal direction.
   * @param <tt>oDirection</tt>
   * [out] Direction coefficient.
   * <dt> <tt>+1</tt>   <dd> Same direction.
   * <dt> <tt>-1</tt>   <dd> Reverse direction.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetHDirectionSense (int& oDirection)= 0;

  /**
   * Retrieves the Vertical direction.
   * @param <tt>oDirection</tt>
   * [out] Direction coefficient.
   * <dt> <tt>+1</tt>   <dd> Same direction.
   * <dt> <tt>-1</tt>   <dd> Reverse direction.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetVDirectionSense (int& oDirection)= 0;

  /**
   * Retrieves the Normal direction.
   * @param <tt>oDirection</tt>
   * [out] Direction coefficient.
   * <dt> <tt>+1</tt>   <dd> Same direction.
   * <dt> <tt>-1</tt>   <dd> Reverse direction.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetNormalSense (int& oDirection)= 0;

  /**
   * Reverses the Horizontal direction.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT ReverseHDirection(void) = 0;

  /**
   * Reverses the Vertical direction.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT ReverseVDirection(void) = 0;

  /**
   * Swaps the Horizontal and Vertical directions.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SwapHVDirections(void) = 0;

  /**
   * Compute, evaluate and analyze the new position of the sketch.
   * <br><b>Role</b>: This method lets you know if the sketch is correctly positioned.
   * @param oSupportStatus
   *   [out] Evaluation status of the sketch support positioning
   * @param oOriginStatus
   *   [out] Evaluation status of the sketch origin positioning
   * @param oOrientationStatus
   *   [out] Evaluation status of the sketch orientation positioning
   * @param iEvaluationMode
   *   [in] Evaluation mode  
   *   <br><b>Legal values</b>: The evaluation mode value can be 1 for creation state or 2 for edition state.
   * @param iMovingMode
   *   [in] Moving mode  
   *   <br><b>Legal values</b>: The moving mode value can be 1 to move the absolute axis and the sketch geometry or
   *   0 to move the absolute axis only.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT EvalPosition(HRESULT& oSupportStatus, HRESULT& oOriginStatus, HRESULT& oOrientationStatus, const int iEvaluationMode=1, const int iMovingMode=1) = 0;

  /**
   * <br><b>Role</b>: Puts the sketch ARWL (As Result With Link) at the same position as the original sketch,
   * and set the type of the sketch on CATSktSupPositionedAsRef
   * @return <tt>HRESULT</tt>
   *     - S_OK, if the sketch has been successfully positioned as its reference.
   *     - E_FAIL, otherwise.
   */
  virtual HRESULT PositionAsReference()=0;

};

CATDeclareHandler(CATISketchPositioning,CATBaseUnknown);

#endif
