#ifndef CATVisuFilterServices_H
#define CATVisuFilterServices_H
//===========================================================================
// COPYRIGHT DASSAULT SYSTEMES 2009
//===========================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATIAApplicationFrame.h" // To export the function

/**
 * Global function to set the Apply Filter mode setting accessible by users through Tools | Options | General | Display | Visu Filter tab.
 * <br><br>
 * @param iApplyFilterMode 
 *   The Apply Filter mode.
 * <ul>
 *  <li>0 to set option : Current filter on all documents</li>
 *  <li>1 to set option : Current filter of the document</li>
 * </ul>
 * @return
 * <ul>
 *  <li><code>S_OK</code> if everything ran ok</li>
 *  <li><code>E_INVALIDARG</code> if the input value could not be interpreted</li>
 *  <li><code>E_FAIL</code> if the set operation could not be done</li>
 * </ul>
 **/
HRESULT ExportedByCATIAApplicationFrame CATCafSetApplyFilterMode (const int iApplyFilterMode) ;
#endif
