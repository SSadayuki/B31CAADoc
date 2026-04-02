#ifndef CATBatchFrame_H
#define CATBatchFrame_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "BatchMonitor.h"
#include "CATDlgFrame.h"
#include "CATDlgUtility.h"

class CATBatchParameters;
class CATDialog;
class CATString;

/**
* Base class to define the user interface of a specific batch.
* <b>Role</b>: This class is used to define a user interface enabling the end-user
* input parameters for a batch.
* <br>Derive <tt>CATBatchFrame</tt> to create a class that will be instantiated 
* by another dialog command in the batch monitor.
* <br>
* @see CATBatchParameters
*/

class ExportedByBatchMonitor CATBatchFrame : public CATDlgFrame
{

public:


  virtual ~CATBatchFrame();
  

  /**
  * Fills the parameters file through batch user interface.
  * @param iBatchParameters
  *   The batch parameters.
  * @param iReserved1
  *   Reserved for future usage.
  * @param iReserved2
  *   Reserved for future usage.
  * @return 
  *   <b>Legal values</b>:
  *   <br><tt>S_OK : </tt></b>: on success i.e. all fields are correctly filled.
  *   <br><tt>E_FAIL : </tt></b>: if one or more field(s) are not correctly filled.
  */
  virtual HRESULT FillParametersFile(CATBatchParameters& iBatchParameters,
                                     int& iReserved1, void* iReserved2)=0;

  
protected:
  
  /**
  * Constructs a batch input frame.
  * @param iParent
  *   The parent class in the Dialog aggregation hierarchy. 
  * @param iDialogName
  *   The dialog object name. 
  * @param iStyle
  *   A @href CATDlgFrame style.
  */
  CATBatchFrame(CATDialog* iParent, const CATString& iDialogName, CATDlgStyle iStyle);


private:

  // NOT implemented, only declared to prevent unexpected call to default constructors created by the compiler

  // Default constructor
  CATBatchFrame();

  // Copy constructor
  CATBatchFrame(const CATBatchFrame&);

  // Assignment operator
  CATBatchFrame& operator=(const CATBatchFrame&);
};

# endif
