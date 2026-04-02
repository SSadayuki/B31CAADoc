// COPYRIGHT Dassault Systemes 2006
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */
//===================================================================
//
// CATEAPspValidation.h
// Adapter for CATIPspValidation implementations
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATEAPspValidation_H
#define CATEAPspValidation_H

//  CATPlantShipInterfaces
#include "CATPspItfCPP.h"
#include "CATPspCheckViolation.h"
#include "CATPspValidationDeclarations.h"

//  Systems
#include "CATBaseUnknown.h"
#include "CATListPV.h"

class CATIPspGroup;
class CATIUnknownList;
class CATListValCATUnicodeString;
class CATPspViolationProduct;
class CATUnicodeString;

//------------------------------------------------------------------

class ExportedByCATPspItfCPP CATEAPspValidation: public CATBaseUnknown
{
  public:

    CATDeclareClass;

    CATEAPspValidation();
    virtual ~CATEAPspValidation();  

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetValidationChecks
    */
    virtual HRESULT GetValidationChecks( CATListValCATUnicodeString& oChecks );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetClassification
    */
    virtual HRESULT GetClassification( CATUnicodeString& oClassification );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetCheckName
    */
    virtual HRESULT GetCheckName( const CATUnicodeString& iCheck, 
                                  CATUnicodeString& oName );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetViolationObjectType
    */
    virtual HRESULT GetViolationObjectType( CATUnicodeString& oType );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#IsObjectAViolation
    */
    virtual HRESULT IsObjectAViolation( const CATBaseUnknown* iObject,
                                        const CATListValCATUnicodeString& iChecks,
                                        CATListPV** oViolation,
                                        const unsigned int& iErrorFile = 0 );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#IsMemberAViolation
    */
    virtual HRESULT IsMemberAViolation( const CATIPspGroup* iGroup,
                                        const CATIUnknownList* iMembers,
                                        const IUnknown* iObject,
                                        const CATListValCATUnicodeString& iChecks,
                                        CATListPV** oViolation,
                                        const unsigned int& iErrorFile = 0 );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetColumnTitles
    */
    virtual HRESULT GetColumnTitles( CATListValCATUnicodeString& oTitles );

    /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetDocColumnTitles
    */
    virtual HRESULT GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles,
                                        CATListValCATUnicodeString& oObjectTitles);

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#LogContextObject
    */
    virtual HRESULT LogContextObject( const CATBaseUnknown* iObject,
                                      const unsigned int& iErrorFile=0 );

   /**
    *@nodoc
    * 
    */
    virtual HRESULT GetContextObjectViolation( const int& iViolationIndex,
                                               CATPspViolationProduct** oProduct,
                                               CATListPV** oViolation );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#GetContextObjectViolationCount
    */
    virtual HRESULT GetContextObjectViolationCount( int& oNumber );

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#IsAnIntegrationCheck
    */
    virtual HRESULT IsAnIntegrationCheck();

   /**
    * Implements a function from an interface.
    * @see CATIPspValidation#IsAFromToCheck
    */
    virtual HRESULT IsAFromToCheck();

  protected:

   /**
    * The validation type
    * @param oName
    *    The key (e.g. CATDVSpec)
    * @return HRESULT
    *    S_OK if oName is non-blank; else E_FAIL
    */
    virtual HRESULT GetType( CATUnicodeString& oName );

   /**
    * Get the CATNls resource file associated with this validation type.
    * @param oName
    *    The resource name
    * @return HRESULT
    *    S_OK if oName is non-blank; else E_FAIL
    */
    virtual HRESULT GetResource( CATUnicodeString& oName );

   /**
    * Add the check violation to the violation list.  If
    * the list doesn't exist, it will be created.
    * @param ioList
    *    The collection of check violations 
    * @param iViolation
    *    The check violation
    * @return HRESULT
    *    S_OK if oName is non-blank; else E_FAIL
    */
    virtual HRESULT AddViolation( CATListPV** ioList,
                                  CATPspCheckViolation* iViolation );

   /**
    * Delete the list of check violations.
    * @param ioList
    *    The collection of check violations 
    * @return HRESULT
    *    S_OK
    */
    virtual HRESULT DeleteCheckViolations( CATListPV* iList );

   /**
    * Get the NLS description for a given key(s)
    * @param iLKeys
    *   Keys within the NLS file
    * @param oLDescriptions
    *   NLS message associated with iLKeys[i]
    * @param int
    *   =0 Empty list
    *   =1 Descriptions found
    */
    virtual int GetDescriptions( const CATListValCATUnicodeString& iLKeys,
                                 CATListValCATUnicodeString& oLDescriptions );

   /**
    * Print the NLS error message for the given key
    * @param iErrorFile
    *   The file descriptor to the opened error file.
    * @param iCheck
    *   The validation check (e.g. Spec01)
    * @param iErrorKey
    *   Key within the NLS file
    * @param iLParms
    *   Values to parameter defined by /pn where n>=1 (eg. /p1 is replaced
    *   by iLParms[1] in the message).
    * @param HRESULT
    *   S_OK if error printed; otherwise E_FAIL;
    */
    virtual HRESULT PrintErrorMessage( const unsigned int& iErrorFile,
                                       const CATUnicodeString& iCheck,
                                       const CATUnicodeString& iErrorKey,
                                       const CATListValCATUnicodeString& iLParms );

  private:

    // do not implement
    CATEAPspValidation (CATEAPspValidation &);
    CATEAPspValidation& operator=(CATEAPspValidation&);

   /**
    * Build the NLS error message for the given key. Error messages
    * registered in CATPspValidationError.CATNls.
    * @param iKey
    *   Key within the NLS file
    * @param iLParms
    *   Values to parameter defined by /pn where n>=1 (eg. /p1 is replaced
    *   by iLParms[1] in the message).
    * @param HRESULT
    *   S_OK if oMessage is non-blank
    */
    virtual HRESULT BuildErrorMessage( const CATUnicodeString& iKey,
                                       const CATListValCATUnicodeString& iLParms,
                                       CATUnicodeString& oMessage );
};

//------------------------------------------------------------------

#endif
