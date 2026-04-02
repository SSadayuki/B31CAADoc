#ifndef CAT2DCustomRep_H
#define CAT2DCustomRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */



#include "CATViz.h"
#include "CAT2DRep.h"

class CATGraphicPrimitive;
class CATGraphicAttributeSet;



/** 
*Class to manage a collection of 2D graphic primitives with different graphic attributes. 
* <b>Role</b>:
*	The primitives that are being added to the representation are not copied
*	within it. The graphical attributes are copied inside the representation.
*/
class ExportedByCATViz CAT2DCustomRep : public CAT2DRep
{
  friend class CATDmuStream2DCustomRep;
  friend class CATVrml2Maker2DCustomRep;
  friend class CATVrmlMaker2DCustomRep;
  CATDeclareClass;
 
  public:
    
/** 
* Contructs an empty 2D custom representation. 
*/
    CAT2DCustomRep (void);

/** Contructs a 2D custom representation with one graphic primitive.
* @param iGraphicPrimitive
* The primitive
* (It is not copied inside the representation).
* @param iGraphicAttribut
* The graphic attributes of <tt>iGraphicPrimitive</tt>.
*/
    CAT2DCustomRep (CATGraphicPrimitive *iGraphicPrimitive, const CATGraphicAttributeSet &iGraphicAttribut);

    virtual ~CAT2DCustomRep (void);

/** 
* @nodoc : deprecated constructor.
*/
	CAT2DCustomRep(list<CATGraphicPrimitive> &gp,list<CATGraphicAttributeSet> &att);
     

/** Adds a graphic primitive to the list of managed graphic primitives.
* @param iGraphicPrimitive
* The primitive to be added.
* (It is not copied inside the representation).
* @param iGraphicAttribut
* The graphic attributes of <tt>iGraphicPrimitive</tt>.
*/
    virtual void AddGP     (CATGraphicPrimitive *iGraphicPrimitive, const CATGraphicAttributeSet &iGraphicAttribut);

/** Removes a graphic primitive from the list of managed graphic primitives.
* @param iGraphicPrimitive
* The primitive to be removed. The caller must delete the graphic primitive.
*/
    virtual void RemoveGP  (CATGraphicPrimitive *iGraphicPrimitive);

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
*/
    virtual void Modify    (CATGraphicPrimitive *iOldGraphicPrimitive,
			    CATGraphicPrimitive *iNewGraphicPrimitive,
			    CATGraphicAttributeSet *iNewGraphicAttribut);


/** Returns a graphic primitive from the list of managed graphic primitives.
* @param iIndex
*	Index value in the list of managed graphic primitives.
*	Legal values are [0,<tt>GetGPSize()</tt>-1].
*/
    virtual CATGraphicPrimitive    *GetGP       (const int iIndex) const;


/** Returns the graphic attributes associated with a managed graphic primitive.
* Do not delete the returned graphic primitive.
* @param iIndex
* Index value in the list of managed graphic primitives.
* Legal values are [0,<tt>GetGPSize()</tt>-1].
*/
    virtual CATGraphicAttributeSet &GetAttribut (const int iIndex) const;

/** Returns the number of managed graphic primitives. */
    virtual int GetGPSize (void) const;
    
#ifdef CATIAV5R26
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

/**
* @nodoc .
*/
    virtual void DrawShading (CATRender &,int);

/**
* @nodoc .
*/
	virtual CATGraphicPrimitive* GetGeomElement(int iIndice);
    
    
  protected:
  
/**
* @nodoc .
*/
    void IncreaseLists (int size_to_add);
   
/** @nodoc */
    int _mem_size;
/** @nodoc */
    int _size;
/** @nodoc */
    CATGraphicPrimitive    **_gp;
/** @nodoc */
    CATGraphicAttributeSet **_att;
    
    
  private:
    
};


#endif 









