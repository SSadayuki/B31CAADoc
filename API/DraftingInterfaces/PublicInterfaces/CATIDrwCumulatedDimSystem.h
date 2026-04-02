// COPYRIGHT Dassault Systemes 2007

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIDrwCumulatedDimSystem_H
#define CATIDrwCumulatedDimSystem_H

#include"DraftingItfCPP.h"
#include"CATBaseUnknown.h"
#include"CATDrwSystValueAlignment.h"
#include "CATDrwSystOffsetMode.h"
#include"CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwCumulatedDimSystem;
#else
extern "C" const IID IID_CATIDrwCumulatedDimSystem ;
#endif

//------------------------------------------------------------------

/**
 * Interface relative to the specific behaviour of a cumulated dimension system.
 * <p>
 * Refer to CATIDrwDimSystem for the general behaviour.
 * @see CATIDrwDimSystem
 */
class ExportedByDraftingItfCPP CATIDrwCumulatedDimSystem: public CATBaseUnknown
{
  CATDeclareInterface;

public:


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
CATDeclareHandler(CATIDrwCumulatedDimSystem, CATBaseUnknown);

//------------------------------------------------------------------

#endif
