#ifndef CATITPSFactoryElementary_H
#define CATITPSFactoryElementary_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBaseUnknown.h"

#include "CATTPSDimensionType.h"
#include "CATTPSLinearDimensionSubType.h"
#include "CATTPSTypeWithoutDRF.h"
#include "CATTPSTypeWithDRF.h"

class CATITTRS;
class CATITPSText;
class CATITPSDatumSimple;
class CATITPSRoughness;
class CATITPSDatumTarget ;
class CATITPSNonSemanticDimension;
class CATITPSDimension;
class CATITPSForm;
class CATITPSReferenceFrame;
class CATITPS;
class CATITPSNoa;
class CATITPSFlagNote;
class CATSO;
class CATITPSNonSemanticGDT;

extern "C" const IID IID_CATITPSFactoryElementary ;

/**
 * Elementary level annotation factory interfaces.
 * The purpose of this interface is to give the basic factory of annotations' creation.
 * The 3D Annotations returned by the methods of this interface are not fulfilled
 * and self-suficient.
 * After this creation, the user must vakukate all the properties of the annotation.
 */
class CATITPSFactoryElementary: public IUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Creates a Text.
     *   @param opiText
     *      The new Text.
     */
    virtual HRESULT CreateText (CATITTRS    *  ipiTTRS,
                                CATITPSText ** opiText) const = 0;

    /**
     * Creates a Datum.
     *   @param opiDatum
     *      The new Datum.
     */
    virtual HRESULT CreateDatum (CATITTRS           *  ipiTTRS,
                                 CATITPSDatumSimple ** opiDatum) const = 0;

    /**
     * Creates a Roughness.
     *   @param opiRoughness
     *      The new Roughness.
     */
    virtual HRESULT CreateRoughness(
                                   CATITTRS         *  ipiTTRS,
                                   CATITPSRoughness ** opiRoughness) const = 0;

    /**
     * Creates a Flag Note.
     *   @param opiFlagNote
     *      The new Flag Note.
     */
    virtual HRESULT CreateFlagNote (CATITTRS        *  ipiTTRS,
                                    CATITPSFlagNote ** opiFlagNote) const = 0;

    /**
     * Creates a Datum Target.
     *   @param opiDatumTarget
     *      The new Datum Target.
     */
    virtual HRESULT CreateDatumTarget(
                               CATITTRS           *  ipiTTRS,
                               CATITPSDatumSimple *  ipiDatum,
                               CATITPSDatumTarget ** opiDatumTarget) const = 0;

    /**
     * Creates a non semantic Dimension specification.
     *   @param oDimension
     *      The new created Dimension.
     */
    virtual HRESULT CreateNonSemanticDimension(
                        CATITTRS                     * ipiTTRS,
                        CATTPSDimensionType            iDimensionType,
                        CATTPSLinearDimensionSubType   iSubType,
                        CATITPSNonSemanticDimension ** opiDimension) const = 0;

    /**
     * Creates a semantic Dimension specification.
     *   @param oDimension
     *      The new created Dimension.
     */
    virtual HRESULT CreateSemanticDimension(
                          CATITTRS                   * ipiTTRS,
                          CATTPSDimensionType          iDimensionType,
                          CATTPSLinearDimensionSubType iSubType,
                          CATITPSDimension          ** opiDimension) const = 0;

    /**
     * Creates a non semantic Curvilinear Dimension specification.
     *   @param ipSO
     *    The list of elements on which the system will try to create the Curvilinear Dimension.
     *   @param opiDimension
     *    The new created Curvilinear Dimension.
     */
    virtual HRESULT CreateNonSemanticCurvilinearDimension(
                          CATSO                 		   * ipSO,
                          CATITPSNonSemanticDimension ** opiDimension) const = 0;

   /**
    * Create a Tolerance Without Datum Reference Frame.
    *   @param iType
    *      the type of the tolerance which will be created
    *   @param ipiTTRS
    *      The user surface on which the Tolerance will be created
    *      To create the Tolerance, the type of surface associated with ipiTTRS
    *      must correspond to the first argument iType. 
    *      example: if the (iType ==  Cylindricity) the TTRS must be associated
    *      with a Cylindrical surface.
    *   @param opiTolWoDRF
    *      The new tolearnce created.
    * This method returns S_OK when the Tolerance has been created and returns
    * E_FAIL otherwise.
    *
    */
    virtual HRESULT CreateToleranceWithoutDRF(
                                   CATTPSTypeWithoutDRF iType,
                                   CATITTRS           * ipiTTRS,
                                   CATITPSForm       ** opiTolWoDRF) const = 0;

    /**
     * Creates a Datum Reference Frame.
     *   @param opiRefFrame
     *      The new Datum Reference Frame
     */
    virtual HRESULT CreateDatumReferenceFrame (CATITPSReferenceFrame ** opiRefFrame) const = 0;

   /**
    * Create a Tolerance With Datum Reference Frame.
    *   @param iType
    *      the type of the tolerance which will be created
    *   @param ipiTTRS
    *      The user surface on which the Tolerance will be created
    *      To create the Tolerance, the type of surface associated with ipiTTRS
    *      must correspond to the first argument iType. 
    *      example: if the (iType ==  Cylindricity) the TTRS must be associated
    *      with a Cylindrical surface.
    *   @param ipiRefFrame
    *      The Reference Frame.
    *   @param opiTolWiDRF
    *      The new tolearnce created.
    * This method returns S_OK when the Tolerance has been created and returns
    * E_FAIL otherwise.
    */
    virtual HRESULT CreateToleranceWithDRF(
                                CATTPSTypeWithDRF       iType,
                                CATITTRS              * ipiTTRS,
                                CATITPSReferenceFrame * ipiRefFrame,
                                CATITPS              ** opiTolWiDRF) const = 0;

    /**
     * Instanciate a NOA from a Reference NOA.
     *   @param ipiNOA
     *      The Reference NOA.
     *   @param ipiTTRS
     *      The user surface on which you apply the instanciated NOA.
     *   @param opiNOA
     *      The new instanciated NOA.
     */
    virtual HRESULT InstanciateNOA (CATITPSNoa *  ipiNOA,
                                    CATITTRS   *  ipiTTRS,
                                    CATITPSNoa ** opiNOA) const = 0;

    /**
     * Create a "Text" NOA.
     *   @param ipiTTRS
     *      The user surface on which you apply the created NOA.
     *   @param opiNOA
     *      The new created NOA.
     */
    virtual HRESULT CreateTextNOA (CATITTRS   *  ipiTTRS,
                                   CATITPSNoa ** opiNOA) const = 0;

    /**
    * Create a NonSemantic Tolerance.
    *   @param ipiTTRS
    *      The user surface on which the Tolerance will be created.
    *   @param opiTolerance
    *      The new tolearnce created.
    * This method returns S_OK when the Tolerance has been created and returns
    * E_FAIL otherwise.
    *
    */
    virtual HRESULT CreateNonSemanticGDT(CATITTRS  *ipiTTRS, CATITPSNonSemanticGDT  **opiTolerance) const = 0;
};

#endif
