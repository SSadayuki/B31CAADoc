#ifndef CATEASchAppRouteCATDlgFrame_H
#define CATEASchAppRouteCATDlgFrame_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATSchItfCPP.h"

class CATDlgFrame;
class CATEventSubscriber;

/**
 * Super class to derive implementation for interface CATISchAppRouteCATDlgFrame.
 * <b>Role</b>: Adaptor
 */
class ExportedByCATSchItfCPP CATEASchAppRouteCATDlgFrame : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppRouteCATDlgFrame.
   */
  CATEASchAppRouteCATDlgFrame();
  virtual ~CATEASchAppRouteCATDlgFrame();
  
  /**
  * Provide the application sub-class of CATDlgFrame. 
  * @param oAppCATDlgFrame
  *   pointer to application CATDlgFrame that implements this interface
  *   The caller must allocate memory for 
  *   the first level pointer (i.e. oAppCATDlgFrame) and release the second level
  *   pointer (i.e. *oAppCATDlgFrame) after usage.
  */
  virtual HRESULT AppGetCATDlgFrame 
                  (CATDlgFrame **oAppCATDlgFrame);  
  
  private:
  // do not implement
  CATEASchAppRouteCATDlgFrame (CATEASchAppRouteCATDlgFrame &);
  CATEASchAppRouteCATDlgFrame& operator=(CATEASchAppRouteCATDlgFrame&);
};

#endif
