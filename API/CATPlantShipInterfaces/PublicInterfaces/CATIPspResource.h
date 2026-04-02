#ifndef CATIPspResource_H
#define CATIPspResource_H

//	COPYRIGHT DASSAULT SYSTEMES 2001
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATListOfInt.h"

class CATUnicodeString;
class CATDocument;
class CATListValCATUnicodeString;

extern "C" const IID IID_CATIPspResource ;

/**
 * Interface to get application resources.
 * <b>Role</b>: Get application resources.
 */

class CATIPspResource : public IUnknown
{
  public:  

  /**
  * Open the document associated to the resource.
  * @param iResourceName
  *   Resource Name.
  * @param opDocument
  *   Document associated to the resource.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT OpenResource ( const CATUnicodeString& iResourceName,
    CATDocument *&opDocument ) = 0;    

  /**
  * Get the logical line catalog.
  * @param iClassType
  *   Logical line class type.
  * @param oPath
  *   Logical line catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetLineCatalogPath ( const CATUnicodeString& iClassType,
    CATUnicodeString& oPath, CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the zone catalog.
  * @param iClassType
  *   Zone class type.
  * @param oPath
  *   Zone catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetZoneCatalogPath ( const CATUnicodeString& iClassType,
    CATUnicodeString& oPath, CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the ID Schema directory.
  * @param iDomainName
  *   Domain Name.
  * @param oDirectory
  *   ID Schema directory.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetIDSchemaDir ( const CATUnicodeString& iDomainName,
    CATUnicodeString& oDirectory, CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the User dictionary file name.
  * @param iDomainName
  *   Domain Name.
  * @param oFileName
  *   User dictionary file name.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetUserDictFileName ( const CATUnicodeString& iDomainName,
    CATUnicodeString& oFileName, CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Computed Attribute file name.
  * @param iDomainName
  *   Domain Name.
  * @param oFileName
  *   Computed attribute file name.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetComputedAttrFileName ( const CATUnicodeString& iDomainName,
    CATUnicodeString& oFileName, CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the ID sequence number definition directory.
  * @param oDirectory
  *   ID sequence number definition directory.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetIDSequenceNumberDir ( CATUnicodeString& oDirectory,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Discrete Values directory.
  * @param oDirectory
  *   Discrete Values directory.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetDiscreteValuesDir ( CATUnicodeString& oDirectory,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Standards catalog.
  * @param oPath
  *   Standards catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetStandardsCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Design Rules catalog.
  * @param oPath
  *   Design Rules catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetDesignRulesCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Specification catalog.
  * @param oPath
  *   Specification catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSpecificationCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Insulation Specification catalog.
  * @param oPath
  *   Insulation Specification catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetInsulationSpecCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Part catalog.
  * @param oPath
  *   Part catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetPartCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the on/off sheet symbol catalog.
  * @param oPath
  *   On/off sheet catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetOffsheetCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Resolved Part catalog.
  * @param oDirectory
  *   Resolved Part catalog directory.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetResolvedPartCatalogDir ( CATUnicodeString& oDirectory,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Graphic Representaion file name.
  * @param oFileName
  *   Graphic Representaion file name.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetGraphicRepFileName ( CATUnicodeString& oFileName,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the discipline super classes file name.
  * @param oFileName
  *   Discipline super classes file name.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetDisciplineClassesFileName ( CATUnicodeString& oFileName,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Connector Attribute file name.
  * @param oFileName
  *   Connector Attribute file name.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetCntrAttrFileName ( CATUnicodeString& oFileName,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Report Definition directory.
  * @param oDirectory
  *   Report Definition directory.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetReportDefinitionDir ( CATUnicodeString& oDirectory,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Annotation catalog.
  * @param oPath
  *   Annotation catalog path.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetAnnotationCatalogPath ( CATUnicodeString& oPath,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Schematic graphic names directory.
  * @param oPath
  *   Graphic names directory.
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetGraphicNamesDir ( CATUnicodeString& oDirectory,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Schematic Driven flag default value.
  * @param oFlagValue
  *   Schematic driven flag value = On or Off
  * @param oResourceName
  *   Resource Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSchematicDrivenFlag ( CATUnicodeString& oFlagValue,
    CATUnicodeString& oResourceName ) = 0;

  /**
  * Get the Function Driven flag default value.
  * @param oFlagValue
  *   Function driven flag value = On or Off
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetFunctionDrivenFlag ( CATUnicodeString& oFlagValue ) = 0;

  /**
  * Get the growth factor value.
  * @param oGrowthFactor
  *   Growth factor value.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetGrowthFactorValue ( double & oGrowthFactor ) = 0;

  /**
  * Get the cable clearance value.
  * @param oCableClearance
  *   Cable clearance value.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetCableClearanceValue ( double &oCableClearance ) = 0;

  /**
  * Get the path of a resource.
  * @param iResourceName
  *   Resource Name.
  * @param oPath
  *   Resource path.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetResourcePath ( const CATUnicodeString& iResourceName,
    CATUnicodeString& oPath ) = 0;

  /**
  * Get the value defined for a resource.
  * @param iResourceName
  *   Resource Name.
  * @param oValue
  *   Resource value.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetResourceValue ( const CATUnicodeString& iResourceName,
    CATUnicodeString& oValue ) = 0;

};
#endif
