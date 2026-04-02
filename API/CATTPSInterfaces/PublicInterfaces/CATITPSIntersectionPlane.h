#ifndef CATITPSIntersectionPlane_H
#define CATITPSIntersectionPlane_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

class CATITPSDatumSimple ;

extern "C" const IID IID_CATITPSIntersectionPlane ;

/**
 * This interface is implemented by CATTPSToleranceWithDRF, CATTPSToleranceWithoutDRF and recently in case of ISO
 * 14405 Standard by Dimension features.
 * <b>Role</b>: Interface to manage the “Tolerance Lines Definition” area. Such a semantic information is existing
 * in ISO or ASME, but most of the methods provided along with this interface are only valid for ISO
 * (Support of ISO 1101:2012).
 * <br />This interface is also interesting in the frame of ISO 14405-1 and 14405-3 revision for sizes modifiers definition.
 * <br />Should the end user interested in getting the direction definition (either from a mathematical
 * standpoint or with TTRS in charge of the pointed topology), it is advised to invoke method
 * CATITPSToleranceZone::GetDirection, @href CATITPSToleranceZone#GetDirection.
 */

class CATITPSIntersectionPlane : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * <br /><strong>Role</strong>: Sets symbol for intersection planes.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ipIIDOfGDTSymbol [ in ]
    *    Legal value are: &IID_CATITPSPerpendicularity, &IID_CATITPSParallelism or &IID_CATITPSSymmetry,
    *    @href CATITPSPerpendicularity, @href CATITPSParallelism, @href CATITPSSymmetry.
    *    <br />Given such a IID pointer is enabling to set up the accurate symbol in intersection plane
    *    definition; this call needs to be followed by SetDatumFeature to complete direction line
    *    definition, @href SetDatumFeature.
    *    <br />NULL pointer value is also acceptable to remove any intersection plane definition.
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
    * <br /><strong>Role</strong>: Gets symbol for intersection planes.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param opIIDOfGDTSymbol [ out ]
    *    Value of the symbol employed to define intersection plane. ISO 1101:2012 is specifying
    *    a limited set of symbols being one out of the following elicitation of const IID *
    *    alternatives: &IID_CATITPSPerpendicularity, &IID_CATITPSParallelism or &IID_CATITPSSymmetry,
    *    @href CATITPSPerpendicularity, @href CATITPSParallelism, @href CATITPSSymmetry.
    *    <br />NULL value is also meaningful and depict situation when no direction lines area is set.
    *    <br />To test an IID use CATCmpGuid of System framework.  @see CATCmpGuid
    *  @example
    *  <pre>CATITPSIntersectionPlane * piIntersectionPlaneQuery = NULL;
    *  ...
    *  // Retrieve interface
    *  ...
    *  IID * pIID = NULL;
    *  HRESULT rc = piIntersectionPlaneQuery -> GetSymbol (&pIID);
    *  if ( FAILED( rc )) { // Error handling... }
    *  ...
    *  // No intersection planes
    *  if(! pIID ) { // Code subsequent when no symbol set... }
    *  ...
    *  // Test retrieved symbol
    *  if ( CATCmpGuid( &IID_CATITPSPerpendicularity, iIID )) { // Perpendicularity symbol .... }
    *  else if ( CATCmpGuid( &IID_CATITPSParallelism, iIID )) { // Parallelism symbol .... }
    *  else if ( CATCmpGuid( &IID_CATITPSSymmetry, iIID ))    { // Symmetry symbol .... }
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
    * <br /><strong>Role</strong>: Sets Datum Feature to complete intersection plane definition.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ispDatum [ in ]
    *    Datum Feature provided to set up direction lines area in conjunction with applied symbol.
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
    * <br /><strong>Role</strong>: Gets Datum Feature involved in intersection plane definition.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ospDatum [ out ]
    *    Datum Feature saved into underlying geometrical specification to define direction lines
    *    area.
    *  @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>This value reports a proper execution</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT GetDatumFeature( CATITPSDatumSimple ** opiDatum ) const = 0 ;
};

CATDeclareHandler (CATITPSIntersectionPlane, CATBaseUnknown);

#endif
