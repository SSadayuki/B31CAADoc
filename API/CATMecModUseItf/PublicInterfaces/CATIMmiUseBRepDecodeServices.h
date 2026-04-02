#ifndef CATIMmiUseBRepDecodeServices_H
#define CATIMmiUseBRepDecodeServices_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
#include "CATMfBRepDefs.h"
#include "CATListOfCATUnicodeString.h"

class CATIMmiUseBRepAccess_var;
class CATCell_var;
class CATBody_var;
class CATIMmiUseGeometricalElement_var;
class CATBaseUnknown;
class CATIMmiUseRSur_var;
class CATListValCATIMmiUseBRepAccess_var;
class CATListValCATIMmiMechanicalFeature_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseBRepDecodeServices;
#else
extern "C" const IID IID_CATIMmiUseBRepDecodeServices ;
#endif

extern ExportedByCATMecModUseItf char* Component_BRepDecodeServices ;

/**
 * Interface exposing services to create a selecting object from a topological cell.
 * Use CATMmiUseServicesFactory::CreateBRepDecodeServices to get the services component.
 * A <tt>CATIMmiUseBRepAccess</tt> is created from a <tt>CATCell</tt>.
 * <br>A <tt>CATIMmiUseRSur</tt> is created from a <tt>CATFace</tt>.
 * <br>A <tt>CATIMmiUseREdgeAccess</tt> is created from a <tt><CATEdge/tt>.
 * <br>A <tt>CATIMmiUseREdge</tt> is created from a <tt>CATEdge</tt>.
 * <br>A <tt>CATIMmiUseBorderREdge</tt> is created from a <tt>CATEdge</tt>.
 * <br>A <tt>CATIMmiUseWireREdge</tt> is created from a <tt>CATEdge</tt>.
 * <br>A <tt>CATIMmiUseFVertexAccess</tt> is created from a <tt>CATVertex</tt>.
 * <br>A <tt>CATIMmiUseFVertex</tt> is created from a <tt>CATVertex</tt>.
 * <br>A <tt>CATIMmiUseBorderFVertex</tt> is created from a <tt>CATVertex</tt>.
 * <br>A <tt>CATIMmiUseWireFVertex</tt> is created from a <tt>CATVertex</tt>.
 * <br>A selecting object is not persistent. 
 * Other methods create a persistent BRep feature from a selecting object.
 * @see CATIMmiUseFeaturize, CATIMmiUseBRepAccess, CATIMmiBRepFactory
 */

class ExportedByCATMecModUseItf CATIMmiUseBRepDecodeServices: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Returns the selecting object from a topological cell in a topological body.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iCell [in]
  * Topological cell belonging to <tt>iBody</tt>.
  * @param iBody [in]
  * Topological body.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeCellInBody(CATIMmiUseBRepAccess_var& oBRepAccess, const CATCell_var &iCell, const CATBody_var &iBody) = 0;

  /**
  * Returns the selecting object from a topological cell and the topological body of a specified feature.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iCell [in]
  * Topological cell.
  * @param iAssociatedFeat [in]
  * Feature owner of the topological body used to select the topological cell.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeCellInGeomElt(CATIMmiUseBRepAccess_var& oBRepAccess, const CATCell_var &iCell, const CATIMmiUseGeometricalElement_var &iAssociatedFeat) = 0;

  /**
  * Returns the selecting object from a topological cell and the topological body of a specified feature.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iCell [in]
  * Topological cell.
  * @param iAssociatedFeature [in]
  * Feature owner of the topological body used to select the topological cell.
  * @param iDecodeType [in]
  * <b>Legal values</b>:
  * <tt>MfDecodeAll</tt>, <tt>MfDecodeWire</tt>, <tt>MfDecodeShell</tt>, <tt>MfDecodeLump</tt>.
  * @param iSelectType [in]
  * <b>Legal values</b>:
  * <tt>MfForceSelect</tt>, <tt>MfSimpleSelect</tt>.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeCellInGeomElt(CATIMmiUseBRepAccess_var& oBRepAccess, const CATCell_var  &iCell, CATIMmiUseGeometricalElement_var &iAssociatedFeature,
						   const CATMfBRepDecodeType  iDecodeType, const CATMfBRepSelectType iSelectType = MfSimpleSelect) = 0;

  /**
  * Returns the axis selecting object from a topological cell and the topological body of a specified feature.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iCell [in]
  * Topological cell.
  * @param iAssociatedFeature [in]
  * Feature owner of the topological body used to select the topological cell.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeAxis(CATIMmiUseBRepAccess_var& oBRepAccess, const CATCell_var &iCell, const CATIMmiUseGeometricalElement_var &iAssociatedFeature) = 0;

  /**
  * Returns the axis selecting object from a surface selecting object.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iRsur [in]
  * Surface selecting object.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeAxis(CATIMmiUseBRepAccess_var& oBRepAccess, const CATIMmiUseRSur_var &iRsur) = 0;

  /**
  * Returns the extremity selecting object from a topological cell and the topological body of a specified feature.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iCell [in]
  * Topological cell.
  * @param iAssociatedFeature [in]
  * Feature owner of the topological body used to select the topological cell.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeExtremity(CATIMmiUseBRepAccess_var& oBRepAccess, const CATCell_var                &iCell,
							    const CATIMmiUseGeometricalElement_var &iAssociatedFeature) = 0;
  /**
  * Returns the extremity selecting object from a surface selecting object.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iRsur [in]
  * Surface selecting object.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeExtremity(CATIMmiUseBRepAccess_var& oBRepAccess, const CATIMmiUseRSur_var &iRsur) = 0;

  /**
  * Returns the planar subelement selecting object from a topological cell and the topological body of a specified feature.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iCell [in]
  * Topological cell.
  * @param iAssociatedFeature [in]
  * Feature owner of the topological body used to select the topological cell.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodePlanarSubElement(CATIMmiUseBRepAccess_var& oBRepAccess, const CATCell_var  &iCell,
							           const CATIMmiUseGeometricalElement_var &iAssociatedFeature) = 0;

  /**
  * Returns the planar subelement selecting object from a surface selecting object.
  * @param oBRepAccess [out]
  * The selecting object.
  * @param iRsur [in]
  * Surface selecting object.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodePlanarSubElement(CATIMmiUseBRepAccess_var& oBRepAccess, const CATIMmiUseRSur_var &iRsur) = 0;

  /**
  * Returns the selecting objects from information captured in the symbolic link of a connector.
  * @param oList [out]
  * The list of selecting objects.
  * @param iMfExtendeLabel [in]
  * Label.
  * @param iFeature [in]
  * Feature owner of the topological body used to select the topological cell.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeExtendedLabel(CATListValCATIMmiUseBRepAccess_var& oList, const CATUnicodeString &iMfExtendeLabel,
							     const CATIMmiUseGeometricalElement_var &iFeature) = 0;

  /**
  * Returns the adjacent selecting objects to the input list of selecting objects.
  * @param iBrepsAppuis [in]
  * Either a list of face selecting objects, 
  * or border edge selecting objects, 
  * or border vertex selecting objects, 
  * or wire edge selecting objects.
  * @param iDimension [in]
  * Topological dimension of the output list of selecting objects.
  * @param oBreps [out]
  * List of adjacent selecting objects to the input list of selecting objects.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeAdjacents(CATListValCATIMmiUseBRepAccess_var& iBrepsAppuis,
                                     int                           iDimension,
                                     CATListValCATIMmiUseBRepAccess_var& oBreps) = 0;

  /**
  * Returns the adjacent selecting objects to the input list of selecting objects.
  * @param iBrepsAppuis [in]
  * Either a list of face selecting objects, 
  * or border edge selecting objects, 
  * or border vertex selecting objects, 
  * or wire edge selecting objects.
  * @param iFeature [in]
  * Search is performed in the scope of <tt>iFeature</tt>.
  * @param iDimension [in]
  * Topological dimension of the output list of selecting objects.
  * @param oBreps [out]
  * List of adjacent selecting objects to the input list of selecting objects.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeAdjacents(CATListValCATIMmiUseBRepAccess_var&     iBrepsAppuis ,
                                     const CATIMmiUseGeometricalElement_var& iFeature,
                                     int                               iDimension,
                                     CATListValCATIMmiUseBRepAccess_var&     oBreps) = 0;
  /**
  * Returns the selecting objects from symbolic specifications.
  * For example, the selecting object associated with the lateral face of Pad.3 extruded from Line.7,
  * on the solid after Fillet.7 is created with:
  * <br><tt>iPrints[1]=Pad.3</tt>, 
  * <br><tt>iKeys[1]=MfKeyExtrudedFrom</tt>,
  * <br><tt>iProfilElements[1]=Line.7</tt>, and
  * <br><tt>iAssociatedFeature=Fillet.7</tt>.
  * <br>Another example, the selecting object associated with the edge shared by 
  * the lateral face of Pad.3 extruded from Line.7, 
  * and by the top face of Pad.6 is created with:
  * <br><tt>iPrints[1]=Pad.3</tt>, <tt>iPrints[2]=Pad.6</tt>,
  * <br><tt>iKeys[1]=MfKeyExtrudedFrom</tt>, <tt>iKeys[2]=MfKeyTop</tt>,
  * <br><tt>iProfilElements[1]=Line.7</tt>, <br><tt>iProfilElements[2]=NULL_var</tt> and
  * <br><tt>iAssociatedFeature=Fillet.7</tt>.
  * The selecting object associated with a vertex is specified with all its adjacent faces.
  * @param oList [out]
  * The list of selecting objects.
  * @param iPrints [in]
  * List of shape features.
  * @param iKeys [in]
  * List of key words
  * <br><b>Legal values</b>:
  * <tt>MfKeyTop</tt>, 
  * <tt>MfKeyBottom</tt>,
  * <tt>MfKeyExtrudedFrom</tt>,
  * <tt>MfKeyStart</tt>,
  * <tt>MfKeyEnd</tt>.
  * @param iProfilElements [in]
  * List of sketch elements.
  * @param iAssociatedFeature
  * Resolution is performed in the scope of <tt>iAssociatedFeature</tt>.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT DecodeSymbolic(CATListValCATIMmiUseBRepAccess_var& oList, CATListValCATIMmiMechanicalFeature_var&     iPrints,
							     CATListOfCATUnicodeString&        iKeys,
							     CATListValCATIMmiMechanicalFeature_var&     iProfilElements,
							     const CATIMmiUseGeometricalElement_var& iAssociatedFeature) = 0;
};
CATDeclareHandler(CATIMmiUseBRepDecodeServices,CATBaseUnknown);


//------------------------------------------------------------------

#endif
