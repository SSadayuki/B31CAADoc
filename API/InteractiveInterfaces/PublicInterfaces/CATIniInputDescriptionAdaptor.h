// COPYRIGHT Dassault Systemes 2002
//===================================================================

#ifndef CATIniInputDescriptionAdaptor_H
#define CATIniInputDescriptionAdaptor_H

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATInteractiveInterfaces.h"
#include "CATIInputDescription.h"
#include "CATBaseUnknown.h"

class CATListValCATBaseUnknown_var; 


/**
* Adaptor class for CATIInputDescription.
* @see CATIInputDescription
*/

class ExportedByCATInteractiveInterfaces CATIniInputDescriptionAdaptor: public CATIInputDescription
{
   CATDeclareClass;

  public:

    /**
    * Constructs.
    */
    CATIniInputDescriptionAdaptor();

    virtual ~CATIniInputDescriptionAdaptor();

    /**
     *   Retrieves the list of not drawn features.
     *   @param ioListOfModifiedFeatures
     *      The list of modified features that will not be computed for the visualization
     *   @return 
     *      E_NOTIMPL
     */
    
     virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& 
                                                         ioListOfModifiedFeatures );

    /**
     *   Retrieves the main input specification of the feature. 
     *   @param oMainInput
     *      The main input specification of the feature
     *   @return 
     *     E_NOTIMPL
     */
     virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput);

    /**
     *   Gets the type of the feature. It's recommended to assign FeatureType_Unset
     *   to ioFeatureType parameter at the beginning of the routine.
     *   @param ioFeatureType
     *      The type of the feature
     *   @return 
     *     E_NOTIMPL
     */
     virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& ioFeatureType);

    /**
     * @nodoc
     *   Retrieves the list of features . 
     *   These features correspond to the features ....
     *   @param ioListOfDimensioningFeatures
     *      The list of features ...
     *   @return 
     *     E_NOTIMPL
     */
     virtual HRESULT GetListOfDimensioningFeatures(CATListValCATBaseUnknown_var& ioListOfDimensioningFeatures);

private:
    
    CATIniInputDescriptionAdaptor (const CATIniInputDescriptionAdaptor&);
    CATIniInputDescriptionAdaptor& operator = (const CATIniInputDescriptionAdaptor&);
};


#endif
