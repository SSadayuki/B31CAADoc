// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIExpressionCollector.h
// Define the CATIExpressionCollector interface
//
//===================================================================
//
// Usage notes:
//   Used to retrieve Expression objects from a feature
//
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U4 CATEExpressionCollector
 */
//===================================================================
#ifndef CATIExpressionCollector_H
#define CATIExpressionCollector_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATAnalysisExplicitExpression ;
class CATAnalysisExplicitListUsr ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATIExpressionCollector;
#else
extern "C" const IID IID_CATIExpressionCollector ;
#endif

//------------------------------------------------------------------

/**
 * This interface is used to obtain Expression objects from a feature.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATAnalysisInterface CATIExpressionCollector: public CATBaseUnknown
{
  CATDeclareInterface ;

  public :
   /**
    * Returns the list of Expressions available under this feature which fulfill a definition.
    * @param iDefinition
    *    An expression object containing the definition of the expressions which are requested.<br>
    *    If iDefinition == NULL_exp, then all Expression objects are returned.
    * @param oDefinitions
    *    The list of expressions which correspond to the requested definition.<br>
    *    The list must be created and deleted by the caller.
    * @see CATAnalysisExplicitExpression, CATAnalysisExplicitListUsr
    */
   virtual HRESULT GetAvailableExpressions(const CATAnalysisExplicitExpression& iDefinition,
                                           CATAnalysisExplicitListUsr& oDefinitions) = 0 ;

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
   virtual HRESULT GetNumberOfExpressions(int &oNumber) = 0 ;

   /**
    * Get an Expression with a unique ID (0..GetNumberOfExpressions()) arbitrarily given by the implementation.<br>
    * Order can change when Update is called.
    * @param iNumber
    *    The ID of the expression which is requested.
    * @param oExpression
    *    The requested expression.
    * @param iCollectValues
    *    Should the returned expression contain values or not ?
    * @see CATAnalysisExplicitExpression
    */
   virtual HRESULT GetExpression(int iNumber, CATAnalysisExplicitExpression &oExpression,
                                 const CATBoolean iCollectValues = TRUE) = 0 ;

  	/**
    * Release an Expression instance that is hosted under this feature and delete its definition.<br>
	 * As a result it will not be saved under this feature.
    * @param ioExpression
    *    The expression to delete.<br>
    *    Will be equal to NULL_exp on exit of the method.
    * @see CATAnalysisExplicitExpression
	 */
   virtual HRESULT DeleteExpression(CATAnalysisExplicitExpression &ioExpression) = 0 ;

   /**
    * Release all Expression intances under the feature implementing this interface.<br>
    * Instances that are not deleted (because they are still in use elsewhere) will not be saved under this feature.
    */
   virtual HRESULT DeleteAll() = 0 ;

   /*
    * Update Internal Data
    */
   virtual HRESULT Update() = 0 ;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIExpressionCollector, CATBaseUnknown );

#endif
