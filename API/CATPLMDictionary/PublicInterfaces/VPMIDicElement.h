//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#include "VPMIDicInterfaces.h"

#ifndef _VPMIDicElement_h
#define _VPMIDicElement_h

//#include "VPMDicType.h"
#include "CATCORBABoolean.h"

#include "VPMDicTYPE.h"
#include "VPMDicVISIBILITY.h"

#include "CATBaseUnknown.h"
#include "CATLISTPIUnknown.h"
#include "CATListOfCATUnicodeString.h"

class VPMIDicCategory;
class VPMIDicPackage;
class CATDbBinary;
class CATString;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByVPMIDicInterfaces IID IID_VPMIDicElement;
#else
extern "C" const IID IID_VPMIDicElement;
#endif

/**
 *  @CAA2Level L1
 *  @CAA2Usage U3
 */ 

/**
 * This class enables to manage all basics dictionary types
 * <b>role</b>: Defines the dictionary basic type
 */
class  ExportedByVPMIDicInterfaces VPMIDicElement : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves the dictionary object type.
 */ 
virtual VPMDicTYPE Type()=0;
  
/**
 * Retrieves the dictionary object name.
 * @param oName : Dictionary object name
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetName( CATString * oName)=0;

/**
 * @nodoc
 */
virtual HRESULT SetName ( const CATString *iNewName )=0;

/**
 * Retrieves the dictionary object UUID.
 * @param oUuid : Dictionary object UUID
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetUuid(CATDbBinary * oUuid)=0;

/**
 * @nodoc
 */
virtual HRESULT SetUuid(const CATDbBinary * ioUuid)=0;

/**
 * @nodoc
 * Retrieves the package of the element supertype
 * @param oSuperPackage : Super type's package
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetSuperPackage ( VPMIDicPackage ** oSuperPackage)=0;

/**
 * @nodoc
 * Retrieves the package containing the element
 * @param oPackage : Package
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetPackage ( VPMIDicPackage ** oPackage)=0;

/**
 * Retrieves the element alias
 * @param oAlias : Alias
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetAlias(CATUnicodeString * oAlias)=0;

/**
 * @nodoc
 */
virtual HRESULT SetAlias(const CATUnicodeString *iAlias)=0;

/**
 * @nodoc
 */
virtual HRESULT AddCategory ( const VPMIDicCategory * iCategory)=0;

/**
 * @nodoc
 */
virtual HRESULT RemoveCategory ( const VPMIDicCategory * iCategory)=0;

/**
 * Retrieves the categories to which the elment belongs.
 * @param oCategories : List of the categories associated with the element
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetCategories ( CATLISTP(IUnknown) * oCategories)=0;

/**
 * @nodoc
 */
virtual HRESULT IsCategory ( const CATString *CatName
			    ,boolean *oYesNo)=0;

/**
 * Retrieves the visibility tag og the element
 * @param oVisibility : Visibility
 * @return S_OK, E_FAIL
 */
virtual HRESULT GetVisibility ( VPMDicVISIBILITY *oVisibility)=0;  

/**
 * @nodoc
 */
virtual HRESULT SetVisibility ( const VPMDicVISIBILITY inVISIBILITY)=0;  

/**
 * @nodoc
 * To store an unexpected attribute's name and value
 */
virtual HRESULT SetOtherAttribute     ( const CATUnicodeString & iAttrName, const CATUnicodeString & iAttrValue ) = 0; 

/**
 * @nodoc
 * To get an unexpected attribute's value from its name
 */
virtual HRESULT GetOtherAttribute     ( const CATUnicodeString & iAttrName, CATUnicodeString & oAttrValue ) = 0; 

/**
 * @nodoc
 * To get the list of all unexpected attributes names and values
 */
virtual HRESULT GetAllOtherAttributes ( CATListOfCATUnicodeString & oAttrNames, CATListOfCATUnicodeString & oAttrValues ) = 0; 


    /**
    * Sets the Element's exposition level.
    * @param iExpositionLevel : Exposition Level
    * @return
    *    <ul>
    *    <li>S_OK     Operation succeeded.</li>
    *    <li>E_FAIL   Operation failed.</li>
    *    </ul>
    */
    virtual HRESULT SetExpositionLevel ( const CATUnicodeString *iExpositionLevel )=0;

    /**
    * Retrieves the Element's exposition level.
    * @param oExpositionLevel : Exposition Level
    * @return
    *    <ul>
    *    <li>S_OK     Operation succeeded.</li>
    *    <li>E_FAIL   Operation failed.</li>
    *    </ul>
    */
    virtual HRESULT GetExpositionLevel ( CATUnicodeString * oExpositionLevel)=0;
};
#endif
