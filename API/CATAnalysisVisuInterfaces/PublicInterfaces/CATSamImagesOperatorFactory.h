#ifndef CATSamImagesLayout_h
#define CATSamImagesLayout_h
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
//
// CATSamImagesOperatorFactory : create layout and animation operators 
//
//=============================================================================
// April 2005 Creation                                           O.Franks
//=============================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATSamVisuImpl.h"

// prereqs  System
#include "CATListOfCATBaseUnknown.h"

class CATISamLayoutOperator_var;
class CATISamAnimationOperator_var;

/**
 * Factory methods to create image operators.
 */
class ExportedByCATSamVisuImpl CATSamImagesOperatorFactory
{
  public:

  /**
    * Create a Layout Operator. <br>
    * Use this method to create an operator that can perform layout operations.
    * @param iImagesList
    * The images you want to arrange.
    * @param oOperator
    * The operator itself.
    */
    static HRESULT CreateLayoutOperator (CATLISTV(CATBaseUnknown_var) &	iImagesList, 
										                     CATISamLayoutOperator_var 	  & oOperator);

  /**
    * Create an Animation Operator. <br>
    * Use this method to create an operator that can launch animation of images.
    * @param iImagesList
    * The images you want to animate. The images should be visible.
    * @param oOperator
    * The operator itself.
    */
    static HRESULT CreateAnimationOperator (CATLISTV(CATBaseUnknown_var) &	iImagesList,
										                        CATISamAnimationOperator_var &  oOperator);

};
#endif
