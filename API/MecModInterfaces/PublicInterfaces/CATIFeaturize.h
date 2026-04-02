#ifndef CATIFeaturize_h
#define CATIFeaturize_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATMfBRepDefs.h"
#include "CATMfBRepInternalDefs.h"
#include "CATIContainer.h"
#include "CATIGeometricalElement.h"

class CATIFeaturize_var;
class CATIPrtContainer_var;
class CATISpecObject_var;
class CATIMfBRep_var;
class CATIMmiBrepFtrContract_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIFeaturize;
#else
extern "C" const IID IID_CATIFeaturize;
#endif

/**
 * Interface to create a BRep feature from a selecting object or to duplicate a BRep feature.
 * <b>Role</b>: All methods of this interface work with the following set of attribute:
 * <ul><li>If a method is called on a selecting object, it creates a BRep feature.
 * <li>If a method is called on a BRep feature, it returns the BRep feature itself or
 * a copy of this BRep feature, depending on the <tt>iMode</tt> parameter.</ul>
 *
 * Duplication of the BRep feature is controlled by the following values:
 * <ul><li><tt>MfNoDuplicateFeature</tt>, which is the default value, and 
 * <li><tt>MfDuplicateFeature</tt>.</ul>
 *
 * There are 2 ways to define the support, either through a mode, or a support:
 * <ul><li>Support definition of the BRep feature is also controlled by the following <tt>iMode</tt> values:
 * <ul><li><tt>MfInitialFeatureSupport</tt>, which is the default value for functional BRep features, 
 * <li><tt>MfSelectingFeatureSupport</tt>, which is the default value for relimited BRep features, and 
 * <li><tt>MfLastFeatureSupport</tt>.</ul>
 *
 * <li>On the other hand, a <tt>CATISpecObject</tt> can be specified as the support of the BRep feature.
 * <ul><li>The functional BRep feature points to this specified object. <li>The relimited BRep feature points to 
 * the <tt>ResultOUT</tt> of this specified object.</ul>
 *
 * <br>When the specified support is a <tt>ResultOUT</tt>, 
 * the BRep feature points to the attribute that contains this <tt>ResultOUT</tt>.
 * 
 * <br>Some Part Design features such as fillet or draft angle have a special behavior. 
 * The support becomes the <tt>ResultIN</tt> of the design feature in order to manage 
 * delete, deactive, reorder, cut and paste.
 *
 * The specified support also can be a <tt>CATISpecAttribute</tt> that holds a <tt>CATISpecObject</tt>.</ul>
 *
 * <br>The <tt>iMode</tt> value <ul><li><tt>MfTemporaryBody</tt>, which is the default value,
 * creates a BRep feature 
 * that is a handle on a shape feature. Such a BRep feature requires the shape feature to provide 
 * its own geometrical description.
 * <li><tt>MfPermanentBody</tt> creates an independant BRep feature that behaves like a
 * curve or surface feature. Such a feature can be used as an input to other operators.</ul>
 *
 * <br>These values can be combined together according to the following syntax:
 * <tt>CATMfFeaturizeMode iMode = MfNoDuplicateFeature | MfPermanentBody | MfLastFeatureSupport;</tt>.
 *
 * <br>Anyway, the application has to aggregate the BRep feature in the structure so that 
 * it is involved in data management processes: delete, cut, copy, paste, update.
 */

class ExportedByMecModItfCPP CATIFeaturize : public CATBaseUnknown
{
  CATDeclareInterface;
  public:

/**
 * Creates a BRep feature as a functional element. 
 * @return 
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfFsur</tt> feature when called on a <tt>CATIRSur</tt> object.
 * <li>Creates a <tt>CATIMfFedge</tt> feature when called on a <tt>CATIREdge</tt> object.
 * <li>Creates a <tt>CATIMfFvertex</tt> feature when called on a <tt>CATIFvertex</tt> object.
 * <li>Creates a <tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object.
 * <li>Creates a <tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object.
 * <li>Creates a <tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIWireREdge</tt> object.
 * <li>Creates a <tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIWireFvertex</tt> object.
 * <li>Creates a <tt>CATIMfAxis</tt> feature when called on a <tt>CATICharacteristicAxis</tt> object.
 * <li>Creates a <tt>CATIMfExtremity</tt> feature when called on a <tt>CATICharacteristicExtremity</tt> object.
 * </ul>
 */
  virtual CATISpecObject_var FeaturizeF() = 0;

/**
 * Creates a BRep feature as a functional element.
 * @param iMode
 * The creation mode.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>,
 * <li><tt>MfFeaturizeIntersection</tt>,
 * <li><tt>MfFeaturizeC1Intersection</tt>.</ul>
 * @return
 * <ul><li><tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object,
 * <li><tt>CATIMfFsur</tt> feature when called on a <tt>CATIRSur</tt> object,
 * <li><tt>CATIMfFedge</tt> feature when called on a <tt>CATIREdge</tt> object,
 * <li><tt>CATIMfFvertex</tt> feature when called on a <tt>CATIFvertex</tt> object,
 * <li><tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object,
 * <li><tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object,
 * <li><tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIWireREdge</tt> object,
 * <li><tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIWireFvertex</tt> object,
 * <li><tt>CATIMfAxis</tt> feature when called on a <tt>CATICharacteristicAxis</tt> object,
 * <li><tt>CATIMfExtremity</tt> feature when called on a <tt>CATICharacteristicExtremity</tt> object.</ul>
 */
  virtual CATISpecObject_var FeaturizeF(const CATMfFeaturizeMode iMode) = 0;

/**
 * Creates a BRep feature as a relimited element.
 * @return
 * <ul><li><tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object,
 * <li><tt>CATIMfRsur</tt> feature when called on a <tt>CATIRSur</tt> object,
 * <li><tt>CATIMfRedge</tt> feature when called on a <tt>CATIREdge</tt> object,
 * <li><tt>CATIMfFvertex</tt> feature when called on a <tt>CATIFvertex</tt> object,
 * <li><tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object,
 * <li><tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object,
 * <li><tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIWireREdge</tt> object,
 * <li><tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIWireFvertex</tt> object,
 * <li><tt>CATIMfAxis</tt> feature when called on a <tt>CATICharacteristicAxis</tt> object,
 * <li><tt>CATIMfExtremity</tt> feature when called on a <tt>CATICharacteristicExtremity</tt> object.</ul>
 */
  virtual CATISpecObject_var FeaturizeR() = 0 ;

/**
 * Creates a BRep feature as a relimited element.
 * @param iMode
 * The creation mode.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>,
 * <li><tt>MfFeaturizeIntersection</tt>,
 * <li><tt>MfFeaturizeC1Intersection</tt>.</ul>
 * @return
 * <ul><li><tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object,
 * <li>CATIMfRsur</tt> feature when called on a <tt>CATIRSur</tt> object,
 * <li>CATIMfRedge</tt> feature when called on a <tt>CATIREdge</tt> object,
 * <li>CATIMfFvertex</tt> feature when called on a <tt>CATIFvertex</tt> object,
 * <li>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object,
 * <li>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object,
 * <li>CATIMfWireRedge</tt> feature when called on a <tt>CATIWireREdge</tt> object,
 * <li>CATIMfWireFvertex</tt> feature when called on a <tt>CATIWireFvertex</tt> object,
 * <li>CATIMfAxis</tt> feature when called on a <tt>CATICharacteristicAxis</tt> object,
 * <li>CATIMfExtremity</tt> feature when called on a <tt>CATICharacteristicExtremity</tt> object.</ul>
 */
  virtual CATISpecObject_var FeaturizeR(const CATMfFeaturizeMode iMode) = 0;
  
/**
 * Creates a BRep feature as a relimited element.
 * @param iSupport
 * The explicit support.
 * @return
 * <ul><li><tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object,
 * <li><tt>CATIMfRsur</tt> feature when called on a <tt>CATIRSur</tt> object,
 * <li><tt>CATIMfRedge</tt> feature when called on a <tt>CATIREdge</tt> object,
 * <li><tt>CATIMfFvertex</tt> feature when called on a <tt>CATIFvertex</tt> object,
 * <li><tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object,
 * <li><tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object,
 * <li><tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIWireREdge</tt> object,
 * <li><tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIWireFvertex</tt> object,
 * <li><tt>CATIMfAxis</tt> feature when called on a <tt>CATICharacteristicAxis</tt> object,
 * <li><tt>CATIMfExtremity</tt> feature when called on a <tt>CATICharacteristicExtremity</tt> object.</ul>
 */
  virtual CATISpecObject_var FeaturizeR(const CATBaseUnknown_var &iSupport) = 0 ;

/**
 * Creates a BRep feature as a relimited element.
 * @param iSupport
 * The explicit support.
 * @param iMode
 * The creation mode.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>,
 * <li><tt>MfFeaturizeIntersection</tt>,
 * <li><tt>MfFeaturizeC1Intersection</tt>.</ul>
 * @return
 * <ul><li>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object,
 * <li>CATIMfRsur</tt> feature when called on a <tt>CATIRSur</tt> object,
 * <li>CATIMfRedge</tt> feature when called on a <tt>CATIREdge</tt> object,
 * <li>CATIMfFvertex</tt> feature when called on a <tt>CATIFvertex</tt> object,
 * <li>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object,
 * <li>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object,
 * <li>CATIMfWireRedge</tt> feature when called on a <tt>CATIWireREdge</tt> object,
 * <li>CATIMfWireFvertex</tt> feature when called on a <tt>CATIWireFvertex</tt> object,
 * <li>CATIMfAxis</tt> feature when called on a <tt>CATICharacteristicAxis</tt> object,
 * <li>CATIMfExtremity</tt> feature when called on a <tt>CATICharacteristicExtremity</tt> object.</ul>
 */
  virtual CATISpecObject_var FeaturizeR(const CATBaseUnknown_var &iSupport,
					const CATMfFeaturizeMode iMode) = 0;

/**
 * Creates a BRep feature of type border edge or border vertex.
 * Implicit support of a border edge is computed with the <tt>MfSelectingFeatureSupport</tt> convention.
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object.
 * <li>Creates a <tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a 
 * <li><tt>CATIREdge</tt>, a 
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIWireREdge</tt>, a 
 * <li><tt>CATIWireFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a 
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeBorder() = 0 ;

/**
 * Creates a BRep feature of type border edge or border vertex.
 * @param iMode
 * The creation mode.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>.</ul>
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object.
 * <li>Creates a <tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a 
 * <li><tt>CATIREdge</tt>, a 
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIWireREdge</tt>, a 
 * <li><tt>CATIWireFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a 
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeBorder(const CATMfFeaturizeMode iMode) = 0;

/**
 * Creates a BRep feature of type border edge only.
 * @param iSupport
 * The explicit support.
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object.
 * <li>Creates a <tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a 
 * <li><tt>CATIREdge</tt>, a 
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIWireREdge</tt>, a 
 * <li><tt>CATIWireFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a 
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */ 
  virtual CATISpecObject_var FeaturizeBorder(const CATBaseUnknown_var &iSupport) = 0 ;

/**
 * Creates a BRep feature of type border edge only.
 * @param iSupport
 * The explicit support.
 * @param iMode
 * The creation mode.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>.</ul>
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfBorderRedge</tt> feature when called on a <tt>CATIBorderREdge</tt> object.
 * <li>Creates a <tt>CATIMfBorderFvertex</tt> feature when called on a <tt>CATIBorderFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a 
 * <li><tt>CATIREdge</tt>, a 
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIWireREdge</tt>, a 
 * <li><tt>CATIWireFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a 
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeBorder(const CATBaseUnknown_var &iSupport,
					     const CATMfFeaturizeMode iMode) = 0;

/**
 * Creates a BRep feature of type wire edge or wire vertex.
 * Implicit support of a wire edge is computed with the <tt>MfSelectingFeatureSupport</tt> convention.
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIMfWireRedge</tt> object.
 * <li>Creates a <tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIMfWireFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a
 * <li><tt>CATIREdge</tt>, a
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIBorderREdge</tt>, a
 * <li><tt>CATIBorderFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeWire() = 0 ;

/**
 * Creates a BRep feature of type wire edge.
 * @param iMode
 * The creation mode.
 * <ul><li><b>Legal values</b>:
 * <li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>.</ul>
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIMfWireRedge</tt> object.
 * <li>Creates a <tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIMfWireFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a
 * <li><tt>CATIREdge</tt>, a
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIBorderREdge</tt>, a
 * <li><tt>CATIBorderFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeWire(const CATMfFeaturizeMode iMode) = 0;

/**
 * Creates a BRep feature of type wire edge only.
 * @param iSupport
 * The explicit support.
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIMfWireRedge</tt> object.
 * <li>Creates a <tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIMfWireFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a
 * <li><tt>CATIREdge</tt>, a
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIBorderREdge</tt>, a
 * <li><tt>CATIBorderFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeWire(const CATBaseUnknown_var &iSupport) = 0 ;

/**
 * Creates a BRep feature of type wire edge only.
 * @param iSupport
 * The explicit support.
 * @param iMode
 * The creation mode.
 * <ul><li><b>Legal values</b>:
 * <li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>,
 * <li><tt>MfLastFeatureSupport</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>.</ul>
 * @return
 * <ul><li>Creates a <tt>CATIMfBRep</tt> feature when called on a <tt>CATIBRepAccess</tt> object.
 * <li>Creates a <tt>CATIMfWireRedge</tt> feature when called on a <tt>CATIMfWireRedge</tt> object.
 * <li>Creates a <tt>CATIMfWireFvertex</tt> feature when called on a <tt>CATIMfWireFvertex</tt> object.
 * <li>Returns NULL when called on a 
 * <ul><li><tt>CATIRSur</tt>, a
 * <li><tt>CATIREdge</tt>, a
 * <li><tt>CATIFvertex</tt>, a
 * <li><tt>CATIBorderREdge</tt>, a
 * <li><tt>CATIBorderFvertex</tt>, a
 * <li><tt>CATICharacteristicAxis</tt> or a
 * <li><tt>CATICharacteristicExtremity</tt> object.</ul></ul>
 */
  virtual CATISpecObject_var FeaturizeWire(const CATBaseUnknown_var &iSupport,
					   const CATMfFeaturizeMode iMode) = 0;

//############################################################################################

/**
 * @nodoc
 * <br> Method not implemented.
 */
  virtual CATISpecObject_var FeaturizeIntersectionRedge() = 0 ;

/**
 * @nodoc
 * <br> Method not implemented.
 */
  virtual CATISpecObject_var FeaturizeIntersectionRedge(const CATMfFeaturizeMode iMode) = 0;

/**
 * @nodoc
 * <br> Method not implemented.
 */
  virtual CATISpecObject_var FeaturizeIntersectionRedge(const CATBaseUnknown_var &iSupport) = 0 ;

/**
 * @nodoc
 * <br> Method not implemented.
 */
  virtual CATISpecObject_var FeaturizeIntersectionRedge(const CATBaseUnknown_var &iSupport,
							const CATMfFeaturizeMode iMode) = 0;

//############################################################################################
/**
 * @nodoc
 * Old method - use FeaturizeF( MfNoDuplicateFeature )
 */
  virtual CATISpecObject_var FeaturizeF(const CATIContainer_var& PrtCont,
					const CATIContainer_var& bidon = NULL_var) = 0;
/**
 * @nodoc
 * Old method. - use FeaturizeR(const CATBaseUnknown_var &iSupport, MfNoDuplicateFeature )
 */
  virtual CATISpecObject_var FeaturizeR(const CATIPrtContainer_var& PrtCont)= 0;
/**
 * @nodoc
 * Old method. - use FeaturizeR(const CATBaseUnknown_var &iSupport, MfNoDuplicateFeature )
 */
  virtual CATISpecObject_var FeaturizeR(const CATIContainer_var& PrtCont,
					const CATIGeometricalElement_var &feat=NULL_var,
					const CATIContainer_var& bidon=NULL_var) = 0 ;
/**
 * @nodoc
 * Old method. - use FeaturizeBorder(const CATBaseUnknown_var &iSupport, MfNoDuplicateFeature )
 */
  virtual CATISpecObject_var FeaturizeBorder(const CATIPrtContainer_var& PrtCont)= 0; 
/**
 * @nodoc
 * Old method. - use FeaturizeBorder(const CATBaseUnknown_var &iSupport, MfNoDuplicateFeature )
 */
  virtual CATISpecObject_var FeaturizeBorder(const CATIContainer_var& PrtCont,
					     const CATIGeometricalElement_var& feat=NULL_var) = 0 ;
/**
 * @nodoc
 * Old method. - use FeaturizeWire(const CATBaseUnknown_var &iSupport, MfNoDuplicateFeature )
 */
  virtual CATISpecObject_var FeaturizeWire(const CATIPrtContainer_var& PrtCont)= 0; 

/**
 * @nodoc 
 * Old method. - use FeaturizeWire(const CATBaseUnknown_var &iSupport, MfNoDuplicateFeature)
 */
  virtual CATISpecObject_var FeaturizeWire(const CATIContainer_var& PrtCont,
					   const CATIGeometricalElement_var& feat=NULL_var) = 0 ;

};

CATDeclareHandler( CATIFeaturize, CATBaseUnknown ) ;


#endif


