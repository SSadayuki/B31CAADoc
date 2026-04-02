#ifndef CATISamEditWithFrame_H
#define CATISamEditWithFrame_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//==================================================================================
// CATISamEditWithFrame.h
// Define the CATISamEditWithFrame interface
//==================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATDlgFrame;
class CATDialog;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditWithFrame ;
#else
extern "C" const IID IID_CATISamEditWithFrame ;
#endif

/**
 * Customizes Analysis Entity Edition.
 * <b>Role:</b> This interface is used by the default command CATSamCreateEntityCmd exported by CATAnalysisModelerUI.
 * <br>This comand allows to provide standard User interface for analysis entity creation, modification and edition.
 * This comands assumes that each basic component provides its editing capabilities (dialog object).<br>
 * The edition dialog of a basic component can be of two kinds :
 * <ul>
 * <li><b>a simple frame.</b>
 * <li><b> it may needed to get the selection management to access to other objects in 
 *	 the session.
 * </ul>
 * This interface corresponds to the first case. It is designed to return<br>
 * an edition frame associated to the Basic Component. It must be implemented on it's late type.
 * <p>
 * @see CATISamEditWithFrame,CATISamEditionFrame
 */ 




//------------------------------------------------------------------

class ExportedByCATAnalysisInterface CATISamEditWithFrame: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the edition frame associated to the Basic Component.
 * <b>Warning</b>! The returned frame must implements CATISamEditionFrame.
 * @param iParent
 * Active CATDialog in which the Frame will appear.
 * @return
 * <br><b>Legal values:</b> associated CATDlgFrame.
 */	
    virtual CATDlgFrame * GetModificationFrame(CATDialog * iParent) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEditWithFrame, CATBaseUnknown );

#endif
