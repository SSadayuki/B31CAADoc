// ========================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
// ========================================================================
// VPM (c) Copyright Dassault Systemes 2001
// ========================================================================
// Usage Notes :
// ========================================================================
// History :
// Decembre 2000 - STX - Comments
// ========================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIVPMBOAttribute_H
#define CATIVPMBOAttribute_H

#include "GUIDVPMInterfaces.h"

#include <CATBaseUnknown.h>
#include "CATUnicodeString.h"
#include "CORBAAnyDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVPMBOAttribute;
#else
extern "C" const IID IID_CATIVPMBOAttribute;
#endif

/**
  * This interface allows to control the value of an attribute.
  * <b>Role :</b> This interface allows to control the value of an attribute.
  * To get the correct results, you need to ensure a correct mask is set before these method calls.
  * Both the methods are applied on the current mask.
  * To change or set the current mask please use ENOVUserExitServices::setMask(const CATUnicodeString & iMaskToSet) 
  * method prior to this method call. For example : ENOVUserExitServices::setMask("read").
*/

class ExportedByGUIDVPMInterfaces CATIVPMBOAttribute : public CATBaseUnknown
{

   CATDeclareInterface;

   public :

     /**
       * This method returns the value of an attribute.
       * @param AttributeName specifies the name of the attribute from which we wish to retreive the value.
       * @param Value is the value returns for this attribute.
       * @return S_OK in case of success,
       *         E_FAIL in case of error.
       */
      virtual HRESULT GetAttributeValue( const CATUnicodeString & AttributeName, CORBAAny & Value ) = 0;

   /**
       * This method set the value of an attribute.
       * @param AttributeName specifies the name of the attribute from which we wish to set the value.
       * @param Value is the value for this attribute.
       * @return S_OK in case of success,
       *         E_FAIL in case of error.
       */
      virtual HRESULT SetAttributeValue( const CATUnicodeString & AttributeName, const CORBAAny & Value ) = 0;

};

CATDeclareHandler( CATIVPMBOAttribute, CATBaseUnknown );

#endif
