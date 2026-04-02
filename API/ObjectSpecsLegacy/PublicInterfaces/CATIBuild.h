/* -*-c++-*- */
#ifndef CATIBuild_h
#define CATIBuild_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "CATMetaClass.h"
#include "IUnknown.h"
#include "AC0SPBAS.h"


extern IID ExportedByAC0SPBAS IID_CATIBuild ;
/**  
 * Interface dedicated to the Build/Update mechanism.
 * @see CATIOsmUpdate
 */
class ExportedByAC0SPBAS CATIBuild : public CATBaseUnknown
{
  public :
/**
 * Build itself as a result of an update (generate the result).
 * @return S_OK if the build succeeded, E_FAIL otherwise (the update process is then aborted). 
 * The build is launched by the update engine, after the sp_in attributes have been updated.
 * In the implementation:
 * <ul>
 * <li>the quality, value or activity of a sp_IN attribute must not be changed. 
 * This will cause a reimpact, leaving the feature outdated after the update</li>
 * <li>SetUpToDate(TRUE) must not be called. 
 * This is done later by the update engine, if the build returns S_OK and if there is no reimpact.</li>
 * <li>sp_OUT attributes, if any, can be recomputed</li>
 * </ul>
 */
virtual HRESULT Build() = 0;
  private:
CATDeclareInterface;

};

#endif
