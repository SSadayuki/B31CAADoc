#ifndef  CATBatGridUIImpl_H
#define  CATBatGridUIImpl_H

#include "CATBaseUnknown.h"
#include "CATIBatchGridUI.h"



/*
// COPYRIGHT DASSAULT SYSTEMES 2005
*/

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */




class ExportedByCATBatCAAGrid CATBatGridUIImpl : public CATBaseUnknown
{
	public :
  /**
   * @nodoc
   */
  CATDeclareClass;

  /**
   * Default constructor.
   */
  CATBatGridUIImpl();
 
  
  virtual ~CATBatGridUIImpl();
  
  
  HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName, CATDlgDialog* father);
  
  HRESULT  GetResourceName(CATUnicodeString& name);
 
  
  
  private :
  
  	CATBatGridUIImpl(CATBatGridUIImpl& grid) {};
  
  
};

#endif
