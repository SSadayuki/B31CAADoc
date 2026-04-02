// COPYRIGHT DASSAULT SYSTEMES 2005
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIDftDimChamfer_H
#define CATIDftDimChamfer_H

#include "IUnknown.h"
#include "CATMacForIUnknown.h"

#include "CATDrwDimEnum.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDimChamfer ;
#else
extern "C" const IID IID_CATIDftDimChamfer ;
#endif

//------------------------------------------------------------------

/**
* Chamfer interface on dimensions.
* Dimensions always answer to this interface, use the CATIDrwDimDimension::GetType() function
* to determine the type of the dimension.
* If the dimension is not a chamfer dimension every function returns E_FAIL.
* @see CATIDrwDimDimension#GetDimType
*/
class ExportedByDraftingItfCPP CATIDftDimChamfer: public IUnknown
{
public:
   /**
   * Gets the chamfer representation type of the dimension.
   * Return the encumbrancy of all generated items in view coordinates
   * @param <tt>CATDrwDimChfRepType * oChamferType</tt>
   * The chamfer representation type
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Succeeded 
   * <dt> <tt>E_FAIL</tt>   <dd> The dimension is not a chamfer dimension.
   * </dl>
   */
   virtual HRESULT GetChamferRepresentationType (CATDrwDimChfRepType *oChamferType) = 0;
   /**
   * Sets the chamfer representation type of the chamfer dimension.
   * @param <tt>const CATDrwDimChfRepType iChamferType</tt>
   * Type of the chamfer dimension.
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Succeeded
   * <dt> <tt>E_FAIL</tt>   <dd> The dimension is not a chamfer dimension
   * </dl>
   */
   virtual HRESULT SetChamferRepresentationType (CATDrwDimChfRepType iChamferType) = 0;
   /**
   * Gets the value format of the chamfer dimension.
   * Return the encumbrancy of all generated items in view coordinates
   * @param <tt>const CATDrwDimChfValFormat oChamferValFormat</tt>
   * The value format of the chamfer dimension
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Succeeded 
   * <dt> <tt>E_FAIL</tt>   <dd> The dimension is not a chamfer dimension.
   * </dl>
   */
   virtual HRESULT GetChamferValueFormat (CATDrwDimChfValFormat *oChamferValFormat) = 0;
   /**
   * Sets the value format of the chamfer dimension.
   * @param <tt>const CATDrwDimChfValFormat iChamferValFormat</tt>
   * The value format of the chamfer dimension.
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Succeeded
   * <dt> <tt>E_FAIL</tt>   <dd> The dimension is not a chamfer dimension
   * </dl>
   */
   virtual HRESULT SetChamferValueFormat (CATDrwDimChfValFormat iChamferValFormat) = 0;
};
#endif
