#ifndef CATISearchInformation_H
#define CATISearchInformation_H
#include "Search.h"

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATCafSearchInformationAdapter
 */

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySearch IID IID_CATISearchInformation;
#else
extern "C" const IID IID_CATISearchInformation;
#endif

/**
  * Interface that enables a knowledgeware package to be taken into account in
  * the Edit>Find... command.
  */

//-----------------------------------------------------------------------------
class ExportedBySearch CATISearchInformation : public CATBaseUnknown
{ 

  CATDeclareInterface;

public:

}; 

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATISearchInformation, CATBaseUnknown);

#endif
