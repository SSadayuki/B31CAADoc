#ifndef CATITPSCollectionPlane_H
#define CATITPSCollectionPlane_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

class CATICkeParm ;
class CATITPSDatumSimple ;

extern "C" const IID IID_CATITPSCollectionPlane ;

/**
* This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
* <b>Role</b>: Interface to manage the “All around” area. Such a semantic information is existing
* in ISO or ASME, but most of the methods provided along with this interface are only valid for ISO
* (Support of ISO 1101:2012).
* <br />Should the end user interested in getting the direction definition (either from a mathematical
* standpoint or with TTRS in charge of the pointed topology), it is advised to invoke method
* @href CATITPSToleranceZone#GetDirection.
*/

class CATITPSCollectionPlane : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * <br /><strong>Role</strong>: Sets symbol for collection plane.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ipIIDOfGDTSymbol [ in ]
    *    Legal value are: &IID_CATITPSPerpendicularity, &IID_CATITPSParallelism or &IID_CATITPSAngularity.
    *    Refer to @href CATITPSPerpendicularity, @href CATITPSParallelism, or @href CATITPSAngularity.
    * <br />Given such a IID pointer is enabling to set up the accurate symbol in collection plane
    *    definition; this call needs to be followed by SetDatumFeature to complete "All around"
    *    definition and SetAngularDimensionValue in case of angularity symbol.
    *    @href SetDatumFeature and @href SetAngularDimensionValue.
    * <br />NULL pointer value is also acceptable to remove any collection plane definition.
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
    * <br /><strong>Role</strong>: Gets symbol for collection plane.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param opIIDOfGDTSymbol [ out ]
    *    Value of the symbol employed to define collection plane. ISO 1101:2012 is specifying
    *    a limited set of symbols being one out of the following elicitation of const IID *
    *    alternatives: &IID_CATITPSPerpendicularity, &IID_CATITPSParallelism or &IID_CATITPSAngularity.
    *    Refer to @href CATITPSPerpendicularity, @href CATITPSParallelism or @href CATITPSAngularity.
    *    <br />NULL value is also meaningful and depict situation when there is no "All around" set.
    *    <br />To test an IID use CATCmpGuid of System framework.  @see CATCmpGuid
    *    @example 
    *  <pre>CATITPSCollectionPlane * piCollectionPlaneQuery = NULL;
    *  ...
    *  // Retrieve interface
    *  ...
    *  IID * pIID = NULL;
    *  HRESULT rc = piCollectionPlaneQuery -> GetSymbol (&pIID);
    *  if ( FAILED( rc )) { // Error handling... }
    *  ...
    *  // No intersection planes
    *  if(! pIID ) { // Code subsequent when no symbol set... }
    *  ...
    *  // Test retrieved symbol
    *  if ( CATCmpGuid( &IID_CATITPSPerpendicularity, iIID )) { // Perpendicularity symbol .... }
    *  else if ( CATCmpGuid( &IID_CATITPSParallelism, iIID )) { // Parallelism symbol .... }
    *  else if ( CATCmpGuid( &IID_CATITPSAngularity, iIID ))  { // Angularity symbol .... }
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
    * <br /><strong>Role</strong>: Sets Datum Feature to complete collection plane definition.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ispDatum [ in ]
    *    Datum Feature provided to set up "All around" definition in conjunction with applied symbol.
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
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    * <br /><strong>Role</strong>: Gets Datum Feature involved in collection plane definition.
    *  @param ospDatum [ out ]
    *    Datum Feature saved into underlying geometrical specification to define "All around".
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

    /**
    * <br /><strong>Role</strong>: Sets the angle knowledge parameter used in collection plane definition when symbol is angularity.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param ipiAngularSize [ in ]
    *    Knowledge parameter of type AngleType to finalize collection plane definition.
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
    * <br /><strong>Role</strong>: Gets the angle knowledge parameter used in collection plane definition.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param opiAngularSize [ out, CATBaseUnknown#Release ]
    *    Knowledge parameter of type AngleType used into collection plane definition.
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

CATDeclareHandler (CATITPSCollectionPlane, CATBaseUnknown);

#endif
