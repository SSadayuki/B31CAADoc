// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIPDMUEReferenceNaming1.h
//------------------------------------------------------------------
//
//
//  This interface, evolution of CATIPDMReferenceNaming,
//  allow the user to overload the Part reference name during save operations
//  (e.g. : PartVersion [VPM1], PartNumber [ENOVIA5]). 
//  <br>You should implement it on the <tt>ASMPRODUCT</tt> or derived object.
//

//===================================================================
//
//  Nov 2003  JRZ: Creation
//===================================================================
#ifndef CATIPDMUEReferenceNaming1_H
#define CATIPDMUEReferenceNaming1_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */ 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMUEReferenceNaming1;
#else
extern "C" const IID IID_CATIPDMUEReferenceNaming1 ;
#endif

#include "CATUnicodeString.h"
#include "CATIPDMReferenceNamingInfo.h"
class ExportedByCATPDMBaseItfCPP CATIPDMUEReferenceNaming1 : public CATBaseUnknown
{
  CATDeclareInterface;
  
 public:
  
    
 /**
   * allow the user to overload the PDM reference name during save operations
   *  (e.g. : PartVersion [ENOVIA5], Part_Number [VPM1]). 
   *
   * ps : - By default, if this interface is not implemented, the PDM name
   *        is mapped on CATIAV5 PartNumber. if this interface is implemented, 
   *        the CATIA PartNumber is not valuated. 
   *      - This mecanism allows to store an object with a given PDM Name, and 
   *        an other PartNumber. So, if you want to implement this interface 
   *        only for suggesting an other Name for the PartNumber, it is necessary
   *        to modified its value in the model (CATIProduct::SetPartNumber()).
   *      - If the PDM Name is not unique, it will be automaticaly renamed !!!
   *      - If the PDM Name is greater than 40 characters, it will be trunc.
   *
   * @param  ipInfo. Interface that the UE can call to aquire information. Using it, it's feasable 
   *         for the CATIA user exit to run customer code on server side by calling ipInfo->RunServerCode
=   *
   * @param  oPartReferenceId: Returned reference name 
   *
   * @return
   *    S_FALSE : Use default mapping (PartNumber)
   *    S_OK    : Success 
   *    E_FAIL  : Failure
   */
   virtual HRESULT ComputeReferenceName (CATIPDMReferenceNamingInfo* ipInfo, CATUnicodeString & oReferenceName) = 0;
    
  // ---------------------------------------------------------------

};
CATDeclareHandler( CATIPDMUEReferenceNaming1, CATBaseUnknown );

//------------------------------------------------------------------

#endif
