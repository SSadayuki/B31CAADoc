#ifndef XHMACROS_H
#define XHMACROS_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//-----------------------------------------------------------------------------
// Abstract:	Definition of error handling macros
//-----------------------------------------------------------------------------
// Usage:	Please refer to the manual for the description of CATTry, CATCatch,
//		 CATCatchOthers, CATEndTry, CATThrow and CATRethrow
//-----------------------------------------------------------------------------
// Note:	The implementation of the above macros can use directly the
//		C++ try, catch, throw if the compiler supports it. However,
//		it is advised not to mix code compiled with different
//		implementations
//-----------------------------------------------------------------------------
#if (defined(_AIX_SOURCE) && (__xlC__ >= 0x0500))
#include <new.h> // avoid many errors with exception related keywords
#endif
#include "CATError.h"
#include "CATXHContext.h"
#include "CATDestruct.h"
#include <setjmp.h>

//
// eXception Handling macros
//
#ifdef NATIVE_EXCEPTION

    /** @nodoc */
    #define CATTry				try {\
						    CATError::SetCurrentError (NULL);

    /** @nodoc */
    #define CATCatch(errclass,errobj)		} catch (errclass *errobj) {
    
    /** @nodoc */
    #define CATCatchOthers			} catch (...) {
    
    /** @nodoc */
    #define CATEndTry				}
    // Beware that errobj expression can have side-effects (a new exp. for ex.)
    // and thus must evaled only ONCE!
    
    /** @nodoc */
    #define CATThrow(errobj)			throw ((errobj)->Setup (__FILE__,__LINE__))
    
    /** @nodoc */
    #define CATThrow1(errobj,p)			throw ((errobj)->Setup (__FILE__,__LINE__))
    
    /** @nodoc */
    #define CATRethrow				throw
    
    /** @nodoc */
    #define CATDestructOnExit(class,var,init)	class var init
    
    /** @nodoc */
    #define CATDestructOnNonNativeExceptionEx(class, var)
    /** @nodoc */
	#define CATDestructOnNonNativeException(var)

#else /* Poor man's exception */

    #ifndef CAT_ENABLE_NATIVE_EXCEPTION
	// Make sure native exception is not used
    	/** 
    * This method can't be used.
    */
	#define try				ERROR
    	/** 
    * This method can't be used.
    */
	#define catch				ERROR
    	/** 
    * This method can't be used.
    */
	#define throw				ERROR
    #endif

    // Reference the local variable _ctxt_ in the following macros
    // so that they cannot be used out of context (no punt)
    // lots of init is done in CATXHContext constructor
    /**
    * Begin of block CNEXT exceptions.
    * @see CATEndTry
    */
    #define CATTry				\
	{					\
	    CATXHContext _ctxt_;		\
	    if (setjmp (*_ctxt_.GetJmpbuf()) == 0) {

    // errClass:Self is called to ensure that errclass has been defined
    // correctly using the class definition macros
    /**
    * Catch CNEXT specific exceptions.
    */
    #define CATCatch(errclass,errobj)	\
        } else if (_ctxt_.GetError()->IsAKindOf (errclass::ClassName())) {\
	    errclass *errobj = ((errclass *) _ctxt_.GetError())->errclass::Self ();

    /**
    * Catch CNEXT exceptions.
    */
    #define CATCatchOthers			} else if (_ctxt_.GetError()) {

    /**
    * End of block CNEXT exceptions.
    * @see CATTry
    */
    #define CATEndTry				} else {\
						    /* Possible dead code */\
						    CATRethrow;\
						}}
    // Beware that errobj expression can have side-effects (a new exp. for ex.)
    // and thus must evaled only ONCE!
    /** @nodoc */
    #define CATThrow(errobj)			(errobj)->Throw(__FILE__,__LINE__)
    /** @nodoc */
    #define CATThrow1(errobj,p)			(errobj)->Throw(__FILE__,__LINE__,(void*)p)
    /** @nodoc */
    #define CATRethrow				(_ctxt_.GetError()->Throw(NULL, 0))

    #if defined(_WINDOWS_SOURCE) && !defined(PLATEFORME_DS64)

	// longjmp does the work for us on Windows!
	/** @nodoc */
    #define CATDestructOnExit(class,var,init)\
	    class var init

    #else
    /** @nodoc */
	#define CATDestructOnExit(class,var,init)\
	    class var init;				\
	    CATDestruct_<class> var##Destructor(&var)

    #endif
    
    /** @nodoc */
    #define CATDestructOnNonNativeExceptionEx(class, var) CATDestruct_<class> var##Destructor (&var)
	#if defined(_AIX_SOURCE) && !defined(__ibmxl__)
    /** @nodoc */
	#define CATDestructOnNonNativeException(var)  CATDestructOnNonNativeExceptionEx(__typeof__(var), var)
	#else
    /** @nodoc */
	#define CATDestructOnNonNativeException(var)  CATDestructOnNonNativeExceptionEx(decltype(var), var)
	#endif

#endif

#endif
