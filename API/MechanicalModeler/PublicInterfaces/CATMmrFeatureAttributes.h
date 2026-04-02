#ifndef __CATMmrFeatureAttributes_h__
#define __CATMmrFeatureAttributes_h__

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMechanicalModeler.h"

#include "CATIInputDescription.h"

/**
* Class to manage specific attributes used in backup startup context.
* <br><b>Role:</b>When feature's startup catalog and code implementation are not
* available on the runtime view, for a feature read from a document, the
* feature instance is replaced with a backup startup. To be able to manage
* correctly this backup startup, the mechanical modeler need to get information
* from attributes. This class enables the CAA application to set this information on
* its CAA features during instanciation.
*/
class ExportedByCATMechanicalModeler CATMmrFeatureAttributes
{
 public:

   /**
     *   Gets the type of feature.
     *   <br><b>Role:</b><br> Get the feature type according to @href CATIInputDescription
     *   implementation. This method is meaningfull for a CAA feature derivated from
     *   GSMGeom satrtup, GeometricalElement3D startup or MechanicalShapeFeature startup.
     *   @param iGeometricFeature
     *   The feature for which the type is set. The feature must derivate from GSMGeom
     *   startup (directly or undirectly).
     *   @param ioFeatureType
     *   <b>Returned values:</b><br>.
     *   <dl><dt><tt>FeatureType_Creation</tt></dt><dd>The feature is a creation feature, it doesn't absorb any feature.</dd>
     *   <dt><tt>FeatureType_Modification</tt></dt><dd>The feature is a modification feature, it absorbs at least one feature.</dd></dl>
     *   @return 
     *   <b>Legal values:</b><br>
     *   <dl><dt><tt>S_OK</tt></dt><dd>The feature type has been correctly retrieved.</dd>
     *   <dt><tt>E_FAIL</tt></dt><dd>The feature type has not been retrieve because of internal failure or because of bad arguments.</dd></dl>
     */
   static HRESULT GetFeatureType(const CATBaseUnknown_var& iGeometricFeature, CATIInputDescription::FeatureType& ioFeatureType);

   /**
     *   Sets the type of feature.
     *   <br><b>Role:</b><br> Set the feature type according to @href CATIInputDescription
     *   implementation. This attribute value will be used when the code of CATIInputDescription
     *   implementation won't be available. This method is meaningfull for a CAA feature
     *   derivated from GSMGeom satrtup or GeometricalElement3D startup. If the CAA feature is derivated from MechanicalShapeFeature
     *   startup the call is not necessary since the feature's type (creation or
     *   modification) is determined from internal modelisation.
     *   @param iGeometricFeature
     *   The feature for which the type is set. The feature must derivate from GSMGeom
     *   startup (directly or undirectly) or from GeometricalElement3D.
     *   @param iFeatureType
     *   <b>Legal values:</b><br>
     *   <dl><dt><tt>FeatureType_Creation</tt></dt><dd>The feature is a creation feature, it doesn't absorb any feature.</dd>
     *   <dt><tt>FeatureType_Modification</tt></dt><dd>The feature is a modification feature, it absorbs at least one feature.</dd></dl>
     *   @return 
     *   <b>Legal values:</b><br>
     *   <dl><dt><tt>S_OK</tt></dt><dd>The feature type has been correctly set.</dd>
     *   <dt><tt>E_FAIL</tt></dt><dd>The feature type has not been set because of internal failure or because of bad arguments.</dd></dl>
     */
   static HRESULT SetFeatureType(const CATBaseUnknown_var& iGeometricFeature, const CATIInputDescription::FeatureType& iFeatureType);
};


#endif
