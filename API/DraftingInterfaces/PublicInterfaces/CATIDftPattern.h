// COPYRIGHT Dassault Systemes 2001
#ifndef CATIDftPattern_H
#define CATIDftPattern_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftPattern ;
#else
extern "C" const IID IID_CATIDftPattern ;
#endif


/**
 * Manage a generic pattern object.
 * 
 */
class ExportedByDraftingItfCPP CATIDftPattern: public IUnknown
{
  
  public:

   /**
   * Get the type of the pattern.
   * @param oPatternType
   * <br> = 0 None Pattern.
   * <br> = 1 Hatching Pattern.
   * <br> = 2 Dotting Pattern.
   * <br> = 3 Coloring Pattern.
   * <br> = 4 Cell Pattern.
   * <br> = 5 Undefined Pattern.


   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_READONLY : Method correctly executed.
   * <br>Returned value cannot be modified, it's read-only.
   * <br><i>Can be usefull when the property is fixed by a standard, etc.</i>
   * <br>S_UNDEFINED : Method correctly executed.
   * <br>Returned value is undefined.
   * <br><i>Case of an object having several subparts supporting the same property with a different value.</i>
   * <br>E_FAIL : Method execution failed.
   * <br>Reasons of the failure are not given.
   * <br>E_NOTIMPL : No implementation available for this method.
   */ 
   virtual HRESULT GetPatternType (int * oPatternType)  const = 0;

};

//------------------------------------------------------------------

#endif
