// COPYRIGHT Dassault Systemes 2003
#ifndef CATIDftSheetFormat_H
#define CATIDftSheetFormat_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// Parent class
#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftSheetFormat ;
#else
extern "C" const IID IID_CATIDftSheetFormat ;
#endif

// System
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

// DraftingInterfaces
#include "CATSheetOrientation.h"
class CATIDftFormat;

/**
 * <B>Role:</B> CATIDftSheetFormat is an interface dedicated to access the sheet format, orientation, display mode.
 * @see CATIDftFormat.
 */
class ExportedByDraftingItfCPP CATIDftSheetFormat: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the format associated with this sheet.
 * @see CATIDftFormat, CATIDftCustomFormat
 * @param <tt>const IID &iIID</tt>
 * [in] the IID of the interface by which the format will be retrieved.
 * @param <tt>IUnknown **oFormat</tt> [out, IUnknown#Release]
 * the interface.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetSheetFormat(const IID &iIID, IUnknown **oFormat)= 0;


/**
 * Sets the format associated to this sheet to the format in the drawing whose name is iFormatName.
 * <B>Note:</B> The sheet orientation will be modified (if necessary) to be compliant with the format orientations type.
 * <B>Note:</B> iFormat must be a format in the drawing.
 * @param <tt>const CATUnicodeString &iFormatName</tt>
 * [in] The name of the format.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Success.
 * <dt> <tt>E_INVALIDARG</tt>   <dd> The given format is not available in the drawing. The valuation could not be performed.
 * <dt> <tt>E_FAIL</tt>         <dd> Error.
 * </dl>
 */
  virtual HRESULT SetSheetFormat(const CATUnicodeString &iFormatName)= 0;


/**
 * Sets the format associated with this sheet to iFormat.
 * <B>Note:</B> The sheet orientation will be modified (if necessary) to be compliant with the format orientations type.
 * <B>Note:</B> iFormat must be a format in the drawing.
 * @param <tt>CATIDftFormat *iFormat</tt>
 * [in] The format.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK   </tt>     <dd> Success.
 * <dt> <tt>E_FAIL </tt>     <dd> Error.
 * </dl>
 */
  virtual HRESULT SetSheetFormat(CATIDftFormat *iFormat)= 0;


/**
 * Retrieves the sheet orientation.
 * @param <tt>CATSheetOrientation &oOrient</tt>
 * [out] The orientation of the sheet.
 * @see CATSheetOrientation
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetSheetOrientation(CATSheetOrientation &oOrient)= 0;


/**
 * Sets the sheet orientation to iOrient.
 * <B>Note:</B> The sheet orientation must be compliant with the sheet format orientations type.
 * @see CATIDftFormat.
 * @param <tt>CATSheetOrientation iOrient</tt>
 * [in] The new orientation of the sheet.
 * @see CATSheetOrientation
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>S_FALSE</tt>  <dd> The requested orientation is not compliant with the sheet format, therefore the sheet is unchanged.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT SetSheetOrientation(CATSheetOrientation iOrient)= 0;


/**
 * Retrieves the sheet display mode.
 * @param <tt>CATBoolean &oDisplayMode</tt>
 * [out] The sheet display mode. This parameter is used in order to check whether the sheet format frame should be displayed or not.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetSheetDisplayMode(CATBoolean &oDisplayMode)= 0;


/**
 * Sets the sheet display mode to iDisplayMode.
 * @param <tt>CATBoolean iDisplayMode</tt>
 * [in] The new sheet display mode. This parameter is used in order to check whether the sheet format frame should be displayed or not.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 * @see CATIDftSheetFormat#GetSheetDisplayMode
 */
  virtual HRESULT SetSheetDisplayMode(CATBoolean iDisplayMode)= 0;


/**
 * Retrieves the sheet size according to the current sheet orientation.
 * <B>Note:</B> The sheet size is based on its format and its orientation.
 * @param <tt>double &oWidth</tt>
 * [out] The width of the sheet.
 * @param <tt>double &oHeight</tt>
 * [out] The height of the sheet.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetSheetSize(double &oWidth, double &oHeight)= 0;

};

// Handler correspondant.
CATDeclareHandler(CATIDftSheetFormat, CATBaseUnknown);

#endif
