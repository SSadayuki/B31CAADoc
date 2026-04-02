#ifndef CATISamImageColorMap_H
#define CATISamImageColorMap_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamImageColorMap : interface designed to modify the color map 
//
//
//=============================================================================
// 23/11/01 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATListOfFloat.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageColorMap;

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default color map.<br>
 * Query this interface in to modify the parameters of the color map.
 */ 

class ExportedByCATSamVisuUUID CATISamImageColorMap : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :

   /**
    * Retrieves the number of colors.
    * @param oNbColors
    * the current number of colors
    */
  virtual HRESULT GetNbColors ( int & oNbColors ) = 0;

   /**
    * Sets the number of colors.
    * @param iNbColors
    * the new number of colors to be taken into account
    */
  virtual HRESULT SetNbColors ( int iNbColors ) = 0;

   /**
    * Retrieves the minimum and maximum values of the color map.
    * @param oMinValue
    * the minimum value.
    * @param oMaxValue
    * the maximum value.
    */
  virtual HRESULT GetMinMax ( float & oMinValue , float & oMaxValue ) = 0;

   /**
    * Retrieves the smooth mode of the color map.
    * @param oSmoothMode
    * the current smooth mode.
    */
  virtual HRESULT GetSmoothMode ( CATBoolean & oSmoothMode ) = 0;
  
   /**
    * Sets or not the color map in smooth mode.
    * @param iSmoothMode
    * the smooth mode.
    */
  virtual HRESULT SetSmoothMode ( const CATBoolean iSmoothMode ) = 0;
  
  /**
    * Sets the minimum value of the color map.
    * @param iUserMin
    * the minimum value.
    */
  virtual HRESULT ImposeMinValue ( const float iUserMin ) = 0;

   /**
    * Sets the maximum value of the color map.
    * @param iUserMax
    * the maximum value.
    */
  virtual HRESULT ImposeMaxValue ( const float iUserMax ) = 0;

   /**
    * To re-activate the automatic computation of the minimum value (deactivated by ImposeMinValue()).
    */
  virtual HRESULT DoNotImposeMinValue () = 0;

   /**
    * To re-activate the automatic computation of the maximum value (deactivated by ImposeMaxValue()).
    */
  virtual HRESULT DoNotImposeMaxValue () = 0;

   /**
    * Retrieves wether the minimum value is imposed or not.
    * @param oFlag
    * TRUE if the minimum value is imposed
    */
  virtual HRESULT IsMinValueImposed ( CATBoolean & oFlag ) = 0;

   /**
    * Retrieves wether the maximum value is imposed or not.
    * @param oFlag
    * TRUE if the maximum value is imposed
    */
  virtual HRESULT IsMaxValueImposed ( CATBoolean & oFlag ) = 0;

  /**
    * Impose boundary values for each color.
    * @param iBoundaries
    * the boundary values, which size must be smaller of one than the number of colors.
    */
  virtual HRESULT SetBoundaryValues ( const CATListOfFloat& iBoundaries ) = 0;

  /**
    * Modify the R, G, B values for each color.
    * The size of the lists must be equal to the number of colors returned by GetNbColors method.
    * @param iRs
    * the red value for a color
    * @param iGs
    * the green value for a color
    * @param iBs
    * the blue value for a color
    */
  virtual HRESULT SetColorsRGB ( const CATListOfInt& iRs,
                                 const CATListOfInt& iGs,
                                 const CATListOfInt& iBs ) = 0;

  /**
    * Get the R, G, B values for each color.
    * @param iRs
    * the red value for a color
    * @param iGs
    * the green value for a color
    * @param iBs
    * the blue value for a color
    */
  virtual HRESULT GetColorsRGB ( CATListOfInt& oRs, 
                                 CATListOfInt& oGs, 
                                 CATListOfInt& oBs ) = 0;

  /**
    * Set comments to put on the bottom of the color map representation. <br>
    * To just remove the current comments, set an empty CATUnicodeString.
    * @param iComments
    * the comments to add in representation.
    */
  virtual HRESULT SetComments ( const CATUnicodeString& iComments) = 0;

  /**
    * Get comments to put on the bottom of the color map representation.
    * @param oComments
    * the comments added to representation.
    */
  virtual HRESULT GetComments (CATUnicodeString& oComments) = 0;

  /**
    * Updates the visualization of the color map.<br>
    * Note that this method will launch the display update of the associated image(s).<br>
    * In other words, just call UpdateDisplay() for the color map even if you have modified one associated image.
    * @see CATISamImage
    */
  virtual HRESULT UpdateDisplay () = 0;
};

CATDeclareHandler(CATISamImageColorMap, CATBaseUnknown);

#endif

