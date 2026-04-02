#ifndef CATSorted3DBagRep_H
#define CATSorted3DBagRep_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// COPYRIGHT DASSAULT SYSTEMES 2001



//**********************************************************************
// CATIA Version 5 Release 1 Framework VISUALIZATION
// Copyright Dassault Systemes 2001
//**********************************************************************
//  Abstract:
//  ---------
//    
//
//**********************************************************************
//  Usage:
//  ------
//   
///
//**********************************************************************
//  Main Methods:
//  -------------
//   
//
//**********************************************************************


#include "CAT3DBagRep.h"
#include "CATSortedSetOfObject.h"



class CATSorted3DBagRep : public CAT3DBagRep
{
  CATDeclareClass;
  
  
public:
#ifdef CATIAV5R26
  /** Constructs an observable empty bag representation. */
  static CATSorted3DBagRep* CreateRep();      
#endif
  /** Constructs an empty bag representation. */
   CATSorted3DBagRep();

  /** Adds a child representation to the bag.
   * @param iRep
   * Child representation to be added.
   */
  virtual HRESULT AddChild(CATRep &iRep);

  /** Removes a child representation from the bag.
   * The bounding element of the bag is updated.
   * @param iRep
   * Child representation to be removed.
   */
  virtual void RemoveChild(CAT3DRep &iRep);
  
  /** Removes a child representation from the bag.
   * The bounding element of the bag is not updated.
   * @param iRep
   * Child representation to be removed.
   */
  virtual void RemoveChildren(CAT3DRep &iRep);
  
  void EndRemoveChildren ();
 
  void EmptyHighlightBag ();

  
 


protected:
  CATSortedSetOfObject _Child;


private:
  /** @nodoc */
  CATSorted3DBagRep (const CATSorted3DBagRep &);
  /** @nodoc */
  CATSorted3DBagRep & operator = (const CATSorted3DBagRep &);

};

#endif // CATSorted3DBagRep_H
