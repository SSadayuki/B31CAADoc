// COPYRIGHT DASSAULT SYSTEMES 2000

#ifndef CATIKnowledgeAdvisorAddin_h
#define CATIKnowledgeAdvisorAddin_h
#include <CATIWorkbenchAddin.h>
#include "KnowledgeItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItfCPP IID_CATIKnowledgeAdvisorAddin;
#else
extern "C" const IID IID_CATIKnowledgeAdvisorAddin;
#endif

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */


/**
 * Interface to implement in order to integrate your toolbar in the KWA workbench.
 */
class ExportedByKnowledgeItfCPP CATIKnowledgeAdvisorAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};

#endif

