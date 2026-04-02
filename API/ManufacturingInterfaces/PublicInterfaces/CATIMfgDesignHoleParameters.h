/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgDesignHoleParameters_H
#define CATIMfgDesignHoleParameters_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgDesignHoleParameters;
#else
extern "C" const IID IID_CATIMfgDesignHoleParameters;
#endif

/**
* Interface to retrieve parameters from a design hole.
* <br><b>Role</b>: CATIMfgDesignHoleParameters has methods to retrieve parameters
* from a design hole.
*/

class ExportedByMfgItfEnv CATIMfgDesignHoleParameters : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the diameter of the hole. 
* @param oDiameter
*   The diameter of the hole  
*/

    virtual HRESULT GetDiameter (CATICkeParm_var &oDiameter) = 0; 

/**
* Retrieves the depth of the hole. 
* @param oDepth
*   The depth of the hole  
*/

    virtual HRESULT GetDepth (CATICkeParm_var &oDepth) = 0;

/**
* Retrieves the origin of the hole. 
* @param oX
*   The first coordinate of the origin  
* @param oY
*   The second coordinate of the origin  
* @param oZ
*   The third coordinate of the origin  
*/

    virtual HRESULT GetOrigin (double& oX, double& oY, double& oZ) = 0;

/**
* Retrieves the direction of the hole. 
* @param oX
*   The first component of the direction  
* @param oY
*   The second component of the direction  
* @param oZ
*   The third component of the direction  
*/

    virtual HRESULT GetDirection (double& oX, double& oY, double& oZ) = 0;

/**
* Retrieves a parameter of the hole from its name. 
* @param iParameterName
*   The name of the parameter
*   <br><b>Legal values</b>: The parameter name can be
*   <dl>
*     <dt><tt>Diameter</tt>   <dd>The hole diameter 
*     <dt><tt>Depth</tt>      <dd>The hole depth
*     <dt><tt>CBDiameter</tt> <dd>The hole head diameter
*     <dt><tt>CBDepth</tt>    <dd>The hole head depth
*     <dt><tt>CSAngle</tt>    <dd>The hole head angle
*     <dt><tt>THDiameter</tt> <dd>The hole thread diameter
*     <dt><tt>THDepth</tt>    <dd>The hole thread depth
*     <dt><tt>THPitch</tt>    <dd>The hole thread pitch
*   </dl>
* @param oParameter
*   The value of the parameter  
*/
    virtual HRESULT get_Parameter (const CATString &iParameterName, double &oParameter) = 0;

/**
* Retrieves a parameter of the hole from its name. 
* @param iParameterName
*   The name of the parameter 
*   <br><b>Legal values</b>: The parameter name can be
*   <dl>
*     <dt><tt>THSens</tt>    <dd>The hole thread side. (0: right threaded 1: left threaded) 
*     <dt><tt>Extension</tt> <dd>The hole extension. (1: blind 2: through)
*   </dl>
 
* @param oParameter
*   The value of the parameter  
*/

    virtual HRESULT get_Parameter (const CATString &iParameterName, int &oParameter) = 0;
};

CATDeclareHandler(CATIMfgDesignHoleParameters, CATBaseUnknown);

#endif


