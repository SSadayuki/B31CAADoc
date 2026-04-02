#ifndef CATITPSSituationFeatures_H
#define CATITPSSituationFeatures_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSDatumOrderInFrame.h"

class CATITTRS ;
class CATListValCATBaseUnknown_var ;

extern "C" const IID IID_CATITPSSituationFeatures ;

/**
* This interface is implemented by Datum System features.
* <b>Role</b>: Interface to manage Situation Features Modifiers, [PT], [SL] and [PL] relevant for
* ISO Standard only. Thanks to this interface caller can access to features employed
* as situation feature (point, line, plane) and set new ones instead if required.
*/

class CATITPSSituationFeatures : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * To define the typology of situation features
    * to focus on within this behavior methods.
    * ex: [SL] is represented by CATITPSSituationFeatures::CATTPSSituationFeatLine. 
    */
    enum CATTPSSituationFeatureType
    {
      CATTPSSituationFeatUnknown = -1,
      CATTPSSituationFeatAll     = 0,
      CATTPSSituationFeatPoint   = 1,
      CATTPSSituationFeatLine    = 2,
      CATTPSSituationFeatPlane   = 3
    };

    /**
     * <br /><strong>Role</strong>: Gets modifiers count inside a box of the DRF frame. The returned number
     * is based on the existing group (collection) structuration AND on actually applied situation feature modifier.
     * In anticipation, study of support for a collection of a Situation Feature not addressed by this API; such an
     * investigation requires a modification of the tolerancing set: hence this is not compliant with a "const"
     * qualification of this method.
     * <br /> Caller wishing to apply a Situation Feature onto a collection not being listed by current call is
     * advised to invoke @href SetModifierDisplay using the list of Datum Features constituting the collection.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * <br />Performs an analysis of the specified DRF box to look for a given type of situation features;
     * you can search for all the type of situation features using CATTPSSituationFeatAll enum value.
     * @param iSearchSFType  [ in ]
     *   Specifies type of the situation feature to search for.
     *   <br />In case all, an inclusive policy is used meaning that as soon as one Datum Feature (or
     *   a group) is valid for any of the types, it will increment final count. In consequence,
     *   trying to apply a change afterwards may fails in case of non compliance. 
     * @param iDRFBoxContext [ in ]
     *   First, Second or the Third Box of the DRF to investigate.
     * @param oNbrOfHit      [ out ]
     *   Number of Datum Features (or groups) supporting situation feature.
     *   <br />This count constitutes the limit is iterative calls Getxx or Setxx provided here
     *   along with this interface (legal range goes from 1 to oNbrOfHit).
     * @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>Is meaningful of proper execution</dd>
     *     <dt>S_FALSE</dt>
     *     <dd>In case no situation feature is applicable</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>When iDRFBoxContext is out of range; for instance trying to
     *         read Tertiary for reference frame A|B</dd>
     *   </dl>
     */
    virtual HRESULT GetModifierCount( CATTPSSituationFeatureType       iSearchSFType,
                                      const CATTPSDatumOrderInFrame    iDRFBoxContext,
                                      int                            * oNbrOfHit ) const = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves the list of datum features in the group corresponding to
     * considered box at given index.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * @param iSFType               [ in ]
     *   Specifies type of the situation feature.
     * @param iDRFBoxContext        [ in ]
     *   First, Second or the Third Box of the DRF to investigate.
     * @param iIndexInBox           [ in ]
     *   Index in between 1 and limit returned by GetModifierCount.
     * @param oScopeOfDatumFeatures [ out ]
     *   List of the Datum Features to be impacted by application of the situation
     *   feature modifier. This list is manadtor to be a sub list of the call
     *   @href CATITPSReferenceFrame#GetDatumFeatureInBox.
     * @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value has been correctly retrieved</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>Otherwise</dd>
     *   </dl>
     */
    virtual HRESULT GetListOfDatum( CATTPSSituationFeatureType      iSFType,
                                    const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                    int                             iIndexInBox,
                                    CATListValCATBaseUnknown_var  & oScopeOfDatumFeatures ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets situation feature at given box in DRF frame.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * <br />Manages situation feature modifier application into DRF box defined by iDRFBoxContext
     * at specified index.
     * <br />Pay attention that this step may require further action to assign the convenient
     * geometry (PoinT for [PT], Line for [SL] or plane for [PL]). Activating such an option
     * without providing the proper link to the toplogy is resulting into an invalid Datum
     * System.
     * <br /><strong><em>Important notice:</em></strong> Pay attention when this method is called
     * (most of the time when turning off a Situation Feature modifier), this can result in 
     * collections rework (parenthesis scopes are simplified when possible); it is strongly
     * recommended to run @href GetModifierCount to get refreshed information about DRF structuration.
     * @param iSFType                  [ in ]
     *   Specifies type of the situation feature.
     * @param iDRFBoxContext           [ in ]
     *    First, Second or the Third Box of the DRF to investigate.
     * @param iValue                   [ in ]
     *    TRUE is given to set this option active; FALSE has to be provided otherwise.
     * @param iIndexInBox              [ in ]
     *    Index in between 1 and limit returned by GetModifierCount.
     * @param ipiScopeOfDatumFeatures  [ in ]
     *   Optional argument: when given it is taken in consideration and offuscate iIndexInBox value.
     *<br />This argument is useful usualy to specify a collection of Datum Features (content of the list)
     *   to be applied the corresponding iModifier situation feature modifier.
     *<br /><em>Notice:</em> if modifier value, iModifier, tends to remove (M) or (L) display, regular
     * DRF parenthesis simplification process triggered by the end of this call will remove the collection
     * as it does not make sense.
     * @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>Is meaningful of proper execution</dd>
     *     <dt>S_FALSE</dt>
     *     <dd>Is possibly returned when requested application is already current
     *         status when calling this method</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>When iDRFBoxContext is out of range; for instance trying to
     *         read Tertiary for reference frame A|B</dd>
     *   </dl>
     */
    virtual HRESULT SetModifierDisplay( CATTPSSituationFeatureType           iSFType,
                                        const CATTPSDatumOrderInFrame        iDRFBoxContext,
                                        const CATBoolean                     iValue,
                                        int                                  iIndexInBox,
                                        const CATListValCATBaseUnknown_var * ipiScopeOfDatumFeatures = NULL ) = 0;

    /**
     * <br /><strong>Role</strong>: Gets situation feature type according to CATTPSSituationFeatureType
     * enum definition at given box in DRF frame. This call is useful when @href GetModifierCount has been
     * run with CATTPSSituationFeatAll specification.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *  @param iDRFBoxContext [ in ]
     *    First, Second or the Third Box of the DRF to investigate.
     *  @param iIndexInBox    [ in ]
     *    Index in between 1 and limit returned by GetModifierCount.
     *  @param oSFType        [ out ]
     *    Type of situation feature.
     *  @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value has been correctly retrieved</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>E_FAIL may occur after @href SetModifierDisplay is invoked to remove a Situation
     *         Feature modifier; FTA modeler is performing parenthesis simplification on DRF
     *         box content modification and consequently may impact the number of computed groups.</dd>
     *   </dl>
     */
    virtual HRESULT GetModifierType( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                     int                             iIndexInBox,
                                     CATTPSSituationFeatureType    & oSFType ) const = 0;  

    /**
     * <br /><strong>Role</strong>: Sets TTRS for situation feature definition.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * <br />Assigns the TTRS pointing to the geometry used to figure out the situation feature
     * applied into DRF box defined by iDRFBoxContext at specified index.
     * @param iSFType        [ in ]
     *    Specifies type of the situation feature.
     * @param iDRFBoxContext [ in ]
     *    First, Second or the Third Box of the DRF to investigate.
     * @param iIndexInBox    [ in ]
     *    Index in between 1 and limit returned by GetModifierCount.
     * @param ipiTTRSLink    [ in ]
     *    User surface created on top of the topology required to define situation feature.
     * @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>Is meaningful of proper execution</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>When iDRFBoxContext is out of range; for instance trying to
     *         read Tertiary for reference frame A|B
     *         <br />Failure is possible also in case TTRS in not compliant with situation 
     *         feature symbol ([PT] expects a point, [SL] a line and [PL] a plane)</dd>
     *   </dl>
     */
    virtual HRESULT SetSituationFeatureGeometry( CATTPSSituationFeatureType     iSFType,
                                                 const CATTPSDatumOrderInFrame  iDRFBoxContext,
                                                 int                            iIndexInBox,
                                                 const CATITTRS               * ipiTTRSLink ) = 0;

    /**
     * <br /><strong>Role</strong>: Gets TTRS used for situation feature definition.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * <br />Retrieves the TTRS pointing to the geometry used to figure out the situation feature
     * applied into DRF box defined by iDRFBoxContext at specified index.
     * @param iSFType        [ in ]
     *    Specifies type of the situation feature.
     * @param iDRFBoxContext [ in ]
     *    First, Second or the Third Box of the DRF to investigate.
     * @param iIndexInBox    [ in ]
     *    Index in between 1 and limit returned by GetModifierCount.

    * @param opiTTRSLink    [ out, CATBaseUnknown#Release ]
    *    User surface created on top of the topology employed to represent situation feature.
     *  @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value has been correctly retrieved</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>Otherwise</dd>
     *   </dl>
     */
    virtual HRESULT GetSituationFeatureGeometry( CATTPSSituationFeatureType      iSFType,
                                                 const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                                 int                             iIndexInBox,
                                                 CATITTRS                     ** opiTTRSLink ) const = 0;  
};

CATDeclareHandler (CATITPSSituationFeatures, CATBaseUnknown);

#endif
