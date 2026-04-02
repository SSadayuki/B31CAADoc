// COPYRIGHT Dassault Systemes 2007

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIDrwDimSystem_H
#define CATIDrwDimSystem_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"

#include "CATDimSystemDefinition.h"
#include "CATBoolean.h"

class CATListValCATBaseUnknown_var;
class CATMathPoint2D;
class CATIDrwDimDimension;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimSystem;
#else
extern "C" const IID IID_CATIDrwDimSystem;
#endif

//------------------------------------------------------------------

/**
* Interface to manage the life cycle of dimensions used by the dimension system.
* <p>
* Refer to CATIDrwStackedDimSystem or CATIDrwCumulatedDimSystem to manage the properties of the dimension system.
* Refer to CATIDftElementInSystem to retrieve a dimension system from a dimension
* @see CATIDrwStackedDimSystem
* @see CATIDrwCumulatedDimSystem
* @see CATIDftElementInSystem
*/
class ExportedByDraftingItfCPP CATIDrwDimSystem: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  

/**
* Creates and adds a dimension in the list handled by the system.
*  <br><b>Postcondition</b> Don't forget to use LineUp method at the end of dimension system creation to take into account the line up parameters.
* @param <tt>ipDimElement</tt>
* [in] new element to dimension
* @param <tt>opDim</tt>
* [out] the created dimension
* @param <tt>ipSelPoint</tt>
* [in] a 2D point to resolve ambiguity in some cases
* @param <tt>iComplementaryAngle</tt>
* [in] available for angle dimension. if iComplementaryAngle=TRUE, 
* the dimension will be created with a complementary sector ( value > CATPI)
* @param <tt>iAssociativityMode</tt>
* [in] is the dimension associative or not
*/
  virtual HRESULT AddDimension(CATBaseUnknown * ipDimElement, CATIDrwDimDimension * &opDim, CATMathPoint2D  * ipSelPoint=NULL, CATBoolean iComplementaryAngle=FALSE, int iAssociativityMode=1) = 0;

/**
* Removes (no destruction) a dimension from the list handled by the system.
* @param <tt>ipDimension</tt>
* [in] dimension to remove from the list of dimensions
*/
  virtual HRESULT RemoveDimension(CATBaseUnknown * ipDimension) = 0;
  
/**
* Gets the whole list of dimensions handled by the system.
* @param <tt>ipDimList</tt>
* [out] list of dimensions handled by the system
*/
  virtual HRESULT GetDimensionsList(CATListValCATBaseUnknown_var &opDimList) = 0;

/**
* Gets the type of the dimension system
* @param <tt>opSystemType</tt>
* [out] type of the system (ChainedDimSystem, StackedDimSystem, CumulatedDimSystem, ...)
*/
  virtual HRESULT GetSystemType(CATDrwDimSystemType &opSystemType) = 0;


/**
* Gets the master dimension of the dimension system.
* The master dimension is the dimension to move for 
* dimension system moving. the dimension must be updated
* to take into account its modification, then LineUp method
* must be executed to propagate the moving for all others dimensions of
* the dimension system.
* @param <tt>opmasterDim</tt>
* [out, CATBaseUnknown#Release] The master dimension
*/
  virtual HRESULT GetMasterDimension(CATIDrwDimDimension **opMasterDim) = 0;

/**
* To ask for the dimensions in the system to be aligned.
*   @param iSubPart
*    Defines which part of the dimensions should be aligned
*    <br>  1 = Value
*    <br>  2 = Dimension line 
*    <br>  3 = Both dimension line and value
* @return
* <dt><tt>S_OK</tt> <dd>The line up operation is successful.
* <dt><tt>S_FALSE</tt> <dd>The line up is already done.
* <dt><tt>E_FAIL</tt> <dd>if the operation failed.
*/
  virtual HRESULT LineUp(const int iSubPart) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};
CATDeclareHandler(CATIDrwDimSystem, CATBaseUnknown);

#endif
