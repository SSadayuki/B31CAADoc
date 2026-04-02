// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// VPM trace management
//
//	Enables to trace :
//	- functions sequence (with CATVpmTry/Return ...)
//	- particular points  (with TRACE<<...)
//	- error points       (with CATVpmThrow/Catch/Rethrow/CatchOther)
//=============================================================================
// Usage Notes:
//	Trace must be declared (1) and used (2) as follows:
//
// (1) VPM_TRACE(MyAlias,out);       //ex: VPM_TRACE(People,"STDOUT");
//
// (2) int Class::MyFunction(...)
// {
//   CATVpmTry(MyAlias,"MyFunction") // *** CATTry
//   { ...
//     TRACE << "One trace" << endl; // standard trace
//     if (there_is_a_problem) {
//        theProblem = new CATMyError(...);
//        CATVpmThrow(theProblem);   // *** CATThrow
//     }
//     ...
//     if (TRACEON) {                // is trace active ?
//     // program block specific to
//     // trace program
//     }
//     ...
//     CATVpmReturn(1);              // <- optional if void function
//   }
//   CATVpmCatch(CATMyError,error)   // *** CATCatch
//   {
//     TRACERR(error);               // <- standard error print
//     ...
//     CATVpmRethrow;                // <- only if error must be rethrown
//   }
//   CATVpmCatchOther;               // *** CATCatchOther
//   CATVpmEndTry;                   // *** CATEndTry
//   return(0);                      // needed by HP compiler (but never used!)
// }
//=============================================================================
// Mar 97   Creation                                   J.Poitreau
//============================================================================

#ifndef _CATVpmTrace_H_
#define _CATVpmTrace_H_



#include "CATErrors.h"
#include "CATTrace.h"
#include "CATUnicodeString.h"
#include "VX0TOOLS.h"



//============================================================================
// MISE EN PLACE DE MON NOUVEAU MECANISME DE TRACES ...
#define JPA_TRACE_24avr98
#define VPM_PROFILING
//============================================================================
class CATBaseUnknown;
class CATVpmTrace;
class CATVpmTraceStep;
class CATVpmInfo;
//============================================================================
/**
* @nodoc
*/
class ExportedByVX0TOOLS CATVpmTrace : public CATTrace
{
public:

/**
* @nodoc
* Constructor.
*/
	CATVpmTrace(char*,char*,char*,int LoD = 1024, CATTraMode iMode = CATTraUnactivated);

/**
* @nodoc
* Destructor.
*/
	~CATVpmTrace();

/** @nodoc */
	void	FunctionBegin(const char*);

/** @nodoc */
	void	FunctionEnd(long iStartTime = 0);

/** @nodoc */
	CATVpmTrace&	SetDetailLevel(int level);

/**
* @nodoc
* Display any kind of pointer.
*/
	CATVpmTrace&	operator << (const void*);

/**
* @nodoc
* Display a CATBaseUnknown handler.
*/
	CATVpmTrace&	operator << (const CATBaseUnknown_var &);

/**
* @nodoc
* Display a CATBaseUnknown pointer.
*/
	CATVpmTrace&	operator << (const CATBaseUnknown*);

/**
* @nodoc
* Display a char*.
*/
	CATVpmTrace&	operator << (const char*);

/**
* @nodoc
* Display a CATUnicodeString.
*/
	CATVpmTrace&	operator << (const CATUnicodeString &);

/**
* @nodoc
* Display a char.
*/
	CATVpmTrace&	operator << (const char);

/**
* @nodoc
* Display an integer.
*/
	CATVpmTrace&	operator << (const int);

/**
* @nodoc
* Display a long integer.
*/
	CATVpmTrace&	operator << (const long);

/**
* @nodoc
* Display an unsigned long integer.
*/
	CATVpmTrace&	operator << (const unsigned long);

/**
* @nodoc
* Display an unsigned integer.
*/
	CATVpmTrace&	operator << (const unsigned int);

#if defined(PLATEFORME_DS64)
#if defined(_WINDOWS_SOURCE)

/**
* @nodoc
* Display an CATULONGPTR. only for WIN 64 (for AIX64, it is identical to unsigned long
*/
	CATVpmTrace&	operator << (const CATULONGPTR);
#endif
#endif

/**
* @nodoc
* Display a double.
*/
	CATVpmTrace&	operator << (const double);

/**
* @nodoc
* Display a CATVpmInfo.
*/
	CATVpmTrace&	operator << (CATVpmInfo &);

/**
* @nodoc
* Display an integer.
*/
#if defined (_MSC_VER) && (_MSC_VER >= 1400)
	CATVpmTrace&	operator << (__int64 v ) { return CATVpmTrace::operator << ((const int)v) ;}
#endif

/** @nodoc */
	static	CATVpmTrace*	Current();
/** @nodoc */
	char			*_Alias;
private:
	// donnees relative a chaque trace
	int				_LngName;
	int				_Show;
	int				_NewLine;
	int				_Level;
	int				_DetailLevel;
	int				_MaxDetailLevel;
	CATVpmTrace&	Header();
	int				IsShown();

	// donnees relative au mecanisme de traces
	static int			_gInit;		// flag d'init des Vpm Traces
	static int			_gLevel;	// niveau courant (indentation)
	static CATVpmTrace*	_gTrace;	// trace courante

public:
  static const char *STDOUT; // the canonical "STDOUT" string used to initialize CATVpmTrace objects: using
                             // this saves quite a lot of space used by static string data.

private:
  CATVpmTrace(const CATVpmTrace&);
  CATVpmTrace& operator=(const CATVpmTrace&);
  
};


/*--------------------------------------------------------------------------*/
/* IsShown()																*/
/*--------------------------------------------------------------------------*/
inline int CATVpmTrace::IsShown() // this method is the 3rd most called in the Enovia server..
{
	return (_Show && (_DetailLevel <= _MaxDetailLevel));
}



//============================================================================
// CATVpmTraceStep
//============================================================================
/**
* @nodoc
*/
class ExportedByVX0TOOLS CATVpmTraceStep
{
  CATVpmTraceStep(const CATVpmTraceStep&);
  CATVpmTraceStep& operator=(const CATVpmTraceStep&);
public:
	CATVpmTraceStep(CATVpmTrace*,const char*);
	~CATVpmTraceStep();
#ifdef VPM_PROFILING
/** @nodoc */
	const char        * _name;
#endif
/** @nodoc */
	CATVpmTrace * _trace;
/** @nodoc */
	long          _time;
/** @nodoc */
	long          _elapsed;
};


//============================================================================
// Internal defines
//============================================================================
/**
* @nodoc
*/
#define endl "\n"

/**
* @nodoc
*/
#define		VPM_TRACE2(alias,os,max_level) \
	static CATVpmTrace vpm_trace_##alias(#alias,#alias,os,max_level)

/**
* @nodoc
*/
#define		VPM_TRACE(alias,os) \
			VPM_TRACE2(alias,os,1024) \

/**
* @nodoc
*/

# define		VPM_TRACE_IN(alias,func_name) \
	CATVpmTraceStep __vpm_trace_step(&vpm_trace_##alias,func_name)

/**
* @nodoc
*/
# define		VPM_TRACE_OUT \
	CATVpmTrace::Current()



//============================================================================
// Macro definition to use ...
//============================================================================


/*--------------------------------------------------------------------------*/
/* Standard traces															*/
/*--------------------------------------------------------------------------*/
#undef      TRACE
#undef      TRACEON
#undef      TRACEL
/**
* @nodoc
*/
# define		TRACE         *(__vpm_trace_step._trace)
/**
* @nodoc
*/
# define		TRACEON       (__vpm_trace_step._trace)->IsActive()
/**
* @nodoc
*/
# define		TRACEL(level) ((__vpm_trace_step._trace)->SetDetailLevel(level))


/*--------------------------------------------------------------------------*/
/* TRY / CATCH / THROW macro defintions										*/
/*--------------------------------------------------------------------------*/

// try bloc
/**
* @nodoc
*/
#define CATVpmTry(alias,func_name) \
	VPM_TRACE_IN(alias,func_name); \
	CATTry

// throw
/**
* @nodoc
*/
#define		CATVpmThrow(err) \
	TRACE << "<- throw (" << err->GetName() << ")" << endl;\
	CATThrow(err)

// catch
/**
* @nodoc
*/
#define CATVpmCatch(classe,err)	\
	CATCatch(classe,err)

// trace error (in catch bloc)
/**
* @nodoc
*/
#define		TRACERR(err)			\
	TRACE << "-> catch "<< err->GetName() << "(" << err->GetMessageText(1) << ")" << '\n';

// catch other
/**
* @nodoc
*/
#define		CATVpmCatchOther		\
	CATCatchOthers {			\
		CATRethrow;				\
	}

// rethrow
/**
* @nodoc
*/
#define		CATVpmRethrow			\
	CATRethrow

// end try bloc
/**
* @nodoc
*/
#define CATVpmEndTry			\
	CATEndTry

// return
/**
* @nodoc
*/
extern ExportedByVX0TOOLS const char *CATVpmTrace_returns;
extern ExportedByVX0TOOLS const char *CATVpmTrace_nl;

# define		VPM_TRACE_RETURN(value) \
    do {*(__vpm_trace_step._trace)<<CATVpmTrace_returns<<value<<CATVpmTrace_nl; \
return value; } while(0)
/**
* @nodoc
*/
# define		CATVpmReturn return



#endif // _CATVpmTrace_H_
