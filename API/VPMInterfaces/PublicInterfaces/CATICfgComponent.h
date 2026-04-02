//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef CATICfgComponent_h_
#define CATICfgComponent_h_

// =================================================================
// Includes
// =================================================================

//System
#include "CATBaseUnknown.h"
//Interface ID
#include "GUIDVPMInterfaces.h"

#include "CATUnicodeString.h"

class CATIConfigurable_var;
class CATICfgSimpleSpecification_var;
class CATListValCATIConfigurable_var;
class CATListValCATIConfigurableLnk_var;
class CATListValCATICfgSpecUsage_var;
class CATListValCATICfgCategoryUsage_var;
class CATListValCATICfgComponent_var;
class CATICfgCategoryUsage_var;
class CATICfgSpecCategory_var;
class CATICfgSpecUsage_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgComponent;
#else
extern "C" const IID IID_CATICfgComponent;
#endif


class ExportedByGUIDVPMInterfaces CATICfgComponent : public CATBaseUnknown 
{

CATDeclareInterface;

public:
    /**
    * Retrieves the name of a component.
    * @param oName
    *   The name of the component (which is unique).
    **/
    virtual HRESULT GetName(CATUnicodeString& oName) const = 0;

    /**
    * Retrieves all the Configurables importing the Component this.
    *  @param oList
    *    The Configurables importing this.
    **/
    virtual HRESULT GetListOfImportingCO(CATListValCATIConfigurable_var& oList) const = 0;

    virtual HRESULT QueryCOLnkByComponent(CATListValCATIConfigurableLnk_var& oList) const = 0;

    /**
    * Retrieves the CO holding the Component this.
    *  @param oCO
    *    The CO holding this.
    */
    virtual HRESULT GetCO(CATIConfigurable_var& oCO) const = 0;


    // CategoryUsage management
    // Create a CategoryUsage
    // iPath
    // iCategory
    // iVisibility 
    enum CatUsageVisibility { Public, Private };
    virtual HRESULT CreateCategoryUsage(const CATListValCATICfgComponent_var& iPath,
                                        const CATICfgSpecCategory_var &iCategory,
                                        const CATICfgSimpleSpecification_var &iDefaultSpec,
                                        const CATICfgComponent::CatUsageVisibility iVisibility,
                                        CATICfgCategoryUsage_var &oCatUsage) = 0;
//    virtual HRESULT AddCategoryUsage(const CATICfgCategoryUsage_var &iCatUsage, const CATICfgSimpleSpecification_var &iDefaultSpec) = 0;
    virtual HRESULT RemoveCategoryUsage(const CATICfgCategoryUsage_var &iCatUsage) = 0;
    virtual HRESULT GetListOfCategoryUsage(CATListValCATICfgCategoryUsage_var &oCatUsage) const = 0;

    virtual HRESULT AddSpecUsage(const CATICfgSpecUsage_var& iSpecUsage) = 0;

    virtual HRESULT GetListOfSpecUsages(CATListValCATICfgSpecUsage_var& oList) const = 0;


    virtual HRESULT Dump() const = 0;
     /**
    * Retrieves all the links between this and Configurables
    *  @param oList
    *    All the links poiting to this.
    */
    //virtual HRESULT QueryCOLnkByComponent(CATListValCATIConfigurableLnk_var& oList) = 0;
   /**
    *
    * !! To remove !!
    *
    */
    //     virtual HRESULT GetListOfPrivateCategories(CATListOfCATICfgSpecCategory_var& oList) = 0;



    /**
    *
    * !! To remove !!
    *
    */
    //     virtual HRESULT GetListOfPrivateSpecs(CATListOfCATICfgSimpleSpecification_var& oList,
    //					   const CATICfgSpecCategory_var& iCat = NULL_var) = 0;



    /**
    * Adds a category and its default spec.
    *  @param iCat
    *    The category to add.
    *  @param iDefaultSpec
    *    The default spec for iCat
    */
    // virtual HRESULT AddCategory(const CATICfgSpecCategory_var& iCat,
    //                         const CATICfgSimpleSpecification_var& iDefaultSpec ) = 0;

    /**
    * Removes a category and its default spec if all specs under this category are removed
    *  @param iCat
    *    The category to remove   .
    */
    // virtual HRESULT RemoveCategory(const CATICfgSpecCategory_var& iCat) = 0;






    /**
    *
    * !! To remove !!
    *
    */
    //     virtual HRESULT AddSpecsForCategory(const CATICfgSpecCategory_var& iCat,
    //					 const CATListOfCATICfgSimpleSpecification_var& iSpecs) = 0;



    /**
    * Adds spec usage to the component this.
    *  @param iList
    *    The spec usages to add to the component this.
    *
    */
    // virtual HRESULT AddSpecUsages(const CATListValCATICfgSpecUsage_var& iList) = 0;


    /**
    * Removes spec usage from the component this.
    *  @param iList
    *    The spec usages to remove from the component this.
    *
    */
    // virtual HRESULT RemoveSpecUsages(const CATListValCATICfgSpecUsage_var& iList) = 0;

    /**
    * @nodoc
    * Retrieves the list of the default specs.
    *  @param oList
    *    The default specs
    *
    */ 
    // virtual HRESULT GetListOfDefaultSpecs(CATListOfCATICfgSimpleSpecification_var& oList) = 0;


    /**
    *
    * !! To remove !!
    *
    */ 
    //     virtual HRESULT GetListOfCategories(CATListOfCATICfgSpecCategory_var& oList) = 0;

    //    /**
    //       * Retrieves all the specs of the Component this within a specified category.
    //       *  @param oList
    //       *    The retrieved specs.
    //       *  @param iCat
    //       *    The category of the specs to retrieve.
    //       */
    //      virtual HRESULT GetListOfSpecs(CATListOfCATICfgSimpleSpecification_var& oList,
    // 				    const CATICfgSpecCategory_var& iCat = NULL_var) = 0;

    //     /**
    //       * Retrieves the default spec for a category.
    //       *  @param iCat
    //       *    The category for the default spec to retrieve.
    //       *  @param oSpec
    //       *    The default Spec.
    //       */
    //      virtual HRESULT GetDefaultSpecForCategory(const CATICfgSpecCategory_var& iCat,
    // 					       CATICfgSimpleSpecification_var& oSpec) = 0;

    /**
    * Add specs to the component this.
    * It is a facility to the user.
    * Spec usages will be created and added to the component.
    * @param iSpecs
    *   The specs to add.
    */
    // virtual HRESULT AddSpecs(const CATListOfCATICfgSimpleSpecification_var& iSpecs) = 0;

};

CATDeclareHandler(CATICfgComponent, CATBaseUnknown);

#endif
