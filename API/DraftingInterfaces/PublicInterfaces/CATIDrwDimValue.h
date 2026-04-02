#ifndef CATIDrwDimValue_H
#define CATIDrwDimValue_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATIDrwDimValueComponent.h"
#include "CATIDrwDimFakeComponent.h"
#include "booleanDef.h"


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimValue ;
#else
extern "C" const IID IID_CATIDrwDimValue ;
#endif

/**
 * Manages the dimension value.
 */

class ExportedByDraftingItfCPP CATIDrwDimValue : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets the value position.
     *   @param position
     *    Position point.
     */
     virtual void GetPosition(double * position) const = 0;

    /**
     * Gets value position by offsets.
		 *   @return HRESULT
     *    error returned code
		 *    If the getting of the vertical offset value can not be performed because 
		 *    the parameter is locked in the current standard, the method return  HRESULT = S_READ_ONLY.
     *   @param dc
     *    X offset.
     *   @param dy
     *    Y offset.
     */
	   virtual HRESULT GetOffsets(double &dc, double &dy) const = 0;

    /**
     * Gets the numerical value measured by the dimension.
     *   @return
     *    Value.
     */
     virtual double GetValue() const = 0;

     /**
     * Gets the string of the dimension.value
     * For feature dimension (see @href CATIDrwDimDimension#GetAnalysisType) like thread dimension, the value can be a string
     * This string, if it exists and if the fake mode is not activated, is always displayed on dimension value.
     * In this case, the numerical value (accessible by GetValue) is hidden.
     *   @param oStringValue [out]
     *    String value.
     *   @return 
     * <tt>HRESULT</tt>
     * <dl>
     * <dt> <tt>S_READONLY</tt>  <dd> Method correctly executed (the string value is read-only)
     * <dt> <tt>E_FAIL</tt>      <dd> The value of the dimension is not a string
     * </dl>
     */

     virtual HRESULT GetStringValue(CATUnicodeString& oStringValue) const = 0;

    /**
     * Gets the fake value.
     *   @return
     *    Value.
     */
     virtual CATIDrwDimFakeComponent_var GetFakeComponent() const = 0;

    /**
     * Gets the main value.
     *   @return
     *    Value.
     */
     virtual CATIDrwDimValueComponent_var GetFaceComponent() const = 0;

    /**
     * Gets the dual value.
     *   @return
     *    Value.
     */
     virtual CATIDrwDimValueComponent_var GetDualComponent() const = 0;

    /**
     * Gets the dual value display mode.
     *   @return
     *    Display mode.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimDualNone</tt> <dd>Do not display dual value.</dd>
     *    <dt><tt>CATDrwDimDualBellow</tt> <dd>Display dual value bellow main value.</dd>
     *    <dt><tt>CATDrwDimDualFractional</tt> <dd>Display dual value bellow main value with fractionnal display.</dd>
     *    <dt><tt>CATDrwDimDualSideBySide</tt> <dd>Display dual value and main value side by side.</dd>
     *    </dl>
     */
     virtual int GetDualValueDisplay() const = 0;

    /**
     * Gets the angle.
     *   @return
     *    Angle of value orientation in case of user defined orientation.
     */
     virtual double GetAngle() const = 0;

    /**
     * Gets the orientation reference.
     *   @return
     *    Orientation reference.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimRefScreen</tt> <dd>Reference is the screen.</dd>
     *    <dt><tt>CATDrwDimRefView</tt> <dd>Reference is the view.</dd>
     *    <dt><tt>CATDrwDimRefDimLine</tt> <dd>Reference is the dimension line.</dd>
     *    </dl>
     */
     virtual int GetOrientationReference() const = 0;

    /**
     * Gets the orientation.
     *   @return
     *    Orientation.
     *     = 0 : Parallel to the dimension line or Horizontal View or Screen
     *     = 1  : Perpandicular to the dimensionline or Vertical View or Screen
     *     = 2 : User defined,  GetAngle method has to be used to get angle value. 
     */
     virtual int GetOrientation() const = 0;
     
    /**
     * @deprecated, use CATIDrwDimDimension#MoveValue instead.
     * Sets the value position.
     *   @param pos
     *    Position point.
     */
     virtual void SetPosition(const double * pos) = 0;

    /**
     * Sets value position by offsets.
		 *   @return HRESULT
     *    error returned code
		 *    If the setting of the vertical offset value can not be performed because 
		 *    the parameter is locked in the current standard, the method return  HRESULT = S_READ_ONLY.
     *   @param dx
     *    X offset.
     *   @param dy
     *    Y offset.
     */
	   virtual HRESULT SetOffsets(const double dx, const double dy) = 0;

    /**
     * Sets the value.
     *   @param value
     *    Value.
     */
     virtual void SetValue(const double value) = 0;

    /**
     * Sets the angle.
     *   @param angle
     *    Angle of value orientation in case of user defined orientation.
     */
     virtual void SetAngle(const double angle) = 0;

    /**
     * Sets the orientation reference.
     *   @param iReference
     *    Orientation reference.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimRefScreen</tt> <dd>Reference is the screen.</dd>
     *    <dt><tt>CATDrwDimRefView</tt> <dd>Reference is the view.</dd>
     *    <dt><tt>CATDrwDimRefDimLine</tt> <dd>Reference is the dimension line.</dd>
     *    </dl>
     */
     virtual void SetOrientationReference(const int iReference) = 0;

    /**
     * Sets the orientation.
     *   @param iOrientation
     *    Orientation.
     *     = 0 : Parallel to the dimension line or Horizontal View or Screen
     *     = 1  : Perpandicular to the dimensionline or Vertical View or Screen
     *     = 2 : User defined,  SetAngle method has to be used to set angle value. 
     */
     virtual void SetOrientation(const int iOrientation) = 0;

    /**
     * Sets the dual value display mode.
     *   @param value
     *    Display mode.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimDualNone</tt> <dd>Do not display dual value.</dd>
     *    <dt><tt>CATDrwDimDualBellow</tt> <dd>Display dual value bellow main value.</dd>
     *    <dt><tt>CATDrwDimDualFractional</tt> <dd>Display dual value bellow main value with fractionnal display.</dd>
     *    <dt><tt>CATDrwDimDualSideBySide</tt> <dd>Display dual value and main value side by side.</dd>
     *    </dl>
     */
     virtual void SetDualValueDisplay(const int value) = 0;

    /**
     * Sets the main value.
     *   @param iMainComponent
     *    Value.
     */
     virtual void SetFaceComponent(const CATIDrwDimValueComponent_var iMainComponent) = 0;

    /**
     * Sets the dual value.
     *   @param iDualComponent
     *    Value.
     */
     virtual void SetDualComponent(const CATIDrwDimValueComponent_var iDualComponent) = 0;

};
CATDeclareHandler(CATIDrwDimValue, CATBaseUnknown);
#endif

