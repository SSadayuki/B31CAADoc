// COPYRIGHT Dassault Systemes Provence 2007
//===================================================================
//
// CATICldCAABooleanOper.h
// Define the CATICldCAABooleanOper interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
#ifndef CATICldCAABooleanOper_H
#define CATICldCAABooleanOper_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

class CATCldBody ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAABooleanOper;
#else
extern "C" const IID IID_CATICldCAABooleanOper ;
#endif

//------------------------------------------------------------------

class ExportedByCATCloudEditorInterfaces CATICldCAABooleanOper: public CATBaseUnknown
{

  CATDeclareInterface ;

public:

 /**
   * Sets the first operand on which the boolean operation is performed.  
   * @param iCldBody
   *   The first operand.
   * @param iOrientation
   *   The first orientation.
   */
  virtual HRESULT SetFirstOperand (CATCldBody * iCldBody, const boolean iOrientation) = 0 ;

  /**
   * Sets the second operand on which the boolean operation is performed.  
   * @param iCldBody
   *   The second operand.
   * @param iOrientation
   *   The second orientation.
   */
  virtual HRESULT SetSecondOperand (CATCldBody * iCldBody, const boolean iOrientation) = 0 ;

  /**
   * Runs the operator and performs the operation requested between the two operands.
   */
  virtual HRESULT Run () = 0 ;

  /**
   * Returns a pointer to the resulting CATCldBody.
   * <br> Must be called after the <tt>Run</tt> method.
   * @return
   * The pointer to the resulting body. Use @href CATICGMContainer#Remove if you do not want to keep it.
   */
   virtual CATCldBody * GetResult () = 0 ;

};

CATDeclareHandler (CATICldCAABooleanOper, CATBaseUnknown) ;

#endif
