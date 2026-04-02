// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiUseGeometricalElement_H 
#define CATIMmiUseGeometricalElement_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

class CATBody_var;
class CATMathPoint;
class CATMathDirection;
class CATListValCATIMmiUseMfBRep_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseGeometricalElement;
#else
extern "C" const IID IID_CATIMmiUseGeometricalElement ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage a geometrical feature.
 * <b>Role</b>: A geometrical feature is a mechanical feature with a topological result 
 * (a <tt>CATBody</tt>). It can be included into a Geometrical Set, an Ordered Geometrical Set or 
 *  a Body feature. The  <tt>CATBody</tt> can be assigned to the feature: 
 * <ul>
 *  <li>Manually </li>
 * <p>Thanks to the @href CATIMmiUseDatumFactory interface</p>
 *  <li>Automatically</li>
 * <p>The construction is done by the update mechanism. The @href CATIFmFeatureBehaviorCustomization#Build or 
 * the @href CATIBuildShape#BuildShape methods 
 * build the <tt>CATBody</tt></p>
 * </ul>
 */
class ExportedByCATMecModUseItf CATIMmiUseGeometricalElement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


 /**
 * Returns the result topological body associated with the current feature.
 * @param oBody [out]
 * Depending on the geometrical feature type, the returned <tt>CATBody</tt> has been 
 * associated with the feature thanks to:
 * <ul>
 * <li>@href CATIMmiUseDatumFactory for a datum feature - see @href CATIMf3DBehavior - </li>
 * <li>@href CATIBuildShape#BuildShape for a form feature - see <tt>CATIShapeFeatureProperties</tt> </li>
 * <li>@href CATIFmFeatureBehaviorCustomization#Build  otherwise </li>
 * </ul>
 * To know more about the result of a geometrical feature, refer to the CAA Encyclopedia home page. 
 * @return
 * S_OK if OK, E_FAIL otherwise
 */
  virtual HRESULT GetBodyResult(CATBody_var& oBody) = 0;

 /**
 * Retrieves the bounding box center of gravity and the bounding box extremities.
 * <br><b>Role:</b>This method enables to know the bounding box of the
 * geometrical feature. You retrieve the same information in using the
 * @href CATGeometry#GetBoundingBox method applied to the <tt>CATBody</tt> returned by 
 * the previous @href #GetBodyResult method.
 * <br>The bounding box contents the geometrical feature, but can be greater.
 * @param oBoundingBoxGravityCenter [out]
 * The bounding box center of gravity. 
 * @param oLowerPoint [out]
 * Lower extremity of the bounding box.
 * @param oHigherPoint [out]
 * Higher extremity of the bounding box.
 * @return
 * S_OK if OK, E_FAIL otherwise
 */ 
  virtual HRESULT GetGeomCharacteristicPoints(CATMathPoint& oBoundingBoxGravityCenter,CATMathPoint&  oLowerPoint, CATMathPoint& oHigherPoint) = 0;

  /**
 * Retrieves the inertia directions of the current feature.
 * @param oDirection1 [out]
 * First inertia direction.
 * @param oDirection2 [out]
 * Second inertia direction.
 * @param oDirection3 [out]
 * Third inertia direction.
 * @return
 * S_OK if OK, E_FAIL otherwise
 */
  virtual HRESULT GetGeomCharacteristicDirections(CATMathDirection& oDirection1, CATMathDirection& oDirection2, CATMathDirection& oDirection3 ) = 0; 

 /**
 * Returns the list of BRep features that involve the current feature.
 * <br><b>Role:</b>This method returns all the BRep features (@href CATIMmiUseFeaturize )
 * that involve the geometrical feature. 
 * @param oList [out]
 * The list of BRepFeatures.
 * @return
 * S_OK if OK, E_FAIL otherwise
 */
  virtual HRESULT GetBRepFeatures(CATListValCATIMmiUseMfBRep_var& oList) const = 0;

};
CATDeclareHandler (CATIMmiUseGeometricalElement, CATBaseUnknown);



//------------------------------------------------------------------

#endif
