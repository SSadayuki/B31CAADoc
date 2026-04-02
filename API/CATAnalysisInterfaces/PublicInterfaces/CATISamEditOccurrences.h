#ifndef CATISamEditOccurrences_H
#define CATISamEditOccurrences_H
// COPYRIGHT DASSAULT SYSTEMES 2000	
//===================================================================
// CATISamEditOccurrences.h
// Define the CATISamEditOccurrences interface
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
#include "CATAnalysisInterface.h"
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATDlgFrame;
class CATDialog;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditOccurrences ;
#else
extern "C" const IID IID_CATISamEditOccurrences ;
#endif
/**
 * Customize a CATDlgFrame for sets edition.
 * <b>Role:</b> Interface designed to extract specific parameters for solutions
 * visualisation or edition. This is usefull for "multi-occurrences" solution in order to choose the 
 * occurrence during the image edition. 
 * An Occurrence can be a time step, or a mode ......<br>
 * This interface is implemented on an Analysis Set that also implement @href CATICharacCollector interface.<br>
 * The CATDialog object that is returned needs to implement @href CATISamEditionFrame.<br>
 * Associated notification must be @href CATSamModifyOccurrencesNotif or a derivation.
 * @see CATDlgFrame , CATDialog
 */ 


//------------------------------------------------------------------

class ExportedByCATAnalysisInterface CATISamEditOccurrences: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Retrieves the CATDlgFrame associated to the image edition.
 * @param iParent
 * The active Dialog Object in which the Frame will appear.
 * @param iMultiSel Caller needs to lock or allow a multi selection of data.
 * <br><b>Legal values</b>: 
 * <ul> <li><b>FALSE</b> : The multi list should not allow the multi selection.</li>
 *      <li><b>TRUE</b>  : The multi list should  allow the multi selection.</li></ul>
 * @return
 * <br><b>Legal values</b>: associated CATdlgframe.
 */	
	  virtual CATDlgFrame * GetModificationFrame(CATDialog * iParent,CATBoolean iMultiSel=TRUE) = 0;
/**
 * Retrieves the title of the Frame.
 * @param oTitle The title of the frame.
 */	  
 	  virtual HRESULT GetTitle(CATUnicodeString& oTitle)= 0;

};

CATDeclareHandler( CATISamEditOccurrences, CATBaseUnknown );

#endif
