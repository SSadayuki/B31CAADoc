#ifndef CATIMmiUseTopoAccess_H 
#define CATIMmiUseTopoAccess_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIAV5Level.h"
#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#include "CATMmiContractDefs.h"
#include "CATMfBRepDefs.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATListOfInt.h"

class CATBody_var;
class CATListPtrCATCell;
class CATListValCATIMmiMechanicalFeature_var;
class CATListPtrCATFace;
class CATListPtrCATGeometry;
#if defined(CATIAV5R25) || defined(CATIAR417)
class CATListPtrCATTopology;
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseTopoAccess;
#else
extern "C" const IID IID_CATIMmiUseTopoAccess ;
#endif


/**
* Interface to retrieve topological information on BRep objects.
* @href CATIMmiUseBRepAccess, CATIMmiUseMfBRep, CATIMmiUseBRep.
*/
class ExportedByCATMecModUseItf CATIMmiUseTopoAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Retrieves the type of geometry pointed.
 * <br><b>Role</b>: this method gets the type of geometry associated with the BRep.
 * <br>You get the dimension of the geometry <tt>oDim</tt> and the type of geometry position  <tt>oType</tt>.
 * @param oDim [out]
 * Principal type (dimension : vertex, edge, or face)</tt>. 
 * @param oType [out]
 * Secondary type. Is the element isolated (wire), border, or internal </tt>.
 * @return
 *   <code>S_OK or E_FAIL</code>.<br>
 */
 virtual HRESULT GetBrepFtrGeometryType ( CATMmiDimension &oDim, CATMmiDimensionType &oType ) const =0;

 /**
 * Retrieves the cells associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of cells associated with the BRep.
 * <br>You can get different cells, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATFace</tt>, <tt>CATEdge</tt> or <tt>CATVertex</tt>.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepCells ( CATListPtrCATCell& oList, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;

/**
 * Retrieves the cells associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of cells associated with the BRep.
 * <br>You can get different cells, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATFace</tt>, <tt>CATEdge</tt> or <tt>CATVertex</tt>.
 * @param iDim [in]
 * The selecting objects in oList will be of dimension <tt>iDim</tt>.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull. *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepCells ( CATListPtrCATCell& oList, CATMmiDimension iDim, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;

 /**
 * Retrieves the faces associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of faces associated with the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATFace</tt>.
 * @param oCardList [out]
 * See GetBrepFtrGeometryType.
 * If the dimension of the BRep is a CATMmiFace then <tt>oCardList[1]</tt> is the number of faces.
 * <br>If the dimension of the BRep is a CATMmiEdge and the dimension type is CATMmiInternal then <tt>oCardList[1]</tt> is the number of adjacent left faces and
 * <tt>oCardList[2]</tt> is the number of adjacent right faces.
 * 
 * <br>If the dimension of the BRep is a CATMmiVertex and the dimension type is CATMmiInternal then <tt>oCardList[i]</tt> is the number of faces 
 * adjacent to the vertex, faces that are trimmed pieces of the same initial face.
 *
 * <br>If the dimension of the BRep is a CATMmiEdge and the dimension type is CATMmiBorder then <tt>oCardList[1]</tt> is the number of faces 
 * adjacent to the edge. 
 * All these faces are located on the same side of the edge in case of the selecting object is a border edge.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
*   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepFaces ( CATListPtrCATFace& oList, CATListOfInt& oCardList, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;


/**
 * Retrieves the geometries associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of geometries associated with the BRep.
 * <br>You can get different geometries, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATGeometry</tt>.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepGeometries ( CATListPtrCATGeometry& oList, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;

/**
 * Retrieves the geometries associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of geometries associated with the BRep.
 * <br>You can get different geometries, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep feature.
 * @param oList [out]
 * a <b>list</b> of <tt>CATGeometry</tt>.
 * @param iDim [in]
 * The selecting objects in oList will be of dimension <tt>iDim</tt>.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepGeometries ( CATListPtrCATGeometry& oList, CATMmiDimension iDim, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;


/**
 * Retrieves the connectedness of the BRep.
 * <br><b>Role</b>:  Retrieves the connectedness of the BRep. The BRep is not connected when the underlying geometry is made of more than one piece.
 * In this case several BReps have the same label.
 * <br>The BRep is connected when the underlying geometry is made of exactly one piece.
 * @param oConnectedness [out]
 * The connectedness of the BRep.
 * @param iFeature [in]
 * Search is performed in the body associated with <tt>iFeature</tt>. 
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
  virtual HRESULT GetConnexity(CATMfConnexityType& oConnectedness,CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeature = NULL_var)= 0;

 /** 
 * Gets the body containing the cells.
 * <br><b>Role</b>: this method gets the body containing the cells.
 * @param oBody [out]
 * The <tt>CATBody</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetBodySupport(CATBody_var& oBody) const = 0;

#if defined(CATIAV5R25) || defined(CATIAR417)
/**
 * Retrieves the topologies associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of topologies associated with the BRep.
 * <br>You can get different topologies, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATDomain</tt>, <tt>CATVolume</tt>, <tt>CATFace</tt>, <tt>CATEdge</tt> or <tt>CATVertex</tt>.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepTopologies ( CATListPtrCATTopology& oList, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;

/**
 * Retrieves the topologies associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of topologies associated with the BRep.
 * <br>You can get different topologies, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATDomain</tt>, <tt>CATVolume</tt>, <tt>CATFace</tt>, <tt>CATEdge</tt> or <tt>CATVertex</tt>.
 * @param iDim [in]
 * The selecting objects in oList will be of dimension <tt>iDim</tt>.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull. *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepTopologies ( CATListPtrCATTopology& oList, CATMmiDimension iDim, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;
#endif
 
};

CATDeclareHandler(CATIMmiUseTopoAccess,CATBaseUnknown);


//------------------------------------------------------------------

#endif
