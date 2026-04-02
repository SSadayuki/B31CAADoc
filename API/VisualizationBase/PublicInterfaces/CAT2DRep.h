#ifndef CAT2DRep_H
#define CAT2DRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"
#include "CATRep.h"
#include "CAT2DBoundingBox.h"
 
class CATVisuController;
class CATStreamer;


/**
 * Class to create a 2D representation of an application object.
 * <b>Role</b>: This class is the base class for all 2D representation classes,
 * necessary to visualize application objects.
 */
class ExportedByCATViz CAT2DRep : public CATRep
{
  CATDeclareClass;

  public:
    
/**
* Constructs a representation.
*/
    CAT2DRep (void);

/** 
* @nodoc : deprecated constructor. 
*/
    CAT2DRep (CATModelIdentificator &iIdent,CATVisuController *iCntl=NULL);
    virtual ~CAT2DRep (void);
    
/**
* Sets the bounding element of the 2D representation.
* @param iBoundingElement
*	The bounding element of the 2D representation.
*/
    void SetBoundingElement                     (const CAT2DBoundingBox & iBoundingElement);

/**
* Add a bounding element to the 2D representation.
* In fact, this method computes a new bounding element which contains the bounding
* element of the representation and the bounding element to be added to the repsentation.
* This new bounding element is the shortest one that it is possible to create.
* @param iBoundingElement
*	The bounding element to be added to the 2D representation.
*/
    virtual void AddBoundingElement             (const CAT2DBoundingBox & iBoundingElement);

/**
* Returns the bounding element of the 2D representation.
*/
    inline const CAT2DBoundingBox & GetBoundingElement (void) const {return (  _the_Be2d);} ;

/**
* Returns the bounding element of the 2D representation.
*/
    const CAT2DBoundingBox & GetBoundingElement (void);

#if defined (_IRIX_SOURCE) || defined (_WINDOWS_SOURCE)
/**
* Returns the bounding element pointer ...
*/
    inline CATBoundingElement * GetBoundingCube (void);
#endif

/**
* Reset the bounding element of the 2D representation.
*/
    void ResetBoundingElement                   (void);
    
  /**
    *    @nodoc
    *    Compute the BE for the noshow space
    */
  virtual const CAT2DBoundingBox &GetNoshowBoundingElement (int & ioIsOneRepNoshow) ;

  /**
    * @nodoc
    *    Compute the BE for the noshow space
    */
  virtual const CAT2DBoundingBox &GetShowBoundingElement () ;

 /**
   *   Sets the bounding element of the current graphical representation as invalid. 
   *   That means that its bounding element is not right and should be computed when
   *   necessary. This information is send up to its fathers, so that they are warned 
   *   that one of their children is invalid. And as a consequence fathers are also invalid.
   *  And so on till we reach the root of the graphical tree.
   */
   void SetInvalid();

 /**
   * Returns whether or not the bounding element is invalid.
   */
   int IsInvalid();

 /** 
   * @nodoc 
   * Saves the representation data in a stream.
   * @param oStream
   * Stream in which to save the representation data.
   * @param iSaveType
   *
   */
   virtual void Stream(CATStreamer & oStream, int iSaveType = 0);

 /** 
   * @nodoc 
   * Restores the representation data from a stream.
   * @param iStream
   * Stream from which the representation data is restored.
   */
   virtual void UnStream(CATStreamer & iStream);

 /** 
   * @nodoc
   * Returns the outline builder of the representation.
   * The representation retains ownership of the outline builder. Do not delete it.
   */
   
  protected:
    
/**
* nodoc.
*/
    int OkToDraw (CATRender &render,int *inside);
    
    
  protected:
/**
* @nodoc.
*/  
    CAT2DBoundingBox   _the_Be2d;

};

#if defined (_IRIX_SOURCE) || defined (_WINDOWS_SOURCE)
inline CATBoundingElement *CAT2DRep::GetBoundingCube (void)
{
    return (CATBoundingElement *) &_the_Be2d;
}
#endif

#endif
