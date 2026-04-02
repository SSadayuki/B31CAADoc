// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIPDMSaveInfo1.h
//
//===================================================================
// A user exit to control the save process can be developped,
// implementing the interface CATIPDMUESaveProcess
// Functions of that interface have one argument of the type CATIPDMSaveInfo1
// It lets the user exit access information about the save environment
//
//===================================================================
//  Feb-03 JRZ  Creation
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIPDMSaveInfo1_H
#define CATIPDMSaveInfo1_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATVariant.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMSaveInfo1;
#else
extern "C" const IID IID_CATIPDMSaveInfo1;
#endif
class CATDocument;
class CATUnicodeString;


/**
 * Interface clone of CATIPDMSaveInfo allowing server call.
 */

class ExportedByCATPDMBaseItfCPP CATIPDMSaveInfo1: public CATBaseUnknown
{
  CATDeclareInterface;

public:

   /* Returns the Document Environment late type of the passed in document, typically File, VPM1, ENOVIA5.
   * @param iDoc
   * The document to get Document Environment.
   * @param oEnvType
   * The returned late type of its Document Environment.
   * @return
   *    S_OK   Success.
   *    E_FAIL Failure.
   */
  virtual HRESULT GetDocEnvironmentType(CATDocument* iDoc, CATUnicodeString& oEnvType) = 0;


   /* Returns if a document of the passed in name already exists in the targeted PDM for save.
   * @param iDocName
   * Document name to test for existence.
   * @return
   *    S_OK    A document of that name already exists in the PDM.
   *    S_FALSE No document of that name already exits in the PDM.
   *    E_FAIL  Failure.
   */
  virtual HRESULT DocumentExistInPDM(CATUnicodeString& iDocName) = 0;

 
  /**
   *  Called by the CATIA user exit to call customer code on the server.
   * @param  iServerLateType
   * Late type on server side containing the customer code.
   * This late type should implement the interface ENOVIUERunInteropServerCode.
   * @param  iInput
   * Information provided by the CATIA side.
   * Marshalled to the server and passed in as input to the customer code on server side.
   * @param  iOuput
   * Information returned by customer code on server side.
   * It's marshalled back to CATIA an returned to the caller I.E. the CATIA user exit.
   * @return
   *    S_OK    Success.
   *    E_FAIL  Failure.
   */
  virtual HRESULT RunServerCode (const CATUnicodeString& iServerLateType,const CATVariant& iInput, CATVariant& oOutput ) = 0;



  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIPDMSaveInfo1, CATBaseUnknown );

#endif
