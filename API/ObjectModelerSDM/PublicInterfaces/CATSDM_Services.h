/* -*-c++-*- */
// Copyright DASSAULT SYSTEMES 2002
// Creation by YGN January 2002
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#ifndef CATSDM_SERVICES_H_
#define CATSDM_SERVICES_H_


#include "AD0SDBAS.h"

#include "CATUnicodeString.h"
#include "SdaiModel.h"
class CATIContainer_var;

/**
 * Retrieves a SdaiModel from a path of a STEP21 file.
 * @param iPath
 *  The path of the STEP21 file
 * @param oModel
 */
ExportedByAD0SDBAS
HRESULT GetModelFromFile(const CATUnicodeString& iPath,SdaiModelH& oModel);

/**
 * Saves a SdaiModel into a STEP21 file.
 * @param iModel
 * @param iPath
 *  The path of the file to save the model in
 */
ExportedByAD0SDBAS
HRESULT SaveFileFromModel(const SdaiModelH iModel, const CATUnicodeString& iPath);

/**
 * Creates a SdaiModel from a path of a STEP21 file and a schema name.
 * @param iPath
 *  The path of the STEP21 file
 * @param iSchemaName
 *  The name of the schema
 * @param oModel
 */
ExportedByAD0SDBAS
HRESULT CreateModelFromSchema(const CATUnicodeString& iPath, const CATUnicodeString& iSchemaName,SdaiModelH& oModel);

/**
 * Creates a SdaiModel from a schema name.
 * @param iSchemaName
 *  The name of the schema
 * @param oModel
 */
ExportedByAD0SDBAS
HRESULT CreateModel(const CATUnicodeString& iSchemaName,SdaiModelH& oModel);

/**
 * Retrieves the container associated to a SdaiModel.
 * @param iModel
 * @param oContainer
 */
ExportedByAD0SDBAS
HRESULT GetContainerFromModel(const SdaiModelH iModel,CATIContainer_var& oContainer);

/**
 * Retrieves the SdaiModel associated to a container.
 * @param iContainer
 * @param oModel
 */
ExportedByAD0SDBAS
HRESULT GetModelFromContainer(const CATIContainer_var& iContainer,SdaiModelH& oModel);

/**
 * Deletes a SdaiModel.
 * @param iModel
 */
ExportedByAD0SDBAS
HRESULT DeleteModel(SdaiModelH& iModel);

#endif
