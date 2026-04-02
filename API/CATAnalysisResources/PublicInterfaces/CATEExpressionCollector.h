// COPYRIGHT DASSAULT SYSTEMES 2001
//===================================================================
//
// CATEExpressionCollector.h
// Provide default implementation of some methods of interface
//    CATIExpressionCollector for AnalysisSet and AnalysisEntity
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATEExpressionCollector_H
#define CATEExpressionCollector_H
/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */
#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATAnalysisResources.h"
#include "CATAnalysisExplicitExpression.h"
#include "CATAnalysisExplicitListUsr.h"

class CATDocument;
//------------------------------------------------------------------

/**
 * Adapter for the implementation of CATIExpressionCollector interface.
 * It can be used for both for AnalysisSet and AnalysisEntity.
 * @see CATIExpressionCollector, CATAnalysisExplicitExpression
 */

class ExportedByCATAnalysisResources CATEExpressionCollector: public CATBaseUnknown
{
  
  public:
   /**
    * Default constructor.
    */
    CATEExpressionCollector();

   /**
    * Destructor.
    */
    virtual ~CATEExpressionCollector();    

   /**
    * Returns the list of Expressions available under this feature.
    * @param iDefinition
    *    Should be NULL_exp for this implementation.
    * @param oDefinitions
    *    The list of expressions.
    *    The list must be created and deleted by the caller.
    * @see CATAnalysisExplicitExpression, CATAnalysisExplicitListUsr
    */
   virtual HRESULT GetAvailableExpressions(const CATAnalysisExplicitExpression& iDefinition,
                                           CATAnalysisExplicitListUsr& oDefinitions) ;

   /**
    * Make sure that a particular Expression obtained through <b>GetAvailableExpressions</b>
    * gets filled with its values.
    * @param iExpression
    *    The expression for which the values are requested.
    * @see CATAnalysisExplicitExpression
    */
   virtual HRESULT CollectValues(CATAnalysisExplicitExpression& iExpression) = 0 ;

   /**
    * Get the total number of Expressions.
    */
   virtual HRESULT GetNumberOfExpressions(int &oNumber) ;

   /**
    * Get an Expression with a unique ID (0..GetNumberOfExpressions()) arbitrarily given by the implementation.<br>
    * Order can change when Update is called.
    * @param iNumber
    *    The ID of the expression which is requested.
    * @param oExpression
    *    The requested expression.
    * @param iCollectValues
    *    Should be FALSE for this implementation.
    * @see CATAnalysisExplicitExpression
    */
   virtual HRESULT GetExpression(int iNumber, CATAnalysisExplicitExpression &oExpression,
                                 const CATBoolean iCollectValues = TRUE) ;

  	/**
    * Release an Expression instance that is hosted under this feature and delete its definition.<br>
	 * As a result it will not be saved under this feature.
    * @param iExpression
    *    The expression to delete.<br>
    *    Will be equal to NULL_exp on exit of the method.
    * @see CATAnalysisExplicitExpression
	 */
   virtual HRESULT DeleteExpression(CATAnalysisExplicitExpression &ioExpression) ;

   /**
    * Release all Expression intances under the feature implementing this interface.<br>
    * Instances that are not deleted (because they are still in use elsewhere) will not be saved under this feature.
    */
   virtual HRESULT DeleteAll() ;

   /*
    * Update Internal Data
    */
   virtual HRESULT Update() ;

   /*
    * Get the context
    */
   HRESULT GetContext() ;

   /*
    * Check that the corresponding feature is up to date
    */
   CATBoolean IsUpToDate() ;

  private:
   /**
    * Constructors. No implementation provided. Just declared to avoid that 
    * someone could build this class.
    */
   CATEExpressionCollector(const CATEExpressionCollector &);
   CATEExpressionCollector& operator=(const CATEExpressionCollector &);

   /*
    * Get the list of Expressions
    */
   HRESULT GetList() ;

   int                        _Number ;
   CATSamExplicitPtr          *_Pointers ;
   CATAnalysisExplicitListUsr _List ;
   CATAnalysisExplicitParent  _Context ;
   CATDocument                *_pDoc;
};   

#endif

