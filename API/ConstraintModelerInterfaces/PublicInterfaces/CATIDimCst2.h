// COPYRIGHT Dassault Systemes 2005
//===================================================================
#ifndef CATIDimCst2_H
#define CATIDimCst2_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATConstraintModelerItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATConstraintModelerItf IID IID_CATIDimCst2;
#else
extern "C" const IID IID_CATIDimCst2 ;
#endif


/**
 * Interface to manage constraints and parameters visualization.
 * <b>Role</b>: This interface unifies behaviors of constraints 
 * and features' parameters for visualization purpose.
 */
class ExportedByCATConstraintModelerItf CATIDimCst2: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Gets the callout anchor point and the normal to dimension plane.
   * (Necessary to create a 3D manipulator).
   * Allows users to get the position of the constraint.
   * @param oCallout 
   *  coordinates of the callout in an array of 3 doubles.
   * @param oNorm  
   *  coordinates of the normal to dimension plane in an array of 3 doubles.
   * @return
   * <dl>
   * <dt><tt>S_OK</tt>   <dd>on success
   * <dt><tt>E_FAIL</tt> <dd>on failure
   * </dl>
   */
   virtual HRESULT GetCalloutPositionForDimension3d( double * oCallout, double * oNorm ) const = 0;			
   
  /**
   * Sets the callout position for 3D dimension.
   * Throws <tt>GeometricalException</tt>.
   * Allows users to choose a position for the constraint.  
   * @param iCallout 
   *  coordinates of the callout as an array of 3 doubles.
   * @return
   * <dl>
   * <dt><tt>S_OK</tt>   <dd>on success
   * <dt><tt>E_FAIL</tt> <dd>on failure
   * </dl>
   */
   virtual HRESULT SetCalloutPositionForDimension3d( double * iCallout ) const = 0;			
   
   /**
   * Constraint display mode.
   * The mode is used as input parameter in @href #SetDisplayMode
   * and as output parameter in @href #GetDisplayMode
   * @param DisplayValue
   *    The text of the constraint is displayed as its value.
   * @param DisplayName 
   *    The text of the constraint is displayed as its name.
   * @param DisplayNameAndValue 
   *    The text of the constraint is displayed as its name = value.
   * @param DisplayNameAndValueAndFormula 
   *    The text of the constraint is displayed as its name = value - formula.
   */
   enum DisplayMode
   {
     DisplayValue = 1, 
     DisplayName = 4, 
     DisplayNameAndValue = 2, 
     DisplayNameAndValueAndFormula = 3 
   };

  /** 
   * Gets the display mode of the constraint.
   * @param oDisplayMode
   * <b>Legal values</b>:
   * <br><tt>DisplayValue :</tt>   The text of the constraint is displayed as its value.
   * <br><tt>DisplayName :</tt>   The text of the constraint is displayed as its name.
   * <br><tt>DisplayNameAndValue :</tt>   The text of the constraint is displayed as its name = value.
   * <br><tt>DisplayNameAndValueAndFormula :</tt>   The text of the constraint is displayed as its name = value - formula.
   * @return
   * <dl>
   * <dt><tt>S_OK</tt>   <dd>on success
   * <dt><tt>E_FAIL</tt> <dd>on failure
   * </dl>
   */ 
   virtual HRESULT GetDisplayMode( DisplayMode & oDisplayMode ) const = 0;

  /** 
   * Sets the display mode of the constraint. 
   * @param iDisplayMode
   * <b>Legal values</b>:
   * <br><tt>DisplayValue :</tt>   The text of the constraint is displayed as its value.
   * <br><tt>DisplayName :</tt>   The text of the constraint is displayed as its name.
   * <br><tt>DisplayNameAndValue :</tt>   The text of the constraint is displayed as its name = value.
   * <br><tt>DisplayNameAndValueAndFormula :</tt>   The text of the constraint is displayed as its name = value - formula.
   * @return
   * <dl>
   * <dt><tt>S_OK</tt>   <dd>on success
   * <dt><tt>E_FAIL</tt> <dd>on failure
   * </dl>
   */ 
   virtual HRESULT SetDisplayMode( const DisplayMode iDisplayMode) = 0;

};

CATDeclareHandler(CATIDimCst2, CATBaseUnknown);

#endif
