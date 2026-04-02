#ifndef CATIDftFramingDefinition_h
#define CATIDftFramingDefinition_h
// COPYRIGHT DASSAULT SYSTEMES 2002
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "DraftingItfCPP.h"
#include "IUnknown.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftFramingDefinition ;
#else
extern "C"  const IID IID_CATIDftFramingDefinition ;
#endif

/**
 * Interface used to manage framing of the views.
 * <b>Role</b>: The framing is used to clip visually a view with polygones.
 */
class ExportedByDraftingItfCPP CATIDftFramingDefinition : public IUnknown
{
public :
/**
 * Set the points of the polygone 's frame definition.
 * @param <tt>const double* & iCoordinates</tt>
 * [in] coordinates of the points
 * @param <tt>int inbPoints</tt>
 * [in] number of points 
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> operation successfull
 * <dt> <tt>E_FAIL</tt>   <dd> unexpected error occured
 * </dl>
 */
  virtual HRESULT SetFramePoints(const double* iCoordinates,int inbPoints)=0;


/**
 * Access to the frame points definition.
 * @param <tt>const int inbPoints</tt>
 * [in] number of points
 * @param <tt>double * oPoints</tt>
 * [out] coordinates of points
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> operation successfull
 * <dt> <tt>E_FAIL</tt>   <dd> no frame available or unexpected error
 * </dl>
 */
  virtual HRESULT GetFramePoints(const int inbPoints, double * oPoints) = 0;
/**
 * Get the informations related to the  frame : availability and number of definition points.
 * @param <tt>boolean* oIsAvailable</tt>
 * [out] TRUE : frame is available , FALSE : no frame available
 * @param <tt>int* oNbPoints</tt>
 * [out] number of definition points
 * @param <tt>boolean* oProfileStatus</tt>
 * [out] TRUE : framing profile is visible , FALSE : profile is hidden
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> operation successfull
 * <dt> <tt>E_FAIL</tt>   <dd> no frame available or unexpected error
 * </dl>
 */
  virtual HRESULT GetFramingInformations(boolean* oIsAvailable, int* oNbPoints,boolean* oProfileStatus) =0;


/**
 * Set the availability of the frame.
 * @param <tt>const boolean iAvailable</tt>
 * [in] availability of the frame
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> operation successfull
 * <dt> <tt>E_FAIL</tt>   <dd> no frame available or unexpected error
 * </dl>
 */
  virtual HRESULT SetFramingAvailability(const boolean iAvailable)=0;


/**
 * Set the visibility of the framing profile.
 * @param <tt>const boolean iStatus</tt>
 * [in] if TRUE, profile will be visible
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> operation successfull
 * <dt> <tt>E_FAIL</tt>   <dd> no frame available or unexpected error 
 * </dl>
 */
  virtual HRESULT SetFramingProfileStatus(const boolean iStatus)=0;

};
#endif
