#ifndef CATIDescendants_h
#define CATIDescendants_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include <CATBaseUnknown.h>
#include <CATISpecObject.h>

#include "AC0SPBAS.h"
extern ExportedByAC0SPBAS IID IID_CATIDescendants ;

/**
* Interface to manage ordered components' agregation within a feature.
* <b> Role: </b> ability to scan the tree structure or to add components and order them.
* <br><b> Note:</b> order in the list of components is important.
*/
class ExportedByAC0SPBAS CATIDescendants : public CATBaseUnknown
{
  CATDeclareInterface;

 public:


  /**
   * Adds a component to this feature at last position in the list of components agregated to this feature .
   * @param iFeature
   *         SpecObject to add as a component.
   */
  virtual void Append         (const CATISpecObject_var & iFeature )  = 0    ;

  /**
   * Adds a component to this feature at first position in the list of components agregated to this feature ..
   * @param iFeature
   *         SpecObject to add as a component.
   */
  virtual void Prepend        (const CATISpecObject_var & iFeature)  = 0    ;

  /**
   * Adds a component to this feature at a given position in the list of components agregated to this feature ..
   * @param iFeature
   *         SpecObject to add as a component.
   * @param iPosition
   *         position of the component inside the list of agregated features.
   */
  virtual void AddChild       (const CATISpecObject_var & iFeature, int iPosition) = 0    ;

  /**
   * Removes a given component from this feature .
   * @param iFeature
   *         component to remove.
   */
  virtual void RemoveChild    (const CATISpecObject_var & iFeature ) = 0    ;
  
  /**
   * Returns the position of a given component in the list of components agregated to this feature .
   * @param iFeature
   *         search SpecObject.
   */
  virtual int  GetPosition    (const CATISpecObject_var & iFeature ) = 0    ;

  /**
   * Modifies the position of a given component in the list of components agregated to this feature .
   * @param iFeature
   *         concerned component.
   * @param iNewPosition
   *         new position of the concerned component in the list of agregated features.
   */
  virtual void ChangePosition (const CATISpecObject_var & iFeature,int iNewPosition )= 0    ;

  /**
   * Gets a component by its position in the list of components agregated to this feature .
   * @param iPosition
   *         given position. If 1, gets the first component in the list.
   * @return 
   *         the component found at the given position in the list.
   */
  virtual CATISpecObject_var GetChildAtPosition (int iPosition ) = 0    ;

  /**
   * Returns number of components agregated to this feature.
   */
   virtual int GetNumberOfChildren() = 0;


  /**
  * Retrieves all direct children.
  * @param iIntfName
  *        to get only children answering to interface iIntfName.
  * @param oLst
  *        list of children.
  */
  virtual void GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)   = 0    ;

  /**
  * Retrieves all children recursively.
  * @param iIntfName
  *        to get only children answering to interface iIntfName.
  * @param oLst
  *        list of children.
  */
  virtual void GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &oLst)   = 0    ;
  
};

CATDeclareHandler(CATIDescendants,CATBaseUnknown);

#endif

