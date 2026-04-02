// COPYRIGHT Dassault Systemes 2013
//===================================================================
//
// ENOxCADUserExitsAdapter.h
// Adapter class for user exits interface. 
//
//===================================================================
//
// Usage notes:
//     Users should derive their implementation class of User Exits (C++ derivation) from this class.
//     
//===================================================================
#ifndef ENOxCADUserExitsAdapter_H
#define ENOxCADUserExitsAdapter_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "ExportedByENODC5Interfaces.h"

#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"
#include "ENOIxCADUserExitsBase.h"


/**
 * Adapter class for user exits interface.
 * <b>Role</b>:
 * Users should derive their implementation class of User Exits (C++ derivation) from this class.
 */

class ExportedByENODC5Interfaces ENOxCADUserExitsAdapter : public ENOIxCADUserExitsBase
{
public :

    /**
    * Constructor
    */
    ENOxCADUserExitsAdapter();

    /**
    * Destructor
    */
    virtual ~ENOxCADUserExitsAdapter();

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
    virtual HRESULT ConnectPre();


    /**
    * User exit is called after login is successfully completed.
    */
    virtual void ConnectPost();


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
    virtual HRESULT SaveStartPre();


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
     *     <dt>ENOIxCADUserExitsBase::Included </dt>
     *     <dd>Object is included in save scope by integration.</dd>
     *     <dt>ENOIxCADUserExitsBase::Excluded </dt>
     *     <dd>Object is excluded from save scope by integration.</dd>
     *
     *   Output contains action (Included or Excluded) set on objects by integration.
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>ENOIxCADUserExitsBase::Included </dt>
     *     <dd>Object is included in save scope by User Exit.</dd>
     *     <dt>ENOIxCADUserExitsBase::IncludedForced </dt>
     *     <dd>Object is forced included in save scope by User Exit.</dd>
     *     <dt>ENOIxCADUserExitsBase::Excluded </dt>
     *     <dd>Object is excluded from save scope by User Exit.</dd>
     *     <dt>ENOIxCADUserExitsBase::ExcludedForced </dt>
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
        const CATListValCATUnicodeString  &ilType,
        const CATListValCATUnicodeString  &ilName,
        const CATListValCATUnicodeString  &ilRevision,
        const CATListValCATUnicodeString  &ilFullPath,
        CATListOfInt &iolIncluded
        );


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
        );

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
        );


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
        );

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
        );


};
#endif
