// COPYRIGHT Dassault Systemes 2008
//===================================================================
//
// CATIPDMUEResId.h
// Define the CATIPDMUEResId interface
//
//===================================================================
//
// Usage notes:
// Interface dedicated to interoperability between CATIAV5 and VPMV4
// It allows customer to define its own Id used in the PDMId
// The user exit should be of late type CATUEPDMResId and implement the current interface
//
//
//===================================================================
#ifndef CATIPDMUEResId_H
#define CATIPDMUEResId_H

#include "CATPDMBaseItfCPP.h"
#include "CATUnicodeString.h"
#include "CATDbBinary.h"
#include "CATBaseUnknown.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMUEResId;
#else
extern "C" const IID IID_CATIPDMUEResId ;
#endif
//------------------------------------------------------------------
/**
 * Interface enabling the custom definition of PDMId dedicated to interoperability between CATIAV5 and VPMV4.
 * <b>Role</b>: Interface enabling a customer to define its own Id policy for the PDMId
 * This interface is implied in the VPMV4 openess to CATIA V5, where PDMId are made of CO-ID COMP-ID.  
 * When needed it has to be implemented on the late type : CATUEPDMResId
 * PDMId customer implementation is needed when the customer wants to customize its PDMIds.
 */

class ExportedByCATPDMBaseItfCPP CATIPDMUEResId: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
   * Creation of the Id .
	 * This Id will be used to generate a PDMId for VPM 
	 * @return
   *    CATDbBinary on 8 octets
   */
  virtual CATDbBinary CreateId()=0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};
CATDeclareHandler( CATIPDMUEResId, CATBaseUnknown );
//------------------------------------------------------------------
#endif
