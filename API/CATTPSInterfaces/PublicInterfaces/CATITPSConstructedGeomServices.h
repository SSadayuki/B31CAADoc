#ifndef CATITPSConstructedGeomServices_H
#define CATITPSConstructedGeomServices_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATTPSCGType.h"
#include "CATListPV.h"

// class CATListPV;
class CATITPSGeometry;
class CATITTRS;
class CATIProduct;

extern "C" const IID IID_CATITPSConstructedGeomServices;

/**
 * Interface providing service dedicated to manage CG creation.
 * @see CATITTRS
 * @see CATIProduct
 * @see CATITPSGeometry
 * @see CATTPSCGType
*/
class CATITPSConstructedGeomServices: public IUnknown
{
  public:

    /**
     * Analyses possibility and Creates CG point if possible.
     *   @param ipiTTRS
     *     the TTRS context.
     *   @param ipiProduct
     *     the Product context.
     *   @param iCGType
     *     the CG type asked to create.
     *   @param opiTPSPoint
     *     the created CG point.
     *   @param obCreationAnalyse
     *     check if the CG point could be created.
     *     If FALSE, context could not support asked type: no creation,
     *     no AddRef on opiTPSPoint, HRESULT=E_FAIL.
     *     If TRUE, context could support asked type: creation,
     *     AddRef on opiTPSPoint, HRESULT=S_OK.
     */
    virtual HRESULT AnalyseAndCreatePoint (
                              CATITTRS         * ipiTTRS,
                              CATIProduct      * ipiProduct,
                              CATTPSCGType       iCGType,
                              CATITPSGeometry ** opiTPSPoint,
                              CATBoolean       * obCreationAnalyse = NULL) = 0;

    /**
     * Analyses possibility and Creates CG line if possible.
     *   @param ipiTTRS
     *     the TTRS context.
     *   @param ipiProduct
     *     the Product context.
     *   @param iCGType
     *     the CG type asked to create.
     *   @param opiTPSLine
     *     the created CG line.
     *   @param obCreationAnalyse
     *     check if the CG line could be created.
     *     If FALSE, context could not support asked type: no creation,
     *     no AddRef on opiTPSLine, HRESULT=E_FAIL.
     *     If TRUE, context could support asked type: creation,
     *     AddRef on opiTPSLine, HRESULT=S_OK.
     */
    virtual HRESULT AnalyseAndCreateLine (
                              CATITTRS         * ipiTTRS,
                              CATIProduct      * ipiProduct,
                              CATTPSCGType       iCGType,
                              CATITPSGeometry ** opiTPSLine,
                              CATBoolean       * obCreationAnalyse = NULL) = 0;

    /**
     * Analyses possibility and Creates CG circle if possible.
     *   @param ipiTTRS
     *     the TTRS context.
     *   @param ipiProduct
     *     the Product context.
     *   @param iCGType
     *     the CG type asked to create.
     *   @param ipiTPSPlane
     *     !! ONLY FOR CATTPSConeCircle case (not used for CATTPSIntersectingCircle case) !!
     *     the plane on which the circle is based on.
     *     This plane must be representing element of input TTRS too.
     *   @param opiTPSCircle
     *     the created CG circle.
     *   @param obCreationAnalyse
     *     check if the CG circle could be created.
     *     If FALSE, context could not support asked type: no creation,
     *     no AddRef on opiTPSCircle, HRESULT=E_FAIL.
     *     If TRUE, context could support asked type: creation,
     *     AddRef on opiTPSCircle, HRESULT=S_OK.
     */
    virtual HRESULT AnalyseAndCreateCircle (
                              CATITTRS         * ipiTTRS,
                              CATIProduct      * ipiProduct,
                              CATTPSCGType       iCGType,
                              CATITPSGeometry  * ipiTPSPlane,
                              CATITPSGeometry ** opiTPSCircle,
                              CATBoolean       * obCreationAnalyse = NULL) = 0;


    /**
     * Analyses possibility and Creates CG plane if possible.
     *   @param ipiTTRS
     *     the TTRS context.
     *   @param ipiProduct
     *     the Product context.
     *   @param iCGType
     *     the CG type asked to create.
     *   @param opiTPSPlane
     *     the created CG plane.
     *   @param ipParamList
     *     the parameter list for plane creation:
     *     for the moment, only the Angle regarding the reference plane is taken into account:
     *     This angle should be given in rad.
     *   @param obCreationAnalyse
     *     check if the CG plane could be created.
     *     If FALSE, context could not support asked type: no creation,
     *     no AddRef on opiTPSPlane, HRESULT=E_FAIL.
     *     If TRUE, context could support asked type: creation,
     *     AddRef on opiTPSPlane, HRESULT=S_OK.
     */
    virtual HRESULT AnalyseAndCreatePlane (
                              CATITTRS         * ipiTTRS,
                              CATIProduct      * ipiProduct,
                              CATTPSCGType       iCGType,
                              CATITPSGeometry ** opiTPSPlane,
                              CATListPV        * ipParamList = NULL,
                              CATBoolean       * obCreationAnalyse = NULL) = 0;

    /**
     * Analyses possibility and Creates CG cylinder if possible.
     *   @param ipiTTRS
     *     the TTRS context.
     *   @param ipiProduct
     *     the Product context.
     *   @param iCGType
     *     the CG type asked to create.
     *   @param opiTPSCylinder
     *     the created CG cylinder.
     *   @param obCreationAnalyse
     *     check if the CG cylinder could be created.
     *     If FALSE, context could not support asked type: no creation,
     *     no AddRef on opiTPSCylinder, HRESULT=E_FAIL.
     *     If TRUE, context could support asked type: creation,
     *     AddRef on opiTPSCylinder, HRESULT=S_OK.
     */
    virtual HRESULT AnalyseAndCreateCylinder (
                              CATITTRS         * ipiTTRS,
                              CATIProduct      * ipiProduct,
                              CATTPSCGType       iCGType,
                              CATITPSGeometry ** opiTPSCylinder,
                              CATBoolean       * obCreationAnalyse = NULL) = 0;
};
#endif
