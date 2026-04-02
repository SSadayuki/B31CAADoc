// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwDimDimension_H
#define CATIDrwDimDimension_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIContainer.h"
#include "CATDrwDimEnum.h"

class CATIView_var;
class CATIDimCst_var;
class CATICkeParm_var;
class CATMathPoint2D;
class CATISpecObject_var;
class CATIDrwDimExtensionLine_var;
class CATIDrwDimDimensionLine_var;
class CATIDrwDimValue_var;
class CATIDrwDimText_var;
class CATAnnAnnotable;

#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDimension ;
#else
extern "C" const IID IID_CATIDrwDimDimension ;
#endif

/**
 * Manages the dimension object.
 */

class ExportedByDraftingItfCPP CATIDrwDimDimension : public CATBaseUnknown
{
  CATDeclareInterface;
   
   public:
    /**
     * Gets the view in which the dimension is.
     *   @return
     *    The view.
     */
     virtual CATIView_var GetView() = 0;

    /**
     * Gets the dimension type (angle, length, and so on).
     *   @return
     *    The type (see enum definition file).
     */
     virtual CATDrwDimType GetDimType() = 0;           

    /**
     * @deprecated V5R15 
     * Gets the constraint dressed up by the dimension.
     *   @return
     *    The constraint.
     */
     virtual CATIDimCst_var GetConstraint() = 0; 

    /**
     * Gets the dimension positionning mode (free or forced).
     *   @return
     *    The dimension positionning mode (see enum definition file).
     */
     virtual CATDrwDimViewMode GetViewMode() = 0;

    /**
     * Gets the extension line.
     *   @return
     *    The extension line.
     */
     virtual CATIDrwDimExtensionLine_var GetExtensionLine() = 0;  

    /**
     * Gets the dimension line.
     *   @return
     *    The dimension line.
     */
     virtual CATIDrwDimDimensionLine_var GetDimensionLine() = 0;  

    /**
     * Gets the dimension value.
     *   @return
     *    The dimension value.
     */
     virtual CATIDrwDimValue_var GetValue() = 0;

    /**
     * Gets the symmetry mode.
     *   @return
     *    The symmetry mode (1=yes, 0=no).
     */
     virtual int GetSymmetryMode() = 0;

    /**
     * Sets the symmetry mode.
     *   @param iSymmetryMode
     *    Symmetry mode to set (1=yes, 0=no).
     */
     virtual void SetSymmetryMode(const int iSymmetryMode) = 0;

    /**
     * @deprecated V5R15 
     * Sets the constraint to dress up.
     *   @param iCst
     *    Constraint to set.
     */
     virtual void SetConstraint(CATIDimCst_var &iCst) = 0;

    /**
     * Sets the dimension position.
     *   @param iPosition
     *    Position to set.
     */
     virtual void SetPosition(const double * iPosition) = 0;

    /**
     * Sets the dimension positionning mode (free or forced).
     *   @param iViewMode
     *    Positionning mode to set (see enum definition file).
     */
     virtual void SetViewMode(const CATDrwDimViewMode iViewMode) = 0;
     
    /**
     * Moves the dimension line at a given point.
     *   @param ptPos
     *    Point on which the dimension line must be positionned.
     *   @param iDimAnglBehavior
     *    Defines angle dimension line behavior.
	  *    <br>  0 = Sector angle is switched when ptPos is in opposite sector (Default).
     *    <br>  1 = Sector angle is kept what ever ptPos placement.
     */
     virtual void MoveDimensionLine (const CATMathPoint2D ptPos,int iDimAngleBehavior=0) = 0;   
     
     /**
     * Moves the dimension value at a given point.
     *   @return HRESULT
     *    error returned code
     *    If the modification of the vertical offset value can not be performed because 
     *    the parameter is locked in the current standard, the method return  HRESULT = S_READ_ONLY. 
     *   @param ptPos
     *    Point on which the dimension value will be positionned.
     *   @param iSubPart
     *    Defines which part of the dimension should be moved 
     *    <br> -1 = Value (vertical move is take account according ptPos coordinates)
     *    <br>  0 = Both dimension line and value
     *    <br>  1 = Value
     *    <br>  2 = Dimension line 
     *    <br>  3 = Secondary part
     *    <br>  4 = Secondary part and value
     *    <br>  5 = Secondary part and dimension line
     *    <br>  6 = Secondary part, dimension line and value
     *    <br>  7 = Value leader (for dimension line with leader one part or two parts)
     *   @param iDimAnglBehavior
     *    Defines angle dimension line behavior.
     *    <br>  0 = Sector angle is switched when ptPos is in opposite sector (Default)
     *    <br>  1 =  Sector angle is kept what ever ptPos placement
     */
     virtual HRESULT MoveValue ( const CATMathPoint2D ptPos, const int iSubPart=0,int iDimAngleBehavior=0) = 0;   // Positionne la valeur au point ptPos
     
    /**
     * Moves the second part of dimension line at a given point.
     *   @param ptPos
     *    Point on which the second part of dimension line must be positionned.
     */
     virtual void MoveDimLineSecondaryPart ( CATMathPoint2D ptPos ) = 0;  // Positionne la partie secondaire de ldc au point ptPos

    /**
     * Moves the dimension line according to a given offset value.
     *   @param iPosition
     *    Offset value (positive or negative).
     */
     virtual void Move(double * iPosition) = 0;
     
    /**
     * Transfers the dimension into a given view.
     *   @param iView
     *    View in which the dimension should be transfered.
     */
     virtual void Move(CATIView_var iView) = 0;

    /**
     * Returns the default value position.
     *   @param pos
     *    Default position for dim value
     *   @param config
     *    =0: Current value position.
     *    =1: Default value position.
     */
     virtual void GetValuePosition ( CATMathPoint2D &pos, int config=0 ) = 0;

    /**
     * Sets the value position to the default-one.
     */
     virtual void ResetValuePosition () = 0;
     
    /**
     * Moves the dimension value according to a given (dx,dy) offset value.
		 *   @return HRESULT
     *    error returned code
		 *    If the modification of the dy value can not be performed because 
		 *    the parameter is locked in the current standard, the method return  HRESULT = S_READ_ONLY.
     *   @param dx
     *    x offset value (positive or negative).
     *   @param dy
     *    y offset value (positive or negative).
     */
     virtual HRESULT Move( double dx, double dy=0.0 ) = 0;
     
    /**
     * Show dual value.
     */
     virtual void ShowDualValue() = 0;
     
    /**
     * Hide dual value.
     */
     virtual void HideDualValue() = 0;

    /**
     * Sets angle sector (in case of angle dimension).
     *   @param sector
     *    Angle sector. (see enum definition file)
     */
     virtual void SetAngleSector ( CATDrwDimAngleSector sector ) = 0;
     
    /**
     * Gets angle sector (in case of angle dimension).
     *   @param sector
     *    Angle sector. (see enum definition file)
     */
     virtual void GetAngleSector ( CATDrwDimAngleSector &sector ) = 0;
     
    /**
     * Add a numerical tolerance.
     *   @param iUpperValue
     *    Tolerance upper value.
     *   @param iLowerValue
     *    Tolerance lower value.
     *   @param iMainModeDisplay
     *    Main value display (0=Unresolved 1= Resolved).
     *   @param iDualModeDisplay
     *    Dual value display (0=Unresolved 1= Resolved).
     */
     virtual void AddTolerance(double iUpperValue, double iLowerValue , int iMainModeDisplay, int iDualModeDisplay) = 0;

    /**
     * Add an alphanumerical tolerance.
     *   @param iUpperValue
     *    Tolerance upper value.
     *   @param iLowerValue
     *    Tolerance lower value.
     *   @param iMainModeDisplay
     *    Main value display (0=SideBySide 1= Fractional).
     *   @param iDualModeDisplay
     *    Dual value display (0=SideBySide 1= Fractional).
     */
     virtual void AddTolerance(CATUnicodeString iUpperValue, CATUnicodeString iLowerValue , int iMainModeDisplay, int iDualModeDisplay) = 0;
     
    /**
     * Remove tolerance.
     */
     virtual void RemoveTolerance() = 0;

    /**
     * @nodoc
     * Changes the elements measured by the dimension.
     *   @param iAnnSelections
     *    Array of pointers on CATAnnSelection objects.
     *   @param iAnnSelectionNbr
     *    Size of the iAnnSelections array.
     *   @param iUpdateOrder      
     *    The default value (1) implies an update of the dimension 
     *    with the new elements and associativity informations. 
     *    Sets 0 value to evict the update.
     */
   virtual HRESULT SetElements(
      CATAnnAnnotable ** iNewElements, 
      int iAnnSelectionNbr,
      int iUpdateOrder=1) = 0;


    /**
     * @nodoc
     * Gets the points defining the dimension-line.
     *   @param pLc1
     *    Point of the dimension-line
     *   @param iSel1
     *    Selection order of the geometry related to the point
     *   @param iOrd1
     *    Side order of the geometry related to the point
	 *		= 1: Left or bottom
	 *      = 2: Right or top
    *   @param pLc2
     *    Point of the dimension-line
     *   @param iSel2
     *    Selection order of the geometry related to the point
     *   @param iOrd2
     *    Side order of the geometry related to the point
	 *		= 1: Left or bottom
	 *      = 2: Right or top
     *   @param pLcc
     *    Center of the dimension-line
     *   @param center
     *    = 1 if circular dimension-line
	 *   @param pLcc
     *    Ceneter of the dimension-line
     */
     virtual void GetDimLineShape ( 
				CATMathPoint2D &pLc1, int &iSel1, int &iOrd1, 
				CATMathPoint2D &pLc2, int &iSel2, int &iOrd2, 
				int &center, CATMathPoint2D &pLcc ) = 0;

   /**
     * @nodoc
     * Gets the points defining the dimension-line.
     *   @param nbLdr
     *    Number of extension-lines
     *   @param center
     *    = 1 if circular extension-line(s)
     *   @param pLr1
     *    Point of the extension-line
     *   @param pLrc1
     *    Center of the extension-line (if center = 1)
     *   @param iSel1
     *    Selection order of the geometry related to the point
     *   @param iOrd1
     *    Side order of the geometry related to the point
	 *		= 1: Left or bottom
	 *      = 2: Right or top
     *   @param pLr2
     *    Point of the extension-line
     *   @param pLrc2
     *    Center of the extension-line (if center=1)
     *   @param iSel2
     *    Selection order of the geometry related to the point
     *   @param iOrd2
     *    Side order of the geometry related to the point
	 *		= 1: Left or bottom
	 *      = 2: Right or top
     */
     virtual void GetExtLinesShape ( int &nbLdr, int &center,
				CATMathPoint2D &pLr1, CATMathPoint2D &pLrc1, int &iSel1, int &iOrd1, 
				CATMathPoint2D &pLr2, CATMathPoint2D &pLrc2, int &iSel2, int &iOrd2 ) = 0;

	/**
     * @nodoc
     */
     virtual void BeginManipulate () = 0;

	/**
     * @nodoc
     */
     virtual void EndManipulate () = 0;


    /**
     * Gets auto positioning mode of dimension value.
     *   @return
     *    error returned code
     *   @param iMode
     *    Mode
     *     <br>  1 = Not auto mode.
     *               Dimension value is always between two symbols at the creation.
	   *     <br>  2 = Auto mode.
     *               Dimension value is out of two symbols if distance of 
     *               two symbols is shorter than length of value characters.
     */
     virtual HRESULT GetAutoMode ( int *oMode ) = 0;

    /**
     * Sets auto positioning mode of dimension value.
     *   @return
     *    error returned code
     *   @param iMode
     *    Mode
     *     <br>  1 = Not auto mode.
     *               Dimension value is always between two symbols at the creation.
	   *     <br>  2 = Auto mode.
     *               Dimension value is out of two symbols if distance of 
     *               two symbols is shorter than length of value characters.
     */
     virtual HRESULT SetAutoMode ( int iMode ) = 0;

    /**
     * Check if above two methods are available.
     *   @return
     *    error returned code
     *   @param bMode
     *     <br>  true  = Auto mode is available.
	   *     <br>  false = Otherwise.
     */
     virtual HRESULT IsAutoModeAble( boolean *bMode ) = 0;

    /**
     * This method is available even if the dimension has 1 extremity symbol.
     * except for cumurate dimension.
     * Gets inside\outside mode of dimension value.
     *   @return
     *    error returned code
     *   @param iMode
     *    Mode
     *     <br>  1 = Inside mode.
	   *     <br>  2 = Outside mode.
     */
     virtual HRESULT GetInOutMode ( int *oMode ) = 0;

    /**
     * This method is available even if the dimension has 1 extremity symbol.
     * except for cumurate dimension.
     * Sets inside\outside mode of dimension value.
     *   @return
     *    error returned code
     *   @param iMode
     *    Mode
     *     <br>  1 = Inside mode.
	   *     <br>  2 = Outside mode.
     */
     virtual HRESULT SetInOutMode ( int iMode ) = 0;

    /**
     * Check if above two methods are available.
     *   @return
     *    error returned code
     *   @param bMode
     *     <br>  true  = Inside\Outside mode is available.
	   *     <br>  false = Otherwise.
     */
     virtual HRESULT IsInOutModeAble ( boolean *bMode ) = 0;

     /**
     * Retrieve the data pointed by the dimension.
     *   @return
     *    error returned code
     *   @param oDimData
     *    Return a handler on the data 
     */
     virtual HRESULT GetDimensionalData ( CATBaseUnknown* &oDimData ) = 0;

     /**
     * Retrieve the status of the dimension.
     * @param oListOfDimStatus
     * The list of the dimension status. the return values are defined in CATDrwDimAnalysisType
     *  @return
     * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
     * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure occurred.
     * </dl>
     * @see CATDrwDimAnalysisType
     */
     virtual HRESULT GetDimensionStatus( CATListOfInt  &oListOfDimStatus) = 0;


     /** 
     * Creates a clip on the dimension at the given point, with respect to the side given by iKeptSide.
     * @param iClipPt [in]
     *   Point where to apply the clipping
     * @param iKeptSide [in]
     *   Side of the dimension to be kept. The value of this parameter can be 1 or 2. Side 1 (resp. 2) is the side of ptldc1
     *   (resp. ptldc2) which is defined by the SetPoints and GetPoints methods on the CATIDrwDimDimensionLine interface.
     * @return
     *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise
     */
     virtual	HRESULT SetClip(const CATMathPoint2D iClipPt, int iKeptSide)=0;

     /** 
     * Retrieves the clipping information through the clipping point.
     * @param oClipPt [out]
     *   Clipping point
     * @param oKeptSide [out]
     *   Kept side of the dimension. The value of this parameter can be 0 (if the dimension isn't clipped), 1 or 2. Side 1 (resp. 2) is the
     *   side of ptldc1 (resp. ptldc2) which is defined by the SetPoints and GetPoints methods on the CATIDrwDimDimensionLine interface.
     * @return
     *   <ul><li><code>S_OK</code> if everything ran ok and the dimension is clipped</li>
     *   <li><code>S_FALSE</code> if everything ran ok, but the clipping isn't clipped</li>
     *   <li><code>E_FAIL</code> if something went wrong</li></ul>
     */
     virtual	HRESULT GetClip(CATMathPoint2D & oClipPt, int &oKeptSide)=0;

     /**
     * Removes the clipping if existing.
     *
     * @return
     *   <ul><li><code>S_OK</code> if everything ran ok and the dimension was clipped,</li>
     *   <li><code>S_FALSE</code> if the dimension wasn't clipped,</li>
     *   <li><code>E_FAIL</code> otherwise.</li></ul>
     */
     virtual	HRESULT UnClip()=0;
     
     /** 
     * Returns the kept side of a clipped dimension.
     *
     * @param oKeptSide [out]
     *   Kept side of the dimension. The value of this parameter can be 0 (dimension not clipped), 1 or 2. Side 1 (resp. 2) is the side of ptldc1
     *   (resp. ptldc2) which is defined by the SetPoints and GetPoints methods on the CATIDrwDimDimensionLine interface.
     * @return
     *   <ul><li><code>S_OK</code> if everything ran</li>
     *   <li><code>E_FAIL</code> otherwise</li></ul>
     */
     virtual	HRESULT GetClipSide(int & oKeptSide)=0;
};
CATDeclareHandler(CATIDrwDimDimension, CATBaseUnknown);
#endif
