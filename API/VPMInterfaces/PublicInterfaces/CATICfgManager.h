#ifndef CATICfgManager_H
#define CATICfgManager_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#define suffixeActionSE "-actionSeEff"

//#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "GUIDVPMInterfaces.h"
#include "CATICfgValue.h"
#include "CATListOfCATICfgValue.h"
#include "CATListOfCATIConfigurableObject.h"
#include "CATListOfCATIConfigurable.h"
#include "CATListOfCATICfgModification.h"
#include "CATICfgModification.h"
#include "CATListOfCATICfgSpecCategory.h"
#include "CATListOfCATICfgSimpleSpecification.h"
#include "CATListOfCATICfgSpecInclusion.h"
#include "CATListOfCATICfgSpecExpression.h"
#include "CATListOfCATIConfigHandler.h"
#include "CATListOfCATICfgFilter.h"
#include "CATICfgModRestriction.h"
#include "CATListOfCATICfgModRestriction.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfCATICfgORExpression.h"
#include "CATICfgMileStone.h"
#include "CATICfgMileStoneValue.h"
#include "CATListOfCATICfgMileStoneValue.h"
#include "CATICfgProgram.h"
#include "CATICfgProgramLnk.h"
#include "CATListOfCATICfgEffVal.h"
#include "CATIVpmPredicate.h"
#include "CATListOfCATICfgHistory.h"
#include "CATListOfCATICfgComponent.h"
#include "CATListOfCATICfgProductType.h" 

class CATICfgVariabilitySpace_var;
class CATICfgModContainer_var;
class CATICfgSpecANDExpression_var;
class CATICfgSpecORExpression_var;
class CATICfgSignedSpec_var;
class CATICfgXEff_var;
class CATUnicodeString;
class CATTime;
class CATICfgEffVal_var;
class CATICfgSimpleSpecification_var;
class CATICfgSpecCategory_var;
class CATICfgSpecInclusion_var;
class CATICfgSpecExpression_var;
class CATIConfigurableObject_var;
class CATIConfigurable_var;
class CATICfgInterval_var;
class CATICfgNormalValue_var;
class CATICfgORExpression_var;
class CATICfgANDExpression_var;
class CATIVpmFolder_var;
class CATICfgSimpleSpecification_var;
class CATICfgSessionEffectivity_var;
class CATICfgGroupModif_var;
class CATICfgSpecUsage_var;
class CATICfgCategoryUsage_var;
class CATICfgSpecCategory_var;
class CATICfgBasicEffectivity_var;
class CATListValCATICfgBasicEffectivity_var;
class CATICfgValue_var;
class CATICfgModNode_var;
class CATICfgFilteringSession_var;
class CATICfgFilteringResult_var;
class CATIVpmFactoryObject_var;
class CATListValCATILinkableObject_var;
class CATICfgFilterableItem_var;
class CATICfgMatrix_var;
class CATListValCATICfgGroupModif_var;
//class CATListValCATICfgModification_var;
class CATListValCATICfgModContainer_var;
class CATListValCATICfgVariabilitySpace_var;
class CATCfgModification;       

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgManager ;
#else
extern "C" const IID IID_CATICfgManager ;
#endif

/** @nodoc
 * <b>TRANSLATED</b>: Translated string (domain name from NLS)<br>
 */
#define TRANSLATED   0

/** @nodoc 
 * <b>UNTRANSLATED</b>: Un-translated string (domain name in English)<br>
 */
#define UNTRANSLATED 1

/**
 * Class to manage most creations and queries of objects used in the context of product Configuration.
 * <b>Role</b>: A Configuration Manager is a generic object used as a factory for a number of
 * objects like Effectivites, Configurable Object, ANDExpression , Filter.....
 * It also serves as a base object supporting methods dedicated to queries.
 */
class ExportedByGUIDVPMInterfaces CATICfgManager: public CATBaseUnknown
{
     CATDeclareInterface;
     
public:

/**
 * Enumeration
 */  
     enum QueryOperator { IsEqual, IsLike };

/**
 * Enumeration
 */  
     enum FilterMode {Default, Filter150};

/** @nodoc
 * Operations enum represent various configuration's effecvity related operation's
 * <b>Added</b>: Add operation<br>
 * <b>Cut</b>: Cut operation<br>
 * <b>Replaced/b>:Replace operation ( completed )<br>
 * <b>Replacing/b>:Replace operation ( started )<br>
 * <b>Moved/b>:Move operation ( completed )<br>
 * <b>Moving/b>:Move operation ( started )<br>
 * <b>Extended/b>:Extend operation<br>
 * <b>Reset/b>:Reset operation
 */
     enum Operations {Added,Cut,Replaced,Replacing,Moved,Moving,Extended,Reset};
/** @nodoc
 *
 * This method does nothing at all.
 */  
     virtual HRESULT VerifyCommit() = 0;

/** @nodoc
 * Use CATIVpmLoginSession::Save instead, but be careful that applications & modelers should never call that method! otherwise this may result in attempting to save inconsistent data.
 *
 * Save The current work session. 
 * <b>Role</b>: To use when it's necessary to save objects in Database.
 */
     virtual HRESULT Commit() = 0;

/** @nodoc
 *
 * This method does nothing at all.
 */
     virtual HRESULT Rollback() = 0;
     
     
/**
 * Creates an empty  <b>BasicEffectivity</b>
 *  @param oEffectivity
 *   The Effectivity to create.
 */
     virtual HRESULT CreateBasicEffectivity(CATICfgBasicEffectivity_var &oEffectivity) = 0;

/** @nodoc
 * Creates a valued  <b>BasicEffectivity</b>
 * @param ValStart
 *   Start Value for Basic Effectivity.
 * @param ValStart
 *   End Value for Basic Effectivity.
 * @param iSpecExp
 *   SpecANDExpression for Basic Effectivity 
 * @param iStartMileStoneExp
 *  Start MileStone Expression for Basic Effecitivity.
 * @param iEndMileStoneExp
 *  End MileStone Expresssiob for Basic Effectivity.
 *  @param oEffectivity
 *   The Effectivity to create.
 */
     virtual HRESULT CreateBasicEffectivity(const CATCfgVal &ValStart, 
                        const CATCfgVal &ValEnd, 
                        const CATICfgSpecANDExpression_var &iSpecExp,
                        const CATUnicodeString &iStartMileStoneExp, 
                        const CATUnicodeString &iEndMileStoneExp, 
                        CATICfgBasicEffectivity_var &oEffectivity) = 0;

/**
 * Creates an empty <b>Effectivity</b>.
 *  @param oEffectivity
 *   The Effectivity to create.
 */
     virtual HRESULT CreateEffectivity(CATICfgEffectivity_var &oEffectivity) = 0;
    

/** 
 * Creates an <b>XEff</b>.
 *  @param iDomain
 *   Domain corresponding to XEff
 *  @param oXEff 
 *   The XEff to create.
 */
     virtual HRESULT CreateXEff(const CATUnicodeString& iDomain, CATICfgXEff_var& oXEff) = 0;

/** @nodoc
 *
 * Create a <b>SessionEffectivity</b> object attached to given Congigurable Object. 
 * @param inCfgableObject
 *   The Configurable Object to attach.
 * @param outSessionEffectivity
 *   The SessionEffectivity to Create.
 *
 */
     virtual HRESULT CreateSessionEffectivity(const CATIConfigurableObject_var& inCV,
                          CATICfgSessionEffectivity_var& outSessionEffectivity) = 0;
   
/** @nodoc
 *  Retrieve a <b>SessionEffectivity</b> object attached to a Configurable Object. 
 * @param  inCV
 *   The Configurable Object on wich SeesionEffectivity is attached. 
 * @param outSessionEffectivity
 *   The retrieved SessionEffectivity.
 **/
     virtual HRESULT GetSessionEffectivityByCV(const CATIConfigurableObject_var& inCV,
                           CATICfgSessionEffectivity_var& outSessionEffectivity) = 0;
   

/** @nodoc
 * Create a <b>EffVal</b> object. 
 * @param inUID
 *   The  UID of the EffVal's Object to Create.
 * @param inCfgableObject
 *   The Configurable object to attach to Effval Object.
 * @param outEffVal
 *   The EffVal to Create.
 */
     virtual HRESULT CreateEffVal(const SEQUENCE(octet)& inUID,
                  const CATIConfigurableObject_var& inCfgableObject,
                  CATICfgEffVal_var& outEffVal) = 0;
     
/** @nodoc
 * Query an <b>EffVal</b> by object (UUID).
 * @param inUID
 *    The UUID of the Object to inspect.
 * @param oList
 *    List Of Effval carried by this object.
 */
     virtual HRESULT QueryEffValByObject(const CORBAAny &iUuid, CATListOfCATICfgEffVal_var &oList) = 0;

/** @nodoc
 * Query an <b>EffVal</b> by Configurable Object.
 * @param CV
 *   The Configurable Object to inspect.
 * @param oList
 *   List Of Effval carried by this object.
 */
     virtual HRESULT QueryEffValByCV(const CATIConfigurableObject_var& CV, 
                     CATListOfCATICfgEffVal_var &oList) = 0;


/** @nodoc
 * Create a Mod Restriction.
 */
     virtual HRESULT CreateModRestriction(const CATUnicodeString & iName,
                      const CATListOfCATUnicodeString & iRestrictionList,
                      CATICfgModRestriction_var & oModRestriction) = 0;
/**
 * Create a new configurable object (Referenced as CV).
 * @param iObjectUuid
 *    UUID of the Object (Product Root Class, Manufacturing Plan. ...) to configure. 
 * @param iName
 *    Configurable Object's unique Name. 
 * @param oCfgable
 *    the created Configurable Object. 
 */   
     virtual HRESULT CreateConfigurableObject(SEQUENCE(octet) &iObjectUuid, const CATUnicodeString &iName, CATIConfigurableObject_var &oCfgable) = 0;
     
/**
 * Create a new configurable object (Referenced as CV).
 * @param iObj
 *    Object (Product Root Class, Manufacturing Plan. ...) to configure. 
 * @param iName
 *    Configurable Object's unique Name. 
 * @param oCfgable
 *    the created Configurable Object. 
 */   
     virtual HRESULT CreateConfigurableObject(const CATILinkableObject_var &iObj, const CATUnicodeString &iName, CATIConfigurableObject_var &oCfgable) = 0;
     
/**  
 * Create a new configurable (Referenced as CO).
 * @param iObj
 *    Object (Product Root Class, Manufacturing Plan. ...) to configure. 
 * @param iDescription
 *    Configurable's unique Name. 
 * @param oCfgable
 *    The created Configurable. 
 */   
     virtual HRESULT CreateConfigurable(const CATILinkableObject_var &iObj, const CATUnicodeString &iDescription, CATIConfigurable_var &oCfgable)=0;

/**  
 * Create a new configurable (Referenced as CO).
 * @param iObjectUuid
 *    UUID of the Object (Product Root Class, Manufacturing Plan. ...) to configure. 
 * @param iDescription
 *    Configurable's unique Name. 
 * @param oCfgable
 *    The created Configurable. 
 */   
     virtual HRESULT CreateConfigurable(SEQUENCE(octet) &iUuid, const CATUnicodeString &iDescription, CATIConfigurable_var &oCfgable)=0;

/**
 * Destroy Configurable, and all Configurable Object and Effectivities associated to it.
 */
     virtual HRESULT RemoveConfigurable(CATIConfigurable_var &oCfgable)=0;

/** @nodoc */
     virtual HRESULT QueryModRestrictionByName(const CATUnicodeString &iName, CATICfgModRestriction_var &oBsf) const = 0;

/** @nodoc */
     virtual HRESULT QueryAllModRestrictions(CATListOfCATICfgModRestriction_var & oBsf) const = 0;
    
/** 
 * Retrieve all effectivities  pointing to a Filterable Object.
 * @param iUUID
 *    Filterable object's Identifier
 * @param oList
 *    List of Effectivities retrieved.
 */
     virtual HRESULT QueryEffectivities(const SEQUENCE(octet) &iUUID, CATListOfCATICfgModification_var &oList) const = 0;

/** 
 * Retrieve all effectivities belonging to a Configurable Object and pointing to a filterable Object.
 * @param iUUID
 *  Filterable Object's Identifier.
 *  A filterable Object can be an Item Instance, a Manufacturing instance, an inter-process link ...
 * @paraam  iCghableObject
 *    Configurable Object to inspect.
 * @param oList
 *    List of Effectivities retrieved.
 */
     virtual HRESULT QueryEffectivitiesByCO(const SEQUENCE(octet) &iUUID,
                        const CATIConfigurableObject_var &iCfgableObject, 
                        CATListOfCATICfgModification_var &oList) const = 0;

/** 
 * Retrieve an Effectivity by its Identifier.
 * @param iId
 *    Effectivity (Modification) 's identifier.
 * @param oEff
 *    Retrieved Effectivity.
 */
     virtual HRESULT GetEffectivityByIdent(const SEQUENCE(octet) &iId, CATICfgModification_var &oEff) const = 0;
 

/** 
 * Retrieve all configurable objects
 * @param oList
 *   List of Retrieved Configurable Objects.
 */ 
     virtual HRESULT QueryAllConfigurableObject(CATListOfCATIConfigurableObject_var &oList) const = 0 ;

/** 
 * Retrieve Configurable Objects by name.
 * @param iOp
 *   "QueryOperator", referring to the type SQL order to be executed.
 * <br><b>Legal Values :<b>IsEqual, IsLike. 
 * @param iName
 *    Name of Configurable Object to search.
 * @param oList
 *   List of Retrieved Configurable Objects.
 */      
     virtual HRESULT QueryConfigurableObjectByName(CATICfgManager::QueryOperator iOp,
                           const CATUnicodeString &iName,
                           CATListOfCATIConfigurableObject_var &oList) const = 0 ;

/** 
 * Retrieve Configurable Objects carried by an object.
 * @param iObj
 *    Identifier of the object to search.
 * @param oList
 *   List of Retrieved Configurable Objects.
 */ 
     virtual HRESULT QueryConfigurableObjectByObject(const CATILinkableObject_var &iObj, CATListOfCATIConfigurableObject_var &oList) const = 0 ;

/** 
 * Retrieve Configurable Objects carried by an object. 
 * @param iObjectUID
 *    Identifier of the object to search.
 * @param oList
 *   List of Retrieved Configurable Objects.
 */ 
     virtual HRESULT QueryConfigurableObjectByObject(const SEQUENCE(octet) &iObjectUuid, CATListOfCATIConfigurableObject_var &oList) const = 0 ;

                                                     
/** 
 * Retrieve Configurable Object carried by an object, its name being known.
 * @param iObj
 *    Identifier of the object to search.
 * @param iName
 *    Name of Configurable Object to search.
 * @param oList
 *   List of retrieved Configurable Objects.
 */
     virtual HRESULT QueryConfigurableObject(const CATILinkableObject_var &iObj, const CATUnicodeString &iName, CATListOfCATIConfigurableObject_var &oList) const = 0;
/** 
 * Retrieve Configurable Object carried by an object, its name being known.
 * @param iObjectUID
 *    Identifier of the object to search.
 * @param iName
 *    Name of Configurable Object to search.
 * @param oList
 *   List of retrieved Configurable Objects.
 */
     virtual HRESULT QueryConfigurableObject(const SEQUENCE(octet) &iObjectUuid, const CATUnicodeString &iName, CATListOfCATIConfigurableObject_var &oList) const = 0;

/**
 * Create an Undefined interval.
 * @param oInterval
 *   Created Interval.  
 */ 
     virtual HRESULT CreateUndefInterval(CATICfgInterval_var &oInterval) const = 0 ;

/**
 * Create an Range interval.
 * @param iStartRange
 *   Start Date for the interval.
 * @param iEndRange
 *   End Date for the interval.
 * @param oInterval
 *   Created Interval.  
 */ 
     virtual HRESULT CreateRangeInterval(const int &iStartRange,
                     const int &EndRange,
                     CATICfgInterval_var &oInterval) const = 0 ;

/**
 * Create an infinite Date interval.
 * @param iBegDate
 *   Start Date for the interval.
 * @param oInterval
 *   Created Interval.  
 */ 
     virtual HRESULT CreateDateInterval(const CATTime &iBegDate,
                    CATICfgInterval_var &oInterval) const = 0 ;

/**
 * Create an Date interval.
 * @param iBegDate
 *   Start Date for the interval.
 * @param iEndDate
 *   End Date for the interval.
 * @param oInterval
 *   Created Interval.  
 */ 
     virtual HRESULT CreateDateInterval(const CATTime &iBegDate, const CATTime &iEndDate, 
                    CATICfgInterval_var &oInterval) const = 0 ;
     
/** @nodoc
 * Generic NormalValue constructor.
 * @param iDate
 *   Date interval
 * @param iRange
 *   Range interval
 * @param iCondition
 */   
     virtual HRESULT CreateNormalValue(const CATICfgInterval_var &iDate,
                       const CATICfgInterval_var &iRange, 
                       const CATUnicodeString &iCondition,
                       CATICfgNormalValue_var &oValue) const = 0 ;

/**
 * Create a normal value limited to a range, a date or a condition.
 * @param iInterval
 *   Interval. Can be Date or Range Interval.
 * @param oValue
 *   Created Normal Value
 */
     virtual HRESULT CreateNormalValue(const CATICfgInterval_var &iInterval,
                       CATICfgNormalValue_var &oValue) const = 0;
/**
 * Create a Range normal value .
 * @param iStartRange 
 *   Start Range.
 * @param iLastRange
 *   End Range.
 * @param oValue
 *   Created Normal Value.
 */
     virtual HRESULT CreateNormalValue(const int iStartRange,
                       const int iLastRange, CATICfgNormalValue_var &oValue) const = 0;

/**
 * Create a Date normal value .
 * @param iBegDate 
 *   Start Date.
 * @param iEndDate
 *   End Date.
 * @param oValue
 *   Created Normal Value.
 */
     virtual HRESULT CreateNormalValue(const CATTime &iBegDate,
                       const CATTime &iEndDate,
                       CATICfgNormalValue_var &oValue) const = 0;
/** @nodoc 
 */
     virtual HRESULT CreateNormalValue(const CATUnicodeString &iCondition, 
                       CATICfgNormalValue_var &oValue) const = 0;
/**
 *  Create a normal value limited to a simple specification.
 * @param oValue
 *   Created Normal Value.
 */
     virtual HRESULT CreateNormalValue(const CATICfgSimpleSpecification_var & iCfgSimpleSpec,
                       CATICfgNormalValue_var &oValue) const = 0;

/**
 * Create a normal Value from a modification.
 * @param oCfgMod
 *   Modification. 
 * @param oValue
 *   Created normal value.
 */
     virtual HRESULT CreateNormalValue(const CATICfgModification_var & iCfgMod, 
                       CATICfgNormalValue_var &oValue) const = 0;
     
/** @nodoc */   
     virtual HRESULT CreateCfgValue(const int iVal, CATICfgValue_var &oValue) const = 0;

/** @nodoc */   
     virtual HRESULT CreateCfgValue(const CATTime &iVal, CATICfgValue_var &oValue) const = 0;

/**
 * Create an ORExpression.
 * @param oValue
 *   Created ORExpression.     
 */  
     virtual HRESULT CreateORExpression(CATICfgORExpression_var &oValue) const = 0;

/**
 * Create an ANDExpression.
 * @param oValue
 *   Created ANDExpression.     
 */
     virtual HRESULT CreateANDExpression(CATICfgANDExpression_var &oValue) const = 0;
     
/**
 * Create Specification category.
 * @param iName
 *   Name of Specification Category to create.
 * @param iDescription
 *   Free string describing the SpecCategory.  
 * @param CfgSpecCategory
 *   Created SpecCategory.
 * @param iPtrURL
 *   Identifier of the created SpecCategory.
 */
     virtual HRESULT CreateSpecCategory( const CATUnicodeString &iName, 
                     const CATUnicodeString &iDescription,
                     CATICfgSpecCategory_var &oCfgSpecCategory,
                     CORBAAny *iPtrURL=0) const =0;
     
/**
 * Build the full name of a specification from for Category Name, and Spec name.
 * @param iCatName
 *   Category name.
 * @param iSpecName
 *   Specification Name.
 * @param oFullname
 *  Category's Full name. The fomat is "CategoryName.SpecName"
 */
     // Get the full name of a specification
     virtual HRESULT GetFullSpecName(const CATUnicodeString &iCatName,
                     const CATUnicodeString &iSpecName,
                     CATUnicodeString &oFullName) const = 0;
     
/** @nodoc
 * Query Specification Categories from known attibute.  
 * @param iAttrValue
 *    Contains the attribute's values.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 *    Possible Value for AttrName are :  ID, DESCRIPTION, UID, SPECEXCLU, MANDATORY,ALL.
 *    and correponding types of iAttrValue are : String, String, Sequence octet, none, none,none.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param oList
 *    Retrieved List of SpecCategories.
 */
     virtual HRESULT QuerySpecCategories( CORBAAny& iAttrValue ,
                      const CATUnicodeString &iAttrName, 
                      CATICfgManager::QueryOperator iOp,
                      CATListOfCATICfgSpecCategory_var &oList) const=0;

/**
 * Query Simple Specifications from known attibute.  
 * @param iAttrValue
 *    Contains the attribute's values.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 *    Possible Value for AttrName are :  ID, DESCRIPTION, UID, SPECEXCLU, MANDATORY,ALL.
 *    and correponding types of iAttrValue are : String, String, Sequence octet, none, none,none.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param olist
 *    Retrieved List of Simple Specifications.
 */
     virtual HRESULT QuerySimpleSpec( CORBAAny& iAttrValue ,
                      const CATUnicodeString &iAttrName, 
                      CATICfgManager::QueryOperator iOp,
                      CATListOfCATICfgSimpleSpecification_var &oList) const=0;

/**
 * Query Simple Specifications from known attibute on a given Specification Category.  
 * @param iAttrValue
 *    Contains the attribute's value.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 *    Possible Value for AttrName are :  ID, DESCRIPTION, UID, SPECEXCLU, MANDATORY,ALL.
 *    and correponding types of iAttrValue are : String, String, Sequence octet, none, none,none.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param ICfgSpecCategory
 *    Spec Category to search.
 * @param olist
 *    Retrieved List of Simple Specifications.
 */
     virtual HRESULT QuerySimpleSpecForCategory( CORBAAny&  iAttrValue ,
                         const CATUnicodeString &iAttrName, 
                         CATICfgManager::QueryOperator iOp,
                         CATICfgSpecCategory_var &iCfgSpecCategory,
                         CATListOfCATICfgSimpleSpecification_var &oList) const=0;
     
/**
 * Delete a Spec Category.
 * @param iSpecCat
 *  The Spec Category to Delete.
 */ 
     virtual HRESULT RemoveSpecCategory(CATICfgSpecCategory_var & iSpecCat) = 0;
     
/**  @nodoc
 * Create Spec Inclusion.
 * @param iName
 *  Spec Inclusion's Name.
 * @param iDescription
 *  Free String to describe Spec Inclusion. Max length = 250 characters.
 * @param oCfgSpecInclusion
 *  Created Spec Inclusion
 */
     virtual HRESULT CreateSpecInclusion( const CATUnicodeString &iName, 
                      const CATUnicodeString &iDescription, 
                      CATICfgSpecInclusion_var &oCfgSpecInclusion)=0;        

/**  @nodoc
 * Create Spec Inclusion.
 * @param iLateType
 *  Spec Inclusion's Name.
 * @param iName
 *  Spec Inclusion's Name.
 * @param iDescription
 *  Free String to describe Spec Inclusion. Max length = 250 characters.
 * @param oCfgSpecInclusion
 *  Created Spec Inclusion
 */
     virtual HRESULT CreateSpecInclusion(const CATUnicodeString &iLateType,
                      const CATUnicodeString &iName, 
                      const CATUnicodeString &iDescription, 
                      CATICfgSpecInclusion_var &oCfgSpecInclusion)=0;        


 // 6-27-03 IR 398332 added by TWL to enable config customization     
/**  @nodoc
 * Create Spec Inclusion.
 * @param iDomainName
 *  Spec Inclusion's Data domain name.
 * @param iLateType
 *  Spec Inclusion's iLateType.
 * @param iName
 *  Spec Inclusion's Name.
 * @param iDescription
 *  Free String to describe Spec Inclusion. Max length = 250 characters.
 * @param oCfgSpecInclusion
 *  Created Spec Inclusion
 */
  virtual HRESULT CreateSpecInclusion( const CATUnicodeString &iDomainName, 
             const CATUnicodeString &iLateType, 
             const CATUnicodeString &iName, 
             const CATUnicodeString &iDescription, 
             CATICfgSpecInclusion_var &oCfgSpecInclusion)=0;        

/**  @nodoc
 * Query Spec Inclusion from known attibute.  
 * @param iAttrValue
 *    Contains the attribute's values.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param olist
 *    Retrieved List of Spec Inclusion.
 */
     virtual HRESULT QuerySpecInclusion ( CORBAAny& iAttrValue ,
                      const CATUnicodeString &iAttrName, 
                      CATICfgManager::QueryOperator iOp,  
                      CATListOfCATICfgSpecInclusion_var &oList) const=0;
     
/** @nodoc
 * Create specification expression from ORExpression.
 * @param iName
 *  Specification Expression's Name.
 * @param iDescription 
 *  Free string to describe Spec Expression.
 * @param iOrExp
 *  InputORExpression
 * @param oCdfSpecExpression
 *  Created SpecExpression
 */
     virtual HRESULT CreateSpecExpression( const CATUnicodeString &iName, 
                       const CATUnicodeString &iDescription, 
                       CATICfgORExpression_var &iOrExp,
                       CATICfgSpecExpression_var &oCfgSpecExpression)=0;        

/** @nodoc
 * Create specification expression from ORExpression.
 * @param iLateType
 *  Specification Expression's Late Type.
 * @param iName
 *  Specification Expression's Name.
 * @param iDescription 
 *  Free string to describe Spec Expression.
 * @param iOrExp
 *  InputORExpression
 * @param oCdfSpecExpression
 *  Created SpecExpression
 */
     virtual HRESULT CreateSpecExpression(const CATUnicodeString &iLateType,
                       const CATUnicodeString &iName, 
                       const CATUnicodeString &iDescription, 
                       CATICfgORExpression_var &iOrExp,
                       CATICfgSpecExpression_var &oCfgSpecExpression)=0;


     // 6-27-03 IR 398332 added by TWL to enable config customization     
/** @nodoc
 * Create specification expression from ORExpression.
 * @param iDomainName
 *  Specification Expression's Data domain name.
 * @param iLateType
 *  Specification Expression's Late Type.
 * @param iName
 *  Specification Expression's Name.
 * @param iDescription 
 *  Free string to describe Spec Expression.
 * @param iOrExp
 *  InputORExpression
 * @param oCdfSpecExpression
 *  Created SpecExpression
 */
    virtual HRESULT CreateSpecExpression(const CATUnicodeString &iDomainName, 
             const CATUnicodeString &iLateType, 
             const CATUnicodeString &iName, 
             const CATUnicodeString &iDescription, 
             CATICfgORExpression_var &iOrExp, 
             CATICfgSpecExpression_var &oCfgSpecExpression)=0;

/** @nodoc
 * Query Spec Expression from known attibute.  
 * @param iAttrValue
 *    Contains the attribute's values.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param olist
 *    Retrieved List of Spec Expression.
 */
     virtual HRESULT QuerySpecExpression( CORBAAny& iAttrValue ,
                      const CATUnicodeString &iAttrName, 
                      CATICfgManager::QueryOperator iOp,
                      CATListOfCATICfgSpecExpression_var &oList) const=0;
     
/** @nodoc */
     virtual HRESULT Solve(const SEQUENCE(octet) &iUuid,
               CATListValCATICfgSimpleSpecification_var &iList,
               CATListValCATICfgSimpleSpecification_var &oList) =0;

/** @nodoc
 * Create a Configuration FilteringSession.
 * @param iDomainName
 *     Name of the Domain ( Engineering, Manufacturing...).
 * @param oFilteringSession
 *     Created FilteringSession.
 */
     virtual HRESULT CreateFilteringSession (const CATUnicodeString &iDomainName,
                         CATICfgFilteringSession_var &oFilteringSession) const = 0;

/** @nodoc
 * Create a Configuration FilteringResult.
 * @param iSize
 *     Size of the HashTable containing the result of the Filter.
 * @param oFilteringResult
 *     Created FilteringResult.
 */
     virtual HRESULT CreateFilteringResult (const int iSize,
                        CATICfgFilteringResult_var &oFilteringResult) const = 0;


/** @deprecated V5R14 CreateMultiLevelFilter
 * Create a Configuration Filter on a configurable object.
 * @param iCfgObj
 *    The Configurable object to define filter on.
 * @param iDomainName
 *     Name of the Domain ( Engineering, Manufacturing...).
 * @param oFilter
 *     Created Filter.
 */
    virtual HRESULT CreateFilter( const CATIConfigurableObject_var & iContext ,
                                  const CATUnicodeString& iDomain ,
                                  CATICfgFilter_var& oFilter ) const = 0;

/** @deprecated V5R14 CreateMultiLevelFilter
 * Create a Configuration Filter on a list of Configurable Objects.
 * @param iListCfgObj
 *    The List of Configurable objects to define filter on.
 * @param iDomainName
 *     Nom de Domaine ( Engineering, Manufacturing...).
 * @param oFilter
 *     Created Filter.
 */
    virtual HRESULT CreateFilter( const CATListValCATIConfigurableObject_var& iContextList ,
                                  const CATUnicodeString& iDomain ,
                                  CATICfgFilter_var &oFilter ) const = 0; 

/** @deprecated V5R14 CreateMultiLevelFilter
 * Create a Configuration Filter on a list of Configurable Objects.
 *
 * @param oFilter
 *     Created Filter.
 */
    virtual HRESULT CreateFilter( CATICfgFilter_var &oFilter ) const = 0; 

/**
 * Create a Configuration Filter usable to filter any object, regardless to their
 * associated Configuration Objects.
 *
 * @param iDomain
 *     Filtering domain name ( Engineering, Manufacturing...).
 * @param oFilter
 *     Created Filter.
 */
    virtual HRESULT CreateMultiLevelFilter( const CATUnicodeString& iDomain , CATICfgFilter_var& oFilter ) const = 0;

/**
 * Retrieve a Configuration Filter according to its Symbolic Link.
 *
 * @param iUuid
 *     The filter Symbolic Link
 * @param oFilter
 *     Retrieved Filter.
 *
 * @return: - S_OK: filter successfully retrieved
 *          - E_NOINTERFACE: no filter retrieved for the specified Symbolic Link
 *          - E_FAIL: an error occured
 *         
 */
    virtual HRESULT RetrieveFilter( const SEQUENCE(octet)& iUuid , CATICfgFilter_var& oFilter ) const = 0;

/**
 * Get every filters defined in the active session. 
 * @param oFilterList
 *   List of Filters present in memory. 
 */  
     virtual HRESULT GetListOfFilters(CATListValCATICfgFilter_var &oFilterList) const = 0;
     
/**
 * Query Config Handler.
 * @param iAttrValue
 *    Contains the attribute's value.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 *    Possible Value for AttrName are :  ID, DESCRIPTION, STATUS, OWNER,ALL.
 *    and correponding types of iAttrValue are: CATUnicodeString, CATUnicodeString, CATUnicodeString, Sequence octet,none.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param olist
 *    Retrieved List of Config handlers.
 */
     virtual HRESULT QueryConfigHandler( CORBAAny& iAttrValue , 
                     const CATUnicodeString &iAttrName, 
                     CATICfgManager::QueryOperator iOp,
                     CATListOfCATIConfigHandler_var &oList) const = 0;

/**
 * Query Config Handler(s) on a Configurable Object.
 * @param iAttrValue
 *    Contains the attribute's value.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 *    Possible Value for AttrName are :  ID, DESCRIPTION, STATUS, OWNER,ALL.
 *    and correponding types of iAttrValue are: CATUnicodeString, CATUnicodeString, CATUnicodeString, Sequence octet,none.
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param iCfgObj
 *    COnfigurable Object to inspect.    
 * @param olist
 *    Retrieved List of Config handlers.
 */
     virtual HRESULT QueryConfigHandlerForCO( CORBAAny& iAttrValue ,
                          const CATUnicodeString &iAttrName, 
                          CATICfgManager::QueryOperator iOp,
                          const CATIConfigurableObject_var &iCfgObj, 
                          CATListOfCATIConfigHandler_var &oList) const = 0;
/** 
 * Retrieve Config handler by its Unique Identifier.
 * @param iId
 *    Config Handler's UUID.
 * @param oConfHand
 *    Retrieved Config Handler.
 */
     virtual HRESULT GetConfigHandlerByIdent(const SEQUENCE(octet) &iId, 
                         CATIConfigHandler_var&  oConfHand) const=0;

/**
 * Query Config Handler(s) "Children" or "Brothers" of a given Config Handler.
 * @param iTheConfigHandler
 *   Input ConfigHandler.
 * @param iListName
 *   <br><b> Legal Values : <b> CHILDREN, BROTHER.
 * @param olist
 *    Retrieved List of Config handlers.
 */
     virtual HRESULT WhereConfigHandlerUsed(CATIConfigHandler_var & iTheConfigHandler, 
                        CATUnicodeString & iListName,
                        CATListOfCATIConfigHandler_var& oCfgHandlerList)  const = 0;
/**
 * Remove a Config Handler.
 */  
     virtual HRESULT RemoveConfigHandler(CATIConfigHandler_var & iConfigHandler) = 0;
     
/**
 *  Get error Message.
 *  @param oErrorNumber
 *     Error Number.
 *  @param oErrorMsg
 *     Error Message.
 */
     virtual void GetErrorMsg(int &oErrorNumber, CATUnicodeString &oErrorMsg) const = 0;

/** @nodoc */
     virtual void SetErrorNumber(const int iErrorNumber, const int push = 0) = 0;

/** @nodoc */
     virtual void AddErrorParam(const CATUnicodeString &iParam,const int push =0) = 0;
     
     
/** 
 * Retrieve Configurable by its Unique Identifier.
 * @param iId
 *    Configurable's UUID.
 * @param oObj
 *    Retrieved Configurable.
 */
     virtual HRESULT QueryConfigurableByObject(const SEQUENCE(octet) &iUuid, CATIConfigurable_var &oObj) =0;


/** 
 * Retrieve all Configurables.
 * @param oObj
 *    Retrieved List of Configurables.
 */
     virtual HRESULT QueryAllConfigurable(CATListOfCATIConfigurable_var & oConfigurableList)=0;

/** @nodoc 
     Returns the Configuration's current folder. */
     virtual CATIVpmFolder_var GetFolder() =0 ;
     
/** 
 *  Cancels a list of modifications.
 *  @param iListMod 
 *  List of Modifications to Cancel.
 *  Modifications  are not deleted but flagged 'Canceled' and therefore not taken into account when filtering.
 */
     virtual HRESULT Cancel(const CATListValCATICfgModification_var &iListMod) = 0;
        
/**
 * Retrieve all the canceled modifications. 
 *  @param ListMod 
 *  Retrieved List of canceled Modifications .
 *  GetCanceled DO NOT clean oListMod. It allows you to reuse oListMod thanks to multiple calls to GetCanceled.
 */
     virtual HRESULT GetCanceled(CATListValCATICfgModification_var &oListMod) const = 0;

/**
 *  Get BSF names.
 */
     virtual HRESULT GetBSFNames(CATListOfCATUnicodeString & oBSFNameList) =0;
/**
    * Get the list of all defined domains ( Engineering, Manufacturing...).
    * @param oDomainList
    *   List of defined domain names.
    * @param iValue
    * <br><b>Legal Values</b>: The legal values for this are as follows;
    * <ol>
    * <li> TRANSLATED    : Return translated string (domain name from NLS)
    * <li> UNTRANSLATED  : Return un-translated string (domain name in English)
    * </ol>
 */
     virtual HRESULT GetDomainList(CATListOfCATUnicodeString & oDomainList, int iMode = TRANSLATED) = 0;

/** @nodoc */    
     virtual HRESULT QueryModifsByObject(const SEQUENCE(octet) &iUuid,
                     const CATIConfigurableObject_var &iCfgableObject,
                     const int &iSign, 
                     CATListValCATICfgNormalValue_var &  iNVList,
                     CATUnicodeString DomainName,
                     CATUnicodeString Status,
                     CATListOfCATICfgModification_var & oModList)=0 ;
     
/**
 * Query MileStones with a given name.
 * @param inName
 *   Input Name.  
 * @param outMileStone
 *   Retrieved MileStone.
 */  
     virtual HRESULT QueryMileStoneByName(const CATUnicodeString& inName,
                      CATICfgMileStone_var& outMileStone) = 0;
     
/**
 * Query Program with a given name.
 * @param inName
 *   Input Name.  
 * @param outProgram
 *   Retrieved Program.
 */ 
     virtual HRESULT QueryProgramByName(const CATUnicodeString& inName,
                    CATICfgProgram_var& outProgram) = 0;

/**       
 *  Check on the server if at least one of provided Item Instances is under an action.
 *   <b> Role : <b> If it is the case, then do not permit user to Edit Applicability !
 *   If not, return the Effectivity which points to all the Item Instances ....
 *   ...or no Effectivity if at least two of the Item Instances don't have the same Effectivity.
 *   All these checks are made by the method AllowApplicability.
 *   This method takes a list of filterableObjects and returns one or two nodes.
 *   The first node returned is a status :
 *   0 indicates that All the filterable objects are sharing the same effectivity stored in the second node.
 *   1 indicates that Two of the filterable objects are not sharing the same effectivity.
 *   2 indicates that at least one of filterable objects is under an action.
 *   The status will be stored as a short in the level attribute of the first node.
 *  @param CO
 *     Configurable object to inspect.
 *  @param iIIUIDs
 *     List of Item Instance Unique Identifiers.
 *  @param oDomainsLists
 *     Lists of Domains 
 *  @param oORExpList
 *     List of ORExpression
 */  
     virtual HRESULT AllowApplicability(CATIConfigurableObject_var & CO,
                    const SEQUENCE(CORBAAny) & iIIUIDs,
                    CATListOfCATUnicodeString & oDomainsList,
                    CATListOfCATICfgORExpression_var & oORExpList,
                    short & oStatus) = 0;
/**
 * Create a Program with a given name.
 * @param iName 
 *   Input Name.
 * @param outProgram
 *   Created Program.
 */  
     virtual HRESULT CreateProgram(const CATUnicodeString &iName,
                   CATICfgProgram_var &outProgram) = 0;
         
/**
 * Query Normal values using a given MileStone.
 * @param inMileStoneName
 *   Input MileStone.  
 * @param oList
 *   List of Retrieved Normal Values.
 */  
     virtual HRESULT QueryNormalValuesByMileStoneName( const CATUnicodeString& inMileStoneName, 
                               CATListOfCATICfgNormalValue_var &oList) = 0;
         
/** @nodoc */    
     virtual HRESULT DisplayWhereNormalValueUsed(const CATICfgNormalValue_var& NV) = 0;
     
/**
 * Find all the modifications and Config Handlers using a Normal Value.
 *  <b> Role :<b> Useful for debug or error messages display. 
 *  @param iTheNV
 *    Input Normal Value.
 *  @param oModifList
 *    List of Modifications.
 *  @param oCfgHandlerList
 *    List of Config Handlers
 */
     virtual HRESULT WhereNormalValueUsed(const CATICfgNormalValue_var & iTheNV, 
                      CATListOfCATICfgModification_var &oModifList,
                      CATListOfCATIConfigHandler_var& oCfgHandlerList) =0; 
     
/** @nodoc
 * Create a Modifications' Group.
 * @param iGroupModifName
 *   Modifications' Group's Name.
 * @param oGroupMod
 *   Created Modification's Group. 
 */  
     virtual HRESULT CreateGroupModif(const CATUnicodeString & iGroupModifName,
                      CATICfgGroupModif_var &oGroupMod)=0 ;
     
/** @nodoc */
     virtual HRESULT CreateSpecUsage(const CATListOfCATICfgComponent_var& iPath,
                     const CATICfgSimpleSpecification_var& iSpec,
                     CATICfgSpecUsage_var& oSpecUsage) = 0;
/**
 * Create Interval from xml string.
 * @param iXmlString
 *   xml string. 
 * @param oInterval
 *   Created Interval.
 */  
     virtual HRESULT CreateInterval(const char * iXmlString, CATICfgInterval_var& oInterval) = 0;



/** @nodoc
 * Create Interval from CATICfgVal variable.
 * @param iStart
 *   Start value. 
 * @param iLast 
 *   End Value.
 * @param oInterval
 *   Created Interval.
 */  
     virtual HRESULT CreateInterval(const CATCfgVal &iStart, 
                    const CATCfgVal &iLast, 
                    CATICfgInterval_var &oInterval) const = 0 ;

/**
 * Create Interval from CATICfgValue variable.
 * @param iStart
 *   Start value. 
 * @param iLast 
 *   End Value.
 * @param oInterval
 *   Created Interval.
 */
     virtual HRESULT CreateInterval(const CATICfgValue_var &iStart, 
                    const CATICfgValue_var &iLast, 
                    CATICfgInterval_var &oInterval) const = 0;
     
// Create a CategoryUsage 
// iPath
// iCategory
// iVisibility 
//    enum CatUsageVisibility { Public, Private };
//    virtual HRESULT CreateCategoryUsage(const CATListOfCATICfgComponent_var& iPath,
//                                        const CATICfgSpecCategory_var &iCategory,
//                                        const CATICfgManager::CatUsageVisibility iVisibility,
//                                        CATICfgCategoryUsage_var &oCatUsage) = 0;

/** @nodoc
 * Query on components.
 *  @param oList
 *    The result of the query
 *  @param iName
 *    Optional name
 *  @param iPre 
 *    Predicate (isLike, isEqual)
 */
     virtual HRESULT QueryComponents(CATListValCATICfgComponent_var& oList,
                     const CATUnicodeString& iName = "",
                     const CATIVpmPredicate_var& iPred = NULL_var) = 0;

/** @nodoc */
     virtual HRESULT QueryComponentsByCatUsage(const CATICfgCategoryUsage_var &iCatUsage, 
                           CATListOfCATICfgComponent_var& oList ) = 0;

/**
 *
 * Query all <b>ModHistory</b> by Object  
 * @param iObj : The object related to the history
 * @param oList : The list given in output
 * @param optional iPred 
 * @param optional iAttributeToSort  
 *
 **/
 
     virtual HRESULT QueryModHistoryByObject(const SEQUENCE(octet)& iObj,
                         CATListOfCATICfgHistory_var& oList,
                         const CATIVpmPredicate_var& iPred = NULL_var,
                         const CATUnicodeString& iAttributeToSort = NULL) = 0;

/**
 * Retrieve the error messages pushed
 *  @param oErrMsg
 *    The error message
 **/
     virtual void PopInfo(CATUnicodeString &oErrMsg) = 0;

/**
 *
 * Query all <b>ModHistory</b>   
 *
 **/
     virtual HRESULT QueryAllModHistory(CATListOfCATICfgHistory_var& oList) = 0;
     
/** 
 * Query Effectivities knowing their name.
 * @param  Name
 *  Name of the effectivity to look for.
 * @param  allMods
 *    List of Modification (effectivities ) retrieved.
 */
     virtual HRESULT QueryEffectivitiesByName(const CATUnicodeString& Name,
                          CATListOfCATICfgModification_var& allMods) = 0;

/**
 * Create SpecANDExp  expression.
 * @param oSpecANDExp
 *   Created SpecANDExpression.
 */
     virtual HRESULT CreateSpecANDExp(CATICfgSpecANDExpression_var &oSpecANDExp) = 0;
     
/** @nodoc */ 
     virtual HRESULT CreateSpecORExp(CATICfgSpecORExpression_var &oSpecORExp) = 0;

/**
 * Create Signed specification.
 * @param oSignedSpec
 *   Created Signed spec.
 */
     virtual HRESULT CreateSignedSpec(CATICfgSignedSpec_var &oSignedSpec) = 0;

/** @nodoc */    
     virtual HRESULT QueryBasicEffByMileStoneName(const CATUnicodeString& inName, CATListValCATICfgBasicEffectivity_var &oBasicEffList) const = 0;
     
     
/** @nodoc
 * Sets the 150% Filter Mode on.
 */
     virtual HRESULT SetFilter150Mode() = 0;
     
/** @nodoc
 * Unsets the 150% Filter Mode and returns to default filter mode.
 */
     virtual HRESULT UnsetFilter150Mode() = 0;
     

/** @nodoc */
     virtual HRESULT QueryConfigurable(const SEQUENCE(octet) &iUuid, CATIConfigurable_var & oConfigurable) = 0;

/** @nodoc
 * Retrieves the current Filter Mode.
 *  @param oFilterMode
 *    The current Filter Mode
 */
     virtual HRESULT GetFilterMode(CATICfgManager::FilterMode & oFilterMode) = 0;

/** @nodoc */
     virtual HRESULT CreateModNode(const CATUnicodeString & iModName, 
                   const CATICfgModification_var & iMod, 
                   CATICfgModNode_var &oModNode) const = 0;
/** @nodoc */
     virtual HRESULT DereferenceFromOID(SEQUENCE(octet) &iOid, const CATString &iClassName, CATIVpmFactoryObject_var &oObj) const = 0;

/** @nodoc */
     virtual HRESULT QueryHSEByUser(const CATUnicodeString& iUserName, CATListOfCATICfgHistory_var& oHistories) = 0;

/** @nodoc */
     virtual HRESULT QueryEffValByListOfObject(SEQUENCE(CORBAAny)& iListOfObject, CATListOfCATICfgEffVal_var &oListOfEffVal) = 0;

/** @nodoc */
     virtual char* DisplayValueForUID(const SEQUENCE(octet) &iUUID) = 0;

/** @nodoc */
     virtual HRESULT DisplayValueForUID(const SEQUENCE(octet) &iUUID, CATUnicodeString &oXmlStr) = 0;

/** @nodoc */
     virtual HRESULT IsInSameConfig(const CATListValCATILinkableObject_var &iList1, const CATListValCATILinkableObject_var &iList2, CATListOfInt &oListIntersect) = 0;
 
/** @nodoc */
     virtual HRESULT QueryHSEByObject(const CATILinkableObject_var &iObj,  CATListOfCATICfgHistory_var& oHistories) const = 0;

/** 
 * Retrieve String Effectivity by its Unique CATILinkableObject.
 * @param iObj
 *    CATILinkableObject object to inspect.
 * @param oCVList
 *    Retrieved Lists of configurable objects.
 * @param oEffList
 *    Retrieved Lists of Effectivity.
 */
#if !defined(CATIAV5R16)
     virtual HRESULT GetStringEffectivity(CATILinkableObject_var &iObj, CATListOfCATUnicodeString &oCVList, CATListOfCATUnicodeString &oEffList) const = 0;
#endif

/** 
 * Retrieve String Effectivity by its Unique CATILinkableObject.
 * @param iObj
 *    CATILinkableObject object to inspect.
 * @param oCVList
 *    Retrieved Lists of configurable objects.
 * @param oEffList
 *    Retrieved Lists of Effectivity.
 * @param iDomain
 *    Name of the Domain ( Engineering, Manufacturing...).
 * @param iStatus
 *    Name of the State ( WIP, Approved ..).
 */
#if defined(CATIAV5R16)
     virtual HRESULT GetStringEffectivity(CATILinkableObject_var &iObj, CATListOfCATUnicodeString &oCVList, CATListOfCATUnicodeString &oEffList,
                                            const CATUnicodeString& iDomain = "", const CATUnicodeString& iStatus = "")  const = 0;
#endif

//------------------------------------------------------------------------------------------------------------
// Les 3 methodes suivantes sont utilisees pour mettre a jour les GroupMods
// impactees par une modif sur un MileStone (SetNV su MileStoneValue)
// A supprimer des que les GroupMods aggregeront les MileStones (Changement de
// structures de donnees prevu en R9)

/** @nodoc */
// Renvoie toutes les AndExps utilisant iNV
     virtual HRESULT QueryAndExpsByNV(CATListValCATICfgANDExpression_var &oLOAndExp, CATICfgNormalValue_var &iNV) = 0;

/** @nodoc */
// Renvoie toutes les OrExps utilisant iAndExp
     virtual HRESULT QueryOrExpsByAndExp(CATListValCATICfgORExpression_var &oLOOrExp, CATICfgANDExpression_var &iAndExp) = 0;

/** @nodoc */
// Renvoie tous les GroupMods utilisant iOrExp
     virtual HRESULT QueryGroupModsByOrExp(CATListValCATICfgGroupModif_var &oLOGroupMod, CATICfgORExpression_var &iOrExp) = 0;

/** @nodoc */
// Ramene toutes les Mods de ce nom trouvees en memoire
     virtual HRESULT QueryModifsByName(CATUnicodeString &iModName, CATListValCATICfgModification_var &oLOMods) = 0;

//------------------------------------------------------------------------------------------------------------
     /** 
      * Retrieves the object handling the effectivity of a filterable object (typically an Item Instance).
      * @param iObj :  The filterable object.
      * @param oRealObj  :  The linkable object handling the effectivity.
      * @param oRealObjCV  :  The configurable object of oRealObj.
      */
     virtual HRESULT GetRealFilterableObject(const CATILinkableObject_var &iObj, CATILinkableObject_var &oRealObj, CATIConfigurableObject_var &oRealObjCV) = 0;

/** @nodoc */
     virtual HRESULT Constrain(const CATIConfigurableObject_var& iCV,const CORBAAny &iReplaced, const CORBAAny &iReplacing) = 0;

/** @nodoc */
     virtual HRESULT ConstrainRecursively(const CATIConfigurableObject_var &iCV,const CORBAAny &iReplaced, const CATICfgModification_var& iMod, const CATICfgModification::Operation &iOp) = 0;


/** @nodoc */
     virtual HRESULT QueryConfigHandlerBySpec(const CATListOfCATICfgSimpleSpecification_var &iSpecList, const int iMode, CATListOfCATIConfigHandler_var &oList) = 0;

/** @nodoc */
     virtual HRESULT GetListOfReplacingOrMoved(const CATIConfigurableObject_var &iCV,const CORBAAny &iReplacedOrMoving, SEQUENCE(CORBAAny) &seq) = 0;

/** @nodoc */
     virtual HRESULT GetListOfReplacedOrMoving(const CATIConfigurableObject_var &iCV,const CORBAAny &iReplacingOrMoved, SEQUENCE(CORBAAny) &seq) = 0;

//------------------------------------------------------------------------------------------------------------
/**
 * Query Simple Specifications from their full name.  
 * @param iSpecsFullName
 *    Specs full name list - a full name form is "Category_name|Spec_name"
 * @param olist
 *    Retrieved List of Simple Specifications.
 */
     virtual HRESULT QuerySimpleSpecList( const CATListOfCATUnicodeString &iSpecsFullName,
                      CATListOfCATICfgSimpleSpecification_var &oList) const=0;

/**
 * Query Modification from their name.
 * @param iNameList
 *    modification name list
 * @param olist
 *    Retrieved List of Modification.
 */
     virtual HRESULT QueryModificationListByNameList( const CATListOfCATUnicodeString &iNameList,
                                  CATListOfCATICfgModification_var &oList) = 0;

/** @nodoc
 * Query ProductTypes from known attibute.  - Pavan
 * @param iAttrValue
 *    Contains the attribute's values.   
 * @param iAttrName
 *    Atribute's Name.
 *    iAttrValue works in pair with Attrname.
 *    Possible Value for AttrName are :  VNAME, C509_ALIAS, UID,ALL.
 *    and correponding types of iAttrValue are : String, String, Sequence octet, none
 * @param iOp
 *    Query Operator.  <br><b> Legal Values : <b> IsEqual, IsLike.
 * @param oList
 *    Retrieved List of ProductTypes.
 *@return
     *An HRESULT
     *   <br><b>Legal values</b>:
     *   <d1>
     *     <dt>S_OK</dt>
     *     <dd>The objects are successfully retrieved</dd>
     *     <dt>S_FALSE</dt>
     *     <dd>Query succeeded but no Product Types that satsify the criteria</dd>
     *     <dt>E_FAIL</dt>
     *     <dd>Failed to Query</dd>
     *   </d1>
 */
 virtual HRESULT QueryProductType( CORBAAny& iAttrValue ,
                   const CATUnicodeString &iAttrName, 
                   CATICfgManager::QueryOperator iOp,
                   CATListOfCATICfgProductType_var &oList)=0;

/** @nodoc */
    virtual HRESULT CreateSpecCategory( const CATUnicodeString &iLateType, const CATUnicodeString &iName, const CATUnicodeString &iDescription, 
                CATICfgSpecCategory_var &oCfgSpecCategory, CORBAAny *iPtrURL=0) = 0;
/** @nodoc */     
     // 6-27-03 IR 398332 added by TWL to enable config customization
     virtual HRESULT CreateSpecCategory(  const CATUnicodeString &iLateType, 
             const CATUnicodeString &iName, 
             const CATUnicodeString &iDescription, 
             CATICfgSpecCategory_var &oCfgSpecCategory,
             const CATUnicodeString &iDomainName,
             CORBAAny *iPtrURL=0)= 0;
             

/** @nodoc */
     virtual HRESULT GetPendingOperations(const CATILinkableObject_var& iObject,
                      CATListOfCATIConfigurableObject_var& oListCV,
                      CATListOfInt& oOperations) = 0; 
    
/** @nodoc */
    virtual HRESULT GetInheritedLateType(const CATUnicodeString &iLateType, CATListOfCATUnicodeString &oList) const = 0;


    enum ResolutionStatus { AllResolved = 0 ,
                            IncompleteContribution = 1 ,
                            AtLeastOneParentUnresolved = 2 ,
                            ObjectUnconfigured = 4 ,
                            ObjectUnresolved = 8 ,
                            NoContribution = 16 ,
                            LonelyObject = 32 ,
                            ComputedEffectivityAlwaysTrue = 64 };

/**
 * Test if the Computed Effectivity is null
 *
 * @param iObj : the object (ItemInstance) symbolic link
 * @param oResolutionStatus : result flag to be checked against ResolutionStatus
 *
 * @return :
 *  - <b>S_OK</b> if all is correct
 *  - <b>E_FAIL</b> if an error occured
 */

    virtual HRESULT IsComputedEffectivityNull( const CATILinkableObject_var& iObj , int& oResolutionStatus ) const = 0;

/**
 * Compute the Effectivity
 *
 * @param iObj : the object (ItemInstance) symbolic link
 * @param oComputedEffectivity : the main result
 * @param oContributionTypes : contributing result
 * @param oContributingMods : contributing result
 * @param oResolutionStatus : result flag to be checked against ResolutionStatus
 * @param iForceComputation : flag to force the computation
 *
 * @return :
 *  - <b>S_OK</b> if all is correct
 *  - <b>E_FAIL</b> if an error occured
 */

    virtual HRESULT GetComputedEffectivity( const CATILinkableObject_var& iObj ,
                                            CATListOfCATICfgXEff_var& oComputedEffectivity ,
                                            CATListOfInt& oContributionTypes ,
                                            CATListOfCATICfgModification_var& oContributingMods ,
                                            int& oResolutionStatus ,
                                            CATBoolean iForceComputation = FALSE ) const = 0;

/** @nodoc
 * Returns the list of CATILinkableObjects and CATIConfigurableObjects contributing
 * to the effectivity of a specified object.
 * Only the  CATILinkableObjects with <b>NON NULL</b> CATIConfigurableObject are returned.
 * Therefore, only <b>NON NULL</b> CATIConfigurableObject are returned.
 *
 * @param iUid : the object (ItemInstance) symbolic link
 * @param oLinkableList : the list of CATILinkableObjects
 * @param oCVList : the list of CATIConfigurableObjects
 * @param oTerminalLinkable : the object real filterable
 * @param oTerminalCV : the object real filterable associated CATIConfigurableObject
 *
 * @return :
 *  - <b>S_OK</b> if all is correct
 *  - <b>E_FAIL</b> if an error occured
 *  - <b>S_FALSE</b> if one of the CATIConfigurableObjects was NULL
 */
    virtual HRESULT GetContributingObjectList( const CATILinkableObject_var& iObj ,
                                               CATListOfCATILinkableObject& oLinkableList ,
                                               CATListOfCATIConfigurableObject_var& oCVList ,
                                               CATILinkableObject_var& oTerminalLinkable ,
                                               CATIConfigurableObject_var& oTerminalCV ) const = 0;


/** @nodoc
 * Creates a new Modification Container object.
 *
 * @param oModContainer : the Modification Container created
 *
 * @return :
 *  - <b>S_OK</b> if all is correct
 *  - <b>E_FAIL</b> if an error occured
 */
    virtual HRESULT CreateModContainer( CATICfgModContainer_var& oModContainer ) const = 0;


/** @nodoc
 * Retrieves a list of Modification Containers according to their description attribute.
 * The Modification Containers returned have their description strictly equal (regardless of
 * the case sensitiveness however) to the search criterion specified.
 *
 * @param iDescription : the search criterion
 * @param oModContainerList : the list of Modification Containers which description equals the
 *                            the iDescription parameter.
 *
 * @return :
 *  - <b>S_OK</b> if all is correct
 *  - <b>E_FAIL</b> if an error occured
 */
    virtual HRESULT QueryModContainerByDescription( const CATUnicodeString& iDescription , CATListValCATICfgModContainer_var& oModContainerList ) const = 0;

/**       
 *  Check on the server if at least one of provided Item Instances is under an action.
 *   <b> Role : <b> If it is the case, them do not permit to Extend/Expand Applicability !
 *   If not, return the Effectivity which points to all the Item Instances ....
 *   ...or no Effectivity if at least two of the Item Instances don't have the same Effectivity.
 *   All these checks are made by the method AllowApplicability.
 *   This method takes a list of filtrableObjects and returns one or two nodes.
 *   The first node returned is a status :
 *   0 indicates that All the filtrable objects are sharing the same effectivity stored in the second node.
 *   1 indicates that Two of the filtrable objects are not sharing the same effectivity.
 *   2 indicates that at least one of filtrable objects is under an action.
 *   This short will be stored in the level attribute of the first node.
 *  @param CO
 *     Configurable object to inspect.
 *  @param iIIUIDs
 *     List of Item Instance Unique Identifiers.
 *  @param oDomainsLists
 *     Lists of Domains 
 *  @param oORExpList
 *     List of ORExpression
 */  
     virtual HRESULT AllowExpandApplicability(CATIConfigurableObject_var & CO,
                    const SEQUENCE(CORBAAny) & iIIUIDs,
                    CATListOfCATUnicodeString & oDomainsList,
                    CATListOfCATICfgORExpression_var & oORExpList,
                    short & oStatus) = 0;

     /**
      * Create a Variability Space object by name.
      * @param in_Name
      *   VariabilitySpace name to create.
      * @param out_VariabilitySpace
      *   Created VariabilitySpace.
      */
     virtual HRESULT CreateVariabilitySpace( const CATUnicodeString      &in_Name, 
                         CATICfgVariabilitySpace_var &out_VariabilitySpace ) const =0;

     /** 
      * Retrieve all Variability Space Objects.
      * @param out_List
      *   List of Retrieved VariabilitySpace Objects.
      */    
     virtual HRESULT QueryAllVariabilitySpace(CATListValCATICfgVariabilitySpace_var &out_List) const = 0 ;
     
     /**
      * Retrieve a Variability Space Object with a given name if exist.
      * @param in_Name
      *   Input Name.  
      * @param out_VariabilitySpace
      *   Retrieved VariabilitySpace.
      */    
     virtual HRESULT QueryVariabilitySpaceByName(const CATUnicodeString& in_Name,
                             CATICfgVariabilitySpace_var& out_VariabilitySpace) const = 0;
    

#if defined(CATIAV5R16)
    /**
     * Method to transfer a modification used within an object's effectivity to another action.
     * @param iObj
     * The filterable object.
     * @param iReplaced
     * The modification to replace by iReplacing.
     * @param iReplacing
     * The modification replacing iReplaced.
     * @param iOperations
     * List of operations to select which operations where a replace of modification is needed.
     * @param iSimul
     * Optional argument to simulate the operation only.
     * @param iEvent
     * Optional argument to trigger an event when transfer is not possible.
     */
    virtual HRESULT TransferMod( const CATILinkableObject_var &iObj,
                const CATICfgModification_var &iReplaced, const CATICfgModification_var &iReplacing,
                const CATListOfInt &iOperations,
                CATBoolean iSimul = FALSE, CATBoolean iEvent = TRUE) const = 0;
#endif

    /**
     * Method to transfer a modification linked to Action or ECO.
     * @param pCurrentMod
     * The mod which is going to be transferred
     * @param iUser
     * The new User
     * @param iOrgnization
     * The new Orgnization     
     * @param iProject
     * The new Project
     * @param iSendEmail
     * To decide whether to send mail or not
     * @param iDescription
     * Description about the transfer
     */

    virtual HRESULT TransferModWithAction
    (
        CATICfgModification_var spCurrentMod,
        const CATUnicodeString& iUser,
        const CATUnicodeString& iOrgnization,
        const CATUnicodeString& iProject,
        const boolean iSendEmail,
        CATUnicodeString& iDescription
    ) const = 0;
     
#if defined(CATIAV5R18)
/**
 * Method to get the status of computed effectivity
 * @param iDomain
 *  Effectivity Domain on which the status is required
 * @param iObj
 *  The object on which the effectivity status is to be found
 * @param oComputedEffectivityStatus
 *  Computed effectivity status
 * @return
 *  HRESULT
 *  <br><b>S_OK</b> : if all is correct
 *  <br><b>E_FAIL</b> : if an error occured
 */
virtual HRESULT GetComputedEffectivityStatus( const CATUnicodeString& iDomain,
                                              const CATILinkableObject_var& iObj,
                                              int& oComputedEffectivityStatus ) const = 0;
  
/**
 * Enum defined to identify various states of a computed effectivity.
 * @param ValidEff
 *  Computed effectivity is a valid effectivity
 * @param NullEff
 *  Computed effectivity is null
 * @param Unresolved
 *  Computed effectivity is not defined i.e, the Add operation is not resolved.
 */
enum ComputedEffectivityStatus { ValidEff   = 0, 
                                 NullEff    = 1, 
                                 Unresolved = 2 };
#endif

};

CATDeclareHandler(CATICfgManager, CATBaseUnknown);

#endif

