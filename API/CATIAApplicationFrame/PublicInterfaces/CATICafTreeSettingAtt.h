#ifndef CATICafTreeSettingAtt_H
#define CATICafTreeSettingAtt_H
/**
 *  @quickReview EGD 01:12:14
 */
/**
 *  @quickReview EGD-JAC 01:11:29
 */
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES   2001
//=============================================================================
// Interface CATICafTreeSettingAtt :
//	Gestion des paramètres utilisateurs (les settings quoi) de l'arbre
//  Cette classe met en oeuvre toutes les méthodes d'accès aux attributs gérés 
//  par le fichier .CATSetting où se trouvent les paramètres.
//=============================================================================
// 19 Novembre 2001 - Création par JAC
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATErrorDef.h" //pour le SUCCEEDED et HRESULT

#include "CATBoolean.h"
#include "CATSettingInfo.h"

// Global Unique IDentifier defined in .cpp 
#include "CATTreeOptions.h"
extern ExportedByCATTreeOptions IID IID_CATICafTreeSettingAtt;

/**
 * Interface to retrieve and set the information on the specification tree.
 * <br><br>
 * @see GetCATCafTreeSettingCtrl, CATIIniSettingManagment
 */
 
class ExportedByCATTreeOptions CATICafTreeSettingAtt : public IUnknown
{

public:
  /**
   * @nodoc
   * Enables the initialization of the setting file.
   * <br><b>Role:</b> This method is to <bb>be called only once</bb>: from the constructor of the class implementing the @href CATIUserSettings interface.
   */
  virtual HRESULT Initialize() = 0;

	/**
   * Enumeration of available types for the specification tree.
   * <br>The following types are allowed:
   * @param Classical   
   *      Classical Windows style tree.
   * @param Structural  
   *      Structure-oriented representation of the tree.
   * @param Historical
   *      Constructive historic representation of the tree.
   * @param Relational
   *      Relation-oriented representation of the tree.
   */
  enum Type { Classical=1, Structural, Historical, Relational };

	/**
	* To retrieve the type applied to the specification tree.
  * <br><br>
	* @param oType 
	*    The type of the specification tree
	*/
  virtual HRESULT GetType(CATICafTreeSettingAtt::Type &oType) = 0;

	/**
	* To set the type applied to the specification tree.
  * <br><br>
	* @param iType 
	*    The type of the specification tree
	*/
   virtual HRESULT SetType(CATICafTreeSettingAtt::Type &iType) = 0;

	/**
	* To retrieve a CATSettingInfo on the type parameter.
  * <br><br>
	* @param oTypeInfo
	*    A @href CATSettingInfo class embeds all the necessary information 
  * concerning a parameter stored in a .CATSetting file.
	*/
  virtual HRESULT GetTypeSettingInfo(CATSettingInfo &oTypeInfo) = 0;

	/**
	* Enumeration of available orientations for the specification tree.
  * <br><br>
  * The following orientations are allowed:
  * @param Vertical
  *          The tree is oriented vertically.
  * @param Horizontal
  *          The tree is oriented horizontally.
	*/
  enum Orientation { Vertical=0, Horizontal };

	/**
	* To retrieve the orientation applied to the specification tree.
  * <br><br>
	* @param oOrientation
	*    The orientation of the specification tree.
	* @return a HRESULT value
	*/
  virtual HRESULT GetOrientation(CATICafTreeSettingAtt::Orientation &oOrientation) = 0;

	/**
	* To set the orientation applied to the specification tree.
  * <br><br>
	* @param iOrientation
	*    The orientation of the specification tree.
	* @return a HRESULT value
	*/
  virtual HRESULT SetOrientation(CATICafTreeSettingAtt::Orientation &iOrientation) = 0;

	/**
	* To retrieve a CATSettingInfo on the orientation parameter.
  * <br><br>
	* @param oOrientationInfo
	*    A @href CATSettingInfo class embeds all the necessary information 
  * concerning a parameter stored in a .CATSetting file.
  * @return a HRESULT value
	*/
  virtual HRESULT GetOrientationSettingInfo(CATSettingInfo &oOrientationInfo) = 0;

	/**
	* Enumeration of available types for the size of the text 
  * in the specification tree.
  * <br><br>
  * The following types for the size are allowed:
  * @param FixedSize
  *           Only a fixed number of characters are shown in the specification tree, 
  * for the names of its items.
  * @param TextDependentSize
  *           The integrality of each item's name is shown.
	*/
  enum SizeType { FixedSize=0, TextDependentSize };

	/**
	* To retrieve the type of size applied to the text of the specification tree.
  * <br><br>
	* @param oSizeType 
  *    The type of size applied to the text of the specification tree.
  * @return a HRESULT value
	*/
  virtual HRESULT GetSizeType(CATICafTreeSettingAtt::SizeType &oSizeType) = 0;

	/**
	* To retrieve the number of characters shown for the text of the 
  * specification tree.
  * <br><br>
  * @return 
  *    E_FAIL if the type of size is not FixedSize.
  *    <br>S_OK otherwise.
	* @param oSize 
	*    The number of characters shown in the specification tree.
	*/
  virtual HRESULT GetSize(int &oSize) = 0;

	/**
	* To set the type of size applied to the text of the specification tree.
  * <br><br>
	* @param iSizeType
  *    The type of size applied to the text of the specification tree.
  * @param iSize
  *    If the style is FixedSize, iSize represents the number of fixed characters to be shown. The value cannot be 0.
  *  <br>  If the style is TextDependentStyle, this argument is to be omitted.
  * @return a HRESULT value
	*/
  virtual HRESULT SetSizeType(CATICafTreeSettingAtt::SizeType &iSizeType, int iSize=0) = 0;

	/**
	* To retrieve an array of CATSettingInfo on the parameter representing the type of size.
  * <br><br>
	* @param oSettingInfoArray
	*    An array of @href CATSettingInfo, which items embed all the necessary information 
  * concerning a parameter stored in a .CATSetting file.
  * @param oNbOfAttributes
  *    The size of this array.
  * @return a HRESULT value
	*/
  virtual HRESULT GetSizeTypeSettingInfo(CATSettingInfo*& oSettingInfoArray,
                                         int &oNbOfAttributes) = 0;

	/**
	* To retrieve the visualization Show/NoShow's mode applied to the specification tree.
  * <br><br>
	* @param oStatus
	*    TRUE, if the mode is activated
  *    <br>FALSE, otherwise
  * @return a HRESULT value
	*/
  virtual HRESULT GetShowActivation(CATBoolean &oStatus) = 0;

	/**
	* To set the visualization Show/NoShow's mode to be applied to the specification tree.
  * <br><br>
	* @param iStatus
	*    TRUE, if the mode is to be activated
  *    <br>FALSE, otherwise
    * @return a HRESULT value
	*/
  virtual HRESULT SetShowActivation(CATBoolean &iStatus) = 0;

	/**
	* To retrieve a CATSettingInfo on the parameter concerning the Show/NoShow's mode.
  * <br><br>
	* @param oShowInfo
	*    A @href CATSettingInfo class embeds all the necessary information 
  * concerning a parameter stored in a .CATSetting file.
    * @return a HRESULT value
	*/
  virtual HRESULT GetShowSettingInfo(CATSettingInfo &oShowInfo) = 0;

  //Auto-défilement (AutoScroll)
  /**
   * To retrieve the auto-scrolling mode applied to the specification tree.
   * <br><br><b>Role:</b> This mode enables the automatic scroll of the tree when a Drag&Drop operation is performed.
   * <br><br>
   * @param oStatus
   *    TRUE, if the mode is activated
   *    <br>FALSE, otherwise
	* @return a HRESULT value
   */
  virtual HRESULT GetAutoScrollActivation(CATBoolean &oStatus) = 0;

	/**
   * To set the auto-scrolling mode to be applied to the specification tree.
   * <br><br><b>Role:</b> This mode enables the automatic scroll of the tree when a Drag&Drop operation is performed.
   * <br><br>
   * @param iStatus
   *    TRUE, if the mode is activated
   *    <br>FALSE, otherwise
	* @return a HRESULT value
   */
  virtual HRESULT SetAutoScrollActivation(CATBoolean &iStatus) = 0;

	/**
	* To retrieve a CATSettingInfo on the parameter concerning the auto-scroll mode.
  * <br><br>
	* @param oAutoScrollInfo
	*    A @href CATSettingInfo class embeds all the necessary information 
  * concerning a parameter stored in a .CATSetting file.
  * @return a HRESULT value
	*/
  virtual HRESULT GetAutoScrollSettingInfo(CATSettingInfo &oAutoScrollInfo) = 0;


  //Display geometry during scrolling
  /**
  * @nodoc
  */
  virtual HRESULT GetDisplayGeometryActivation(CATBoolean &oStatus) = 0;

  /**
  * @nodoc
  */
  virtual HRESULT SetDisplayGeometryActivation(CATBoolean &iStatus) = 0;

  /**
  * @nodoc
  */
  virtual HRESULT GetDisplayGeometrySettingInfo(CATSettingInfo &oAutoScrollInfo) = 0;



  //Auto-déploiement (AutoExpand quoi!)
  /**
   * To retrieve the auto-expand mode applied to the specification tree.
   * <br><br><b>Role:</b> This mode enables the automatic expansion of the tree when a document is opened.
   * <br><br>
   * @param oStatus
   *    TRUE, if the mode is activated
   *    <br>FALSE, otherwise
	* @return a HRESULT value
   */
  virtual HRESULT GetAutoExpandActivation(CATBoolean &oStatus) = 0;

	/**
   * To set the auto-expand mode to be applied to the specification tree.
   * <br><br><b>Role:</b> This mode enables the automatic expansion of the tree when a document is opened.
   * <br><br>
   * @param iStatus
   *    TRUE, if the mode is activated
   *    <br>FALSE, otherwise
	* @return a HRESULT value
   */
  virtual HRESULT SetAutoExpandActivation(CATBoolean &iStatus) = 0;

	/**
   * To retrieve a CATSettingInfo on the parameter concerning the auto-expansion mode.
   * <br><br>
   * @param oAutoExpansionInfo
   *    A @href CATSettingInfo class embeds all the necessary information 
   * concerning a parameter stored in a .CATSetting file.
	* @return a HRESULT value
   */
  virtual HRESULT GetAutoExpandSettingInfo(CATSettingInfo &oAutoExpansionInfo) = 0;


  /**
   * To retrieve the arc-selection mode applied to the specification tree.
   * <br><br>
   * If this mode is enabled, a simple click onto an arc of the tree, will switch from the document viewpoint to the tree viewpoint, or vice-versa. 
   * <br>If this mode is disabled, you can still switch back and forth by clicking onto the bottom right compass.
   * <br><br>
   * @param oStatus
   *    TRUE, if the mode is activated
   *    <br>FALSE, otherwise
	* @return a HRESULT value
   */
  virtual HRESULT GetArcSelectionActivation(CATBoolean &oStatus) = 0;
  
  /**
   * To set the arc-selection mode to be applied to the specification tree.
   * <br><br>
   * If this mode is enabled, a simple click onto an arc of the tree will switch from the document viewpoint to the tree viewpoint, or vice-versa. 
   * <br>If this mode is disabled, you can still switch back and forth by clicking onto the bottom right compass.
   * <br><br>
   * @param iStatus
   *    TRUE, to activate this mode
   *    <br>FALSE, otherwise
	* @return a HRESULT value
   */
  virtual HRESULT SetArcSelectionActivation(CATBoolean &iStatus) = 0;

  /**
   * To retrieve a CATSettingInfo on the parameter concerning the arc-selection mode.
   * <br><br>
   * @param oArcSelectionInfo
   *    A @href CATSettingInfo class embeds all the necessary information 
   * concerning a parameter stored in a .CATSetting file.
	* @return a HRESULT value
   */
  virtual HRESULT GetArcSelectionSettingInfo(CATSettingInfo &oArcSelectionInfo) = 0;
};
#endif
