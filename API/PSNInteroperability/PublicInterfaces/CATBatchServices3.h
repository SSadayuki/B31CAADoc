/* -*-c++-*- */
#ifndef CATBatchServices3__H
#define CATBatchServices3__H

// COPYRIGHT DASSAULT SYSTEMES  2013

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATPinServices.h"
#include "IUnknown.h"

class CATIProduct_var;
class CATUnicodeString;
/**
* Adds an instance of a document under a node without loading its reference.
*
*<br><b>Role:</b>This method adds an instance of a part stored in VPM in session without loading its reference
*  returns the added instance. 
*
* <p>
* This method takes as input the document identifiers and the father of the instance to add. 
* Only the 42 first character of the string are relevant and are structured as followed:
* <ul>
*    <li> the Coid of the document (16 crc long) </li>
*    <li> the Compid of the document (16 crc long) </li>
*    <li> the VPM environment name of the document (8 crc long). 
*           <br>   For instance <tt>"VPMENV  "</tt> </li>
*    <li> the VPM document table name  (18 crc long). 
*           <br>  For instance <tt>"DOCUMENT         "</tt> </li>
*    <li> the VPM  server name  (8 crc long). 
* </ul>
* </p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iFather
*    father of the instance to add.
* @param iInstName
*    name of the instance to add.
* @param iCoid
*    COID of the document
* @param iCompid
*    COMPID of the document
* @param iCatenv
*    environment of the document
* @param iCatab
*    table of the document
* @param iCnxString
*    connection string
* @param oInstance
*    the instance added
*
* @return 
*   <ul>
*   <li><tt>S_OK</tt>: The instance was added under the father in session</li> 
*   <li><tt>E_FAIL</tt>: The instance couldn't be added under the father in session</li>
*   <li><tt>E_FAIL</tt>: The method has failed</li>
*  </ul>
*/

HRESULT ExportedByCATPinServices CATAddInstanceOfNotLoadedDocumentFromVPM (const CATIProduct_var & iFather,
                                                  const CATUnicodeString & iInstName,
                                                  const CATUnicodeString &iCoid,
                                                  const CATUnicodeString &iCompid,
                                                  const CATUnicodeString &iCatenv,
                                                  const CATUnicodeString &iCatab,
                                                  const CATUnicodeString &iCnxString,
                                                  CATIProduct_var & oInstance);

#endif

