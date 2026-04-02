/* COPYRIGHT DASSAULT SYSTEMES 2004 */
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef CATMfBRepDecodeProtected_h
#define CATMfBRepDecodeProtected_h

#include "CATMechanicalModeler.h"
#include "CATMfBRepDefs.h"
#include "CATMfBRepInternalDefs.h"

#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

/*
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
class CATDomain_var;
class CATBody_var;
class CATIBRepAccess_var;
class CATIContainer_var;
class CATIGeometricalElement_var;
class CATBrpObject;
class CATBrpScope;
class CATBaseUnknown;
class CATNamingReference;
class CATIMfBRep_var;
class CATIMfRsur_var;
class CATIRSur_var;
class CATIBRepAccess;
class CATIRSur;
class CATCell;
class CATFace;
class CATIMfBRepFeature_var;
class CATIContainer;
class CATIPrtContainer;


// InterfaceCleaning2004 : 19 old nodoc method are now protected
// InterfaceCleaning2004 : si migration non faite, remettre en PublicRequirer ce .h avant la GA.

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 * Old method. Use GetBReps of CATIMfGeometryAccess.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &Empreinte, const CATUnicodeString   &key);

/**
 * @nodoc
 * Deprecated: use a CATBRepDecode method with different arguments.
 * Returns the selecting object from a topological cell and the topological body of a specified scope.
 * @param iCell
 * Topological cell.
 * @param iScope
 * Owner of the topological body used to select the topological cell.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATCell_var &iCell,
						   CATBrpScope       *iScope);

/**
 * @nodoc
 * Deprecated: use a CATBRepDecode method with different arguments.
 * Returns the selecting object from a topological cell and the topological body of a specified scope.
 * @param iCell
 * Topological cell.
 * @param iScope
 * Scope owner of the topological body used to select the topological cell.
 * @param iDecodeType
 * <b>Legal values</b>:
 * <tt>MfDecodeAll</tt>, <tt>MfDecodeWire</tt>, <tt>MfDecodeShell</tt>, <tt>MfDecodeLump</tt>.
 * @param iSelectType
 * <b>Legal values</b>:
 * <tt>MfForceSelect</tt>, <tt>MfSimpleSelect</tt>.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATCell_var         &iCell,
						   CATBrpScope               *iScope,
						   const CATMfBRepDecodeType iDecodeType,
               const CATMfBRepSelectType iSelectType = MfSimpleSelect);

/**
 * @nodoc
 * Deprecated: use a CATBRepDecode method with different arguments.
 * Internal method.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(CATBrpObject *node,CATBrpScope *scope);



/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(CATNamingReference               *MfNamingReference,
							     const CATIGeometricalElement_var &AssociatedFeat);

/**
 * @nodoc
 * Returns the selecting objects from journaling information.
 * @param iMfNamingReference
 * Journaling information.
 * @param iNamingContext
 * Naming context.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(CATNamingReference *iMfNamingReference,
                                                             const CATINamingContext_var &iNamingContext);


/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 * Old method. Use GetBReps of CATIMfGeometryAccess.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &ProfilElement);

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 * Old method. Use GetBReps of CATIMfGeometryAccess.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &Empreinte,
							     const CATUnicodeString           &key,
							     const CATIGeometricalElement_var &AssociatedFeat);

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &Empreinte,
							     const CATUnicodeString           &key,
							     const CATISpecObject_var         &ProfilElement,
							     const CATIGeometricalElement_var &AssociatedFeat);
/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &Empreinte,
							     const CATUnicodeString   &key1,
							     const CATISpecObject_var &ProfilElement1,
							     const CATUnicodeString   &key2,
							     const CATISpecObject_var &ProfilElement2);
/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &Empreinte1,
							     const CATUnicodeString           &key1,
							     const CATISpecObject_var         &ProfilElement1,
							     const CATISpecObject_var         &Empreinte2,
							     const CATUnicodeString           &key2,
							     const CATISpecObject_var         &ProfilElement2,
							     const CATIGeometricalElement_var &AssociatedFeat);
/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &Empreinte1,
							     const CATUnicodeString           &key1,
							     const CATISpecObject_var         &ProfilElement1,
							     const CATISpecObject_var         &Empreinte2,
							     const CATUnicodeString           &key2,
							     const CATISpecObject_var         &ProfilElement2,
							     const CATIGeometricalElement_var &AssociatedFeat);

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &feature,
							     const CATIBRepAccess_var &select);

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &feature,
							     const CATIBRepAccess_var &select,
							     CATUnicodeString         &key);
/**
 * @nodoc
 * Internal use. Get the shell face on the scope of the ResultOUT.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecodeContextual(const CATISpecObject_var &feature,
								       const CATIMfRsur_var     &MfRsur1,
								       const CATIMfRsur_var     &MfRsur2);

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATIRSur* CATBRepDecode(CATIContainer *BrepContainer,
                                          CATFace *face);
/**
 * @nodoc
 * Old method.
 */
ExportedByCATMechanicalModeler CATIBRepAccess* CATBRepDecodeInScope(CATIContainer *BrepContainer,
                                                       CATCell* cell,
                                                       CATBaseUnknown * AssociatedFeature);
/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATIContainer_var &BrepContainer,
                                                   const CATCell_var &Cell,
                                                   const CATIGeometricalElement_var &AssociatedFeat);

/**
 * @nodoc
 * Deprecated: use an other CATBRepDecode method.
 */
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &feature,
                                                             const CATIMfBRepFeature_var &MfBRep);


/**
 * @nodoc
 * Retrieve the selecting object from the cell of a feature on the target feature.
 * @param iTargetFeature
 * target feature 
 * @param iSourceFeature
 * feature that contains the cell from which the selecting objects are retrieved
 * @param iCell
 * cell from which the selecting objects are retrieved
 *<br>
 * if iCell is Null the query is launched from all the cells of the feature 
 * @param oBReps
 * List of selecting objects.
 * @return
 *  S_OK if no error occurs
 */
ExportedByCATMechanicalModeler HRESULT CATGetGeneratedBReps(const CATISpecObject_var &iTargetFeature,const CATISpecObject_var &iSourceFeature,const CATCell_var &iCell, CATLISTV(CATBaseUnknown_var) &oBReps);

//----------------------------------------------------------------------------------------------------------------

/*
 * nodoc
 * Old method.
 * InterfaceCleaning
CATIContainer_var CATBrepGetContainer(const CATBody_var &Body);
*/

/*
 * nodoc
 * Deprecated: use a CATBRepDecode method with different arguments.
 * Returns the selecting object from a topological cell and the topological body of a specified scope.
 * param iCell
 * Topological cell.
 * param iDomain
 * Topological domain.
 * param iScope
 * Scope owner of the topological body used to select the topological cell.
 * param iSelectType
 * <b>Legal values</b>:
 * <tt>MfForceSelect</tt>, <tt>MfSimpleSelect</tt>.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATCell_var&        iCell,
						   const CATDomain_var&      iDomain,
						   CATBrpScope*              iScope,
                                                   const CATMfBRepSelectType iSelectType = MfSimpleSelect);
*/

/*
* nodoc
* Deprecated: use a CATBRepDecode method with different arguments.
* Internal method.
* InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(CATBrpObject *node,CATBrpScope *scope,const CATCell_var &Cell ,const CATMfBRepAccessElementType type = MfUnknownElementType,const CATMfBRepSelectInitMode InitMode = MfInitMode_Default);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATUnicodeString &iMfExtendeLabel,
							     CATBrpScope            *iScope);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * Old method. Use GetBReps of CATIMfGeometryAccess.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &Empreinte,
							     const CATUnicodeString   &key);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * Old method. Use GetBReps of CATIMfGeometryAccess.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &ProfilElement,
							     const CATIGeometricalElement_var &AssociatedFeat);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &feature,
							     const CATIMfBRep_var     &MfBRep);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &feature,
							     const CATIMfBRep_var             &MfBRep,
							     const CATIGeometricalElement_var &AssociatedFeat);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var         &feature,
							     const CATIBRepAccess_var         &select,
							     const CATIGeometricalElement_var &AssociatedFeat);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &feature,
							     const CATIMfBRep_var     &MfBRep,
							     CATUnicodeString         &key);
*/

/* 
 * nodoc
 * Internal use.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecodeContextual(const CATISpecObject_var &feature,
								       const CATIRSur_var       &select1,
								       const CATIRSur_var       &select2);
 * nodoc
 * Internal use.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecodeContextual(const CATISpecObject_var         &feature,
								       const CATIMfRsur_var             &MfRsur1,
								       const CATIMfRsur_var             &MfRsur2,
								       const CATIGeometricalElement_var &AssociatedFeat);
 * nodoc
 * Internal use.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecodeContextual(const CATISpecObject_var         &feature,
								       const CATIRSur_var               &select1,
								       const CATIRSur_var               &select2,
								       const CATIGeometricalElement_var &AssociatedFeat);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess* CATBRepDecode(CATIContainer *BrepContainer,
                                                CATCell *cell);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecode(const CATIContainer_var &BrepContainer,
                                                   const CATCell_var &Cell,
                                                   CATBrpScope *Scope);
*/

/*
 * nodoc
 * Old method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeAxis(const CATIContainer_var &BrepContainer,
                                                       const CATCell_var &Cell,
                                                       const CATIGeometricalElement_var &AssociatedFeat);
*/

/*
 * nodoc
 * Old method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodeExtremity(const CATIContainer_var &BrepContainer,
                                                            const CATCell_var &Cell,
                                                            const CATIGeometricalElement_var &AssociatedFeat);
*/
/*
 * nodoc
 * Old method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATIBRepAccess_var CATBRepDecodePlanarSubElement(const CATIContainer_var &BrepContainer,
                                                                   const CATCell_var &Cell,
                                                                   const CATIGeometricalElement_var &AssociatedFeat);
*/

/*
 * nodoc
 * Deprecated: use an other CATBRepDecode method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecode(const CATISpecObject_var &feature,
                                                             const CATIMfBRepFeature_var &MfBRep,
                                                             const CATIGeometricalElement_var &AssociatedFeat);
*/
/* 
 * nodoc
 * Old method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecodeContextual(const CATISpecObject_var &feature,
                                                                       const CATIMfBRepFeature_var &MfRsur1,
                                                                       const CATIMfBRepFeature_var &MfRsur2);
 *
 * nodoc
 * Old method.
 * InterfaceCleaning
ExportedByCATMechanicalModeler CATLISTV(CATBaseUnknown_var) CATBRepDecodeContextual(const CATISpecObject_var &feature,
                                                                       const CATIMfBRepFeature_var &MfRsur1,
                                                                       const CATIMfBRepFeature_var &MfRsur2,
                                                                       const CATIGeometricalElement_var &AssociatedFeat);
*/

#endif
