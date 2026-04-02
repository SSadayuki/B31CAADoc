#ifndef CATISamImageAgent_H
#define CATISamImageAgent_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamImageAgent : interface designed to manage "images" animation
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageAgent;

/**
 * Analysis Images animation agent.
 * <b>Role: Provides services to animate </b> Analysis <i>Images</i>.
 */ 

enum CATSamAnimationMode
{
  /* Interpolated frames mode */
  CATSamAnimationMode_Interpolation,
  /* Multi-occurrences frames mode, recompute limits for each frame */
  CATSamAnimationMode_MultiOccurrences,
  /* Memorized multi-occurrences frames mode, compute limits for all frames before start animation */
  CATSamAnimationMode_MultiOccurrencesBufferized
};

class ExportedByCATSamVisuUUID CATISamImageAgent : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
  /**
    * To be called before start animation
    */
  virtual HRESULT Init (  ) = 0;

  /**
    * To be called at end of animation, to restore the image in its initial state
    */
  virtual HRESULT Clean (  ) = 0;

  /**
    * Return the number of frames animation
    * @param oNbFrames
    * In case of interpolation mode, will return the interpolation fluidity
    * In case of multi-occurences mode, it will return the number of occurrences
    */
  virtual HRESULT GetNbFrames ( int & oNbFrames ) = 0;

  /**
    * Set the current animation frame
    * @param iCurrentFrame
    * The current frame to display
    */
  virtual HRESULT SetCurrentFrame ( const int iCurrentFrame ) = 0;

  /**
    * Set the animation mode
    * @param iMode
    * Animation mode specifies the mode of animation, by interpolation or by multi-occurrences
    */
  virtual HRESULT SetMode ( const CATSamAnimationMode iMode ) = 0;

  /**
    * Set the interpolation fluidity
    * @param iFluidity
    * This will correpond to the number of frames in case of interpolation animation
    */
  virtual HRESULT SetInterpolationFluidity ( const int iFluidity ) = 0;

  /**
    * Display the the animation frame
    */
  virtual HRESULT Apply ( ) = 0;
};

CATDeclareHandler(CATISamImageAgent, CATBaseUnknown);

#endif

