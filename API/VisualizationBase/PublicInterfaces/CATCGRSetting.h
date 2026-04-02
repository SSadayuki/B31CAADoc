#ifndef CATCGRSetting_h
#define CATCGRSetting_h

#include "CATViz.h"

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @param EDGES
 *   To save edges in CGR file.
 * @param TEXTURE
 *   To save texture in CGR file.
 * @param AXIS
 *   To save axis in CGR file.
 * @param SHOW_AND_NOSHOW
 *   To save the graphical representations lying
 *   in the "show" and "no show" spaces. 
 * @param NO_3DCUSTOMREP
 *   Not to save CAT3DCustomRep.
 * @param LINEIC
 *	 To save lineic informations in CGR file.
 * @param NO_LODS
 *	 Not To save Levels of details in CGR file.
 * @param NO_ISOPARS
 *   To save isopars information in CGR file.
 * @param 2DLINEIC
 *   To save 2D Lineic information in CGR file.
 * @param SHOWFREEMODE
 *   To save hidden layer information in CGR file.
 * @param FORCE_V4V5_FDT_STREAM
 *   Override the CGR setting, and stream the FTA container into the CGR (or UVR) file
 * @param PREVENT_V4V5_FDT_STREAM
 *   Override the CGR setting, and prevent the stream of the FTA container in the CGR (or UVR) file
 */

/** @nodoc */
#define EDGES             (1 << 0)
/** @nodoc */
#define TEXTURE           (1 << 1)
/** @nodoc */
#define AXIS              (1 << 2)
/** @nodoc */
#define SHOW_AND_NOSHOW   (1 << 3)
/** @nodoc */
#define NO_3DCUSTOMREP    (1 << 4)
/** @nodoc */
#define DEMO              (1 << 5)
/** @nodoc */
#define LINEIC            (1 << 6)
/** @nodoc */
#define NO_LODS           (1 << 7)
/** @nodoc */
#define NO_ISOPARS        (1 << 8)
/** @nodoc */
#define LINEIC2D          (1 << 9)
/** @nodoc */
#define SHOWFREEMODE      (1 << 10)
/** @nodoc */
#define FORCE_V4V5_FDT_STREAM  (1 << 11)
/** @nodoc */
#define PREVENT_V4V5_FDT_STREAM (1 << 12)

/**
 * class to specify what kind of data belonging
 * to a graphical representation we want to store
 * in a CGR file.
 */
class ExportedByCATViz CATCGRSetting
{
public :
  
  /**
   * Constructs a setting to specify the graphical data type
   * we want to store in a CGR file.
   * @param iSetting
   *   The setting we want. This integer is obtained by
   *   combining the flags defined above.
   *   For example, if you need to save your graphical representation
   *   in a CGR file, with its edges, its texture, the axis, but without
   *   the CAT3DCustomRep that could be in the scene, you have to specify the following
   *   setting : <pre> EDGES | TEXTURE | AXIS | NO_3DCUSTOMREP </pre>.
   *   The default value is <pre> EDGES | TEXTURE </pre>.
   */
  CATCGRSetting(int iSetting = EDGES | TEXTURE);

  /**
   * Copy constructor.
   */
  CATCGRSetting(CATCGRSetting *ipBrother);
  
  virtual ~CATCGRSetting();
  
  /**
   * Sets the setting.
   * @param iSetting
   *    the wanted setting.
   */
  void SetSetting(int iSetting);

  /**
   * Gets the setting.
   */
  int GetSetting();
  
  /**
   * Sets the edges flag to "on" or "off".
   * @param iOnOff
   *   1 to save edges in the CGR file, 0 otherwise.
   */
  void SetEdgesFlag(int iOnOff);

  /**
   * Gets the edges flag.
   * @return
   *   1 means that edges are to be stored in the CGR file.
   *   0 means the contrary.
   */
  int GetEdgesFlag();

  /**
   * Sets the texture flag to "on" or "off" .
   * @param iOnOff
   *   1 to save texture in the CGR file, 0 otherwise.
   */
  void SetTextureFlag(int iOnOff);

  /**
   * Gets the texture flag.
   * @return
   *   1 means that texture is to be stored in the CGR file.
   *   0 means the contrary.
   */
  int GetTextureFlag();

  /**
   * Sets the axis flag to "on" or "off" .
   * @param iOnOff
   *   1 to save axes in the CGR file, 0 otherwise.
   */
  void SetAxisFlag(int iOnOff);

  /**
   * Gets the axis flag.
   * @return
   *   1 means that axes are to be stored in the CGR file.
   *   0 means the contrary.
   */
  int GetAxisFlag();

  /**
   * Sets the "show and no show" flag to "on" or "off" .
   * @param iOnOff
   *   1 to save "show" and "no show" spaces in the CGR file, 0 otherwise.
   */
  void SetShowAndNoShowFlag(int iOnOff);

  /**
   * Gets the "show and no show" flag.
   * @return
   *   1 means that "show and no show" spaces are to be stored in the CGR file.
   *   0 means the contrary.
   */
  int GetShowAndNoShowFlag();
  
  /**
   * Sets the "show free mode" flag to "on" or "off" .
   * @param iOnOff
   *   1 to save hidden layer information in the CGR file, 0 otherwise.
   */
  void SetShowFreeModeFlag(int iOnOff);

  /**
   * Gets the "show and no show" flag.
   * @return
   *   1 means that hidden layer information have also to be stored in the CGR file.
   *   0 means the contrary.
   */
  int GetShowFreeModeFlag();

    /**
   * Sets the "no CAT3DCustomRep" flag to "on" or "off".
   * @param iOnOff
   *   1 not to save CAT3DCustomRep in the CGR file, 0 otherwise.
   */
  void SetNo3DCustomRepFlag(int iOnOff);

  /**
   * Gets the "No CAT3DCustomRep" flag.
   * @return
   *   1 means that CAT3DCustomRep must not be stored in the CGR file.
   *   0 means the contrary.
   */
  int GetNo3DCustomRepFlag();

  /**
   * Sets the demo flag to "on" or "off".
   * @param iOnOff
   *   1 to save the CGR file as a demo file, 0 otherwise.
   */
  void SetDemoFlag(int iOnOff);

  /**
   * Gets the demo flag.
   * @return
   *   1 means that the CGR file is a demo file.
   *   0 means the contrary.
   */
  int GetDemoFlag();

  /**
   * Sets the lineic flag to "on" or "off".
   * @param iOnOff
   *   1 to save the lineic informations (wiredege - linerep) in the CGR file, 
   *   0 otherwise.
   */
  void SetLineicFlag(int iOnOff);

  /**
   * Gets the lineic flag.
   * @return
   *   1 means that the lineic informations are stored int the CGR file,
   *   0 means the contrary.
   */
  int GetLineicFlag();
  
  /**
   * Sets the 2Dlineic flag to "on" or "off".
   * @param iOnOff
   *   1 to save the 2D lineic informations (CAT2D...GP) in the CGR file, 
   *   0 otherwise.
   */
  void Set2DLineicFlag(int iOnOff);

  /**
   * Gets the 2Dlineic flag.
   * @return
   *   1 means that the 2D lineic informations are stored int the CGR file.
   *   0 means the contrary.
   */
  int Get2DLineicFlag();

  /**
   * Sets the nolod flag to "on" or "off".
   * @param iOnOff
   *   1 Not to save the lods in the CGR file, 
   *   0 otherwise.
   */
  void SetNoLodsFlag(int iOnOff);

  /**
   * Gets the nolod flag.
   * @return
   *   1 means that the lods are not stored int the CGR file,
   *   0 means the contrary.
   */
  int GetNoLodsFlag();

  /**
   * Sets the isopars flag to "on" or "off".
   * @param iOnOff
   *   1 Not to save the isopars in the CGR file, 
   *   0 otherwise.
   */
  void SetNoIsoparsFlag(int iOnOff);

  /**
   * Gets the isopars flag.
   * @return
   *   1 means that the isopars are not stored int the CGR file,
   *   0 means the contrary.
   */
  int GetNoIsoparsFlag();

  /**
   * Sets the FTA flag to "on", "off" or "default".
   * @param iOnOffDefault
	*   0 (default) FTA will be streamed (or not) depending on the settings (Tools>Options).
   *   PREVENT_V4V5_FDT_STREAM FTA will not be streamed in the CGR file 
   *   FORCE_V4V5_FDT_STREAM FTA will be streamed in the CGR file
   */
  void SetFTAOverrideFlag(int iOnOffDefault);

  /**
   * Gets the FTA flag.
	* Note: this flag should be used only when streaming CGR or UVR. When unstreaming, it will likely be redondant (or even not coherent) with the presence of the FTA applicative container.
   * @return
   *   0 (default) FTA will be streamed (or not) depending on the settings (Tools>Options).
   *   PREVENT_V4V5_FDT_STREAM FTA will not be streamed in the CGR file 
   *   FORCE_V4V5_FDT_STREAM FTA will be streamed in the CGR file
   */
  int GetFTAOverrideFlag();
  
private:
  
  int _Setting;
};

#endif
