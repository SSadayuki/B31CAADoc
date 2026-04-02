//	COPYRIGHT DASSAULT SYSTEMES 2015
//==============================================================================
//                                   CATIA - Version 5
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
//==============================================================================

#ifndef CATIDftDatumTarget_H
#define CATIDftDatumTarget_H

#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDatumTarget;
#else
extern "C" const IID IID_CATIDftDatumTarget ;
#endif

class CATUnicodeString;
class CATIDftTextRange;

/**
* Interface for DatumTarget objects.
*/
class ExportedByDraftingItfCPP CATIDftDatumTarget: public CATBaseUnknown
{
    CATDeclareInterface;
public:

  /** 
  * Gets the upper text of Datum Target.
  *
  * @param oUpText [out]
  *   The upper text of the Datum Target
  *
  * @return
  *   <code>S_OK</code> upper text has been correctly retrieved
  *   <code>E_UNEXPECTED</code> An unexpected error occured
  *
  */
  virtual HRESULT GetUpText(CATUnicodeString &oUpText) = 0; 

  /**
   * Gets the lower text of Datum Target.
   *
   * @param oLowText [out]
   *   The lower text of the Datum Target
   *
   * @return
   *   <code>S_OK</code> lower text has been correctly retrieved
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT GetLowText(CATUnicodeString &oLowText) = 0; 

  /**
   * Sets the upper text of Datum Target.
   *
   * @param iUpText [in]
   *   The upper text of the Datum Target
   *
   * @return
   *   <code>S_OK</code> upper text has been correctly set
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT SetUpText(const CATUnicodeString &iUpText) = 0; 

  /**
   * Sets the lower text  of DatumTarget.
   *
   * @param iLowText [in]
   *   The lower text of the Datum Target
   *
   * @return
   *   <code>S_OK</code> lower text has been correctly set
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT SetLowText(const CATUnicodeString &iLowText) = 0; 

  /**
   * @nodoc use @href#GetSizeSpecifier
   */
  virtual CATBoolean GetDiameter() = 0; 

  /**
   * @nodoc use @href#SetSizeSpecifier
   */
  virtual HRESULT SetDiameter(CATBoolean iHasDiameter) = 0; 

  /**
   * Sets the Datum Target movable or not
   * @param iBool [in]
   * <dt> <dd> - FALSE : Not movable
   * <dt> <dd> - TRUE  : Movable.
   * </dl>
   * @return
   *   <code>S_OK</code> if the operation succeeded.
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT SetMovable(CATBoolean iBool) = 0; 

  /**
   * Asks if datum target is movable or not
   * @param iBool [out]
   * <dt> <dd> - FALSE : Not movable
   * <dt> <dd> - TRUE  : Movable.
   * </dl>
   * @return
   *   <code>S_OK</code> if the operation succeeded.
   *   <code>E_FAIL</code> An unexpected error occured
   */
  virtual HRESULT IsMovable(CATBoolean & oBool) = 0; 

  /**
   * Defines SizeSpecifier parameter types.
   * @param None
   *   no symbol to set as prefix of upper text.  
   * @param Diameter
   *   a diameter  symbol is set as prefix of upper text.
   * @param Square
   *   a square    symbol is set as prefix of upper text.
   *
   */
  enum SizeSpecifier { NoSymb = 0, Diameter = 1, Square = 2 };

  /**
   * Gets the presence of a symbol in the upper part of DatumTarget.
   * @param oSpec [out]
   * <dt> <dd> - None : No symbol.
   * <dt> <dd> - Diameter  : a diameter  symbol is set as prefix of upper text.
   * <dt> <dd> - Square    : a square    symbol is set as prefix of upper text.
   * </dl>
   * @return
   *   <code>S_OK</code> if the operation succeeded.
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT GetSizeSpecifier(SizeSpecifier * oSpec) = 0; 

  /**
   * Sets the presence of the diameter or rectangle symbol in the upper part of DatumTarget.
   *
   * @param iSpec [in]
   * <dt> <dd> - None : No symbol.
   * <dt> <dd> - Diameter  : Add a diameter  symbol as prefix of upper text.
   * <dt> <dd> - Square    : Add a square    symbol as prefix of upper text.
   * </dl>
   * @return
   *   <code>S_OK</code> if the operation succeeded.
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT SetSizeSpecifier(SizeSpecifier iSpec) = 0; 


  /**
   * Gets the list of a symbol supported in the upper part of DatumTarget.
   * @param oNb [out] Number od SizeSpecifiers possibilities, the SizeSpecifiers is given in oSupported Array
   * @param oSupported [out] Array of all SizeSpecifiers Supported
   * <dt> <dd> - None : it is possible to have no symbol.
   * <dt> <dd> - Diameter  : it is possible to have a diameter symbol.
   * <dt> <dd> - Square    : it is possible to have a square symbol.
   * @return
   *   <code>S_READONLY</code> Method correctly executed, Returned value cannot be modified, it's read-only.
   *   <code>E_FAIL</code> Method execution failed, Reasons of the failure are not given.
   */
  virtual HRESULT GetSupportedSizeSpecifier(int &oNb, SizeSpecifier **oSupported) = 0;

  /**
   * @nodoc
   * Get the upper text of DatumTarget. Use it to access subparts of it.
   *
   * @param oUpString [out, IUnknown#Release]
   *    [out] The upper text.
   * @return
   *   <code>S_OK</code> if the operation succeeded.
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT GetUpString(CATIDftTextRange **oUpString) = 0; 

  /**
   * @nodoc
   * Get the lower text of DatumTarget. Use it to access subparts of it.
   *
   * @param oLowString [out, IUnknown#Release]
   *    [out] The lower text.
   * @return
   *   <code>S_OK</code> if the operation succeeded.
   *   <code>E_UNEXPECTED</code> An unexpected error occured
   */
  virtual HRESULT GetLowString(CATIDftTextRange **oLowString) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT GetUpText(wchar_t **oUpText) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT GetLowText(wchar_t **oLowText) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT SetUpText(const wchar_t *iUpText) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT SetLowText(const wchar_t *iLowText) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT GetDiameter(int *oHasDiameter) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT SetDiameter(const int iHasDiameter) = 0; 
};
CATDeclareHandler(CATIDftDatumTarget, CATBaseUnknown);
//------------------------------------------------------------------
#endif
