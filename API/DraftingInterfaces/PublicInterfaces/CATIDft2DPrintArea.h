/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef CATIDft2DPrintArea_h
#define CATIDft2DPrintArea_h
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "DraftingItfCPP.h"
#include "IUnknown.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDft2DPrintArea ;
#else
extern "C"  const IID IID_CATIDft2DPrintArea ;
#endif

/**
 * Interface used to manage a print area.
 * Interface designed to:
 *   define a rectangle print area.
 *   (de)activate the print area.
 */
class ExportedByDraftingItfCPP CATIDft2DPrintArea : public IUnknown
{
public :

/**
 * Gets the printing area defined on an object.  Fills a table allocated by the caller.
 * Also communicates the activation state of the printing area.
 * @param <tt>double * oAreaData</tt>
 * [out] A four double table describing the parameter of the area box:
 * <dl>
 * <dt> oAreaData[0] as the low x coordinate of the area.
 * <dt> oAreaData[1] as the low y coordinate of the area.
 * <dt> oAreaData[2] as the width of the area.
 * <dt> oAreaData[3] as the heigth of the area.
 * <dt> All the values in the table are given in mm.
 * </dl>
 * <dt> All the values in the table are given in mm.
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> A print area is defined on the sheet and it is currently activated. The data were successfully retrieved.
 * <dt> <tt>S_FALSE</tt>  <dd> A print area is defined on the sheet and it is currently de-activated. The data were successfully retrieved.
 * <dt> <tt>E_FAIL</tt>   <dd> No print area is defined on this sheet.
 * </dl>
 */
  virtual HRESULT GetArea( double * oAreaData ) = 0;

/**
 * Returns the activation state of the print area.
 * @param <tt>out boolean oActivated</tt>
 * [out] The activation state of the print area (TRUE means activated, FALSE means deactivated).
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> The print area activation state was succesfully retrieved.
 * <dt> <tt>E_FAIL</tt>   <dd> No activation state available.
 * </dl>
 */
  virtual HRESULT GetActivationState( boolean & oActivated ) = 0;
};
#endif
