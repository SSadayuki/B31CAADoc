// COPYRIGHT DASSAULT SYSTEMES 1997
//=============================================================================
//
// CATIVpmSCLogin:
//  <b>Security/Role</b> Manager protected interface.
//  This interface provides basic methods to be used by login facility
//  (autologin or login panel, for example)
//
//=============================================================================
// Nov 97  J.Poitreau
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
**/

#ifndef _CATIVpmSCLogin_H_
#define _CATIVpmSCLogin_H_
//
#include "CATBaseUnknown.h"
#include "CORBAAnyDef.h"
#ifdef CATIAV5R17
#include "CATListOfCATUnicodeString.h"
#endif
#include "CATIVpmPEPerson.h"
#include "CATIVpmPERole.h"
#include "CATIVpmPEOrganization.h"
#include "GUIDVPMInterfaces.h"

/**
 * Defines Security role choice policy during login.
 * @param VPMLoginDEFAULT
 *   Takes the last role, or the first role valid if last role is not any
 *   more effective.
 * @param VPMLoginFIRST_FOUND
 *   Takes the first valid role from roles list.
 * @param VPMLoginFIRST_ADMIN
 *   Takes the first valid VPMADMIN role.
 * @param VPMLoginEXACT_ROLE
 *   Takes the role which name is given in parameter (see <a href=CATIVpmSCLogin.htm#Login>Login</a> method).
 * @param VPMLoginALL_ROLES
 *   Not yet used.
 * @param VPMLoginEXACT_ROLES
 *   Not yet used.
**/
enum VPMLoginPolicy {
  VPMLoginDEFAULT = 0,
  VPMLoginFIRST_FOUND,
  VPMLoginFIRST_ADMIN,
  VPMLoginEXACT_ROLE,
  VPMLoginALL_ROLES,
  VPMLoginEXACT_ROLES
};

//
// -------------------------------
// Definition de la classe Interface
// -------------------------------
//                             

/** @nodoc */
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmSCLogin;
#else
extern "C" const IID IID_CATIVpmSCLogin;
#endif

//-------------------------------------------------------------------

/**
 * CATIVpmSCLogin is one of the Security Management interfaces.
 * <p>
 * It is used to :
 * <ol>
 *  <li>authenticate user against People database.</li>
 *  <li>initialize user's Security profile (privileges, mask, licensing, etc).</li>
 *  <li></li>
 * </ol>
 * <p>
 * <u>Usage Notes:</u>
 *   <ul>
 *    <li>use first <tt>Login(...)</tt> to initialize login process
 *        and verify that given user is recognized into P&amp.O database</li>
 *    <li>then, use <tt>EndLogin()</tt></li>
 *   </ul>
 *
 * <p><a name=Example><b>Example</b></a>:
 * <table bgcolor=#fefedf><tr><td><pre>
 * <font color=red>// Suppose the exact role id (format: <i>name.org</i>)is provided there:</font>
 * CATUnicodeString sRoleId = <i>a role</i>;
 * HRESULT hr = S_OK;
 * VPMSession * pSession = VPMSession::OpenSession();
 * if (pSession) {
 *    <font color=red>// Retrieves main factory</font>
 *    CATIVpmFactoryManager_var vFM;
 *    if (pSession->getVPMObjectFactory(vFM)==S_OK && !!vFM) {
 *       <font color=red>// Retrieves security login (extension of factory)</font>
 *       CATIVpmSCLogin_var vLogin = vFM;
 *       if (!!vLogin) {
 *          <font color=red>// Login procedure</font>
 *          CATUnicodeString          sNone;
 *          hr = vLogin->Login(sNone, sNone,
 *                             <a href=VPMLoginPolicy.htm>VPMLoginEXACT_ROLE</a>, sRoleId);
 *          if (FAILED(hr)) {
 *            <i>aborting session...</i>
 *          }
 *       }
 *    }
 * }</pre></td></tr></table>
 *
 * @see VPMSession, CATIVpmFactoryManager
 */
// @see CATIVpmSCManager
// @see CATIVpmSCAdministration
class ExportedByGUIDVPMInterfaces CATIVpmSCLogin : public CATBaseUnknown   
{
	CATDeclareInterface;
	//
public:
/**
 * Returns database(s) authentication mode.
 * <p>When database is authenticated (also named SERVER mode), User and
 * Password must be used while connecting to the database,
 * unless the database is using a <i>single connection user</i>
 * (which is the default mode at installation).
 *
 * @return
 *    1 (true) when database is authenticated, 0 otherwise.
**/
    virtual int IsAuthenticated() = 0;
/**
 * @nodoc
 * Returns SSO (Single Sign On) activation mode.
 * When SSO is active, User and/or Password can be retrieve from
 * <i>credential</i> to automatically authenticate user.
 * Program does not need to prompt for user and/or password.<br>
 * Notice that SSO has meanings when used with SERVER authentication mode.
 *
 * @return
 *    1 (true) when SSO is active, 0 otherwise.
 *
 * @see CATIVpmSCSingleSignOn
**/
    virtual int SingleSignOnIsActive() = 0;

/**
 * @nodoc
 * Set user and password (in <b>server</b>authentication mode) to initialize
 * "manual" login procedure.
 *
 * @param iUser
 *        user name
 * @param iPwd
 *        user password
 * <p>
 *   In authentication mode :
 *   <ol>
 *    <li><u>Server</u>: sets the database user / password
 *    <li><u>Server with single DB user</u>: user and password are not used.<br>
 *    <li><u>Client</u>: user and password are not used.<br>
 *      System user is automatically taken.
 *   </ol>
 *   This mode is given by CATIVpmSCManager::IsAuthenticated() method.
 * @return
 *     0 if ok <br>
 *     1 when no connection OR invalid user/password <br>
 *     2 when user is not a VPM person <br>
 *    -1 on other errors
 * <p>
 *   Note: if ok, you can retrieve associated <b>CATIVpmPEPerson</b> using GetLoginUser()
 *
 * @see CATIVpmPEPerson
 * @see CATIVpmSCManager#IsAuthenticated()
**/
	virtual int SetLoginUserPassword(
					CATUnicodeString iUser,
					CATUnicodeString iPwd) = 0;

/**
 * @nodoc
 * Set the role associated to the login person during the session
 * @param iRole
 *        role name.<br>
 *        This role MUST be one of the logged in person's roles.<br>
 *        Such a role can be retrieved using CATIVpmPEPerson::GetRoleList()
 *        (inherited from CATIVpmPEPeople::GetRoleList()).

 *
 * @see CATIVpmPEPeople#GetRoleList()
 * @see CATIVpmPERole
**/
	virtual HRESULT SetLoginRole(CATIVpmPERole_var iRole) = 0;

/**
 * @nodoc
 * Validates the login procedure.
 *
 * <p>EV5 Licensing will be validated there.
 * <br>Notice that login cannot be completed (and security correctly initialized) if
 * ONE of these steps failed (<tt>Login, EndLogin</tt>).
 * <p>In such a case, ANY SECURITY CHECK WILL FAIL !
**/
	virtual int EndLogin() = 0;

/**
 * @nodoc
 * Performs first step of login procedure.
 * This method is equivalent to using:
 * <ul>
 *  <li>SetLoginUserPassword(u,p)
 *  <li>SetLoginRole(),
 * </ul>
 * @param iUser
 *        user name
 * @param iPwd
 *        user password
 * <p>
 *   In authentication mode :
 *   <ol>
 *    <li><u>Server</u>: sets the database user / password
 *    <li><u>Client</u>: user and password are not used.<br>
 *      System user is automatically taken.
 *   </ol>
 * @param iRoleChoicePolicy
 *        enable the role choice strategy.
 *        Available possibilities are given by enum <a href=VPMLoginPolicy.htm>VPMLoginPolicy</a>
 *        <ul>
 *         <li><b>VPMLoginDEFAULT</b>: selects the last/current person's role if available,
 *             the first found otherwise.
 *         <li><b>VPMLoginFIRST_FOUND</b>: selects the first person's role.
 *         <li><b>VPMLoginFIRST_ADMIN</b>: selects the first person's ADMIN role
 *         <li><b>VPMLoginEXACT_ROLE</b>: selects the person's role, given by iRoleName
 *        </ul>
 * @param iRoleName
 *        role name concatenated to its organization id (separated by a .(dot)).
 *        This argument must be specified with <b>VPMLoginEXACT_ROLE</b> policy.
 * @param iProjectName
 *        OPTIONAL project name.
 * @param oCookie
 *        a "token" associated to that login.
 *        This cookie is not persistent, but that be given to Client application to
 *        let them use Login(iCookie) method.
 * @param oPerson
 *        selected VPM person
 * @param oRole
 *        selected VPM role
 * @param oRoleOrg
 *        selected VPM role's organization
 * @param oManager
 *        the manager of the selected VPM organization
 *
 * @return
 *      HRESULT value. FAILED when login could not be completed.
 *
 * @see CATIVpmPEOrganization
 * @see CATIVpmPEPerson
 * @see CATIVpmPERole
**/
	virtual HRESULT Login(
			      CATUnicodeString           iUser,
			      CATUnicodeString           iPwd,
			      VPMLoginPolicy             iRoleChoicePolicy,
			      CATUnicodeString           iRoleName,
			      CATUnicodeString           iProjectName,
			      CORBAAny                  &oCookie,
			      CATIVpmPEPerson_var       &oPerson,
			      CATIVpmPERole_var         &oRole,
			      CATIVpmPEOrganization_var &oRoleOrg,
			      CATIVpmPEPerson_var       &oManager
			      ) = 0;
/**
 * @nodoc
 * Performs first step of login procedure.
 * <p>See <a href=#Example>example</a>.
 *
 * @param iUser
 *        user name.
 *        Not any more used.
 * @param iPwd
 *        user password.
 *        Not any more used.
 * @param iRoleChoicePolicy
 *        enable the role choice strategy.
 *        <br>Enumerated possibilities are : <a href=VPMLoginPolicy.htm>VPMLoginPolicy</a>
 * @param iRoleName
 *        role name concatenated to its organization id (separated by a .(dot)).
 *        <br>This argument must be specified with <b>VPMLoginEXACT_ROLE</b> policy.
 * @param oPerson
 *        selected VPM person
 * @param oRole
 *        selected VPM role
 * @param oRoleOrg
 *        selected VPM role's organization
 * @param oManager
 *        the manager of the selected VPM organization
 *
 * @return
 *      HRESULT value. FAILED when login could not be completed.
 *
**/
// @see CATIVpmPEOrganization
// @see CATIVpmPEPerson
// @see CATIVpmPERole
	virtual HRESULT Login(
			      CATUnicodeString           iUser,
			      CATUnicodeString           iPwd,
			      VPMLoginPolicy             iRoleChoicePolicy,
			      CATUnicodeString           iRoleName,
			      CATIVpmPEPerson_var       &oPerson,
			      CATIVpmPERole_var         &oRole,
			      CATIVpmPEOrganization_var &oRoleOrg,
			      CATIVpmPEPerson_var       &oManager
			      ) = 0;
/**
 * Performs the complete login procedure.
 * <p>See <a href=#Example>example</a>.
 *
 * @param iUser
 *        user name.
 *        Not any more used.
 * @param iPwd
 *        user password.
 *        Not any more used.
 * @param iRoleChoicePolicy
 *        enable the role choice strategy.
 *        <br>Enumerated possibilities are : <a href=VPMLoginPolicy.htm>VPMLoginPolicy</a>
 * @param iRoleName
 *        role name concatenated to its organization id (separated by a .(dot)).
 *        <br>This argument must be specified with <b>VPMLoginEXACT_ROLE</b> policy.
 *
 * @return
 *      HRESULT value. FAILED when login could not be completed.
 *
**/
	virtual HRESULT Login(
			      CATUnicodeString           iUser,
			      CATUnicodeString           iPwd,
			      VPMLoginPolicy             iRoleChoicePolicy,
			      CATUnicodeString           iRoleName
			      ) = 0;

/**
 * @nodoc
 * Retrieve processes granted by the privileges granted due to the login procedure.
 * Privileges list is initialized when EndLogin() or Login(...) methods succeed.
 *
 * @param oProcList
 *   the list of returned processes (CATIVpmSCProcess objects)
 *
 * @return
 *   a HRESULT value. If SUCEEDED, returns:<br>
 *   <b>S_OK</b> when some granted processes exist,<br>
 *   <b>S_FALSE</b> if there is none.
 *
 * @see CATIVpmSCProcess
 * @see CATIVpmSCPrivilege
**/
    virtual HRESULT GetGrantedLoginProcesses (CATLISTV(CATBaseUnknown_var) &oProcList ) = 0;
/**
 * @nodoc
 * Reset all Login properties - usually called to reset the session.
**/
    virtual HRESULT ResetLogin ( ) = 0;
/**
 * Get login informations.
 *
 * @param oUserId
 *   the current user id
 * @param oCtxId
 *   the current context id (format: role.organization.project)
 * @param oCtxRoleId
 *   the role id of the current context
 * @param oCtxOrgId
 *   the organization id of the current context
 * @param oCtxProjectId
 *   the project id of the current context
**/
    virtual HRESULT GetLoginInfos(CATUnicodeString &oUserId,
				  CATUnicodeString &oCtxId,
				  CATUnicodeString &oCtxRoleId,
				  CATUnicodeString &oCtxOrgId,
				  CATUnicodeString &oCtxProjectId) = 0;
#ifdef CATIAV5R17
/**
 * Set additionnal login parameters.
 *
 * @param iParameterNames
 *   the list of parameter names
 * @param iParameterValues
 *   the list os parameter values
 * @return
 *   S_OK    if succeeded,
 *   S_FALSE in case of error
**/
    virtual HRESULT SetLoginParameters(CATListOfCATUnicodeString &iParameterNames,
				       CATListOfCATUnicodeString &iParameterValues) = 0;
#endif
};



CATDeclareHandler(CATIVpmSCLogin,CATBaseUnknown);



#endif
