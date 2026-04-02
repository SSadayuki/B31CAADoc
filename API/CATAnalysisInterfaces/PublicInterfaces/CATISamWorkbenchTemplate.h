#ifndef CATISamWorkbenchTemplate_H
#define CATISamWorkbenchTemplate_H
//==================================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  
//==================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//==================================================================================

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

#include "CATListOfCATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamWorkbenchTemplate ;
#else
extern "C" const IID IID_CATISamWorkbenchTemplate ;
#endif

/**
 * Available Analysis Transitions for a Workbench.
 * <b>Role:</b> Interface designed to manage <b>Analysis Transition list</b> presented
 * in the entry dialog for the <b>Analysis Workbenches</b>.<br>
 * <p>
 * If you want your <b>Workbench</b> to propose specific <b>Analysis Transitions</b>,  
 * you have to provide a <b>Late Type</b> implementing this interface. This <b>Late Type</b>
 * must respect the following syntax : <b>WBName_TempList</b>.
 * <p> The interface allows to :
 * <ul><li>Retrieve the list of the <b>Analysis Transitions</b></li>
 * </ul>
 */ 
class ExportedByCATAnalysisInterface CATISamWorkbenchTemplate: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
      * Retrieves the list of the <b>Analysis Transitions</b> for your <b>Workbench</b>.
      * @param oList
      * The list of the <b>Analysis Transitions</b>.
      */
    virtual HRESULT GetTemplates(CATListOfCATString& oList) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
