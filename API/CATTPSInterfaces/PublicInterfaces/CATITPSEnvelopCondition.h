#ifndef CATITPSEnvelopCondition_H
#define CATITPSEnvelopCondition_H

// COPYRIGHT DASSAULT SYSTEMES 1999 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATTPSEnvelopCondition.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSEnvelopCondition;
#else
extern "C" const IID IID_CATITPSEnvelopCondition ;
#endif

/**
 * Interface for accessing Envelop Condition modifier on a TPS.
 * ISO Standard only.
 *   @see CATTPSEnvelopCondition
 */
class ExportedByCATTPSItfCPP CATITPSEnvelopCondition : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * @deprecated V5R29 @href CATITPSISOSizesModifiers
    * Sets Envelop Condition modifier.
    */
    virtual HRESULT SetModifier (const CATTPSEnvelopCondition iModifier) = 0;

    /**
    * Retrieves Envelop Condition modifier.
    */
    virtual HRESULT GetModifier (CATTPSEnvelopCondition * oModifier) const = 0;

};

CATDeclareHandler (CATITPSEnvelopCondition, CATBaseUnknown);

#endif
