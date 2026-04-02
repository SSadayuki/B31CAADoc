// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwDimDimensionLine_H
#define CATIDrwDimDimensionLine_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATDrwDimEnum.h"
#include "CATBooleanDef.h"
class CATGraphicAttributeSet;


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDimensionLine ;
#else
extern "C" const IID IID_CATIDrwDimDimensionLine ;
#endif


/**
 * Manages the dimension line.
 * <b>Role</b>: This interface manages all parameters linked to dimension-line and symbol(s).
 */

class ExportedByDraftingItfCPP CATIDrwDimDimensionLine : public CATBaseUnknown
{
  CATDeclareInterface;
   public:

    /**
     * Gets graphic parameters.
     *   @param oColor
     *    Color.
     *   @param oThickness
     *    Thickness.
     */
     virtual void GetGraphicParameters(int &oColor, double &oThickness) const = 0;

    /**
     * Gets extremity dimension line symbol graphic parameters.
     *   @param oColorSymbol1
     *    Colorof the first symbol.
     *   @param oThicknessSymbol1
     *    Thickness of the first symbol.
     *   @param oColorSymbol2
     *    Color of the second symbol.
     *   @param oThicknessSymbol2
     *    Thickness of the second symbol.
     */
     virtual void GetSymbolsGraphicParameters(int &oColorSymbol1, double &oThicknessSymbol1, int &oColorSymbol2, double &oThicknessSymbol2) const = 0;

    /**
     * Gets basic representation mode.
     *   @return
     *    Representation mode legal values:
     *    <dl>
     *    <dt><tt>CATDrwDimLine1Part</tt> <dd>Standard Dimension Line representation.</dd>
     *    <dt><tt>CATDrwDimLine2Parts</tt> <dd>Dimension Line in two parts.</dd>
     *    <dt><tt>CATDrwDimLeader1Part</tt>  <dd>Dimension Line with leader one part.</dd>
     *    <dt><tt>CATDrwDimLeader2Parts</tt>  <dd>Dimension Line with leader two parts.</dd>
     *    </dl>
     */
     virtual int GetRepresentation() const = 0;

    /**
     * Gets second part dimension line orientation reference.
     *   @return
     *    Orientation reference (see define definition file).
     *    <br>Orientation reference legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimRefScreen</tt> <dd>Reference is the screen.</dd>
     *    <dt><tt>CATDrwDimRefView</tt> <dd>Reference is the view.</dd>
     *    <dt><tt>CATDrwDimRefDimLine</tt> <dd>Reference is the dimension line.</dd>
     *    </dl>
     */
     virtual int GetOrientationReference() const = 0;

    /**
     * Gets extremity dimension line symbols.
     *   @param oSymbol1
     *    First symbol.
     *    <br>Legal symbol value are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwDimSymbNone</tt> <dd>None.</dd>
     *    <dt><tt>CATDrwDimSymbOpenArrow</tt> <dd>Open arrow.</dd>
     *    <dt><tt>CATDrwDimSymbClosedArrow</tt> <dd>Closed arrow.</dd>
     *    <dt><tt>CATDrwDimSymbSlash</tt> <dd>Slash.</dd>
     *    <dt><tt>CATDrwDimSymbCircle</tt> <dd>Circle.</dd>
     *    <dt><tt>CATDrwDimSymbCircledCross</tt> <dd>Circled cross.</dd>
     *    <dt><tt>CATDrwDimSymbTriangle</tt> <dd>Triangle.</dd>
     *    <dt><tt>CATDrwDimSymbCross</tt> <dd>Cross.</dd>
     *    <dt><tt>CATDrwDimSymbXCross</tt> <dd>.</dd>
     *    </dl>.
     *   @param oSymbol2
     *    Second symbol (same legal values).
     */
     virtual void GetSymbol( int & oSymbol1, int & oSymbol2) = 0;

    /**
     * Gets extremity dimension line symbol mode.
     *   @return
     *    Symbol mode.
     *    <br>Legal symbol modes are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwDimSymbAuto</tt> <dd>Inside or Outside the extension lines depending on the size of the dimension.</dd>
     *    <dt><tt>CATDrwDimSymbIn</tt> <dd>Inside the extension lines as: |<--10-->|.</dd>
     *    <dt><tt>CATDrwDimSymbOut</tt> <dd>Outside the extension lines as: ->|10|<-.</dd>
     *    </dl>.
     */
     virtual int GetSymbolMode() const = 0;

    /**
     * @nodoc
     * Gets isplay mode.
     *   @return
     *    Display mode (not used).
     */
     virtual int GetDisplayMode() const = 0;

    /**
     * Gets second part dimension line orientation according to the orientation reference.
     *   @return
     *    Orientation.
     *    <br>Orientation legal values are:
     *    <dl>
     *    <dt><tt>CATDrwDimOrientHorizontal</tt> <dd>Horizontal if reference is screen or view.</dd>
     *    <dt><tt>CATDrwDimOrientVertical</tt> <dd>Vertical if reference is screen or view.</dd>
     *    <dt><tt>CATDrwDimOrientParallel</tt> <dd>Parallel if reference is dimension line.</dd>
     *    <dt><tt>CATDrwDimOrientPerpendicular</tt> <dd>Perpendicular if reference is dimension line.</dd>
     *    <dt><tt>CATDrwDimOrientFixedAngle</tt> <dd>Given angle fixed for all orientation reference.</dd>
     *    </dl>.
     */
     virtual int GetOrientation() const = 0;

    /**
     * Gets angle.
     *   @return
     *    Angle value if representation mode is user defined.
     */
     virtual double GetAngle() const = 0;

    /**
     * Gets direction.
     *   @param oRepresentation
     *    Representation mode. (see enum definition file)
     *    <br>Legal values:
     *    <dl>
     *    <dt><tt>DrwDimUndef</tt> <dd>Undefined.</dd>
     *    <dt><tt>DrwDimHoriz</tt> <dd>Horizontal.</dd>
     *    <dt><tt>DrwDimVert</tt>  <dd>Vertical.</dd>
     *    <dt><tt>DrwDimAuto</tt>  <dd>Automatic.</dd>
     *    <dt><tt>DrwDimUserDefined</tt> <dd>User defined.</dd>
     *    <dt><tt>DrwDimTrueDim</tt> <dd>True dimension.</dd>
     *    </dl>
     *   @param oDirection2D
     *    Orientation vector if user defined.
     */
     virtual void GetDirection(CATDrwDimRepresentation& oRepresentation,double * oDirection2D) const = 0;

    /**
     * Gets direction.
     *   @param oRepresentation
     *    Representation mode. (see enum definition file)
     *    <br>Legal values:
     *    <dl>
     *    <dt><tt>DrwDimUndef</tt> <dd>Undefined.</dd>
     *    <dt><tt>DrwDimHoriz</tt> <dd>Horizontal.</dd>
     *    <dt><tt>DrwDimVert</tt>  <dd>Vertical.</dd>
     *    <dt><tt>DrwDimAuto</tt>  <dd>Automatic.</dd>
     *    <dt><tt>DrwDimUserDefined</tt> <dd>User defined.</dd>
     *    <dt><tt>DrwDimTrueDim</tt> <dd>True dimension.</dd>
     *    </dl>
     *   @param oRefElem
     *    Reference element for measurement direction if user defined.
     *   @param iRefAngle
     *    Reference angle in degree for measurement direction if user defined.
     *    RefAngle is relative to iRefElem direction if it exists, else is relative to view.
     */
     virtual HRESULT GetDirection(CATDrwDimRepresentation &oRepresentation,CATBaseUnknown_var &oRefElem, double &oRefAngle) const = 0;

    /**
     * Sets graphic parameters.
     *   @param iColor
     *    Color.
     *   @param iThickness
     *    Thickness.
     */
     virtual void SetGraphicParameters(const int iColor, const double iThickness) = 0;

    /**
     * Sets extremity dimension line symbol graphic parameters.
     *   @param iColorSymbol1
     *    Color of first symbol.
     *   @param iThicknessSymbol1
     *    Thickness of first symbol.
     *   @param iColorSymbol2
     *    Color of second symbol.
     *   @param iThicknessSymbol2
     *    Thickness of second symbol.
     */
     virtual void SetSymbolsGraphicParameters(const int iColorSymbol1, const double iThicknessSymbol1, const int iColorSymbol2, const double iThicknessSymbol2) = 0;

    /**
     * @nodoc
     * Sets type.
     *   @param iType
     *    Type (not used).
     */
     virtual void SetType(int iType) = 0;

    /**
     * Sets basic representation mode.
     *   @param iRepresentation
     *    Represention mode (see define definition file).
     */
     virtual void SetRepresentation(const int iRepresentation) = 0;

    /**
     * Sets second part dimension line orientation reference.
     *   @param iReference
     *    Orientation reference (see define definition file).
     */
     virtual void SetOrientationReference(const int iReference) = 0;

    /**
     * Sets extremity dimension line symbols.
     *   @param iSymbol1
     *    First symbol (see define definition file).
     *   @param iSymbol2
     *    Second symbol (see define definition file).
     */
     virtual void SetSymbol( const int iSymbol1, const int iSymbol2 ) = 0;

    /**
     * Sets extremity dimension line symbol mode.
     *   @param iSymbolMode
     *    Symbol mode (see define definition file).
     */
     virtual void SetSymbolMode( const int iSymbolMode ) = 0;

    /**
     * @nodoc
     * Sets display mode.
     *   @param dMode
     *    Display mode (not used).
     */
     virtual void SetDisplayMode(const int dMode) = 0; 

    /**
     * Sets second part dimension line orientation according to the orientation reference.
     *   @param iOrientation
     *    Orientation (see define definition file).
     */
     virtual void SetOrientation(const int iOrientation) = 0;

    /**
     * Sets angle if representation mode is user defined.
     *   @param iAngle
     *    Angle value.
     */
     virtual void SetAngle(const double iAngle) = 0;

    /**
     * @nodoc
     * Sets direction.
     *   This method is now replaced by @href CATIDrwDimDimensionLine#SetDirection
     *   @param iRepresentation
     *    Representation mode.
     *    <br>Legal values: (see enum definition file)
     *    <dl>
     *    <dt><tt>DrwDimUndef</tt> <dd>Undefined.</dd>
     *    <dt><tt>DrwDimHoriz</tt> <dd>Horizontal.</dd>
     *    <dt><tt>DrwDimVert</tt>  <dd>Vertical.</dd>
     *    <dt><tt>DrwDimAuto</tt>  <dd>Automatic.</dd>
     *    <dt><tt>DrwDimUserDefined</tt> <dd>User defined.</dd>
     *    <dt><tt>DrwDimTrueDim</tt> <dd>True dimension.</dd>
     *    </dl>
     *   @param iDirection2D
     *    Orientation vector if user defined (relative to view).
     */
     virtual void SetDirection(const CATDrwDimRepresentation iRepresentation,double * iDirection2D=NULL) = 0;

    /**
     * Sets direction.
     *   @param iRepresentation
     *    Representation mode.
     *    <br>Legal values: (see enum definition file)
     *    <dl>
     *    <dt><tt>DrwDimUndef</tt> <dd>Undefined.</dd>
     *    <dt><tt>DrwDimHoriz</tt> <dd>Horizontal.</dd>
     *    <dt><tt>DrwDimVert</tt>  <dd>Vertical.</dd>
     *    <dt><tt>DrwDimAuto</tt>  <dd>Automatic.</dd>
     *    <dt><tt>DrwDimUserDefined</tt> <dd>User defined.</dd>
     *    <dt><tt>DrwDimTrueDim</tt> <dd>True dimension.</dd>
     *    </dl>
     *   @param iRefElem
     *    Reference element for measurement direction if user defined.
     *   @param iRefAngle
     *    Reference angle in degree for measurement direction if user defined.
     *    RefAngle is relative to iRefElem direction if it exists, else is relative to view.
     */
     virtual HRESULT SetDirection(const CATDrwDimRepresentation iRepresentation, CATBaseUnknown_var iRefElem, double iRefAngle=0.) = 0;

    /**
     * Gets secondary part overrun and side.
     *   @param overrun
     *    Overrun value.
     *   @param side
     *    Side (1=left, 2=right).
     */
     virtual void GetDimLineSecondaryPartInfos ( double &overrun, int &side ) = 0;

    /**
     * Sets secondary part overrun and side.
     *   @param overrun
     *    Overrun value.
     *   @param side
     *    Side (1=left, 2=right).
     */
     virtual void SetDimLineSecondaryPartInfos ( double overrun, int side ) = 0;

    /**
     * Sets dimension line points.
     *   @param iPtLdc1
     *    First dimension line point.
     *   @param iPtLdc2
     *    Second dimension line point.
     *   @param iPtLdcc
     *    Middle dimension line point.
     *    <br>Default value is NULL.
     */
     virtual void SetPoints(double *iPtLdc1, double *iPtLdc2, 
	                          double *iPtLdcc=NULL) = 0;

    /**
     * Gets dimension line points.
     *   @param iPtLdc1
     *    First dimension line point.
     *   @param iPtLdc2
     *    Second dimension line point.
     *   @param iPtLdcc
     *    Middle dimension line point.
     *    <br>Value is NULL if not circular dimension line.
     */
     virtual void GetPoints(double *oPtLdc1, double *oPtLdc2, 
	                          double *oPtLdcc=NULL) const = 0;

    /**
     * Gets the end point of the  graphic composante which under which underlines the value.
     * In the general case, this graphic component is the dimension line.
     * When the value is inside the space between symbols, method returns E_FAIL.
     *   @param oEndPoint
     *    coordinates of the point.
     */
    virtual HRESULT GetEndPoint( double *oEndPoint) = 0;


    /**
     * Gets the middle point of the dimension line main part.
     * This method is available whatever the type of the dimension line: Linear, circular or, curvilinear.
     * The dimension line main part may be: 
     *  - The part of the dimension line between the two extremity symbols.
     *  - The part of the dimension line starting from the unique extremity symbol. (The prolongation of the dimension line generated
     *     by the value underlining is not take into account).
     *   @param oMiddlePoint
     *    coordinates of the middle point.
     * @return
     * <dl>
     * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
     * <dt><tt>E_FAIL </tt> <dd> The dimension line type is incorrect: Foreshortened radius dimension is not available.
     * </dl>
     */
    virtual HRESULT GetMiddlePoint( double *oMiddlePoint) = 0;

     /**
     * Gets the start point of the secondary part of the dimension line. A dimension line representation mode with 2 parts has to be activated
     *   @param oMiddlePoint
     *    coordinates of the middle point.
     * @return
     * <dl>
     * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
     * <dt><tt>E_FAIL </tt> <dd> Leader two parts mode representation or two parts mode representation are not activated on the dimension line.
     * </dl>
     */
    virtual HRESULT GetStartPointOfSecondaryPart ( double *oStartPoint) = 0;

    /**
     * Gets dimension line number of symbols.
     * <br><b>PreCondition<\b>: Only available for diameter dimension.
     *   @param oNbSymb
     *    Number of symbols (1 or 2)
     *   @return
     *    error returned code
     */
     virtual HRESULT GetNumberOfSymbols ( int &oNbSymb ) = 0;

    /**
     * Sets dimension line number of symbols. 
     * <br><b>PreCondition<\b>: Only available for diameter dimension.
     *   @param iNbSymb
     *    Number of symbols (valid args are only 1 or 2)
     *   @return
     *    error returned code
     */
     virtual HRESULT SetNumberOfSymbols ( int iNbSymb ) = 0;

    /**
     * Gets if dimension line is extending till center or till value.
     * <br><b>PreCondition<\b>: Only available for diameter or radius dimension.
     *   @return
     *    error returned code
     *   @param oMode
     *    <br>Legal extension modes are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwTillCenterModeAuto</tt> <dd>Dimension line extended till center or till value depending of what set in Standard File.</dd>
     *    <dt><tt>CATDrwTillCenterModeYes</tt> <dd>Dimension line extended till center.</dd>
     *    <dt><tt>CATDrwTillCenterModeNo</tt> <dd>Dimension line extended till value .</dd>
     *   @param bVisu
     *    <br>boolean to get only visual state (i.e.: till center or not till center)
     *    </dl>.
     */
     virtual HRESULT GetTillCenterMode ( int &oMode, CATBoolean bVisu=FALSE ) = 0;

     /**
     * Sets if dimension line is extending till center or till value.
     * <br><b>PreCondition</b>: Only available for diameter or radius dimension.
     *   @return
     *    error returned code
     *   @param iMode
     *    <br>Legal symbol modes are (see define definition file):
     *    <dl>
     *    <dt><tt>CATDrwTillCenterModeAuto</tt> <dd>Dimension line extended till center or till value depending of what set in Standard File.</dd>
     *    <dt><tt>CATDrwTillCenterModeYes</tt> <dd>Dimension line extended till center.</dd>
     *    <dt><tt>CATDrwTillCenterModeNo</tt> <dd>Dimension line extended till value.</dd>
     *    </dl>
     */
     virtual HRESULT SetTillCenterMode( int iMode) = 0;

    /**
     * Gets side for dimline overrun.
     *    Side (1=left, 2=right).
     */
     virtual int GetOverrunSide () = 0;

    /**
     * Sets side for dimline overrun.
     *   @param side
     *    Side (1=left, 2=right).
     */
     virtual void SetOverrunSide ( int side ) = 0;


    /**
     * Gets angle for first part of leader.
     *   @return
     *    error returned code
     *   @param oAngle
     *    Angular value.
     */
     virtual HRESULT GetLeaderAngle( double *oAngle ) = 0;

    /**
     * Sets angle for first part of leader.
     *   @return
     *    error returned code
     *   @param iAngle
     *    Angular value. ( -360 < oAngle < 360 )
     */
     virtual HRESULT SetLeaderAngle( double iAngle ) = 0;

    /**
     * Gets length for first part of leader.
     *   @return
     *    error returned code
     *   @param oLength
     *    Length 
     */
     virtual HRESULT GetLeaderLength( double *oLength ) = 0;

    /**
     * Sets length for first part of leader.
     *   @return
     *    error returned code
     *   @param iLength
     *    Length 
     */
     virtual HRESULT SetLeaderLength( double iLength ) = 0;

    /**
     * Gets leader symbol mode.
     *   @return
     *    error returned code
     *   @param oType
     *    Symbol mode (see define definition file).
     */
     virtual HRESULT GetLeaderSymbol( int *oType ) = 0;

    /**
     * Sets leader symbol mode.
     *   @return
     *    error returned code
     *   @param iType
     *    Symbol mode (see define definition file).
     */
     virtual HRESULT SetLeaderSymbol( int iType ) = 0;


    /**
     * Gets the positioning mode of the dimension line and the shift to be applied.
     *   @param oShift
     *    Shift value.
     *   @param oDomain
     *    The domain of positionment ( Inside, Outside or Undef ) 
     *    <br>(see enum definition file).
     *   @return
     *    Returns the associativity mode: (see enum definition file)
     *    <dl>
     *    <dt><tt>NoAssociativity</tt> <dd>if there is no associativity.</dd>
     *    <dt><tt>OnFirstSelElem</tt> <dd>if the dimension line is associative to the first extension line of the dimension.</dd>
     *    <dt><tt>OnSecondSelElem</tt> <dd>if the dimension line is associative to the second extension line of the dimension.</dd>
     *    <dt><tt>OnGlobalElem</tt> <dd>if the dimension line is associative to both extension lines of the dimension.</dd>
     *    </dl>
     */
    virtual CATDimPositioningMode GetPositioningInformations( double &oShift, CATDimPositioningDomain &oDomain ) const = 0;

    /**
     * Sets the positioning mode of the dimension line to the provided value.
     *   @param iMode
     *    Value of the mode (see enum definition file).
     *    <br>Default value is OnFirstSelElem.
     */
    virtual void SetPositioningMode( const CATDimPositioningMode iMode ) = 0;

    /**
     * Sets the positioning shift of the dimension line to the provided value.
     *   @param iShift
     *    Value of the shift.
     *    <br>Default value is 5.
     */
    virtual void SetPositioningShift( const double iShift ) = 0;

    /**
     * Sets the positioning domain of the dimension line to the provided value.
     *   @param iDomain
     *    Value of the domain (see enum definition file).
     *    <br>Default value is Outside.
     */
    virtual void SetPositioningDomain( const CATDimPositioningDomain iDomain ) = 0;

};
CATDeclareHandler(CATIDrwDimDimensionLine, CATBaseUnknown);
#endif


