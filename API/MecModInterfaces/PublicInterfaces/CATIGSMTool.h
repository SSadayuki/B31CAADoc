#ifndef CATIGSMTool_h
#define CATIGSMTool_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"


class CATListValCATISpecObject_var;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIGSMTool;
#else
extern "C" const IID IID_CATIGSMTool;
#endif


/**
 * Interface to manage a GSMTool feature.
 * <b>Role</b>: This interface is specific for a <b>GSMTool</b> feature. 
 * A GSMTool feature is a mechanical feature which mainly aggregates surfacic features. 
 * The surfacic features reference 0D, 1D, or 2D geometry. So, the GSMTool is a body sometimes 
 * called surfacic body. There are two kinds of <tt>GSMTool</tt> feature:
 * <ul>
 * <li>Ordered Geometrical Set, which implements @href CATIMmiOrderedGeometricalSet </li>
 * <li>Geometrical Set, which implements @href CATIMmiNonOrderedGeometricalSet </li>
 * </ul>
 * The @href #GetType method enables you to difference them. Refer to the CAA 
 * V5 encyclopedia (Mechanical Modeler & Sketcher domain) for more details on the subject.
 * <p>Each geometrical feature inside the <tt>GSMTool</tt> have 
 * the same "weight" as the solid body itself ( @href CATIMechanicalTool ). In other words, it 
 * has its own topological result and it is not automatically operated with a feature of the 
 * same type.</p> 
 * <p>The @href CATIBodyRequest interface enables you to retrieve all the geometrical features 
 * which are included into the surfacic body.</p>
 * <p>The @href CATIMechanicalRootFactory enables you to create a <tt>GSMTool</tt> and the 
 * @href CATIPartRequest interface enables you to retrieve them.</p>
 * 
 */
class ExportedByMecModItfCPP CATIGSMTool : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

/** 
 * @nodoc
 * Retrieves leaf features of the current surfacic body. 
 * <br><b>Role:</b>A leaf feature is a feature without geometrical children. This method is 
 * equivalent to:
 * <ul>
 * <li>Retrieve all the direct childrens of the body with <tt>CATI3DGeometricalElement</tt>
 * as argument for the @href CATIDescendants#GetDirectChildren method</li>
 * <li>For each children, use the @href CATIStructureAnalyse#AnalyseDirectParents method
 * with <tt>CATISpecObject</tt> as first argument</li>
 * </ul>
 * @param oListOfLeafFeatures
 * The list of leaf features.
 */ 
  virtual HRESULT GetLeafFeatures(CATListValCATISpecObject_var &oListOfLeafFeatures) const =0 ;

/** 
 * @nodoc
 * Retrieves root features of the current surfacic body.
 * <br><b>Role:</b>A root feature is a feature without geometrical parent. This method is 
 * equivalent to:
 * <ul>
 * <li>Retrieve all the direct childrens of the body with <tt>CATI3DGeometricalElement</tt>
 * as argument for the @href CATIDescendants#GetDirectChildren method</li>
 * <li>For each children, use the @href CATIStructureAnalyse#AnalyseDirectChildren method 
 * with <tt>CATISpecObject</tt> as first argument</li>
 * </ul>
 * @param oListOfRootFeatures
 * The list of root features.
 */ 
  virtual HRESULT GetRootFeatures(CATListValCATISpecObject_var &oListOfRootFeatures) const =0 ; 

/** 
 * Sets the GSMTool in private mode.
 * <br><b>Role:</b>
 * If a surfacic set is private, user cannot aggregate objects inside it and cannot reorder it.
 * A private set may become in work object but not its internal elements.
 * All manipulations inside this set should be done by code.
 * Use this capability if you want to create your own surfacic set.
 * @param iMode
 *    The private mode. The <b>legal values</b> are:
 * <ul>
 * <li>1 The set is private and Delete or Cut are not allowed for elements inside it.</li>
 * <li>2 The set is private and Delete or Cut are allowed for elements inside it.</li>
 * <li>0 The set is public. </li>
 * </ul>
 */ 
  virtual HRESULT SetPrivate(int iMode=1) =0 ; 

/** 
 * Retrieves the private mode of the surfacic body.
 * @param oMode
 *    The private mode. The value is only available if the body is private.  
 * <ul>
 * <li>1 Private</li>
 * <li>2 Private but user can remove an object inside</li>
 * </ul>
 * @return 
 * The <b>legal values</b> are:
 * <ul>
 * <li>S_OK The surfacic body is private </li>
 * <li>E_FAIL otherwise </li>
 * </ul>
 */ 
  virtual HRESULT IsPrivate(int& oMode) =0 ; 

/** 
 * Sets the type of the surfacic body.
 *
 * @param iType
 *    The type of the surfacic body
 *    <br><b>Legal Values:</b>
 * <ul>
 * <li>0: Geometrical Set </li>
 * <li>1: Ordered Geometrical Set </li>
 * </ul>
 *
 * @return 
 * The <b>legal values</b> are:
 * <ul>
 * <li>S_OK The type of the surfacic body has been changed successfully </li>
 * <li>E_FAIL The type of the surfacic body has not been changed since 
 *     it is forbidden by aggregation rules due to the body containt</li>
 * </ul>
 */ 
  virtual HRESULT SetType(int iType) =0 ; 

/** 
 * Retrieves the type of the surfacic body.
 * @param oType
 *    The type of the surfacic body
 *    <br><b>Legal Values:</b>
 * <ul>
 * <li>0: Geometrical Set </li>
 * <li>1: Ordered Geometrical Set </li>
 * </ul>
 */ 
  virtual HRESULT GetType(int& oType) =0 ; 


/** 
 * Automatical sort of components inside the surfacic body.
 * <br><b>Role:</b>
 * This service automatically sorts the surfacic body components respecting Parents/Children links.
 * @param iMode
 * Default mode (0), only direct children are sorted. if iMode equals to 1, all sub-surfacic bodies
 * are sorted too.
 * @return
 * It can return E_FAIL if there is a update cycle.
 */ 
  virtual HRESULT AutoSortComponents(int iMode=0) =0 ;
};

CATDeclareHandler(CATIGSMTool,CATBaseUnknown);

#endif
