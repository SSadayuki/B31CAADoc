// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
#ifndef CATIPDMUESave_H
#define CATIPDMUESave_H

#include "CDMAdoc.h"
#include "CATBaseUnknown.h"
#include "CATDocument.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */ 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCDMAdoc IID IID_CATIPDMUESave;
#else
extern "C" const IID IID_CATIPDMUESave ;
#endif

//------------------------------------------------------------------

  /**
   *  Interface to enable some user specific check operations on the files.
   *  <b>Role</b>: This interface is a user exit allowing a user to perform
   *  some specific operations in order to control the save of the files. 
   *  <br>
   *  You should implement it on the <tt>CATUEPDMSave</tt> component by using 
   *  the CATObject mechanism.
   **/

class ExportedByCDMAdoc CATIPDMUESave: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
   * Allows the user to perform some operations on the file to save.
   * <br><b>Role</b>: This method allows the user to perform some check operations on the 
   * file that will be saved.
   *
   * @param  iDoc
   *  The document to check. 
   * @param  oGranted
   *  Says if the save is possible:
   *  <br><b>Legal values:  </b>
   *  <ul>
   *    <li><tt>S_OK</tt> It is allowed to save the file. 
   *    <li><tt>S_FALSE</tt> It's not allowed to save the file.
   *  </ul>
   *
   * @return
   *  <ul>
   *   <li><tt>S_OK</tt>: execution successful</li> 
   *   <li><tt>E_FAIL</tt>: The method has failed. A @href CATError class instance is generated.</li>
   *  </ul>
   */

	  virtual HRESULT OnSave (CATDocument * iDoc, HRESULT *oGranted)=0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
