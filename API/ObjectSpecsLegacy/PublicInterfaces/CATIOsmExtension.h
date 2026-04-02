/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2004
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef CATIOsmExtension_H
#define CATIOsmExtension_H

#include "AC0SPEXT.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

extern ExportedByAC0SPEXT IID IID_CATIOsmExtension ;

//------------------------------------------------------------------

/**
 * Interface to manipulate feature extensions.
 * <b>Role</b>: CATIOsmExtension is implemented by all extension features.
 * This interface aims to retrieve the identifier type of an extension and the base feature that has been extended.</br>
 * Each feature implements @href CATIOsmExtendable to retrieve its extensions features.</br>
 * An extension feature is a feature therefore it implements @href CATISpecObject.</br>
 */
class ExportedByAC0SPEXT CATIOsmExtension: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


	/**
	  * Returns the extension's identifier type. This type is specified at creation in CATIOsmExtendable#AddExtension method.
		* @param oExtensionId
	  *        The extension's idetifier type 
    * @return
    *      S_OK if succeeded <br>
    *      E_FAIL if oExtensionId is not NULL
    */
    virtual HRESULT GetID(char* & oExtensionId) const =0;

   /**
    * Retrieves the base feature.
	  * @param iIID
	  *        The IID of the requested interface 
	  * @param oObj  [out, CATBaseUnknown#Release]
	  *        The pointer to the base feature
    */
    virtual HRESULT QueryBaseObject(const IID &iIID, void** oObj) const =0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIOsmExtension, CATBaseUnknown );

#endif
