#ifndef CATComboColor_H
#define CATComboColor_H

// Copyright Dassault Systemes 1996

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "VE0GEDIT.h"

#include "CATDlgCombo.h"
#include "CATDlgFrame.h"
#include "CATUnicodeString.h"

#include "CATNotificationWithData.h"

class CATVisAdvComboColor;

/**
* Class to create a combo to select a color.
* <b>Role</b>:This class constructs a combo to select color among predefined color or custom color.
* <br>The editor's combo displays the selected color. At the creation of the combo you
* can set a specific color otherwise the white color is displayed. 
* <br>To select a new color,the drop down list proposes in this order:
* <ul>
* <li>The current selected color</li>
* <li>The defined "custom" colors</li>
* <li>The first 16 "basic" colors </li> 
* <li>To see more color</li>
* </ul>  
* When you click "more color" a second dialog object appears: you see the 48
* "basic" colors and the 16 boxes for the "custom" colors.
* <br>You can choose a color in selecting a box and in clicking "OK", or you can defined 
* (or redefined) a "custom" color thanks to a third dialog object.
* <br><br>When a color is selected, a <tt>CATDlgComboSelectNotification</tt> notification is sent,
* and you can retrieves the color thanks to the @href #GetSelectedColor 
* @see CATComboSymbol, CATComboWeight,CATComboDashed
*/
class ExportedByVE0GEDIT CATComboColor : public CATDlgFrame
{
//------------------------------------------------------------------------------
public:

  /**
   * Constructs the combo to select a color.
   * @param iParent
   * The dialog's parent.
   * @param iDialogObjectName
   * The name of the dialog object. 
   * @param iStyle
   * Internal usage. Set NULL the legal value.
   * @param iRed
   * It's defined the red component of the first selected color.The value ranges from 0 to 255.
   * @param iGreen
   * It's defined the green component of the first selected color.The value ranges from 0 to 255.
   * @param iBlue
   * It's defined the blue component of the first selected color.The value ranges from 0 to 255.
   * @param iUsage
   * Internal usage, set 0 as the default value. 
   * @param iAutoComboAvailable
   * Internal usage, set 0 as the default value. 
   * @param iTypeOfColorTable
   * Internal usage, set 0 as the default value. 
   */
  CATComboColor(  CATDialog * iParent,
                  const CATString & iDialogObjectName,
                  CATDlgStyle iStyle = NULL,
                  const unsigned iRed = 255, 
                  const unsigned iGreen = 255,
                  const unsigned iBlue = 255,
                  int iUsage = 0,
                  unsigned int iAutoComboAvailable = 0,
                  unsigned int iTypeOfColorTable = 0);

  virtual ~CATComboColor();

  /** 
   * Retrieves the selected color.
   * <br><b>Role</b>: When a color is choosen , a 
   * <tt>CATDlgComboSelectNotification</tt> notification is sent, and you 
   * can retrieve the selected color using this method.
   * @param iRed
   * It's defined the red component of the selected color.The value ranges from 0 to 255
   * @param iGreen
   * It's defined the green component of the selected color.The value ranges from 0 to 255
   * @param iBlue
   * It's defined the blue component of the selected color.The value ranges from 0 to 255
   */
  int GetSelectedColor(unsigned int * iRed, unsigned int * iGreen, unsigned int * iBlue);

  /** 
   * Sets the selected color.
   * <br>This color appears in the editor and at the first place in the drop down list.
   * @param iRed
   * It's defined the red component of the color.The value ranges from 0 to 255
   * @param iGreen
   * It's defined the green component of the color.The value ranges from 0 to 255
   * @param iBlue
   * It's defined the blue component of the color.The value ranges from 0 to 255
   */
  void SetSelectedColor(const unsigned int iRed, const unsigned int iGreen, const unsigned int iBlue);

  /** @nodoc */
  int GetSelectedColor(unsigned int *, unsigned int *, unsigned int *, CATUnicodeString *);

  /** @nodoc */
  void UnicodeStringToColor(CATUnicodeString);

  /** @nodoc */
  CATDlgCombo* GetCombo();

  /** @nodoc */
  void CreateNoneLine();

  /** @nodoc */
  void DestroyNoneLine();

  /** @nodoc */	
  enum CATComboColorSelectionEnum
  {
    CATNone,
    CATUndefined,
    CATFromElt,
    CATMore,
    CATAuto
  };

  /** @nodoc */
  void SetSpecialSelection(CATComboColorSelectionEnum sel, int notif=0);

//------------------------------------------------------------------------------
private:

  void Selected (CATCommand *, CATNotification *, CATCommandClientData);

  CATVisAdvComboColor* _pVisComboColor;
};

#endif
