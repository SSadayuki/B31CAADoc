#ifndef CATIMfProcReport_h
#define CATIMfProcReport_h

// COPYRIGHT DASSAULT SYSTEMES 1999
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "MecModItfCPP.h"
#include "CATBaseUnknown.h" 
#include "CATLISTV_CATISpecObject.h" 
#include "CATMfDefs.h" 
#include "CATMfReportDefs.h"

class CATBody_var;
class CATISpecObject_var;
class CATGeoFactory_var;
class CATProcReport;
class CATCGMJournalList;

class CATSoftwareConfiguration;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfProcReport;
#else
extern "C" const IID IID_CATIMfProcReport;
#endif

/**
 * Interface to create a generic naming scope with a procedural report.
 * <b>Role:</b>This advanced interface is useful to create the genering naming scope of
 * a new geometrical feature. 
 * <p>The <b>scope</b> is the link between the geometrical feature and its topology
 * result (<tt>CATBody</tt>). It enables you to name with a stable way the  <tt>CATCell</tt> of the 
 * <tt>CATBody</tt> result. Each scope contains nodes, one for each followed cells. It is the 
 * responsability of the feature to ask the generation of its own 
 * scope. This task is done in the following methods:</p>
 * <ul>
 * <li>@href CATIBuild#Build : to build the topology result of the feature</li> 
 * <li>@href CATIBuildShape#BuildShape : to build the topology associated with the form of the feature. 
 * This method is only useful for the form features (pad, pocket, shaft, groove stiffener,...)</li>
 * </ul>
 * <p>However, the feature has only an indirect control on how its scope is generated. There are two 
 * means to create it wich depends on the type of the geometrical feature:</p>
 * <ul>
 * <li>The feature has no geometrical feature as input specification </li>
 * <p>In this case the feature is a datum, a geometrical feature without historic. 
 * The @href CATIMfResultManagement interface must be used.</p>
 * <li>Otherwise</li>
 * <p>The topology of the feature will reuse the topology of the input features. As the geometry
 * is based on the cell reusage, the scope creation will reuse the nodes of the input feature scopes.
 * Once the topological operations have been done, the topological journal will be used to
 * create the feature's scope. This
 * operation is possible thanks to a procedural report. This interface allows you to control
 * the usage of this report.</p>
 * </ul>
 * 
 * Use this interface as follows:
 *  <ol>
 *  <li>Create the procedural report with a @href #CreateProcReport call, </li>
 *  <li>Run the topological operator, </li>
 *  <li>Store the procedural report with a @href #StoreProcReport call or if a
 * problem occurs in the <tt>Build/BuildShape</tt> methods use the @href #DeleteProcReport call.</li>
 *  </ol>
 * If the feature is deactivated - see @href CATIMechanicalProperties#IsInactive - the
 * @href CATIBuild#Build method can be called. In this case, the result must be deactivated by calling
 * the @href CATIMfProcReport#InactivateResult method. 
 * <p>Refer to the CAA Encyclopedia articles entitled
 * "Integrating a New Geometrical Feature in the Update Mechanism" and 
 * "Generic Naming Overview" for details about the usage of this interface.
 */
class ExportedByMecModItfCPP CATIMfProcReport : public CATBaseUnknown
{
  CATDeclareInterface;

 public:
/**
 * Creates a report.
 * <br><b>Role:</b>This method creates the procedural report of the feature.
 * <br>For example, to create the report of a pad built on Sketch.2 with a bottom face until the FSur.1:
 * <pre>
 * <tt>iSpecs[1]=Sketch.2</tt>, <tt>iKeys[1]=MfKeyExtrudedFrom</tt>, 
 * <tt>iSpecs[2]=FSur.1</tt>, <tt>iKeys[2]=MfKeyBottom</tt>.
 * </pre>
 * @param iInputSpecificationList
 * The list of specifications must contain the geometrical features whose scopes are needed to build the
 * scope of the current feature. This list can be empty. 
 * @param iKeyList
 * The list of key must have the same count of elements as the list of specifications. The default value is
 * <tt>MfKeyNone</tt>. A different value will tell to the V5 mechanism to replace the historical 
 * relationship of a node with a user info.
 * 
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><tt>MfKeyNone</tt>,</li>
 * <li><tt>MfKeyTop</tt>,</li>
 * <li><tt>MfKeyBottom</tt>,</li> 
 * <li><tt>MfKeyExtrudedFrom</tt>
 * </ul>
 * @param iBoolOper
 * The integer value indicates which feature will own the generated scope. It is the same value 
 * as used in the @href #StoreProcReport method.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><tt>0</tt>, when the scope should be associated with the feature itself: </li>
 * <br>For the contextual feature inside the <tt>Build</tt> method or the form feature inside 
 * the <tt>BuildShape</tt> method. 
 * Refer to the @href CATIShapeFeatureProperties interface for details about form and contextual
 * features.
 * <li><tt>1</tt>, when the scope should be associated with the ResultOUT attribute of a 
 * shape feature.</li>
 * <br>For the form feature inside the <tt>Build</tt> method. Refer to the @href CATIShapeFeatureBody interface for detail about the
 * ResultOUT attribute.
 * </ul>
 * @param iReferenceFeature
 * The reference feature to use only for pattern. Lets the default value, NULL_var.
 * @exception @href CATError
 */
  virtual void CreateProcReport(CATListValCATBaseUnknown_var& iInputSpecificationList,
                                CATListOfCATUnicodeString&    iKeyList, 
                                int                           iBoolOper=0,
                                const CATISpecObject_var&     iReferenceFeature=NULL_var) = 0;

/**
 * Stores the report.
 * @param iBody
 * The result body of the topological operator.
 * @param iType
 * <b>Legal values</b>: 
 * <br><tt><b>Copy</b></tt>: the nodes of the previous scope which are not modified by the operation 
 * are copied in the current scope,
 * <br><tt><b>NoCopy</b></tt>: the nodes of the previous scope which are not modified by the operation 
 * are not copied in the current scope.
 * @param iBoolOper
 * The integer value indicates which feature will own the generated scope. It is the same value 
 * as used in the @href #CreateProcReport method.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><tt><b>0</b></tt> when the scope should be associated with the feature itself: </li>
 * <br>For the contextual feature inside the build method or the form feature inside 
 * the <tt>BuildShape</tt> method. 
 * Refer to the @href CATIShapeFeatureProperties interface for details about form and contextual
 * features.
 * <li><tt><b>1</b></tt> when the scope should be associated with the ResultOUT feature of a 
 * shape feature.</li>
 * <br>For the form feature inside the <tt>Build</tt> method. Refer to the @href CATIShapeFeatureBody interface for detail about the
 * ResultOUT feature.
 * </ul>
 * @exception @href CATError
 */
  virtual void StoreProcReport(const CATBody_var&             iBody,
                               const CATMfStoreProcReportType iType, 
                               int                            iBoolOper=0) = 0;

/**
 * Deletes the current report.
 * <br><b>Role:</b>This method enables you to clean the internal data created during the
 * procedural report. You must use this method if an error occurs during the Build/BuildShape
 * method.
 */
  virtual void DeleteProcReport() = 0;	 

/**
 * Reads the topological journal.
 * <br><b>Role:</b>This method returns the object useful to create the <tt>CATTopData</tt> class instance
 * needed in topological operator.
 * <br><b>Lifecycle rules deviation:</b>Do not release the returned value.
 * @exception @href CATError
 */
  virtual CATCGMJournalList * GetCGMJournalList()= 0;

/**
 * Inserts a new topological journal.
 * @param iNewJournal
 * New topological journal.
 * @exception @href CATError
 */
  virtual void InsertCGMJournalList(CATCGMJournalList * iNewJournal) = 0;

/**
 * Gets the geometrical factory.
 * <br><b>Role:</b>This method gets the geometrical factory of the feature.
 * <p>It is the factory which allows you to create the topological result of the geometrical feature. 
 * A geometrical feature is a mechanical feature for which a topological object can be associated with its result. This topological object is a @href CATBody . </p>
 * @param oGeoFactory
 * The geometrical factory which will contain the topological result of the geometrical feature.
 * @return 
 * S_OK when succeeded<br>
 * E_FAIL if the factory has not been found.<br>
 */
  virtual HRESULT  GetGeoFactoryFromFeature( CATGeoFactory_var &oGeoFactory) = 0;

/**
  * Inactivates the result of a geometrical feature.
  * <br><b>Role:</b>This method must be used when the feature is deactivated. In other words when 
  * the @href CATIMechanicalProperties#IsInactive returns 1. But you have to take into
  * account of this flag only for a feature deriving either from GSMGeom or from GeometricalElement3D. 
  * In the case of a feature deriving either from the MechanicalFormFeature or from 
  * MechanicalContextualFeature, the Build method in not called.
  * @param iBoolOper
  * The integer value indicates which feature will own the generated scope. It is the same value 
  * as used in the @href #StoreProcReport method.
  * <br><b>Legal values</b>: 
  * <ul>
  * <li><tt>0</tt>, when the scope should be associated with the feature itself: </li>
  * <br>For the contextual feature inside the <tt>Build</tt> method or the form feature inside 
  * the <tt>BuildShape</tt> method. 
  * Refer to the @href CATIShapeFeatureProperties interface for details about form and contextual
  * features.
  * <li><tt>1</tt>, when the scope should be associated with the ResultOUT attribute of a 
  * shape feature.</li>
  * <br>For the form feature inside the <tt>Build</tt> method. Refer to the @href CATIShapeFeatureBody interface for detail about the
  * ResultOUT attribute.
  * </ul>
 * @exception @href CATError
  */
  virtual HRESULT InactivateResult(int iBoolOper=0) =0;

/**
  * Adds a rule on the journal.
  * <br><b>Role:</b>This method must be used to add a rule to be applied when creating the nodes at the end of the build.
  * It should be invoqued before calling the @href #StoreProcReport method.
  * It allows managing the behavior of the created elements in the selection process. See CAA articles for more information.
  * @param Rule
  * The rule to be applied.
  * @return
  * S_OK when succeeded<br>
  * E_FAIL if the rule could not be set.<br>
  */
  virtual HRESULT SetProcTranslateRule ( CATMfProcTranslateRules Rule ) =0;


//--------------------------------------------------- End 
/**
 * @nodoc
 * Stores the report.
 * @param iBody
 * The result body of the topological operator.
 * @param iType
 * <b>Legal values</b>: 
 * <ul><li><tt>Copy</tt>: the nodes of the previous scope which are not modified by the operation 
 * are copied in the current scope,
 * <li><tt>NoCopy</tt>: the nodes of the previous scope which are not modified by the operation 
 * are not copied in the current scope.</ul>
 * @param iBoolOper
 * The integer value indicates which feature will own the generated scope. It is the same value 
 * as used in the @href #CreateProcReport method.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><tt>0</tt> when the scope should be associated with the feature itself: </li>
 * <br>For the contextual feature inside the build method or the form feature inside 
 * the <tt>BuildShape</tt> method. 
 * Refer to the @href CATIShapeFeatureProperties interface for details about form and contextual
 * features.
 * <li><tt>1</tt> when the scope should be associated with the ResultOUT feature of a 
 * shape feature.</li>
 * <br>For the form feature inside the <tt>Build</tt> method. Refer to the @href CATIShapeFeatureBody interface for detail about the
 * ResultOUT feature.
 * </ul>
 * @param iReferenceFeature
 * Reference feature for pattern only.
 */
  virtual void StoreProcReport(const CATBody_var&             iBody,
                               const CATMfStoreProcReportType iType, 
                               int                            iBoolOper,
                               const CATISpecObject_var&      iReferenceFeature) = 0;
/**
 * @nodoc
 * Stores the report.
 * <br>Advanced method with the explicit list of operands not to be copied.
 * The nodes of these operands in the previous scope are not copied in the current scope.
 * @param iBody
 * The result body of the topological operator.
 * @param iNoCopySpec
 * List of operands not to be copied.
 * @param iNoCopyKeys
 * List of key words.
 * @param iBoolOper
 * The integer value indicates which feature will own the generated scope. It is the same value 
 * as used in the @href #CreateProcReport method.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><tt>0</tt> when the scope should be associated with the feature itself: </li>
 * <br>For the contextual feature inside the build method or the form feature inside 
 * the <tt>BuildShape</tt> method. 
 * Refer to the @href CATIShapeFeatureProperties interface for details about form and contextual
 * features.
 * <li><tt>1</tt> when the scope should be associated with the ResultOUT feature of a 
 * shape feature.</li>
 * <br>For the form feature inside the <tt>Build</tt> method. Refer to the @href CATIShapeFeatureBody interface for detail about the
 * ResultOUT feature.
 * </ul>
 * @param iReferenceFeature
 * Reference feature for pattern only.
 */
  virtual void StoreProcReport(const CATBody_var&            iBody,
                               CATListValCATBaseUnknown_var& iNoCopySpec,
                               CATListOfCATUnicodeString&    iNoCopyKeys,
                               int                           iBoolOper=0,
                               const CATISpecObject_var&     iReferenceFeature=NULL_var) = 0;
/**
 * @nodoc
 * Stores the report.
 * <br>The same method as the first <tt>StoreProcReport</tt> with the following arguments:
 * <ul>
 * <li> iType == NoCopy </li>
 * <li> iBoolOper = 0 </li>
 * </ul> 
 * @param iBody
 * The result body of the topological operator.
 */
  virtual void StoreProcReport(const CATBody_var& iBody) = 0;
/**
 * @nodoc
 * Reads the current report.
 */
  virtual CATProcReport* GetProcReport() const = 0;

/**
 * @nodoc
 * Defines the number of report blocs.
 * <br>Used in sheet metal application.
 * @param iNbBloc
 * Number of blocs.
 */
  virtual void SetNbProcReportBloc(int iNbBloc) =0;
/**
 * @nodoc
 * Internal use for Cut, Copy Paste.
 */
  virtual HRESULT CreateReport(const CATBaseUnknown_var &iFeatureReference) = 0;
/**
 * @nodoc
 * Internal use for Cut, Copy Paste.
 */
  virtual void StoreReportInCopy(const CATBody_var&                         iNewBody, 
                                 const CATMfStoreProcReportNamingType iMfNamingType) = 0;
  /**
  * @nodoc
  * Internal for next version 
  */
  virtual HRESULT CreateReport(CATSoftwareConfiguration *iConfig,const CATBaseUnknown_var &iFeatureReference) = 0;
  /**
  * @nodoc
  * Internal for next version 
  */
  virtual void CreateProcReport(CATSoftwareConfiguration*     iConfig,
                                CATListValCATBaseUnknown_var& iSpecs,
                                CATListOfCATUnicodeString&    iKeys, 
                                int                           iBoolOper=0,
                                const CATISpecObject_var&     iReferenceFeature=NULL_var) = 0;
  /**
  * @nodoc
  * Internal for Modify Datum 
  */
  virtual HRESULT CreateReportForDatum(CATSoftwareConfiguration *Config) = 0;
  /**
  * @nodoc
  * Internal use (Report with Bridge)
  */
  virtual void StoreProcReportWithBridge(const CATBody_var&             iBody,
                                         const CATMfStoreProcReportType iType, 
                                         int                            iBoolOper,
                                         const CATISpecObject_var&      iReferenceFeature) = 0;
  /**
  * @nodoc
  * Internal use (Report with Bridge)
  */
  virtual void StoreProcReportWithBridge(const CATBody_var&            iBody,
                                         CATListValCATBaseUnknown_var& iNoCopySpec,
                                         CATListOfCATUnicodeString&    iNoCopyKeys,
                                         int                           iBoolOper=0,
                                         const CATISpecObject_var&     iReferenceFeature=NULL_var) = 0;
};

CATDeclareHandler(CATIMfProcReport,CATBaseUnknown);

#endif

