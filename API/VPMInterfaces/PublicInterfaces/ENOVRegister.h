// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// ENOVRegister:
//   ENOVIA Method/Events Register Header for Programmers
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Sep 99   Creation                                   J.Poitreau
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifndef _ENOVRegister_H_
#define _ENOVRegister_H_

#include "GUIDVPMInterfaces.h"
#include "GUIDVPMPosManager.h"

#include "ENOVRegDictionary.h"


#endif


// ------------------------------------------------------------------
// OLD VPM Security Processes Registration macros
// ------------------------------------------------------------------

#undef ExportedByPackage
#undef REG_DECL
#undef ENOVRegisterPackage
#undef ENOVRegisterEventData
#undef ENOVRegisterEventArg
#undef ENOVRegisterMethod
#undef ENOVRegisterClassEventInterface
#undef ENOVRegisterClassMethod
#undef ENOVRegisterGlobalMethod
#undef REGISTER_PROCESS
#undef REGISTER_GLOBAL
#undef REGISTER_METHOD

/** @nodoc */
#ifdef   _WINDOWS_SOURCE
# ifdef   IMPLEMENTS_REGISTRY
#  define  ExportedByPackage   __declspec(dllexport)
# else
#  define  ExportedByPackage   __declspec(dllimport)
# endif
# define   REG_DECL ExportedByPackage
#else
# define   ExportedByPackage
# ifdef   IMPLEMENTS_REGISTRY
#  define  REG_DECL   ExportedByPackage
# else
#  define  REG_DECL   extern ExportedByPackage
# endif
#endif

// ------------------------------------------------------------------
// variable implementation (export)
// ------------------------------------------------------------------
/** @nodoc */
#ifndef SYMB_STR
#define SYMB_STR(x) #x
#endif

#ifdef IMPLEMENTS_REGISTRY

/**
 * Defines a package named <tt>schema</tt>.
 * <b>Role</b>: any business domain (e.g: <tt>ACTION, PRODUCT,</tt> etc) may have an associated package.
 * This package contains all metadata declarations concerning <i>methods</i> of the package's classes:
 * <ul>
 *   <li>methods firing an event</li>
 *   <li>secured methods</li>
 * </ul>
 * <br><a name=PackageExample><b>Example</b></a>:
 *
 * <table bgcolor=#fefedf><tr><td><tt>
 * #define IMPLEMENTS_REGISTRY
 * <br><font color=red>// IMLEMENTS_REGISTRY macro usage is MANDATORY <u>before</u> including ENOVRegister.h</font>
 * <br>#define "ENOVRegister.h"
 * 
 * <p><font color=red>// 1. this package declaration</font>
 * 
 * <br>ENOVRegisterPackage(<i>schema</i>);
 * 
 * <p><font color=red>// 2. Event data streams declarations</font>
 * 
 * <br><a href=ENOVRegisterEventData.htm>ENOVRegisterEventData</a>(<i>stream1</i>);
 * <br><a href=ENOVRegisterEventArg.htm> ENOVRegisterEventArg</a> (<i>stream1,arg1,arg1type</i>);
 * 
 * <p><font color=red>// 3. Global functions and class methods declarations</font>
 * 
 * <br><a href=ENOVRegisterGlobalMethod.htm>ENOVRegisterGlobalMethod</a>(Null,<i>function1</i>,<a href=ENOVSecurityType.htm>ENOVSecUNCONDITIONAL</a>,NULL);
 * <br>ENOVRegisterClassMethod (Null,<i>class1,Create</i>,ENOVSecUNCONDITIONAL,NULL);
 * <br><a href=ENOVRegisterClassMethod.htm>ENOVRegisterClassMethod</a> (Null,<i>class1,Delete</i>,<a href=ENOVSecurityType.htm>ENOVSecSECURED</a>|<a href=ENOVEvtType.htm>ENOVEvtPublic</a>|<a href=ENOVEvtModeType.htm>ENOVEvtBefore</a>,<i>stream1</i>);
 * <br>ENOVRegisterClassMethod (Null,<i>class1,method1</i>,ENOVEvtPublic|ENOVEvtAfter,NULL);
 * <br>ENOVRegisterClassMethod (Null,<i>class2,method1</i>,...);
 * 
 * <p><font color=red>// 4. Classes subscription interfaces declarations</font>
 * 
 * <br><a href=ENOVRegisterClassEventInterface.htm>ENOVRegisterClassEventInterface</a>(<i>class1,interf_class1</i>);
 * </tt></td></tr></table>
 * @param schema
 *   The package name.
 *   The shared library's module implementing this package MUST have the same name.
**/
#define ENOVRegisterPackage(schema) \
  extern "C" ExportedByPackage int fctCreate##schema() {return 1;}   \
  REG_DECL ENOVRegDictionary gDico##schema(SYMB_STR(schema),__FILE__)

/**
 * Defines an event stream into the package.
 * <p><b>Role</b>: Carries extra information about raised events.
 * <br>This stream can then be referenced in methods declarations.
 * <br><b>Precondition</b>: a package must have been previously declared (with @href ENOVRegisterPackage macro).
 * <br>Click <a href=ENOVRegisterPackage.htm#PackageExample>here</a> to see a complete example.
 * @param name
 *   The event stream name.
 * @see ENOVRegisterClassMethod, ENOVRegisterGlobalMethod
**/
#define ENOVRegisterEventData(name)\
  REG_DECL ENOVRegEvtStream ENOVRegVAR(regES,Stream,name)(SYMB_STR(name),__FILE__)

/**
 * Defines an event stream argument.
 * @param stream
 *   The event stream name, defined with @href ENOVRegisterEventData macro.
 * @param name
 *   The event stream argument name.
 * @param type
 *   The event stream argument type.
 *   See @href ENOVEvtArgType for valid types.
**/
#define ENOVRegisterEventArg(stream,name,type)\
  REG_DECL ENOVRegEvtStreamArg ENOVRegVAR(regESA,stream,name)(SYMB_STR(name),type,SYMB_STR(stream),__FILE__)

/** @nodoc */
#define ENOVRegisterMethod(meth,stream)\
  REG_DECL ENOVRegGenericMethod ENOVRegVAR(regP,VPMObject,meth)(SYMB_STR(meth),SYMB_STR(stream),__FILE__)

/**
 * Defines an event interface associated to the class.
 * <p><b>Precondition</b>: a package must have been previously declared (with @href ENOVRegisterPackage macro).
 * <br>Click <a href=ENOVRegisterPackage.htm#PackageExample>here</a> to see a complete example.
 * @param classe
 *   The class name which fires events
 *   (declared by @href ENOVRegisterClassMethod and @href ENOVRegisterGlobalMethod macros).
 * @param interface
 *   The subscription interface for <tt>classe</tt>.
 *   <br>This <tt>interface</tt> is the interface to be implemented by any client to subscribe
 *   to the <tt>classe</tt> object's events.
**/
#define ENOVRegisterClassEventInterface(classe,interface)\
  REG_DECL ENOVRegClassInterface ENOVRegVAR(regI,classe,interface)(SYMB_STR(classe),IID_##interface,__FILE__,#interface)

/**
 * Defines a class method.
 * <br><b>Precondition</b>: a package must have been previously declared (with @href ENOVRegisterPackage macro).
 * <br>Click <a href=ENOVRegisterPackage.htm#PackageExample>here</a> to see a complete example.
 * @param cmid
 *   A reserved parameter. When customized, it must be set to <tt>NULL</tt> value.
 * @param classe
 *   The class name.
 * @param meth
 *   The method name.
 * @param type
 *   Defines the class method characteristics (security and/or event).
 *   They can be combined with <tt>|</tt> (pipe) character.
 *   <br>See also:
 *   <ul>
 *    <li>@href ENOVSecurityType for security type</li>
 *    <li>@href ENOVEvtType for event types</li>
 *    <li>@href ENOVEvtModeType for event type modes</li>
 *   </ul>
 *   <br><u>Example</u>: <tt>ENOVSecSecured|ENOVEvtPublic|ENOVEvtModeVeto|ENOVEvtModeAfter</tt>
 *   <br>means:
 *   <ul>
 *    <li>the method is secured, and has security condition(s) is(are) associated</li>
 *    <li>a public event is fired before (moreover, vetoble) and after the method's execution</li>
 *   </ul>
 * @param stream
 *   The event stream name.
 *   <br><b>Legal value</b>: if no event is fired by macro, this argument should have <tt>Null</tt> value.
 *   <br>Otherwise, the name should have been defined with @href ENOVRegisterEventData macro.
**/
#define ENOVRegisterClassMethod(cmid,classe,meth,type,stream)\
  REG_DECL ENOVRegClassMethod ENOVRegVAR(regM,classe,meth)(#cmid,SYMB_STR(classe),SYMB_STR(meth),type,SYMB_STR(stream),__FILE__)

/**
 * Defines a global method.
 * <br><b>Precondition</b>: a package must have been previously declared (with @href ENOVRegisterPackage macro).
 * <br>Click <a href=ENOVRegisterPackage.htm#PackageExample>here</a> to see a complete example.
 * @param cmid
 *   A reserved parameter. When customized, it must be set to <tt>NULL</tt> value.
 * @param meth
 *   The global function name.
 * @param type
 *   Defines the global function characteristics (security and/or event).
 *   They can be combined with <tt>|</tt> (pipe) character.
 *   <br>See also:
 *   <ul>
 *    <li>@href ENOVSecurityType for security type
 *        <br><b>Legal value</b>: ENOVSecUNCONDITIONAL is the only valid value.</li>
 *    <li>@href ENOVEvtType for event types</li>
 *    <li>@href ENOVEvtModeType for event type modes</li>
 *   </ul>
 *   <br><u>Example</u>: <tt>ENOVSecUNCONDITIONAL|ENOVEvtPublic|ENOVEvtModeBefore</tt>
 *   <br>means:
 *   <ul>
 *    <li>the function is secured (no condition applies)</li>
 *    <li>a public event is fired before the function's execution</li>
 *   </ul>
 * @param stream
 *   The event stream name.
 *   <br><b>Legal value</b>: if no event is fired by macro, this argument should have <tt>Null</tt> value.
 *   <br>Otherwise, the name should have been defined with @href ENOVRegisterEventData macro.
**/
#define ENOVRegisterGlobalMethod(cmid,meth,type,stream)\
  REG_DECL ENOVRegGlobalMethod ENOVRegVAR(regG,Global,meth)(#cmid,SYMB_STR(meth),type,SYMB_STR(stream),__FILE__)

#else

// ------------------------------------------------------------------
// variable extern-declaration (import)
// ------------------------------------------------------------------
// new
# define ENOVRegisterPackage(schema) \
  extern "C" ExportedByPackage int fctCreate##schema(); \
  REG_DECL ENOVRegDictionary gDico##schema

# define ENOVRegisterEventData(name)\
  REG_DECL ENOVRegEvtStream ENOVRegVAR(regES,Stream,name)

# define ENOVRegisterEventArg(stream,name,type)\
  REG_DECL ENOVRegEvtStreamArg ENOVRegVAR(regESA,stream,name)

# define ENOVRegisterMethod(meth,stream)\
  REG_DECL ENOVRegGenericMethod ENOVRegVAR(regP,VPMObject,meth)

# define ENOVRegisterClassEventInterface(classe,interface)\
  REG_DECL ENOVRegClassInterface ENOVRegVAR(regI,classe,interface)

# define ENOVRegisterClassMethod(cmid,classe,meth,type,stream)\
  REG_DECL ENOVRegClassMethod ENOVRegVAR(regM,classe,meth)

# define ENOVRegisterGlobalMethod(cmid,meth,type,stream)\
  REG_DECL ENOVRegGlobalMethod ENOVRegVAR(regG,Global,meth)

#endif

