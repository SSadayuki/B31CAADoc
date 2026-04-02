// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIMfgVirtualActivity_H
#define CATIMfgVirtualActivity_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

class CATMathTransformation;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgVirtualActivity;
#else
extern "C" const IID IID_CATIMfgVirtualActivity ;
#endif

//------------------------------------------------------------------

/**
 * Interface for management of a Virtual Activity.
 */
class ExportedByMfgItfEnv CATIMfgVirtualActivity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Set the Tool Path on the Virtual Activity.
     *   @param iTLP
     *      The Tool Path
    */
     virtual HRESULT SetToolPath (CATBaseUnknown_var & iTLP) = 0;

     /**
     * Sets the Manufacturing Activity on the Virtual Activity.
     *   @param iMfgAct
     *      The Manufacturing Activity
    */
     virtual HRESULT SetMfgActivity (CATBaseUnknown_var & iMfgAct) = 0;

     /**
     * Sets the contextual Transformation on a Virtual Activity.
     *   @param iTransformation
     *      The Transformation
    */
     virtual HRESULT SetTransformation (CATMathTransformation * iTransformation) = 0;

    /**
     * Retrieves the Tool Path on a Virtual Activity.
     *   @return
     *      The Tool Path if it exists (NULL_var otherwise)
    */
     virtual CATBaseUnknown_var GetToolPath () = 0;

     /**
     * Retrieves the Manufacturing Activity on a Virtual Activity.
     *   @return
     *      The Manufacturing Activity if it exists (NULL_var otherwise)
     */
     virtual CATBaseUnknown_var GetMfgActivity () = 0;

     /**
     * Retrieves the contextual Transformation on a Virtual Activity.
     *   @return
     *      The Transformation if it exists (NULL_var otherwise)
    */
     virtual CATMathTransformation * GetTransformation () = 0;
};

CATDeclareHandler(CATIMfgVirtualActivity, CATBaseUnknown) ;
//------------------------------------------------------------------
#endif
