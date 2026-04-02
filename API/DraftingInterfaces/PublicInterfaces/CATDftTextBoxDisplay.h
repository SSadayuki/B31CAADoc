#ifndef __CATDftTextBoxDisplay_h__
#define __CATDftTextBoxDisplay_h__
//=====================================================================================
//                                     CNEXT - CXR8
//                          COPYRIGHT DASSAULT SYSTEMES 2001 
//-------------------------------------------------------------------------------------
// FILENAME    :    CATDftTextBoxDisplay
// LOCATION    :    DraftingInterfaces
// AUTHOR      :    smr
// GOAL        :    Enums for text box display
// DATE        :    Sept 20001
//-------------------------------------------------------------------------------------
// DESCRIPTION :    
//-------------------------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Annotation value display.
 *   @param DftShowValue
 *    The value is displayed .
 *   @param DftShowGlobalBox
 *    The value is not displayed. A frame shows the text box.
 *   @param DftNoshowValue
 *    The value is not displayed.
 */
enum CATDftTextBoxDisplay 
{	
  DftShowValue = 1,   
  DftShowGlobalBox = 3, 
  DftNoshowValue = 4
};

#endif
