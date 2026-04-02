// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiUseREdge_H
#define CATIMmiUseREdge_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
#include "CATMfBRepDefs.h"
#include "CATIMmiMechanicalFeature.h"

class CATIMmiUseRSur_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseREdge;
#else
extern "C" const IID IID_CATIMmiUseREdge ;
#endif

/**
 * Interface to manage a selecting object of IREdge type.
 * <b>Role:</b> This interface allows to manage a selecting object ( @href CATIMmiUseBRepAccess )<br>
 * of IREdge type. A <tt>IREdge</tt> is a set of internal edges on a 2D or 3D topological object
 * ( @href CATBody ). It is an edge between two @href CATIMmiUseRSur .
 * When all the edges lying between the two surfaces are considered, the selecting object is similar to a FEdge
 * (Functional Edge). An IREdge (Internal Relimited Edge) is a connex part of a FEdge. At body's creation time, a FEdge
 * is equal to one IREdge. It can afterwards be splitted into several IREdges through topological relimitations.<br>
 * For selection facilities, only one kind of selecting element is available, since the FEdge can be obtained from 
 * each IREdge. The difference is made during Featurization ( @ref CATIMmiUseFeaturize ) according to application's needs.<br>
 * The faces a IREdge lies between can be retrieved by the @href #GetRSur method.
 */
class ExportedByCATMecModUseItf CATIMmiUseREdge: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Gets the adjacent surface selecting object associated with the edge selecting object.
 * @param i [in]
 * The ith surface selecting object is returned, i can be equal to 1 or 2.
 * @param oRsur [out]
 * The ith surface as a selecting object.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual  HRESULT GetRSur(int i, CATIMmiUseRSur_var& oRsur) const = 0;

 /**
 * Method used to evaluate the sharpness of an edge.
 * @param oSharp [out]
 * The sharpness of the edge.
 * @param iResolutionFeature [in]
 * Search is performed in the topological body associated with <tt>iResolutionFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT IsSharp(CATMfSharpnessType& oSharp, const CATIMmiMechanicalFeature_var &iResolutionFeature = NULL_var) const = 0;


 /**
 * Tests if the REdge is an intersection BRep.
 * @param oIntersection [out]
 * TRUE if intersection edge.
 * @param iMode
 * Mode of Featurization, it may change result for edges internal to some features such as Join.
 * (in this case, answer may be False if Join has more than 2 operands)
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT IsAIntersectionREdge(CATBoolean& oIntersection, const CATMfFeaturizeMode iMode = 0) const = 0; 
};
CATDeclareHandler(CATIMmiUseREdge,CATBaseUnknown);

//------------------------------------------------------------------

#endif
