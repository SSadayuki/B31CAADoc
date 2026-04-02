#ifndef CATIDftRough_H
#define CATIDftRough_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// COPYRIGHT DASSAULT SYSTEMES 2003

#include "CATBaseUnknown.h"

#include "CATDftTextParameters.h"
#include "CATDrwTextPropertiesEnum.h"
#include "CATBoolean.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftRough ;
#else
extern "C" const IID IID_CATIDftRough ;
#endif
class CATIDftTextRange;

/**
* Definition of interface for Roughness Symbols.
*/
class ExportedByDraftingItfCPP CATIDftRough : public CATBaseUnknown
{
  CATDeclareInterface;  

public:

  /**
  * Returns the CATIDftTextRange of text.
  * @param oTextRange [out, IUnknown#Release]
  *    [out] The Text Range.
  * @see DftRoughnessText
  * @see CATIDftTextRange
  */
  virtual HRESULT GetTextRange(DftRoughnessText iPos, CATIDftTextRange **oTextRange) = 0;

  /**
  * Sets the type of roughness symbol.
  * @see DftRoughType
  */
  virtual HRESULT SetType(DftRoughType iRoughType) = 0;

  /**
  * Returns the type of roughness symbol.
  * @see DftRoughType
  */
  virtual HRESULT GetType(DftRoughType *oRoughType) = 0 ;

  /**
  * Sets the mode of roughness symbol.
  * @see DftRoughSurfaceLay
  */
  virtual HRESULT SetSurfaceLay(DftRoughSurfaceLay iRoughMode) = 0;

  /**
  * Returns the mode of roughness symbol.
  * @see DftRoughSurfaceLay
  */
  virtual HRESULT GetSurfaceLay(DftRoughSurfaceLay *oRoughMode) = 0;

  /**
  * Sets the contact of roughness symbol.
  */
  virtual HRESULT SetAllAround(CATBoolean iAllAroundRequired) = 0;

  /**
  * Returns the contact of roughness symbol.
  */
  virtual HRESULT GetAllAround(CATBoolean *oAllAroundRequired) = 0;

  /**
  * Sets the roughness specification line visibility.
  */
  virtual HRESULT SetSpecificationLine(CATBoolean iAddLine) = 0;

  /**
  * Returns if the roughness has a specification line.
  */
  virtual HRESULT GetSpecificationLine(CATBoolean *iLine) = 0;

  /**
  * Sets the mode of roughness symbol.
  */
  virtual HRESULT SetInvert(CATBoolean iRoughInvert) = 0;

  /**
  * Returns if the roughness is inverted or not.
  */
  virtual HRESULT GetInvert(CATBoolean *oRoughInvert) = 0;

  /** 
  * @nodoc 
  * @param oTextRange [out, IUnknown#Release]
  *    [out] The Mode Text Range.
  */
  virtual HRESULT GetModeTextRange(CATIDftTextRange **oTextRange) = 0;
};

#endif
