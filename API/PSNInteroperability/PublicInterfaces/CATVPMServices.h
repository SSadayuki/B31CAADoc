/* -*-c++-*- */
#ifndef CATVPMServices__H
#define CATVPMServices__H

// COPYRIGHT DASSAULT SYSTEMES  2005

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATPinServices.h"
#include "IUnknown.h"
#include "CATBaseUnknown.h"
class CATDocument;
class CATUnicodeString;
class CATIDocId;



/**
  * Class for VPM document services.
  * <b>Role:</b>This class delivers services to be used with ENOVIAvpm
  *<ul>
  * <li> @href CATVPMServices#SetPDMProperties : Set the PDM properties of a document.
  * <li> @href CATPDMServices#SaveAsInVPM : SaveAs of a document in VPM database.
  *</ul>
  */


class ExportedByCATPinServices CATVPMServices
{
  public:

  enum VaultMode
  {
    PermanentBlackBox   = 1,
    VolatileExposed    = 4
  };

  enum Env
  {
    File=0,
    VPM1=1
  };

  enum SaveAsMode
  {
    ReplaceByTarget=0,
    KeepModified=1,
    ReloadFromSource=2
  };

/**
* Set the PDM properties of a document for ENOVIAvpm V4.
*
* <br><b>Role:</b>This method sets the PDM properties for ENOVIAvpm V4 of a document loaded in session.
* It sets the environment type and the exposition mode of a document.
* This method is intended to be used on a filebase document that will be saved in ENOVIAvpm V4.
* This method has the same effect as the "Set PDM Properties" interactive CATIA menu.
*<br> 
* The <tt>VPM1</tt> environment is dedicated to ENOVIAvpm V4. 
* For this environment, two expositions modes are available as <tt>VaultMode</tt>:
*   <sl>
*     <li>the Publications Exposed mode (<tt>PermanentBlackBox</tt>) </li>
*     <li>the Structure Exploded mode (<tt>VolatileExposed</tt>)</li>
*   </sl>
*<p>
* The rules for setting the environment type and the exposition mode of a document are:
* <ul>
* <li>if VaultMode is set to <tt>PermanentBlackBox</tt>, 
*           the exposition mode is propagated to the children of the structure in session </li>
* <li>if VaultMode is set to <tt>VolatileExposed</tt>, 
*           the exposition mode is not propagated to the children </li>
* <li>it is not possible to set <tt>VolatileExposed</tt> on a document if this document has already a 
*         pointing document in Publication Exposed mode </li>
* <li>if the document comes from ENOVIAvpm V4 database:
*   <ul>
*     <li>its PDM exposition mode can't be modified </li>
*     <li>its PDM environment can't be changed to File </li>
*   </ul>
* </ul>
* <br><b>Note:</b>Only CATProduct type document supports the Structure Exploded mode.
**
*<p>If needed, your Imakefile.mk should include the module: <b><b>CATPinServices</b></b> </p>
*<p>
* @param iDoc
*    the document on which we set the PDM properties
* @param iDocEnv
*    the environment type to set to the document:
*     <sl>
*     <li><tt>File</tt> for filebased environment</li>
*     <li><tt>VPM1</tt> for ENOVIAvpm V4 environment</li>
*     </sl>
* @param iVaultMode
*    the exposition mode for <tt>VPM1</tt> environment only:
*     <sl>
*     <li><tt>PermanentBlackBox</tt> for Publications Exposed</li>
*     <li><tt>VolatileExposed</tt> for Structure Exploded </li>
*     </sl> 
*
* @return
*   <ul>
*   <li><tt>S_OK</tt>: The PDM properties has been successfuly set</li> 
*   <li><tt>E_FAIL</tt>: incompatible input parameters</li> 
*   <li><tt>E_FAIL</tt>: the method failed</li> 
*   </ul>
*/
 static HRESULT SetPDMProperties (CATDocument *iDoc, Env iDocEnv, VaultMode iVaultMode);


/**
* SaveAs of a document in ENOVIAvpm V4 .
*
* <br><b>Role:</b>This method allows save an ENOVIAvpm V4 document loaded in session by replacing 
* an existing document in the ENOVIAvpm V4 database.
* This method has the same effect as the "Extract&Save" menu in ENOVIAvpm V4 client application. 
* It proposes three similar modes for save: 
*     <sl>
*	  <li>"Replace by target" : this mode creates a new document in VPM and 
*        replaces the modified document in the session by the new one. 
*        All links are rerouted to the new document.
*   <li>"Keep Modified" : this mode creates a new document in VPM and 
*        keeps all the modification in the original part in the CATIA Session</li>
*   <li>"Reload From Source" : this mode creates a new document in VPM and 
*        replaces the modified document in the session by the original version in the database.
*        All links pointing to the replaced document will be rerouted if possible.
*        If not, the corresponding links are broken.
*     </sl>
*<p> If ENOVIAvpm application is VX0SERV : the commit in database is not done.  
*<p> If ENOVIAvpm application is VX0VPM : the commit in database is done.  
*<p>If needed, your Imakefile.mk should include the module: <b><b>CATPinServices</b></b> </p>
*<p>
* @param iDoc
*    the document to save
*
* @param iCoid
*    the Coid of the document to overwrite (Hexadecimal 16 crc long)
*
* @param iCompid
*    the Compid of the document to overwrite (Hexadecimal 16 crc long)
*
* @param iCatenv
*    the VPM environment name of the document (8 crc long)
*<br>For instance: <tt>"VPMENV  "</tt>
*
* @param iCatab
*    the VPM DOCUMENT table name (18 crc long)
*<br>For instance: <tt>"DOCUMENT          "</tt>
*
* @param iCnxString
*    <i>(optional)</i> The connection string of the entity in VPM.
*
* <br>
* @param iSaveMode
*     <sl>
*     <li><tt>ReplaceByTarget</tt> Replace </li>
*     <li><tt>KeepModified</tt> Keep Modified </li>
*     <li><tt>ReloadFromSource</tt> Reload original version </li>
*     </sl>
*
* @return
*   <ul>
*   <li><tt>S_OK</tt>: The SaveAs has been successfuly executed</li> 
*   <li><tt>E_FAIL</tt>: the method failed</li> 
*   <li><tt>E_INVALIDARG</tt>: one of the input arguments is incorrect</li> 
*   </ul>
*/

 static HRESULT SaveAsInVPM (CATDocument *iDoc,
                             const CATUnicodeString &iCoid,
                             const CATUnicodeString &iCompid,
                             const CATUnicodeString &iCatenv,
                             const CATUnicodeString &iCatab,
                             const CATUnicodeString &iCnxString,
                             SaveAsMode iSaveMode);


};

#endif










