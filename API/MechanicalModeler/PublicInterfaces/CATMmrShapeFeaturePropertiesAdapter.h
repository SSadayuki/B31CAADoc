// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#ifndef CATMmrShapeFeaturePropertiesAdapter_H
#define CATMmrShapeFeaturePropertiesAdapter_H

#include "CATIShapeFeatureProperties.h"
#include "CATMechanicalModeler.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h" 
#include "CATISpecObject.h"
#include "CATMathPlane.h"

class CATListValCATISpecObject_var; 

//-----------------------------------------------------------------------

/**
 * Adapter class for the CATIShapeFeatureProperties interface.
 * <b>Role:</b> This class enables to implement the @href CATIShapeFeatureProperties
 * interface. Create a new class deriving from the current one, and reimplement the 
 * necessary methods among the four following methods:
 * <ul>
 * <li>@href #GetPolarity </li>
 * <li>@href #GiveMeYourFavoriteSketches </li>
 * <li>@href #GiveMeYourBRepSpecifications </li>
 * <li>@href #CanBePatterned </li>
 * </ul>
 */
class ExportedByCATMechanicalModeler CATMmrShapeFeaturePropertiesAdapter: public CATIShapeFeatureProperties
{

  public:

  /**
    * Constructs the class.
    */
     CATMmrShapeFeaturePropertiesAdapter ();

     virtual ~CATMmrShapeFeaturePropertiesAdapter ();

  /**
    * Returns the polarity of the solid feature.
    * <br><b>Role:</b>This method returns the polarity of the solid feature. The polarity 
    * of a feature enables to know if the feature adds or removes matter. 
    * @return 
    * The polarity of the feature:
    *  <ul>
    *  <li><b>EltAdd</b>: The solid feature adds matter</li>
    *  <li><b>EltRemove</b>: The solid feature removes matter</li>
    *  </ul>
    * The default implementation returns <tt>EltAdd</tt>.
    */
  virtual CATUnicodeString GetPolarity( )  const;

/**
 * Returns specific sketches.
 * <br><b>Role:</b>This method returns specific referenced sketches of the solid feature. These sketches 
 * will be used in two cases:
 *  <ul>
 *  <li><b>Feature deletion</b>: When the feature will be deleted, if the "Delete referenced sketches" 
 * ckeck button is
 *  activated in Tools/Options, the given sketches will be also deleted.</li>
 *  <li><b>Feature copy</b>: When the feature will be copied, the given sketches will be also copied</li>
 *  </ul>
 * The default implementation returns an empty list.
 */
  virtual CATLISTV(CATISpecObject_var) GiveMeYourFavoriteSketches() const;

/** 
 * Returns all the BRep specifications.
 * <br><b>Role:</b> This method returns all the BRep (@href CATIFeaturize ) features 
 * which are specifications of this solid feature.
 * <br>The default implementation returns an empty list.
 */
  virtual CATLISTV(CATISpecObject_var) GiveMeYourBRepSpecifications() const; 

  /**
    * Returns if the current feature can be patterned.
    * @return
    *  An integer value.
    *   <br><b>Legal values</b>: 
    *   <ul>
    *   <li><b>1</b> the current feature can be patterned.
    *   <li><b>0</b> the current feature cannot be patterned.
    *   </ul>
    * The default implementation returns <tt>0</tt>.
    */
  virtual int CanBePatterned() const;

/**
 * Returns if the current solid feature is contextual.
 * <br><b>Role:</b>This method enables you to know if the solid feature is a contextual feature or
 * not. 
 *
 * @return
 *  An integer value.
 *   <br><b>Legal values</b>: 
 *   <ul><li><b>1</b> the current feature is contextual.
 *   <li><b>0</b> the current feature is not contextual.
 * </ul>
 * For the features representing a boolean operation ( Add, Assemble, Remove, Intersect and
 * Union Trim) the value is 0.
 */
  virtual int  IsAContextualFeature( )  const;

/**
  * Returns if the current solid feature is a form feature.
  * <br><b>Role:</b>This method enables you to know if the solid feature is a form feature or
  * not. 
  *
  * @return
  *  An integer value.
  *   <br><b>Legal values</b>: 
  *   <ul>
  *      <li><b>1</b> the current feature is a form feature.
  *      <li><b>0</b> the current feature is not a form feature.
  *   </ul>
  * For the features representing a boolean operation ( Add, Assemble, Remove, Intersect and
  * Union Trim) the value is 0.
  */
  virtual int  IsAFreeFormFeature( )  const;
  
  /** @nodoc */
  virtual int HasAnAxis() const;

  /** @nodoc */
  virtual int HasAnAxis(CATBaseUnknown_var iElt) const;

  /** @nodoc */
  virtual CATMathPlane GetBoundingPlane(CATUnicodeString& iSide) const;

  private:
  // Copy constructor and equal operator
  // -----------------------------------
  CATMmrShapeFeaturePropertiesAdapter (CATMmrShapeFeaturePropertiesAdapter &);
  CATMmrShapeFeaturePropertiesAdapter& operator=(CATMmrShapeFeaturePropertiesAdapter&);

};

//-----------------------------------------------------------------------

#endif
