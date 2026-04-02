/* -*-c++-*- */
#ifndef CATIUdfFactory_H
#define CATIUdfFactory_H
// -------------------------------------------------------------------
// Copyright Dassault Systemes 1999
//---------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATUdfInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"

class CATIUdfFeature_var;
class CATIUdfFeatureSet_var;
class CATIStopUpdateFeature_var;
class CATIUdfFeatureInstance_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATUdfInterfaces IID IID_CATIUdfFactory ;
#else
extern "C" const IID IID_CATIUdfFactory ;
#endif

//------------------------------------------------------------------
/**
  * Interface to create a User Feature reference or a Power Copy reference.
  * <b>Role:</b> This interface enables to create a User Feature (Power Copy) reference or
  * to retrieve existing one.
  * <br> This interface is implemented by the Part container. 
  * <br>With this interface, there are another in relationship:
  * <ul>
  * <li>@href CATIUdfFeature is the interface to define the content of 
  * the User Feature (Power Copy) reference </li>
  * <li>@href CATIUdfFeatureSet is the interface to add a User Feature (Power Copy) reference 
  * in a specific set</li>
  * <li>@href CATIUdfInstantiate is the interface to create a User Feature (Power Copy) Instance
  * from the User Feature (Power Copy) reference </li>
  * <li>@href CATIUdfFeatureInstance is the interface to edit a User Feature instance. A Power 
  * Copy instance is not editable. </li>
  * </ul>
  */
class ExportedByCATUdfInterfaces CATIUdfFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   /**
     * Creates a Power Copy reference.
     * <br><b>Role:</b>After the creation, you use the @href CATIUdfFeature 
     * to fill the reference and at least you set it in the 
     * Power Copy set thanks to @href CATIUdfFeatureSet#AppendFeature .  
     * <br>Use the @href #GetFeatureSet method with <b>0</b> as argument to retrieve the set dedicated to
     * the Power Copy.
     * <br>As long as the Power Copy reference is not added in its specific set, it is 
     * not considered as a Power Copy reference of the container: 
     * The list given by @href #GetPowerCopyList 
     * doesn't contain the new reference. 
     * @return
     *   The created Power Copy reference or NULL_var if failed.
     */
   virtual CATIUdfFeature_var CreatePowerCopy() = 0;

   /**
     * Retrieves all Power Copy references.
     * @return
     *   The list of Power Copy references added in the Power Copy set. 
     */
    virtual CATListValCATISpecObject_var* GetPowerCopyList() = 0;

   /**
     * Creates a User Feature reference.
     * <br><b>Role:</b>After the creation, you use the @href CATIUdfFeature 
     * to fill the reference and at least you set it in the 
     * User Feature set thanks to @href CATIUdfFeatureSet#AppendFeature .  
     * <br>Use the @href #GetFeatureSet method with <b>1</b> as argument to retrieve the set dedicated to
     * the User Feature.
     * <br>As long as the User Feature reference is not added in its specific set, it is 
     * not considered as a User Feature reference of the container: 
     * The list given by @href #GetUserFeatureList 
     * doesn't contain the new reference. 
     * @param iName
     *   The name of the User Feature reference. 
     * @return
     *   The created User Feature reference or NULL_var if failed.
     */
   virtual CATIUdfFeature_var CreateUserFeature (const CATUnicodeString& iName) = 0;

   /**
     * Retrieves all User Feature references.
     * @return
     *   The list of User Feature references added in the User Feature set. 
     */
   virtual CATListValCATISpecObject_var* GetUserFeatureList() = 0;

   /**
     * @nodoc 
     * Creates a StopUpdateFeature.
     * @return
     *   The created stop update feature or NULL_var if failed.
     * @see CATIStopUpdateFeature
     */
   virtual CATIStopUpdateFeature_var CreateStopUpdateFeature() = 0;

   /**
     * Retrieves the feature set.
     * @param iMode
     *   0 : the set for Power Copy, 1 : the set for User Feature
     * @return
     *   The feature set or NULL_var is failed.
    */
   virtual CATIUdfFeatureSet_var GetFeatureSet (int iMode=0) = 0;


   /**
   * Creates a document template feature.
   * @param iAppendToRelSet
   * if not set to 0, appends this feature to the related relation set.
   * @return
   * the created feature
   */
   virtual CATISpecObject_var CreateDocumentTemplate(int iAppendToRelSet = 1) = 0;


   /**
   * Retrieves all Document Templates references.
   * @return
   *   The list of Document Templates references added in the Knowledge Template set. 
   */
   virtual CATListValCATISpecObject_var* GetDocumentTemplateList() = 0;


   /**
   * @nodoc
   * Creates a list of external views feature.
   * Not yet available
   * @return
   *   The list of External Views. 
   */
	 virtual CATISpecObject_var CreateListExternalViews() = 0;

   /**
   * @nodoc
   * Creates a document external view feature.
   * Not yet available
   * @return
   * the created feature
   */
   virtual CATISpecObject_var CreateExternalView() = 0;


   /**
   * @nodoc
   * Retrieves all External Views references.
   * Not yet available
   * @return
   *   The list of External Views references added in the External View list. 
   */
   virtual CATListValCATISpecObject_var* GetExternalViewList() = 0;
};

//------------------------------------------------------------------

CATDeclareHandler (CATIUdfFactory, CATBaseUnknown);

#endif
