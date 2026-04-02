/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================

#ifndef CATIMfgGeometryAnalyser_H
#define CATIMfgGeometryAnalyser_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgGeometryAnalyser;
#else
extern "C" const IID IID_CATIMfgGeometryAnalyser;
#endif

/**
 * Interface dedicated to analyze or remove globally the geometry referred by a NC entity.
 */

class ExportedByMfgItfEnv CATIMfgGeometryAnalyser : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

    /**
     * This method is used to tune the sensitivity of the push buttons relative to geometry analyze
     * and removal.
     * <dl>
     * <pre>
     *  @param iContext 
     *      The context in which the analyze or removal is done.
     *  <br><b>Legal values</b>:
     *  <ul>
     *  <li> = Strategy: analyze/removal is done on the geometry referred in the Strategy tabpage
     *  <li> = Geometry: analyze/removal is done on the geometry referred in the Geometry tabpage
     *  <li> = Macro   : analyze/removal is done on the geometry referred in the Macro tabpage
     *  </ul>
     *  @param oStyle 
     *      The state of the three push buttons (show specified geometry, show resulting geometry,
     *      remove referred geometry). 
     *      The first byte represents the state of the 'show specified geometry'.
     *      The second byte represents the state of the 'show resulting geometry'.
     *      The third byte represents the state of the 'remove referred geometry'.
     *      For example, to enable the three buttons, the style may be 7 (1+2+4).
     *      To disable the three buttons, the style may be 0 (0+0+0).
     * 
     * </dl>
     */

     virtual HRESULT GetStyle (const CATString &iContext, int &oStyle)=0;

     /**
     * This method is used to get the geometries referred in a context.
     * <dl>
     * <pre>
     *  @param iContext 
     *      The context in which the analyze or removal is done.
     *  <br><b>Legal values</b>:
     *  <ul>
     *  <li> = Strategy: analyze/removal is done on the geometry referred in the Strategy tabpage
     *  <li> = Geometry: analyze/removal is done on the geometry referred in the Geometry tabpage
     *  <li> = Macro   : analyze/removal is done on the geometry referred in the Macro tabpage
     *  </ul>
     *  @param oGeometries
     *      The list of geometries referred in the given context. 
     *      It may be a list of CATIMfgGeometryAccess. 
     * </dl>
     */

     virtual HRESULT GetGeometries (const CATString &iContext, CATListValCATBaseUnknown_var & oGeometries)=0;

     /** 
     * This method is used to remove the geometries referred in a context.
     * <dl>
     * <pre>
     *  @param iContext 
     *      The context in which the removal is done.
     *  <br><b>Legal values</b>:
     *   <ul>
     *  <li> = Strategy: analyze/removal is done on the geometry referred in the Strategy tabpage
     *  <li> = Geometry: analyze/removal is done on the geometry referred in the Geometry tabpage
     *  <li> = Macro   : analyze/removal is done on the geometry referred in the Macro tabpage
     *  </ul>
     * </dl>
     */

     virtual HRESULT RemoveGeometries (const CATString &iContext)=0;
};

CATDeclareHandler(CATIMfgGeometryAnalyser, CATBaseUnknown);

#endif

