#ifndef CATMfErr_h
#define CATMfErr_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */


#include "CATError.h"
#include "CATErrors.h"
#include "CATUnicodeString.h"
#include "MecModItfCPP.h"

#define CATMfError_NLS

ExportedByMecModItfCPP extern const char* nlsMfErrCatalog;
ExportedByMecModItfCPP extern const char* nlsMfError;
ExportedByMecModItfCPP extern const char* nlsMfErrAssertFailed;
ExportedByMecModItfCPP extern const char* nlsMfErrCCP;
ExportedByMecModItfCPP extern const char* nlsMfErrImpossibleOperation;
ExportedByMecModItfCPP extern const char* nlsMfErrInternalError;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidBRepFeature;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidBRepSupportKO;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidBRepObject;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidElement;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidFeature;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidName;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidType;
ExportedByMecModItfCPP extern const char* nlsMfErrNotYetImplemented;
ExportedByMecModItfCPP extern const char* nlsMfErrNullPointerAccess;
ExportedByMecModItfCPP extern const char* nlsMfErrOutOfRange;
ExportedByMecModItfCPP extern const char* nlsMfErrUpdate;
ExportedByMecModItfCPP extern const char* nlsMfErrBRepUpdate;
ExportedByMecModItfCPP extern const char* nlsMfErrCstConfig;
ExportedByMecModItfCPP extern const char* nlsMfErrUnresolveBRep;
ExportedByMecModItfCPP extern const char* nlsMfErrUpdateCycle;
ExportedByMecModItfCPP extern const char* nlsMfErrInOutCycle;
ExportedByMecModItfCPP extern const char* nlsMfErrSelfDescendingImport;
ExportedByMecModItfCPP extern const char* nlsMfErrSelfExternalizeImport;
ExportedByMecModItfCPP extern const char* nlsMfErrSynchroMissingReference;
ExportedByMecModItfCPP extern const char* nlsMfErrSynchroNonUpdatableReference;
ExportedByMecModItfCPP extern const char* nlsMfErrSynchroInconsistent;
ExportedByMecModItfCPP extern const char* nlsMfErrImportCreation;
ExportedByMecModItfCPP extern const char* nlsMfErrAssociativeImportCreation;
ExportedByMecModItfCPP extern const char* nlsMfErrImportCATShape;
ExportedByMecModItfCPP extern const char* nlsMfErrInvalidDestination;
ExportedByMecModItfCPP extern const char* nlsMfErrCheckKO;
ExportedByMecModItfCPP extern const char* nlsMfErrCheckScopeBodyKO;
ExportedByMecModItfCPP extern const char* nlsMfErrCheckJournalTopoKO;
ExportedByMecModItfCPP extern const char* nlsMfErrRelaunchUpdate;

/**
* Base class of the Mechanical Modeler errors.
* <b>Role<b>: Class that derives from CATError. It is used to define a new error by derivation,
* for example: @href CATMfErrUpdate . 
*/
class ExportedByMecModItfCPP CATMfError : public CATInternalError
{
   CATDeclareErrorClass(CATMfError, CATInternalError)
public :
   /**
   * @nodoc.
   * Prints some traces about the error for debugging purpose.
   * <p>If the traces are activated, it prints in the ostream @href MFCout the comment, the NLS message (@href CATError#GetNLSMessage ), 
   * the source file name (@hrefCATError#GetSourceFileName ) and the source line number (@href CATError#GetSourceLineNumber ). 
   * @see CATMfTrace, CATError
   */  
   void Print();
   
protected:
   /**
   * @nodoc.
   * Associates a comment with the error   
   */ 
   void SetErrorString(const CATUnicodeString &string);
   
   /**
   * @nodoc.
   * Removes the comment associated with the error. The comment is blank.
   */
   void ResetErrorString();
   
   /**
   * @nodoc.
   * Returns the comment associated to the error.
   */
   CATUnicodeString ErrorString() const ;

private :
   
   // the comment associated with the error
   CATUnicodeString _ErrorString;
   
};


#endif





