#ifndef CATITypeDictionaryListener_h
#define CATITypeDictionaryListener_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
// inherited class 
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

// load module
#include "CATLifSpecs.h"
#include "CATIInstance.h"

// OLE IID
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATITypeDictionaryListener;
#else
extern "C" const IID IID_CATITypeDictionaryListener;
#endif


/**
 * Interface dedicated to monitor the changes on a dictionary.
 *
 * @see CATIType
 * @see CATITypeDictionary
 */

class ExportedByCATLifSpecs CATITypeDictionaryListener : public CATBaseUnknown
{
public:
	/**
    * @nodoc
 	* Called whenever an instance is created from a type.
	*
	* @param iType Type of the instance.
	* @param iInstance Created instance.
	*/
	virtual HRESULT Instanciated( const CATIType_var &iType,
								  const CATIInstance_var &iInstance) = 0;

	/**
    * @nodoc
 	* Called whenever a type is added to the dictionary.
	*
	* @param iType Added type.
	*/
	virtual HRESULT TypeAdded( const CATIType_var &iType ) = 0;
	
	/**
    * @nodoc
	* Called whenever a type is modified.
	*
	* @param iType Modified type.
	*/
	virtual HRESULT TypeUpdated(const CATIType_var & iType ) = 0;

	/**
    * @nodoc
 	* Called whenever a type is removed from the dictionary.
	*
	* @param iType Removed type.
	*/
	virtual HRESULT TypeRemoved( const CATIType_var &iType ) = 0;
	
	/**
    * @nodoc
 	* Called whenever a method is added to the dictionary.
	*
	* @param iMethod Added method.
	*/
	virtual HRESULT MethodAdded( const CATBaseUnknown_var &iMethod ) = 0;
	
	/**
    * @nodoc
 	* Called whenever a method is removed from the dictionary.
	*
	* @param iType Removed method.
	*/
	virtual HRESULT MethodRemoved( const CATBaseUnknown_var &iMethod ) = 0;

	/**
    * @nodoc
 	* Called to synchronize the dictionary description whenever asked by dictionary.
	*/
	virtual HRESULT MustBeSynchronized() = 0;
	
private:
  CATDeclareInterface;
}; 

CATDeclareHandler(CATITypeDictionaryListener, CATBaseUnknown);

#endif
