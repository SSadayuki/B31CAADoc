#ifndef CATComboDashed_H
#define CATComboDashed_H

// Copyright Dassault Systemes 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "VE0GEDIT.h"

#include "CATDlgFrame.h"
#include "CATDlgCombo.h"
#include "CATUnicodeString.h"
#include "CATCallbackManager.h"

class CATVisComboDashed;

/** 
* Class to create a combo to choose a line type.
* <b>Role</b>:This class constructs a combo to select a line type among 7 types:
* <ol>
* <li>Solid</li>
* <li>Dotted</li>
* <li>Dashed</li>
* <li>Dot-Dashed</li>
* <li>Phantom</li>
* <li>Small Dotted</li>
* <li>JIS Axis</li>
* </ol>
* <br>When a line type is selected, a <tt>CATDlgComboSelectNotification</tt> notification is sent,
* and you can retrieves the index of the line type thanks to the @href #GetSelect
* @see CATComboColor, CATComboWeight,CATComboSymbol
*/
class ExportedByVE0GEDIT CATComboDashed : public CATDlgFrame
{
 
//------------------------------------------------------------------------------
public:

  /** 
  * Constructs a combo to choose a line type.
  * @param iParent
  * The dialog's parent.
  * @param iDialogObjectName
  * The name of the dialog object. 
  * @param iStyle
  * Internal usage. Set NULL the legal value.
  * @param iLineTypeInit
  *  The index of the first line type displayed. The value ranges from 1 to 7, and the
  *  default value is 1 (solid). 
  * @param iAutoComboAvailable
  * Internal usage, set 0 as the default value.
  */
  CATComboDashed( CATDialog*        iParent, 
                  const CATString&  iDialogObjectName,
	                CATDlgStyle       iStyle = NULL,
                  const int         iLineTypeInit = 1,
		              unsigned int      iAutoComboAvailable = 0);

  virtual ~CATComboDashed();
  
  /**
  * Retrieves the line type's index choosen.
  * <br><b>Role</b>: When a line type is choosen , a 
  * <tt>CATDlgComboSelectNotification</tt> notification is sent, and you 
  * can retrieve the selected color using this method.
  * @return 
  * Index of the line type.This value ranges from 1 to 7.
  */
  unsigned int GetSelect();

  /**
  * Sets the index's line type.
  * @param iLineType
  * Index of the line type.This value ranges from 1 to 7.
  */
  void SetSelect(const unsigned int iLineType);

  /** @nodoc */
  CATDlgCombo * GetCombo();

  /** @nodoc */
  void AddOtherType(const CATString &, const int mode = 0);
  /** @nodoc */
  void RemoveOtherType();

  /** @nodoc */
  void CreateNoneLine();
  /** @nodoc */
  void DestroyNoneLine();

  /** @nodoc */
  void SetSelectedAuto();

  /** @nodoc */
  void SetSelectedNot();

  /** @nodoc */
  int GetSelectLineType(unsigned int & linetype);

//------------------------------------------------------------------------------
private:
  
  void Selected (CATCommand *, CATNotification *, CATCommandClientData);
  void Drop     (CATCommand *, CATNotification *, CATCommandClientData);

  CATVisComboDashed* _pVisComboDashed;
};

#endif
