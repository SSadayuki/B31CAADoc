#ifndef CATIMfgResourceQuery_H
#define CATIMfgResourceQuery_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// Forwards 
#include "CATUnicodeString.h"
#include "CATListOfInt.h"
#include "CATListOfDouble.h"
#include "CATListOfCATUnicodeString.h"
#include "CATIDocId.h"
#include "CATDocument.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgResourceQuery;
#else
extern "C" const IID IID_CATIMfgResourceQuery;
#endif

/**   
 * Interface dedicated to resource query management.
 * <b>Role</b>: This interface offers services to manage the queries 
 *              for resource objects (i.e tools, machines, ...)<br>
 * 
 * Implementing this interface will allow customer to connect its own database
 * for managing resources into CATIA V5 Manufacturing products.<br>
 * 
 * Common attributes are declared in CATMfgResourceConstant.<br>
 * Common attributes are declared in CATMfgToolConstant.<br>
 * Common attributes are declared in CATMfgInsertConstant.<br>
 * Common attributes are declared in CATMfgMachineConstant.<br>
 * 
 */

class ExportedByMfgItfEnv CATIMfgResourceQuery : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 * Defines the type of resource on which we want to add constraints.
 * @param MfgCurrent
 * The constraint we are defining works on the current type of resource defined with Initialize. 
 * @param MfgTool
 * The constraint we are defining works on the tool component. 
 * @param MfgInsert
 * The constraint we are defining works on the insert component. 
 */
  enum MfgResourceQueryType { MfgCurrent, MfgTool, MfgInsert };

 /**
 * Initializes the connection to the repository for query execution.
 */
   virtual HRESULT InitConnection ()=0;

/**
 * Resets the connection to the repository for query execution.
 */
   virtual HRESULT ResetConnection ()=0;

/**
 * Retrieves the names of query location to display in the selection panels.
 * @param oListNames
 *     The list of names to display (describing the database or catalog names)
 */
   virtual HRESULT GetNamesToDisplay  (CATListOfCATUnicodeString &oListNames)=0;

 /**
 * Initializes the query on the resource object.
 * @param iName
 *     The name of the database or catalog.
 * @param iType
 *     The family of the searched object (ex:End Mill Tool)
 */
   virtual HRESULT Initialize  (const CATUnicodeString &iName, 
								                const CATUnicodeString &iType)=0;

/**
 * Defines the type of resource on which we want to add constraints.
 * Only used for Tool Assembly queries
 * @param iResourceType
 *     The type of resource (MfgTool or MfgInsert).
 * @param iFamily
 *     The family of the resource (MfgEndMillTool, MfgRoundInsert...), defined in 
 *     CATMfgToolConstant & CATMfgInsertConstant
 */
   virtual HRESULT AddSubComponentTypeConstraint (CATIMfgResourceQuery::MfgResourceQueryType  iResourceType,
                                                  const CATUnicodeString                     &iFamily)=0;

/**
 * Defines one simple constraint for query on "Name" attribute.
 * For example, searches for object whose "Name" is "Sample".
 * @param iValue
 *    The reference name
 */
   virtual HRESULT AddNameLikeConstraint  (const CATUnicodeString   &iValue,
                                           CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Defines one simple constraint for query on "Diameter" attribute.
 * For example, searches for object whose "Diameter" value is between 10.0mm and 20.0mm.
 * @param iMinValue
 *     The diameter minimum value
 * @param iMaxValue
 *     The diameter maximum value
 * @param iUnit 
 *     The unit name 
 */
   virtual HRESULT AddDiameterBetweenConstraint  (const double             &iMinValue,
												                          const double             &iMaxValue,
                                                  const CATUnicodeString   &iUnit,
                                                  CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Defines one constraint for query on integer attribute.
 * For example, searches for object whose attribute "Number" is greater than 0.
 * @param iAttribute
 *     The attribute name 
 * @param iOperator
 *     The operator
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>0:Equal</li>
 *     <li>1:Not Equal</li>
 *     <li>2:Less</li>
 *     <li>3:Greater</li>
 *     <li>4:Less or Equal</li>
 *     <li>5:Greater Or Equal</li>
 *     <li>6:Not Less</li>
 *     <li>7:Not Greater</li>
 *     </ul>
 * @param iIntValue
 *     The integer value
 */
   virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, 
								                   const int                &iOperator,
                                   const int                &iValue,
                                   CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Defines one constraint for query on double attribute.
 * For example, searches for object whose attribute "Diameter" is greater than 0.0 mm.
 * @param iAttribute
 *     The attribute name
 * @param iOperator
 *     The operator
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>0:Equal</li>
 *     <li>1:Not Equal</li>
 *     <li>2:Less</li>
 *     <li>3:Greater</li>
 *     <li>4:Less or Equal</li>
 *     <li>5:Greater Or Equal</li>
 *     <li>6:Not Less</li>
 *     <li>7:Not Greater</li>
 *     </ul>
 * @param iValue
 *     The double value
 * @param iUnit
 *     The unit name 
 */
   virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, 
								                   const int                &iOperator,
                                   const double             &iValue,
                                   const CATUnicodeString   &iUnit,
                                   CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Defines one constraint for query on string attribute.
 * For example, searches for object whose "Name" attribute equals "TOTO".
 * @param iAttribute
 *     The attribute name 
 * @param iOperator
 *     The operator
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>0:Equal</li>
 *     <li>10:Like</li>
 *     </ul>
 * @param iValue
 *     The string value
 */
   virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, 
								                   const int                &iOperator,
                                   const CATUnicodeString   &iValue,
                                   CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Defines several constraints for query on a specific attribute.
 * For example, searches for object where "Diameter" attribute value is greater than 10.0mm 
 *        and "Diameter" attribute value is less than 50.0mm.
 * @param iAttribute
 *     The attribute name
 * @param iUnit
 *     The unit name (for example, "mm")
 * @param iTypeValue
 *     The type of value of the attribute  
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>0:Boolean value (Yes/No)</li>
 *     <li>1:Integer value</li>
 *     <li>2:Double value</li>
 *     <li>3:String value</li>
 *     </ul>
 * @param iOperators
 *     The list of operators
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>0:Equal (for integer, double and string)</li>
 *     <li>1:Not Equal (for integer and double)</li>
 *     <li>2:Less (for integer and double)</li>
 *     <li>3:Greater (for integer and double)</li>
 *     <li>4:Less or Equal (for integer and double)</li>
 *     <li>5:Greater Or Equal (for integer and double)</li>
 *     <li>6:Not Less (for integer and double)</li>
 *     <li>7:Not Greater (for integer and double)</li>
 *     <li>10:Like (for string only)</li>
 *     </ul>
 * @param iIntValues
 *     The list of integers values (if iTypeValue = 0 or 1)
 * @param iDblValues
 *     The list of double values (if iTypeValue = 2)
 * @param iStrValues
 *     The list of string values (if iTypeValue = 3)
 * @param iLogLinks
 *     The list of integer values describing logical links between constraints
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>0:AND</li>
 *     <li>1:OR</li>
 *     </ul>
 */
   virtual HRESULT AddConstraints  (const CATUnicodeString            &iAttribute, 
								                    const CATUnicodeString            &iUnit,
                                    const int                         &iTypeValue,
                                    const CATListOfInt                &iOperators,
                                    const CATListOfInt                &iIntValues,
                                    const CATListOfDouble             &iDblValues,
                                    const CATListOfCATUnicodeString   &iStrValues,
                                    const CATListOfInt                &iLogLinks,
                                    CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Executes the defined query.
 */
   virtual HRESULT Execute()=0;

/**
 * Retrieves the result size of the defined query.
 */
   virtual HRESULT GetResultSize(int &oNbElem,
                                 CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Retrieves the values of an object responding to the defined query.
 * @param iElem
 *    The object number
 * @param oAttributes
 *    List containing attributes of the object
 * @param oTypeValues
 *    List containing types of values of the attributes
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0: boolean</li>
 *   <li>1: integer</li>
 *   <li>2: double</li>
 *   <li>3: string</li>
 *   </ul>
 * @param oNbValues
 *    List containing number of values for each attribute
 * @param oIntValues
 *    List containing integer type values
 * @param oDblValues
 *    List containing double type values
 * @param oStrValues
 *    List containing string type values
 */
   virtual HRESULT GetDescription (const int                  &iElem, 
					 			                   CATListOfCATUnicodeString  &oAttributes, 
								                   CATListOfInt               &oTypeValues, 
								                   CATListOfInt               &oNbValues,
                                   CATListOfInt               &oIntValues,
                                   CATListOfDouble            &DblValues, 
                                   CATListOfCATUnicodeString  &StrValues,
                                   CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Retrieves the Tool or Insert name defined on the tool assembly, and its index.
 * @param iNumElem
 *    integer representating the index of the tool assembly
 * @param oCompName
 *    The component name
 * @param oCompNumElem
 *    integer representing the index of the tool assembly component,
 *    use GetDescription with same MfgResourceQueryType and this index to get its values
 * @param iResourceType
 *    type of resources to retrieve (MfgTool or MfgInsert)
 */
   virtual HRESULT GetComponentNameAndIndex(const int        &iNumElem,
                                            CATUnicodeString &oCompName,
                                            int              &oCompNumElem,
                                            CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Retrieves the correctors information.
 * @param iElem
 *     The object number 
 * @param oListPoints       : List of type point as CATUnicodeString (Ex: P1, ..., P9) 
 * @param oListNumber       : List of corrector number as Integer 
 * @param oListLengthNumber : List length Corrector number as Integer 
 * @param oListRadiusNumber : List radius Corrector number as Integer 
 * @param oListDiameter     : List tool diameter for this point as Double 
 */
   virtual HRESULT GetCorrectors (const int                 &iElem,
                                  CATListOfCATUnicodeString &oListPoints,
                                  CATListOfInt              &oListNumber,
                                  CATListOfInt              &oListLengthNumber,
                                  CATListOfInt              &oListRadiusNumber,
                                  CATListOfDouble           &oListDiameter,
                                  CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Retrieves the representation of an object responding to the defined query.
 * @param iElem
 *     The object number 
 * @param oPathName
 *     The path to the external file (for example, CATPart document) containing the 
 *                    representation of the object
 */
   virtual HRESULT GetRepresentation  (const int         &iElem,
  								                     CATUnicodeString  &oPathName,
                                       CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;
/**
 * Retrieves the representation of an object responding to the defined query.
 * @param iElem
 *     The object number 
 * @param oDocId
 *     The CATIDocId to the external file (for example, CATPart document) containing the 
 *                    representation of the object
 */
   virtual HRESULT GetRepresentation  (const int         &iElem,
  								                     CATIDocId         *&oDocId,
                                       CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent)=0;

/**
 * Instanciate the resource in the document.
 * @param iElem
 *     The object number 
 * @param hBUResources
 *     The handler on the created resource
 * @param piDoc
 *     The CATDocument where the resource has to be instantiated
 */
   virtual HRESULT InstantiateResourceInDocument (const int          &iElem,
                                                  CATBaseUnknown_var &hBUResources,
                                                  CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent,
                                                  CATDocument *piDoc = NULL)=0;

};
CATDeclareHandler(CATIMfgResourceQuery, CATBaseUnknown);
#endif
