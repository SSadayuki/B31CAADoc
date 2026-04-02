// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATISamLayoutOperator
//
//===================================================================
//
// Usage notes:
//   Use this interface to align and distribute Images.
//
//===================================================================
// April 2005 Creation                                  O.Franks
//===================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

#ifndef CATISamLayoutOperator_H
#define CATISamLayoutOperator_H

#include "CATBaseUnknown.h"

#include "CATSamImagesLayoutDirection.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamLayoutOperator ;

//------------------------------------------------------------------

/**
 * Layout of Analysis Images.
 * <b>Role: </b> Align and distribute Images. <br>
 * Create this interface by using CATSamImagesOperatorFactory, supplying <br>
 * a list of Images to arrange.
 * @see CATSamImagesOperatorFactory
 */
class ExportedByCATSamVisuUUID CATISamLayoutOperator: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
    * Perform the layout operation.
    * @param iDistance
    * The distance from head to head of images. You can use GetDefaultDistance<br>
    * to calculate a good distance.
    * @param iDir
    * The direction along which to distribute the images.
    * @see CATSamImagesLayoutDirection
    */
  virtual HRESULT Arrange ( const float iDistance, const CATSamImagesLayoutDirection iDir ) = 0;
  
  /**
    * Restore the original positions of the images of when this operator was created.
    */
  virtual HRESULT RestorePositions () = 0;

  /**
    * Calculate a good distance.
    */
  virtual HRESULT GetDefaultDistance ( float & oDistance ) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATISamLayoutOperator, CATBaseUnknown);
#endif
