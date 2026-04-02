/* -*-c++-*- */
#ifndef CATBatchServices__H
#define CATBatchServices__H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATPinServices.h"
#include "CATIProductDatabase.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATDocument.h"
#include "CATBoolean.h"
class CATIDocId;


/**
* Initializes the V5 session to communicate with ENOVIAvpm V4.
*
* <br><b>Role:</b>This method initializes the CATIA V5 session and 
*     establishes the connection with ENOVIAvpm V4.
* <br>
* This method creates a CATIA V5 session if it is not yet initialized. 
* Use @href CATTerminateBatch at the end of the application to close this session.
* <br>
* If there is no ENOVIAvpm V4 application (client or server) running to which this method can connect to, 
* a new ENOVIAvpm V4 server is launched on the local Unix host by submitting 
* the <tt>StartVPMBatchFromV5Batch.sh</tt> shell script.
* <br>
* the <tt>CV5VpmStart</tt> environment variable can be declared to set the unix directory where the 
*  <tt>StartVPMBatchFromV5Batch.sh</tt> shell script is located.
* <br>
* This method can be used for Unix client only. 
* @see @href CATInitBatchOnHost for submission from Windows client or 
*    from Unix client on a dedicated Unix host.
* </p>
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The communication channel is successfuly established</li> 
*   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
*   <ul>
*      <li><tt>ERR_2001</tt>: ENOVIAvpm server cannot be launched</li>    
*  </ul>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATInitBatch ();

/**
* Connects a user to the ENOVIAvpm V4 database.
*
*<br><b>Role:</b>This method connects a user to the ENOVIAvpm V4 database 
* with the specified Role while performing his authentication with his password.
* <p>
* This method must be called after the communication with ENOVIAvpm V4 is established
* by @href CATInitBatch or @href CATInitBatchOnHost.
* Use @href CATDisconnectFromVPM to disconnect the user from the database.
* <br>If the database is client authentified, 
*     iUser and iPass must be filled with an empty string (<tt>""</tt>).
* </p>
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iServer
*    server name as defined in the CATIA V5 option settings
* @param iUser
*    name of the user to connect.
* @param iPass
*    password of the user declared with iUser.
* @param iRole
*   The selected role to connect the user to the ENOVIAvpm V4 database.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The user is successfuly connected</li> 
*   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
*   <ul>
*      <li><tt>ERR_12</tt>: Server name not found in CATIA V5 settings</li>
*      <li><tt>ERR_101</tt>: User authentication failed</li>
*      <li><tt>ERR_1002</tt>: ENOVIAvpm cannot be detected </li>
*      <li><tt>ERR_2003</tt>: Role not available </li>
*  </ul>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATConnectToVPM (CATUnicodeString & iServer, CATUnicodeString & iUser, CATUnicodeString & iPass,  CATUnicodeString & iRole);


/**
* Disconnects the application from ENOVIAvpm V4.
*
*<br><b>Role:</b>This method first disconnects the user from the ENOVIAvpm V4 database then
* closes the connection with ENOVIAvpm V4. 
* If an ENOVIAvpm V4 server had been launched, it is stopped. 
* @see @href CATConnectToVPM.
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The application is successfuly disconnected</li> 
*   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
*   <ul>
*      <li><tt>ERR_1002</tt>: ENOVIAvpm server cannot be detected</li>
*   </ul>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATDisconnectFromVPM ();

/**
* Opens a Structure Exploded assembly within ENOVIAvpm V4.
*
*<br><b>Role:</b>This method opens an assembly stored in Structure Exploded mode 
* within ENOVIAvpm V4 memory according to the specified parameters. 
* <br>Configured and non configured assemblies can be open using this method.
*
* <p>
* This method takes as input the root part identifier <tt>iRootPartId</tt>. 
* Only the 42 first character of the string are relevant and must be structured as followed:
* <ul> 
*   <li> the Coid of the root part (database binary 8 crc long)
*    <li> the Compid of the root part (database binary 8 crc long)
*    <li> the VPM environment name of the root part (8 crc long). 
*       <br> For instance <tt>"VPMENV  "</tt>
*    <li> the VPM PART table name of the root Part (18 crc long). 
*       <br> For instance <tt>"PART_LIST        "</tt>
* </ul>
* <br> The 8 crc long server name might be present in the string but will be ignored.
* <br>
* Use @href CATCloseAssemblyInVPM to close the open assembly.
* </p>
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iLgId
*    length of the iRootPartId string
* @param iRootPartId
*    ENOVIAvpm root part identifier.
* @param iConfiguration
*    list of the Configuration handler.
*    The list must be allocated by caller and must not contain NULL pointers. 
*    This list must be empty for non configured assemblies or if the assembly explosion 
*   has to be performed without configuration.
* <br>
*<b>Note:</b>Only the first element of the list is taken into account. 
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The configured assembly has been successfully open</li> 
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: Configured assembly cannot be opened for input parameters</li>
*  </ul> 
*/
HRESULT ExportedByCATPinServices CATOpenConfiguredAssemblyInVPM (int iLgId,
                                                                 char * iRootPartId,
                                                                 CATLISTV(CATUnicodeString) * iConfiguration);

/**
* Opens a Structure Exploded assembly within ENOVIAvpm V4.
*
*<br><b>Role:</b>This method opens an assembly stored in Structure Exploded mode 
* within ENOVIAvpm V4 memory according to the specified parameters. 
*<br>Configured and non configured assemblies can be open using this method.
*
*<p>
* Use this method before @href CATLoadChildrenFromVPM. 
* <br>
* Use @href CATCloseAssemblyInVPM to close the open assembly.
* </p>
*
* @param iConfiguration
*    list of the Configuration handlers. 
*    The list must be allocated by caller and must not contain NULL pointers. 
*    This list must be empty for non configured assemblies or if the assembly explosion 
*   has to be performed without configuration.
* <br>
*<b>Note:</b>Only the first element of the list is taken into account. 
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iCoid
*    the Coid of the root part (Hexadecimal 16 crc long)
*
* @param iCompid
*       the Compid of the root part (Hexadecimal 16 crc long)
*
* @param iCatenv
*    the VPM environment name of the root part (8 crc long)
*<br>For instance: <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM PART table name of the root Part (18 crc long)
*<br>For instance: <tt>"PART_LIST     "</tt>
*
* @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection.
*<br> The connection string of the entity in VPM can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The configured assembly has been successfully open</li>
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: Configured assembly cannot be opened for input parameters</li>
*  </ul> 
*/
HRESULT ExportedByCATPinServices CATOpenConfiguredAssemblyInVPM ( CATLISTV(CATUnicodeString) * iConfiguration,
                                                                  const CATUnicodeString &iCoid,
                                                                  const CATUnicodeString &iCompid,
                                                                  const CATUnicodeString &iCatenv,
                                                                  const CATUnicodeString &iCatab,
                                                                  const CATUnicodeString &iCnxString = CATUnicodeString());

/**
* Closes a configured assembly open within ENOVIAvpm V4.
*
*<br><b>Role:</b>This method closes the configured assembly that has been open previously 
* within ENOVIAvpm V4 in order to free memory space.
* <br>
* @see @href CATOpenConfiguredAssemblyInVPM to open configured assembly.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The configured assembly has been successfully closed</li> 
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*  </ul> 
*/
HRESULT ExportedByCATPinServices CATCloseAssemblyInVPM ();

/**
* Creates an empty CATProduct dedicated to ENOVIAvpm V4 import.
*
*<br><b>Role:</b>This method creates a new empty CATProduct document in session and 
* valuates the storage name of the corresponding CATDocument 
*  with the input identifier <tt>iRootPartId</tt>.
* 
* <p>
* This method takes as input the root part identifier <tt>iRootPartId</tt>. 
* Only the 42 first character of the string are relevant and are structured as followed:
*  <ul>
*    <li> the Coid of the root part (database binary 8 crc long)</li>
*    <li> the Compid of the root part (database binary 8 crc long) </li>
*    <li> the VPM environment name of the root part (8 crc long). 
*      <br>For instance, <tt>"VPMENV  "</tt> </li>
*    <li> the VPM PART table name of the root Part (18 crc long). 
*      <br>For instance <tt>"PART_LIST        "</tt> </li>
* </ul>
* The 8 crc long server name might be present in the string but will be ignored. </li>
*
* @param iLgId
*    length of the <tt>iRootPartId</tt> string(should be 42)
* @param iRootPartId
*    ENOVIAvpm Root Id
* @param oDoc
*    the new document is session only if the method is successful
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The CATProduct document has been created successfuly</li>
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul> 
*/
HRESULT ExportedByCATPinServices CATCreateVPMSession (int iLgId,
                                                      char * iRootPartId,
                                                      CATDocument *& oDoc);

/**
* Creates an empty CATProduct dedicated to ENOVIAvpm import.
*
*<br><b>Role:</b>This method opens a new empty CATProduct document in session and 
* valuates its the storage name with the input parameters.
* <p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param oDoc
*    the new document is session only if the method is successful
* @param iCoid
*    the Coid of the part (Hexadecimal 16 crc long)
* @param iCompid
*       the Compid of the part (Hexadecimal 16 crc long)
* @param 
*    the VPM environment name of the part (8 crc long)
*<br> For instance: <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM PART table name of the Part (18 crc long)
*<br>For instance: <tt>"PART_LIST        "</tt>
*
* @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection.
*<br> The connection string of the entity in VPM can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The CATProduct document has been created successfuly</li> 
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul> 
*/
HRESULT ExportedByCATPinServices CATCreateVPMSession (CATDocument *& oDoc,
                                                      const CATUnicodeString &iCoid,
                                                      const CATUnicodeString &iCompid,
                                                      const CATUnicodeString &iCatenv,
                                                      const CATUnicodeString &iCatab,
                                                      const CATUnicodeString &iCnxString = CATUnicodeString());

/**
* Creates a Product Structure from an assembly stored in Structure Exploded mode in ENOVIAvpm V4.
*
*<br><b>Role:</b>This method creates a Product Structure from 
* an assembly stored in Structure Exploded mode in the ENOVIAvpm V4 database.
*<br>
* This method creates a new CATProduct document in session (see @href CATCreateVPMSession ), 
* loads all the children of the Structure Exploded up to iNbLevel levels from the Part
* identified as input parameters (see @href CATLoadChildrenFromVPM ),
* and loads the applicative objects related to this structure (see @href CATCompleteSessionFromVPM ).
* <br>
* The method valuates the CATDocument storage name with the input parameters.
* <p>
* The Structure Exploded assembly must have been open before using @href CATOpenConfiguredAssemblyInVPM 
* with the same part identifier parameters.
*</p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*
* @param oDoc
*    the new CATProduct document is session only if the method is successful
* @param iNbLevel
*    the depth from the father to import children.
*<br> <b>Note:</b> <tt>0</tt> for "ANY" to retrieve all the children, only supported.
*
* @param iCoid
*    the Coid of the root part (Hexadecimal 16 crc long)
* @param iCompid
*       the Compid of the root part (Hexadecimal 16 crc long)
* @param iCatenv
*    the VPM environment name of the root part (8 crc long)
*<br> For instance: <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM PART table name of the root Part (18 crc long)
*<br>For instance: <tt>"PART_LIST     "</tt>
*
* @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection.
* <br> The connection string of the entity in VPM can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The CATProduct has been created successfuly</li> 
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATCreateVPMProductStructure ( CATDocument *& oDoc,
                                                                int iNbLevel/* 0 for "ANY"*/,
                                                                const CATUnicodeString &iCoid,
                                                                const CATUnicodeString &iCompid,
                                                                const CATUnicodeString &iCatenv,
                                                                const CATUnicodeString &iCatab,
                                                                const CATUnicodeString &iCnxString = CATUnicodeString());

/**
* Loads in session a document stored in an ENOVIAvpm V4 database.
*
*<br><b>Role:</b>This method loads in session a document stored 
*  in Publication Exposed mode in the ENOVIAvpm V4 database and 
*  returns the corresponding CATDocument. 
*<br>The document can be any CATIA V5 type document.
*
* <p>
* This method takes as input the document identifier <tt>iDocId</tt>. 
* Only the 42 first character of the string are relevant and are structured as followed:
* <ul>
*    <li> the Coid of the document (database binary 8 crc long) </li>
*    <li> the Compid of the document (database binary 8 crc long) </li>
*    <li> the VPM environment name of the root part (8 crc long). 
*           <br>   For instance <tt>"VPMENV  "</tt> </li>
*    <li> the VPM document table name  (18 crc long). 
*           <br>  For instance <tt>"DOCUMENT         "</tt> </li>
* </ul>
* <br> The 8 crc long server name might be present in the string but will be ignored.
* </p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iLgId
*    length of the string iDocId.
* @param iDocId
*    ENOVIAvpm document identifier.
* @param oDoc
*    the new document is session only if the method is successful
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The document is successfuly loaded in session</li> 
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATLoadDocumentFromVPM (int iLgId,
                                                         char * iDocId,
                                                         CATDocument *& oDoc);

/**
* Loads in session a document stored in an ENOVIAvpm V4 database.
*
*<br><b>Role:</b>This method loads in session a document stored 
*   in Publication Exposed mode in the ENOVIAvpm V4 database and 
*   returns the corresponding CATDocument. 
*<br>The document can be any CATIA V5 type document.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param oDoc
*    if the operation is a success, the opened document
* @param iCoid
*    the Coid of the document (Hexadecimal 16 crc long)
* @param iCompid
*       the Compid of the document (Hexadecimal 16 crc long)
* @param iCatenv
*    the VPM environment name (8 crc long)
*<br> For instance: <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM document table name of the document (18 crc long)
*<br>For instance: <tt>"DOCUMENT         "</tt> for a V5 document
*
* @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection.
* <br>The connection string of the entity in VPM can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The document is successfuly loaded in session</li> 
*   <li><tt>E_FAIL</tt>: ENOVIAvpm server cannot be detected</li>
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATLoadDocumentFromVPM ( CATDocument *& oDoc,
                                                          const CATUnicodeString &iCoid,
                                                          const CATUnicodeString &iCompid,
                                                          const CATUnicodeString &iCatenv,
                                                          const CATUnicodeString &iCatab,
                                                          const CATUnicodeString &iCnxString = CATUnicodeString());

/** @nodoc */
HRESULT ExportedByCATPinServices CATLoadChildrenFromVPM (CATIProductDatabase_var & iParent,
                                                         int iNbLevel/* 0 for "ANY"*/,
                                                         CATUnicodeString * puWhereClause = NULL);

/**
* Loads children of a product coming from ENOVIAvpm V4 database.
*
*<br><b>Role:</b>This method loads all the children of the Structure Exploded 
* up to iNbLevel levels, from the Part identified as input parameters.
*   The input document must be associated to a Part coming from ENOVIAvpm V4 database.
*<br>
* The Structure Exploded assembly must have been open previously using 
* @href CATOpenConfiguredAssemblyInVPM with the same part identifier parameters.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iDoc
*    the father document
* @param iNbLevel
*    the depth from the father to import children.
* <br><tt>0</tt> for "ANY" to retrieve all the children
*
* @param puWhereClause
*    the Where Clause to choose representation. This is a SQL format.
* <br> For instance <tt>" C_REVISION like '---' "</tt>.
* <br> If no Where Clause is specified, the first representation type as specified
* in the settings is loaded.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The children documents have been successfuly loaded in session</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATLoadChildrenFromVPM (CATDocument * iDoc,
                                                         int iNbLevel/* 0 for "ANY"*/,
                                                         CATUnicodeString * puWhereClause = NULL);

/**
* Loads applicative objects from ENOVIAvpm V4 to complete the current session.

*<br><b>Role:</b>This method loads applicative objects from the ENOVIAvpm V4 database
* to complete the current session.
* The input document must be a CATIA V5 document or a part coming from ENOVIAvpm V4. 
* This method retrieves from the ENOVIAvpm V4 database the applicative objects 
* associated with this part or document and all its children and loads them in the CATIA session.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*
* @param iDoc
*    the document coming from ENOVIAvpm V4 
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The session has been successfuly completed with applicative objects</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATCompleteSessionFromVPM (CATDocument *iDoc);

/**
* Commit in VPM.
*<br><b>Role:</b>This method commits the pending transaction in the ENOVIAvpm V4 database.
*
*<br> This method must be called after @href CATSaveInVPMFromCATIA or @href CATSaveInVPM.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: Commit successful</li> 
*   <li><tt>E_FAIL</tt>: Commit failed</li>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATCommitVPM ();


/**
* Terminates the VPM session.
*
* <br><b>Role:</b>This method deletes the CATIA V5 session 
* opened using @href CATInitBatch or @href CATInitBatchOnHost. 
*<br> This method must be called before exiting the application.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The CATIA session is deleted</li> 
*  </ul>
*/ 
HRESULT ExportedByCATPinServices CATTerminateBatch ();

/**
* Saves a document in session and all its pointed documents in ENOVIAvpm V4 database.
*
* <br><b>Role:</b>This method saves the input document back to the ENOVIAvpm V4 database. 
* Its pointed documents already loaded in session are also saved in the database.
*<br>If the document already exists in the database it is replaced.
*<p>
* The saved documents can be removed from the session at once 
* according to <tt>UnloadAfterSave</tt> value.
*<br>
* Always use @href CATCommitVPM after to commit the changes in the ENOVIAvpm V4 database.
* </p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iDoc
*    the main document
* @param UnloadAfterSave
*     <tt>TRUE</tt>: the documents are removed from session after beeing saved in database
*<br> <tt>FALSE</tt>: the saved documents are kept in session
* 
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The document(s) are successfuly saved</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li> 
*  </ul>
*
*/
HRESULT ExportedByCATPinServices CATSaveInVPMFromCATIA (CATDocument* iDoc,CATBoolean UnloadAfterSave=FALSE);

/**
* Saves a document and all its pointed documents in ENOVIAvpm V4 database.
*
* <br><b>Role:</b>This method loads the input file document in session and all its
* pointed documents too and saves them in the ENOVIAvpm V4 database.
*<br>If the document already exists in the database it is replaced.
*<p>
* The saved documents can be removed from the session at once 
* according to <tt>UnloadAfterSave</tt> value.
*<br>
* Always use @href CATCommitVPM after to commit the changes in the ENOVIAvpm V4 database.
*</p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iPath
*    full path of the input main document
* @param UnloadAfterSave
*     <tt>TRUE</tt>: the documents are removed from session after beeing saved in database
*<br> <tt>FALSE</tt>: the saved documents are kept in session
* 
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The document(s) are successfuly saved</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li> 
*  </ul>
*
*/
HRESULT ExportedByCATPinServices CATSaveInVPMFromCATIA (const char* iPath,CATBoolean UnloadAfterSave=FALSE);


/**
* Retrieves the sorted list of object of what need to be saved.
*
* <br><b>Role:</b>This method analyses the content of the current session and 
* identifies the list of objects that need to be saved prior to the input object because of 
* their impact on this input object.
* <br>
* This list is intended to be used as an input for @href CATSaveInVPM.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*  @param iStarter
*    master object to analyse. 
* <br> <b>Note</b>: Only CATDocument type is supported as iStarter object type. This method supports only documents from ENOVIAvpm V4.
*
*  @param oList
*    sorted list of what needs to be saved with the master object.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The list is successfuly returned</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li> 
*  </ul>
*/
HRESULT ExportedByCATPinServices GetObjectToSaveSortedList(CATBaseUnknown *iStarter,CATLISTP(CATBaseUnknown)& oList);


/**
*  Saves a sorted list of CATIA Object in ENOVIAvpm V4 database.
*
* <br><b>Role:</b>This method saves in the ENOVIAvpm V4 database the objects contained
* in the input list. The input list must be computed with @href GetObjectToSaveSortedList.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*  @param iList
*    sorted list of what needs to be saved
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The list of objects has been successfuly saved</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li> 
*  </ul>
*/
HRESULT ExportedByCATPinServices CATSaveInVPM(CATLISTP(CATBaseUnknown)& iList);

/**
* Creates a DocId for a ENOVIAvpm V4 document.
*
* <br><b>Role:</b>This method computes a ENOVIAvpm V4 DocId from the input parameters.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param oDocId
*    The DocId object.
* @param iCoid
*    the Coid of the entity in ENOVIAvpm V4(Hexadecimal 16 crc long)
* @param iCompid
*       the Compid of the entity in ENOVIAvpm V4(Hexadecimal 16 crc long)
* @param iCatenv
*    the VPM environment name of the entity  (8 crc long).
*<br> For instance <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM PART table name of the entity (18 crc long). 
* <br> For instance <tt>"PART_LIST        "</tt> for a part 
*        or         <tt>"DOCUMENT      "</tt> for a V5 document
*
* @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection.
* <br>The connection string of the entity in VPM can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The DocID has been successfuly computed</li> 
*   <li><tt>E_FAIL</tt>: The method has failed</li> 
*  </ul> 
*/
HRESULT ExportedByCATPinServices CATComputeDocId (CATIDocId **oDocId,
                                                  const CATUnicodeString &iCoid,
                                                  const CATUnicodeString &iCompid,
                                                  const CATUnicodeString &iCatenv,
                                                  const CATUnicodeString &iCatab,
                                                  const CATUnicodeString &iCnxString = CATUnicodeString());

/**
*  Valuates the ENOVIAvpm V4 DocID of a document in session.
*
* <br><b>Role:</b>This method computes a ENOVIAvpm V4 DocId from the input parameters and
* valuates it on the CATDocument given in input.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*  @param iDocument
*    The Document 
*  @param iCoid
*    the Coid of the document (8 crc long)
*  @param iCompid
*    the Compid of the document (8 crc long)
*  @param iCaenv
*    the Caenv of the document (8 crc long)
*<br> For instance <tt>"VPMENV  "</tt>
*  @param iCatab
*    the Catab of the document (18 crc long)
* <br> For instance <tt>"DOCUMENT      "</tt> 
*  @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection.
*<br>  The connection string of the database can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The DocId has been successfuly computed and valuated on the document</li> 
*   <li><tt>E_FAIL</tt>: the connection to the database was not previously done </li> 
*   <li><tt>E_FAIL</tt>: some input parameters are incorrect</li> 
*   </ul>
*/
HRESULT ExportedByCATPinServices CATValuatePdmId (CATDocument* iDocument, const char * iCoid, const char * iCompid, 
                                                  const char * iCaenv, const char * iCatab,
                                                  const char * iCnxString = NULL);

/**
*  Valuates the ENOVIAvpm V4 DocID of a document in session.
*
* <br><b>Role:</b>This method computes a ENOVIAvpm V4 DocId from the input parameters and
* valuates it on the CATDocument given in input.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iDocument
*    The Document 
* @param iCoid
*    the Coid of the entity in ENOVIAvpm V4(Hexadecimal 16 crc long)
* @param iCompid
*       the Compid of the entity in ENOVIAvpm V4(Hexadecimal 16 crc long)
* @param iCatenv
*    the VPM environment name of the entity  (8 crc long).
*<br> For instance <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM PART table name of the entity (18 crc long). 
* <br> For instance <tt>"PART_LIST        "</tt> for a part 
*                or <tt>"DOCUMENT      "</tt> for a V5 document

* @param iCnxString
*    <i>(optional)</i> if needed, in order to avoid a manual connection
*    The connection string of the entity in VPM can be furnished here.
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The DocId has been successfuly computed and valuated on the document</li> 
*   <li><tt>E_FAIL</tt>: the connection to the database was not previously done </li> 
*   <li><tt>E_FAIL</tt>: some input parameters are incorrect</li> 
*   </ul>
*/
HRESULT ExportedByCATPinServices CATValuatePdmId (CATDocument* iDocument,
                                                  const CATUnicodeString &iCoid,
                                                  const CATUnicodeString &iCompid,
                                                  const CATUnicodeString &iCatenv,
                                                  const CATUnicodeString &iCatab,
                                                  const CATUnicodeString &iCnxString = CATUnicodeString());

/**
* Opens a product structure from a PSN file.
*
* <br><b>Role:</b>This method opens in session a product structure defined from
* a ENOVIAvpm V4 PSN file. Usually, the PSN file is saved from the ENOVIAvpm V4 client
* on unix. 
* The method returns the CATDocument associated to the root part of the product structure.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iuPSNPath
*   The full path of the ENOVIAvpm V4 psn file. 
*   This must be a Unix file path with .psn extension. 
*  Only files stored on unix are supported.
*
* @param iiMode
*   loading mode:
*  <sl>
*   <li><tt>0</tt> for static </li>
*	<li><tt>1</tt> for dynamic </li>
*	</sl>
*
* @param iiSelection
*   The type of selection:
*  <sl>
*   <li><tt>0</tt> for selected instances </li>
*	<li><tt>1</tt> for all instances </li>
*	</sl>
*
* @param opDoc
*   The CATProduct document created. 
*
* @param iLoadDoc
*   loading document:
*  <sl>
*   <li><tt>TRUE</tt> Open PSN Graph with loading the document </li>
*   <li><tt>FALSE</tt>  Open PSN Graph without loading the document </li>
*  </sl>
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The PSN file has been successfuly loaded in session</li> 
*   <li><tt>E_FAIL</tt>: the connection to the database was not previously done </li> 
*   <li><tt>E_FAIL</tt>: some input parameters are incorrect</li> 
*   <li><tt>E_FAIL</tt>: The method failed< /li>
*   </ul>
*/

HRESULT ExportedByCATPinServices OpenAPSNGraph(const CATUnicodeString & iuPSNPath, int iiMode, int iiSelection, CATDocument *& opDoc, CATBoolean iLoadDoc=TRUE);


/**
* Opens a product structure from a PSN file.
*
* <br><b>Role:</b>This method opens in session a product structure defined from
* a ENOVIAvpm V4 PSN file. Usually, the PSN file is saved from the ENOVIAvpm V4 client
* on unix. 
* The method returns the CATDocument associated to the root part of the product structure.
* <br>
* A Where Clause can be used to choose the representation.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iuPSNPath
*   The full path of the ENOVIAvpm V4 psn file. 
*   This must be a Unix file path with .psn extension. 
*  Only files stored on unix are supported.
*
* @param iiMode
*   loading mode:
*  <sl>
*   <li><tt>0</tt> for static </li>
*	<li><tt>1</tt> for dynamic </li>
*	</sl>
*
* @param iiSelection
*   The type of selection:
*  <sl>
*   <li><tt>0</tt> for selected instances </li>
*	<li><tt>1</tt> for all instances </li>
*	</sl>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param opDoc
*   The CATProduct document created.
*
* @param puWhereClause
*    the Where Clause to choose representation. This is a SQL format.
* <br> For instance <tt>" C_REVISION like '---' "</tt>.
* <br> If no Where Clause is specified, the first representation type as specified
* in the settings is loaded.
*  
* @param iLoadDoc
*   loading document:
*  <sl>
*   <li><tt>TRUE</tt> Open PSN Graph with loading the document </li>
*   <li><tt>FALSE</tt>  Open PSN Graph without loading the document </li>
*  </sl>
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The PSN file has been successfuly loaded in session</li> 
*   <li><tt>E_FAIL</tt>: The method has failed </li> 
*   </ul>
*/

HRESULT ExportedByCATPinServices OpenAPSNGraphWithClause(const CATUnicodeString & iuPSNPath, int iiMode, int iiSelection, CATDocument *& opDoc, CATUnicodeString * puWhereClause, CATBoolean iLoadDoc=TRUE);
/**
* Rebuilds a CATProduct from a downstream document refering to an assembly stored in the ENOVIAvpm V4 database.
*
* <br><b>Role:</b>This method creates a CATProduct in session. This CATProduct contains
* the product structure with all the reference documents that are pointed by the downstream 
*  document. 
* Only the relevant instances that were loaded in session when 
* the downstream document was created will be contained in the CATProduct.
* The CATProduct will also contain all the constraints and the applicative objects associated
* to the root product. 
*<br> The input downstream document must point on an assembly stored in Structure Exploded in the ENOVIAvpm V4 database.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*
* @param iMode
*	 loading mode
*<br> value <tt>1</tt> is the only value mode supported.
*
* @param iAssDstDoc
*    CATDocument downstream document refering to an assembly stored in the ENOVIAvpm V4 database.
* @param oProdDoc
*    new CATProduct document if the method is successful
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The CATProduct document has been successfuly built</li> 
*   <li><tt>E_FAIL</tt>: The method has failed </li> 
*   </ul>
*/
HRESULT ExportedByCATPinServices CATRebuildAssemblyFromDstDocument (int iMode,
                                                                    CATDocument *iAssDstDoc,
                                                                    CATDocument *&oProdDoc);

/**
* Returns the ENOVIAvpm V4 environment name of a document.
*
* <br><b>Role:</b>This method returns the environment name of document loaded in session.
*  This returned name is exactly the same value used as <tt>iCatenv</tt> parameters of following
* methods: 
*  @href CATComputeDocId ,
*  @href CATCreateVPMSession , 
*  @href CATCreateVPMProductStructure ,
*  @href CATOpenConfiguredAssemblyInVPM ,
*  @href CATValuatePdmId .
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iObject
*    CATProduct or CATDocument object 
* @param oEnvironment
*    Environment name
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The environment name is successfuly returned</li> 
*   <li><tt>E_FAIL</tt>: The method has failed </li> 
*   </ul>
*/
HRESULT ExportedByCATPinServices CATGetVPMEnvironment (CATBaseUnknown * iObject,
						       CATUnicodeString &oEnvironment);

/**
*  Simple query on the specified table in the specified environment
*
* <br><b>Role:</b>This method does a simple query to the ENOVIAVpm V4 for a specified search string
* in the specified table and environment
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*  @param iEnv
*    The environment to search in
*<br> For instance <tt>"VPMENV  "</tt>
*  @param iTable
*    the name of the table to search in
* <br> For instance <tt>"DOCUMENT      "</tt> 
*  @param istring
*    the string criteria for search
*  @param oListOfName
*    Output parameter consisting of list of PDMName matching the string criteria
*  @param oListOfCoid
*    Output parameter consisting of list of coid corresponding to the names searched
*  @param oListOfCompid
*    Output parameter consisting of list of compid corresponding to the names searched
*  @param oListOfCaenv
*    Output parameter consisting of list of environment name corresponding to the names searched
*  @param oListOfCatab
*    Output parameter consisting of list of table name corresponding to the names searched
*
* @return 
*   <ul>
*    <li><tt>S_OK</tt>: Search successful</li> 
*    <li><tt>E_FAIL</tt>: Error in the search criteria specified </li> 
*   </ul>
*/
HRESULT ExportedByCATPinServices CATSimpleQueryToVPM (CATUnicodeString iEnv,
                                                      CATUnicodeString iTable,
                                                      CATUnicodeString istring,
                                                      CATListOfCATUnicodeString & oListOfName,
                                                      CATListOfCATUnicodeString & oListOfCoid,
                                                      CATListOfCATUnicodeString & oListOfCompid,
                                                      CATListOfCATUnicodeString & oListOfCaenv,
                                                      CATListOfCATUnicodeString & oListOfCatab);

/**
*  Subscribe to CallBack on editor so that highlight in PSN works on batch.
* <br><b>Role:</b>This method subscribes to callback on editor
* After having called ::OpenAPSNGraph and created the editor
*  (CATIObjVisualization Show method) the customer must
*  call ::CATAddCBToCurrentEditor to subscribe to
*  events in the editor.
*<p>
* @return 
*   <ul>
*    <li><tt>S_OK</tt>: subscription successful</li> 
*    <li><tt>E_FAIL</tt>: subscription failed </li> 
*   </ul>
*/
HRESULT ExportedByCATPinServices CATAddCBToCurrentEditor();


/**
  * Loads VPM objects into a new or existing product structure.
  * @param iRootPDMID
  * the PDMID of the root VPM part
  * @param iCLinkList
  * a list of Clinks representing the child VPM parts (each Clink represents the list of links leading from
  * the root to the child part)
  * @param iDocPDMIDList
  * a list of PDMIDs representing the corresponding documents of the child VPM parts. A PDMID 
  * can be null (“”) if no document must be loaded.
  * @param iOpenAsNew
  * indicates whether the VPM objects should be loaded into a new structure or an existing one.
  * In the later case, a product structure with the same root must be already loaded.
  * @return
  * <ul>
  * <li><tt>S_OK</tt>: objects successfully loaded</li>
  * <li><tt>E_FAIL</tt>: input are erroneous</li>
  * </ul>
  * <b>Note:</b> 
  * <ul>
  * <li>PDMIDs of root or documents are expressed as 66 character strings (COID, COMPID, TABLE, ENV, DB)</li>
  * <li>elements of iCLinkList are hexadecimal representations of Clink whose length is multiple of 16</li>
  * <li>iCLinkList and iDocPDMIDList must have the same length</li>
  * <li>elements of iDocPDMIDList can be null (“”) if no document must be loaded</li>
  * </ul>           
  */
HRESULT ExportedByCATPinServices CATLoadFromVPM(const CATUnicodeString &iRootPDMID,
                                                const CATListOfCATUnicodeString &iCLinkList,
                                                const CATListOfCATUnicodeString &iDocPDMIDList,
                                                CATBoolean iOpenAsNew);


#endif
