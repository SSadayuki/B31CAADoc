#ifndef CATISchFrameInfo_H
#define CATISchFrameInfo_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"

extern "C" const IID IID_CATISchFrameInfo ;

/**
 * Interface to manage Schematic platform drafting frame information. 
 * <b>Role</b>: To get and set frame information.
 */
class CATISchFrameInfo : public IUnknown
{
  public:   
  
  /**
  * Get the frame origin corner code.  
  * @param oOriginCorner
  *   Origin corner code.
  */
  virtual HRESULT GetOriginCornerCode (CATUnicodeString &oOriginCorner) =0;

  /**
  * Set the frame origin corner code.  
  * @param iOriginCorner
  *   Origin corner code.
  */
  virtual HRESULT SetOriginCornerCode (const CATUnicodeString &iOriginCorner) =0;

  /**
  * Get the frame spacing code.  
  * @param oSpacing
  *   Spacing code.
  * @param iBHoriz
  *   If TRUE, then the spacing is for horizontal, else, the spacing is for 
  *   vertical.
  */
  virtual HRESULT GetSpacingCode (CATUnicodeString &oSpacing, const CATBoolean &iBHoriz=TRUE) =0;

  /**
  * Set the frame spacing code.  
  * @param iSpacing
  *   Spacing code.
  * @param iBHoriz
  *   If TRUE, then the spacing is for horizontal, else, the spacing is for 
  *   vertical.
  */
  virtual HRESULT SetSpacingCode (const CATUnicodeString &iSpacing, const CATBoolean &iBHoriz=TRUE) =0;

  /**
  * Get the frame label code.  
  * @param oLabel
  *   Label code.
  * @param iBHoriz
  *   If TRUE, then the labels are for horizontal spacing, else, they are for 
  *   vertical spacing.
  */
  virtual HRESULT GetLabelCode (CATUnicodeString &oLabel, const CATBoolean &iBHoriz=TRUE) =0;

  /**
  * Set the frame label code.  
  * @param iLabel
  *   Label code.
  * @param iBHoriz
  *   If TRUE, then the labels are for horizontal spacing, else, they are for 
  *   vertical spacing.
  */
  virtual HRESULT SetLabelCode (const CATUnicodeString &iLabel, const CATBoolean &iBHoriz=TRUE) =0;

};
#endif
