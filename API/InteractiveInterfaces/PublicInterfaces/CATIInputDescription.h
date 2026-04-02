// COPYRIGHT Dassault Systemes 2002
//===================================================================

#ifndef CATIInputDescription_H
#define CATIInputDescription_H

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATIniInputDescriptionAdaptor
 */

#include "CATInteractiveInterfaces.h"
#include "CATBaseUnknown.h"

class CATListValCATBaseUnknown_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATInteractiveInterfaces IID IID_CATIInputDescription;
#else
extern "C" const IID IID_CATIInputDescription ;
#endif

//------------------------------------------------------------------

/**  
 * Interface defining feature integration to the linearity concepts
 * applied to Ordered Geometrical Set.
 * <br><b>Role:</b>
 * This interface should be implemented for features 
 * to insert into an Ordered Geometrical Set (see @href CATIGSMTool ).
 * <br>It says through @href #GetFeatureType method whether a feature
 * generates a new "geometrical base" or modifies an existing geometry.</br>
 * Ordered Geometrical Set has introduced the concept of <b>absorbed feature</b>
 * (a feature F1 is absorbed if there is a feature F2 modifying F1 as input,
 * F1 is called absorbed feature and F2 absorbant feature). A modification
 * feature gives the list of the input features that are modified
 * (see @href #GetListOfModifiedFeatures ). Among them, one feature is considered
 * as the main input (see @href #GetMainInput ).
 * 
 * <br><br>The absorbed features have to be consistent with the result
 * of the feature. That is to say, if the feature is a geometrical element, their
 * inputs have to be also geometrical elements and the inputs behaviors (shape/volume/solid)
 * have to be the same as the feature behavior (see @href CATIMf3DBehavior ),
 * if the feature is a shape the inputs have to be shapes.
 * <br><br>Absorption impacts, among other things, visualization (absorbed
 * features are not displayed), graphic properties management (feature properties
 * inherit from his main input feature properties), selection (absorbed
 * feature cannot be selected in specification tree), result body (see @href CATIBodyRequest ),
 * insertion.
 * <br><br>
 * The following table shows the rules which must be ensured regarding the methods results.
 * For instance, GetMainInput applied to a creation feature (GetFeatureType returning
 * FeatureType_Creation) must return E_FAIL and the argument oMainInput must be set to Nul.
 * <pre>
 * ====================================================================================
 * |    GetFeatureType    |    GetMainInput      |     GetListOfModifiedFeatures      |
 * |                      | Returns   oMainInput | Returns   ioListOfModifiedFeatures |
 * ====================================================================================
 * |      Creation        |  E_FAIL       Nul    |  E_FAIL           {}               |
 * ====================================================================================
 * |  ContextualCreation  |   S_OK       Input   |  E_FAIL           {}               |
 * ====================================================================================
 * |    Modification      |   S_OK       Input1  |   S_OK    {Input1[, Input2, ...]}  |
 * ====================================================================================
 * </pre>
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATInteractiveInterfaces CATIInputDescription: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Type of the feature.
     * @param FeatureType_Unset
     * Used for default assignment. 
     * @param FeatureType_Creation
     * The feature creates matter. A GSD Line is a creation feature. 
     * @param FeatureType_Modification
     * The feature modifies another feature. A GSD Split is a modification feature. 
     * @param FeatureType_ContextualCreation
     * The feature creates matter but is closely associated with a specific feature. A GSD Offset is a contextual creation
     * feature, it creates geometry contextually to a master feature.
     */
     enum FeatureType { FeatureType_Unset = -1,
                        FeatureType_Creation, 
                        FeatureType_Modification,
                        FeatureType_ContextualCreation};

    /**
     *   Retrieves the list of absorbed features.
     *   <br><b>Role:</b><br>This method returns the input specifications modified by the feature (e.g.
     *   for a GSD split the list contains the "Element to cut" feature) which are called absorbed features.
     *   <br>This method is relevant only for the features of type <tt>FeatureType_Modification</tt>.
     *   @param ioListOfModifiedFeatures
     *   The list of absorbed features. It can't be void.
     *   @return 
     *   <b>Legal values</b>: 
     *   <ul>
     *   <li>S_OK: The type of the feature is <tt>FeatureType_Modification</tt> and there is no error.</li>
     *   <li>E_FAIL: If the type of the feature is <tt>FeatureType_Creation</tt> or
     *   <tt>FeatureType_ContextualCreation</tt> or there is an error</li>
     *   </ul>
     */
     virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ioListOfModifiedFeatures ) = 0 ;

    /**
     *   Retrieves the main input specification of the feature. 
     *   <br><b>Role:</b> This method returns the main input specification of the feature. This is only
     *   relevant for <tt>FeatureType_Modification</tt> and <tt>FeatureType_ContextualCreation</tt> feature.<br>
     *   For <tt>FeatureType_Modification</tt> feature, the MainInput has to be one of the list returned
     *   by @href #GetListOfModifiedFeatures. In case of multiple inputs (e.g. GSD Trim and GSD Join),
     *   the choice can be arbitrary or favoring one particular input. The main input is used essentially
     *   for graphic properties propagation.<br>
     *   For <tt>FeatureType_ContextualCreation</tt> feature, the MainInput is not an absorbed feature,
     *   it's the singular input with which the feature result is closely associated.
     *
     *   @param oMainInput
     *   The main input of the feature.
     *   @return 
     *   <b>Legal values</b>: 
     *   <ul>
     *     <li>S_OK: The type of the feature is <tt>FeatureType_Modification</tt> or 
     *              <tt>FeatureType_ContextualCreation</tt>, and there is no error.</li>
     *     <li>E_FAIL: If the type of the feature is <tt>FeatureType_Creation</tt> or there is an error.</li>
     *   </ul>
     */
     virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput) = 0 ;

    /**
     *   Retrieves the type of the feature. 
     *   <br><b>Role:</b><br>This method retrieves the type of the feature. In most cases, the type is 
     *   fixed but it can also be variable according to its inputs (e.g. GSD split is a modification
     *   feature if the "Element to cut" is a shape and a creation feature if the "Element to cut" is a
     *   solid) or to feature parameters (e.g. GSD extrapol is a modification feature if option
     *   "Assemble result" is checked and a Creation feature otherwise). If returns E_FAIL ioFeatureType 
     *   must be set to FeatureType_Unset.
     *   
     *   @param ioFeatureType
     *   The type of the feature.
     *   @return
     *   <b>Legal values</b>: 
     *   <ul>
     *     <li>S_OK  : ioFeatureType correctly valuated.</li>
     *     <li>E_FAIL: Unexpected failure.</li>
     *   </ul>
     */
     virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& ioFeatureType) = 0 ;

     /**
     * @nodoc
     */
     virtual HRESULT GetListOfDimensioningFeatures(CATListValCATBaseUnknown_var& ioListOfDimensioningFeatures) = 0 ;

};

CATDeclareHandler( CATIInputDescription, CATBaseUnknown );

//------------------------------------------------------------------

#endif
