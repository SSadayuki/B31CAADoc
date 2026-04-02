// COPYRIGHT Dassault Systemes 2002

#ifndef CATIAsmCstSetFeature_H
#define CATIAsmCstSetFeature_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATAssemblyInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATISpecObject.h"

class CATIAsmCstSetFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAssemblyInterfaces IID IID_CATIAsmCstSetFeature;
#else
extern "C" const IID IID_CATIAsmCstSetFeature ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage the set of constraints.
 */
class ExportedByCATAssemblyInterfaces CATIAsmCstSetFeature: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    //==================================================================	
    //                          Set's management 
    //==================================================================	

   /**
    * Remove a set child.
    * <br>All his children set and constraints are affected to the father set
    * <br>(To delete the set and all his children, use the method remove on LyfeCycleObject Interface)
    *   @param iSetChild
    *      the set child to be removed.
    *   @return
    *      Error code of function.
    */
    virtual HRESULT RemoveSetChild(const CATIAsmCstSetFeature_var &iSetChild) =0; 
    
   /**
    * Give the list of set child.
    *   @param oSetChildrenList
    *      the returned list of child.
    *   @return
    *      Error code of function.
    */
    virtual HRESULT ListSetChildren(CATListValCATISpecObject_var& oSetChildrenList) const =0;

   /**
    * Give the father set.
    * <br>for the root set, the method return NULL_var (no father set)
    *   @param oFatherSet
    *      the returned father set.
    *   @return
    *      Error code of function.
    */
    virtual HRESULT GetFatherSet(CATIAsmCstSetFeature_var& oFatherSet) const =0;

   /**
    * Move a set on this set from this set or another one.
    *   @param iFromSet
    *      the origin father of the moved set.
    *   @param iSetToMove
    *      the set to move.
    *   @param iPreviousCst
    *      the moved set will appear after this previous set.
    *      <br>by default (NULL_var), the moved set will appear after all other brother set
    *   @return
    *      Error code of function.
    */
    virtual HRESULT MoveSetFrom(const CATIAsmCstSetFeature_var & iFromSet,
                                const CATIAsmCstSetFeature_var & iSetToMove,
                                const CATISpecObject_var & iPreviousCst= NULL_var)=0;

    //==================================================================	
    //                 Constraint's management on set
    //==================================================================	

   /**
    * Give the list of constraints included in the set
    * <br>by default the root set hold all the constraints.
    *   @param oCstChildrenList
    *      list of the included constraints.
    *   @return
    *      Error code of function.
    */
    virtual HRESULT ListCstChildren(CATLISTV(CATBaseUnknown_var)& oCstChildrenList) const=0;
 
   /**
    * Move a list of constraints on this set from this set or another one.
    * <br>for the root set, the method return NULL_var (no father set)
    *   @param iListFromSet
    *      list of origin sets of the moved constraints.
    *   @param iListCst
    *      list of constraints to move.
    *   @param iPreviousCst
    *      moved constraints will appear after this previous constraint.
    *      <br>by default (NULL_var), they appear after all other brother constraints
    *   @return
    *      Error code of function.
    */
    virtual HRESULT MoveConstraintsFrom(const CATListValCATISpecObject_var & iListFromSet,
                                        const CATLISTV(CATBaseUnknown_var) & iListCst,
                                        const CATBaseUnknown_var & iPreviousCst = NULL_var) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler( CATIAsmCstSetFeature, CATBaseUnknown);

//------------------------------------------------------------------

#endif
