#ifndef CATIAttributesDescription_h
#define CATIAttributesDescription_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/


// inherited class 
#include "CATBaseUnknown.h"

// load module
#include "CATLifSpecs.h"

#include "CATListValCATAttributeInfos.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATIAttributesDescription;
#else
extern "C" const IID IID_CATIAttributesDescription;
#endif

/**   
 * Interface to describe the attributes on a type or an object.
 * <b>Role</b>: You can consult this interface to know the list of attributes on a type or an object implementing this interface.<br>
 * You must implement this interface if you want to support this behaviour.
 * You must implement it on types that have attributes. types implement CATIType.<br>
 * If your object implements CATIDynamicAttributes, it has to implement this interface to return
 * the list of dynamic attributes also.
 * This interface is used in KnowledgeExpert to provide the list of attributes on a type and an object;
 * In LiteralFeatures framework, you can find CATCkeInstanceAdapter which is an 
 * adapter of those interfaces on feature objects (see also CATCkeBasicAdapter which is the light ancestor (no attribute data) of CATCkeInstanceAdapter).
 * @see CATIInstance
 * @see CATIType
 * @see CATIValue
 * @see CATIInstance
 * @see CATIDynamicAttributes 
 */
class ExportedByCATLifSpecs CATIAttributesDescription : public CATBaseUnknown
{
public:
	/**
	*	Returns the list of informations on attributes held by the instance.
	*   @param oListOfAttributeInfos : the list of informations on attributes
	*	@param recursively : if true, the output list will also contain the attributes given by 
	*	the inheritance mechanism provided by CATIType
	*/
	virtual HRESULT List( CATListValCATAttributeInfos* oListOfAttributeInfos, boolean recursively = 1 ) const = 0;
	/**
	*	Returns information about the attribute whose name is specified as argument.
	*   @param iName : the name of the attribute for which informations are required
	*	@param oAttributeInfos : the output informations about the attribute. This object is allocated
	*/
	virtual HRESULT FindByName( const CATUnicodeString& iName, CATAttributeInfos*& oAttributeInfos ) const = 0;
	/**
	*	Returns information about the attribute whose NLS-name is specified as argument.
	*	@param iName : the name of the attribute for which informations are required
	*	@param oAttributeInfos : the output informations about the attribute
	*/
	virtual HRESULT FindByNLSName( const CATUnicodeString& iNLSName, CATAttributeInfos*& oAttributeInfos ) const = 0;

private:
  CATDeclareInterface;
}; 

CATDeclareHandler(CATIAttributesDescription, CATBaseUnknown);

#endif
