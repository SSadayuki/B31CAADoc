// COPYRIGHT Dassault Systemes 2004
#ifndef CATIMfgUpgradeProcessDocument_H
#define CATIMfgUpgradeProcessDocument_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATDocument.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgUpgradeProcessDocument;
#else
extern "C" const IID IID_CATIMfgUpgradeProcessDocument ;
#endif

//------------------------------------------------------------------

/**
 * This interface to Upgrade Maachining Process Document.
 * <b>Role</b>:This interface is to be invoqued in a CAA Partner Application to upgrade to the latest data structure a document just opne by this application. <br>
 */
class ExportedByMfgItfEnv CATIMfgUpgradeProcessDocument: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Upgrade the document.
   */

     virtual HRESULT UpgradeProcessDocument (CATDocument * pDoc) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

// use this interface with handlers
CATDeclareHandler(CATIMfgUpgradeProcessDocument, CATBaseUnknown) ;
//------------------------------------------------------------------

//------------------------------------------------------------------

#endif
