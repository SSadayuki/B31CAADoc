#ifndef CATIConfigurable_h
#define CATIConfigurable_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIVpmPredicate.h"
#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "CATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgSpecCategory.h"
#include "CATListOfCATICfgSpecExpression.h"
#include "CATListOfCATICfgSimpleSpecification.h"
#include "CATListOfCATICfgSpecInclusion.h"
#include "CATListOfCATICfgMileStoneValue.h"
#include "CATListOfCATICfgProgramLnk.h"
#include "CATListOfCATICfgSpecUsage.h"
#include "CATListOfCATICfgProgram.h"
#include "CATListOfCATIVpmFactoryObject.h"

class CATListValCATICfgSpecUsage_var;
class CATListValCATIConfigurableObject_var;
class CATListValCATIConfigurable_var;
class CATListValCATICfgProgram_var;
class CATIConfigurable_var;
class CATIConfigurableObject_var;
class CATICfgProgram_var;
class CATIConfigurableLnk_var;
class CATICfgComponent_var;
class CATIVpmPredicate_var;
class CATListValCATICfgComponent_var;
class CATICfgInheritedSpecs_var;
class CATICfgProductType_var;
class CATListValCATICfgProductType_var;
class CATICfgAttachable_var;
class CATICfgLnk_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIConfigurable;
#else
extern "C" const IID IID_CATIConfigurable;
#endif

class ExportedByGUIDVPMInterfaces CATIConfigurable : public CATBaseUnknown {
  CATDeclareInterface;
    public:

/** @nodoc */
	 //virtual HRESULT GetAllowedType(int oDate, int oRange, int oMod, int oCondition)  const = 0; 

/** @nodoc */
	 //virtual HRESULT SetAllowedType(int iDate, int iRange, int iMod, int iCondition)  = 0; 
	 
/**
 * Return the Description of this Configurable.
 * @param oDescription
 *   The Configurable Description.
 */
	 virtual HRESULT GetDescription(CATUnicodeString &oDescription) const = 0;

/**
 * Set the Description of this Configurable.
 * @param iDescr
 *   The Configurable Description.
 */
	 virtual HRESULT SetDescription(const CATUnicodeString& iDescr) = 0;

/**
 * Create a Configurable View( Configurable Object) under the Configurable.
 * @param iCVName
 *   Configurable View's name.
 * @param oCV
 *   Configurable View created.
 */
	 virtual HRESULT CreateConfigurableView(const CATUnicodeString &iCVName, CATIConfigurableObject_var &oCV) = 0 ;
	 
        
/**
 * Return the List of Configurable Objects belonging to this Configurable.
 * @param oList
 *   List of Configurable Objects.
 */
	 virtual HRESULT GetConfigurableView(CATListValCATIConfigurableObject_var &oList) const = 0 ;
	 
/**
 * Return the UUID of the Object linked to this Configurable.
 * @param oUID
 *   UUID of the Object.
 */
	 virtual  HRESULT GetObject(SEQUENCE(octet) &oUID) const = 0;  

/** @nodoc
 * Return the List of SpecExpressions belonging to this Configurable.
 * @param oList
 *   List of SpecExpressions to return.
 */
	 virtual HRESULT GetSpecExpression(CATListValCATICfgSpecExpression_var &oList) const = 0 ;

/** @nodoc
 * Return the List of SpecInclusions belonging to this Configurable.
 * @param oList
 *   List of SpecInclusions to return.
 */
	 virtual HRESULT GetSpecInclusion (CATListValCATICfgSpecInclusion_var &oList) const = 0 ;

/** @nodoc
 * Return the List of SpecCategories belonging to this Configurable.
 * @param oList
 *   List of SpecCategories to return.
 */
	 virtual HRESULT GetSpecCategory(CATListValCATICfgSpecCategory_var &oList) const = 0 ;

/**
 * Return the List of SimpleSpecifications belonging to this Configurable.
 * @param oList
 *   List of SimpleSpecifications to return.
 */
	 virtual HRESULT GetSpecification(CATListValCATICfgSimpleSpecification_var &oList) const = 0 ;

/** @nodoc
 * Return the List of SimpleSpecifications belonging to this Configurable for a given SpecCategory and SpecLnk type.
 * @param iCategory
 *   SpecCategory.
 * @param iLinkType
 *   SpecLnk type.
 *   <br><b>Legal values:</b> replaceable_standard, non_replaceable_standard, availability, identification, option.
 * @param oList
 *   List of SimpleSpecifications to return.
 */
	 virtual HRESULT GetSpecification(CATICfgSpecCategory_var &iCategory, CATICfgSpecLnk::Type iLinkType,
		 CATListValCATICfgSimpleSpecification_var &oList) = 0;
	 
/** @nodoc
 * Return the type of the SpecLnk between this Configurable and a SimpleSpecification.
 * @param iSpecification
 *   SimpleSpecification the Configurable is supposed to be linked with.
 * @param oLnkType
 *   SpecLnk type to return.
 *   <br><b>Legal values:</b> replaceable_standard, non_replaceable_standard, availability, identification, option.
 */
	 virtual HRESULT GetSpecLnkType(CATICfgSimpleSpecification_var &iSpecification,
		 CATICfgSpecLnk::Type &oLnkType) = 0;

/** @nodoc
 * Set the type of the SpecLnk between this Configurable and a SimpleSpecification.
 * @param iSpecification
 *   SimpleSpecification the Configurable is supposed to be linked with.
 * @param iLnkType
 *   SpecLnk type to set.
 *   <br><b>Legal values:</b> replaceable_standard, non_replaceable_standard, availability, identification, option.
 */
	 virtual HRESULT SetSpecLnkType(CATICfgSimpleSpecification_var &iSpecification,
		 CATICfgSpecLnk::Type iLnkType) = 0;

/**
 * Return the List of Programs linked to this Configurable.
 * @param outProgramList
 *   List of Programs to return.
 */
	 virtual HRESULT GetListOfProgram(CATListValCATICfgProgram_var& outProgramList) = 0;

/** @nodoc
 * Return the List of MilestoneValue links on this Configurable.
 * @param outMileStoneValueList
 *   List of MilestoneValue links to return.
 */
	 virtual HRESULT GetListOfMileStoneValue(CATListOfCATICfgMileStoneValue_var& outMileStoneValueList) = 0;

/** @nodoc
 * Return the MilestoneValue between a Milestone and this Configurable.
 * @param inMileStone
 *   Milestone supposed to be linked with the Configurable.
 * @param outMileStoneValue
 *   MilestoneValue to return.
 */
         virtual HRESULT QueryMileStoneValueByMileStone(const CATICfgMileStone_var& inMileStone,
                 CATICfgMileStoneValue_var& outMileStoneValue) = 0;

/**
 * Attach a Program to this Configurable.
 * <br><b>Postcondition:</b> Each Milestone of the Program is
 * attached to the Configurable. For each Milestone, a MilestoneValue is created using Milestone's default Value.
 * @param inProgram
 *   Program to attach.
 */
	 virtual HRESULT AttachProgram(const CATICfgProgram_var& inProgram) = 0;

/**
 * Detach a Program from this Configurable.
 * <br><b>Postcondition:</b> If any Milestone of the Program is used, the method does nothing, and returns E_FAIL.
 * Else, the method deletes each of the MilestoneValues between the Milestones and the Configurable.
 * @param inProgram
 *   Program to detach.
 */
	 virtual HRESULT DetachProgram(const CATICfgProgram_var& inProgram) = 0;

/**
 * Attach a Specification Category to this Configurable.
 * @param iSpecCat
 *   Specification Category to attach.
 */
	 virtual HRESULT AttachSpecCategory(const CATICfgSpecCategory_var& iSpecCat,int iIsMandatory=0) = 0;


/**
 * Detach a Specification Category from this Configurable.
 * @param iSpecCat
 *   Specification Category to detach.
 */
 	 virtual HRESULT DetachSpecCategory(const CATICfgSpecCategory_var& iSpecCat) = 0; 

/**
 * Attach a Specification to this Configurable.
 * @param iSpec
 *   Specification  to attach.
 */
	 virtual HRESULT AttachSpec(const CATICfgSimpleSpecification_var& iSpec) = 0;


/**
 * Detach a Specification  from this Configurable.
 * @param iSpecCat
 *   Specification to detach.
 */
 	 virtual HRESULT DetachSpec(const CATICfgSimpleSpecification_var& iSpec) = 0; 

/** @nodoc */
	 virtual HRESULT CreateComponent(const CATUnicodeString& iName, CATICfgComponent_var& oComp) = 0;
 
/** @nodoc */
	 virtual HRESULT ImportComponent(const CATICfgComponent_var& iComp, CATIConfigurableLnk_var& oCOLnk) = 0;

/** @nodoc */
	 virtual HRESULT Unimport(const CATICfgComponent_var& iComp) = 0;
	 
/** @nodoc */
	 virtual HRESULT GetListOfImportedComponents(CATListValCATICfgComponent_var& oList) = 0;
	 
/** @nodoc */
	 virtual HRESULT GetListOfSpecs(CATListOfCATICfgSimpleSpecification_var& oList) = 0;

/** @nodoc */
	 virtual HRESULT GetListOfSpecUsages(CATListValCATICfgSpecUsage_var& oList) = 0;

/** @nodoc */
	 virtual HRESULT QueryInheritedSpecsByPath(const CATListValCATICfgComponent_var& iPath,
		 CATICfgInheritedSpecs_var& oInheritedSpec) const = 0;
     
/** @nodoc */
	 virtual HRESULT GetListOfComponents(CATListValCATICfgComponent_var& oList) = 0;
     
/** @nodoc */
	 virtual HRESULT GetListOfAuthorizedComponents(CATListValCATICfgComponent_var& oList) = 0;

/** @nodoc */
	 virtual HRESULT SetListOfAuthorizedComponents(const CATListValCATICfgComponent_var& iList) = 0;

    /**
     * Creates a New Product Type.
     *@param iName
     * Input value - Name of Product Type to be created
     *@param oProdType
     * Output value - Product Type created
     *@return
     *An HRESULT
     *   <br><b>Legal values</b>:
     *   <d1>
     *     <dt>S_OK</dt>
     *     <dd>The Product Type is created successfully
     *         and the interface pointer is successfully returned</dd>
     *     <dt>S_FALSE</dt>
     *     <dd>A Product Type with the iName exists already
     *         and the interface pointer is successfully returned</dd>
     *     <dt>E_FAIL</dt>
     *     <dd>Failed to Create the Product Type</dd>
     *   </d1>
    */
	 virtual HRESULT CreateProductType(const CATUnicodeString &iName, CATICfgProductType_var &oProdType) = 0;

/** @nodoc */
	 virtual HRESULT GetImportedCategoriesFrom(const CATIConfigurable_var iCO,
					  CATListOfCATICfgSpecCategory_var& oList) = 0;

/** @nodoc */
	 virtual HRESULT Detach(const CATICfgComponent_var& iComp,
		 const CATListOfCATICfgSimpleSpecification_var& iList) = 0;

/** @nodoc */
	 virtual HRESULT Detach(const CATListOfCATICfgSimpleSpecification_var& iList) = 0;    

/** @nodoc */
	 virtual HRESULT GetListOfImportedSpecsForCO(const CATIConfigurable_var& iCO,
		 CATListValCATICfgSimpleSpecification_var& oList) = 0;

/** @nodoc */
	 virtual HRESULT GetListOfImportingCO(CATListValCATIConfigurable_var& oList) = 0;


/** @nodoc */
	 virtual HRESULT ImportSpecs(const CATIConfigurable_var& iCO, 
		 const CATICfgSpecCategory_var& iCatToImport,
		 const CATListOfCATICfgSimpleSpecification_var& iListOfSpecToImport) = 0;

/** @nodoc */
	 virtual HRESULT ImportCO(const CATIConfigurable_var& iCO,
		 CATIConfigurableLnk_var& oCOLnk) = 0;

/** @nodoc */
	 virtual HRESULT GetListOfImportedCO(CATListValCATIConfigurable_var& oList) = 0;

/** @nodoc */
	 virtual HRESULT InheritRBFrom(CATIConfigurable_var & iConfigurable) = 0;

/** @nodoc */
	 virtual HRESULT IsHeir(CATIConfigurable_var & oConfigurable) = 0;

/** @nodoc 
 * Return the List of ProductTypes on this Configurable.
 * @param oList
 *   List of ProductTypes to return.
 */	
         virtual HRESULT GetListOfProductType( CATListValCATICfgProductType_var &oList) const = 0 ;

/** @nodoc */
         virtual HRESULT QuerySpecsByCatSpecNames(CATListOfCATUnicodeString &iSpecNameList,
                                                  CATListOfCATUnicodeString &iCatNameList,
                                                  CATListOfCATICfgSimpleSpecification_var &oSpecList) = 0;

/**
 * Attach a Spec, Category, programm, milestone ... to this CO
 * @param iAttachable
 *   The object to attach.
 * @param oLnk
 *   The link created between this CO and iAttachable.
 */	
        virtual HRESULT CreateAttachment(const CATICfgAttachable_var &iAttachable, CATICfgLnk_var &oLnk) const = 0;

/**
 * Detach a Spec, Category, programm, milestone ... from this CO
 * @param iAttachable
 *   The object to detach.
 */	
        virtual HRESULT DeleteAttachment(const CATICfgAttachable_var &iAttachable) const = 0;

/**
 * Query for the attachment between this CO and iAttachable
 * @param iAttachable
 *   Object that has been attached to this CO using CreateAttachment.
 * @param oLnk
 *   The link between this CO and iAttachable.
 */	
        virtual HRESULT QueryAttachment(const CATICfgAttachable_var &iAttachable, CATICfgLnk_var &oLnk) const = 0;

/** @nodoc
 * Retrieve all categories which are TypeDefining for this Configurable
 * @param oList
 *   List of Type defining categories.
 */	
        virtual HRESULT GetTypeDefiningCategories(CATListOfCATICfgSpecCategory_var &oList) const = 0;

/**
 * Find outif a Specification can be used to define a PT built on this CO
 * @param iSpec
 *   Specification to test.
 * @param oPTSpec
 *   0: Spec can not be used to define a PT built on this CO.
 *   1: Spec can be used to define a PT built on this CO.
 */	
        virtual HRESULT IsSpecTypeDefining(const CATICfgSimpleSpecification_var &iSpec, int &oPTSpec) const = 0;

/** @nodoc */
        virtual HRESULT GetConfigurableChildren( CATListValCATIConfigurable_var& oChildrenList ) const = 0;

/** @nodoc */
        virtual HRESULT BelongsTo(const CATIConfigurable_var &iCOPRC) const = 0;

/** @nodoc */
        virtual HRESULT QueryVariantsWithInheritance
                (const CATUnicodeString& varType,
                 const CATUnicodeString& varAttrName,
                 const CATUnicodeString& varAttrValue, 
                CATListOfCATIVpmFactoryObject& oVariantList, const int iOp) const = 0;
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATIConfigurable, CATBaseUnknown);

#endif
