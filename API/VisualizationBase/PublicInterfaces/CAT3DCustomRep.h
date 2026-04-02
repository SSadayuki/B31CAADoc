#ifndef CAT3DCustomRep_H
#define CAT3DCustomRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


//******************************************************************************
// CATIA Version 5 Release 1 Framework VISUALIZATION
// Copyright Dassault Systemes 1996   -  FMN  -
//******************************************************************************
//  Abstract:
//  ---------
//    This class contains a list of graphical primitives each of them being
//    associated to a graphical attribute. This means that the CAT3DCustomRep
//    can be used for almost any geometric description.
//
//******************************************************************************
//  Usage:
//  ------
//    It should be created empty, and then Graphical primitives are to be added,
//    with their corresponding Graphical Attribute. Nevertheless, construction
//    with a single primitive with it's attribute is provided.
//    
//    The primitives that are being added to the representation are not copied
//    within it. The graphical attributes are copied inside the representation.
//
//    Warning: Show/NoShow attribute is not handled at Graphical primitive level
//    (ie. you can not mix shown and hidden primitives). Therefore, always add
//    shown primitives, and use the rep's graphic attribute to show/hide
//    the entire rep.
//
//  Memory behavior:
//  ----------------
//    During object life, removed or replaced primitives are never destroyed by
//    the object. The user has to ensure the memory management of it's primi-
//    tives.
//    Object deletion causes the destruction of every primitives it contains.
//
//******************************************************************************
//  Inheritance:
//  ------------
//                CAT3DCustomRep
//                  CAT3DRep
//                    CATRep
//                      CATExtend (SYSTEM Framework).
//
//******************************************************************************
//  Main Methods:
//  -------------
//    Drawing.
//    Graphical attributes management.
//    GP list management.
//
//******************************************************************************

#include "CATViz.h"
#include "CAT3DRep.h"

class CATGraphicPrimitive;
class CATGraphicAttributeSet;

/** Class to manage a collection of graphic primitives with different graphic attributes. */
class ExportedByCATViz CAT3DCustomRep : public CAT3DRep
{
  friend class CATVrmlMaker3DCustomRep;
  friend class CATVrml2Maker3DCustomRep;
  friend class CATMarshallable3DCustomRep;
  friend class CATDmuStream3DCustomRep;
  CATDeclareClass;

public:
    
  // Construction and destruction methods:
  // -------------------------------------
  //   The primitive argument is not copied inside the representation,
  //   The attribute argument is duplicated inside the representation.
    
  virtual ~CAT3DCustomRep ();

  /** Contructs an empty custom representation. */
  CAT3DCustomRep();

  /** Contructs a custom representation with one graphic primitive.
   * @param iGraphicPrimitive
   * Do not delete this graphic primitive.
   * @param iGraphicAttribut
   * The graphic attributes of <tt>iGraphicPrimitive</tt>.
   *
   * Warning: Show/NoShow attribute is not handled at Graphical primitive level
   * (ie. you can not mix shown and hidden primitives). Therefore, always add
   * shown primitives, and use the rep's graphic attribute to show/hide the entire rep.
   */
  CAT3DCustomRep (CATGraphicPrimitive          * iGraphicPrimitive,
                  const CATGraphicAttributeSet & iGraphicAttribut);

  /** @nodoc : deprecated constructor. */
  CAT3DCustomRep (CATGraphicPrimitive *gp, const CATGraphicAttributeSet &att,
                  CATModelIdentificator &id,void *ctrl=NULL);
  #ifdef CATIAV5R26
  /** Contructs an empty custom representation. */
  static CAT3DCustomRep* CreateRep();
  
  /** Contructs a custom representation with one graphic primitive.
   * @param iGraphicPrimitive
   * Do not delete this graphic primitive.
   * @param iGraphicAttribut
   * The graphic attributes of <tt>iGraphicPrimitive</tt>.
   *
   * Warning: Show/NoShow attribute is not handled at Graphical primitive level
   * (ie. you can not mix shown and hidden primitives). Therefore, always add
   * shown primitives, and use the rep's graphic attribute to show/hide the entire rep.
   */
  static CAT3DCustomRep* CreateRep(CATGraphicPrimitive          * iGraphicPrimitive,
                                   const CATGraphicAttributeSet & iGraphicAttribut);
  /** Returns the graphic attributes associated with a managed graphic primitive.
   * @param iIndex
   * Index value in the list of managed graphic primitives.
   * Legal values are [0,<tt>GetGPSize()</tt>-1].
   * @param oGAS
   * Reference to a CATGraphicAttributeSet that will hold the result
   */
  virtual void GetAttribut(const int iIndex,CATGraphicAttributeSet& oGAS) const;

  /** Set the graphic attributes associated with a managed graphic primitive.
   * @param iIndex
   * Index value in the list of managed graphic primitives.
   * Legal values are [0,<tt>GetGPSize()</tt>-1].
   * @param iGAS
   * Reference to a CATGraphicAttributeSet
   */
  virtual void SetAttribut(const int iIndex,CATGraphicAttributeSet const& iGAS);
#endif
  /** Adds a graphic primitive to the list of managed graphic primitives.
   * @param iGraphicPrimitive
   * Do not delete this graphic primitive.
   * @param iGraphicAttribut
   * The graphic attributes of <tt>iGraphicPrimitive</tt>.
   *
   * Warning: Show/NoShow attribute is not handled at Graphical primitive level
   * (ie. you can not mix shown and hidden primitives). Therefore, always add
   * shown primitives, and use the rep's graphic attribute to show/hide the entire rep.
   */
  virtual void AddGP(CATGraphicPrimitive          * iGraphicPrimitive,
                     const CATGraphicAttributeSet & iGraphicAttribut);

  /** Removes a graphic primitive from the list of managed graphic primitives.
   * @param iGraphicPrimitive
   * The caller must delete the graphic primitive.
   */
  virtual void RemoveGP(CATGraphicPrimitive * iGraphicPrimitive);

  // Management of the list of Graphical Primitives:
  // -----------------------------------------------
  //   - AddGP: New primitive is added in last position in the primitive list.
  //   - RemoveGP: The removed primitive is not destroyed by the method.
  //   - Modify: Changes the <num_gp> gp with <new_gp>, which has <new_att>
  //     for graphical attribute. If <new_att> is NULL, the old graphical
  //     attribute is kept. If <new_att> is valid it is duplicated inside the
  //     representation. Deletion of the method parameter is to be made by the
  //     user. The <old_gp> is not destroyed by the method.

  /** Replaces a graphic primitive in the list of managed graphic primitives.
   * @param iOldGraphicPrimitive
   * The graphic primitive to be removed.
   * The caller must delete the graphic primitive.
   * @param iNewGraphicPrimitive
   * The graphic primitive to be inserted.
   * The caller must not delete the graphic primitive.
   * @param iNewGraphicAttribut
   * The graphic attributes of <tt>iNewGraphicAttribut</tt>.
   * If NULL, the graphic attributes of <tt>iOldGraphicPrimitive</tt> are kept unchanged.
   * If not, the caller must delete the the graphic attributes.
   *
   * Warning: Show/NoShow attribute is not handled at Graphical primitive level
   * (ie. you can not mix shown and hidden primitives). Therefore, always use 
   * shown primitives, and use the rep's graphic attribute to show/hide the entire rep.
   */
  virtual void Modify(CATGraphicPrimitive    * iOldGraphicPrimitive,
                      CATGraphicPrimitive    * iNewGraphicPrimitive,
                      CATGraphicAttributeSet * iNewGraphicAttribut);

  
  /** Returns the number of managed graphic primitives. */
  virtual int GetGPSize() const;

  /** Returns a graphic primitive from the list of managed graphic primitives.
   * @param iIndex
   * Index value in the list of managed graphic primitives.
   * Legal values are [0,<tt>GetGPSize()</tt>-1].
   */
  virtual CATGraphicPrimitive * GetGP(const int iIndex) const;

  /** Returns the graphic attributes associated with a managed graphic primitive.
   * Do not delete the returned graphic primitive.
   * @param iIndex
   * Index value in the list of managed graphic primitives.
   * Legal values are [0,<tt>GetGPSize()</tt>-1].
   */
  virtual CATGraphicAttributeSet & GetAttribut(const int iIndex) const;

  /** Sets the pick mode of the representation.
   *<br><b>Role</b>:
   * the pick mode is propagated to the enclosed graphical primitives.
   * @param iPickMode
   * <ol>
   *<li> 0 : representation is pickable </li>
   *<li> 1 : representation is not pickable </li>
   * </ol>
   */
  virtual void SetPickMode(unsigned int iPickMode);

  /** @nodoc */
  virtual void UpdateTextureCoordinates(CATMappingOperator* iOperator = NULL);
    
  /** @nodoc */
  virtual void DrawShading (CATRender & iRender, int iInside);

  /** @nodoc */
  virtual void DrawPath    (CATRender & iRender, int iInside, CATRepPath & iRepPath);
   
  /** 
   * @nodoc
   *Returns the outline builder of the representation.
   * The representation retains ownership of the outline builder. Do not delete it.
   */
  virtual CATOutlineBuilder * GetOutlineBuilder(); 

   /** @nodoc */
  virtual CATGraphicPrimitive* GetGeomElement(int iIndice);
    
protected:

  /** @nodoc */
  void IncreaseLists(int iSizeIncrement);
  
  /** @nodoc */
  static unsigned int GetKey(void*);
  
  /** @nodoc */
  static int Compare(void*, void*);
    
  int _mem_size;                  // size increment.
  int _size;                      // size of list of graphic primitives.
  CATGraphicPrimitive    ** _gp;  // the list of graphic primitives.
  CATGraphicAttributeSet ** _att; // the list of associated graphic attributes.

  CATOutlineBuilder *_builder;
};

#endif // CAT3DCustomRep_H
