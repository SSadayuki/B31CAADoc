// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIDftDimCumulate.h
// Define the CATIDftDimCumulate interface
//
//===================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIDftDimCumulate_H
#define CATIDftDimCumulate_H

#include "IUnknown.h"
#include "CATMacForIUnknown.h"

#include "CATDraftingInterfaces.h"

#include "CATBooleanDef.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDimCumulate ;
#else
extern "C" const IID IID_CATIDftDimCumulate ;
#endif

//------------------------------------------------------------------

/**
* Cumulate interface on dimensions.
* Dimensions always answer to this interface, use the IsCumulate() fonction
* to determine the type of the dimension.
*/
class ExportedByDraftingItfCPP CATIDftDimCumulate: public IUnknown
{
public:
  
  /**
  * Returns if the dimension is or is not a cumulate dimension.
  * @returns
  *   E_FAIL : if the dimension is not a cumulate dimension.
  *   S_OK : if the dimension is a cumulate dimension.
  */
  virtual HRESULT IsCumulate () = 0;
  
  /**
  * Returns if the dimension shows the zero origin.
  * @param
  *   oZeroVisualizationMode : True if zero is shown.
  * @returns
  *   E_FAIL : if the dimension is not a cumulate dimension.
  *   S_OK : if the dimension is a cumulate dimension.
  */
  /** @nodoc */
  virtual HRESULT GetZeroVisualizationMode (boolean *oZeroVisualizationMode) = 0;

  /**
  * Set if the dimension has to show the zero origin.
  * @param
  *   iZeroVisualizationMode : True if zero has to be shown.
  * @returns
  *   E_FAIL : if the dimension is not a cumulate dimension.
  *   S_OK : if the dimension is a cumulate dimension.
  */
  /** @nodoc */
  virtual HRESULT SetZeroVisualizationMode (boolean iZeroVisualizationMode) = 0;

  /**
  * Returns if the dimension shows negative values.
  * @param
  *   oNegativeValueMode : 1 If no sign are shown.
  *                        2 If only negative sign are shown.
  *                        3 If negative AND positive signs are shown.
  * @returns
  *   E_FAIL : if the dimension is not a cumulate dimension.
  *   S_OK : if the dimension is a cumulate dimension.
  */
  /** @nodoc */
  virtual HRESULT GetNegativeValueMode (int *oNegativeValueMode) = 0;

  /**
  * Set if the dimension has to appear as a negative value.
  * @param
  *   iNegativeValueMode : 1 If no sign are shown.
  *                        2 If only negative sign are shown.
  *                        3 If negative AND positive signs are shown.
  * @returns
  *   E_FAIL : if the dimension is not a cumulate dimension.
  *   S_OK : if the dimension is a cumulate dimension.
  */
  /** @nodoc */
  virtual HRESULT SetZeroVisualizationMode (int iNegativeValueMode) = 0;

};

#endif
