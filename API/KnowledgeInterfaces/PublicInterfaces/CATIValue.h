#ifndef CATIValue_h
#define CATIValue_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

//System 
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

// load module
#include "CATLifSpecs.h"

// OLE IID
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATIValue;
#else
extern "C" const IID IID_CATIValue;
#endif

class CATIValue_var;

/**
 * Interface dedicated to the management of values.
 */
class ExportedByCATLifSpecs CATIValue : public CATBaseUnknown
{
public :
	/**
	* Returns the status of the value.
	*
 	* @return TRUE if the value is set, else FALSE.
	*/
	virtual boolean GetIsSet () const = 0;
	
	/**
 	* Unsets the value.
	*/
	virtual void  Unset ()  = 0;  
	
	/**
 	* Returns the writability of the value.
	*
	* @return TRUE is read-only, else FALSE.
	*/
	virtual boolean GetReadOnly () const = 0;
	
	/**
 	* Sets the writability of the value.
	*
	* @param iReadOnly TRUE to set read-only, FALSE to set the value writable.
	*/
	virtual void    SetReadOnly (const boolean iReadOnly ) = 0; 
	
	/**
 	* Returns the constantness of the value.
	*
	* @return TRUE if constant, else FALSE.
	*/
	virtual boolean GetConst () const = 0;
	
	/**
 	* Sets the constantness of the value.
	*
	* @param iConst TRUE to set to constant, else FALSE.
	*/
	virtual void    SetConst (const boolean iConst) = 0; 
	
	/**
    * Returns a string showing the value (example : "3mm").
	*
	* @return a string.
	*/
	virtual CATUnicodeString  Show    () const =0; 

	/**
    * @nodoc
    * Converts the value to an integer.
	*
	* For enum values (including booleans), it returns the rank.<br>
	* For real values, it converts their value to the nearest lower integer.<br>
	*/
	virtual int AsInteger () const =0;
	/**
	* Converts the value to an integer.
	*
	* For enum values (including booleans), it returns the rank.<br>
	* For real values, it converts their value to the nearest lower integer.<br>
	*/

	virtual HRESULT AsInteger (int& oValue) const =0;

	/**
    * @nodoc
	* Converts the value to a double.
	*
	* For enum values (including booleans), it returns the rank.<br>
	* For dimensions, it returns their value in MKS system !
	*/
	virtual double AsReal    () const =0;
	
    /**
	* Converts the value to a double.
	*
	* For enum values (including booleans), it returns the rank.<br>
	* For dimensions, it returns their value in MKS system !
	*/
	virtual HRESULT AsReal    (double& oValue) const =0;

	/**
    * @nodoc
	* Converts the value to a string.
	*
	* For enum types (including booleans), it returns the string corresponding to the rank.
	*/
	virtual CATUnicodeString    AsString  () const =0;

	/**
	* Converts the value to a string.
	*
	* For enum types (including booleans), it returns the string corresponding to the rank.
	*/
	virtual HRESULT    AsString  (CATUnicodeString& oValue) const =0;

	/**
    * @nodoc
	* Converts the value to a boolean (for boolean values only).
	*/
	virtual boolean   AsBoolean () const =0;
	/**
	* Converts the value to a boolean (for boolean values only).
	*/
	virtual HRESULT   AsBoolean (boolean& oValue) const =0;

	/**
    * @nodoc
	* Converts the value to an object reference (useful for complex values).
	*/
	virtual CATBaseUnknown_var   AsObject () const =0;
	/**
	* Converts the value to an object reference (useful for complex values).
	*/
    virtual HRESULT   AsObject (CATBaseUnknown_var& oValue) const =0;


	/**
	* Compares two values (taking tolerance into account for numerical values).
	*
	* @param iValue Value to be compared to the current one.
	* @return TRUE if equal, else FALSE.
	*/
	virtual boolean  Compare (const CATIValue_var &iValue) const = 0;

private:
  CATDeclareInterface;
}; 

CATDeclareHandler(CATIValue, CATBaseUnknown);

#endif
