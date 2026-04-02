#ifndef CATMmrAlgoConfigServices_H  
#define CATMmrAlgoConfigServices_H

// COPYRIGHT Dassault Systemes 2004
/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATMechanicalModeler.h"
#include "CATBaseUnknown.h"
class CATISpecObject;
class CATSoftwareConfiguration;
  
 
/**  
* Class providing services to manage the mechanical feature versionning.<br>
* <br>
* <b>Role:</b>
* <ul>
* This class is used to manage the @href CATSoftwareConfiguration that is needed to version a mechanical feature.<br>
* But this class doesn't provide services that modify the CATSoftwareConfiguration.
* 
* <p>At the end of the first build, the configuration must be stored thanks to the @href #StoreConfiguration method.
* After this storage, the configuration can not be modified anymore. It is impossible to by-pass this restriction
* thanks to a new call of the "store" method with a different configuration. It's the only way to assure that the
* configuration used during the following builds will be the same that during the first one.
* So if you use these methods correctly, your feature will have the same behavior update after update.<p>
* </ul>
* <br>
* <b>Note about the different methods provided by this class and when to use them:</b>
* <br>
* <ul>
*   <li>
*     The @href #CreateConfigurationData method must be called in your factory implementation.<br>
*     It allows to initialize an internal mechanical data needed to manage the configuration.<br>
*     If this method is not properly used, the rest of the methods of this class will have a bad behavior.<br>
*   </li>
*   <li>
*     The @href #GetConfiguration and @href #StoreConfiguration methods must be used during the build,
*     in the @href CATIBuild interface implementation of your feature.<br>
*     Like the configuration is a common data that allows to version the different softwares (DS softwares and
*     your owns) called during the build, the @href #GetConfiguration method must be called at the begining of
*     the build, and the @href #StoreConfiguration method at its ends.<br>
*   </li>
* </ul>
* <br>
* See the CAA article entitled <b>"Integrating a New Geometrical Feature in the Update Mechanism"</b> for an example
* of the use of the methods of this class.<br>
* <br>
*/

  
class ExportedByCATMechanicalModeler CATMmrAlgoConfigServices  
{  
  public:
    
    /**  
    *  Initializes a data needed to store the configuration of the feature.<br>
    *  <br>
    *  <b>Role:</b><br>
    *  This method initializes a data needed to store the configuration that allows to version your feature.<br>
    *  <br>
    *  <b>Note:</b>
    *  <ul>          
    *    <li>
    *      This method must be called in the method instanciating the feature. More generally in the factory
    *      implementation.
    *    </li>
    *    <li>
    *      If this method is not properly used, the rest of the methods of this class will have a bad behavior.
    *    </li>
    *  </ul>
    *  <br>
    *  @param   iFeature
    *    The mechanical feature to version.
    *  <br>
    *  @return 
    *    <ul>
    *      <li>
    *        S_OK if the data has been correctly initialized.
    *      </li>
    *      <li>
    *        E_INVALIDARG if <tt>iFeature</tt>:
    *        <ul>
    *          <li>is NULL</li>
    *          <li>is not a mechanical feature</li>
    *        </ul>
    *      </li>
    *      <li>
    *        E_FAIL for all other problems.
    *      </li>
    *    </ul>
    *  <br>
    *  <br>
    */  
    static HRESULT CreateConfigurationData(const CATISpecObject *iFeature);
  
    /**  
    *  Reads the configuration stored on a mechanical feature.<br>
    *  <br>
    *  <b>Role:</b><br>
    *  This method reads the configuration stored on the mechanical feature.<br>
    *  It must be called at the beginning of the build of your feature.<br>
    *  <br>
    *  <b>Note:</b>
    *  <ul>          
    *    <li>
    *      If the @href #CreateConfigurationData method has not been correctly called on the feature (because
    *      it's an old feature not versionned, or because you made an error in the use of this method), an empty
    *      configuration is provided. This configuration can not be valuated.<br> 
    *      In this case the <b>oIsConfigToStore</b> parameter shows that it's useless to store the configuration.
    *    </li>
    *    <li>
    *      If your feature has not been builded yet, like it has no configuration at this step, an empty
    *      configuration is provided. This configuration can be valuated.<br>
    *      In this case the <b>oIsConfigToStore</b> parameter shows that the configuration must be stored,
    *      and so you will have to store it at the end of the build of your feature, thanks to the @href
    *      #StoreConfiguration method.
    *    </li>
    *    <li>
    *      If the feature has already been builded one time, it's the configuration stored at the end of the first
    *      build that is provided. This configuration can not be valuated or modified.<br>
    *      In this case the <b>oIsConfigToStore</b> parameter shows that it's useless to store the configuration.
    *    </li>
    *  </ul>          
    *  <br>
    *  @param   iFeature
    *    The feature on which you want to read the configuration.
    *  @param   oConfig
    *    The configuration read (or created if the feature has no configuration stored) on the feature.<br>
    *    <b>This object must be released at the end of the treatement!</b>
    *  @param   oIsConfigToStore
    *    This integer allows to know if the configuration provided must be stored on the feature.<br>
    *    <ul>
    *      <li>
    *        oIsConfigToStore = 1, the configuration must be stored.
    *      </li>
    *      <li>
    *        oIsConfigToStore = 0, the configuration must not be stored.
    *      </li>
    *    </ul>
    *  <br>
    *  @return 
    *    <ul>
    *      <li>
    *        S_OK if the configuration has been correctly read on the feature (or created if no configuration is
    *        stored on the feature).
    *      </li>
    *      <li>
    *        S_FALSE if <tt>iFeature</tt> is an old created feature which does not have any configuration yet.
    *      </li>
    *      <li>
    *        E_INVALIDARG if <tt>iFeature</tt>:
    *        <ul>
    *          <li>is NULL</li>
    *          <li>is not a mechanical feature</li>
    *        </ul>
    *      </li>
    *      <li>
    *        E_FAIL for all other problems.
    *      </li>
    *    </ul>
    *  <br>
    *  <br>
    */  
    static HRESULT GetConfiguration(const CATISpecObject *iFeature,CATSoftwareConfiguration *&oConfig,int &oIsConfigToStore);
    
    /**  
    *  Stores a configuration on a mechanical feature.<br>
    *  <br>
    *  <b>Role:</b><br>
    *  This method stores the configuration that allow to version your mechanical feature.<br>
    *  It must be called at the end of the build of your feature. Check the value of the <b>oIsConfigToStore</b>
    *  parameter of the @href #GetConfiguration method to know when it's usefull to call this method.<br>
    *  <br>
    *  <b>Note:</b><br>
    *  <ul>          
    *    <li>
    *      If the @href #CreateConfigurationData method has not been correctly called on the feature (because it's
    *      an old feature not versionned, or because you made an error in the use of this method), nothing is done.
    *    </li>
    *    <li>
    *      The configuration that is passed must be the same configuration that the one provided by the
    *      @href #GetConfiguration method.
    *    </li>
    *    <li>
    *      The method checks that the configuration must effectively be stored. If it's not the case, nothing is done.
    *    </li>
    *  </ul>
    *  <br>
    *  @param   iFeature
    *    The feature that stores the configuration.
    *  @param   iConfig
    *    The configuration that must be stored on the feature.<br>
    *    <b>The configuration is not released if the store is done. The release must be done by the user!</b><br>
    *  <br>
    *  @return 
    *    <ul>
    *      <li>
    *        S_OK if the configuration has been correctly stored on the feature, or if it was useless to call this method
    *        (because the configuration is already stored on the feature).
    *      </li>
    *      <li>
    *        E_INVALIDARG if <tt>iFeature</tt>:
    *        <ul>
    *          <li>is NULL</li>
    *          <li>is not a mechanical feature</li>
    *        </ul>
    *      </li>
    *      <li>
    *        E_INVALIDARG if <tt>iConfig</tt>:
    *        <ul>
    *          <li>is NULL</li>
    *          <li>is not the same configuration that the one provided by the @href #GetConfiguration method</li>
    *        </ul>
    *      </li>
    *      <li>
    *        E_FAIL for all other problems.
    *      </li>
    *    </ul>
    *  <br>
    *  <br>
    */  
    static HRESULT StoreConfiguration(const CATISpecObject *iFeature,CATSoftwareConfiguration *iConfig);


  private:
    
    CATMmrAlgoConfigServices();  
    ~CATMmrAlgoConfigServices();     
};  
#endif  
     
