#ifndef CATICfgModification_h
#define CATICfgModification_h

//COPYRIGHT DASSAULT SYSTEMES 2000

/**
 *@CAA2Level L1
 *@CAA2Usage U3
 */

/**
 * Interface to manage the Effectivity expressions.
 * <b>Role</b>: This interface can be used to create,query or manage the  effectivity expressions across all domains.
 * Any instance of a class implementing CATIVpmFactoryManager
 * ( @href CATIVpmFactoryManager ) a DS component (like CATICfgManager) can be used to query
 * for the implementation of this interface. </p>
 * @see CATICfgManager.
*/


#include "CATIAV5Level.h"

#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "sequence_CORBAAny.h"
#include "CATUnicodeString.h" // Ne pas enlever
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATUnicodeString.h"

class CATListValCATICfgHistory_var;
class CATListValCATICfgValidatedEffectivity_var;
class CATListValCATICfgXEff_var;
class CATListValCATICfgModification_var;
class CATListValCATICfgORExpression_var;
class CATListValCATICfgNormalValue_var;
class CATICfgORExpression_var;
class CATIConfigurableObject_var;
class CATICfgModification_var;
class CATListValCATICfgBasicEffectivity_var;
class CATICfgXEff_var;
class CATICfgEffectivity_var;
class CATICfgGroupModif_var;
class CATILinkableObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgModification ;
#else
extern "C" const IID IID_CATICfgModification ;
#endif


class ExportedByGUIDVPMInterfaces CATICfgModification :public CATBaseUnknown {

     CATDeclareInterface;

public:


/**
 * This ModificationEffectivity supersedes an input List of ModificationEffectivities: to be used when
 * you cannot update the Effecivity of the ModificationEffectivities in iListMod.
 * <br><b>Postcondition:</b> All the Objects pointed in "+" or "-" by the ModificationEffectivities of the
 * given input List are now aggregated by this ModificationEffectivity.
 * @param iListMod
 *   The input List of ModificationEffectivities.
 */
     virtual HRESULT Supersede(const CATListValCATICfgModification_var &iListMod) = 0;

/**
 * Retrieve the List of ModificationEffectivities superseded by this ModificationEffectivity.
 * @param oListMod
 *   List of ModificationEffectivities superseded: the method does not clean oListMod, it allows
 *   you to reuse oListMod in multiple call to GetSuperseded.
 */
     virtual HRESULT GetSuperseded(CATListValCATICfgModification_var &oListMod) const = 0;

/** @nodoc */
     virtual HRESULT SetProposedEffectivity(const CATICfgORExpression_var &iORExp) = 0;

/** @nodoc */
     virtual HRESULT GetProposedEffectivity(CATICfgORExpression_var &oORExp) const = 0;        

/** @nodoc */
     virtual HRESULT Validated(int &oValidated) const = 0;

/** @nodoc */
     virtual HRESULT Validate(const CATICfgORExpression_var &iVal,
			      CATListValCATICfgValidatedEffectivity_var &oValidatedEffectivityList) = 0;

/** @nodoc */
     virtual HRESULT ValidatedInto(CATICfgORExpression_var &oList) const = 0;

/** @nodoc */
     enum ModState {Normal, Canceled, Superseded, Penetration, Hidden, NewVersionType};

/**
 * Return the State of the ModificationEffectivity.
 * @param oModState
 *   State of the ModificationEffectivity.
 *   <br><b>legal values:</b> Normal, Canceled, Superseded, Penetration.
 */
     virtual HRESULT GetModState(CATICfgModification::ModState &oModState) const = 0;

/** @nodoc */
     virtual HRESULT SetModState(const CATICfgModification::ModState iModState) = 0;

/** @nodoc */
     virtual HRESULT GetSign(int &oSign) const = 0;

/**
 * Return the Name of the ModificationEffectivity.
 * @param oName
 *   The ModificationEffectivity Name.
 */
     virtual HRESULT GetName(CATUnicodeString &oName) const = 0;

/**
 * Set an Effectivity (as an ORExpression) to this ModificationEffectivity.
 * @param iDomainName
 *   DomainName of the Effectivity.
 * @param iOrExp
 *   Effectivity to set.
 */
     virtual HRESULT SetX_Eff(const CATUnicodeString &iDomainName,const CATICfgORExpression_var &iOrExp) = 0;

/**
 * Remove an Effectivity, given its DomainName, from this ModificationEffectivity.
 * @param iDomainName
 *   DomainName of the Effectivity to remove.
 */
     virtual HRESULT RemoveX_Eff(const CATUnicodeString &iDomainName) = 0;

/**
 * Return the List of Effectivities (as ORExpressions) associated to this ModificationEffectivity.
 * @param oDomainList
 *   DomainName List of the Effectivities.
 * @param oOrExpList
 *   List of Effectivities.
 */
     virtual HRESULT GetX_EffList (CATListOfCATUnicodeString &oDomainList,
				   CATListValCATICfgORExpression_var &oOrExpList,int iComputeCommonCondition = 0) = 0;




/**
 * Return the Effectivity (as an ORExression) associated to this ModificationEffectivity, given its DomainName.
 * @param iDomainName
 *   Input DomainName of the Effectivity.
 * @param oOrExp
 *   Effectivity to return.
 */
     virtual HRESULT GetX_Eff (const CATUnicodeString &iDomainName, CATICfgORExpression_var &oOrExp) = 0;

/** @nodoc */
     virtual HRESULT SetX_Status (const CATUnicodeString &iDomainName,const CATUnicodeString &iStatus) = 0;

/** @nodoc */
     virtual HRESULT GetX_Status (const CATUnicodeString &iDomainName,CATUnicodeString &oStatus) = 0;

/**
 * Attach in "+" a given UUID-Object to this ModificationEffectivity.
 * @param iObjectUUID
 *   UUID of the Object.
 */
     virtual HRESULT AttachPlus(const SEQUENCE(octet) &iObjectUUID) = 0;

/**
 * Return the List of Objects attached in "+" to this ModificationEffectivity.
 * @param oAttached
 *   List of the Objects attached in "+".
 */
     virtual HRESULT GetAttachedObjectsPlus(SEQUENCE(CORBAAny)& oAttached) = 0; 

/**
 * Attach in "-" a given UUID-Object to this ModificationEffectivity.
 * @param iObjectUUID
 *   UUID of the Object.
 */
     virtual HRESULT AttachMinus(const SEQUENCE(octet) &iObjectUUID) = 0;

/**
 * Return the List of Objects attached in "-" to this ModificationEffectivity.
 * @param oAttached
 *   List of the Objects attached in "-".
 */
     virtual HRESULT GetAttachedObjectsMinus(SEQUENCE(CORBAAny)& oAttached) = 0;

/**
 * Make an Extension on a given UUID-Object for this ModificationEffectivity.
 * @param iObjectUUID
 *   UUID of the Object.
 */
     virtual HRESULT AttachExtension(const SEQUENCE(octet) &iObjectUUID) = 0;

/**
 * Return the List of Objects attached in "r" to this ModificationEffectivity.
 * @param oAttached
 *   List of the Objects attached in "r".
 */
     virtual HRESULT GetAttachedObjectsExtension(SEQUENCE(CORBAAny)& oAttached) = 0;

/** @nodoc */
     virtual HRESULT Attach(const SEQUENCE(octet) &iObjectUUID) = 0;

/**
 * Detach a given UUID-Object from this ModificationEffectivity: it is no more pointed out in "+" or in "-" by
 * the ModificationEffectivity.
 * @param iObjectUUID
 *   UUID of the Object to detach.
 */
     virtual HRESULT Detach(SEQUENCE(octet) &iObjectUUID) = 0;

/**
 * Return the List of all the Objects attached in "+" or in "-" to this ModificationEffectivity.
 * @param oAttached
 *   List of the attached Objects.
 */
     virtual HRESULT GetListOfAttachedObjects(SEQUENCE(CORBAAny)& oAttached) = 0;

/**
 * Return the ConfigurableObject owning this ModificationEffectivity.
 * @param oCfgableObject
 *   ConfigurableObject to return.
 */
     virtual HRESULT GetConfigurableObject(CATIConfigurableObject_var &oCfgableObject) = 0;

/**
 * @nodoc
 * Delete this ModificationEffectivity, and reevaluate the resulting Effectivity on each
 * pointed out Objects.
 */
     virtual HRESULT Delete(const int iTestOnly = 0) = 0;

/** @nodoc */
     virtual void Dump(const int iObj = 0) = 0;

/**
 * Duplicate this ModificationEffectivity: the copy is owned by an input ConfigurableObject.
 * @param iCfgAble
 *   The input ConfigurableObject owning the copied ModificationEffectivity.
 * @param oEff
 *   ModificationEffectivity to copy.
 */
     virtual HRESULT Duplicate(const CATIConfigurableObject_var &iCfgAble, CATICfgModification_var &oEff) = 0; 

/** @nodoc */
     virtual HRESULT GetIdentifier(SEQUENCE(octet) &oId) = 0; 

/** @nodoc */
     virtual HRESULT IsTrue(const CATListValCATICfgNormalValue_var & iList,
			    const CATUnicodeString & iDomainName) = 0;

/** @nodoc */
     virtual HRESULT AttachMoins(const SEQUENCE(octet) &iObjectUUID) = 0;

/** @nodoc */
     virtual HRESULT GetAttachedObjectsMoins(SEQUENCE(CORBAAny)& oAttached) = 0;

/**
 * @nodoc
 * Update the EffVals for a List of uids.
 * @param inUids
 *   All the uids the mod points to.
 */
     virtual HRESULT UpdateEffValForUid(const SEQUENCE(CORBAAny)& inUids) = 0;

/**
 * @nodoc
 * Update the EffVals after an attachPlus.
 * @param inUid
 *   All the uids the mod points to.
 */
     virtual HRESULT UpdateEffValForUidPlus(const SEQUENCE(octet)& inUid) = 0;

/**
 * @nodoc
 * Update the EffVals after an attachMinus.
 * @param inUid
 *   All the uids the mod points to.
 */
     virtual HRESULT UpdateEffValForUidMinus(const SEQUENCE(octet)& inUid) = 0;

/**
 * @nodoc
 * Update the EffVals after an attachExtension.
 * @param inUid
 *   All the uids the mod points to.
 */
     virtual HRESULT UpdateEffValForUidExtension(const SEQUENCE(octet)& inUid) = 0;

	 

/**
 * Check if a given UUID-Object is attached in "+" to this ModificationEffectivity.
 * <br><b>Legal values:</b> The method returns S_OK if the Object is attached in "+", S_FALSE else.
 * @param iUuid 
 *   UUID of the input Object.
 */
     virtual HRESULT IsAttachedPlus(const SEQUENCE(octet)& iUuid) = 0;

/**
 * Check if a given UUID-Object is attached in "-" to this ModificationEffectivity.
 * <br><b>Legal values:</b> The method returns S_OK if the Object is attached in "-", S_FALSE else.
 * @param iUuid 
 *   UUID of the input Object.
 */     
     virtual HRESULT IsAttachedMinus(const SEQUENCE(octet)& iUuid) = 0;

/** @nodoc */
     enum Operation {Add,Cut,Replace,Move,Extension,Unknown,SetApplicability,DeleteObject,DetachMod,NewVersion,AddForPropagate,CutForPropagate,ExtensionForPropagate, Reset};

/**
 * Use this ModificationEffectivity to execute an operation on UUID-Objects.
 * @param iObj1
 *   UUID-Object1.
 * @param iObj2
 *   UUID-Object2.
 * @param iOp
 *   Operation to execute.
 *   <br><b>Legal values:</b> Add or Cut iObj1, Move or Replace iObj1 by iObj2.
 * @param iCV
 *   CV to be set for secondary CV on history.
 */
     virtual HRESULT Modify(const CATICfgModification::Operation iOp,
			    const SEQUENCE(octet) &iObj1,
			    const SEQUENCE(octet) &iObj2 = NULL,const int& iCheckSessionEffectivity = 0) = 0;

/**
 * Use this ModificationEffectivity to execute an operation on UUID-Objects.
 * @param iObj1
 *   Object1.
 * @param iObj2
 *   Object2.
 * @param iOp
 *   Operation to execute.
 *   <br><b>Legal values:</b> Add or Cut iObj1, Move or Replace iObj1 by iObj2.
 * @param iCV
 *   CV to be set for secondary CV on history.
 */
    virtual HRESULT Modify(const CATICfgModification::Operation iOp,
                                     const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2,const int& iCheckSessionEffectivity = 0) = 0;

/** 
 * Return all Histories for this ModificationEffectivity.
 * @param oList
 *   List of Histories to return.
 */
     virtual HRESULT GetAllHistories(CATListValCATICfgHistory_var& oList,
				     const CATUnicodeString& iAttributeToSort = NULL) = 0;


//IR 421865 - Exposed GetGrooupMod for Volvo

     /**
      * Returns the Group Modification associated to the Modification.
      * @param oGroupMod
      * The Group Modificaion Effectivity which is common to this Modification
      * @return
      * <ul>
      *     <li> S_OK if the method execution was successful.</li>
      *     <li> E_FAIL if the method failedl.</li>
      *     <li> S_FALSE if there is no Group Mod associated to this Modification </li>
      * </ul>
      */

     virtual HRESULT GetGroupMod(CATICfgGroupModif_var &oGroupMod) = 0;

/**
 * Update effectivities of all objects where this modification is involved.
 */
     virtual HRESULT UpdateEffectivity() = 0;

/**
 * Set an Effectivity to this ModificationEffectivity for a given DomainName.
 *  @param iDomain
 *    The DomainName of the Effectivity to set.
 *  @param iEffectivities
 *    The Effectivity to set.
 */
     virtual HRESULT SetX_Effectivity(const CATUnicodeString& iDomain,
				      const CATICfgEffectivity_var& iEffectivities) = 0;

/**
 * Remove an Effectivity from this ModificationEffectivity for a given DomainName.
 *  @param iDomain
 *    The DomainName of the Effectivity to remove.
 */
     virtual HRESULT RemoveX_Effectivity(const CATUnicodeString& iDomain) = 0;

/** @nodoc
 * Return the Effectivity of given DomainName for this ModificationEffectivity.
 *  @param iDomain
 *    The DomainName of the Effectivity to retrieve.
 *  @param oXEff
 *    The Effectivity to retrieve.
 */
     virtual HRESULT GetX_Effectivity(const CATUnicodeString& iDomain, CATICfgXEff_var& oXEff,int iComputeCommonCondition = 0) = 0;

/** @nodoc
 * Return the List of Effectivities for this ModificationEffectivity.
 * @param oXeffList
 *   List of the Effectivities to retrieve.
 */
     virtual HRESULT GetX_EffectivityList(CATListValCATICfgXEff_var& oXeffList,int iComputeCommonCondition = 1) = 0;

/** @nodoc
 * Set a List of Effectivities for this ModificationEffectivity.
 * @param iXeffList
 *   List of the Effectivities to set.
 */
     virtual HRESULT SetX_EffectivityList(CATListValCATICfgXEff_var& iXeffList) =0 ;

/**
 * To find out if this modification points to an object
 * @param iObj
 *    Object to analyze
 * @param oPointed
 *    0 : do not point
 *    1 : points +
 *    2 : points -
 *    3 : points + and -
 */
     virtual HRESULT PointsTo(const CATILinkableObject_var &iObj, int &oPointed) const = 0 ;
     
    
/**
 * Detach a given Object from this ModificationEffectivity: it is no more pointed out in "+" or in "-" by
 * the ModificationEffectivity.
 * @param iObject
 *   The Object to detach.
 */
    virtual HRESULT DetachWithHSE(CATILinkableObject_var &iObject) = 0;


/** @nodoc */
	virtual HRESULT GetAsString( CATUnicodeString& oEffectivity , CATUnicodeString& oCommonCondition ) const = 0;


/**
 * Link this modification to another one to create a parent-child relationship.
 * @param iParent
 * 		The modification which will be the parent of this modification.
 */
	virtual HRESULT SetParent(const CATICfgModification_var &iParent) = 0;


/**
 * Return this modification's parent.
 * @param oParent
 * 		The parent of this modification.
 */
	virtual HRESULT GetParent(CATICfgModification_var &oParent) = 0;


/**
 * Break the link between this modification and its parent.
 */
	virtual HRESULT ResetParent() = 0;


/**
 * Set the name of this modification.
 * @param iName
 * 		The name to set to this modification.
 * @return HRESULT
 *           S_OK = succeeded
 *           E_FAIL = failed (given name may already exist)
 *
 */
	virtual HRESULT SetName(const CATUnicodeString &iName) = 0;


/**
 * Set visibility of this modification (which is invisibble by default).
 * @param iVisible
 * 		TRUE if visible, FALSE if not.
 */
	virtual HRESULT SetVisible(const CATBoolean iVisible) = 0;


/** 
 * Use  this  ModificationEffectivity  to  execute  an  operation  on  UUID-Objects.  
 * @param iOp
 *   Operation to execute.
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>Add, Cut, Move or Replace.</dt>
 *   </dl> 
 * @param iObj1
 *   <dl>
 *     <dt>UUID-Object : <b>Target</b> on which operation is performed.</dt>
 *   </dl>  
 * @param iObj2
 *   <dl>
 *     <dt>UUID-Object : Used in case of Move and Replace as a <b>source</b> object.</dt>
 *   </dl>  
 * @return
 *   An HRESULT value. 
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>succeeded.</dd>
 *     <dt>E_FAIL </dt>
 *     <dd>failed.</dd>
 *   </dl>
 */ 
	virtual HRESULT SolveOperations( CATICfgModification::Operation iOp,
	const SEQUENCE(octet)& iObj1,
	const SEQUENCE(octet)& iObj2 = NULL) = 0;



};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgModification, CATBaseUnknown);

#endif
