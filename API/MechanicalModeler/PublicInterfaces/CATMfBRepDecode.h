#ifndef CATMfBRepDecode_h
#define CATMfBRepDecode_h

// COPYRIGHT DASSAULT SYSTEMES 2007
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATMechanicalModeler.h"
#include "CATMfBRepDefs.h"

#include "CATMfBRepInternalDefs.h"

#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATIAV5Level.h"

#ifdef CATIAV5R22
#include "CATMfBRepDecodeProtected.h" // InterfaceCleaning
#endif

/**
 * Global methods to create a selecting object from a topological cell.
 * A <tt>CATIBRepAccess</tt> is created from a <tt>CATCell</tt>.
 * <br>A <tt>CATIRSur</tt> is created from a <tt>CATFace</tt>.
 * <br>A <tt>CATIREdgeAccess</tt> is created from a <tt><CATEdge/tt>.
 * <br>A <tt>CATIREdge</tt> is created from a <tt>CATEdge</tt>.
 * <br>A <tt>CATIBorderREdge</tt> is created from a <tt>CATEdge</tt>.
 * <br>A <tt>CATIWireREdge</tt> is created from a <tt>CATEdge</tt>.
 * <br>A <tt>CATIFVertexAccess</tt> is created from a <tt>CATVertex</tt>.
 * <br>A <tt>CATIFVertex</tt> is created from a <tt>CATVertex</tt>.
 * <br>A <tt>CATIBorderFVertex</tt> is created from a <tt>CATVertex</tt>.
 * <br>A <tt>CATIWireFVertex</tt> is created from a <tt>CATVertex</tt>.
 * <br>A selecting object is not persistent. 
 * Other methods create a persistent BRep feature from a selecting object.
 * @see CATIFeaturize, CATIBRepAccess, CATIMfBRepFactory
 */

class CATCell_var;
class CATBody_var;
class CATIBRepAccess_var;
class CATIGeometricalElement_var;
class CATBaseUnknown;
class CATIRSur_var;
//class CATIBRepAccess;

#ifdef CATIAV5R22
class CATDomain_var;
class CATIContainer_var;
#endif
//class CATBrpObject;
//class CATBrpScope;
//class CATNamingReference;
//class CATIMfBRep_var;
//class CATIMfRsur_var;
//class CATIRSur;
//class CATCell;
//class CATFace;
//class CATIMfBRepFeature_var;
//class CATIContainer;
//class CATIPrtContainer;


/**
 * Returns the selecting object from a topological cell in a topological body.
 * @param iCell
 * Topological cell belonging to <tt>iBody</tt>.
 * @param iBody
 * Topological body.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeCellInBody(const CATCell_var       &iCell,
						   const CATBody_var       &iBody);

/**
 * Returns the selecting object from a topological cell and the topological body of a specified feature.
 * @param iCell
 * Topological cell.
 * @param iAssociatedFeat
 * Feature owner of the topological body used to select the topological cell.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATCell_var                &iCell,
						   const CATIGeometricalElement_var &iAssociatedFeat);

/**
 * Returns the selecting object from a topological cell and the topological body of a specified feature.
 * @param iCell
 * Topological cell.
 * @param iAssociatedFeature
 * Feature owner of the topological body used to select the topological cell.
 * @param iDecodeType
 * <b>Legal values</b>:
 * <tt>MfDecodeAll</tt>, <tt>MfDecodeWire</tt>, <tt>MfDecodeShell</tt>, <tt>MfDecodeLump</tt>.
 * @param iSelectType
 * <b>Legal values</b>:
 * <tt>MfForceSelect</tt>, <tt>MfSimpleSelect</tt>.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATCell_var                &iCell,
						   const CATIGeometricalElement_var &iAssociatedFeature,
						   const CATMfBRepDecodeType        iDecodeType,
                                                   const CATMfBRepSelectType        iSelectType = MfSimpleSelect);

/**
 * Returns the axis selecting object from a topological cell and the topological body of a specified feature.
 * @param iCell
 * Topological cell.
 * @param iAssociatedFeature
 * Feature owner of the topological body used to select the topological cell.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeAxis(const CATCell_var                &iCell,
						       const CATIGeometricalElement_var &iAssociatedFeature);
/**
 * Returns the axis selecting object from a surface selecting object.
 * @param iRsur
 * Surface selecting object.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeAxis(const CATIRSur_var &iRsur);

/**
 * Returns the extremity selecting object from a topological cell and the topological body of a specified feature.
 * @param iCell
 * Topological cell.
 * @param iAssociatedFeature
 * Feature owner of the topological body used to select the topological cell.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeExtremity(const CATCell_var                &iCell,
							    const CATIGeometricalElement_var &iAssociatedFeature);
/**
 * Returns the extremity selecting object from a surface selecting object.
 * @param iRsur
 * Surface selecting object.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeExtremity(const CATIRSur_var &iRsur);

/**
 * Returns the planar subelement selecting object from a topological cell and the topological body of a specified feature.
 * @param iCell
 * Topological cell.
 * @param iAssociatedFeature
 * Feature owner of the topological body used to select the topological cell.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodePlanarSubElement(const CATCell_var  &iCell,
							           const CATIGeometricalElement_var &iAssociatedFeature);

/**
 * Returns the planar subelement selecting object from a surface selecting object.
 * @param iRsur
 * Surface selecting object.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodePlanarSubElement(const CATIRSur_var &iRsur);

/**
 * Returns the selecting objects from information captured in the symbolic link of a connector.
 * @param iMfExtendeLabel
 * Label.
 * @param iFeature
 * Feature owner of the topological body used to select the topological cell.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATUnicodeString &iMfExtendeLabel,
							     const CATIGeometricalElement_var &iFeature);

/**
 * Returns the adjacent selecting objects to the input list of selecting objects.
 * @param iBrepsAppuis
 * Either a list of face selecting objects, 
 * or border edge selecting objects, 
 * or border vertex selecting objects, 
 * or wire edge selecting objects.
 * @param iDimension
 * Topological dimension of the output list of selecting objects.
 * @param oBreps
 * List of adjacent selecting objects to the input list of selecting objects.
 */
ExportedByCATMechanicalModeler void CATBRepDecode(CATLISTV(CATBaseUnknown_var)& iBrepsAppuis,
                                     int                           iDimension,
                                     CATLISTV(CATBaseUnknown_var)& oBreps);

/**
 * Returns the adjacent selecting objects to the input list of selecting objects.
 * @param iBrepsAppuis
 * Either a list of face selecting objects, 
 * or border edge selecting objects, 
 * or border vertex selecting objects, 
 * or wire edge selecting objects.
 * @param iFeature
 * Search is performed in the scope of <tt>iFeature</tt>.
 * @param iDimension
 * Topological dimension of the output list of selecting objects.
 * @param oBreps
 * List of adjacent selecting objects to the input list of selecting objects.
 */
ExportedByCATMechanicalModeler void CATBRepDecode(CATLISTV(CATBaseUnknown_var)&     iBrepsAppuis ,
                                     const CATIGeometricalElement_var& iFeature,
                                     int                               iDimension,
                                     CATLISTV(CATBaseUnknown_var)&     oBreps);
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
 * @param iPrints
 * List of shape features.
 * @param iKeys
 * List of key words
 * <br><b>Legal values</b>:
 * <tt>MfKeyTop</tt>, 
 * <tt>MfKeyBottom</tt>,
 * <tt>MfKeyExtrudedFrom</tt>,
 * <tt>MfKeyStart</tt>,
 * <tt>MfKeyEnd</tt>.
 * @param iProfilElements
 * List of sketch elements.
 * @param iAssociatedFeature
 * Resolution is performed in the scope of <tt>iAssociatedFeature</tt>.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(CATLISTV(CATISpecObject_var)&     iPrints,
							     CATListOfCATUnicodeString&        iKeys,
							     CATLISTV(CATISpecObject_var)&     iProfilElements,
							     const CATIGeometricalElement_var& iAssociatedFeature);

#ifdef CATIAV5R22
/**
 * @nodoc
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATIContainer_var &iBrepContainer,
						   const CATCell_var       &iCell,				  		   const CATBody_var       &iBody);
/**
 * @nodoc
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATIContainer_var   &iBrepContainer,
						   const CATCell_var         &iCell,						   const CATBody_var         &iBody,
						   const CATMfBRepDecodeType iDecodeType,    const CATMfBRepSelectType iSelectType = MfSimpleSelect);
/**
* @nodoc
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATIContainer_var   &iBrepContainer,
						   const CATCell_var         &iCell,						   const CATDomain_var       &iDomain,
						   const CATBody_var         &iBody,         const CATMfBRepSelectType iSelectType = MfSimpleSelect);

/**
 * @nodoc
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATCell_var                &iCell,
						   const CATDomain_var             &iDomain, const CATIGeometricalElement_var &iAssociatedFeature,
                                                   const CATMfBRepSelectType        iSelectType = MfSimpleSelect);
#endif
#endif


