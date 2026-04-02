// COPYRIGHT Dassault Systemes 2000
//===================================================================
// CATISIMSequenceFactory.h
// Define the CATISIMSequenceFactory interface
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */
#ifndef CATISIMSequenceFactory_H
#define CATISIMSequenceFactory_H

#include "SIMItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATISIMSequence.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySIMItfCPP IID IID_CATISIMSequenceFactory ;
#else
extern "C" const IID IID_CATISIMSequenceFactory;
#endif

class ExportedBySIMItfCPP CATISIMSequenceFactory: public CATBaseUnknown
  {
  CATDeclareInterface;
  
  public:
    
    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------  
    virtual HRESULT InitContainer
      () = 0;
    
    virtual HRESULT CreateSequence
      (CATISIMSequence*& oSequence) = 0;

    virtual HRESULT ListSequence
      (CATListValCATBaseUnknown_var& oListSequence) = 0;
  };

CATDeclareHandler(CATISIMSequenceFactory,CATBaseUnknown);

#endif
