// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMSecurityRegister:
//   VPM Security Registration class
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Creation  : 12/08/99  AHC
// ReCreation: 15/09/99  J.Poitreau
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifndef ENOVRegDictionary_H_
#define ENOVRegDictionary_H_

#undef ExportedByVX0FACTO
#ifdef  _WINDOWS_SOURCE
#ifdef  __VX0FACTO
#define ExportedByVX0FACTO      __declspec(dllexport)
#else
#define ExportedByVX0FACTO      __declspec(dllimport)
#endif
#else
#define ExportedByVX0FACTO
#endif

//#include "GUIDVPMInterfaces.h"
#include "CATListPV.h"
#include "CATString.h"

//=============================================================================
// VARIABLE REGISTRATION
//=============================================================================
/** @nodoc */
#define ENOVRegVAR(prefix,late,meth) __##prefix##2_##late##_##meth

/**
 * Events Stream Argument types.
**/

enum ENOVEvtArgType
{
    ENOVEvtArgNil = 0,
    ENOVEvtArgByte,
    ENOVEvtArgShort,
    ENOVEvtArgUnsignedShort,
    ENOVEvtArgInt,
    ENOVEvtArgUnsigned,
    ENOVEvtArgDouble,
    ENOVEvtArgString,
    ENOVEvtArgFixedByteArray,
    ENOVEvtArgFixedShortArray,
    ENOVEvtArgFixedUnsignedShortArray,
    ENOVEvtArgFixedIntArray,
    ENOVEvtArgFixedUnsignedArray,
    ENOVEvtArgFixedDoubleArray,
    ENOVEvtArgFloat,
    ENOVEvtArgFixedFloatArray,
    ENOVEvtArgObjRef,
    ENOVEvtArgFixedObjRefArray,
    ENOVEvtArgFixedStringArray
};

// **********************************************************************
// * Method characteristics
// * A bit-mask is used for method characteristics:
// *
// * +-----------+-----------+-----------+-----------+
// * |  .  .  .  |  e e e e  | 0   A v B | s s   m m |
// * +-----------+-----------+-----------+-----------+
// *
// * mm  : method type
// * B   : Before bit
// * v   : Veto bit (when set, B is set)
// * A   : After bit
// * eeee: event type (none, public, protected, private)
// **********************************************************************

// Method type
/** @nodoc */
#define ENOVMethodMask     (int)0x0003
/** @nodoc */
enum ENOVMethodType
    {
    ENOVMethod           = 0x0000,
    ENOVMethodClass      = 0x0001,
    ENOVMethodGlobal     = 0x0003
    };

/**
 * Defines Security type used for methods.
 * @param ENOVSecNONE
 *   The method is NOT secured.
 * @param ENOVSecSECURED
 *   The method is secured, and security condition(s) will be associated.
 *   <br><u>Example</u>: <tt>Delete, Modify</tt> methods, etc
 * @param ENOVSecUNCONDITIONAL
 *   The method is secured, but no security condition applies.
 *   <br><u>Example</u>: <tt>Create</tt> methods, global functions.
 * @see ENOVRegisterClassMethod, ENOVRegisterGlobalMethod
**/

enum ENOVSecurityType 
    {
    ENOVSecNONE          = 0x0004,
    ENOVSecSECURED       = 0x0008,
    ENOVSecUNCONDITIONAL = 0x000c
    };

/** @nodoc */
#define ENOVSecurityMask   (int)0x000C

//
// * Event properties:
// * - type (1 to be choosen):
// *   . none if no event is dispatched
// *   . public, protected or private for dispatching type
// * - mode (several combinations):
// *   . after: event is sent after method execution
// *   . before: event is sent before method execution
// *   . vetoable: event is sent before, and clients can refuse execution (veto)
//

/** @nodoc */
#define ENOVEvtMask        0x0f00

/**
 * Defines the event type used for methods.
 * @param ENOVEvtNone
 *   No event is fired.
 * @param ENOVEvtPublic
 *   A public event is fired.
 *   <br>Any client can subscribe to event, with no restriction.
 * @param ENOVEvtProtected
 *   A protected event is fired.
 *   <br>Only client belonging to <a href=ENOVRegisterPackage.htm>package</a>
 *   inheriting from the publisher's package can subscribe.
 * @param ENOVEvtPrivate
 *   A private event is fired.
 *   <br>Only client belonging to the same <a href=ENOVRegisterPackage.htm>package</a> than the publisher can subscribe.
 * @see ENOVEvtModeType, ENOVRegisterPackage, ENOVRegisterClassMethod, ENOVRegisterGlobalMethod
**/
enum ENOVEvtType 
    {
    ENOVEvtNone          = 0x0100,
    ENOVEvtPublic        = 0x0200,
    ENOVEvtProtected     = 0x0400,
    ENOVEvtPrivate       = 0x0800
    };

/** @nodoc */
#define ENOVEvtModeMask    0x0070
/**
 * Defines the event mode used for methods.
 * @param ENOVEvtModeBefore
 *   The event if fired BEFORE method is executed.
 * @param ENOVEvtModeVeto
 *   The event if fired BEFORE method is executed, and is vetoable.
 *   If a veto is raised by one of the subscribers, the method is not executed.
 * @param ENOVEvtModeAfter
 *   The event is fired AFTER method is executed.
 * @param ENOVEvtModeStandard
 *   The event is fired during the method's execution.
 * @see ENOVEvtType, ENOVRegisterClassMethod, ENOVRegisterGlobalMethod
**/
enum ENOVEvtModeType
    {
    ENOVEvtModeBefore    = 0x0010,
    ENOVEvtModeVeto      = 0x0030,
    ENOVEvtModeAfter     = 0x0040,
    ENOVEvtModeStandard  = 0x0040
    };


//=============================================================================
// NEW REGISTRATION METHODOLOGY
//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegEvtStream;
/** @nodoc */
class ExportedByVX0FACTO ENOVRegEvtStreamArg;
/** @nodoc */
class ExportedByVX0FACTO ENOVRegPackagedMethod;
/** @nodoc */
class ExportedByVX0FACTO ENOVRegDictionary;
/** @nodoc */
class ExportedByVX0FACTO CATVpmLicenceInfo;

//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegObject
{
  public:
    ENOVRegObject(const char *iName, const char *iFile=NULL);
    ~ENOVRegObject();
    const CATString &getName() const;
    const char *getFileName() const;
    const ENOVRegDictionary *getPackage() const;
  protected:
//    ENOVRegObject();
    friend class ENOVRegDictionary;
    HRESULT setPackage(ENOVRegDictionary *);
    CATString _name;
    const char * _file;
    ENOVRegDictionary    *_package;
};

//=============================================================================
// Event data (Stream) definition
//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegClass : public ENOVRegObject
{
  public:
    ENOVRegClass(const char *iName, const char *iFile=NULL);
    ~ENOVRegClass();

    // returns (by const ref) the list(IID*) of all IID of that class
    const CATListPV &getAllIID() const;

	 const CATListPV &getAllIIDNames() const; // rcb Jul/21/2000

    // returns (by const ref) the list(ENOVPackagedMethod*) of
    // all registered (packaged) methods for that class
    const CATListPV &getAllMethods() const;

    // search for a particular method (by name)
    HRESULT getMethod(const CATString &iMethodName,
			    ENOVRegPackagedMethod**oClassMethod);
  protected:
    friend class ENOVRegDictionary;
	void Add(IID *iIID,const char* iInterfaceName); // modif rcb Jul/21/2000
    HRESULT Add(ENOVRegPackagedMethod *iMethod);
    CATListPV _iids;
	 CATListPV _intfNames;
    CATListPV _methods;
};

//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegClassInterface
{
  public:
	 ENOVRegClassInterface(const char *iName, IID iIID, const char *iFile, const char* iInterfaceName); // rcb jul/21/2000

	 ENOVRegClassInterface(const char *iName, IID iIID, const char *iFile);
};

//=============================================================================
// Event data (Stream) definition
//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegEvtStream : public ENOVRegObject
{
  public:
    ENOVRegEvtStream(const char *iName, const char *iFile);
    ~ENOVRegEvtStream();

    // returns (by const ref) the list(ENOVRegEvtStreamArg*) of that stream
    const CATListPV &getArgs() const;

    // returns true is this is the NULL stream
    int isNull() const;

    // returns true is this is the DEFAULT stream
    int isDefault() const;
  protected:
    friend class ENOVRegDictionary;
    void AddArg(ENOVRegEvtStreamArg *iArg);
    CATListPV _args;
};

//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegEvtStreamArg : public ENOVRegObject
{
  public:
    ENOVRegEvtStreamArg(
	const char *       iArgName,
	ENOVEvtArgType    iArgType,
	const char *       iStream,
	const char *       iFile);
    ~ENOVRegEvtStreamArg();

    // returns the argument type
    ENOVEvtArgType getType();
    const char * getStreamName();
  protected:
    ENOVEvtArgType _type;
    CATString      _stream;
};


//=============================================================================
// Methods definition
//=============================================================================


/** @nodoc */
class ExportedByVX0FACTO ENOVRegMethod : public ENOVRegObject
{
public:
    // declarative section
//    ENOVRegMethod(const char *iMeth, ENOVRegEvtStream *iStrm);
    ENOVRegMethod(const char *iMeth, const char *iStrm, const char *iFile);

    // returns the method's event data definition (stream)
    ENOVRegEvtStream *getEventData() const;
    CATString getEventDataName() const;

    // returns the method type (generic, classMethod, globalMethod)
    int getMethodType() const;

    // other ClassMethod characteristic checking
    // returns true if characteristic is set
    int hasProperty(int) const;

protected:
    friend class ENOVRegDictionary;
    HRESULT setEventData(ENOVRegEvtStream *iStream);
    int               _type;
    CATString         _stream_name;
    ENOVRegEvtStream *_stream;
};


//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegGenericMethod : public ENOVRegMethod
{
public:
    // declarative section
//    ENOVRegGenericMethod(const char *iMeth, ENOVRegEvtStream *iStrm);
    ENOVRegGenericMethod(const char *iMeth, const char *iStream, const char *iFile);
};


//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegPackagedMethod : public ENOVRegMethod
{
public:
// Registering a Class::Method
    ENOVRegPackagedMethod(
	    const char *iCMID,
	    const char *iClass,
	    const char *iMeth,
	    const char *iStrm,
	    const char *iFile);
//	    ENOVRegGenericMethod &iMeth,
//	    ENOVRegEvtStream &iStrm);
//	    ENOVRegEvtStream *iStrm);

// Information retrieval
    // ClassMethod ID (compatible with PACKAGING option UID)
    const CATString &getCMID() const;
    // Class name
    const CATString &getClass() const;
    // associated package (ENOVRegDictionary)
//    const ENOVRegDictionary *getPackage() const;
    // ClassMethod security flag
    // returns: true if method is SECURED (unconditional or secured(conditional))
    int isSecured() const;
    // returns: true if method is AUTHORIZED
    char isAuthorized() const;
    // returns security mode (none, secured, unconditional)
    int getSecurityMode() const;
    // ClassMethod event type
    // returns: a ENOVEvtType enum value
    int getEventType() const;
    // ClassMethod event mode
    // returns: a ENOVEvtMode enum value
    int getEventMode() const;

protected:
    friend class ENOVRegDictionary;
//    HRESULT setPackage(ENOVRegDictionary *);
    CATString        _CMID;
    CATString        _class;
    ENOVRegGenericMethod *_method;
    char             _auth;
//    ENOVRegDictionary    *_package;
};


//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegGlobalMethod : public ENOVRegPackagedMethod
{
public:
// Registering a Class::Method
    ENOVRegGlobalMethod(
	const char *iCMID,
	const char *iMethod,
	int iClassMethType,
	const char *iStream,
	const char *iFile);
//	ENOVRegGenericMethod &iMethod,
//	int iClassMethType,
//	ENOVRegEvtStream &iStream);
//	ENOVRegEvtStream *iStream);
};

//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegClassMethod : public ENOVRegPackagedMethod
{
public:
// Registering a Class::Method
    ENOVRegClassMethod(
	const char *iCMID,
	const char *iClass,
	const char *iMethod,
	int iClassMethType,
	const char *iStream,
	const char *iFile);
//	ENOVRegGenericMethod &iMethod,
//	int iClassMethType,
//	ENOVRegEvtStream &iStream);
//	ENOVRegEvtStream *iStream);
};


//=============================================================================
// Dictionary definition
//=============================================================================

/** @nodoc */
class ExportedByVX0FACTO ENOVRegDictionary : public ENOVRegObject
{
  public:
  //
    ENOVRegDictionary (const char* iPackageName, const char *iFile, int iStandard=0);  
    ~ENOVRegDictionary ();  
    static HRESULT findEventData(
			    const CATString &iStreamName,
			    ENOVRegEvtStream ** oStream);
    static HRESULT findClassFromLateType(
			    const CATString &iClass,
			    ENOVRegClass ** oClass);
    static HRESULT findClassMethodFromLateType(
			    const CATString &iClass,
			    const char   * iMethod,
			    ENOVRegPackagedMethod ** oClassMethod);
    // returns the list(ENOVRegPackagedMethod*) of all registered methods
    static const CATListPV &getAll();
    // returns the list(ENOVRegDictionary*) of all registered packages
    static const CATListPV &getAllPackages();
    // returns the list(ENOVRegClass*) of all registered classes
    static const CATListPV &getAllClasses(const char *iPack=NULL);
    // returns the list(ENOVRegPackagedMethod*) of all package's methods
    const CATListPV &getClassMethods();
    // finds the list(ENOVRegPackagedMethod*) of all registered methods
    // matching class and/or method criteria
    static HRESULT getAllClassMethod(
			    const CATString &iClass,
			    const CATString &iMethod,
			    CATListPV     &oMethList);
    // finds the list(IID*) of all IIDs of the class
    // matching class name criteria
    static HRESULT getAllClassIID(
			    const CATString &iClass,
			    CATListPV     & oIIDList);
    static HRESULT getAllClassIIDNames(
			    const CATString &iClass,
			    CATListPV     & oIIDNameList);
    static HRESULT RegisterAll();
    static HRESULT UnregisterAll();
  protected:
    friend class ENOVRegEvtStream;
    friend class ENOVRegEvtStreamArg;
    friend class ENOVRegClassInterface;
    friend class ENOVRegPackagedMethod;
    friend class ENOVRegGenericMethod;
    friend class CATVpmLicenceInfo;
    static HRESULT authorize(const char *iCMID);
    static HRESULT Register(ENOVRegDictionary*);
    static HRESULT Register(ENOVRegEvtStream*);
    static HRESULT Register(ENOVRegEvtStreamArg*);
    static HRESULT Register(ENOVRegPackagedMethod*);
    static HRESULT Register(ENOVRegGenericMethod*);
	static HRESULT Register(const char *iName,IID *iIID,const char * iInterfaceName,const char *iFile=NULL); // rcb jul/21/2000
  private:
    static HRESULT searchObjectInList(
				const CATString &iName,
				const CATListPV &iList,
				ENOVRegObject ** oObject);
    static HRESULT searchObjectInList(
				const CATString &iName,
				const char      *iFile,
				const CATListPV &iList,
				ENOVRegObject ** oObject);
    static ENOVRegClass * getValidClass(const CATString &iClass, const char *iFile=NULL);
    // lists
    static CATListPV _Classes;
    static CATListPV _ClassMethods;
    static CATListPV _Methods;
    static CATListPV _Streams;
    static CATListPV _StreamArgs;
    static CATListPV _Packages;
    static int       _ref;
    HRESULT add(ENOVRegPackagedMethod*);
    HRESULT add(ENOVRegClass*);
    CATListPV _myClasses;
    CATListPV _myClassMethods;
};   



#endif      

