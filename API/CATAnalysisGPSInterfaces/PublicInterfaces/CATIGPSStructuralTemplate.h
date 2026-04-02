//===================================================================
// COPYRIGHT Dassault Systemes 2002
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#ifndef CATIGPSStructuralTemplate_H
#define CATIGPSStructuralTemplate_H

#include "CATAnalysisGPSInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisGPSInterfaces IID IID_CATIGPSStructuralTemplate;
#else
extern "C" const IID IID_CATIGPSStructuralTemplate ;
#endif

//------------------------------------------------------------------

/**
 * Available Analysis Transitions for a Workbench.
 * <b>Role:</b> Interface designed to manage <b>Analysis Transition list</b> presented
 * in the entry dialog for the <b>Analysis Workbenches</b>.<br>
 * <p>
 * If you want your <b>workbench</b> to propose specific <b>Analysis Transitions</b>,  
 * you have to provide a <b>Late Type</b> implementing this interface. 
 * <p> The interface allows to :
 * <ul><li>Retrieve the list of the <b>Analysis Transitions</b></li>
 * </ul>
 */ 
class ExportedByCATAnalysisGPSInterfaces CATIGPSStructuralTemplate: public CATBaseUnknown
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
