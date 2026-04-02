#ifndef CATIPDMCharacteristicScm_H
#define CATIPDMCharacteristicScm_H
// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

// *****************************************************************
//
//    Identification :
//    ---------------
//
//        RESPONSIBLE : Jean-Luc MEDIONI
//        FUNCTION    : Reconciliator
//        USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//    Description :
//    ------------
//
//   Interface used by the Reconciliator UI in order to display and compare the
//   characteristic of a document in session and a document in the the PDM.
//
// *****************************************************************
//
//    Remarks :
//    ---------
//
//
// ****************************************************************
//
//    Story :
//    -------
//
//    Revision 1.0  Oct 2003  Author:  Jean-Luc MEDIONI
//                            Purpose: Creation for Reconciliator
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
// ****************************************************************

#include "CATPDMReconcileItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMReconcileItfCPP IID IID_CATIPDMCharacteristicScm;
#else
extern "C" const IID IID_CATIPDMCharacteristicScm ;
#endif

#include "CATCollec.h"

class CATScmObject ;

//------------------------------------------------------------------

/**
  *  Interface used by the Reconciliator in order to display and compare the
  *  characteristics of an object between its CATIA session and VPDM repository.
  * 
  * <b>Role</b>:
  *  Interface used by the Reconciliator in order to display and compare the
  *  characteristics of an object between its CATIA session and VPDM repository.
  *  <p>This interface is implemented by each characteristic.A characteristic depends 
  *  of PDM environment. 
  *  <p>In the facts a characteristic permits to know if there are obstacles to 
  *  reconciliation searching data in PDM. A characteristic permits to compare these 
  *  data to data of the object in session we want to reconcile. Consequently we have status on each 
  *  characteristic we want to compare.
  *
  *  <p>A characteristic is a late type which name is normalized: <b>CATPDMCharac_Env_CharacName</b>
  * <br>With:
  * <ol>
  * <li><b>Env</b> the PDM environment</li>
  * <li>and <b>CharacName</b> the criterion's name.</li>
  * </ol>
  *
  * <p>We deliver default implementations, but user can create their owns implementations.
  * <ul>
  * <li>For ENOVIA VPM V4, we deliver <b><i>Publication</b></i> comparison</li>
  * </ul>
  */
class ExportedByCATPDMReconcileItfCPP CATIPDMCharacteristicScm: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
   *   Provides characteristic name.
   *
   * <br><b>Role</b>: Provide a NLS Display name of the characteristic.
   *
   *   @param oName
   *      To output the Display name.
   *
   *   @return
   *      Error code of function.
   *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
   */   
   virtual HRESULT GetName( CATUnicodeString & oName ) const = 0 ;
   
 /**
   * Answers if the characteristic is applicable to an object.
   *
   * <br><b>Role</b>: Answers if the characteristic is applicable to an object.
   *
   * @param iCATRecObj
   *   Object on which characteristic need to be applied.
   *
   * @return
   *   Error code of function.
   *   <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
   */
   virtual HRESULT IsApplicable( CATScmObject * iCATRecObj ) const = 0 ;
  
 /**
   *   Executes the characteristic on defined PDM.
   *
   * <br><b>Role</b>: 
   *   Executes the characteristic we want to compare between the object in session and 
   *    the object stored in PDM and give a status
   *
   *   @param iCATRecObj
   *      Object to reconcile
   *
   *   @param oCharStatusList
   *      List characteristic’s status
   *
   *   @param oCATCharList
   *      List of characteristics on CATIA side
   *
   *   @param oPDMCharList
   *      List of characteristics on PDM side
   *
   *   @return
   *      Error code of function.
   *      <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
   */   
   virtual HRESULT ExecuteCharacteristic( CATScmObject                * iCATRecObj
                                        , CATUnicodeString           ** oCharStatusList
                                        , CATListValCATUnicodeString ** oCATCharList
                                        , CATListValCATUnicodeString ** oPDMCharList ) = 0 ;

  // --------------------------------------------------------------
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
} ;

//------------------------------------------------------------------

#endif
