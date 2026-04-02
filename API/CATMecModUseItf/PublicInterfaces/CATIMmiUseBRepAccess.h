#ifndef CATIMmiUseBRepAccess_H 
#define CATIMmiUseBRepAccess_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIAV5Level.h"
#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#include "CATMfBRepDefs.h"
#include "CATMmiContractDefs.h"
#include "CATBoolean.h"
#include "CATIMmiMechanicalFeature.h"

class CATListValCATIMmiUseBRepAccess_var;
class CATIMmiUseBRepAccess_var;
class CATBody_var;
class CATCell_var;
#if defined(CATIAV5R25) || defined(CATIAR417)
class CATTopology_var;
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseBRepAccess;
#else
extern "C" const IID IID_CATIMmiUseBRepAccess ;
#endif

//------------------------------------------------------------------

/**
* Interface to manage a selecting object.
* The selecting objects:
* <br> @ref CATIMmiUseRSur, @ref CATIMmiUseBorderREdge, @ref CATIMmiUseWireREdge and @ref CATIMmiUseBorderFVertex
* are directely named in the generic naming graph.
* <br>The selecting objects:
* @ref CATIMmiUseREdge @ref CATIMmiUseFVertex and @ref CATIMmiUseWireFVertex
* are identified by a list of objects in the generic naming graph.
* @see CATIMmiBRepFactory, CATIMmiUseFeaturize, CATIMmiUseTopoAccess, CATIMmiUseBRep.
*/
class ExportedByCATMecModUseItf CATIMmiUseBRepAccess: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Reads the selecting object type.
  * @param oType [out]
  * The type of the selecting object.
  * <b>Legal values</b>:
  * <tt>MfRSur</tt>,
  * <tt>MfREdge</tt>,
  * <tt>MfFVertex</tt>,
  * <tt>MfBorderREdge</tt>,
  * <tt>MfBorderFVertex</tt>,
  * <tt>MfWireREdge</tt>,
  * <tt>MfWireFVertex</tt>,
  * <tt>MfAxis</tt>,
  * <tt>MfExtremity</tt>,
  * <tt>MfPlanarSubElement</tt>,
  * <tt>MfUnknownElementType</tt>
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual  HRESULT GetBRepElementType(CATMfBRepAccessElementType& oType) const = 0 ;   

  /**
  * Compares two selecting objects.
  * <br><b>Role</b>: this method compares two selecting objects.
  * @param iBrep [in]
  * Selecting object to be compared.
  * @param oResult [out]
  * TRUE if the two selecting objects are same, FALSE else. 
  * @param iType [in]
  * allows the search to be different than what was selected at the selecting object creation</tt>.
  * <ul>
  *  <li>iType = CATMmrLimitationTypeDefault  
  *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
  * <li>iType = CATMmrFunctional 
  *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
  *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
  *</ul>
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT IsSameBRepLabel(const CATIMmiUseBRepAccess_var &iBrep,CATBoolean& oResult,
    CATMmrLimitationType iType = CATMmrDefaultLimitationType) const = 0; 

  /**
  * Reads the object validity status.
  * @param oResult [out]
  * TRUE if the selecting object is valid. 
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT IsBRepValid(CATBoolean& oResult) const = 0; 

  /**
  * Gets the initial feature of the selecting object.
  * <br><b>Role</b>: this method returns the youngest feature according to the history of the mechanical part, that generated the selecting object.
  * <br>If this feature is a <tt>ResultOUT</tt>, it is not displayed in the specification tree.
  * @param oFeat [out]
  * The initial feature of the selecting object.
  * @param iMaster [in]
  * TRUE : the feature returned is the master feature of the initial feature. 
  * FALSE : the feature returned is the initial feature itself. 
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT GetBRepInitialFeature(CATIMmiMechanicalFeature_var& oFeat, CATBoolean iMaster = 1) const = 0; 

#if defined(CATIAV5R27) || defined(CATIAR419)
  /**
  * Evolution of GetBRepInitialFeature, which gives a more correct result, especially for an edge
  */
  virtual HRESULT GetBRepBetterInitialFeature(CATIMmiMechanicalFeature_var& oFeat, CATBoolean iMaster = 1) const = 0; 
#endif

  /**
  * Gets the last feature of the selecting object.
  * <br><b>Role</b>: this method returns the feature that generated the selecting object.
  * This feature is the oldest according to the history of the mechanical part, and takes connexity into account.
  * <br>If this feature is a <tt>ResultOUT</tt>, it is not displayed in the specification tree.
  * @param oFeat [out]
  * The last feature of the selecting object.
  * @param iMaster [in]
  * TRUE : the feature returned is the master feature of the last feature. 
  * FALSE : the feature returned is the last feature itself. 
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT GetBRepLastFeature(CATIMmiMechanicalFeature_var& oFeat, CATBoolean iMaster = 1) const = 0;

  /**
  * Gets the selecting feature of the selecting object.
  * <br><b>Role</b>: this method returns the feature containing the selected object.
  * <br>If this feature is a <tt>ResultOUT</tt>, it is not displayed in the specification tree.
  * @param oFeat [out]
  * The selecting feature of the selecting object.
  * @param iMaster [in]
  * TRUE : the feature returned is the master feature of the selecting feature. 
  * FALSE : the feature returned is the selecting feature itself. 
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successful.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT GetBRepSelectingFeature(CATIMmiMechanicalFeature_var& oFeat, CATBoolean iMaster = 1) const = 0;

  /**
  * Returns the children selecting objects of the selecting object.
  * @param oList [out]
  * The <b>list</b> of <tt>CATIMmiUseBRepAccess</tt>.
  * @param iFeature [in]
  * Search is performed at the <tt>iFeature</tt> level; in the whole generic naming graph if <tt>iFeature</tt> is NULL.
  * @param iType [in]
  * <b>Legal values</b>:
  * <tt>MfModification</tt>, 
  * <tt>MfCovering</tt>, 
  * <tt>MfGeneration</tt> specifies the search strategy.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
  *   </dl>
  */
  virtual HRESULT UnGroup (CATListValCATIMmiUseBRepAccess_var& oList,
    const CATIMmiMechanicalFeature_var &iFeature = NULL_var,
    const CATMfNodeReportType iType = MfModification) const = 0;

  /**
  * Returns the grandparents of the selecting object.
  * @param oBReps [out]
  * The <b>list</b> of <tt>CATIMmiUseBRepAccess</tt>.
  * @param iFeature [in]
  * Search in performed in the <tt>iFeature</tt> body, in the whole generic naming graph if <tt>iFeature</tt> is NULL.
  * @param iType [in]
  * <b>Legal values</b>:
  * <tt>MfModification</tt>, 
  * <tt>MfCovering</tt>, 
  * <tt>MfGeneration</tt> specifies the search strategy.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT GetBRepAncestors(CATListValCATIMmiUseBRepAccess_var& oBReps,
    const CATIMmiMechanicalFeature_var &iFeature = NULL_var,
    const CATMfNodeReportType iType = MfModification) const = 0;


  /**
  * Creates the body created with cells associated with the selecting object.
  * @param iFeature [in]
  * Search is performed in the body associated with iFeature.
  * @param oBody [out]
  * The created body.
  * @param iType [in]
  * allows the search to be different than what was selected at the BRep Feature creation</tt>.
  * <ul>
  *  <li>iType = CATMmrLimitationTypeDefault  
  *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
  * <li>iType = CATMmrFunctional 
  *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
  *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
  *</ul>
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */   
  virtual HRESULT CreateBody(const CATIMmiMechanicalFeature_var &iFeature,CATBody_var& oBody, CATMmrLimitationType iType = CATMmrDefaultLimitationType)=0;

  /**
  * Returns the selected cell.
  * @param oCell [out]
  * The selected cell.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT GetBRepSelectingCell(CATCell_var& oCell) const =0;

#if defined(CATIAV5R25) || defined(CATIAR417)
  /**
  * Returns the selected topology.
  * @param oTopology [out]
  * The selected topology.
  * @return
  *   <dl>
  *   <dt><tt>S_OK</tt>          <dd>Successfull.
  *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
  *   </dl>
  */
  virtual HRESULT GetBRepSelectingTopology(CATTopology_var& oTopology) const =0;
#endif

};

CATDeclareHandler(CATIMmiUseBRepAccess,CATBaseUnknown);

//------------------------------------------------------------------

#endif
