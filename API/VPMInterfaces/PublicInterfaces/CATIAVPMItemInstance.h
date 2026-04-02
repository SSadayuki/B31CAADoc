// -*-C++-*-

#ifndef CATIAVPMItemInstance_h
#define CATIAVPMItemInstance_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObject.h"
#include "CATCORBABoolean.h"
#include "CATLISTV_CATBaseUnknown.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMProductRootClass;
class CATIAVPMProductSpecification;
class CATIAVPMProductComponent;
class CATIAVPMPartVersion;
class CATIAVPMPartVersion_var;
class CATIAVPMTechRelation;
class CATIAVPMTechInstance;
class CATIAVPMAssemblyRelation;
class CATIAVPMAssemblyRelation_var;
class CATIAVPMItemInstance_var;
class CATMathTransformation;
class CATICfgFilter;
class CATIVpmFactoryObject;
class CATIAVPMTechInstance_var;
class CATIAVPMProductSpecification_var;
class CATIVpmPSDMUFilter_var;
// #include "CATLISTV_Declare.h"
// class CATLISTV(CATIAVPMItemInstance_var);

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMItemInstance;
#else
extern "C" const IID IID_CATIAVPMItemInstance;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage Item Instance.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMItemInstance : public CATBaseUnknown //CATIAVPMObject
{
    /** @nodoc */
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * @nodoc
 */
    virtual HRESULT   IsRoot(boolean & IsRoot)=0;

/**
 * @nodoc
 */
    // deprecated: use version with DMUFilter parameter
    virtual HRESULT   IsLeaf(CATICfgFilter *CfgFilter,
			     boolean & IsLeaf)=0;

/**
 * @nodoc
 */
    // deprecated: use version with DMUFilter parameter
    virtual HRESULT   IsNode(CATICfgFilter *CfgFilter,
			     boolean & IsNode)=0;

/**
 * @nodoc
 */
    // deprecated: use version with DMUFilter parameter
    virtual HRESULT   IsOrphan(CATICfgFilter *CfgFilter,
			       boolean & IsOrphan)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ParentProductRootClass(CATIAVPMProductRootClass *& ProductRootClass)=0;

/**
 * Retrieves Part Version of an Item Instance.
 * @param PartVersion
 *   The Part Version.
 */
    virtual HRESULT   get_PartVersion(CATIAVPMPartVersion *& PartVersion)=0;

/**
 * @nodoc
 */
    virtual HRESULT   put_PartVersion(CATIAVPMPartVersion *PartVersion)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductSpecification(CATIAVPMProductSpecification *& ProductSpecification)=0;

/**
 * @nodoc
 */
    virtual HRESULT   put_ProductSpecification(CATIAVPMProductSpecification *ProductSpecification)=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateTechInstance(const CATBSTR & InstanceID,
					    CATIAVPMTechInstance *& TechInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_TechInstance(long index,
				       CATIAVPMTechInstance *& TechInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_TechInstanceCount(long & NbItems)=0;


/**
 * @nodoc
 */
    virtual HRESULT   put_ItemInstanceFromPV(CATIAVPMPartVersion *PartVersion,
					     const CATBSTR & ItemId,
					     CATMathTransformation *matrix,
					     CATIAVPMItemInstance *& ItemInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   put_ItemInstanceFromPS(CATIAVPMProductSpecification *ProductSpecification,
					     const CATBSTR & ItemId,
					     CATMathTransformation *matrix,
					     CATIAVPMItemInstance *& ItemInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ParentItemInstance(CATIAVPMItemInstance *& ItemInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   put_ProductComponent(CATIAVPMProductComponent *ProductComponent)=0;

/**
 * @nodoc
 */
    virtual HRESULT   RemoveProductComponent(CATIAVPMProductComponent *ProductComponent)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductComponentCount(long & NbItems)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductComponent(long index,
					   CATIAVPMProductComponent *& ProductComponent)=0;


/**
 * @nodoc
 */
    virtual HRESULT   IsSubstitute(boolean & oIsSubstitue) const =0 ;


/**
 * @nodoc
 */
    virtual HRESULT   CreateSymetricalItemInstance(CATMathTransformation *matrix,
						   CATIAVPMItemInstance *& SymetricalItemInstance)=0;

/**
 * @nodoc
 */
    //NGS: Do not use. Will be moved to CATIPrivateVPMItemInstance soon.
    virtual HRESULT   get_Relation(long index,
				   CATBSTR & Description,
				   CATIAVPMItemInstance *& ItemInstanceAttached,
				   CATIAVPMItemInstance *& ItemInstance,
				   CATMathTransformation *& matrix)=0;

/**
 * @nodoc
 */
    //NGS: Do not use. Will be moved to CATIPrivateVPMItemInstance soon.
    virtual HRESULT   get_RelationCount(long & NbItems)=0;


/**
 * @nodoc
 */
    //NGS: Do not use. Will be moved to CATIPrivateVPMItemInstance soon.
    virtual HRESULT   get_AttachedRelation(long index,
					   CATBSTR & Description,
					   CATIVpmFactoryObject *& Relation,
					   CATIAVPMItemInstance *& ItemInstanceParent,
					   CATIAVPMItemInstance *& ItemInstanceChild,
					   CATMathTransformation *& matrix)=0;

/**
 * @nodoc
 */
    //NGS: Do not use. Will be moved to CATIPrivateVPMItemInstance soon.
    virtual HRESULT   get_AttachedRelationCount(long & NbItems)=0;

/**
 * @nodoc
 */
    virtual HRESULT   put_Matrix(CATMathTransformation *matrix, boolean iUseConfig=TRUE)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_Matrix(CATMathTransformation *& matrix)=0;

/**
 * @nodoc
 */
    // deprecated: use version with DMUFilter parameter
    virtual HRESULT   get_NearItemInstances(double Clearance,
					    CATLISTV(CATBaseUnknown_var) & ListItemInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_AssemblyRelation(CATIAVPMAssemblyRelation *& AssemblyRelation, int ActivatedOnly=1)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_Reference(CATIAVPMObject *& Reference)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ParentTechRelation(long index,
					     CATIAVPMTechRelation *& TechRelation)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ParentTechRelationCount(long & NbItems)=0;




    // =======================================================
    // 20-Mar-2001: Umesh, INCAT Systems
    // Added method implementations for retrieving Reference
    // Item Instance.
    // Methods for getting the Reference of an Item Instance
    // Has_PV_AsReference()   -To know whether Item Instance
    //                         has Product Version as a 
    //                         Reference
    // Has_PS_AsReference()   -To know whether Item Instance
    //                         has Product Specification as 
    //                         a Reference
    // =======================================================

/**
 * @nodoc
 */
    virtual HRESULT   Has_PV_AsReference()=0;

/**
 * @nodoc
 */
    virtual HRESULT   Has_PS_AsReference()=0;


// MTM - 09/10/2001 - For Standard Part Management:
//   gives the discrete quantity of current Object
/** 
 * @nodoc
 */
    virtual HRESULT   get_DiscreteQuantity(long &value)=0;

// MTM - 09/10/2001 - For Standard Part Management:
//   modifies the discrete quantity of current Object (in configured mode)
/**
 * @nodoc
 */
    virtual HRESULT   put_DiscreteQuantity(const long &value, 
                                           CATIAVPMItemInstance *& oItemInstance)=0;


    //+NGS,15-May-2002: Granular import method for PMA.
/**
 * @nodoc
 */
    virtual HRESULT put_SingleItemInstanceFromAR(const CATIAVPMAssemblyRelation_var & hAssemblyRelation,
						 const CATBaseUnknown_var & hRef,
						 CATIAVPMItemInstance_var &hItemInstance )=0;


// RDR 18-Dec-2002 Have to keep old methods signatures
/**
* @nodoc
* Deprecated DO NOT USE.
*/
virtual HRESULT   AggregateSubstituteItemInstance(const CATBSTR & Description,
																							CATIAVPMObject *ObjectFrom,
																							const CATBSTR & InstanceID,
																							CATMathTransformation *matrix,
																							CATIAVPMItemInstance *& ItemInstance)=0;

/**
* @nodoc
* Deprecated DO NOT USE.
*/
virtual HRESULT   get_Substitute(long index,
																CATBSTR & Description,
																CATIAVPMItemInstance *& ItemInstance)=0;


/**
* @nodoc
* Deprecated DO NOT USE.
*/
virtual HRESULT   get_SubstituteCount(long & NbItems)=0;


/**
* @nodoc
* Deprecated DO NOT USE.
*/

virtual HRESULT   Substitute(long NbItems)=0;


/**
* @nodoc
* Deprecated DO NOT USE.
*/
 virtual HRESULT   get_SubstituteBase(CATBSTR & Description,
	                                   CATIAVPMItemInstance *& ItemInstance)=0;
 

//+RDR 07-Oct-2002 Substitutes are back
/**
* @nodoc
* Creates a substitute Item Instance.
* @param ihSubstituteRef Part Version/ProductSpec substitue reference .
* of the substitute.
* @param ohIISubs the created substitute item instance.
*/
virtual HRESULT   AggregateSubstituteItemInstance(
									const CATIAVPMObject_var & ihSubstituteRef, 
									CATIAVPMItemInstance_var & ohIISubs)=0;

/**
* @nodoc
* Returns the list of know substitutes for
* this item instance.
* @param oLIISubs
*/

virtual HRESULT	get_SubstitutesList(CATLISTV(CATBaseUnknown_var) & oLIISubs)=0;

/**
* @nodoc
* Gives the substitute base Item Instance.
*/
virtual HRESULT   get_SubstituteBase(CATIAVPMItemInstance_var & ohItemInstance) const =0;



/**
 * @nodoc
 * 07-Oct-2002 +RDR
 * Methods using CATBSTR must be replaced and deprecated
 */
    virtual HRESULT   AggregateTechInstance(const CATUnicodeString & InstanceID,
					    CATIAVPMTechInstance_var& TechInstance)=0;

/**
 * @nodoc
 * 07-Oct-2002 +RDR
 * Methods using CATBSTR must be replaced and deprecated
 */
    virtual HRESULT   put_ItemInstanceFromPV(CATIAVPMPartVersion_var& PartVersion,
					     const CATUnicodeString & ItemId,
					     CATMathTransformation *matrix,
					     CATIAVPMItemInstance_var& ItemInstance)=0;

/**
 * @nodoc
 * 07-Oct-2002 +RDR
 * Methods using CATBSTR must be replaced and deprecated
 */
 virtual HRESULT   put_ItemInstanceFromPS(CATIAVPMProductSpecification_var& ProductSpecification,
					     const CATUnicodeString & ItemId,
					     CATMathTransformation *matrix,
					     CATIAVPMItemInstance_var& ItemInstance)=0;

 
    /**
     * @nodoc
     */
    // method without explicit DMUFilter must be replaced and deprecated.
    virtual HRESULT IsLeaf(
        boolean& IsLeaf,
        const CATIVpmPSDMUFilter_var& hDMUFilter) = 0;

    /**
     * @nodoc
     */
    // method without explicit DMUFilter must be replaced and deprecated.
    virtual HRESULT IsNode(
        boolean& IsNode,
        const CATIVpmPSDMUFilter_var& hDMUFilter) = 0;

    /**
     * @nodoc
     */
    // method without explicit DMUFilter must be replaced and deprecated.
    virtual HRESULT IsOrphan(
        boolean& IsOrphan,
        const CATIVpmPSDMUFilter_var& hDMUFilter) = 0;

    /**
     * @nodoc
     */
    // method without explicit DMUFilter must be replaced and deprecated.
    virtual HRESULT get_NearItemInstances(
        double Clearance,
        CATLISTV(CATBaseUnknown_var)& ListItemInstance,
        const CATIVpmPSDMUFilter_var& hDMUFilter) = 0;
        
    /**
     * @nodoc
     */
    virtual HRESULT   get_OverwritePosition(boolean & oOvwPosFlag)=0;
    /**
     * @nodoc
     */
    virtual HRESULT   put_OverwritePosition(const boolean & iOvwPosFlag)=0;

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMItemInstance, CATBaseUnknown);

#endif

