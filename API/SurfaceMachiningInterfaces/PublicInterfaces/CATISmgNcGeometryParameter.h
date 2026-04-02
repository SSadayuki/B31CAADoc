#ifndef CATISmgNcGeometryParameter_H
#define CATISmgNcGeometryParameter_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=================================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATGeometry.h"
#include "CATUnicodeString.h"
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATISmgNcGeometryParameter;
#else
extern "C" const IID IID_CATISmgNcGeometryParameter ;
#endif

/**
 * Interface to manage nc geometry parameters.
 * <br><b>Role</b>: This interface offers services for nc geometry parameters.
 * @see CATISmgNcGeometryManager
 * @see CATIMfgGeometryAccess
 */

class ExportedBySmgItfEnv CATISmgNcGeometryParameter: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Adds a manufacturing geometry or a nc geometry feature to the parameter.
 * If you add a nc geometry feature, all the previously added manufacturing geometries
 * will be removed. To keep them, use CATISmgNcGeometryParameter#Export.
 * @param iMember
 *      Manufacturing geometry or nc geometry feature to add
 *
 * @param iNotification  
 *      Flag to indicate whether a notification is sent. 
 *  <br><b>Legal values</b>:
 *  <ul>
 *  <li> 1 : notification is sent</li>
 *  <li> other value : no notification</li>
 *  </ul>
 *
 * @param iVerify  
 *      Flag to indicate whether it is necessary to check if iMember has already been added.   
 *  <br><b>Legal values</b>:
 *  <ul>
 *  <li> 0 : Default value : iMember is added without any verification</li>
 *  <li> other value : Check if iMember has already been added: If not, iMember is added. If yes, iMember is removed </li>
 *  </ul>
 */
	virtual HRESULT Add(const CATBaseUnknown_var &iMember, const int iNotification = 1, const int iVerify = 0) = 0;

/**
 * Removes all the members of the parameter.
 * @param iNotification  
 *      Flag to indicate whether a notification is sent. 
 *  <br><b>Legal values</b>:
 *  <ul>
 *  <li> 1 : notification is sent</li>
 *  <li> other value : no notification</li>
 */
	virtual HRESULT RemoveAll(const int iNotification = 1) = 0;

/**
 * Retrieves nc geometry features of the parameter.
 * @param oNcGeometryFeatures  
 *      List of nc geometry features
 */
	virtual HRESULT GetNcGeometryFeatures(CATListValCATBaseUnknown_var& oNcGeometryFeatures) = 0;

/**
 * Retrieves the geometric elements of the members of the parameter. 
 * @param iAllGeometricElements
 *   Specifies if all geometric elements must be retrieved.
 *   <br><b>Legal values</b>: The parameter can be
 *   <dl>
 *     <dt><tt>0</tt>   <dd>Only geometric elements on the visible space are retrieved
 *     <dt><tt>1</tt>   <dd>All geometric elements are retrieved
 *    </dl>
 *
 * @param iDuplicate
 *   Specifies if the geometric elements must be duplicated
 *   <br><b>Legal values</b>: The parameter can be
 *   <dl>
 *     <dt><tt>0</tt>   <dd>Geometric elements are duplicated only if necessary (in a product context)  
 *     <dt><tt>1</tt>   <dd>Geometric elements are duplicated
 *   </dl>
 *
 * @param oGeometricElements
 *    The geometric elements.
 */
    virtual HRESULT GetGeometricElements(CATLISTP(CATGeometry) &oGeometricElements, const int iAllGeometricElements=0, const int iDuplicate=0) = 0; 

/**
 * Creates a new nc geometry feature, fill it with the manufacturing geometries of the parameter and
 * add it in the parameter. 
 * @param iName
 *   New nc geometry feature's value
 *
 * @return
 *   HRESULT value fails if the manager already contains nc geometry features
 */
    virtual HRESULT Export (const CATUnicodeString &iName = "") = 0; 

/**
 * Gets the status of the geometric element.
 * @param oIsValid
 *   Status of the geometry
 *     0 : Required
 *     1 : Valuated
 *     2 : Optional
 *     3 : Not found
 *     4 : Not up to date
 *
 * @param iIsRequired
 *   Specifies if the geometric element is mandatory
 *   <br><b>Legal values</b>: The parameter can be
 *   <dl>
 *     <dt><tt>0</tt>   <dd>Geometric element is optional 
 *     <dt><tt>1</tt>   <dd>Geometric element is mandatory
 *   </dl>
 *
 * @return
 *   HRESULT value fails if the internal structure is invalid 
 */
    virtual HRESULT IsValid (int& oIsValid, const int iIsRequired = 0) = 0;

/**
 * @nodoc
 */
    virtual HRESULT Analyse (const CATUnicodeString & iName = "") = 0;

};

CATDeclareHandler(CATISmgNcGeometryParameter, CATBaseUnknown) ;

#endif
