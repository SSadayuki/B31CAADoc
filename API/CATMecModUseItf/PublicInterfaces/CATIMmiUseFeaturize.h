// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseFeaturize_H
#define CATIMmiUseFeaturize_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
#include "CATMfBRepDefs.h"
#include "CATMmiContractDefs.h"

class CATIMmiUseMfBRep_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseFeaturize;
#else
extern "C" const IID IID_CATIMmiUseFeaturize ;
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
 * <li>On the other hand, a <tt>CATIMmiMechanicalFeature</tt> can be specified as the support of the BRep feature.
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
 * The specified support also can be a spec attribute that holds a feature.</ul>
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
class ExportedByCATMecModUseItf CATIMmiUseFeaturize: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Creates a BRep feature. 
 * @param oBRepFeature [out] 
 * The created <tt>CATIMmiUseMfBRep</tt> feature.
 * @param iType [in] 
 * The type of relimitation. If CATMmrDefaultLimitationType, the type of relimitation will be taken from the featurized object.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>The feature is successfully created.
 *   <dt><tt>E_FAIL</tt>        <dd>An error occured.
 *   </dl>
 */
  virtual HRESULT Featurize(CATIMmiUseMfBRep_var& oBRepFeature,CATMmrLimitationType iType = CATMmrDefaultLimitationType) = 0;

 /**
 * Creates a BRep feature. 
 * @param oBRepFeature [out] 
 * The created <tt>CATIMmiUseMfBRep</tt> feature.
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
 * @param iType [in] 
 * The type of relimitation. . If CATMmrDefaultLimitationType, the type of relimitation will be taken from the featurized object. 
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>The feature is successfully created.
 *   <dt><tt>E_FAIL</tt>        <dd>An error occured.
 *   </dl>
 */

  virtual HRESULT Featurize(CATIMmiUseMfBRep_var& oBRepFeature,const CATMfFeaturizeMode iMode,CATMmrLimitationType iType = CATMmrDefaultLimitationType) = 0;

 /**
 * Creates a BRep feature. 
 * @param oBRepFeature [out] 
 * The created <tt>CATIMmiUseMfBRep</tt> feature.
 * @param iSupport
 * The explicit support.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>The feature is successfully created.
 *   <dt><tt>E_FAIL</tt>        <dd>An error occured.
 *   </dl>
 */
  virtual HRESULT Featurize(CATIMmiUseMfBRep_var& oBRepFeature, const CATBaseUnknown_var &iSupport) = 0 ;
  
 /**
 * Creates a BRep feature. 
 * @param oBRepFeature [out] 
 * The created <tt>CATIMmiUseMfBRep</tt> feature.
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
 * @param iSupport
 * The explicit support.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>The feature is successfully created.
 *   <dt><tt>E_FAIL</tt>        <dd>An error occured.
 *   </dl>
 */
  virtual HRESULT Featurize(CATIMmiUseMfBRep_var& oBRepFeature, const CATMfFeaturizeMode iMode, const CATBaseUnknown_var &iSupport = NULL_var) = 0;
};
CATDeclareHandler (CATIMmiUseFeaturize, CATBaseUnknown); 

//------------------------------------------------------------------

#endif
