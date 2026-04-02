#ifndef CATICkeInst_h
#define CATICkeInst_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3 
 */
// module declaration
#include "KnowledgeItf.h"

#include "CATBaseUnknown.h"
//#include "CATISpecObject.h"
#include "CATICkeForwards.h"

// OLE iid 
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeInst;
#else
extern "C" const IID IID_CATICkeInst;
#endif

/**   
 * Interface dedicated to parameters value management such as convertion from units to simple types and comparison of values.
 * <b>Role</b>: A parameter value is a union between simple types of values. This class presents a sets of methods
 *  that enable the convertion between parameter values and simple types.
 * (integer, double, boolean, and CATUnicodeString) <br> 
 * @see CATICkeParm, CATICkeType
 */
//-----------------------------------------------------------------------------
class ExportedByKnowledgeItf CATICkeInst : public CATBaseUnknown
{

public :

/**
 * Returns way of seeing a value.
 * (example : "3mm").
 */
virtual CATUnicodeString  Show    () const =0; 

/**
 * Returns the type of the value.
 * (example : Integer, Angle, etc...) <br>
 */
virtual CATICkeType_var Type    () const =0;



/**
 * Converts the value to an integer.<br> 
 *               enum values  (including booleans) returns rank<br>
 *               real values returns their value converted in integer<br>
 *               integer values return value
 */
virtual int AsInteger () const =0;

/**
 * Converts the value to a double.<br>
 *               enum values  (including booleans) returns rank<br>
 *               real values and integer return their value <br>
 *               dimensions return their value IN SI units !!!!!
 */
virtual double AsReal    () const =0;

/**
 * Converts the value to a string.<br>
 *               string values return their value<br>
 *               enum types (including booleans) values return their value
 */
virtual CATUnicodeString    AsString  () const =0;

/**
 * Converts the value to a boolean (for boolean values only).
 */
virtual CATCke::Boolean   AsBoolean () const =0;

/**
 * Compares two values from their content.
 * (taking tolerance (epsilon) into account
 * @param   iValue value to be compared
 * @return <b>Legal values</b>:
 * <tt>CATCke::True</tt> if comparison Ok.
 * <tt>CATCke::False</tt> if comparison Ko.
 */
virtual CATCke::Boolean  Compare (const CATICkeInst_var &iValue) const = 0;

/**
 * Converts the value to an object reference.
 */
virtual CATBaseUnknown_var   AsObject () const =0;

/**
 * Returns value as it is stored in the model.
 */
virtual double   AsStored () const =0;

private:
  
  // 2 define ClassName
  CATDeclareInterface;

}; 

CATDeclareHandler(CATICkeInst, CATBaseUnknown);

#endif
