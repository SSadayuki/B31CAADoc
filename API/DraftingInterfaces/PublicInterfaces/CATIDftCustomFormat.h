#ifndef CATIDftCustomFormat_H
#define CATIDftCustomFormat_H

// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATIDftCustomFormat.h
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
extern ExportedByDraftingItfCPP IID IID_CATIDftCustomFormat ;
#else
extern "C" const IID IID_CATIDftCustomFormat ;
#endif

// System
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

/**
 * <B>Role:</B> CATIDftCustomFormat is an interface dedicated to change the generic informations carried by a format that are 
 * consequently shared among sheets associated with this format.
 * @see CATIDftFormat.
 */
class ExportedByDraftingItfCPP CATIDftCustomFormat: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


/**
 * Sets the format name to iName.
 * @param <tt>const CATUnicodeString &iName</tt>
 * [in] the new format name.
 * @return
 * <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Error.
 * </dl>
 */
  virtual HRESULT SetFormatName(const CATUnicodeString &iName)= 0;

/**
 * Set the custom format's width and height to the given values.
 * @param iWidth
 * The new width.
 * @param iHeight
 * The new height.
 * <b>precondition<b>: for custom formats in a postR14-embeded-standard context
 * iWidth must be greater or equal to iHeight (set the orientation adequately in 
 * order to have the sheet with the desired caracteristics).
 * @return
 * An <tt>HRESULT</tt> value.
 * <br><b>Legal values</b>:
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Internal error or preconditions not met.
 * </dl>
 */
  virtual HRESULT SetFormatSize(double iWidth, double iHeight) = 0;

  /**
  * @deprecated V5R17 Use @href CATIDftCustomFormat#SetFormatSize
  * WARNING: the following method does not enforce data model integrity.
  *
  * Sets the format width to iWidth.
  * @param <tt>double iWidth</tt>
  * [in] the new format width.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Success.
  * <dt> <tt>E_FAIL</tt>   <dd> Error.
  * </dl>
  */
  virtual HRESULT SetFormatWidth(double iWidth)= 0;

  /**
  * @deprecated V5R17 Use @href CATIDftCustomFormat#SetFormatSize
  * WARNING: the following method does not enforce data model integrity.
  *
  * Sets the format heigth to iHeight.
  * @param <tt>double iHeight</tt>
  * [in] the new format height.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Success.
  * <dt> <tt>E_FAIL</tt>   <dd> Error.
  * </dl>
  */
  virtual HRESULT SetFormatHeight(double iHeight)= 0;

};

// Handler.
CATDeclareHandler(CATIDftCustomFormat, CATBaseUnknown);

#endif


