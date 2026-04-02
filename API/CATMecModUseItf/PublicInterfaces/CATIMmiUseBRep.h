#ifndef CATIMmiUseBRep_H 
#define CATIMmiUseBRep_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#include "CATMfBRepDefs.h"
#include "CATMmiContractDefs.h"
#include "CATBoolean.h"
#include "CATIMmiMechanicalFeature.h"

class CATListValCATIMmiUseBRepAccess_var;
class CATListValCATIMmiMechanicalFeature_var;
class CATIMmiUseBRepAccess_var;
class CATBody_var;
class CATIMmiUseBRep_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseBRep;
#else
extern "C" const IID IID_CATIMmiUseBRep ;
#endif

//------------------------------------------------------------------

/**
* Interface used to get information on BRep features or selecting objects.
* @href CATIMmiUseBRepAccess, CATIMmiUseMfBRep, CATIMmiUseTopoAccess.
*/
class ExportedByCATMecModUseItf CATIMmiUseBRep: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Returns Limitation type.
 * <br><b>Role</b>: this method returns the limitation type of the BRep.
 * @param oLimitationType [out]
 * The limitation type.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetBRepLimitationType(CATMmrLimitationType& oLimitationType) const = 0;

 /**
 * Compares two BReps.
 * <br><b>Role</b>: this method compares two BReps.
 * @param iBrep [in]
 * Brep to be compared. 
 * @param oResult [out]
 * TRUE if the two BReps are same, FALSE else.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT IsSameBRep(const CATIMmiUseBRep_var &iBrep, CATBoolean& oResult) const = 0; 

 /**
 * Gets the support feature of the BRep.
 * <br><b>Role</b>: this method gets the support feature of the BRep.
 * Support can be a shape feature of the specification tree or a result out of a shape feature.
 * @param oSupport [out]
 * The support feature of the BRep.
 * @param iMaster [in]
 * TRUE : the feature returned is the master feature of the feature support. 
 * FALSE : the feature returned is the feature support itself. 
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT  GetBRepSupport( CATIMmiMechanicalFeature_var& oSupport, CATBoolean iMaster = TRUE)const =0;


 /** 
 * Retrieves all the Features involved in the definition of the BRep.
 * <br><b>Role</b>: this method gets the lists of all the Features involved in the definition of the BRep.
 * <br>You can get different features, depending on the type of resolution asked <tt>iType</tt> and the type define at the creation of the BRep.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                             <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param oLFeats [out]
 * The list of Features involved in the definition of the BRep.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
 virtual HRESULT GetBrepNecessaryFeatures ( CATListValCATIMmiMechanicalFeature_var &oLFeats, CATMmrLimitationType iType = CATMmrDefaultLimitationType ) const =0;

 /**
 * Retrieves the selecting objects associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of selecting objects associated with the BRep.
 * <br>You can get different selecting objects, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * The <b>list</b> of <tt>CATIMmiUseBRepAccess</tt>.
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
 virtual HRESULT GetBreps ( CATListValCATIMmiUseBRepAccess_var& oList, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;

 /**
 * Retrieves the selecting objects associated with the BRep.
 * <br><b>Role</b>: this method gets the lists of selecting objects associated with the BRep.
 * <br>You can get different selecting objects, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type defined at the creation of the BRep.
 * @param oList [out]
 * a <b>list</b> of <tt>CATIMmiUseBRepAccess</tt>.
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
 virtual HRESULT GetBreps ( CATListValCATIMmiUseBRepAccess_var& oList, CATMmiDimension iDim, CATMmrLimitationType iType = CATMmrDefaultLimitationType, const CATIMmiMechanicalFeature_var &iFeat = NULL_var ) const =0;


 /**
 * Analyses if the BRep involves a specified feature.
 * <br><b>Role</b>: this method analyses if the selecting object involves a specified feature.
 * If the specified feature is deleted, the selecting object becomes invalid.
 * @param iFeat [in]
 * Design feature.
 * @param oResult [out]
 * TRUE if the specified feature is involved in the definition of the BRep.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
  virtual HRESULT IsImpactedBy( const CATIMmiMechanicalFeature_var &iFeat, CATBoolean& oResult,
                           CATMmrLimitationType iType = CATMmrDefaultLimitationType) const = 0;

/**
 * Tests if the the BRep can be solved.
 * <br><b>Role</b>: this method tests if the the BRep can be solved on the body of the <tt>ResultOUT</tt> of iFeature object.
 * @param iFeature [in]
 * Solving is performed in the body of the <tt>ResultOUT</tt> of <tt>iFeature</tt> object.
 * @param oResult [out]
 * TRUE if the BRep can be solved on the body of the <tt>ResultOUT</tt> of iFeature object.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep creation</tt>.
 * <ul>
 *  <li>iType = CATMmrDefaultLimitationType  
 *                             <dl><tt><dt>if CATMmrRelimited or CATMmrFunctional was selected at the creation it gives the same result.</dt></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                                <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 */
  virtual HRESULT IsBRepSolvable(const CATIMmiMechanicalFeature_var &iFeature,CATBoolean& oResult,CATMmrLimitationType iType = CATMmrDefaultLimitationType) const = 0;



  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIMmiUseBRep,CATBaseUnknown);

//------------------------------------------------------------------

#endif
