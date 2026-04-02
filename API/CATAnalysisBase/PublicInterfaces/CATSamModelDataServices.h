// COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// Header definition of CATSamModelDataServices
//
//=============================================================================
//
// Usage Notes: Services for model data infos
//
//=============================================================================
// Avril 2004 Creation                                                   
//=============================================================================
#ifndef CATSamModelDataServices_H_
#define CATSamModelDataServices_H_
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATSAMModel.h"
#include "CATAnalysisExplicitData.h"

/**
 * Global Services for Field model objects information.
 */
class ExportedByCATSAMModel CATSamModelDataServices
{
  public:

/**
 * Retrieves the physical type of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oPhysicalType
 *   The physical type of the model data.
 * @see CATSamExplicitPtr, CATSamPhysicalType
 */
    static HRESULT GetPhysicalType(CATSamExplicitPtr iExpDataPtr, CATSamPhysicalType& oPhysicalType);

/**
 * Retrieves the data type of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oDataType
 *   The data type of the model data.
 * @see CATSamExplicitPtr, CATSamDataType
 */
    static HRESULT GetDataType(CATSamExplicitPtr iExpDataPtr, CATSamDataType& oDataType);

/**
 * Retrieves the value type of a model data characteristic.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oValueType
 *   The value type of the model data.
 * @see CATSamExplicitPtr, CATSamValue
 */
    static HRESULT GetDataValueType(CATSamExplicitPtr iExpDataPtr, CATSamValue& oValueType);

/**
 * Retrieves the category of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oCategory
 *   The category of the model data.
 * @see CATSamExplicitPtr, CATSamValue
 */
    static HRESULT GetDataCategory(CATSamExplicitPtr iExpDataPtr, CATSamValue& oCategory);

/**
 * Retrieves the external tag of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oTag
 *   The tag of the model data.
 * @see CATSamExplicitPtr
 */
    static HRESULT GetDataTag(CATSamExplicitPtr iExpDataPtr, CATLONG32& oTag);

/**
 * Retrieves the solver name of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oSolverName
 *   The solver name of the model data.
 * @see CATSamExplicitPtr
 */
    static HRESULT GetDataSolverName(CATSamExplicitPtr iExpDataPtr, const char*& oSolverName);

/**
 * Retrieves the user name of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oUserName
 *   The user name of the model data.
 * @see CATSamExplicitPtr
 */
    static HRESULT GetDataUserName(CATSamExplicitPtr iExpDataPtr, const char* &oUserName);

/**
 * Retrieves the user number of a model data.
 * @param iExpDataPtr
 *   A pointer to a model data 
 * @param oUserNumber
 *   The user number of the model data.
 * @see CATSamExplicitPtr
 */
    static HRESULT GetDataUserNumber(CATSamExplicitPtr iExpDataPtr, CATLONG32& oUserNumber);

/**
 * Tells if the model data is logicaly.
 */
    static CATBoolean IsDeleted(CATSamExplicitPtr iExpDataPtr);


/**
 * Tells if the values of the charac are distributed or repeated.
 */
    static CATBoolean HasRepeatedValues(CATSamExplicitPtr iExpDataPtr);

  private:
    friend class CATAnalysisExplicitGrNode;
    // Constructor.
    CATSamModelDataServices();

    // Tells if the model data is valid.
    static CATBoolean IsValid(CATSamExplicitPtr iExpDataPtr);

} ;

#endif 


