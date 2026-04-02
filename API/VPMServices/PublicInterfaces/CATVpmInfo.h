// COPYRIGHT DASSAULT SYSTEMES 1998
//=============================================================================
//
// VPM error management
//
//	Provides :
//	- HRESULT for VPM generation macros (compatible with HRESULT for OLE APIs)
//	- CATVpmInfo class, to handle additional information in case of
//	    warning, information, etc
//=============================================================================
// Usage Notes:
//	
//=============================================================================
// Avr 98   Creation                                   J.Poitreau
//============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef _CATVpmInfo_H_
#define _CATVpmInfo_H_

#include "ENOCheckProject.h"
#include "VX0TOOLS.h"
#include "IUnknown.h"                   // HRESULT, S_OK, definitions, etc
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

//
// Modif du RM pour la compile en cxr4
// le 21 10 1999

#include "CATLISTV_Clean.h"
#define CATLISTV_Append
#define CATLISTV_RemovePosition

#include "CATLISTV_Declare.h"

// for CATListOfCATVpmInfo
#undef  CATLISTV_eqOP
#undef  CATLISTV_neOP


//============================================================================
//                            INFO / ERROR macros
//============================================================================
//  HRESULT Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//      Sev - is the severity code
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//      C - is the Customer code flag
//      R - is a reserved bit
//      Facility - is the facility code
//      Code - is the facility's status code
//============================================================================

#if defined (_WINERROR_) || defined(SEVERITY_ERROR)
# undef SEVERITY_SUCCESS
# undef SEVERITY_ERROR
# undef SUCCEEDED
# undef FAILED
# undef IS_ERROR
# undef HRESULT_CODE
# undef HRESULT_SEVERITY
# undef MAKE_HRESULT
#endif

//----------------------------------------------------------------------------
// (VPM) FACILITY codes (bits )
//    to be used with facility argument of the
//    MAKE_VPM_HRESULT(sev,facility,code) macro
//----------------------------------------------------------------------------
#ifndef FACILITY_VPM
# define FACILITY_VPM      0x0100
# define FACILITY_VINF  FACILITY_VPM|1
# define FACILITY_VPOS  FACILITY_VPM|2
# define FACILITY_VAFL  FACILITY_VPM|3
# define FACILITY_VBOM  FACILITY_VPM|4
# define FACILITY_VCFG  FACILITY_VPM|5
# define FACILITY_VXBM  FACILITY_VPM|6
# define FACILITY_VMFG  FACILITY_VPM|7
#endif

//----------------------------------------------------------------------------
// SEVERITY codes (bits 31-30 of HRESULT)
//----------------------------------------------------------------------------

# define SEVERITY_SUCCESS    0
# define SEVERITY_INFO       1
# define SEVERITY_WARNING    2
# define SEVERITY_ERROR      3

//----------------------------------------------------------------------------
// When HRESULT is used for BOOLEAN purpose (and not error),
//  S_OK    means TRUE
//  S_FALSE means FALSE
// Note that SUCCEEDED(S_FALSE) >= 0 --> function succeeded and returned FALSE
//----------------------------------------------------------------------------
#ifndef S_OK
# define S_OK                ((HRESULT)0x00000000L)
# define S_FALSE             ((HRESULT)0x00000001L)
#endif
#ifndef E_UNEXPECTED
# define E_UNEXPECTED        ((HRESULT)0x8000FFFFL)
# define E_NOTIMPL           ((HRESULT)0x80004001L)
# define E_INVALIDARG        ((HRESULT)0x80070057L)
# define E_NOINTERFACE       ((HRESULT)0x80004002L)
# define E_POINTER           ((HRESULT)0x80004003L)
# define E_HANDLE            ((HRESULT)0x80070006L)
# define E_ABORT             ((HRESULT)0x80004004L)
# define E_FAIL              ((HRESULT)0x80004005L)
#endif

//----------------------------------------------------------------------------
// HRESULT Macros redefinitions
//----------------------------------------------------------------------------

# define SUCCEEDED(Status) ((HRESULT)(Status) >= 0)
# define FAILED(Status)    ((HRESULT)(Status)<0)
# define IS_ERROR(Status)  ((ULONG)(Status) >> 31 == SEVERITY_ERROR)
# define HRESULT_CODE(hr)     ((hr) & 0xFFFF)
# define HRESULT_SEVERITY(hr) (((hr) >> 30) & 0x3)

//----------------------------------------------------------------------------
// VPM HRESULT Macros definitions
// 1. _VPM_RESULT_(sev,fac,code)      to define a VPM HRESULT code
// 2. _VPM_INFO_(info_var,file,tag)   to fill info_var (CATVpmInfo instance)
//                                    necessary informations
//----------------------------------------------------------------------------
# define _VPM_HRESULT_(sev,fac,code) \
    ((HRESULT) (((ULONG)(sev)<<30) | ((ULONG)(fac)<<16) | ((ULONG)(code))) )

# define VPM_INFO(info,file,tag,hr) info.Init(file,tag,hr,__FILE__,__LINE__)

//============================================================================
//                            CATListOfCATVpmInfo class
//============================================================================

// exporting module
class ExportedByVX0TOOLS CATVpmInfo;
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy    ExportedByVX0TOOLS
CATLISTV_DECLARE(CATVpmInfo)
typedef CATLISTV(CATVpmInfo) CATListOfCATVpmInfo;

//============================================================================
//                            CATVpmInfo class
//============================================================================
class ExportedByVX0TOOLS CATVpmInfo
{
public:
/** Constructor
*/
    CATVpmInfo();

  /**
   * @nodoc
   * New constructor used when demarshalling a login session. This is not for general use: use the default constructor instead.
   * Use of this is restricted to DS code, and more specifically to VPMServicesSDM/ENOVTransactionCtxt.m .
   */
  CATVpmInfo(int                               severity,
             HRESULT                           hresult,
             int                               line,
             const CATUnicodeString&           file,
             const CATUnicodeString&           msg,
             const CATUnicodeString&           catalog,
             const CATUnicodeString&           msg_key,
             const CATListOfCATUnicodeString&  msg_params);
  
/** @nodoc */
    CATVpmInfo(const CATVpmInfo &info);

/** @nodoc */
    ~CATVpmInfo();

/** @nodoc */
    void operator = (const CATVpmInfo &info);

// 1 - Info initialisation methods
// -------------------------------

	// Initializing necessary info to build associated message
	// (Init() is used by MAKE_VPM_INFO). You can use :

/** @nodoc */
    void Init(const char *ctlg, const char *tag,
	          HRESULT     code = S_OK,
	          const char *file = "",
	          int         line = 0);

	// Initializing message without using resource file + tag

/**
*   Initializing message with the appropriate return code, name of involved file and line.
*   @param iRawMsg
*   The message to put in the CATVpmInfo.
*   @param code
*   The return code.
*   @param file
*   The name of the involved file
*   @param line
*   Line number of the error.
*   @return
*   None. 
*/
    void Init(const CATUnicodeString &iRawMsg,
	          HRESULT     code = S_OK,
	          const char *file = "",
	          int         line = 0);

    // Message parameters valuation
/** @nodoc */
    void Add(const char    iParam);       // 1-byte  integer

/** @nodoc */
    void Add(const int     iParam);       // 4-bytes integer

/** @nodoc */
    void Add(const long    iParam);       // 4-bytes integer

/** @nodoc */
    void Add(const double  iParam);

/** @nodoc */
    void Add(const char   *iParam);

/** @nodoc */
    void Add(const CATUnicodeString &iParam);

/** @nodoc */
    CATVpmInfo &operator <<(const char    iParam);       // 1-byte  integer

/** @nodoc */
    CATVpmInfo &operator <<(const int     iParam);       // 4-bytes integer

/** @nodoc */
    CATVpmInfo &operator <<(const long    iParam);       // 4-bytes integer

/** @nodoc */
    CATVpmInfo &operator <<(const double  iParam);

/** @nodoc */
    CATVpmInfo &operator <<(const char   *iParam);

/** @nodoc */
    CATVpmInfo &operator <<(const CATUnicodeString &iParam);

	// Set HRESULT code
/** @nodoc */
   	void SetResult(HRESULT code);

	// Set source program information:
	// - source file name (you can use __FILE__ compiler defined macro)
	// - source line      (you can use __LINE__ compiler defined macro)
/** @nodoc */
	void SetSource(const char *file, int line);

	// Once initialized (with parameters, if any),
	// CATVpmInfo can be pushed into Infos' stack

/**
*   Once initialized, push the CATVpmInfo into Infos' stack.
*   @return
*   None. 
*/
	void Push();

// 2a - Retrieve information on a CATVpmInfo instance
// --------------------------------------------------

	// Returning informations about :

/** @nodoc */
	int              GetSeverity();       // HRESULT severity code (on 2-bits)

/** @nodoc */
	HRESULT          GetResult();         // HRESULT (32 bits)

/** @nodoc */
	CATUnicodeString GetMessage();        // associated NLS message

/** @nodoc */
	CATUnicodeString GetKey();            // Tag the NLS message

/** @nodoc */
	HRESULT          GetSource(CATUnicodeString &oFile, int &oLine);

// 2b - Retrieve CATVpmInfo instance(s) from infos' stack
// ------------------------------------------------------

	// Get Stack Size
/** @nodoc */
	static int        Size();
	// Get i-th CATVpmInfo element from the stack (without pop)

/** @nodoc */
	static HRESULT    GetInfo(CATVpmInfo &info, int nIndex=-1);
	// Pop first element from the stack (last created element)
	// Stack size is decremented!

/** @nodoc */
	static HRESULT    Pop(CATVpmInfo &info);
	// Empty stack

/** @nodoc */
	static void       Empty();

private:
	// reseting data in CATVpmInfo to reuse it for another info init ...
	void              Reset();

	// CATVpmInfo data
	// - code
	int                        _severity;
	HRESULT                    _hresult;
	// - source information
	int                        _line;
	CATUnicodeString           _file;
	// - message
	// - a) built message
	CATUnicodeString           _msg;
	// - b) catalog + tag + parameters
	CATUnicodeString           _catalog;
	CATUnicodeString           _msg_key;
	CATListOfCATUnicodeString  _msg_params;


  // JNI 6/6/2
  // new mode: multiple stacks of infos, each one kept inside the loginsession,
  // at user switch time we reset the global pointer to the 'current' stack. Note that this
  // still is not reentrant.
  // Note that we use a list to implement the stack: the top of the stack is the tail of the list.
  static CATListOfCATVpmInfo *_current_stack;
  
  public:
  /**
   * @nodoc
   * This is used to extract the contents of an CATVpmInfo stack item, in order to serialize it,
   * the final goal is being able to transport it into another ENOVIA LCA server process.
   */
  void extract(int                        &severity,
               HRESULT                    &hresult,
               int                        &line,
               CATUnicodeString           &file,
               CATUnicodeString           &msg,
               CATUnicodeString           &catalog,
               CATUnicodeString           &msg_key,
               CATListOfCATUnicodeString  &msg_params);
  
#ifdef ENOVIA_MULTI_USER
  /**
   * @nodoc
   * This is not meant to be manipulated explicitly by modelers/applications, this is only
   * for the private use of the infrastructure (VPMPersistency) code, to reset the global
   * pointer for the 'current' stack of infos when switching users.
   */
  static CATListOfCATVpmInfo *set_current_info_stack(CATListOfCATVpmInfo *);
  
//    // old working mode, only one stacks of infos. this variable is not used in enovia_multi_user mode.
//  	// Stack of CATVpmInfo's
//  	static CATListOfCATVpmInfo _stack;
  
private:
  /**
   * @nodoc
   * This is used in conjunction with set_current_info_stack to allow
   * multiple errors stacks when in multi-user mode.
   */
  static CATListOfCATVpmInfo& real_stack();
#endif
};

#endif // _CATVpmInfo_H_
