#ifndef CATIPrtUIFactory_H
#define CATIPrtUIFactory_H
// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "PartItf.h"
#include "CATBaseUnknown.h"
#include "CATCommand.h"
#include "CATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtUIFactory;
#else
extern "C" const IID IID_CATIPrtUIFactory ;
#endif

class CATISpecObject_var;
class ExportedByPartItf CATIPrtUIFactory: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
/**
* Create a command Hole , split or pocket
* @param Name
*         = PrtHole   : command hole
*         = PrtSplit  : command split
*         = PrtPocket : command pocket
  */		
  virtual CATCommand *CreationCommand (const CATString & Name, CATCommandMode  iMode= CATCommandModeExclusive) = 0;
  /**
  * Create an edit command Hole , split or pocket
  * @param ihEditFeature
  *        Feature to be edited
  * @param Name
  *         = PrtHole   : command hole
  *         = PrtSplit  : command split
  *         = PrtPocket : command pocket
  */		
  virtual CATCommand *EditCommand (CATISpecObject_var &ihEditFeature, const CATString & Name, CATCommandMode  iMode= CATCommandModeExclusive)=0 ;  
};
CATDeclareHandler (CATIPrtUIFactory, CATBaseUnknown);

#endif
