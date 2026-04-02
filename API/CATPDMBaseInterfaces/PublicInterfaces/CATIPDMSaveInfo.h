// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIPDMSaveInfo.h
//
//===================================================================
// A user exit to control the save process can be developped, implementing the intfCATIPDMUESaveProcess
// Functions of that intf have one argument of the type CATIPDMSaveInfo
// It lets the user exit access information about the save environment
//
//===================================================================
//  Feb-03 JRZ  Creation
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#ifndef CATIPDMSaveInfo_H
#define CATIPDMSaveInfo_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMSaveInfo;
#else
extern "C" const IID IID_CATIPDMSaveInfo;
#endif
class CATDocument;
class CATUnicodeString;
class ExportedByCATPDMBaseItfCPP CATIPDMSaveInfo: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  enum ModifStatus
  {
    PDM_NotDefined = 0,
    PDM_NotModified = 1,
    PDM_Modified = 2,
    PDM_New = 3
  };

   /** Returns the doc env late type of the passed in document, typically File, VPM1, ENOVIA5
   * @param iDoc The document to get doc environment
   *
   * @param oEnvType The returned late type of its doc environment
   *
   * @return
   *    S_OK:   Success 
   *    E_FAIL: Failure
   */
  virtual HRESULT GetDocEnvironmentType(CATDocument* iDoc, CATUnicodeString& oEnvType) = 0;


   /** Returns if a document of the passed in name already exists in the targeted PDM for save
   * @param iDocName Document name to test for existence
   *
   * @return
   *    S_OK    : A document of that name already exists in the PDM 
   *    S_FALSE : No document of that name already exits in the PDM
   *    E_FAIL  : Failure
   */
  virtual HRESULT DocumentExistInPDM(CATUnicodeString& iDocName) = 0;

  //ZPL for Honda on R19
  /**
  * Method to get the modifcation status related to a document involved in “Save in ENOVIA” command.
  *
  *  @param iDocToSave
  *    (input) The document to check at Save.
  *
  *  @param oStatus
  *    (output) The status which can be of the following values:
  *    <ul>
  *     <li><tt>PDM_NotDefined</tt> Document is not a workpackage (saved or to be saved as exploded document).</li>
  *     <li><tt>PDM_New</tt>: Document is newly created in CATIA and has to be saved as a workpackage.</li> 
  *     <li><tt>PDM_Modified</tt>: Document already exists in ENOVIA and is modified in CATIA session.</li> 
  *     <li><tt>PDM_NotModified</tt>: Document already exists in ENOVIA and is NOT modified in CATIA session.</li> 
  *    </ul>
  *
  * @return 
  *   <ul>
  *     <li><tt>S_OK</tt>: Function executed successfully</li> 
  *     <li><tt>E_FAIL</tt>: Error occurred during execution</li>
  *  </ul>
  */
  virtual HRESULT GetModificationStatus(CATDocument* iDocToSave, ModifStatus& oStatus) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIPDMSaveInfo, CATBaseUnknown );

#endif
