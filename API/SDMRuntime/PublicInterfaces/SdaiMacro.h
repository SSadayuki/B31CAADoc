/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef SdaiMacro_H
#define SdaiMacro_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiMacro
// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
// Auteurs :  
//      PYR  
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//      MODIFICATION    :   1
//      DATE            :   fevrier 96
//      AUTEUR          :   PYR
//      NATURE          :   general declarations for all Sdai programs  
//      DESCRIPTION     :   
//
// ------------------------------------------------------------------------------------------------
// 
//
#include <assert.h>

#include <stdlib.h> // attention ceci ne sert que parce que certains constructeurs de copie sont implementes par un appel a exit(),
                    // a virer donc des que ce code aura ete migre...
#include "CATDataType.h"

//--------------------------------------------------------------------------------
// EXPRESS constants
// Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.4.1, p. 287
//--------------------------------------------------------------------------------
// e
// PI
// FALSE
// TRUE
// UNKNOWN

//--------------------------------------------------------------------------------
// Primitive data types
//--------------------------------------------------------------------------------
/** Definition of SdaiInteger */
typedef CATLONG32 SdaiInteger;
/** Definition of SdaiReal */
typedef double SdaiReal;

class SdaiString;
class SdaiBinary;
class SdaiLogical;
class SdaiBoolean;
class SdaiEnum;
class SdaiSelectH;

//const size_t NPOS = 0xffffffff;
/** @nodoc */
#define NPOS 0xffffffff

// typedef void * SdaiVOID;

//--------------------------------------------------------------------------------
// Aggregate and Iterator data types
//--------------------------------------------------------------------------------
// Naming macros
//
#include "SdaiAggMacro.h"

//#define SDAIAGGR(agg, ele)  agg##_Of_##ele 
//#define SDAIAGGRH(agg, ele) SDAIAGGR(##agg,##ele) *
//#define SDAIITER(elemtyp)   SdaiIterator_Of_##elemtyp


//--------------------------------------------------------------------------------
// Access mode data type (model)
//--------------------------------------------------------------------------------
// sdaiCLOSED is an extension meaned to differenciate protected access from unset mode
//--------------------------------------------------------------------------------
/** @nodoc */
typedef enum 
{
	sdaiRO,
	sdaiRW,
	sdaiCLOSED  
} SdaiAccessMode;

//--------------------------------------------------------------------------------
// SdaiPrimitiveType
// ajout LBR : sdaiNO_VALUE pour gerer les PrimitiveH non values
//--------------------------------------------------------------------------------
/** @nodoc */
typedef enum {
  sdaiNO_VALUE    = -1,
  sdaiVOID        = 0 ,
  sdaiINTEGER     = 1 ,
  sdaiREAL        = 2 ,
  sdaiBOOLEAN     = 3 ,
  sdaiLOGICAL     = 4 ,
  sdaiSTRING      = 5 ,
  sdaiBINARY      = 6 ,
  sdaiENUMERATION = 7 ,
  sdaiSELECT      = 8 ,
  sdaiINSTANCE    = 9 ,
  sdaiAGGR        = 10
} SdaiPrimitiveType;

//--------------------------------------------------------------------------------
// SdaiBaseType
// extension
//--------------------------------------------------------------------------------
//typedef enum SdaiBaseType
//{
//	sdaiSIMPLETYPE,
//	sdaiAGGRTYPE,
//	sdaiNAMEDTYPE
//};


//--------------------------------------------------------------------------------
// SdaiUnderlyingType
// extension
//--------------------------------------------------------------------------------
//typedef enum SdaiUnderlyingType
//{
//	sdaiSIMPLEtype,
//	sdaiAGGRtype,
//	sdaiDEFtype,
//	sdaiSELtype,
//	sdaiENUMtype
//};

//--------------------------------------------------------------------------------
// Set/Unset attribut flag
//--------------------------------------------------------------------------------
/** @nodoc */
typedef	enum {
 sdaiUNSET         = 0, // Attribut ayant ete efface par un UNSET
 sdaiSET           = 1, // Attribut ayant ete renseigne par un PUT
 sdaiNEVER_DEFINED = 2, // Attribut n ayant jamais ete renseigne
 sdaiDESTROYED     = 3  // Attribut inaccessible, car detruit
} SdaiAttrFlag;
//--------------------------------------------------------------------------------
// Identificateur de transaction
//--------------------------------------------------------------------------------
/** @nodoc */
typedef CATULONG32  TransactionID;

//--------------------------------------------------------------------------------
//Errors
//--------------------------------------------------------------------------------
//
//typedef enum SdaiErrorId
//{
//	sdaiENOERROR,	// No error
//	sdaiESESSINIT,	// Session already opened
//	sdaiENOSDAI,	// SDAI not available
//	sdaiENOSESS,	// Session not initiated
//	sdaiENOREP,	// Repository not exist
//	sdaiENOREPACC,	// Repository access denied
//	sdaiEREPOPEN,	// Repository already opened
//	sdaiEREPCLOSE,	// Repository not open
//	sdaiEREPACERR,	// Repository access mode conflict
//	sdaiEREPNOTRO,	// Repository not read-only access mode
//	sdaiEREPNOTRW,	// Repository not read-write access mode
//	sdaiEUNREPACC,	// Repository in undefined access mode
//	sdaiENOMODEL,	// Model not exist
//	sdaiENOMODACT,	// Model not active
//	sdaiEMODACCERR,	// Model access mode conflicts
//	sdaiEMODNOTRO,	// Model not read-only access mode
//	sdaiEMODNOTRW,	// Model not read-write access mode
//	sdaiEUNMODACC,	// Model in undefined access mode
//	sdaiEDUPMODNM,	// Model name not unique
//	sdaiEUNKEDEF,	// Entity definition unknown in model
//	sdaiEUNKTYPE,	// Type unknow
//	sdaiEBADTYPE,	// Types not in same schema
//	sdaiENORULE,	// Rule not exist
//	sdaiENOOPER,	// Operation not implemented
//	sdaiENOOBJ,	// Object not exist
//	sdaiEUNKATTR,	// Attribute name unknow
//	sdaiENODERIVE,	// No access to derived attribute
//	sdaiEVALTYPER,	// Value not of correct type
//	sdaiEVALNOASN,	// Value not assigned
//	sdaiENOAGGR,	// Aggregate not exist
//	sdaiENOITER,	// Iterator not exist
//	sdaiEEMPTAGGR,	// Aggregate empty
//	sdaiENOCURMBR,	// Current member not defined
//	sdaiENOOPAGGR,	// Invalid operation for aggregate type
//	sdaiEDUPVALUE,	// Value already in aggregate
//	sdaiEUNDEFRES,	// Result returned as undefined
//	sdaiEINDEXBND,	// Index out of bounds
//	sdaiENOTS,	// Transaction not exist
//	sdaiESYSERROR	// Underlying system error
//};

//--------------------------------------------------------------------------------
// Definition de tous les types HANDLEs de SDAI
//--------------------------------------------------------------------------------
class SdaiAggrInstance ;
class SdaiAppInstance ;
class SdaiDictionaryRepo ;
class SdaiEntityExtents ;
class SdaiEntityInstance ;
class SdaiErrorEvent ;
class SdaiEvent ;
class SdaiImplementation ;
class SdaiInstance ;
class SdaiIterInstance ;
class SdaiMOModel ;
class SdaiModel ;
class SdaiModelContents ;
class SdaiModelRepo ;
class SdaiRepo ;
class SdaiRepoContents ;
class SdaiSession ;
class SdaiSessionInstance ;
class SdaiSessionLog ;
class SdaiTLModel ;
class SdaiTRModel ;
class SdaiTransactionRepo ;
class SdaiVolatileModelRepo ;
class SdaiRoot ;

/** Access to a pointer on a SdaiAggrInstance. */
typedef SdaiAggrInstance*	SdaiAggrInstanceH ;
/** Access to a pointer on a SdaiAppInstance. */
typedef SdaiAppInstance*	SdaiAppInstanceH ;
/** @nodoc */
typedef SdaiDictionaryRepo*     SdaiDictionaryRepoH ;
/** @nodoc */
typedef SdaiEntityExtents*	SdaiEntityExtentsH ;
/** Access to a pointer on a SdaiEntityInstance. */
typedef SdaiEntityInstance*	SdaiEntityInstanceH ;
/** @nodoc */
typedef SdaiErrorEvent*		SdaiErrorEventH ;
/** @nodoc */
typedef SdaiEvent*		SdaiEventH ;
/** @nodoc */
typedef SdaiImplementation*	SdaiImplementationH ;
/** @nodoc */
typedef SdaiInstance*		SdaiInstanceH ;
/** Access to a pointer on a SdaiIterInstance. */
typedef SdaiIterInstance*	SdaiIterInstanceH ;
/** @nodoc */
typedef SdaiMOModel*		SdaiMOModelH ;
/** Access to a pointer on a SdaiModel. */
typedef SdaiModel*		SdaiModelH ;
/** @nodoc */
typedef SdaiModelContents*	SdaiModelContentsH ;
/** @nodoc */
typedef SdaiModelRepo*		SdaiModelRepoH ;
/** @nodoc */
typedef SdaiRepo*		SdaiRepoH ;
/** @nodoc */
typedef SdaiRepoContents*	SdaiRepoContentsH ;
/** @nodoc */
typedef SdaiSession*		SdaiSessionH ;
/** @nodoc */
typedef SdaiSessionInstance*	SdaiSessionInstanceH ;
/** @nodoc */
typedef SdaiSessionLog*		SdaiSessionLogH ;
/** @nodoc */
typedef SdaiTLModel*		SdaiTLModelH ;
/** @nodoc */
typedef SdaiTRModel*		SdaiTRModelH ;
/** @nodoc */
typedef SdaiTransactionRepo*	SdaiTransactionRepoH ;
/** @nodoc */
typedef SdaiVolatileModelRepo*	SdaiVolatileModelRepoH ;
/** @nodoc */
typedef	SdaiRoot*		SdaiRootH ;
/** @nodoc */
typedef	const char * const	SdaiEventId ;
/** @nodoc */
typedef	CATULONG32		SdaiEventDate ;


//--------------------------------------------------------------
// Transaction Classes
//--------------------------------------------------------------
class SdaiTransaction ;
/** @nodoc */
typedef	SdaiTransaction*	SdaiTransactionH ;
// I keep SdaiTRSModificationH because of the SdaiAggr.
class SdaiTRSModification ;
/** @nodoc */
typedef	SdaiTRSModification*	SdaiTRSModificationH ;


//--------------------------------------------------------------
// Dictionnary Classes
//--------------------------------------------------------------

class SdaiBaseTypeH ;
class SdaiUnderlyingTypeH ;
class SdaiAbstractBaseType ;
class SdaiAbstractType ;
class SdaiAggrType ;
//class SdaiArgument ;
class SdaiArrayType ;
class SdaiAttr ;
class SdaiBagType ;
class SdaiBinaryType ;
class SdaiBooleanType ;
class SdaiConstructedType ;
class SdaiDefinedType ;
class SdaiDerivedAttr ;
class SdaiDictionaryInstance ;
class SdaiEntity ;
class SdaiEnumerationType ;
class SdaiExplicitAttr ;
//class SdaiFunction ;
//class SdaiGlobalFunction ;
class SdaiGlobalRule ;
class SdaiIntegerType ;
class SdaiInverseAttr ;
class SdaiListType ;
class SdaiLogicalType ;
class SdaiNamedType ;
class SdaiRealType ;
class SdaiSchema ; 
class SdaiSelectType ;
class SdaiSetType ;
class SdaiSimpleType ;
class SdaiStringType ;
class SdaiUniquenessRule ;
class SdaiWhereRule ;
class SdaiInteroperableType ;
class SdaiInteroperableSchema ;

/** @nodoc */
typedef SdaiAbstractBaseType*	SdaiAbstractBaseTypeH ;
/** @nodoc */
typedef SdaiAbstractType*	SdaiAbstractTypeH ;
/** @nodoc */
typedef SdaiAggrType*		SdaiAggrTypeH ;
//typedef SdaiArgument*		SdaiArgumentH ;
/** @nodoc */
typedef SdaiArrayType*		SdaiArrayTypeH ;
/** Access to a pointer on a SdaiAttr */
typedef SdaiAttr*		SdaiAttrH ;
/** @nodoc */
typedef SdaiBagType*		SdaiBagTypeH ;
/** @nodoc */
typedef SdaiBinaryType*		SdaiBinaryTypeH ;
/** @nodoc */
typedef SdaiBooleanType*	SdaiBooleanTypeH ;
/** @nodoc */
typedef SdaiConstructedType*	SdaiConstructedTypeH ;
/** @nodoc */
typedef SdaiDefinedType*	SdaiDefinedTypeH ;
/** @nodoc */
typedef SdaiDerivedAttr*	SdaiDerivedAttrH ;
/** @nodoc */
typedef SdaiDictionaryInstance*	SdaiDictionaryInstanceH ;
/** Access to a pointer on a SdaiEntity */
typedef SdaiEntity*		SdaiEntityH ;
/** @nodoc */
typedef SdaiEnumerationType*	SdaiEnumerationTypeH ;
/** Access to a pointer on a SdaiExplicitAttr */
typedef SdaiExplicitAttr*	SdaiExplicitAttrH ;
//typedef SdaiFunction*		SdaiFunctionH ;
//typedef SdaiGlobalFunction*	SdaiGlobalFunctionH ;
/** @nodoc */
typedef SdaiGlobalRule*		SdaiGlobalRuleH ;
/** @nodoc */
typedef SdaiIntegerType*	SdaiIntegerTypeH ;
/** @nodoc */
typedef SdaiInverseAttr*	SdaiInverseAttrH ;
/** @nodoc */
typedef SdaiListType*		SdaiListTypeH ;
/** @nodoc */
typedef SdaiLogicalType*	SdaiLogicalTypeH ;
/** Access to a pointer on a SdaiNamedType */
typedef SdaiNamedType*		SdaiNamedTypeH ;
/** @nodoc */
typedef SdaiRealType*		SdaiRealTypeH ;
/** Access to a pointer on a SdaiSchema */
typedef SdaiSchema*		SdaiSchemaH ;
/** @nodoc */
typedef SdaiSelectType*		SdaiSelectTypeH ;
/** @nodoc */
typedef SdaiSetType*		SdaiSetTypeH ;
/** @nodoc */
typedef SdaiSimpleType*		SdaiSimpleTypeH ;
/** @nodoc */
typedef SdaiStringType*		SdaiStringTypeH ;
/** @nodoc */
typedef SdaiUniquenessRule*	SdaiUniquenessRuleH ;
/** @nodoc */
typedef SdaiWhereRule*		SdaiWhereRuleH ;
/** @nodoc */
typedef SdaiInteroperableType*    SdaiInteroperableTypeH;
/** @nodoc */
typedef SdaiInteroperableSchema*  SdaiInteroperableSchemaH;



//--------------------------------------------------------------------------------
// Standard Aggregates provided by generic Implementation (forward declarations)
//--------------------------------------------------------------------------------
/** @nodoc */
#define SDAI_FORWARD_ALL_AGGREGATES(TypeH)				\
class SDAIITER(TypeH);						\
class SDAIAGGR(SdaiAggr,TypeH);					\
class SDAIAGGR(SdaiUnorderedCollection,TypeH);			\
class SDAIAGGR(SdaiOrderedCollection,TypeH);				\
class SDAIAGGR(SdaiArray,TypeH);					\
class SDAIAGGR(SdaiBag,TypeH);					\
class SDAIAGGR(SdaiList,TypeH);					\
class SDAIAGGR(SdaiSet,TypeH)

/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiBinary); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiBoolean); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiBoolean); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiEnum); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiInteger); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiLogical); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiPrimitiveH); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiReal); // all
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiString); // all

// exotics
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiEntityInstanceH);// only Set implemented
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiEntityExtentsH);// only Set implemented
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiErrorEventH);// only List implemented


/**
 * The following SDAI objects:
 *   - SdaiModelH
 *   - SdaiRepoH
 *   - SdaiAttrH
 *   - SdaiDefinedTypeH
 *   - SdaiEntityH
 *   - SdaiGlobalRuleH
 *   - SdaiSchemaH
 *   - SdaiUniquenessRuleH
 *   - SdaiWhereRuleH
 * don't need to have COW-capables aggregates, i subclass the CATSdaiGenericAggr to provide this (lack of) capability
 */

/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiModelH);// only Set implemented
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiRepoH);// only Set implemented

// dictionnary
//SDAI_FORWARD_ALL_AGGREGATES(SdaiArgumentH);// for List
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiAttrH);// for List
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiDefinedTypeH);// for Set
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiEntityH);// for Set and List 
//SDAI_FORWARD_ALL_AGGREGATES(SdaiGlobalFunctionH);// for Set
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiGlobalRuleH);// for Set
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiSchemaH);// for Set
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiUniquenessRuleH);// for Set
/** @nodoc */
SDAI_FORWARD_ALL_AGGREGATES(SdaiWhereRuleH);// for Set

//--------------------------------------------------------------------------------
// Type fonction a rapeller dans les callbacks
//--------------------------------------------------------------------------------
class	SdaiEventDesc ;
/** @nodoc */
typedef	void (*WakeUpFonction)(SdaiRootH from, SdaiRootH to, SdaiEventDesc &) ;

// -------------------------------------------------------------------------------------------------
// LateBinding access to extended methods
// -------------------------------------------------------------------------------------------------
class SdaiPrimitiveH;
//#define SDAI_LATE_BINDING_ARGS (SdaiAppInstanceH thisEntity, SdaiPrimitiveH * ReturnValue, SdaiPrimitiveH * ArrayOfArgs, int NbArgs)
//typedef void (*LateFunction) SDAI_LATE_BINDING_ARGS;


// -------------------------------------------------------------------------------------------------
// Error Treatment
// -------------------------------------------------------------------------------------------------
#include "SdaiErrorMacro.h"


#endif





