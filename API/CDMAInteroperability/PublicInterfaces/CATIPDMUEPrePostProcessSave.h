// COPYRIGHT DASSAULT SYSTEMES 2010
//===================================================================
#ifndef CATIPDMUEPrePostProcessSave_H
#define CATIPDMUEPrePostProcessSave_H

#include "CDMAdoc.h"
#include "CATBaseUnknown.h"
#include "CATDocument.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */ 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCDMAdoc IID IID_CATIPDMUEPrePostProcessSave;
#else
extern "C" const IID IID_CATIPDMUEPrePostProcessSave ;
#endif

//------------------------------------------------------------------

  /**
   *  Interface to enable the user to forbid the save of certain documents and to know which documents have been saved in VPM.
   *  The method PreProcess is called just before sending the objects to save to VPM.
   *  The method PostProcess is called just after the save in VPM is finished and CATIA got the feedback from VPM.
   *  <b>Role</b>: This interface is a user exit allowing a user to forbid the save of certain documents and to know which documents have well been saved. 
   *  <br>
   *  You should implement it on the <tt>CATUEPDMPrePostProcessSave</tt> component as implement class.
   **/

class ExportedByCDMAdoc CATIPDMUEPrePostProcessSave: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
   * Allows the user to forbid the save of certain documents.
   * <br><b>Role</b>: This method allows the user to forbid the save of certain documents.
   *
   * @param  iListOfDocumentsToSave
   *  The list of documents that should be saved. 
   * @param  oListOfForbiddenDocuments
   *  The list of documents the user wants to forbid the save:
   * @return
   *  <ul>
   *   <li><tt>S_OK</tt>: execution successful</li> 
   *   <li><tt>E_FAIL</tt>: a problem occured in the user exit.</li>
   *  </ul>
   */

	  virtual HRESULT PreProcess (CATLISTP(CATDocument) * iListOfDocumentsToSave, CATLISTP(CATDocument) *& oListOfForbiddenDocuments)=0;

    /**
   * Allows the user to know which documents have been saved in VPM.
   * <br><b>Role</b>: This method allows the user to know which documents have been saved in VPM.
   *
   * @param  iListOfSavedDocuments
   *  The list of documents which have been saved in VPM. 
   *
   * @return
   *  <ul>
   *   <li><tt>S_OK</tt>: execution successful</li> 
   *   <li><tt>E_FAIL</tt>: The method has failed.</li>
   *  </ul>
   */

	  virtual HRESULT PostProcess (CATLISTP(CATDocument) * iListOfSavedDocuments)=0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
