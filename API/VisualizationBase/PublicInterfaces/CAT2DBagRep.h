#ifndef CAT2DBagRep_H
#define CAT2DBagRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */




#include "CATViz.h"
#include "CAT2DRep.h"


class CAT3x3Matrix;



/**
* Class to create a representation of a 2D bag.
* <b>Role</b>:
* This object is the main tool for the definition of a representation tree.
* It manages a list of children representations, and a position matrix, thus
* defining a complete spatial graph node.<br>
* The CAT2DBagRep has to be created empty, then children can be added or
* removed using the AddChild and RemoveChild methods. There's no control on
* the way children are being added or removed. Caution has to be taken in
* order to avoid the definition of cycles.
*/
class ExportedByCATViz CAT2DBagRep : public CAT2DRep
{
  
  friend class CATDmuStream2DBagRep;
  friend class CATVrml2Maker2DBagRep;
  friend class CATVrml2Maker2DBagRep;

  CATDeclareClass;
  
  
  public:
 
    
/**
* Constructs a representation.
*/
    CAT2DBagRep (void);

/**
* @nodoc : deprecated constructor.
*/
    CAT2DBagRep (CATModelIdentificator &iId,CATVisuController *ctrl=NULL);

    virtual ~CAT2DBagRep (void);

/** Removes (not deletes) all the children of the bag. */
    virtual void Empty();

/**
* Deletes the representation.
* The standard destructor for this object won't destroy the children,
* because there may be more than one reference on them. To effectively
* perform the destruction of the rep's children, use this method.
*/
    virtual void Destroy (void);
    
/**
* Computes the bounding element of the bag rep.
* With this method, bounding elements of father's bagreps are computed too.
*/    
    virtual void ComputeBoundingElement (int iShowSpace = 1);
    

/**
* Returns the matrix of the 2D bag representation.
*/
    const CAT3x3Matrix *GetMatrix (void) const;

/**
* Sets the matrix of the 2D bag representation.
*/
    void SetMatrix (const CAT3x3Matrix &iMath);

/**
* Resets the matrix of the 2D bag representation.
*/
    void ResetMatrix (void);
    

/**
* Adds a 2D representation in the 2D bag representation.
*	@param iRep
*		The 2D representation to add in the bag representation.
*/    
    virtual HRESULT AddChild     (CATRep &iRep);

/**
* Removes a representation in the 2D bag representation.
*	@param iRep
*		The representation to remove in the bag representation.
*/
    virtual void RemoveChild  (CATRep &iRep);

/**
* Removes a representation in the 2D bag representation but does not compute the new bounding element.
*	@param iRep
*		The representation to remove in the bag representation.
*/
    virtual void RemoveChildren  (CATRep &iRep);

/**
* Returns a list of representations which are in the 2D bag represenation.
*/
    list<CATRep> *GetChildren (void);
    

/**
* @nodoc .
*/
    virtual void Draw (CATRender &render,int inside);
/**
* @nodoc .
*/
    virtual void DrawShading (CATRender &ioRender,int iInside);
/**
* @nodoc .
*/
    virtual void DrawPath    (CATRender &ioRender,int,CATRepPath &ioPath); 	
/**
* @nodoc .
*/
    virtual int  IsOkToDraw  (CATRender &ioRender,int iInside);    
    
/** @nodoc : deprecated method. */
    virtual void SortGraphicAttributeSet (void);

/**
* Sets the highlight mode of the representation.
* @param iHighlightMode
* <br><b><Legal Values</b>:
* <ol>
*<li> 0 :  none</li>
*<li> 1 :  highlight</li>
* </ol>
* @param iPropagationMode
* <br><b><Legal Values</b>:
* <ol>
*<li> 0 :  just sets the highlight mode of the 2D bag representation </li>
*<li> 1 :  sets the highlight mode of the 2D bag representation and
*		   propagates this highlight mode to all representations which are in the bag
*		   representation.</li>
* </ol>
* The default value is 0;
*/
    virtual void SetHighlightMode (int iHighlightMode,int iPropagationMode=0);

/**
* Sets the show mode of the representation.
* @param iShowMode
* <br><b><Legal Values</b>:
* <ol>
*<li> 0 :  show</li>
*<li> 1 :  noshow</li>
* </ol>
* @param iPropagationMode
* <br><b><Legal Values</b>:
* <ol>
*<li> 0 :  just sets the show mode of the 2D bag representation </li>
*<li> 1 :  sets the show mode of the 2D bag representation and
*		   propagates this show mode to all representations which are in the bag
*		   representation.</li>
* </ol>
* The default value is 0;
*/
    virtual void SetShowMode (int iShowMode,int iPropagationMode=0);
  


    /** @nodoc */
  // Compute the BE for the Noshow space
  const CAT2DBoundingBox &GetNoshowBoundingElement(int & ioIsOneRepNoshow);

  /** @nodoc */
  // Compute the BE for the Show space
  const CAT2DBoundingBox &GetShowBoundingElement();

  protected:
/**
* Updates the bounding element of the bag rep when one son bounding element has changed.
* @param iBe 
*	the bounding element to update tba bagrep's bouding element.
*/ 
  virtual void UpdateBoundingElement(const CAT2DBoundingBox &iBe); 

    CAT3x3Matrix *_the_MatPosi;
    list<CATRep>  _the_Son_List;    
    
  private:

  /** @nodoc */
  //CAT2DBagRep (const CAT2DBagRep &);
  /** @nodoc */
  //CAT2DBagRep & operator = (const CAT2DBagRep &);
};

#endif
