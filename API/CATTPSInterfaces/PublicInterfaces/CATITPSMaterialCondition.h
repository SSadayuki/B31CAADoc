#ifndef CATITPSMaterialCondition_H
#define CATITPSMaterialCondition_H

// COPYRIGHT DASSAULT SYSTEMES 1999 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATTPSMaterialCondition.h"
#include "CATTPSDatumOrderInFrame.h"

extern "C" const IID IID_CATITPSMaterialCondition;

class CATICkeParm ;
class CATITPSDatumSimple ;
class CATListValCATBaseUnknown_var ;

/**
* Interface for accessing Material Condition modifier on a TPS.
*   @see CATTPSMaterialCondition
*/
class CATITPSMaterialCondition : public IUnknown
{
  public:

    /**
     * Sets Material Condition modifier. 
     * Note that second argument is a default one ; it has only to be valuated,
     * when handled object is a DRF instance (Datum Reference Frame terminology
     * in ASME while ISO standard are using Datum System wording) in order to
     * define the Simple Datum in the Reference Frame concerned by the Material
     * Condition.
     * @param iModifier [ in ]
     *  Modifier value to set.
     * @param iDatum    [ in ]
     *  Optional argument; in some simple DRF (only Datum Simple are composing
     *  current reference frame), this argument is defining the box in DRF to
     *  consider.
     * @return E_FAIL if iDatum not belongs to Reference Frame; E_FAIL may also
     * suggest to the end user to rather employ another method for DRF.
     * In case DRF is issued of ISO 5459:2011 standard using intricated Datum
     * Features gathering, please invoke method using Refrence Frame box context
     * plus index in box, @href GetModifierCount.
     */
    virtual HRESULT SetModifier( const CATTPSMaterialCondition iModifier,
                                 const CATITPSDatumSimple * iDatum = NULL ) = 0;

    /**
     * Retrieves Material Condition modifier.
     * Note that second argument is a default one ; it has only to be valuated,
     * when handled object is a DRF instance (Datum Reference Frame terminology
     * in ASME while ISO standard are using Datum System wording) in order to
     * define the Simple Datum in the Reference Frame concerned by the Material
     * Condition.
     * @param oModifier [ out ]
     *  Modifier value to set.
     * @param iDatum    [ in ]
     *  Optional argument; in some simple DRF (only Datum Simple are composing
     *  current reference frame), this argument is defining the box in DRF to
     *  consider.
     * @return E_FAIL if iDatum not belongs to Reference Frame; E_FAIL may also
     * suggest to the end user to rather employ another method for DRF.
     * In case DRF is issued of ISO 5459:2011 standard using intricated Datum
     * Features gathering, please invoke method using Refrence Frame box context
     * plus index in box, @href GetModifierCount.
     */
    virtual HRESULT GetModifier( CATTPSMaterialCondition* oModifier,
                                 const CATITPSDatumSimple * iDatum = NULL ) const = 0;

    /**
     * Runs an analysis of the specified DRF box to see if material condition modifier may
     * apply several times within the considered box.
     * <br />This call is valid for ISO as well as for ASME standard; underlying object must be
     * a DRF entity.
     * <br />When ISO Standard is applied, this methods enumerates the number of groups
     * (collection of Datums) for the considered frame box. Total number of hit is then
     * augmented by the number of orphan datums (Datum not embraced within any groups).
     * @param iDRFBoxContext [ in ]
     *   First, Second or the Third Box of the DRF to investigate.
     * @param oNbrOfHit      [ in ]
     *   Number of Datum Features (or groups) supporting material condition modifier.
     *   This count constitutes the limit is iterative calls Getxx or Setxx provided here
     *   along with this interface (legal range goes from 1 to oNbrOfHit)
     * @return E_FAIL in case iDRFBoxContext is out of range; for instance trying to
     *         read Tertiary for reference frame A|B
     *         S_FALSE in case no modifier is applicable
     *         S_OK is meaningful of proper execution.
     */
    virtual HRESULT GetModifierCount( const CATTPSDatumOrderInFrame    iDRFBoxContext,
                                      int                            * oNbrOfHit ) const = 0;
    
    /**
     * Retrieves the list of datum features in the group corresponding to considered box
     * at given index (implicitly underlying object must be a DRF entity).
     * <br />This call is valid for ISO as well as for ASME standard.
     * @param iDRFBoxContext        [ in ]
     *   First, Second or the Third Box of the DRF to investigate.
     * @param iIndexInBox           [ in ]
     *   Index in between 1 and limit returned by GetModifierCount.
     * @param oScopeOfDatumFeatures [ out ]
     *   List of the Datum Features to be impacted by application of material
     *   condition modifier. This list is mandatory to be a sub list of the call
     *   @href CATITPSReferenceFrame#GetDatumFeatureInBox.
     * @return S_OK when the value has been correctly retrieved, E_FAIL otherwise.
     */
    virtual HRESULT GetListOfDatum( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                    int                             iIndexInBox,
                                    CATListValCATBaseUnknown_var  & oScopeOfDatumFeatures ) const = 0;

    /**
     * Sets boundary clarification facet. This call is verifying several conditions
     * to complete properly:
     * <br /> _ first of all, this call is only valid for DRF features created using
     *    ASME standard,
     * <br /> _ following check is about material modifier applied on DRF component:
     *    to succeed, component at given box in reference frame is applied either
     *    (L), least or (M) maximum material condition.
     * <br />As soon as both above conditions are met, this call allows to state is
     * Boundary Value is or not specified. Value of this boundary specification
     * is got thanks to GetBoundaryValue.
     * @param iDRFBoxContext              [ in ]
     *  Position in the DRF composition of the box to consider
     * @param iApplyBoundaryClarification [ in ]
     *  Optional argument; default value is set to TRUE. Content to be assigned
     *  to the attribute Boundary Clarification.
     * @param iIndex                      [ in ]
     *  Optional argument: useful when GetModifierCount is returning a number of
     *  datum feature greater than 1 supporting material condition in current box,
     *  @href GetModifierCount.
     * @return E_FAIL when method is invoked under invalid context:
     * conditions to respect are reminded in method comments, but for short:
     * <br />_ if ASME or ANSI standard is not current standard,
     * <br />_ if queried feature is not a DRF entity,
     * <br />_ if specification of the box range in DRF is either invalid or Datum
     *   Feature is supporting neither (L) nor (M) material condition modifier.
     * <br />        S_FALSE is sent back when setting does not change anything,
     * <br />        otherwise S_OK is meaningful of proper execution.
     */
    virtual HRESULT SetBoundaryClarification( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                              CATBoolean                      iApplyBoundaryClarification = TRUE,
                                              int                           * iIndex = NULL ) = 0;

    /**
     * Gets boundary clarification facet. This call is verifying several conditions
     * to complete properly:
     * <br /> _ first of all, this call is only valid for DRF features created using
     *    ASME standard,
     * <br /> _ following check is about material modifier applied on DRF component:
     *    to succeed, component at given box in reference frame is applied either
     *    (L), least or (M) maximum material condition.
     * <br />As soon as both above conditions are met, this call allows reading
     * Boundary Value. In case this flag is TRUE, end user can access to the value
     * of the boundary clarification using GetBoundaryValue.
     * @param iDRFBoxContext         [ in ]
     *   Position in the DRF composition of the box to consider
     * @param oBoundaryClarification [ out ]
     *   Content of the attribute Boundary Clarification.
     * @param iIndex                 [ in ]
     *   Optional argument: useful when GetModifierCount is returning a number of
     *   datum feature greater than 1 supporting material condition in current box,
     *   @href GetModifierCount.
     * @return E_FAIL when method is invoked under invalid context:
     * conditions to respect are reminded in method comments, but for short:
     * <br />_ if ASME or ANSI standard is not current standard,
     * <br />_ if queried feature is not a DRF entity,
     * <br />_ if specification of the box range in DRF is either invalid or Datum
     *   Feature is supporting neither (L) nor (M) material condition modifier.
     * <br />        otherwise S_OK is meaningful of proper execution.
     */
    virtual HRESULT GetBoundaryClarification( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                              CATBoolean                    & oBoundaryClarification,
                                              int                           * iIndex = NULL ) const = 0;

    /**
     * Sets value of the specified boundary; this call is only successful when 
     * GetBoundaryClarification is stating a TRUE value for boundary clarification,
     * @href GetBoundaryClarification.
     * @param iDRFBoxContext       [ in ]
     *   Position in the DRF composition of the box to consider
     * @param ipiLengthForBoundary [ in ]
     *  Value of the specified boundary as length knowledge parameter.
     * @param iIndex               [ in ]
     *   Optional argument: useful when GetModifierCount is returning a number of
     *   datum feature greater than 1 supporting material condition in current box,
     *   @href GetModifierCount.
     * @return E_FAIL in case GetBoundaryClarification was returning E_FAIL or
     * boundary clarification flag is FALSE.
     * <br />        Another identified reason of failure is about magnitude of given
     * parameter that must be of type length.
     * <br />        S_OK is returned otherwise.
     */
    virtual HRESULT SetBoundaryValue( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                      const CATICkeParm             * ipiLengthForBoundary,
                                      int                           * iIndex = NULL ) = 0;

    /**
     * Gets value of the specified boundary; this call is only successful when 
     * GetBoundaryClarification is stating a TRUE value for boundary clarification,
     * @href GetBoundaryClarification.
     * @param iDRFBoxContext       [ in ]
     *   Position in the DRF composition of the box to consider
     * @param opiLengthForBoundary [ out, CATBaseUnknown#Release ]
     *  Value of the specified boundary as knowledge parameter.
     * @param iIndex               [ in ]
     *   Optional argument: useful when GetModifierCount is returning a number of
     *   datum feature greater than 1 supporting material condition in current box,
     *   @href GetModifierCount.
     * @return E_FAIL in case GetBoundaryClarification was returning E_FAIL or
     * boundary clarification flag is FALSE.
     * <br />        S_OK is returned otherwise.
     */
    virtual HRESULT GetBoundaryValue( const CATTPSDatumOrderInFrame    iDRFBoxContext,
                                      CATICkeParm                   ** opiLengthForBoundary,
                                      int                           *  iIndex = NULL ) const = 0;

    /**
     * Sets Material Condition modifier for DRF entity. 
     * <br /><strong><em>ISO Standard important notice:</em></strong> Pay attention when this method
     * is called (most of the time when turning off a Material modifier), this can result in 
     * collections rework (parenthesis scopes are simplified when possible); it is strongly
     * recommended to run @href GetModifierCount to get refreshed information about DRF structuration.
     * @param iDRFBoxContext           [ in ]
     *   First, Second or the Third Box of the DRF to investigate.
     * @param iModifier                [ in ]
     *  Modifier value to set.
     * @param iIndexInBox              [ in ]
     *   Index in between 1 and limit returned by GetModifierCount.
     *<br />This argument is prefered when ASME Standard is applied; it does also
     *  works good whith ISO when invoked just after @href  GetModifierCount.
     * @param ipiScopeOfDatumFeatures  [ in ]
     *   Optional argument: when given it is taken in consideration and offuscate iIndexInBox value.
     *<br />This argument is useful in ISO Standard mainly to specify a collection of Datum Features
     *  (content of the list) to be applied the corresponding iModifier material condition.
     *<br /><em>Notice:</em> if modifier value, iModifier, tends to remove (M) or (L) display, regular
     * DRF parenthesis simplification process triggered by the end of this call will remove the collection
     * as it does not make sense.
     * @return E_FAIL if iDatum not belongs to Reference Frame.
     */
    virtual HRESULT SetModifier( const CATTPSDatumOrderInFrame        iDRFBoxContext,
                                 const CATTPSMaterialCondition        iModifier,
                                 int                                  iIndexInBox,
                                 const CATListValCATBaseUnknown_var * ipiScopeOfDatumFeatures = NULL ) = 0;

    /**
    * Retrieves Material Condition modifier for DRF entity.
    * @param iDRFBoxContext [ in ]
    *   First, Second or the Third Box of the DRF to investigate.
    * @param iIndexInBox    [ in ]
    *   Index in between 1 and limit returned by @href GetModifierCount.
    * @param oModifier      [ out ]
    *  Modifier value to set.
    * @return E_FAIL if iDatum not belongs to Reference Frame.
    */
    virtual HRESULT GetModifier( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                 int                             iIndexInBox,
                                 CATTPSMaterialCondition       * oModifier ) const = 0;
};
#endif
