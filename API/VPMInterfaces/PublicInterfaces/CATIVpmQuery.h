//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIVpmQuery_h_
#define CATIVpmQuery_h_

///////////////////////////////////////////////////////////////////////////////
//   PROJECT:...........VPM                                                  //
//   FRAMEWORK:.........                                                     //
//   AUTHOR:............Ivan Sarti (IDC Ltd., for Dassault Systemes)         //
//   DATE:..............17/06/1997                                           //
//             -----------------------------------------------               //
//   AUTHOR:............Ivan Sarti                                           //
//   MODIFICATION:......Added new method, ListOf.                            //
//   DATE:..............23/06/97                                             //
//             -----------------------------------------------               //
//   AUTHOR:............Jerome Poitreau                                      //
//   MODIFICATION:......Review                                               //
//   DATE:..............27/06/97                                             //
///////////////////////////////////////////////////////////////////////////////


// ========================================================================= //
//   COMMENT                                                                 //
//   =======                                                                 //
// ========================================================================= //
//#define WANT_DICTIONARY

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

#include "CATIVpmPathExpression.h"
#include "CATIVpmPredicate.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmQuery;
#else
extern "C" const IID IID_CATIVpmQuery;
#endif

/**
 *  @CAA2Level L1
 *  @CAA2Usage U3
 */ 

/**
 * This class supplies methods to manage queries.
 * <b>role</b>: This class enables to get all information related to the query definition
 * <b>warning</b>: To use this interface, do not consider only the module and framework shown at the bottom of this
 * page. 
 * You must also add the GUIDVPMQueryBuilder module in your Imakefile.mk file, and the framework VPMQueryBuilder in your 
 * framework Identity card.
 */

class ExportedByGUIDVPMInterfaces CATIVpmQuery : public CATBaseUnknown
{
    // --> RTTI
	CATDeclareInterface;

  public:
    // --> Obvious queries ...
	// 1 - depending on query type:
/**
 * @nodoc
 */
    virtual int                          IsMultiObject() = 0;
	// 1 - a) for single-object queries
/**
 * @nodoc
 */
    virtual CATUnicodeString             GetEntity() = 0;
/**
 * @nodoc
 */
    virtual CATIVpmPathExpression_var    GetFromList() = 0;
/**
 * @nodoc
 */
    virtual CATUnicodeString             GetOrderBy() = 0;
/**
 * @nodoc
 */
    virtual CATIVpmPredicate_var         GetPredicate() = 0;
	// 1 - b) for multi-objects queries
/**
 * @nodoc
 */
    virtual HRESULT  GetEntity(CATListOfCATUnicodeString      &oObjList) = 0;
/**
 * @nodoc
 */
    virtual HRESULT  GetFromList(CATLISTV(CATBaseUnknown_var) &oFromList) = 0;
/**
 * @nodoc
 */
    virtual HRESULT  GetPredicate(CATLISTV(CATBaseUnknown_var) &oPredicates) = 0;
/**
 * Specifies that the query will be non case sensitive.
 */
    virtual HRESULT  SetCaseUnsensitive() = 0;
/**
 * Specifies that the query will be case sensitive.
 */
    virtual HRESULT  SetCaseSensitive() = 0;
/**
 * @nodoc
 */
    virtual int      IsCaseUnsensitive()  = 0;


 /**
  *  Sets the time limit over which the Query will be stopped.
  *
  *  @param iTime
  *  This time value should be given in second.
  *  If  <tt> iTime </tt> is &lt= 0 , the query will not be interrupted
  *  and the @href #GetTimeLimit returns 0. 
  *
  *  @return S_OK in all cases
 */
	virtual  HRESULT   SetTimeLimit (int iTime )  = 0;

        
        
	
 /**
  *  Gets the time limit over which the Query will be stopped.
  *
  *  @return The current time limit value expressed in second.
  *  If it returns 0 (the default value), then the query keeps
  *  running until it ends. 
  * 
  */
	virtual int  GetTimeLimit()  = 0;




};



CATDeclareHandler(CATIVpmQuery,CATBaseUnknown);



/**
 * Creates a Query.
 * @param iEntityName  : Query result type
 * @param iFromList    : Query scope      
 * @param iWhereClause : Where clause
 * @param iOrderBy     : Attribute name accroding to which the result will be sorted
 * @return : The created CATIVpmQuery_var handler
 */
extern ExportedByGUIDVPMInterfaces
    CATIVpmQuery_var CreateQuery(const CATUnicodeString    &iEntityName,
				 CATIVpmPathExpression_var iFromList,
				 CATIVpmPredicate_var      iWhereClause,
				 const char                *iOrderBy = "");
/**
 * Creates a multi-objects query.
 * @param iEntityNames : List of query result types
 * @param iFromList    : List of Query scopes     
 * @param iPredicates  : List of predicates
 * @param oQuery       : The list of created query handlers
 * @return : The created CATIVpmQuery_var handler
 */
extern ExportedByGUIDVPMInterfaces
    HRESULT CreateQuery(CATIVpmQuery_var                   &oQuery,
			const CATListOfCATUnicodeString    &iEntityNames,
			const CATLISTV(CATBaseUnknown_var) &iFromList,
			const CATLISTV(CATBaseUnknown_var) &iPredicates);

#endif // CATIVpmQuery_h_

