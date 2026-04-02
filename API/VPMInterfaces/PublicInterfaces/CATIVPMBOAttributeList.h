// ========================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
// ========================================================================
// VPM (c) Copyright Dassault Systemes 2001
// ========================================================================
// Usage Notes :
// ========================================================================
// History :
// Janvier 2001 - STX - Comments
// ========================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#ifndef CATIVPMBOAttributeList_H
#define CATIVPMBOAttributeList_H

#include "GUIDVPMInterfaces.h"

#include <CATBaseUnknown.h>
#include "CATUnicodeString.h"

#include "GUIDVPMInterfaces.h"
class VPMIListOfAttributes;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVPMBOAttributeList;
#else
extern "C" const IID IID_CATIVPMBOAttributeList;
#endif

/**
  * This interface is used to retreive the attributes of an object.
  * <b>Role :</b>  This interface is used to retreive the attributes of an object.
  */
class ExportedByGUIDVPMInterfaces CATIVPMBOAttributeList : public CATBaseUnknown
{

   CATDeclareInterface;

   public :

     /**
       * This method returns the attributes of an object.
       * @param BOTypeLate specifies the basic type of the object.
       * @param Attributes returns the list of attributes.
       * @return S_OK in case of success,
       *         E_FAIL in case of error.
       */
      virtual HRESULT GetAttributeList( const CATUnicodeString BOTypeLate, VPMIListOfAttributes * Attributes ) const = 0;

};

CATDeclareHandler( CATIVPMBOAttributeList, CATBaseUnknown );

#endif
