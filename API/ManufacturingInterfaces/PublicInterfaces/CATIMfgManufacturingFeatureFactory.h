/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2004
//=============================================================================

#ifndef CATIMfgManufacturingFeatureFactory_H
#define CATIMfgManufacturingFeatureFactory_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingFeatureFactory;
#else
extern "C" const IID IID_CATIMfgManufacturingFeatureFactory;
#endif

/**
* Interface to create a manufacturing tool axis.
* <br><b>Role</b>: CATIMfgManufacturingFeatureFactory has methods to create a
* manufacturing tool axis.
*/

class ExportedByMfgItfEnv CATIMfgManufacturingFeatureFactory : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Creates a manufacturing tool axis. 
* @param iToolAxisMode
*   The type of tool axis to be created. By default, it is set to Manual.
*   <br><b>Legal values</b>: The tool axis mode may be
*   <dl>
*     <dt><tt>NormalBottom </tt>      
*     <dt><tt>Selection  </tt>     
*     <dt><tt>NormalView</tt>   
*     <dt><tt>2Rotations</tt> 
*     <dt><tt>Manual</tt>    
*     <dt><tt>Axis</tt>    
*     <dt><tt>PtView</tt>    
*   </dl>
*
*
* @param oToolAxis
*   The tool axis.
*/

    virtual HRESULT CreateToolAxis (const CATUnicodeString& iToolAxisMode, CATBaseUnknown_var &oToolAxis) = 0; 
};

CATDeclareHandler(CATIMfgManufacturingFeatureFactory, CATBaseUnknown);

#endif


