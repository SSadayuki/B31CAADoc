/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef SdaiErrorMacroH
#define SdaiErrorMacroH

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiErrorMacro
// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
// Auteurs :  
//      BMX
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//      MODIFICATION    :   1
//      DATE            :   fevrier 96
//      AUTEUR          :   BMX
//      NATURE          :   general declarations for all Sdai programs  
//      DESCRIPTION     :   
//
// ------------------------------------------------------------------------------------------------
// 
//

//--------------------------------------------------------------------------------
//Error id
//--------------------------------------------------------------------------------

typedef enum // SdaiErrorId
{
	sdaiENOERROR,	  // No error
	sdaiESESSINIT,	// Session already opened
	sdaiENOSDAI,	  // SDAI not available
	sdaiENOSESS,	  // Session not initiated
	sdaiENOREP,	    // Repository not exist
	sdaiENOREPACC,	// Repository access denied
	sdaiEREPOPEN,	  // Repository already opened
	sdaiEREPCLOSE,	// Repository not open
	sdaiEREPACERR,	// Repository access mode conflict
	sdaiEREPNOTRO,	// Repository not read-only access mode
	sdaiEREPNOTRW,	// Repository not read-write access mode
	sdaiEUNREPACC,	// Repository in undefined access mode
	sdaiENOMODEL,	  // Model does not exist
	sdaiENOMODACT,	// Model is not active
	sdaiEMODACCERR,	// Model access mode conflicts
	sdaiEMODNOTRO,	// Model not read-only access mode
	sdaiEMODNOTRW,	// Model not read-write access mode
	sdaiEUNMODACC,	// Model in undefined access mode
	sdaiEDUPMODNM,	// Model name not unique
	sdaiEUNKEDEF,	  // Entity definition unknown in model
	sdaiEUNKTYPE,  	// Type unknown
	sdaiEBADTYPE,	  // Types not in same schema
	sdaiENORULE,	  // Rule does not exist
	sdaiENOOPER,	  // Operation is not implemented
	sdaiENOOBJ,	    // Object does not exist
	sdaiEUNKATTR,  	// Attribute name unknown
	sdaiENODERIVE,	// No access to derived attribute
	sdaiEVALTYPER,	// Value is not of correct type
	sdaiEVALNOASN,	// Value is not assigned
	sdaiENOAGGR,	  // Aggregate does not exist
	sdaiENOITER,	  // Iterator does not exist
	sdaiEEMPTAGGR,	// Aggregate empty
	sdaiENOCURMBR,	// Current member not defined
	sdaiENOOPAGGR,	// Invalid operation for aggregate type
	sdaiEDUPVALUE,	// Value already in aggregate
	sdaiEUNDEFRES,	// Result returned as undefined
	sdaiEINDEXBND,	// Index out of bounds
	sdaiENOTS,	    // Transaction does not exist
	sdaiESYSERROR,	// Underlying system error
	sdaiLOWMEM,		// Low available memory in the system

  // new errors JNI 30/04/02
  sdaiEITERATOR,  // inconsistent operator: for example, because an object inside the iterator was deleted (this can happen in single-context too!).
  sdaiECONTEXT,   // performed an out-of-context error, meaning you did something that is not supported when multiple contexts work on the same model.
  sdaiEISOLATION, // attempted to perform a model modification that violates in-group isolation.
  sdaiENOCOW,
  sdaiESTORE      // error while storing or restoring a context.
} SdaiErrorId;

// -------------------------------------------------------------------------------------------------
// Fonction externe pour lever une erreur (Cree par BLC le 10/08/94)
// -------------------------------------------------------------------------------------------------
#include "KS0SIMPL.h"

ExportedByKS0SIMPL extern void  CATSdaiTraceRaise(const char* FileName,const unsigned int Line_In_File, SdaiErrorId ErrorId, const char* ErrorDesc);

#define SDAI_RAISE_ERROR(ErrorId,ErrorDesc) \
  CATSdaiTraceRaise( __FILE__,__LINE__, ErrorId, ErrorDesc);

#endif





