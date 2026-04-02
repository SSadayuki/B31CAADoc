//=============================================================================
// COPYRIGHT Dassault Systemes 2000
//=============================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */
#ifndef CATSamRattrapMode_H
#define CATSamRattrapMode_H 

#include "CATAnalysisInterface.h"
/** 
 * Toolkit for upgrade analysis feature.
 * Must be used only for implementing @href CATISamUpgradeContainer.
 */
class ExportedByCATAnalysisInterface CATSamRattrapMode
{

 public:
/**  
 * Returns the Ratrap mode of the model.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Not in Rattrap mode. 
 * <li><font color="red">1</font color="red"> Rattrap Mode  Actif. 
 * </ul>
 */
	static int GetMode();

  friend class CATESamDocInit ;
  friend class CATEAnalysisUpgradeContainer;

 private:
 /**  
 * Initialize the Ratrap mode of the model.
 * @param iMode
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Not in Rattrap mode. 
 * <li><font color="red">1</font color="red"> Rattrap Mode  Actif. 
 * </ul>
 */
	static void SetMode(const int iMode);

};
#endif
