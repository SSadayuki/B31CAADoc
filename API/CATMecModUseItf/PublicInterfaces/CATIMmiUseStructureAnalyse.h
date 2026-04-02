#ifndef CATIMmiUseStructureAnalyse_h
#define CATIMmiUseStructureAnalyse_h
//-----------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2010  
//-----------------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
class CATListValCATBaseUnknown_var;

extern ExportedByCATMecModUseItf IID IID_CATIMmiUseStructureAnalyse ;

/**  
 * Interface used to retrieve parents and children in the mechanical structure.
 * <b>Role</b>: it shows the relationships between the different elements, based on defined inputs and outputs.
 * <p>Note : for dressup features, the parent of a feature is not necessarily the previous feature in the tree but the feature used initially to build
 * the feature.
 * If a feature is not visible in the tree, it is replaced by its closest visible feature.
 * <p>The interface may be used to retrieve the impacts of deletion : if a feature is deleted, it may be becessary to delete its children 
 * (otherwise, they may be broken). It is also possible to delete some of its parents (if they are no longer needed).
 */
 

class ExportedByCATMecModUseItf CATIMmiUseStructureAnalyse : public CATBaseUnknown
{
  CATDeclareInterface;

  public:
 
 /**  
   * Retrieves recursively all the parents of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of all parents of the current object.
   * @return 
   * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
   */
  virtual HRESULT GetAllStructuralParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;

 /**  
   * Retrieves the direct parents of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of direct parents of the current object.
   * @return 
   * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.

   */
  virtual HRESULT GetDirectStructuralParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;
  
 /**  
   * Retrieves recursively all the children of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of all children of the current object.
   * @return 
   * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
   */
 
  virtual HRESULT GetAllStructuralChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;

 /**  
   * Retrieves the direct children of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of direct children of the current object.
   * @return 
   * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
   */
  virtual HRESULT GetDirectStructuralChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;

};

CATDeclareHandler(CATIMmiUseStructureAnalyse,CATBaseUnknown);

#endif 
