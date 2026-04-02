#ifndef CATIMmiUseDatumFactory_h
#define CATIMmiUseDatumFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2005
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATCollec.h"
#include "CATMecModUseItf.h"

class CATIMmiMechanicalFeature;
class CATLISTP(CATCell);
class CATBody;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseDatumFactory;
#else
extern "C" const IID IID_CATIMmiUseDatumFactory;
#endif

/**
 * Interface to create datum features.
 * <b>Role</b>: A datum feature is a geometrical feature (@href CATIMmiUseGeometricalElement ) without
 * geometrical specification. It is created with a topological object (a <tt>CATBody</tt>)
 * which represents its result. 
 * <p>For a geometrical feature there is only one <tt>CATBody</tt> and 
 * a <tt>CATBody</tt> can only be associated with one geometrical feature. So do not use the same 
 * <tt>CATBody</tt> for two instances of datum.</p>
 * <p>This interface contains two methods which create the new
 * geometrical element into the current set ( @href CATIMmiUseSetFactory ). If the current set 
 * is not available, a new one can be created to insert the new feature.</p>
 * This interface is implemented by the specification container ("CATPrtCont") of the 3D Shape 
 * that you can retrieve with @href CATIPLMNavRepReference#RetrieveApplicativeContainer
 */
class ExportedByCATMecModUseItf CATIMmiUseDatumFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
/**
 * Creates a datum feature.
 * <br><b>Role:</b>This method creates a datum feature with an automatic naming for
 * the cells. 
 * @param iBody
 *  The <tt>CATBody</tt> to associate with the geometrical feature.
 * @param oDatumFeature
 * The new geometrical feature. Depending on the content of the <tt>CATBody</tt>, it can be:
 *  <ul>
 *   <li>a Point, a Line, a Circle, a Plane feature: The <tt>CATBody</tt> has only one domain</li>
 *   <li>a GSMZeroDim,GSMMonoDim,GSMBiDim, Solid: The <tt>CATBody</tt> has several 
 *  domains with the same dimension. Respectively 0,1, 2 and 3.</li>
 *   <li>a GeometricalElement3D feature, otherwise </li>
 *  </ul>
 */ 
  virtual HRESULT InstanciateDatum(CATBody* iBody,CATIMmiMechanicalFeature* &oDatumFeature) = 0;

/**
 * Creates a datum feature.
 * @param iBody
 *  The <tt>CATBody</tt> to associate with the geometrical feature.
 * @param iGNUserCells
 *  The list of followed cells (<tt>CATCell</tt>). A followed cell is
 *     <ul>
 *      <li>The faces of a solid,</li>
 *      <li>The boundary edges and the faces of a shell,</li>
 *      <li>The extremity vertices and the edges of a wire.</li>
 *     </ul>
 * @param iUserKeys
 *  The list of corresponding keys. (Only number keys are authorized). 
 * @param oDatumFeature
 * The new geometrical feature. Depending on the content of the <tt>CATBody</tt>, it can be:
 *  <ul>
 *   <li>a GSMZeroDim,GSMMonoDim,GSMBiDim, Solid: The <tt>CATBody</tt> has several 
 *  domains with the same dimension. Respectively 0,1, 2 and 3.</li>
 *   <li>a GeometricalElement3D feature, otherwise </li>
 *  </ul>
 */
  virtual HRESULT InstanciateDatum(CATBody* iBody,CATLISTP(CATCell)* iGNUserCells,CATListOfCATUnicodeString* iUserKeys,CATIMmiMechanicalFeature* &oDatumFeature) = 0;


};

CATDeclareHandler(CATIMmiUseDatumFactory, CATBaseUnknown);

#endif


