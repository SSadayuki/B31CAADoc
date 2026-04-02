// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATSamModifyOccurrencesNotif.h
// Header definition of CATSamModifyOccurrencesNotif
//
//===================================================================
#ifndef CATSamModifyOccurrencesNotif_H
#define CATSamModifyOccurrencesNotif_H
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATAnalysisToolkit.h"
#include "CATNotification.h"

/**
 * Define CATSamModifyOccurrencesNotif.
 * <b>Role:</b> Interface designed to manage <b>Notification</b> specific to the 
 * CATISamEditOccurrences implementation .<br>
 * @see CATISamEditOccurrences
 */
//===================================================================
class ExportedByCATAnalysisToolkit CATSamModifyOccurrencesNotif: public CATNotification
{
  CATDeclareClass;

  public:

/**
 * Constructor.
 * @param iNbSelectedOccurrences Number of the preselected occurrences.
 * @param iOccurrencesNumber   Values of the  preselected occurrences.
 */

     CATSamModifyOccurrencesNotif (const int   iNbSelectedOccurrences = 0,
								   const int * iOccurrencesNumber = NULL);
/**
 * Destructor.
 * 
 */
     virtual ~CATSamModifyOccurrencesNotif ();

/**
 * Assign the selected occurences.
 * @param iNbSelectedOccurrences Number of the preselected occurrences.
 * @param iOccurrencesNumber  Values of the  preselected occurrences.
 */

	 void SetSelectedOccurrences(const int   iNbSelectedOccurrences,
								 const int * iOccurrencesNumber);
/**
 * Retrieve the selected occurences.
 * @param oNbSelectedOccurrences Number of the preselected occurrences.
 * @param oOccurrencesNumber Values of the  preselected occurrences.
 *
 * <b>Warning:</b> oOccurrencesNumber may not be desallocated after this method.
 */
	 void GetSelectedOccurrences(int &oNbSelectedOccurrences,
								 int *&oOccurrencesNumber);
  private:

	  int   _NbSelectedOccurrences;
	  int * _OccurrencesNumber;
};

//-----------------------------------------------------------------------

#endif
