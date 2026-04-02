// COPYRIGHT Dassault Systemes 2007
//===================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#ifndef CATIDrwStackedDimSystem_H
#define CATIDrwStackedDimSystem_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"

#include "CATDrwSystValueAlignment.h"
#include "CATDrwSystOffsetMode.h"
#include"CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwStackedDimSystem;
#else
extern "C" const IID IID_CATIDrwStackedDimSystem ;
#endif

//------------------------------------------------------------------

/**
 * Interface relative to the specific behaviour of a stacked dimension system.
 * <p>
 * Refer to CATIDrwDimSystem for the general behaviour.
 * @see CATIDrwDimSystem
 */
class ExportedByDraftingItfCPP CATIDrwStackedDimSystem: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Sets the positioning gap between each dimension line.
  * @param <tt>iPositioningGap</tt>
  * [in] positioning gap
  */
  virtual HRESULT SetOffset(double iPositioningGap) = 0;

  /**
  * Gets the positioning gap between each dimension line.
  * @param <tt>oPositioningGap</tt>
  * [out] positioning gap
  */
  virtual HRESULT GetOffset(double &oPositioningGap) = 0;


  /**
  * Sets the mode used to align dimension lines.
  * @param <tt>iPositioningMode</tt>
  * [in] positioning mode
  */
  virtual HRESULT SetOffsetMode(CATDrwSystOffsetMode iPositioningMode) = 0;

  /**
  * Gets the mode used to align dimension lines.
  * @param <tt>oPositioningMode</tt>
  * [out] positioning mode
  */
  virtual HRESULT GetOffsetMode(CATDrwSystOffsetMode &oPositioningMode) = 0;


  /**
  * Sets the mode used to align dimension values.
  * @param <tt>iPositioningMode</tt>
  * [in] alignment mode
  */
  virtual HRESULT SetValueAlignmentMode(CATDrwSystValueAlignment  iPositioningMode) = 0;

  /**
  * Gets the mode used to align dimension values.
  * @param <tt>oPositioningMode</tt>
  * [out] alignment mode
  */
  virtual HRESULT GetValueAlignmentMode(CATDrwSystValueAlignment &oPositioningMode) = 0;


  /**
  * Sets the offset used to position dimension values.
  * @param <tt>iGap</tt>
  * [in] positioning gap
  */
  virtual HRESULT SetValueAlignmentOffset(double  iGap) = 0;

  /**
  * Gets the offset used to position dimension values.
  * @param <tt>oGap</tt>
  * [out] positioning gap
  */
  virtual HRESULT GetValueAlignmentOffset(double &oGap) = 0;


  /**
  * Defines if a funnel must be automaticaly added to the dimensions or not.
  * @param <tt>iFunnelMode</tt>
  * [in] automatic funnel addition mode
  */
  virtual HRESULT SetAutoFunnelMode(CATBoolean  iFunnelMode) = 0;

  /**
  * To know if a funnel must be automaticaly added to the dimensions or not.
  * @param <tt>oFunnelMode</tt>
  * [out] automatic funnel addition mode
  */
  virtual HRESULT GetAutoFunnelMode(CATBoolean &oFunnelMode) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};
CATDeclareHandler(CATIDrwStackedDimSystem, CATBaseUnknown);

//------------------------------------------------------------------

#endif
