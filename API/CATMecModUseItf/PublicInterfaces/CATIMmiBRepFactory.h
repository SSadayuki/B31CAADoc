#ifndef CATIMmiBRepFactory_H
#define CATIMmiBRepFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
#include "CATMfBRepDefs.h"

class CATMathPoint;

class CATIMmiUsePointOnEdge_var;
class CATIMmiUseMfBRep_var;
class CATIMmiUseBRepAccess_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiBRepFactory;
#else
extern "C" const IID IID_CATIMmiBRepFactory ;
#endif

//------------------------------------------------------------------
/**
 * Interface to create BRep features.
 * <b>Role:</b>
 * This interface is used whenever standard interface @href CATIMmiUseFeaturize is not applicable.
 * It applies for Brep features that request additionnal information.
 * <p>This interface is implemented by the specification container of the 3D Shape. 
 */
class ExportedByCATMecModUseItf CATIMmiBRepFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
   
 /** 
 * Creates a point on edge BRep feature.
 * <br><b>Role</b>: this method creates a point on edge BRep feature.
 * @param iEdge [in]
 * The edge feature on which the point on edge will be created.
 * @param iRatio [in]
 * The ratio.
 * @param oPointOnEdge [out]
 * The point on edge feature created</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the creation has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the creation.
 *   </dl>
 */
  virtual HRESULT CreateMfPointOnEdge(const CATIMmiUseMfBRep_var& iEdge, 
                                                    const double              iRatio, CATIMmiUsePointOnEdge_var& oPointOnEdge) = 0;

 /** 
 * Creates a point on edge BRep feature.
 * <br><b>Role</b>: this method creates a point on edge BRep feature.
 * @param iEdge [in]
 * The edge feature on which the point on edge will be created.
 * @param iPoint [in]
 * The point.
 * @param oPointOnEdge [out]
 * The point on edge feature created</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the creation has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the creation.
 *   </dl>
 */ 
  virtual HRESULT CreateMfPointOnEdge(const CATIMmiUseMfBRep_var &iEdge, const CATMathPoint &iPoint, CATIMmiUsePointOnEdge_var& oPointOnEdge) = 0;

/**
 * Creates an intersection edge BRep Feature.
 * @param iSelectingObject [in]
 * The possible values are: <ul>
 * <li> NULL_var for an empty intersection edge which afterwards must be set with appropriate attributes using @href CATIMfIntersectionEdge services.</li>
 * <li> a selecting object corresponding to an edge, and this kind of creation is then equivalent to @href CATIMmiUseFeaturize#Featurize.</li></ul>
 * @param imode [in]
 * Featurization mode, which should be, at least:<ul>
 * <li><tt>MfFeaturizeIntersection</tt></li>
 * <li><tt>MfFeaturizeC1Intersection</tt></li> 
 * <li><tt>MfFeaturizeC1Intersection|MfFeaturizeSubElement</tt></li></ul>
 * @param isupport [in]
 * The explicit support, e.g. the feature of resolution
 * @param oBRepFtr [out]
 * The @href CATIMfIntersectionEdge BRep Feature.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the creation has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the creation.
 *   </dl>
 */
  virtual HRESULT CreateMfIntersectionEdge(const CATIMmiUseBRepAccess_var& iSelectingObject,
                                                  const CATMfFeaturizeMode imode,
                                                  const CATBaseUnknown_var &isupport,
                                                  CATIMmiUseMfBRep_var& oBRepFtr) = 0;

};
CATDeclareHandler (CATIMmiBRepFactory, CATBaseUnknown); 
//------------------------------------------------------------------

#endif
