#ifndef CATDocConfigFC_h_
#define CATDocConfigFC_h_
// COPYRIGHT DASSAULT SYSTEMES 2000
#include "CATBaseObject.h"
#include "ExportedByCATFileMenu.h"
class CATDialog;

/** 
  * @CAA2Level L0
  * @CAA2Usage U0
  */ 

/**
 *   This implementation is used to call the SearchOrder window
 *   as interactive locator.
 *
 *   Use CATSupportImplementation(CATDocConfigSO,your_own_locator_late_type,CATIConfigureDocLocator);
 *   if you want to use the same interactive locator for your doc locator.
 */
class ExportedByCATFileMenu CATDocConfigFC: public CATBaseObject
{
public:
	CATDeclareClass;

	CATDocConfigFC();
	virtual ~CATDocConfigFC();

	HRESULT Configure(CATDialog* iParent); 
};


#endif


