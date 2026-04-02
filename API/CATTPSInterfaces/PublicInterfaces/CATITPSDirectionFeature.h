#ifndef CATITPSDirectionFeature_H
#define CATITPSDirectionFeature_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

class CATICkeParm ;
class CATITPSDatumSimple ;

extern "C" const IID IID_CATITPSDirectionFeature ;

/**
 * This interface is implemented by CATTPSToleranceWithDRF features (ISO 1101:2017, Circular run-out)
 * and recently in case of ISO 14405 Standard by Dimension features.
 * <b>Role</b>: Interface to manage the “Direction of the width of the tolerance zone” area. Such a
 * semantic information is existing in ISO or ASME, but most of the methods provided
 * along with this interface are valid only for ISO (Support of ISO 1101:2012).
 * <br />This interface is also interesting in the frame of ISO 14405-1 and 14405-3 revision for sizes modifiers definition.
 * <br />Should the end user interested in getting the direction definition (either from a mathematical
 * standpoint or with TTRS in charge of the pointed topology), it is advised to invoke method
 * @href CATITPSToleranceZone#GetDirection.
 */

class CATITPSDirectionFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Sets symbol for direction feature.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *  @param ipIIDOfGDTSymbol [ in ]
     *    Legal value are: &IID_CATITPSAngularity (prefered), &IID_CATITPSPerpendicularity or
     *    &IID_CATITPSParallelism, @href CATITPSAngularity, @href CATITPSPerpendicularity, @href CATITPSParallelism, @href CATITPSRunOut.
     *    <br />Given such a IID pointer is enabling to set up the accurate symbol in direction
     *    feature definition; this call needs to be followed by SetDatumFeature to complete
     *    the “Direction of the width of the tolerance zone” definition followed by
     *    SetAngularDimensionValue in case of angularity symbol, @href SetDatumFeature, @href SetAngularDimensionValue.
     *    <br />NULL pointer value is also acceptable to remove any previous direction feature definition.
     *  @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value reports a proper execution</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>In case Standard is not ISO, or Standard is not recent enough to support
     *         ISO 1101:2012 revision; another possibility is when ipIIDOfGDTSymbol is 
     *         not corresponding to one of the expected IID type</dd>
     *   </dl>
    */
    virtual HRESULT SetSymbol( const IID * ipIIDOfGDTSymbol ) = 0 ;

    /**
     * <br /><strong>Role</strong>: Gets symbol for direction feature.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *  @param opIIDOfGDTSymbol [ out ]
     *    Value of the symbol employed to define direction feature. ISO 1101:2012 is specifying
     *    a limited set of symbols being one out of the following elicitation of const IID *
     *    alternatives: &IID_CATITPSAngularity (prefered), &IID_CATITPSPerpendicularity or
     *    &IID_CATITPSParallelism, @href CATITPSAngularity, @href CATITPSPerpendicularity, @href CATITPSParallelism, @href CATITPSRunOut.
     *    <br />NULL value is also meaningful and depict situation when there is no “Direction of
     *    the width of the tolerance zone” defined.
     *    <br />To test an IID use CATCmpGuid of System framework.  @see CATCmpGuid
     *  @example
     *  <pre>CATITPSDirectionFeature * piDirectionFeatureQuery = NULL;
     *  ...
     *  // Retrieve interface
     *  ...
     *  IID * pIID = NULL;
     *  HRESULT rc = piDirectionFeatureQuery -> GetSymbol (&pIID);
     *  if ( FAILED( rc )) { // Error handling... }
     *  ...
     *  // No intersection planes
     *  if(! pIID ) { // Code subsequent when no symbol set... }
     *  ...
     *  // Test retrieved symbol
     *  if ( CATCmpGuid( &IID_CATITPSAngularity, iIID ))            { // Angularity symbol .... }
     *  else if ( CATCmpGuid( &IID_CATITPSPerpendicularity, iIID )) { // Perpendicularity symbol .... }
     *  else if ( CATCmpGuid( &IID_CATITPSParallelism, iIID ))      { // Parallelism symbol .... }
     *  else if ( CATCmpGuid( &IID_CATITPSRunOut, iIID ))           { // RunOut symbol .... }
     *  else { // Error handling... }
     *  </pre>
     *  @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value reports a proper execution</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>In case Standard is not ISO, or Standard is not recent enough to support
     *         ISO 1101:2012 revision; another possibility is when ipIIDOfGDTSymbol is 
     *         not corresponding to one of the expected IID type</dd>
     *   </dl>
     */
    virtual HRESULT GetSymbol( IID ** opIIDOfGDTSymbol ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Sets Datum Feature to complete direction feature definition.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ispDatum [ in ]
    *    Datum Feature provided to set up “Direction of the width of the tolerance zone”
    *    definition in conjunction with applied symbol.
    *  @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>This value reports a proper execution</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>In case Standard is not ISO, or Standard is not recent enough to support
    *         ISO 1101:2012 revision; error occurs too when Datum Feature is not convenient with
    *         symbol to define a valid collection plane</dd>
    *   </dl>
    */
    virtual HRESULT SetDatumFeature( const CATITPSDatumSimple * ipiDatum ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Gets Datum Feature involved in direction feature definition.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ospDatum [ out ]
    *    Datum Feature saved into underlying geometrical specification to define “Direction
    *    of the width of the tolerance zone”.
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
    virtual HRESULT GetDatumFeature( CATITPSDatumSimple ** opiDatum ) const = 0 ;

    /**
    * <br /><strong>Role</strong>: Sets the angle knowledge parameter used in direction feature when symbol is angularity.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ipiAngularSize [ in ]
    *    Knowledge parameter of type AngleType to finalize direction feature.
    *    @see CATICkeParm, CATICkeType
    *  @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>This value reports a proper execution</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>In case Standard is not ISO, or Standard is not recent enough to support
    *         ISO 1101:2012 revision; error occurs also if symbol applied is not Angularity.
    *         Another well identified reason of failure is Datum Feature is not set or
    *         when given knowledge parameter is not an AngleType</dd>
    *   </dl>
    */
    virtual HRESULT SetAngularDimensionValue( const CATICkeParm * ipiAngularSize ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Gets the angle knowledge parameter used in direction feature.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param opiAngularSize [ out, CATBaseUnknown#Release ]
    *    Knowledge parameter of type AngleType used into direction feature.
    *    @see CATICkeParm, CATICkeType
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
    virtual HRESULT GetAngularDimensionValue( CATICkeParm ** opiAngularSize ) const = 0 ;
};

CATDeclareHandler (CATITPSDirectionFeature, CATBaseUnknown);

#endif
