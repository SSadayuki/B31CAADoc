#ifndef CATISamImageFilters_H
#define CATISamImageFilters_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamImageFilters : interface designed to change filters applied on "images"
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System prereqs
#include "CATBaseUnknown.h"
#include "CATListOfInt.h"
#include "CATListOfCATUnicodeString.h"
class CATString;

// CATAnalysisBase prereqs
#include "CATAnalysisExplicitTypes.h"

// CATAnalysisVisuInterfaces prereqs 
#include "CATSamComparisonOperator.h"
#include "CATSamComplexPart.h"
#include "CATSamFilterDomain.h"
class CATISamImageAxisSystem;

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageFilters;

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> But modifications
 * may be done : <br> For example change the filters (components,layers,lamina,...),
 * the selections,...<br>
 * Query this interface in order to make some changes to an existing <i>Image</i>.
 */ 

class ExportedByCATSamVisuUUID CATISamImageFilters : public CATBaseUnknown
{
  CATDeclareInterface;
  
public :

  /**
    * Retrieves the current position for this image <br>
    * that is for a given visutype and a given criteria
    * @param oPosition
    * the current Position
    */
  virtual HRESULT GetPosition ( CATString & oPosition ) = 0;

  /**
    * Defines the current position for this image <br>
    * that is for a given visutype and a given criteria
    * @param iPosition
    * the new Position
    */
  virtual HRESULT SetPosition ( CATString iPosition ) = 0;

  /**
    * Retrieves the current value type used in this image
    * @param oValueType
    * the current value type
    */
  virtual HRESULT GetValueType ( CATSamValue & oValueType ) = 0;

  /**
    * Defines the current value type to use in this image
    * @param iValueType
    * the new value type
    */
  virtual HRESULT SetValueType ( CATSamValue iValueType ) = 0;

  /**
    * Retrieves the current filter used for complex values
    * @param oComplexPart
    *   the current complex filter
    * @param oParameter
    *   the parameter associated to complex part (angle for modulus with phase)
    * @see CATSamComplexPart
    */
  virtual HRESULT GetComplexPart ( CATSamComplexPart & oComplexPart , float & oParameter ) = 0;

  /**
    * Sets the current filter used for complex values
    * @param iComplexPart
    *   the current complex filter
    * @param iParameter
    *   the parameter associated to complex part (angle for modulus with phase)
    * @see CATSamComplexPart
    */
  virtual HRESULT SetComplexPart ( CATSamComplexPart iComplexPart , const float iParameter = 0.f ) = 0;

  /**
    * Retrieves all available filter domains for this image <br>
    * Used on hybrid model to define where filters have to be applied <br>
    * That is : on Volumic , on Surfacic or on Lineic part <br>
    * Retrieves also the current filter domain
    * @param oFilterDomain
    * the list of available filter domains
    * @param oNbFilter
    * Number of supported filter domains
    * @see CATSamFilterDomain
    */
  virtual HRESULT GetAllAvailableFilterDomain(CATSamFilterDomain*& oFilterDomain,
                                              int&                 oNbFilter)=0;

  /**
    * Retrieves the axis system used for image computation.<br>
    * @param iFilterDomain
    * the targeted FilterDomain
    * @param oAxisSystem
    * the axis system
    * @see CATISamImageAxisSystem
    */
  virtual HRESULT GetAxisSystem ( CATSamFilterDomain  iFilterDomain ,
                                  CATISamImageAxisSystem * & oAxisSystem ) = 0;

  /**
    * Retrieves the current selected components for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param oCodeComponent
    * oCodeComponent = Sum(2**n) for the n current selected components <br>
    * <b>Default value</b>: all components selected.: <br>
    *   oCodeComponent=2+4+8+16+32+64+128+256+512 <br>
    *   oCodeComponent=0 will be interpreted as ALL COMPONENTS <br>
    * Code components depends on the mathematical type of the characteristic <br>
    * Code components depends on the current visutype and criteria <br>
    * @see CATSamFilterDomain
    */
  virtual HRESULT GetComponent(CATSamFilterDomain  iFilterDomain,
                               int&                oCodeComponent) = 0;

  /**
    * Sets the components to select for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param iCodeComponent
    * iCodeComponent = Sum(2**n) for the n components to select <br>
    * <b>Default value</b>: all components selected.: <br>
    *   iCodeComponent=2+4+8+16+32+64+128+256+512 <br>
    *   iCodeComponent=0 will be interpreted as ALL COMPONENTS <br>
    * Code components depends on the mathematical type of the characteristic <br>
    * Code components depends on the current visutype and criteria
    * @see CATSamFilterDomain
    */
  virtual HRESULT SetComponent(CATSamFilterDomain  iFilterDomain,
                               int                 iCodeComponent) = 0;

  /**
    * Retrieves the NLS strings associated to code components for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param iListCodeComponent
    * list of component codes concerned
    * CodeComponent = Sum(2**n) for the n current selected components <br>
    * <b>Default value</b>: all components selected.: <br>
    *   oCodeComponent=2+4+8+16+32+64+128+256+512 <br>
    *   oCodeComponent=0 will be interpreted as ALL COMPONENTS <br>
    * Code components depends on the mathematical type of the characteristic <br>
    * Code components depends on the current visutype and criteria <br>
    * @param oListComponentLabels
    * the list of NLS strings associated to the given list of component codes
    * @see CATSamFilterDomain
    */
  virtual HRESULT GetComponentLabels(CATSamFilterDomain         iFilterDomain,
                                     CATListOfInt&              iListCodeComponent,
                                     CATListOfCATUnicodeString& oListComponentLabels) = 0;

  /**
    * Retrieves the current layer for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param oCodeLayer
    * <b>Legal values</b>: <tt>for SUPERIOR layer</tt> is 2**1 <br>
    * <b>Legal values</b>: <tt>for MIDDLE layer </tt> is 2**2 <br>
    * <b>Legal values</b>: <tt>for INFERIOR layer </tt> is 2**3 <br>
    * <b>Legal values</b>: <tt>for all layers </tt> is Sum(2**n) for the n available layers <br>
    * oCodeLayer=0 will be interpreted as ALL LAYERS
    * @see CATSamFilterDomain
    */
  virtual HRESULT GetLayer(CATSamFilterDomain  iFilterDomain,
                           int&                oCodeLayer) = 0;

  /**
    * Defines a new layer for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param iCodeLayer
    * <b>Legal values</b>: <tt>for SUPERIOR layer</tt> is 2**1 = 2 <br>
    * <b>Legal values</b>: <tt>for MIDDLE layer </tt> is 2**2 = 4 <br>
    * <b>Legal values</b>: <tt>for INFERIOR layer </tt> is 2**3 = 8 <br>
    * <b>Legal values</b>: <tt>for SUPERIOR and INFERIOR layers </tt> is 2**1+2**3 = 10 <br>
    * <b>Legal values</b>: <tt>for all layers </tt> is Sum(2**n) for the n available layers<br>
    * iCodeLayer=0 will be interpreted as ALL LAYERS
    * @see CATSamFilterDomain
    */
  virtual HRESULT SetLayer(CATSamFilterDomain  iFilterDomain,
                           int                 iCodeLayer) = 0;

  /**
    * Retrieves the current lamina for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param oLamina
    * the current lamina number
    * @see CATSamFilterDomain
    */
  virtual HRESULT GetLamina(CATSamFilterDomain  iFilterDomain,
                            int&                oLamina) = 0;

  /**
    * Sets the new lamina for this image <br>
    * <b>Note</b>: Because of hybrid model you'll have to define first the filter domain
    * @param iFilterDomain
    * The FilterDomain concerned 
    * @param iLamina
    * the new lamina number
    * @see CATSamFilterDomain
    */
  virtual HRESULT SetLamina(CATSamFilterDomain  iFilterDomain,
                            int                 iLamina) = 0;

  /**
    * Defines the current combination mode to use in this image
    * @param iMode
    * the new combination mode
    */
  virtual HRESULT SetCombinationMode ( CATBoolean iMode ) = 0;

  /**
    * Retrieves the current combination mode to use in this image
    * @param iMode
    * the new combination mode
    */
  virtual HRESULT GetCombinationMode ( CATBoolean & oMode ) = 0;

  /**
    * Defines the current repeat number. <br>
    * To use only when combination mode has been set to FALSE <br>
    * ( that is, when values are not combined ).
    * @param iRepeat
    * the repeat number
    * iRepeat = -1 will be interpreted as ALL REPEATS and makes sense for SYMBOL visualization mode only.
    */

  virtual HRESULT SetCurrentRepeat ( int iRepeat ) = 0;

  /**
    * Retrieves the current repeat number. <br>
    * To use only when combination mode has been set to FALSE <br>
    * ( that is, when values are not combined ).
    * @param iRepeat
    * the repeat number
    */
  virtual HRESULT GetCurrentRepeat ( int & oRepeat ) = 0;
  
  /**
    * Retrieves the current status of the keep only filter. <br>
    * WARNING: To use only when the mathematical type of image is scalar or vector and <br>
    * the image does not have discrete values
    * @param oStatus
    * the status
    * @param oAbsoluteMode
    * the absolute mode
    * oAbsoluteMode = TRUE means that filter is applied on absolute values
    * oAbsoluteMode = FALSE means that filter is applied on actual values
    * @param oCriteria
    * the criteria
    * @see CATSamFilterCriteria
    * @param oValue
    * the value for filtering
    * @param oSndValue
    * the second value for filtering (used for "between" and "not between" operators)
    */
  virtual HRESULT GetKeepOnlyParameters ( CATBoolean& oStatus, CATBoolean& oAbsoluteMode, CATSamComparisonOperator& oCriteria, 
    double& oValue, double& oSndValue ) = 0;
  
  /**
    * Retrieves the current status of the keep only filter. <br>
    * WARNING: To use only when the mathematical type of image is scalar or vector and <br>
    * the image does not have discrete values
    * @param iStatus
    * the status
    * @param iAbsoluteMode
    * the absolute mode
    * iAbsoluteMode = TRUE means that filter is applied on absolute values
    * iAbsoluteMode = FALSE means that filter is applied on actual values
    * @param iCriteria
    * the criteria
    * @see CATSamFilterCriteria
    * @param iValue
    * the value for filtering
    * @param iSndValue
    * the second value for filtering (used for "between" and "not between" operators).
    */
  virtual HRESULT SetKeepOnlyParameters ( CATBoolean iStatus, CATBoolean iAbsoluteMode, CATSamComparisonOperator iCriteria, 
    const double iValue , const double iSndValue = 0. ) = 0;


  /** @nodoc */
  virtual HRESULT GetAllAvailablePositions ( CATString * & oPosition,
                                             int &         oNbPosition,
                                             int &         oCurrentNumber ) = 0;

  /** @nodoc */
  virtual HRESULT GetAllAvailableValueTypes ( CATSamValue * & oValueTypes ,
                                              int & oNbValueTypes ,
                                              CATSamValue & oCurrentType ) = 0;

  /** @nodoc */
  virtual HRESULT GetAllAvailableComponent(CATSamFilterDomain  iFilterDomain,
                                           int&                oCodeComponent) = 0;

  /** @nodoc */
  virtual HRESULT GetAllAvailableLayer(CATSamFilterDomain  iFilterDomain,
                                       int&                oCodeLayer) = 0;

  /** @nodoc */
  virtual HRESULT GetAllAvailableLamina (CATSamFilterDomain  iFilterDomain,
                                         int&                oLaminaSize) = 0;

  /** @nodoc */
  virtual HRESULT GetAllAvailableRepeats ( int & oNbRepeat , int * & oRepeats ) = 0;

};

CATDeclareHandler(CATISamImageFilters, CATBaseUnknown);

#endif

