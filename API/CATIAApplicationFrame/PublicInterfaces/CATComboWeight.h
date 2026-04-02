#ifndef CATComboWeight_H
#define CATComboWeight_H

// Copyright Dassault Systemes 1996

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "VE0GEDIT.h"

#include "CATDlgFrame.h"
#include "CATDlgCombo.h"
#include "CATMsgCatalog.h"
#include "CATEventSubscriber.h"

class CATVisComboWeight;

/** 
* Class to create a combo to choose a weight (thickness) of a line.
* <b>Role</b>:This class constructs a combo to select a line weigth among 63 values.
* <br>These 63 values follow the thicknesses displayed and modifiable in 
* Tools/Options/Display/Thickness. 
* <br><br>When a weight  is selected, a <tt>CATDlgComboSelectNotification</tt> notification is sent,
* and you can retrieves the index of the weight type thanks to the @href #GetSelect
* @see CATComboColor, CATComboDashed,CATComboSymbol
*/
class ExportedByVE0GEDIT CATComboWeight : public CATDlgFrame
{
 
//------------------------------------------------------------------------------
  public:

  /** 
  * Constructs a combo to choose a weight of a line.
  * @param iParent
  * The dialog's parent.
  * @param iDialogObjectName
  * The name of the dialog object. 
  * @param iStyle
  * Internal usage. Set NULL the legal value.
  * @param iWeightInit
  *  The index of the first weight displayed. The value ranges from 1 to 63, and the
  *  default value is 1 . 
  * @param iAutoComboAvailable
  * Internal usage, set 0 as the default value.
  */

  CATComboWeight( CATDialog*        iParent, 
                  const CATString&  iDialogObjectName, 
				          CATDlgStyle       iStyle = NULL,
                  const int         iWeightInit = 1,
				          unsigned int      iAutoComboAvailable = 0);

  virtual ~CATComboWeight();
  
  /**
  * Retrieves the index of the weight choosen.
  * @return 
  * Index of the weight.This value ranges from 1 to 63.
  */
  unsigned int GetSelect();

  /**
  * Sets the index of the weight.
  * @param iWeight
  * Index of the weight.This value ranges from 1 to 63.
  */
  void SetSelect(const unsigned int iWeight);

  /** @nodoc */
  CATDlgCombo * GetCombo();

  /** @nodoc */
  void CreateNoneLine();

  /** @nodoc */
  void DestroyNoneLine();

  /** @nodoc */
  void SetSelectedAuto();

  /** @nodoc */
  void SetSelectedNot();

  /** @nodoc */
  int GetSelectThickness(unsigned int & thickness);

//------------------------------------------------------------------------------
  private:

  void Selected (CATCommand *, CATNotification *, CATCommandClientData);
  void Drop     (CATCommand *, CATNotification *, CATCommandClientData);

  CATVisComboWeight* _pVisComboWeight;
};


#endif
