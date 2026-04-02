// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIExpressionFactory
//
//=============================================================================
//
// Usage Notes: Main Expression Interface
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIExpressionFactory_H
#define CATSamIExpressionFactory_H

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATSamExpression.h"

#include "CATSamIExpression.h"

#include "CATSamIVector.h"
#include "CATSamISpace.h"

#include "CATSamIIntVector.h"
#include "CATSamIDoubleVector.h"
#include "CATSamIDoubleMatrix.h"
#include "CATSamIDoubleTensor.h"
#include "CATSamIEquidistantDoubleVector.h"
#include "CATSamIEquidistantIntVector.h"
#include "CATSamIComplexVector.h"
#include "CATSamIStringVector.h"
#include "CATSamIComplexMatrix.h"
#include "CATSamIComplexTensor.h"

#include "CATAnalysisExplicitTypes.h"

class CATUnicodeString;

/**
 * Expression Factory interface.
 * Can instanciate the Expression and all contained spaces
 */
class ExportedByCATSamExpression CATSamIExpressionFactory
{
public:

   /**
	* Constructor
	*/
	CATSamIExpressionFactory();

   /**
	* Destructor
	*/
	virtual ~CATSamIExpressionFactory();
	
   /**
	* Creation out of a string identifier
	* @param iName Name of class to be instanciated.
	* Possible string include :
	*   - CATSamIntVector
	*   - CATSamDoubleVector
	*   - CATSamComplexVector
	*   - CATSamEquidistantDoubleVector
	*   - CATSamEquidistantIntVector
	*   - CATSamDoubleMatrix
	*   - CATSamComplexMatrix
	*   - CATSamDoubleTensor
	*   - CATSamComplexTensor
	* @return A pointer to the space, NULL if failed to create
	*/
	CATSamISpace*					CreateSpace(const char* iName);
	
   /**
	* Creation of an empty expression
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	*/
	CATSamIExpression*				CreateExpression();

   /**
	* Creation of an empty expression with dimension specified
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iDimension
	* @return The Expression
	*/
	CATSamIExpression*				CreateExpression(unsigned int iDimension);

   /**
	* Creation of a copy of an existing expression
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iExpression
	* @return The copied Expression
	*/
	CATSamIExpression*				CreateExpression( const CATSamIExpression* iExpression );

   /**
	* Creation of a copy of an existing space
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iSpace
	* @return The copied Space
	*/
	CATSamISpace*					CreateSpace( const CATSamISpace* iSpace );

   /**
	* Creation of an int vector with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in ints
	* @param iData The int values, the resulting IntVector will be the owner of the data.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
	CATSamIIntVector*				CreateIntVector(unsigned int iLength,
													const int* iData,
													CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
													CATString iUnit = CATString("Unknown"), 
													CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
													CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of an int vector without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in ints
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
	CATSamIIntVector*				CreateIntVector(unsigned int iLength,
													CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
													CATString iUnit = CATString("Unknown"), 
													CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
													CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of a copy of an existing IntVector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iIntVector
	* @return The copied IntVector
	*/
	CATSamIIntVector*				CreateIntVector( const CATSamIIntVector* iIntVector );

   /**
	* Creation of an equidistant int vector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iStart The first value of the vector
	* @param iStep The increment
	* @param iLength The length of the vector
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @return The vector
	*/
	CATSamIEquidistantIntVector*	CreateEquidistantIntVector(	
											int iStart, 
											int iStep, 
											unsigned int iLength,
											CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
											CATString iUnit = CATString("Unknown"),
											CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal);

   /**
	* Creation of a copy of an existing EquidistantIntVector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iEquidistantIntVector
	* @return The copied EquidistantIntVector
	*/
	CATSamIEquidistantIntVector*	CreateEquidistantIntVector( const CATSamIEquidistantIntVector* iEquidistantIntVector );

   /**
	* Creation of a double vector with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in double values.
	* @param iData The double values, the resulting DoubleVector will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
	CATSamIDoubleVector*			CreateDoubleVector(	unsigned int iLength,
														const double* iData,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"), 
														CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
														CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of a double vector without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in double values.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
	CATSamIDoubleVector*			CreateDoubleVector(	unsigned int iLength,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"), 
														CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
														CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of a copy of an existing DoubleVector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iDoubleVector
	* @return The copied DoubleVector
	*/
	CATSamIDoubleVector*			CreateDoubleVector( const CATSamIDoubleVector* iDoubleVector );

   /**
	* Creation of an equidistant double vector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iStart The first value of the vector
	* @param iStep The increment
	* @param iLength The length of the vector
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType

	* @return The vector
	*/
	CATSamIEquidistantDoubleVector*	CreateEquidistantDoubleVector(	
											double iStart, 
											double iStep, 
											unsigned int iLength,
											CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
											CATString iUnit = CATString("Unknown"),
											CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal);


   /**
	* Creation of a copy of an existing EquidistantDoubleVector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iEquidistantDoubleVector
	* @return The copied EquidistantDoubleVector
	*/
	CATSamIEquidistantDoubleVector* CreateEquidistantDoubleVector( const CATSamIEquidistantDoubleVector* iEquidistantDoubleVector );

   /**
	* Creation of a complex vector with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in complex values.
	* @param iData The complex values, the resulting ComplexVector will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
	CATSamIComplexVector*			CreateComplexVector(unsigned int iLength,
														const CATMathComplex* iData,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"), 
														CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
														CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of a complex vector without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in complex values.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
	CATSamIComplexVector*			CreateComplexVector(unsigned int iLength,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"), 
														CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
														CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of a copy of an existing ComplexVector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iComplexVector
	* @return The copied ComplexVector
	*/
	CATSamIComplexVector*			CreateComplexVector( const CATSamIComplexVector* iComplexVector );

   /**
	* Creation of a string vector with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in strings values.
	* @param iData The string values, the resulting StringVector will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
   CATSamIStringVector* CreateStringVector(	unsigned int iLength,
															CATString* iData,
															CATSamPhysicalType iPhys,
															CATString iUnit, 
															CATSamSpaceVectorType iVectorType,	
															CATSamIVector::MonotonuousStatus iMonInt);

   /**
	* Creation of a string vector without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength Length in strings values.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @param iVectorType
	* @param iMonInt
	* @return The vector
	*/
   CATSamIStringVector* CreateStringVector(	unsigned int iLength,
								                  	CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
									                  CATString iUnit = CATString("Unknown"), 
									                  CATSamSpaceVectorType iVectorType = CATSamSpaceVectorTypeOrdinal,	
									                  CATSamIVector::MonotonuousStatus iMonInt = CATSamIVector::Unknown );

   /**
	* Creation of a copy of an existing StringVector
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iStringVector
	* @return The copied StringVector
	*/
   CATSamIStringVector* CreateStringVector( const CATSamIStringVector* iStringVector );

   /**
	* Creation of a double matrix with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iData The double values, the resulting DoubleMatrix will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The matrix
	*/
	CATSamIDoubleMatrix*			CreateDoubleMatrix( unsigned int iLength_X,
														unsigned int iLength_Y,
														const double* iData,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));
   /**
	* Creation of a double matrix without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The matrix
	*/
	CATSamIDoubleMatrix*			CreateDoubleMatrix( unsigned int iLength_X,
														unsigned int iLength_Y,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));

   /**
	* Creation of a copy of an existing DoubleMatrix
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iDoubleMatrix
	* @return The copied DoubleMatrix
	*/
	CATSamIDoubleMatrix*			CreateDoubleMatrix( const CATSamIDoubleMatrix* iDoubleMatrix );

   /**
	* Creation of a complex matrix with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iData The complex values, the resulting ComplexMatrix will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The matrix
	*/
	CATSamIComplexMatrix*			CreateComplexMatrix( unsigned int iLength_X,
														unsigned int iLength_Y,
														const CATMathComplex* iData,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));
   /**
	* Creation of a complex matrix without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The matrix
	*/
	CATSamIComplexMatrix*			CreateComplexMatrix( unsigned int iLength_X,
														unsigned int iLength_Y,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));

   /**
	* Creation of a copy of an existing ComplexMatrix
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iComplexMatrix
	* @return The copied ComplexMatrix
	*/
	CATSamIComplexMatrix*			CreateComplexMatrix( const CATSamIComplexMatrix* iComplexMatrix );

   /**
	* Creation of a double tensor with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iLength_Z
	* @param iData The double values, the resulting DoubleTensor will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The tensor
	*/
	CATSamIDoubleTensor*			CreateDoubleTensor( unsigned int iLength_X,
														unsigned int iLength_Y,
														unsigned int iLength_Z,
														const double* iData,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));
   /**
	* Creation of a double tensor without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iLength_Z
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The tensor
	*/
	CATSamIDoubleTensor*			CreateDoubleTensor( unsigned int iLength_X,
														unsigned int iLength_Y,
														unsigned int iLength_Z,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));

   /**
	* Creation of a copy of an existing DoubleTensor
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iDoubleTensor
	* @return The copied DoubleTensor
	*/
	CATSamIDoubleTensor*			CreateDoubleTensor( const CATSamIDoubleTensor* iDoubleTensor );

   /**
	* Creation of a complex tensor with data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iLength_Z
	* @param iData The complex values, the resulting ComplexTensor will be the owner of the data. 
	*		 Values are stored rowwise.
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The tensor
	*/
	CATSamIComplexTensor*			CreateComplexTensor( unsigned int iLength_X,
														unsigned int iLength_Y,
														unsigned int iLength_Z,
														const CATMathComplex* iData,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));
   /**
	* Creation of a complex tensor without data values given
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iLength_X
	* @paran iLength_Y
	* @param iLength_Z
	* @param iPhys The physical type
	* @param iUnit The unit string
	* @return The tensor
	*/
	CATSamIComplexTensor*			CreateComplexTensor( unsigned int iLength_X,
														unsigned int iLength_Y,
														unsigned int iLength_Z,
														CATSamPhysicalType iPhys = CATSamPhysicalTypeNone,
														CATString iUnit = CATString("Unknown"));

   /**
	* Creation of a copy of an existing ComplexTensor
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	* @param iComplexTensor
	* @return The copied ComplexTensor
	*/
	CATSamIComplexTensor*			CreateComplexTensor( const CATSamIComplexTensor* iComplexTensor );

};

#endif
