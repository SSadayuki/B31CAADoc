// Copyright Dassault Systemes 2000
#ifndef CATICkeFeature_H
#define CATICkeFeature_H

/** 
* @CAA2Level L1
* @CAA2Usage U4 CATKweInstanceAdapter
*/

// load module
#include "KnowledgeItf.h"

// inherits from
#include "CATBaseUnknown.h"

// forwards
#include "CATICkeForwards.h"
#include "CATIParmPublisher.h"


// OLE
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeFeature;
#else
extern "C" const IID IID_CATICkeFeature;
#endif

/**   
 * Interface dedicated to manipulating objects in Knowledgeware.
 *
 * <b>Role</b>: this interface allows one to make his objects utilizable
 * in KnowledgeWare rule, check and formula editors.<br>
 * <br>
 * Implementations of that interface should derive from CATKweInstanceAdapter.
 *
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 *
 * @see CATIInstance
 * @see CATIType
 */
//-----------------------------------------------------------------------------
class ExportedByKnowledgeItf CATICkeFeature : public CATBaseUnknown
{
  CATDeclareInterface;

public:

	/**
	 * Returns the type of the object.
	 * This type is used to check that the formula (rule or check) syntax is correct. 
	 * If your object implements CATIInstance, the classical implementation returns the CATIInstance::Type method.
	 * If not, usually the implementation consists in calling CATGlobalFunctions::GetTypeDictionary()->FindTypeSafe("TypeName","PackageName",oType)
	 *
	 * @return the main type of the object. It is also a CATIType.
	 */
	virtual CATICkeType_var GetType    () const =0;

};

// declaration of Handler
CATDeclareHandler(CATICkeFeature,CATBaseUnknown);


#endif


































































