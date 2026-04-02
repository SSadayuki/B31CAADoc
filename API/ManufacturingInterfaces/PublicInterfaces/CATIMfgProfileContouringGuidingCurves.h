//
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
//
// module

#ifndef CATIMfgProfileContouringGuidingCurves_H
#define CATIMfgProfileContouringGuidingCurves_H

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "MfgItfEnv.h"
class CATListPtrCATCurve;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgProfileContouringGuidingCurves;
#else
extern "C" const IID IID_CATIMfgProfileContouringGuidingCurves;
#endif

/**   
 * Interface dedicated to ProfileContouring Object.
 * <b>Role</b>: This interface offers services to retrieve guiding curves on ProfileContouring activity .<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgProfileContouringGuidingCurves : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:

 /**
 * Writes the list of referenced CATCurves. 
 * @param oListOfCATCurves
 *  List of referenced CATCurves
 */

  virtual HRESULT GetResultingCATCurves (CATLISTP(CATCurve)& oListOfCATCurves)=0;
};

CATDeclareHandler( CATIMfgProfileContouringGuidingCurves, CATBaseUnknown) ;

#endif














