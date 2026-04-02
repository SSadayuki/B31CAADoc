/* -*-c++-*- */

#ifndef _CATIExchangeProperty_H
#define _CATIExchangeProperty_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// --/--/--: ---: Creation
// 17/03/03: MAX: CAA Documentation 
// 11/12/2003: DFB: Migration 64 bits (long) - utilisation du script perl de Claude.
//
//===================================================================

#include "CATBaseUnknown.h"
#include "DataExchangeKernelItfCPP.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeKernelItfCPP IID IID_CATIExchangeProperty;
#else
extern "C" const IID IID_CATIExchangeProperty;
#endif

/**
 * Interface to exchange infrastructure attributes.
 * <b>Role</b>: This interface is dedicated to exchange general properties.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeKernelItfCPP CATIExchangeProperty : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves the name of the element.
 * @param oName
 *				The element's name.
 */ 
  virtual HRESULT GetName(CATUnicodeString &oName) const = 0;

/**
 * Retrieves the color of the element (RGB format).
 * @param oRColor
 *				The red component of the color.
 * @param oGColor
 *				The green component of the color.
 * @param oBColor
 *				The blue component of the color.
 * @return
 * If element does not own colors, returns S_FALSE with default colors.
 */
  virtual HRESULT GetColor(double *oRColor, double *oGColor,
			double *oBColor) const =0;

/**
 * Returns the visibility of the element.
 * @return
 * TRUE if the element is in SHOW mode, FALSE otherwise.
 */
  virtual short IsShow() const = 0;

/**
 * Retrieves the type of the element.
 * @param oElementType
 *				The type of the element.
 */
  virtual HRESULT GetType(short *oElementType) const = 0;

/**
 * Retrieves the type of the element.
 * @param oStringType
 *				The type of the element.
 */
  virtual HRESULT GetType(CATUnicodeString *oStringType) const = 0;

/**
 * Returns all informations on the element.
 */
  virtual char* GetInfo() const = 0;

/**
 * Retrieves the element's Unique Identifier (tag number).
 * @param oID
 *				The element's UID.
 */
  virtual HRESULT GetId(CATLONG32* oID) const = 0;
// MAX : this method must migrate to CATIExchangeInputElement.

/**
 * Returns the element's layer.
 */
  virtual int GetLayerValue() const = 0;

/**
 * Retrieves the style type of the element (applicable for curves and points).
 * @param oType
 *				The style type of the element.
 */
  virtual HRESULT GetElemTypeValue(int &oType) = 0;

/**
 * Retrieves the line width (applicable for curves).
 * @param oWidth
 *				The line width.
 */
  virtual HRESULT GetElemWidthValue(double &oWidth) = 0;

};
CATDeclareHandler(CATIExchangeProperty,CATBaseUnknown);

#endif
