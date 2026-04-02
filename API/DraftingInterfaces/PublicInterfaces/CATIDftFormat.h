#ifndef CATIDftFormat_H
#define CATIDftFormat_H

// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATIDftFormat.h
// 
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// Parent class
#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftFormat ;
#else
extern "C" const IID IID_CATIDftFormat ;
#endif

// System
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

//DraftingInterfaces
#include "CATFormatOrientationsType.h"

/**
 * <B>Role:</B> CATIDftFormat is an interface dedicated to get the generic informations carried by a format that are 
 * consequently shared among sheets associated with this format.
 */
class ExportedByDraftingItfCPP CATIDftFormat: public CATBaseUnknown
{

  CATDeclareInterface;

  public:

/**
 * Retrieves the name of the format.
 * @param <tt>CATUnicodeString &oName</tt>
 * [out] The name of the format as an unicode string.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetFormatName(CATUnicodeString &oName)= 0;

/**
 * Retrieves the width of the format.
 * Note: the width of a format is same as the width of a sheet having a landscape orientation and associated with this format.
 * @param <tt>double &oWidth</tt>
 * [out] The width of the format.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetFormatWidth(double &oWidth)= 0;

/**
 * Retrieves the height of the format.
 * Note: the height of a format is same as the height of a sheet having a landscape orientation and associated with this format.
 * @param <tt>double &oHeight</tt>
 * [out] The height of the format.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetFormatHeight(double &oHeight)= 0;


/**
 * Retrieves the format orientations type.
 * <B>Note:</B> To set the orientations type on a custom format, see CATIDftDrawingFormats#SetOrientationsTypeOnCustomFormat
 * @param <tt>CATFormatOrientationsType &oOrientsType</tt>
 * [out] The orientations type of the format.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 * @see CATFormatOrientationsType.
 */
  virtual HRESULT GetFormatOrientationsType(CATFormatOrientationsType &oOrientsType)= 0;

};

// Handler.
CATDeclareHandler(CATIDftFormat, CATBaseUnknown);

#endif

