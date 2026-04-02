// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMSecurity:
//   VPM Security Header for Programmers
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// May 99   Creation                                   J.Poitreau
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifndef _VPMSecurity_H_
#define _VPMSecurity_H_

class CATVpmInfo;
#include "GUIDVPMInterfaces.h"
#include "GUIDVPMPosManager.h"

#include "ENOVRegister.h"



// ------------------------------------------------------------------
// VPM Security Macros for Secured Programming purpose.
// <p>
// <u>IMPORTANT NOTICE</u>:
// Programming Security must be done using macros listed bellow, not using:
// <ul>
//  <li>- Security Controller class defined in the present document,
//  <li>- Security Manager defined in VPMInterfaces framework.
// </ul>
//
// NO SUPPORT CAN BE GIVEN TO PROGRAMS WHICH ARE NOT USING MACROS
// LISTED BELLOW.
//------------------------------------------------------------------



/**
 * Declares an object's method as <b>secured</b>.
 * <p><b>Role</b>: This macro controls access to the object's method
 *              where it is implemented.
 *
 * <p><b>Precondition</b>:<ul>
 *    <li>The class must inherit from CATBaseUnknown</li>
 *    <li>The class must be a VPMObject (tie to @href CATIVpmFactoryObject )</li>
 * </ul>
 *
 * <b>Usage</b>:<ul>
 *    <li>It must be used in a non static class method body
 *        (it is using <i>this</i>)</li>
 *    <li>It must be used at the beginning of the method</li>
 *    <li>The (class,iMethod) must be declared using
 *        <a href=ENOVRegisterClassMethod.htm>ENOVRegisterClassMethod</a> macro,
 *         with <a href=ENOVSecurityType.htm>ENOVSecSECURED</a> characteristic
 *        (<i>class</i> being one of the classes of <i>this</i>' classes hierarchy).</li>
 * </ul>
 *
 * <b>Example</b>:
 * <table bgcolor=#fefedf><tr><td><pre>
 * void myClass::aSecuredMethod(...)
 * {
 *   HRESULT hr = S_OK;
 *   VPMSecuredMethod(aSecuredMethod,&amp;hr);
 *   if (<a href=VPM_ACCESS_GRANTED.htm>VPM_ACCESS_GRANTED</a>(hr)) {
 *      <font color=red>// OK! Let's continue ...</font>
 *   }
 * }</pre></td></tr></table>
 *
 * @param iMeth
 *    The object's method name.
 *    <br>Warning! It must be non-quoted string (symbol, e.g: <tt>Delete, Modify,</tt> etc).
 * @param oHres
 *    A pointer on the HRESULT code.
 * @see VPMCheckingObjectSecuredMethod, VPM_ACCESS_GRANTED, VPM_ACCESS_DENIED
**/
#define VPMSecuredMethod(iMeth,oHres)\
VPMSCControl __varSM_##iMeth((CATBaseUnknown*)this,#iMeth,oHres)


/**
 * @nodoc
 * Controls Access to a factory <b>secured</b> function
 *
 * Parameters:
 * - classe: string representing the object class name
 * - meth  : string representing the object factory method (Create, etc)
 * - hres  : pointer on a HRESULT code
**/
#define VPMFactorySecuredMethod(classe,meth,hres)\
VPMGenericFactorySecuredMethod(#classe,meth,hres)



/**
 * Controls Access to a factory <b>secured</b> function.
 * <p><b>Role</b>: This macro controls global access to a class method.
 *              <br>A global access means that no condition is checked
 *              (even when a condition is defined in privileges),
 *              as with <tt>Create</tt> method.
 *
 * <p><b>Usage</b>:<ul>
 *    <li>It must be used at the beginning of the method</li>
 *    <li>The (iClass,iMethod) must be declared using <a href=ENOVRegisterClassMethod.htm>ENOVRegisterClassMethod</a> macro, with <a href=ENOVSecurityType.htm>ENOVSecUNCONDITIONAL</a> characteristic</li>
 * </ul>
 * <b>Example</b>:
 * <table bgcolor=#fefedf><tr><td><pre>
 * void myFactory::aCreationMethod(const char *iClass)
 * {
 *   HRESULT hr = S_OK;
 *   VPMGenericFactorySecuredMethod(iClass,Create,&amp;hr);
 *   if (<a href=VPM_ACCESS_GRANTED.htm>VPM_ACCESS_GRANTED</a>(hr)) {
 *      <font color=red><i>// OK! Let's continue ...</i></font>
 *   }
 * }</pre></td></tr></table>
 *
 * @param iClass
 *    The class name (as a QUOTED string, e.g: <tt>"ENOVIA_<i>myClass</i>"</tt>)
 * @param iMeth
 *    The object's method name.
 *    <br>Warning! It must be non-quoted string (symbol, e.g: <tt>Create</tt>)
 * @param oHres
 *    A pointer on the HRESULT code.
 * @see VPMCheckingGlobalMethod, VPMCheckingObjectSecuredMethod, VPMSecuredMethod, VPM_ACCESS_GRANTED, VPM_ACCESS_DENIED
**/
#define VPMGenericFactorySecuredMethod(iClass,iMeth,oHres)\
VPMSCControl __varGFM_##iMeth(iClass,#iMeth,oHres)



/**
 * Controls Access to the <b>secured</b> method of an object.
 * <p><b>Role</b>: This macro controls access to an object's method.
 *
 * <p><b>Precondition</b>:<ul>
 *    <li><i>iPtr</i> must be a pointer on a <tt>CATBaseUnknown</tt> object.</li>
 *    <li><i>iPtr</i> must be a VPMObject (tie to @href CATIVpmFactoryObject )</li>
 * </ul>
 *
 * <p><b>Usage</b>:<ul>
 *    <li>It must be used at the beginning of the method</li>
 *    <li>The (class,iMethod) must be declared using
 *        <a href=ENOVRegisterClassMethod.htm>ENOVRegisterClassMethod</a> macro,
 *        with <a href=ENOVSecurityType.htm>ENOVSecSECURED</a> characteristic
 *        (<i>class</i> being one of the classes of iPtr's classes hierarchy).</li>
 * </ul>
 * <b>Example</b>:
 * <table bgcolor=#fefedf><tr><td><pre>
 * void myFactory::DeleteAGivenObject(CATIVpmFactoryObject *iObj)
 * {
 *   HRESULT hr = S_OK;
 *   VPMCheckingObjectSecuredMethod(iObj,Delete,&amp;hr);
 *   if (<a href=VPM_ACCESS_GRANTED.htm>VPM_ACCESS_GRANTED</a>(hr)) {
 *      <font color=red><i>// OK! Let's continue ...</i></font>
 *   }
 * }</pre></td></tr></table>
 *
 * @param iPtr
 *    A pointer on the object to check.
 * @param iMeth
 *    The object's method name.
 *    <br>Warning! It must be non-quoted string (symbol, e.g: <tt>Create</tt>)
 * @param oHres
 *    A pointer on the HRESULT code.
 * @see VPMCheckingGlobalMethod, VPMGenericFactorySecuredMethod, VPMSecuredMethod, VPM_ACCESS_GRANTED, VPM_ACCESS_DENIED
**/
#define VPMCheckingObjectSecuredMethod(iPtr,iMeth,oHres)\
VPMSCControl __varCOSM_##iMeth((CATBaseUnknown*)iPtr,#iMeth,oHres)


/**
 * Controls Access to a global <b>secured</b> function.
 * <p><b>Role</b>: This macro controls global access to a global function.
 *              <br>A global function relates to NO class (e.g: <tt>Print</tt>, etc)
 *
 * <p><b>Usage</b>:<ul>
 *    <li>It must be used at the beginning of the method.</li>
 *    <li>The global method must be declared using <a href=ENOVRegisterGlobalMethod.htm>ENOVRegisterGlobalMethod</a> macro</li>
 * </ul>
 * <p><a name=AccessExample><b>Example</b></a>:
 * <table bgcolor=#fefedf><tr><td><pre>
 * void myServices::Print(...)
 * {
 *   HRESULT hr = S_OK;
 *   VPMCheckingGlobalMethod(Print,&amp;hr);
 *   if (<a href=VPM_ACCESS_GRANTED.htm>VPM_ACCESS_GRANTED</a>(hr)) {
 *     <font color=red>// access is granted!</font>
 *   }
 *   else if (<a href=VPM_ACCESS_DENIED.htm>VPM_ACCESS_DENIED</a>(hr)) {
 *     <font color=red>// access is denied!</font>
 *   }
 *   else {
 *     <font color=red>// an error occured (global method not declared, etc).</font>
 *   }
 * }</pre></td></tr></table>
 *
 * @param iMeth
 *    The global function's name.
 *    <br>Warning! It must be non-quoted string (symbol, e.g: <tt>Print, Tools,</tt> etc)
 * @param oHres
 *    A pointer on the HRESULT code.
 * @see VPMGenericFactorySecuredMethod, VPMCheckingObjectSecuredMethod, VPMSecuredMethod, VPM_ACCESS_GRANTED, VPM_ACCESS_DENIED
**/
#define VPMCheckingGlobalMethod(iMeth,oHres)\
VPMGenericFactorySecuredMethod("Global",iMeth,oHres)



/**
 * Checks whether access is denied.
 * <b>Usage</b>:
 *    <br>To be used as a logical expression (in <b>if</b> statement, etc).
 *    <br>Click <a href=VPMCheckingGlobalMethod.htm#AccessExample>here</a> to see a complete example.
 * @param hres
 *    A HRESULT code
 * @see VPM_ACCESS_GRANTED
**/
#define VPM_ACCESS_DENIED(hres)  (hres==S_FALSE)
/**
 * Checks whether access is granted.
 * <b>Usage</b>:
 *    <br>To be used as a logical expression (in <b>if</b> statement, etc).
 *    <br>Click <a href=VPMCheckingGlobalMethod.htm#AccessExample>here</a> to see a complete example.
 * @param hres
 *    A HRESULT code
 * @see VPM_ACCESS_DENIED
**/
#define VPM_ACCESS_GRANTED(hres) (hres==S_OK)



/**
 * @nodoc
 * Security Controller class
 *
 * IMPORTANT !
 * Usage is exclusively reserved within 'Programming-with-Macros' context.
 * This class cannot be considered as an interface and is subject to change
 * at any time without any notice !
**/

class ExportedByGUIDVPMPosManager VPMSCControl
{
  public:
    VPMSCControl(
		 CATBaseUnknown *iVPMObj,
		 const char     *iRegistered,
		 HRESULT        * oResult
		);
    VPMSCControl(
		 const char     *iClass,
		 const char     *iRegistered,
		 HRESULT        *oResult
		);
    ~VPMSCControl();
  private:
    // testing nested checks deep
    int tooDeep();
    // build process from VPMobject (or class) and method
    CATString toProcess(const ENOVRegPackagedMethod &iMeth);
    // build process from VPMobject (or class) and method
    HRESULT testParam(const char *, const char *, CATVpmInfo &);

  private:
    static long      _deep;
    HRESULT       *_hr;
};

#endif

