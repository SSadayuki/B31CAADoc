#ifndef CATAttributeInfos_h
#define CATAttributeInfos_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/*  CAA2Reviewed */

#include "CATLifSpecs.h"
#include "CATUnicodeString.h"
#include "CATIType.h"

/**
* Class to be used to define attributes of CATIType .
*
* @see CATIType
* @see CATITypeDictionary#CreateType
* @see CATIInstance
*/

class ExportedByCATLifSpecs CATAttributeInfos {
public:
	/** copy constructor */
	CATAttributeInfos( const CATAttributeInfos& iInfos );

	/**
	* Constructor.
	*
	* @param iType            Type the attribute is added to.
	* @param iName            Internal name of the attribute.
	* @param iNLSName         NLS (user) name of the attribute.
	* @param isWriteable      TRUE if the attribute can be modified, else FALSE. Default is TRUE.
	* @param isComponent      TRUE if the attribute contains a component. If TRUE,
	*                         the component's owner should be the owner of the attribute, and its
	*                         name the attribute name. Default is FALSE.
	* @param isVisible        TRUE if the attribute is visible by the user, else FALSE. Default is TRUE.
	* @param iAttributeAccess Only Use the Default Value = "".<br>
	*						  (Name of the CATIAttributeAccess implementation class used to
	*                         valuate the attribute. It is used by the default implementation of
	*                         @href CATIInstance#GetValue and @href CATIInstance#SetValue to
	*                         actually get/set the attribute value. It is necessary when two CATIInstance
	*                         implementations, whose types derive one from another, don't derive one from
	*                         another.<br>
	*                         Default is "".
	*/
	CATAttributeInfos( const CATIType_var& iType,
					   const CATUnicodeString& iName,
					   const CATUnicodeString& iNLSName,
					   const boolean isWriteable = 1,
					   const boolean isComponent = 0,
					   const boolean isVisible = 1,
					   const CATUnicodeString& iAttributeAccess = "");

	/** destructor */
	~CATAttributeInfos();

	/**
	* Returns the type the attribute belongs to.
	*
	* @return a type.
	*/
	CATIType_var Type() const;

	/**
	* Returns the internal name of the attribute.
	*
	* @return a string.
	*/
	CATUnicodeString Name() const;

	/**
	* Returns the NLS name of the attribute.
	*
	* @return a string.
	*/
	CATUnicodeString NLSName() const;

	/**
	* @nodoc to be suppressed
	* Sets the NLS name of the attribute.
	*
	* @return void.
	*/
	void SetNLSName(const CATUnicodeString &iNlsName);

	/**
	* Returns the visibility of the attribute.
	*
	* @return TRUE if visible, else FALSE.
	*/
	boolean IsVisible() const;

	/**
	* Returns the writability of the attribute.
	*
	* @return TRUE if writable, else FALSE.
	*/
	boolean IsWritable() const;

	/**
	* Returns the aggregability of the attribute.
	*
	* @return TRUE if it an aggregation, else FALSE.
	*/
	boolean IsComponent() const;

	/**
	* Do Not Use this method.
	* Returns the name of the CATIAttributeAccess implementation.
	* @return a string.
	*/
	const CATUnicodeString& GetAttributeAccess() const;

	/** Operator to compare equality. */
	boolean           operator==(const CATAttributeInfos& iInfos ) const;

	/**  Operator to compare difference. */
	boolean           operator!=(const CATAttributeInfos& iInfos ) const;

	/**  Operator to affect a value. */
	CATAttributeInfos &operator=(const CATAttributeInfos& iInfos ) ;

	/**
	* Returns the dynamicity of the attribute. Default value is FALSE.
	*
	* @return TRUE if it is a dynamic attribute, FALSE instead 
	*/
	boolean IsDynamic() const;
	/**
	* Indicates if the attribute is dynamically added on an object. 
	*/
	void    SetDynamic() ;


private:
	CATIType_var _type;
	CATUnicodeString _attrName;
	CATUnicodeString _attrNLSName;
	int _permissions;
	CATUnicodeString _attributeAccess;
};

#endif 
