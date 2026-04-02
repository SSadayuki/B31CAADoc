// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATAnalysisExplicitExpression
//
//=============================================================================
//
// Usage Notes: Services linked to the field model representation of Expressions.
//
//=============================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */
//=============================================================================
#ifndef CATAnalysisExplicitExpression_H_
#define CATAnalysisExplicitExpression_H_

#include "CATAnalysisExplicitEntity.h"

class CATSamIExpression ;

/**
 * Field model expression.
 * This object is used to provide services common to objects of the field model
 * which can represent Expressions and their physical behavior.
 * When this object is working on an Expression object an AddRef is done. The release will be called
 * in the destructor of this object.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitExpression : public CATAnalysisExplicitEntity
{
   private :
      CATSamIExpression  *_Expression ;
      CATSamPhysicalType *_DimensionPhysicalTypes, *_ResultPhysicalTypes ;
      int                _DimensionNumber, _ResultNumber ;

   protected :
      virtual void Reset() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;
      HRESULT UpdateFromField();

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitExpression() ;

/**
 * Destructor.
 */
      virtual ~CATAnalysisExplicitExpression() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitExpression(const CATAnalysisExplicitExpression &iExpression) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitExpression(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitExpression &operator = (const CATAnalysisExplicitExpression &iExpression) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitExpression &operator = (const CATAnalysisExplicitData &iData) ;


/**
 * Create the field model representation of an Expression.
 * @param iModel
 *    A pointer to the field model into which the expression will be created.
 * @param iExpression
 *    The expression pointer.
 * @param iExpressionPhysicalType
 *    The physical type number corresponding to the expression.
 */

      HRESULT CreateExpression(const CATAnalysisExplicitModel  *iModel,
                               CATSamIExpression               *iExpression,
                               CATSamPhysicalType               iExpressionPhysicalType);

/**
 * Create the field model representation of an Expression.
 * @param iExpressionParent
 *    The parent expression.
 * @param iExpression
 *    The expression pointer.
 * @param iExpressionPhysicalType
 *    The physical type number corresponding to the expression.
 */

	   HRESULT CreateExpression(CATAnalysisExplicitParent &iExpressionParent,
                               CATSamIExpression         *iExpression,
                               CATSamPhysicalType        iExpressionPhysicalType);

/**
 * Obtains the pointer of the Expression object.
 * An AddRef() is done before returning the pointer. It is the caller's responsability to call Release().
 */
      CATSamIExpression *GetExpression(void) const ;

/**
 * Sets the pointer of the Expression object.
 * @param iExpression
 *    The expression pointer.<br>
 *    An AddRef() is done on this object.<br>
 *    If an expression object is allready attached to the field model representation then a RequesDelayedDestruction() is called on it.
 */
      HRESULT SetExpression(CATSamIExpression *iExpression) ;

/**
 * Is this Expression streamable in the CATAnalysis document.
 * @param oIsStreamable
 *   The streamable state of the Expression object.
 */
      HRESULT IsStreamable(CATBoolean &oIsStreamable) const ;

/**
 * To set an Expression to be streamed inside the CATAnalysis document
 * @param iIsStreamable
 *   The streamable state of the Expression object.
 */
	   HRESULT SetStreamable(CATBoolean iIsStreamable = TRUE) const ;

/**
 * Retrieve the Dimension of the Expression object.
 * @param oDimension
 *   The dimension of the Expression object.
 */
      HRESULT GetDimension(int &oDimension) ;

/**
 * Retrieve the number of results in the Expression object.
 * @param oNumberOfResults
 *   The number of results of the Expression object.
 */
      HRESULT GetNumberOfResults(int &oNumberOfResults) ;

/**
 * Retrieve the Physical type for a specific dimension.
 * @param oPhysicalType
 *   The physical type of the input variables for this dimension.
 * @param iDimension
 *   The dimension for which the physical type is requested.<br>
 *   iDimension ranges from 0 to GetDimension()-1.
 */
      HRESULT GetPhysicalTypeForDimension(CATSamPhysicalType &oPhysicalType,
                                          int iDimension = 0) ;

/**
 * Retrieve the Physical type for a specific result.
 * @param oPhysicalType
 *   The physical type of the requested result variable.
 * @param iResult
 *   The result for which the physical type is requested.<br>
 *   iResult ranges from 0 to GetNumberOfResults()-1
 */
      HRESULT GetPhysicalTypeForResult(CATSamPhysicalType &oPhysicalType,
                                       int iResult = 0) ;
} ;

#endif
