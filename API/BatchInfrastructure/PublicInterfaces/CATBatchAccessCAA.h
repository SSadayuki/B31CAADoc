#ifndef CATBatchAccessCAA_H
#define CATBatchAccessCAA_H

//------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATBatchUtils.h"

class CATIBatchCAA;
class CATBaseUnknown;
class CATUnicodeString;
class CATBatchParameters;

/**
 * Allow CATIBatchCAA access.
 * <b>Role</b>: Retrieves a pointer to the interface CATIBatchCAA allowing you to access to the XML parameters
 * and descriptor files of your batch.
 *
 *    @see CATIBatchCAA, CATIBatchElementCAA, CATIBatchElementsCAA.
 */

ExportedByCATBatchUtils CATIBatchCAA* GetCATIBatchCAA();

/**
 * Allow Publisher access.
 * <b>Role</b>: Retrieves a pointer the publisher of the monitoring event.
 * To be used to subscribe to a monitoring notification together with AddCallback() method.    
 */
ExportedByCATBatchUtils CATBaseUnknown* GetBatchPublisherCAA();

/**
 * Allow CATIBatchCAA access.
 * <b>Role</b>: Retrieves a pointer to CATIBatchCAA for the output XML file
 * Give you access to the output XML file and parse it.
 * It allow you to access outputXML file tags through CATIBatchCAA, CATIBatchElementCAA, CATIBatchElementsCAA interfaces.
 * To be used outside of the batch process.
 */
ExportedByCATBatchUtils HRESULT GetOutputXMLFile(CATIBatchCAA*& oBatch, char* iUuid);
/**
 * Retrieves the root directory of the batch.
 * <b>Role</b>: Retrieves the root directory of the batch
 * The batch write by defaut all the files in this directory.
 * This method can be used outside of the batch process, for clean-up purpose. 
 */
ExportedByCATBatchUtils HRESULT GetBatchRootCAA(CATUnicodeString& oPath, char* iUuid);
/**
 * Initialize a parameter file in a splitter batch.
 * <b>Role</b>: Initialize a parameter file for splitter batch
 * When one write a splitter batch he needs to split a XML parameter file.
 * This method initialize a CATBatchParameter object from the CATIBacthCAA of the parameter to split.
 * It can be used in replacement of BeginBuffer() method 
 * @param iBatch the interface representing the XML parameter to split
 * @param oParam the CATBatchParameters used by the caller to generate the splitted parameter file
 * @return S_OK upon success
 */
ExportedByCATBatchUtils HRESULT InitParameterFile(CATIBatchCAA* iBatch, CATBatchParameters& oParam);
/**
 * Close a parameter file in a splitter batch.
 * <b>Role</b>: Close a parameter file in a splitter batch
 * Used in a splitter batch in order to close a splitted XML parameter file.
 * It can be used in replacement of EndBuffer() method
 * @param iBatch the interface representing the XML parameter to split
 * @param oParam the CATBatchParameters used by the caller to generate the splitted parameter file
 * @return S_OK upon success
 */
ExportedByCATBatchUtils HRESULT CloseParameterFile(CATIBatchCAA* iBatch, CATBatchParameters& oParam);
/**
 * Retrieves the XML parameter to be splitted in a splitter batch.
 * <b>Role</b>: Retrieves the XML parameter to be splitted in a splitter batch
 * This method takes as input the XML parameter file of the splitter batch.
 * It retrieves the CATIBatchCAA of the XML parameter file to be splitted and its descriptor name. 
 * @param iBatch the interface representing the XML parameter file of the splitter batch (retrived by GetCATIBatchCAA() )
 * @param oBatch the interface representing the XML parameter to split
 * @return S_OK upon success
 */
ExportedByCATBatchUtils HRESULT CATBatchParamToSplitAccess(CATIBatchCAA* iBatch, CATIBatchCAA*& oBatch , CATUnicodeString&  oDescName);


#endif


