// COPYRIGHT Dassault Systemes 2013
//===================================================================
//
// ENOIUPSUserExitsBase.h
// Each CAD Integration needs to derive its Interface from this Interface.
//
//===================================================================
//
// Usage notes:
//     CAD Integrations should derive their CAD specific interface from this.
//     
//===================================================================
#ifndef ENOIUPSUserExitsBase_H
#define ENOIUPSUserExitsBase_H

/**
 * @CAA2Level L0
 * @CAA2Usage U6
 */

#include "ExportedByENOUPSInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"

extern ExportedByENOUPSInterfaces IID IID_ENOIUPSUserExitsBase;


/**
 * Base Interface for all CAD specific interfaces.
 * <b>Role</b>:
 * Each CAD Integration needs to derive its Interface from this Interface.
 * This derivation should be C++ and OM derivation.
 */

class ExportedByENOUPSInterfaces ENOIUPSUserExitsBase: public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
    * UESelectionStatus.
    * @param NotSet
    *   When no action is set the object.
    *   This is the default.
    * @param Included
    *   When object is included in Save scope.
    *   In case of Interactive Save, this can be altered.
    * @param IncludedForced
    *   When object is forced included in Save scope.
    *   Once set, this can't be altered.
    * @param Excluded
    *   When object is excluded from Save scope.
    *   In case of Interactive Save, this can be altered.
    * @param ExcludedForced
    *   When object is forced excluded from Save scope.
    *   Once set, this can't be altered.
    */
    enum UESelectionStatus
    {
        NotSet = 0,
        Included = 1,
        IncludedForced = 2,
        Excluded = 3,
        ExcludedForced = 4
    } ;



    /**
    * User exit is called before actual login.
    *  @return
    *   HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The method succeeds.</dd>
    *     <dt>S_FALSE </dt>
    *     <dd>The method fails and Error is displayed by method itself.</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>The method fails and retuns error.</dd>
    */
    virtual HRESULT ConnectPre() = 0;



    /**
    * User exit is called after login is successfully completed.
    */
    virtual void ConnectPost() = 0;



    /**
    * User exit is called after login is successfully completed User exit is called before documents/objects that come under the save scope are calculated.
    *  @return
    *   HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The method succeeds.</dd>
    *     <dt>S_FALSE </dt>
    *     <dd>The method fails and Error is displayed by method itself.</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>The method fails and retuns error.</dd>
    */

    virtual HRESULT SaveStartPre() = 0;


    
    /**
	 * User exit is called after Scope for the save is calculated. 
     * Takes input as lists which correspond to documents/objects that come under the save scope.
     * All lists have same size.
     * List contains both included & excluded nodes.
     * In case of advanced save, user exit is called before the dialog is displayed.
	 * @param ilType
	 *   List of Type For documents/objects.
	 * @param ilName
	 *   List of Type For documents/objects.
     * @param ilRevision
	 *   List of Revision For documents/objects.
     * @param ilFullPath
	 *   List of Revision For documents/objects.
     *   For embedded components, it contains parent file full path.
     * @param iolIncluded
     *   Input and Output argument for method.
     *
     *   Input contains action (Included or Excluded) set on objects by integration.
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>ENOIUPSUserExitsBase::Included </dt>
     *     <dd>Object is included in save scope by integration.</dd>
     *     <dt>ENOIUPSUserExitsBase::Excluded </dt>
     *     <dd>Object is excluded from save scope by integration.</dd>
     *
     *   Output contains action (Included or Excluded) set on objects by integration.
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>ENOIUPSUserExitsBase::Included </dt>
     *     <dd>Object is included in save scope by User Exit.</dd>
     *     <dt>ENOIUPSUserExitsBase::IncludedForced </dt>
     *     <dd>Object is forced included in save scope by User Exit.</dd>
     *     <dt>ENOIUPSUserExitsBase::Excluded </dt>
     *     <dd>Object is excluded from save scope by User Exit.</dd>
     *     <dt>ENOIUPSUserExitsBase::ExcludedForced </dt>
     *     <dd>Object is forced excluded from save scope by User Exit.</dd>
     *
     *  @return
     *   HRESULT value. 
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>The method succeeds.</dd>
     *     <dt>S_FALSE </dt>
     *     <dd>The method fails and Error is displayed by method itself.</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>The method fails and retuns error.</dd>
     */
    virtual HRESULT SaveScopePost(
        const CATListValCATUnicodeString &ilType,
        const CATListValCATUnicodeString &ilName,
        const CATListValCATUnicodeString &ilRevision,
        const CATListValCATUnicodeString &ilFullPath,
        CATListOfInt                     &iolIncluded
        ) = 0;



     /**
	 * User exit is called after selection of objects for Save is Validated,
     * Takes input as lists which correspond to documents/objects that are selected and validated for save.
     * All lists have same size.
     * @param ilType
	 *   List of Type For documents/objects.
	 * @param ilName
	 *   List of Type For documents/objects.
     * @param ilRevision
	 *   List of Revision For documents/objects.
     * @param ilFullPath
	 *   List of Revision For documents/objects.
     *
     *
     * @return
     *   HRESULT value. 
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>The method succeeds.</dd>
     *     <dt>S_FALSE </dt>
     *     <dd>The method fails and Error is displayed by method itself.</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>The method fails and retuns error.</dd>
     */
    virtual HRESULT SaveFinalPre(
        const CATListValCATUnicodeString &ilType,
        const CATListValCATUnicodeString &ilName,
        const CATListValCATUnicodeString &ilRevision,
        const CATListValCATUnicodeString &ilFullPath
        ) = 0;

    /**
    * User exit is called at beginning of the Open operation,
    * Takes input as lists which correspond to unique objects selected on the open or partial open panel.
    * All lists have same size.
    * @param ilType
    *   List of Type For documents/objects.
    * @param ilName
    *   List of Name For documents/objects.
    * @param ilRevision
    *   List of Revision For documents/objects.
    *
    *
    * @return
    *   HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The method succeeds.</dd>
    *     <dt>S_FALSE </dt>
    *     <dd>The method fails and Error is displayed by method itself.</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>The method fails and retuns error.</dd>
    */
    virtual HRESULT OpenDownloadPre(
        const CATListValCATUnicodeString &ilType,
        const CATListValCATUnicodeString &ilName,
        const CATListValCATUnicodeString &ilRevision
        ) = 0;

    /**
    * User exit is called after Open operation but before opening documents in session,
    * Takes input as lists which correspond to objects of complete downloaded structure .
    * All lists have same size.
    * @param ilType
    *   List of Type For documents/objects.
    * @param ilName
    *   List of Name For documents/objects.
    * @param ilRevision
    *   List of Revision For documents/objects.
    * @param ilFullPath
    *   List of Full Path For documents/objects.
    *
    *
    * @return
    *   HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The method succeeds.</dd>
    *     <dt>S_FALSE </dt>
    *     <dd>The method fails and Error is displayed by method itself.</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>The method fails and retuns error.</dd>
    */
    virtual HRESULT OpenDownloadPost(
        const CATListValCATUnicodeString &ilType,
        const CATListValCATUnicodeString &ilName,
        const CATListValCATUnicodeString &ilRevision,
        const CATListValCATUnicodeString &ilFullPath
        ) = 0;

    /**
    * User exit is called after document is loaded in session,
    * Takes input as lists which correspond to loaded root documents.
    * All lists have same size.
    * @param ilType
    *   List of Type For documents/objects.
    * @param ilName
    *   List of Name For documents/objects.
    * @param ilRevision
    *   List of Revision For documents/objects.
    *
    *
    */
    virtual void OpenPost(
        const CATListValCATUnicodeString &ilType,
        const CATListValCATUnicodeString &ilName,
        const CATListValCATUnicodeString &ilRevision
        ) = 0;

};

CATDeclareHandler(ENOIUPSUserExitsBase, CATBaseUnknown);
#endif
