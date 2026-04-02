#ifndef CATITPSSetTransformIntoAssemblySet_H
#define CATITPSSetTransformIntoAssemblySet_H

// COPYRIGHT DASSAULT SYSTEMES 2013
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"


extern "C" const IID IID_CATITPSSetTransformIntoAssemblySet;

/**
 * Interface designed to transform an annotation set into an assembly annotation set.
 */

class CATITPSSetTransformIntoAssemblySet : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Transforms annotation set into an assembly annotation set.
  * 
  * @param iAssemblyannotationSetName [in]
  *   The name of the assembly annotation transformed
  *   If the iAssemblyannotationSetName is an empty string, the assembly annotation set keeps the name
  *   of the annotation set from which it comes.
  *
  * returns S_OK when transformation succeeded.
  * returns S_FALSE when the annotation set is already an assembly annotation set.
  * otherwise returns E_FAIL.
  */
  virtual HRESULT Transform(CATUnicodeString& iAssemblyannotationSetName) =0;

};

CATDeclareHandler(CATITPSSetTransformIntoAssemblySet, CATBaseUnknown);

#endif
