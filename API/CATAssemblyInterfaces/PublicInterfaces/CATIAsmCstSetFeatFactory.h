// COPYRIGHT Dassault Systemes 2002  
//===================================================================
#ifndef CATIAsmCstSetFeatFactory_H
#define CATIAsmCstSetFeatFactory_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATAssemblyInterfaces.h"

#include "CATBaseUnknown.h"

#include "CATIAsmCstSetFeature.h"

class CATIProduct_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAssemblyInterfaces IID IID_CATIAsmCstSetFeatFactory;
#else
extern "C" const IID IID_CATIAsmCstSetFeatFactory ;
#endif

//------------------------------------------------------------------

/**
 * @deprecated V5R15
 * Factory of creation and management of Constraints' Set.
 * Use CATAsmConstraintSetServices methods to create or manage Constraints' Set
 */
class ExportedByCATAssemblyInterfaces CATIAsmCstSetFeatFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * @deprecated V5R15
     * Use CATAsmConstraintSetServices::GetRootSet 
     * Creation of the Root Set (corresponding to the Constraints Node).
     *   @param iProduct
     *      The product holding the constraints.
     *   @param oCstSetRoot
     *      the created set root.
     *   @return
     *      Error code of function.
     */
    virtual HRESULT CreateAsmCstSetRoot(const CATIProduct_var&    iProduct,
                                        CATIAsmCstSetFeature_var& oCstSetRoot)=0; 


    /**
     * @deprecated V5R15
     * Use CATAsmConstraintSetServices::GetRootSet 
     * Get the Root Set associated to the given product
     * (corresponding to the Constraints' Node).
     *   @param iProduct
     *      The product holding the constraints.
     *   @param oCstSetRoot
     *      the set root.
     *   @return
     *      Error code of function.
     */
    virtual HRESULT GetAsmCstSetRoot(const CATIProduct_var&    iProduct,
                                     CATIAsmCstSetFeature_var& oCstSetRoot) const =0;

    /**
     * @deprecated V5R15
     * Use CATAsmConstraintSetServices::AddNewSetChild 
     * Add a new set child to a set.
     *   @param iFatherSet
     *      The set which will hold the created child
     *   @param oNewSetChild
     *      the new created set child
     *   @param iPreviousSet
     *      the new set will appear after this previous set.
     *      By default (NULL_var), new set will appear after all other brother sets
     *   @return
     *      Error code of function.
     */
    virtual HRESULT AddNewSetChild(const CATIAsmCstSetFeature_var & iFatherSet,
                                         CATIAsmCstSetFeature_var & oNewSetChild,
                                   const CATIAsmCstSetFeature_var & iPreviousSet = NULL_var)=0;

    /**
     * @nodoc
     */
    // define of set "in Work" (only Use for changeCst for the moment)
    virtual void DefineCstSetInWork(const CATIAsmCstSetFeature_var & iSetInWork = NULL_var)=0;
    /**
     * @nodoc
     */
    virtual void GetCstSetInWork(CATIAsmCstSetFeature_var & oSetInWork)=0;
    /**
     * @nodoc
     */
    virtual void DefinePrevCstInWork(const CATBaseUnknown_var iPreviousCst = NULL_var)=0;
    /**
     * @nodoc
     */
    virtual void GetPrevCstInWork(CATBaseUnknown_var & oPreviousCst)=0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler( CATIAsmCstSetFeatFactory, CATBaseUnknown);

//------------------------------------------------------------------

#endif
