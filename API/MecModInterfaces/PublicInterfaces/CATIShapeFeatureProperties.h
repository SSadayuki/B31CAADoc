#ifndef CATIShapeFeatureProperties_h
#define CATIShapeFeatureProperties_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATMmrShapeFeaturePropertiesAdapter
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATUnicodeString.h"
 
class CATListValCATISpecObject_var;
#include "CATMathPlane.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIShapeFeatureProperties;
#else
extern "C" const IID IID_CATIShapeFeatureProperties;
#endif


/**
 * Interface to retrieve characteristics of a solid feature.
 * <b>Role</b>: A solid feature is a geometrical feature which references 3D geometry.
 * There are two kinds of solid feature: the form and the contextual feature.
 * <br><br><b>Form versus Contextual Feature </b>
 * <p>A Pad, a Pocket, a Groove, are different features: some add matter, while some remove it. 
 * However, they share a common point: they have a form and are therefore called form features. 
 * What is that?</p>
 * <p>Take a Groove for instance. From its input parameters, a Curve and a closed Sketch, 
 * one can easily derive a shape (a Form) by sliding the Sketch along the Curve.
 * The resulting solid has then to be operated with the Part's shape as it exists prior to 
 * the definition of the Groove, by removing matter (thanks to a boolean remove operation in 
 * that case).</p>
 * <p>The fact that those features can be applied by first computing their form and 
 * then operating the form with the current shape of the set defines the form 
 * feature. The form of such a feature is sometimes called its footprint.</p>
 * In contrast to form features, contextual features cannot be applied 
 * by computing a standalone footprint first, and operating it with the current set in a 
 * second step. Fillets, Drafts, and generally all Dress up Features fall into this category, 
 * because their shape is determined not only by their own input parameters, but also by the local
 * topology of the target body (hence their name). Contextual features do not have a footprint.</p>
 * <p>This interface enables you to retrieve (or to define) the type of the solid feature thanks to the 
 * two first methods (@href #IsAContextualFeature and @href #IsAFreeFormFeature ) which are 
 * of course exclusives (except for the Body feature, see below the section dedicated to this
 * feature, and the features representing the boolean operations)</p>
 * <b>Polarity of the Solid Feature</b>
 * <p>It must be noticed that the fact that some features add and some others remove matter from 
 * the Part is not linked to the Form/Contextual classification. A Draft is a Contextual Feature
 * that adds matter, while a Chamfer, still contextual, removes it. A Shaft and a Pocket are 
 * Form Features that create and remove matter respectively.
 * The @href #GetPolarity method enables you to retrieve (or to define) the intrinsic polarity of 
 * a solid feature.</p>
 * <b>Body Feature Implementation</b>
 * <p>This interface is implemented on the Body feature. In this case, only the
 * @href #GetPolarity method is valid.
 * <p><b>BOA information</b>: this interface CAN be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 * @see CATIShapeFeatureBody, CATIMechanicalTool
 */
class ExportedByMecModItfCPP CATIShapeFeatureProperties : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

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
  virtual int  IsAContextualFeature ( )  const  =0 ;

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
  virtual int  IsAFreeFormFeature ( )  const  =0 ;

/**
  * Returns the polarity of the current solid feature.
  * <br><b>Role:</b>This method returns the polarity of the solid feature. The polarity 
  * of a feature enables you to know if the feature adds or removes matter. But this method 
  * returns the intrinsic polarity  of the feature. In other words, for a Pad for example, 
  * this method always returns Add, even if the Pad removes matter. Consider the case where the Pad
  * is inside a Body feature which contains at first a Hole, the form of the Pad will be removed from
  * the hole.
  * @return
  * The returned values depends on the feature.
  * <br><b>Legal values</b>: 
  * <ul>
  * <li><b>Body</b>: ToolAdd or ToolRemove</li>
  * <br>The Body polarity is the polarity of its first activated (@href CATIMechanicalProperties ) 
  * solid feature. 
  * <li><b>Assemble</b> boolean operation: EltAdd or EltRemove</li>
  * <br>The polarity of the Assemble feature is the polarity of its operated body 
  * (@href CATIPartRequest )
  * <li><b>Add</b> boolean operation: EltAdd</li>
  * <li><b>Remove</b> boolean operation: EltRemove</li>
  * <li><b>Intersect</b> boolean operation: EltIntersect (== Add)</li>
  * <li><b>Other solid feature</b>: Add, EltAdd, Remove or EltRemove
  * </ul>
  */
  virtual CATUnicodeString GetPolarity ( )  const  =0 ;

/**
 * Returns specific sketches of the current solid feature.
 * <br><b>Role:</b>This method returns specific referenced sketches of the solid feature. These sketches 
 * will be used in two cases:
 *  <ul>
 *  <li>Feature deletion: when the feature will be deleted, if the "Delete referenced sketches" 
 * ckeck button is
 *  activated in Tools/Options, the given sketches will be also deleted.</li>
 *  <li>Feature copy: when the feature will be copied, the given sketches will be also copied</li>
 *  </ul>
 */
  virtual CATLISTV(CATISpecObject_var) GiveMeYourFavoriteSketches() const = 0 ;

/** 
 * Returns all the BRep specifications of the current solid feature.
 * <br><b>Role:</b> This method returns all the BRep (@href CATIFeaturize ) features 
 * which are specifications of this solid feature.
 * 
 */
  virtual CATLISTV(CATISpecObject_var) GiveMeYourBRepSpecifications()const = 0 ;

/**
 * @nodoc
 */
  virtual int HasAnAxis() const = 0;

/**
 * @nodoc
 */
  virtual int HasAnAxis(CATBaseUnknown_var iElt) const = 0;

/**
 * @nodoc
 */
  virtual CATMathPlane GetBoundingPlane(CATUnicodeString& iSide) const = 0;

/**
 * Returns if the current solid feature can be patterned.
 * @return
 *  An integer value.
 *   <br><b>Legal values</b>: 
 *   <ul>
 *   <li><b>1</b> the current feature can be patterned.
 *   <li><b>0</b> the current feature cannot be patterned.
 *   </ul>
 */
  virtual int CanBePatterned() const = 0;

};

CATDeclareHandler(CATIShapeFeatureProperties,CATBaseUnknown);

#endif
