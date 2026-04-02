// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIPDMReferenceNamingInfo.h
//------------------------------------------------------------------
//
// This is the type of the input argument of CATIPDMUEReferenceNamingInfo1::ComputeReferenceName
// It allows the UE to perform misc operation to evaluate the reference name
// More particularly it lets it run code on the Server Side by a call to RunServerCode
//
//===================================================================
//
//  nov 2003  JRZ Creation
//===================================================================
#ifndef CATIPDMReferenceNamingInfo_H
#define CATIPDMReferenceNamingInfo_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */ 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMReferenceNamingInfo;
#else
extern "C" const IID IID_CATIPDMReferenceNamingInfo ;
#endif

#include "CATUnicodeString.h"
#include "CATVariant.h"
class ExportedByCATPDMBaseItfCPP CATIPDMReferenceNamingInfo : public CATBaseUnknown
{
  CATDeclareInterface;
  
 public:
    
 /**
   *  Call by the CATIA user exit to call customer code on the server
   *
   * @param  iServerLateType : Late type on server side containing the customer code.
   *                           This late type should implement the interface ENOVIUERunInteropServerCode 
   * 
   * @param  iInput : Information provided by the CATIA side, that is marshalled to the server and passed in
   *                  as input to the customer code on server side.
   *
   * @param  iOuput : Information returned by customer code on server side. It's marashalled back to CATIA
   *                  an return to the caller, the CATIA user exit.
   * @return
   *    S_OK    : Success 
   *    E_FAIL  : Failure
   */
   virtual HRESULT RunServerCode (const CATUnicodeString& iServerLateType,const CATVariant& iInput, CATVariant& oOutput ) = 0;
    
  // ---------------------------------------------------------------

};
CATDeclareHandler( CATIPDMReferenceNamingInfo, CATBaseUnknown );

//------------------------------------------------------------------

#endif
