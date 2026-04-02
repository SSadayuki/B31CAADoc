#ifndef CATISamReporting_H
#define CATISamReporting_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamReporting : interface designed to modify "default images" in BasicReport
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U5
  */

#include "CATBaseUnknown.h"

// prereqs  System
#include "CATListOfInt.h"
#include "CATListOfCATString.h"

// prereqs SamVisuIterfaces 
#include "CATSamOccurSelectMode.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamReporting;

/**
 * Interface providing default images and occurrences to be included in the basic report.
 *
 * <b>Role</b>:This interface provides the method to define the default images
 * to include in the Basic Report and the method to define (if necessary) the occurrences
 * to take into account.
 * <p>
 * The basic report includes for the selected cases :
 * <ul>
 * <li> The	report of the case. </li>
 * <li> The	report of OUTPUT solutions. </li> 
 * <li> Default images (for the specified occurrences). </li>
 * <li> And eventually User images. </li> 
 * </ul>
 */

class ExportedByCATSamVisuUUID CATISamReporting : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
  /**
    * Retrieves the default imageList to include in the basic report
    * @param oDefaultImagesList.
    * the names of images to take into account
    */
  virtual HRESULT GetDefaultImagesList ( CATListValCATString  & oDefaultImagesList ) = 0;

  /**
    * Retrieves the selected occurrences.
    * @param oSelectionMode.
    * <br><b>Legal values</b>:
    * <ul>
    * <li><tt>CATSamOccurSelectMode_ALL</tt> All occurrences will be selected.</li>
    * <li><tt>CATSamOccurSelectMode_CURRENT</tt> Just the current occurrence will be selected.</li> 
    * <li><tt>CATSamOccurSelectMode_EXPLICIT</tt> the occurrence list has to be explicitly defined.</li> 
    * </ul>
    * @param oOccurrencesList.
    * if CATSamOccurSelectMode_EXPLICIT mode is choosen, you must fill the list of occurrences to 
    * take into account.
    * <br><b>Legal values for occurrences numbers are </b>:
    * between 0 and (the number of occurrence less 1).
    * <br><b>Displayed values for occurrences numbers are </b>:
    * between 1 and the number of occurrences.
    */
  virtual HRESULT GetSelectedOccurrences ( CATSamOccurSelectMode & oOccurSelectMode, CATListOfInt & oOccurrencesList ) = 0;

};

CATDeclareHandler(CATISamReporting, CATBaseUnknown);

#endif

