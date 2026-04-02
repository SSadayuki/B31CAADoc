// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisUpgrade.h Provide adaptor to interface CATISamUpgrade
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisUpgrade_H
#define CATEAnalysisUpgrade_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisResources.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATISamBasicComponent.h"
#include "CATBoolean.h"

class CATUnicodeString;
class CATISpecObject;
//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamUpgrade interface.
 * It can be used for AnalysisEntity or AnalysisSet.
 * @see CATISamUpgrade
 */

class ExportedByCATAnalysisResources CATEAnalysisUpgrade: public CATBaseUnknown
{

  public:

/**
 * Default constructor.
 */
     CATEAnalysisUpgrade ();
/**
 * Default destructor.
 */
     virtual ~CATEAnalysisUpgrade ();

/**
 * Returns if the startup needs to be upgraded.
 * @return  Status of upgrade need. <br>
 * The default implementation is based on a comparison of the instance and it's startup.
 * <br><b>Legal values</b>:
 * <ul><li><font color="red">TRUE</font color="red"> Instance needs to be upgraded. </li>
 *     <li><font color="red">FALSE</font color="red"> No need to upgrade. </li> <ul>
 */
     virtual CATBoolean NeedToUpgrade () ;

/**
 * Upgrade the instance.
 * The default implementation is based on a comparison of the instance and it's startup.<br>
 * It adds the basic components defined on the startup and missing on the instance. 
 */
     virtual HRESULT Upgrade ();

/**
 * Toolkit MultiLayerManager. 
 * <p>Allows to add new columns defined in the startup based on a comparison of the instance and it's startup.
 * @param ipiBasicComp The  MultiLayerManager basic component.
 */
     CATBoolean CheckMultiLayer (const CATISamBasicComponent * ipiBasicComp);

/**
 * Toolkit MultiLayerManager.
 * <p>Allows to add new columns defined in the startup based on a comparison of the instance and it's startup.
 * @param ipiBasicComp The  MultiLayerManager basic component.
 */
     HRESULT UpgradeMultiLayer (const CATISamBasicComponent * ipiBasicComp);

/**
 * Toolkit to retrieve if a basic component name is in the list.
 * @param iName Name to Retrieve.
 * @param iLCompThis The list.
 * @return  TRUE is in the list.
 * <br><b>Legal values</b>:
 * <ul><li><font color="red">TRUE</font color="red"> Is in the list. </li>
 *     <li><font color="red">FALSE</font color="red"> Not in the list. </li> <ul>
 */
     CATBoolean FindInList (const CATUnicodeString& iName ,
                            const CATLISTV(CATBaseUnknown_var)& iLCompThis) ;

/**
 * Retrieves the list of values attributes.
 * @param iOnStartUp informs is check is done on startup TRUE or on the instance FALSE
 * @param ipiInstance Instance pointer.
 */
     CATListValCATBaseUnknown_var* GetValuesOnInstanceOrStartup (CATBoolean iOnStartUp,const CATISpecObject* ipiInstance);

 /**
 * Removes a basic componenent.
 * @param ipiBasicComp Instance pointer.
 */
    HRESULT RemoveBasicComp(const CATISamBasicComponent * ipiBasicComp);

  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEAnalysisUpgrade (CATEAnalysisUpgrade &);
  CATEAnalysisUpgrade& operator=(CATEAnalysisUpgrade&);

};
//-----------------------------------------------------------------------

#endif
