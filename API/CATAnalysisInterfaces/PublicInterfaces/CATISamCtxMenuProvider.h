#ifndef CATISamCtxMenuProvider_H
#define CATISamCtxMenuProvider_H
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATCmdContainer;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamCtxMenuProvider ;
#else
extern "C" const IID IID_CATISamCtxMenuProvider ;
#endif

/**
 * Interface used to add applicative contextual menus on an AnalysisFeature in the analysis context.
 * Default implementation of CATIContextualMenu is implemented on AnalysisFeature by DASSAULT SYSTEMES.<br>
 * this implementation scan all the declared providers and call them order to complete the menu.
 * You should not reset the CATCmdContainer by only complete it.
 * <br><br>Note that it is always possible for a @href CATCommandHeader to decide to disable or not each
 * command by overriding the @href CATCommandHeader#BecomeAvailable and 
 * @href CATCommandHeader#BecomeUnavailable methods.
 */

class ExportedByCATAnalysisInterface CATISamCtxMenuProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the contextual menu defined for an Analysis Feature.
 * @param iObj     The extended object.
 * @param oCtxMenu The contextual menu for the extended object.
 */
	  virtual HRESULT GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* &ioCtxMenu) = 0;

/**
 * Returns if the provider is permanent of not.<br>
 * A permanent provider is created and released by the Analysis Infrastructure with the document LifeCycle.
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">TRUE</font color="red"> The provider is permanent. 
 * <li><font color="red">FALSE</font color="red"> The provider is not permanent, the application 
 * may manage its life cycle by itself.<br>
 * For example, when creating a workbench, by implementing  @href CATIWorkbenchInitialization#Init  
 * and @href CATIWorkbenchInitialization#Dispose methods.
 * </ul>
 */
	  virtual CATBoolean IsPermanent() =0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamCtxMenuProvider, CATBaseUnknown );

#endif
