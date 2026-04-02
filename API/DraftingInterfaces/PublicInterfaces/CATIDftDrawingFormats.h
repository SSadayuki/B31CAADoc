#ifndef CATIDftDrawingFormats_H
#define CATIDftDrawingFormats_H

// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATIDftDrawingFormats.h
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
extern ExportedByDraftingItfCPP IID IID_CATIDftDrawingFormats ;
#else
extern "C" const IID IID_CATIDftDrawingFormats ;
#endif

// DraftingInterfaces
class CATIDftCustomFormat;
class CATIDftFormat;

// enum
#include "CATFormatOrientationsType.h"

// System
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATCollec.h"
class CATLISTV(CATISpecObject_var);

/**
 * <B>Role:</B> CATIDftDrawingFormats is an interface dedicated to manage formats in the drawing.
 */
class ExportedByDraftingItfCPP CATIDftDrawingFormats: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Appends to ioFormats the formats available in the drawing.
 * @param <tt>CATLISTP(CATIDftFormat) &ioFormats</tt>
 * [in out] The list the formats will be appended to.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetAvailableFormats(CATLISTV(CATISpecObject_var) &ioFormats)= 0;

/**
 * Creates and adds to the drawing a custom format oCustomFormat named iName.
 * @param <tt>const CATUnicodeString &</tt>
 * [in] The name of the new format.
 * @param <tt>CATIDftCustomFormat* &oCustomFormat</tt>
 * [out] The created format.
 * @param <tt>IUnknown * iFormat</tt>
 * [in] If not NULL, a format already in the drawing whose caracteristics will be used to initialize oCustomFormat.
 *      If NULL the default format will be used to initialize oCustomFormat.
 * @returns
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>         <dd> The custom format was created.
 * <dt> <tt>S_FALSE</tt>      <dd> The custom format was already existing. The instance was returned.
 * <dt> <tt>E_INVALIDARG</tt> <dd> The name specified is not allowed for a custom format. 
 * <dt> <tt>E_FAIL</tt>       <dd> The creation failed. 
 * </dl>
 */
  virtual HRESULT AddCustomFormat(const CATUnicodeString &iName, CATIDftCustomFormat* &oCustomFormat, IUnknown * iFormat= NULL)= 0;


/**
 * Removes the custom format iCustomFormat from the drawing.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error or iCustomFormat can not be removed because there is at least one sheet in the drawing associated with it.
 * </dl>
 */
  virtual HRESULT RemoveCustomFormat(CATIDftCustomFormat *iCustomFormat)= 0;


/**
 * Sets the format orientations type for iCustomFormat to iOrientsType. Also updates the sheets in the drawing 
 * associated with iCustomFormat if their orientation is not compliant with iOrientsType.
 * @param <tt>CATIDftCustomFormat *iCustomFormat</tt>
 * [in] The format whose orientations type must be changed.
 * @param <tt>CATFormatOrientationsType iOrientsType</tt>
 * [in] The new orientations types for iCustomFormat.
 * @param <tt>CATLISTP(CATISpecObject) *ioModifiedSheet= NULL</tt>
 * [in out] If not NULL, pointers to the sheets which were modified during the operation will be appended to ioModifiedSheet. Don't forget to release
 *          the pointers.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>        <dd> Success.
 * <dt> <tt>S_FALSE</tt>     <dd> Some sheets were not compliant with the new orientation types. Consequently their orientation has been modified.
 * <dt> <tt>E_FAIL</tt>      <dd> Error.
 * </dl>
 */
  virtual HRESULT SetOrientationsTypeOnCustomFormat(CATIDftCustomFormat *iCustomFormat, CATFormatOrientationsType iOrientsType, CATLISTV(CATISpecObject_var) *ioModifiedSheets= NULL)= 0;

/**
 * Appends to iFormats the custom formats in the drawing.
 * @param <tt>CATLISTP(CATISpecObject) &ioCustomFormats</tt>
 * [in out] The list the formats will be appended to.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetCustomFormats(CATLISTV(CATISpecObject_var) &ioCustomFormats )= 0;

/**
 * Appends to ioFormats the standard formats in the drawing.
 * @param <tt>CATLISTP(CATISpecObject) &ioStdFormats</tt>
 * [in out] The list the formats will be appended to.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT GetStandardFormats(CATLISTV(CATISpecObject_var) &ioStdFormats)= 0;

};
CATDeclareHandler( CATIDftDrawingFormats, CATBaseUnknown );
#endif

