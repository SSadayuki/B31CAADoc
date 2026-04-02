#ifndef CAT3DBagRep_H
#define CAT3DBagRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


//******************************************************************************
// CATIA Version 5 Release 1 Framework VISUALIZATION
// Copyright Dassault Systemes 1996
//******************************************************************************
//  Abstract:
//  ---------
//    This object is the main tool for the definition of a representation tree.
//    It manages a list of children representations, and a position matrix, thus
//    defining a complete spatial graph node.
//
//******************************************************************************
//  Usage:
//  ------
//    The CAT3DBagRep has to be created empty, then children can be added or
//    removed using the AddChild and RemoveChild methods. There's no control on
//    the way children are being added or removed. Caution has to be taken in
//    order to avoid the definition of cycles.
//
//******************************************************************************
//  Inheritance:
//  ------------
//                CAT3DBagRep
//                  CAT3DRep
//                    CATRep
//                      CATExtend (SYSTEM Framework).
//
//******************************************************************************
//  Main Methods:
//  -------------
//    Drawing.
//    Graphical attributes management.
//
//******************************************************************************

#include "CATViz.h"
#include "CAT3DRep.h"

class CAT4x4Matrix;
class CATVisuController;

/** Class to create a collection (bag) of representations. */
class ExportedByCATViz CAT3DBagRep : public CAT3DRep
{
  
  // Marshalling information:
  // ------------------------
  
  friend class CATMarshallable3DBagRep;
  friend class CATVrmlMaker3DBagRep;
  friend class CATVrml2Maker3DBagRep;
  friend class CATDmuStream3DBagRep;
  friend class CATDmuStream2DTo3DRep;
  CATDeclareClass;
  
  
public:
  virtual ~CAT3DBagRep();

  /** Removes (not deletes) all the children of the bag. */
  virtual void Empty();

  /** Deletes the bag as well as children not referenced by other bags. */
  virtual void Destroy();

  /** Constructs an empty 3D bag representation. */
  CAT3DBagRep();

  /** @nodoc : deprecated constructor. */
  CAT3DBagRep (CATModelIdentificator &id,CATVisuController *ctrl=NULL);

#ifdef CATIAV5R26  
  /** Constructs an empty 3D bag representation. */
  static CAT3DBagRep* CreateRep();
#endif

  /** Recalculates the bounding element.
   * @param iShowSpace
   */
  virtual void ComputeBoundingElement(int iShowSpace=1);
    
  /** Get the position and orientation of the bag.
   * @return The orientation matrix of the bag.
   */
  const CAT4x4Matrix * GetMatrix () const;

  /** Sets the position and orientation of the bag.
   * @param iMatrix
   * Orientation matrix of the bag.
   */
  void SetMatrix(const CAT4x4Matrix & iMatrix);

  /** Sets the matrix of the bag to the identity matrix. */
  void ResetMatrix();
    
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
  virtual void RemoveChild(CATRep &iRep);
  
  /** Removes a child representation from the bag.
   * The bounding element of the bag is not updated.
   * @param iRep
   * Child representation to be removed.
   */
  virtual void RemoveChildren(CATRep &iRep);

  /** Returns the list of children representations. */
  list<CATRep> *GetChildren ();

  /** @nodoc */
  virtual void Draw(CATRender & iRender, int iInside);

  /** @nodoc */
  virtual void DrawShading(CATRender &ioRender, int iInside);

  /** @nodoc */
  virtual void DrawPath(CATRender &ioRender, int iInside, CATRepPath &ioPath); 

  /** Tests whether the representation will draw its graphic primitives.
   * See CATRep::OkToDraw(CATRender & ioRender, int * ioInside)
   */
  virtual int  IsOkToDraw(CATRender &ioRender, int ioInside);

  /** @nodoc */
  virtual void SortGraphicAttributeSet();

  /** Sets the highlight mode of the bag.
   * @param iHighlightMode
   * <ul>
   * 0 : bag is not highlighted <li>
   * 1 : bag is highlighted <li>
   * </ul>
   * @param iPropagationMode
   * <ul>
   * 0 : highlight mode is not propagated to children representations <li>
   * 1 : highlight mode is propagated to children representations <li>
   * </ul>
   */
  virtual void SetHighlightMode(int iHighlightMode, int iPropagationMode=0);

  /** Sets the show mode of the bag.
   * @param iShowMode
   * <ul>
   * 0 : bag is not visible <li>
   * 1 : bag is visible <li>
   * </ul>
   * @param iPropagationMode
   * <ul>
   * 0 : show mode is not propagated to children representations <li>
   * 1 : show mode is propagated to children representations <li>
   * </ul>
   */
  virtual void SetShowMode(int iShowMode, int iPropagationMode=0);
    
  /** @nodoc */
  // Compute the BE for the Noshow space
  const CAT3DBoundingSphere &GetNoshowBoundingElement(int & ioIsOneRepNoshow);

  /** @nodoc */
  // Compute the BE for the Show space
  const CAT3DBoundingSphere &GetShowBoundingElement();

  /** @nodoc */
  virtual int IsUVMeshToCompute() const;


protected:

  /** Updates the bounding element of the bag with regards to <tt>iBoundingSphere</tt>. */
  void UpdateBoundingElement(const CAT3DBoundingSphere & iBoundingSphere); 

  /** @nodoc */
  void DrawPathWithoutFilter(CATRender &render, int ioInside, CATRepPath &ioPath);

  CAT4x4Matrix *_the_MatPosi;      // position and orientation of the bag.
  list<CATRep>  _the_Son_List;     // the list of children representations.    

private:
  /** @nodoc */
  //CAT3DBagRep (const CAT3DBagRep &);
  /** @nodoc */
  //CAT3DBagRep & operator = (const CAT3DBagRep &);

};

#endif // CAT3DBagRep_H
