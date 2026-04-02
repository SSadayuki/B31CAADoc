

#ifndef CATIPrtBooleanOperation_H
#define CATIPrtBooleanOperation_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include <PartItf.h>
#include <CATBaseUnknown.h>
#include <CATISpecObject.h> 
#include <CATLISTV_CATISpecObject.h>

class CATBody_var;
class CATUnicodeString;
//-----------------------------------------------------------------------------
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtBooleanOperation;
#else
extern "C" const IID IID_CATIPrtBooleanOperation;
#endif

/**
* Class to define methods relative to boolean operations.
* <b>Role</b>: A boolean operation is an operation between two mechanical
* bodies. It inserts the second body after the last feature of
* the first body, the first body may have no feature.
*/

class ExportedByPartItf CATIPrtBooleanOperation : public CATBaseUnknown
{
  CATDeclareInterface;
public:
  /**
  * Returns the tool of a boolean operation. 
  * @return The object linked to the  second body.
  * Note that the remove lump operation has no tool 
  * (result = NULL_var).
  */  
  virtual CATISpecObject_var GetTool() = 0 ;
  /**
  * Returns the first operated body.
  * @return The body.
  */   
  virtual CATBody_var        GetFirstOperand() = 0 ;
  /**
  * Returns the second operated body.
  * @return The body.  Note that the remove lump operation
  * has no second body (result = NULL_var).
  */
  virtual CATBody_var        GetSecondOperand() = 0 ;
  /** @nodoc */
  virtual CATISpecObject_var GetSpecFirstOperand() = 0 ;
  /** @nodoc */
  virtual CATISpecObject_var GetSpecSecondOperand() = 0 ;   
  /** @nodoc */
  virtual void GetFaces(const CATUnicodeString &iAttribute, CATLISTV(CATISpecObject_var) &oList ) = 0 ;
  /** @nodoc */ 
  virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ListOfModifiedFeatures) = 0;

  /**
  * Modifies the First Operand.
  * input Volume to replace
  */ 
  virtual HRESULT ModifyFirstOperatedVolume(CATISpecObject_var& iSpecObject) = 0;

  /**
  * Modifies the Second Operand.
  * input object to repalce with Body or Volume
  */ 
  virtual HRESULT ModifyOperatedObject(CATISpecObject_var& iSpecObject) = 0;

  /**
  * Swaps the operands. Both the Operands must be Volume.
  * This is available only for Volume Add and Volume UnionTrim Operations
  */ 
  virtual HRESULT SwapOperatedVolume() = 0;

  /** @nodoc */
  virtual int GetBooleanContext() = 0;

 };

CATDeclareHandler ( CATIPrtBooleanOperation, CATBaseUnknown );

#endif








