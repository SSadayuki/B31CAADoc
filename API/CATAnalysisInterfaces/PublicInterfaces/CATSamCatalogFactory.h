#ifndef CATSamCatalogFactory_h
#define CATSamCatalogFactory_h
//=============================================================================
// COPYRIGHT Dassault Systemes 2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATAnalysisInterface.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"

class CATBaseUnknown;
class CATUnicodeString;

/** @deprecated V5R15 Use @href CATSamCatalogFactory#CreateAnalysisSet instead. */
#define CATSamCatalog_AnalysisSet CATSamCatalogFactory::CreateAnalysisSet
/** @deprecated V5R15 Use @href CATSamCatalogFactory#CreateMSHPart instead. */
#define CATSamCatalog_MSHPart CATSamCatalogFactory::CreateMSHPart
/** @deprecated V5R15 Use @href CATSamCatalogFactory#CreateAnalysisEntity instead. */
#define CATSamCatalog_AnalysisEntity CATSamCatalogFactory::CreateAnalysisEntity
/** @deprecated V5R15 Use @href CATSamCatalogFactory#CreateBasicComponent instead. */
#define CATSamCatalog_BasicComponent CATSamCatalogFactory::CreateBasicComponent
/** @deprecated V5R15 Use @href CATSamCatalogFactory#SetBasicComponent instead. */
#define CATSamCatalog_SetBasicComponent CATSamCatalogFactory::SetBasicComponent
/** @deprecated V5R15 Use @href CATSamCatalogFactory#SetPhysicalType instead. */
#define CATSamCatalog_SetPhysicalType CATSamCatalogFactory::SetPhysicalType
/** @deprecated V5R15 Use @href CATSamCatalogFactory#SetDataType instead. */
#define CATSamCatalog_SetDataType CATSamCatalogFactory::SetDataType
/** @deprecated V5R15 Use @href CATSamCatalogFactory#SetValuesDim instead. */
#define CATSamCatalog_SetValuesDim CATSamCatalogFactory::SetValuesDim
/** @deprecated V5R15 Use @href CATSamCatalogFactory#SetLabels instead. */
#define CATSamCatalog_SetLabels CATSamCatalogFactory::SetLabels


/**
 * Global Services to create feature that derive from Analysis Types.<br>
 */

class ExportedByCATAnalysisInterface CATSamCatalogFactory
{

 public:

/**
 * Global service for "AnalysisSet" startup creation.
 * @deprecated  V5-6R2015
 */
   static HRESULT CreateAnalysisSet (const CATUnicodeString *iTypeName,      
                                     const CATUnicodeString *iSubType,
	                                   CATBaseUnknown **oStartUp,CATBaseUnknown **piCatalog,
                                     CATBoolean iPublic=FALSE,CATBoolean iDerivable=FALSE);


/**
 * Global service for "MSHPart" startup creation.
 * @deprecated  V5-6R2015
 */


   static HRESULT CreateMSHPart (const CATUnicodeString *iTypeName,      
                                 CATBaseUnknown **oStartUp,CATBaseUnknown **piCatalog,
                                 CATBoolean iPublic=FALSE,CATBoolean iDerivable=FALSE);

/**
 * Global service for "AnalysisEntity" startup creation.
 * @deprecated  V5-6R2015
 */


   static HRESULT CreateAnalysisEntity (const CATUnicodeString *iTypeName,
                                        const CATUnicodeString *iSubType,
                                        CATBaseUnknown **oStartUp,     
                                        CATBaseUnknown **piCatalog,
                                        CATBoolean iPublic=FALSE,CATBoolean iDerivable=FALSE);
/**
 * Global service for "BasicComponent" startup creation.
 * @deprecated  V5-6R2015
 */


   static HRESULT CreateBasicComponent (const CATUnicodeString *iTypeName,
                                        const CATUnicodeString *iSubType,  
                                        CATBaseUnknown **oStartUp,CATBaseUnknown **piCatalog,
                                        CATBoolean iPublic=FALSE,CATBoolean iDerivable=FALSE);
/**
 * Global service to associate a "BasicComponent" to another or to an Analysis entity.
 * @deprecated  V5-6R2015
 */

   static HRESULT SetBasicComponent (const CATUnicodeString *iTypeName,
                                     CATBaseUnknown *piStartUp,
                                     CATBaseUnknown **piCatalog,CATBaseUnknown* piBasicComponent=NULL) ;
/**
 * Global service to define a physical type on a startup on anay type.
 * @param piStartUp  The Startup.
 * @param iType The string of the physical type.
 */


   static HRESULT SetPhysicalType (CATBaseUnknown *piStartUp,const CATUnicodeString *iType);

/**
 * Global service to define a data type on a startup on anay type.
 * @param piStartUp  The Startup.
 * @param iType The string of the data type.
 */

   static HRESULT SetDataType (CATBaseUnknown *piStartUp,const CATUnicodeString *iType);
/**
 * Global service to define a the dimension values on a startup of basic component.
 * @param piStartUp  The Startup.
 * @param iValueDim The array that defines the dimension values.
 */


   static HRESULT SetValuesDim (CATBaseUnknown *piStartUp, int Nb,const int *iValueDim);

/**
 * Global service to define a the Labels values on a startup of basic component.
 * @param piStartUp  The Startup.
 * @param iLabels The array that defines the labels identifiers.
 */ 

   static HRESULT SetLabels(CATBaseUnknown *piStartUp,int Nb,const CATUnicodeString *iLabels);

/**
 * Global service to set up a backup startup in a CATfct.
  * @deprecated  V5-6R2015
 */ 
   static HRESULT UpgradeForBackup(CATBaseUnknown **piCatalog, int iMode);

  
private:

/**
 * Global service for prerequisite catalog management.
 * Test and load the catalog if necessary.
 */
  static HRESULT TestAndLoadCata (CATBaseUnknown *piCatalog,const CATUnicodeString CatalogName);

};

#endif
