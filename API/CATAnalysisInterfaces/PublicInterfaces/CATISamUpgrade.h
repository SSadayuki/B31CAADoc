#ifndef CATISamUpgrade_H
#define CATISamUpgrade_H
//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisUpgrade
  */

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamUpgrade ;
#else
extern "C" const IID IID_CATISamUpgrade ;
#endif

/**
 * Upgrade Analysis Sets or Entities.
 * <b>Role:</b> This interface is implemented on analysis entity or analysis sets.<p>
 * It is called before the feature edition in order to upgrade the instances.
 *
 * <p><b>BOA information</b>: this interface can be implemented using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>

 */
class ExportedByCATAnalysisInterface CATISamUpgrade: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns if the startup nedds to be upgraded.
 *   @return  Status of upgrade need.
 * <br><b>Legal values</b>:
 * <ul><li><font color="red">TRUE</font color="red"> Instance needs to be upgraded. </li>
 *     <li><font color="red">FALSE</font color="red"> No need to upgrade. </li> </ul>
 */
	  virtual CATBoolean NeedToUpgrade () = 0;

/**
 * Upgrade the instance.
 * @href CATEAnalysisUpgrade to see the default behavoir.
 */

	  virtual HRESULT Upgrade () = 0;

};

CATDeclareHandler( CATISamUpgrade, CATBaseUnknown );

#endif
