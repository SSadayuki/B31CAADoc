#ifndef CATERRORDEFS_H
#define CATERRORDEFS_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//-----------------------------------------------------------------------------
// Abstract:	Macro definitions for the Error Handling system
//-----------------------------------------------------------------------------

#include "JS0ERROR.h"
#include "CATMacForIUnknown.h"
#include "CATMetaClass.h"

/**
 * Error identifier.
 */
typedef unsigned int CATErrorId;

/** @nodoc */
typedef void (*CATTerminateFunction) ();

//
// Declare an error class: should be included in the class public part
//
/** @nodoc */
#define CATDeclareErrorClass(thisClass,baseClass)		\
	CATDeclareClass;					\
	thisClass(CATErrorId id);				\
	thisClass(CATErrorId id, const char *msgId,             \
		  const char *catalog = NULL);	                \
	CAT_DECLARE_ERROR_CLASS(thisClass)			\
	virtual void GetErrorTable (unsigned int *,		\
				    const CATErrDsc **);	\
	static const unsigned int errorTableLength;		\
	static const CATErrDsc errorTable[];

/**
 * Creates an error class.
 * <br><b>Role</b>: This macro creates all the class method and data member
 * declaration.
 * It must be inserted in the error class header file, after the public keyword.
 * @param thisClass
 *   The name of the error class to create
 * @param baseClass
 *   The name of the error class base class.
 *   <br><b>Legal values</b>: This class must derive from CATError
 *   and the created error class must derive from it
 */
#define CATDeclareError(thisClass,baseClass)		        \
	CATDeclareClass;                                        \
	thisClass(CATErrorId id);				\
	thisClass(CATErrorId id, const char *msgId,             \
	     const char *catalog = NULL);	                \
	thisClass( const char *msgId,const char *catalog );     \
	CAT_DECLARE_ERROR_CLASS(thisClass)		        \
	virtual void GetErrorTable (unsigned int *,		\
	     const CATErrDsc **);	                        \
	static const unsigned int errorTableLength;		\
	static const CATErrDsc errorTable[];
//
// Implement the methods declared in the macro above. Should be included
// in a source file
//
/** @nodoc */
#define CATImplementErrorClass(thisClass,baseClass)		\
	CATImplementClass(thisClass,Implementation,baseClass,CATNull); \
        CAT_IMPLEMENT_CTOR(thisClass,baseClass)			\
	CAT_IMPLEMENT_SETUP(thisClass)				\
	CAT_IMPLEMENT_CLONESELF(thisClass)			\
	CAT_IMPLEMENT_GETMESSAGETABLE(thisClass)

/**
 * Creates an error class.
 * <br><b>Role</b>: This macro creates all the class method bodies.
 * It must be inserted in the error class source file.
 * @param thisClass
 *   The name of the error class to create
 * @param baseClass
 *   The name of the error class base class.
 *   <br><b>Legal values</b>: This class must derive from CATError
 *   and the created error class must derive from it
 */
#define CATImplementError(thisClass,baseClass)		\
	CATImplementClass(thisClass,Implementation,baseClass,CATNull); \
        CAT_IMPLEMENT_CTOR_BIS(thisClass,baseClass)			\
	CAT_IMPLEMENT_SETUP(thisClass)				\
	CAT_IMPLEMENT_CLONESELF(thisClass)			\
	CAT_IMPLEMENT_GETMESSAGETABLE(thisClass)
	

//
// Declarations for a base Error Class (only used by CATError)
//
/** @nodoc */
#define CATDeclareBaseErrorClass(thisClass)			\
	CATDeclareClass;					\
	CAT_DECLARE_ERROR_CLASS(thisClass)			\
	virtual void GetErrorTable (unsigned int *,		\
				    const CATErrDsc **) = 0;

//
// Common declarations for all Error Classes
//
/** @nodoc */
#define CAT_DECLARE_ERROR_CLASS(thisClass)			\
        thisClass *Setup (const char *, int line);		\
	thisClass *Self () { return this; }			\
	virtual CATError *CloneSelf ();

//
// Implement methods for a base error class
//
/** @nodoc */
#define CATImplementBaseErrorClass(thisClass)			\
	CATImplementClass(thisClass,Implementation,CATNull,CATNull);

//
// For use by msgp only
//
/** @nodoc */
#define CATDefineErrorTable(errClass,numErr)			\
	const unsigned int errClass::errorTableLength = numErr;	\
	const CATErrDsc errClass::errorTable[numErr]

//
// If not using msg
//
/**
 * Enables an error class for NLS messages.
 * @param errClass
 *   The name of the error class to create
 */
#define CATImplementNLSErrorClass(errClass)			\
	const unsigned int errClass::errorTableLength = 0;	\
        const CATErrDsc errClass::errorTable[1] = { 0 };

//
// Constructor definition
//
/** @nodoc */
#define CAT_IMPLEMENT_CTOR(thisClass,baseClass)			\
        thisClass::thisClass (CATErrorId id) : baseClass (id) {}\
        thisClass::thisClass (CATErrorId id, const char *cat, const char *m) :\
	    baseClass (id,cat,m) {}
/** @nodoc */
#define CAT_IMPLEMENT_CTOR_BIS(thisClass,baseClass)		              \
        thisClass::thisClass (CATErrorId id) : baseClass (id) {}              \
        thisClass::thisClass (CATErrorId id, const char *cat, const char *m) :\
          baseClass (id,cat,m) {}                                             \
        thisClass::thisClass (const char *cat, const char *m) :               \
        baseClass (cat,m) {} 
        
        	    

// This method is for the native throw, to setup the error object properly
// and return it for the throw. This method cannot be inherited because
// the signature of the throw will always be the base class!
/** @nodoc */
#define CAT_IMPLEMENT_SETUP(thisClass)				\
	thisClass *thisClass::Setup (const char *file, int line)\
	{							\
	    CATError::Setup (file, line);			\
	    return this;					\
	}

//
// Should be removed
//
/** @nodoc */
#define CAT_IMPLEMENT_CLONESELF(thisClass)			\
	CATError *thisClass::CloneSelf ()			\
	{							\
	    thisClass *obj = new thisClass (*this);		\
	    return (CATError *) obj;				\
	}

//
// Return the error table
//
/** @nodoc */
#define CAT_IMPLEMENT_GETMESSAGETABLE(thisClass)		\
	void thisClass::GetErrorTable (unsigned int *len,	\
				       const CATErrDsc **table)	\
	{							\
	    *len = errorTableLength;				\
	    *table = errorTable;				\
	}


#endif
