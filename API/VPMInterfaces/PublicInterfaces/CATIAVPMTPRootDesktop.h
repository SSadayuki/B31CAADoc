// -*-C++-*-

#ifndef CATIAVPMTPRootDesktop_h
#define CATIAVPMTPRootDesktop_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"   // Necessary: default args

// =================================================================
// Forward classes declaration
// =================================================================
class CATListPtrVPMCA;
class CATIAVPMObject;
class CORBAAny;
class CATIVpmFactoryObject;
class CATIVpmFactoryObject_var;
class ENOVIObjectInfo;
class CATListValCATBaseUnknown_var;
class CATListValCATIVpmFactoryObject_var;
class CATListValCATUnicodeString;
class CATIVpmPSDMUFilter_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMTPRootDesktop;
#else
extern "C" const IID IID_CATIAVPMTPRootDesktop;
#endif

//------------------------------------------------------------------
/**
 * Interface to manage CATIAVPMRootDesktop Object.
 */
class ExportedByGUIDVPMInterfaces CATIAVPMTPRootDesktop : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

    /** @nodoc */
    virtual HRESULT   GetVpmObjectAttributeNames(const CATUnicodeString & LateEntityName,
						 CATListPtrVPMCA *& VPMCAList)=0;

    /**
		* @nodoc 
		*	This method is not stateless safe.  
		*/
    virtual HRESULT   get_CurrentSubType(const CATUnicodeString & SupType,
					 CATUnicodeString & CurrentSubType)=0;

    /** 
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   put_CurrentSubType(const CATUnicodeString & SupType,
					 const CATUnicodeString & CurrentSubType)=0;

    /**
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   get_SubTypeCount(const CATUnicodeString & SupType, long & NbItems)=0;

    /** 
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   get_SubType(const CATUnicodeString & SupType, long index, CATUnicodeString & SubType)=0;

    /** 
		* @nodoc
		* This method is not stateless safe.
		*/
    // New method
    virtual HRESULT   get_SubTypes(const CATUnicodeString & SupType, CATListValCATUnicodeString & SubTypes)=0;


    /** 
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   get_SupType(const CATUnicodeString & SubType, CATUnicodeString & SupType)=0;


    /** @nodoc */
    virtual HRESULT   put_Buffer(CATIAVPMObject *Object)=0;

/**
 * Retrieves Count of Objects inside the Copy-Paste buffer.
 * @param NbObject
 *   The number of Objects in the buffer.
 */
    virtual HRESULT   get_BufferCount(long & NbObject)=0;

    /** @nodoc */
    virtual HRESULT   get_BufferedAttributeCount(long indexObject,
						 long & NbAttributes)=0;

    /** @nodoc */
    virtual HRESULT   get_BufferedObjectType(long indexObject,
					     CATUnicodeString & objectType,
					     CATIAVPMObject *& Object)=0;
/**
 * @nodoc
 */
    virtual HRESULT   get_BufferedObjectType(long index, CATUnicodeString & LateTypeName)=0;

    /** @nodoc */
    virtual HRESULT   get_BufferedAttribute(long indexObject,
					    long indexAttribute,
					    CATUnicodeString & Attribute,
					    CORBAAny *& Value)=0;

/**
 * @nodoc
 */
    virtual HRESULT get_AttributeValueOfBufferObject(long index,
						     const CATUnicodeString & iAttribute, 
						     CORBAAny & oValue)=0;

/**
 * Retrieves informations about buffered objects and buffer objects themselves.
 * @param indexObject
 *   The index of the buffered object to retrieve.
 * @param oObjectInfo
 *   The ENOVIObjectInfo correspondig to the buffered object.
 * @param oObject
 *   The buffered CATIAVPMObject.
 */
    virtual HRESULT   get_BufferedObjectInfo( long indexObject,
					     ENOVIObjectInfo*& oObjectInfo,
					     CATIAVPMObject *& oObject)=0;


    /** @nodoc */
    virtual HRESULT   ResetBuffer()=0;
    
    /** @nodoc */
    virtual HRESULT   SaveBuffer()=0;
    
    /** @nodoc */
    virtual HRESULT   RestoreBuffer()=0;

    /** @nodoc */
    virtual HRESULT   Create(const CATUnicodeString & iEntityName, CATIVpmFactoryObject *& opObject)=0;


    /** 
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   put_CustomizedType(const CATUnicodeString & iEntityTypeBase, 
					 const CATUnicodeString & iCustomizedEntity)=0;

    /**
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   get_CustomizedType(const CATUnicodeString & iEntityTypeBase,
					 CATUnicodeString & oCustomizedEntity)=0;

    /** 
		* @nodoc
		* This method is not stateless safe.
		*/
    virtual HRESULT   RemoveCustomizedType(const CATUnicodeString & iEntityTypeBase)=0;


// Retrieves the Domain Name from RootDesktop.
// @param oDomainName
//   The DomainName.

    /** @nodoc */
    virtual HRESULT   get_DomainName(CATUnicodeString & oDomainName)=0;

    /**
     * Puts the Domain Name value as current Domain.
     * @param iDomainName
     *   The DomainName.
     */
    virtual HRESULT   push_DomainName(const CATUnicodeString & iDomainName)=0;

    /**
     * Come back to the domain name which was the current one before the last push_DomainName call.
     */
    virtual HRESULT   pop_DomainName()=0;

    //-----------------------------------------
    // Connexions
    //-----------------------------------------
    /**
     * Retrieve the connexions of input objects. 
     * @param iObjects
     *   list of input objects.
     * @param opConnexionArray
     *   array of connexions of iObjects,
     *   array size = size of iObjects,
     *   this array is allocated in the method (only if the method is succeeded),
     *   you have to deallocate this array (delete []).
     * @param opConnectorArray
     *   array of connectors of iObjects,
     *   array size = size of iObjects,
     *   this array is allocated in the method (only if the method is succeeded),
     *   you have to deallocate this array (delete []).
     * @param iConnexionType
     *   The Connexion Type.
     *   <br><b>Legal Values</b>: The default value for the connexion type is set to "all".
     * @param iDirection
     *   <br><b>Legal Values</b>
     *	 <ul>
     *		<li><code>all</code>: get all connections, default value.</li>
     *		<li><code>pointed</code>: get connections pointed by this.</li>
     *		<li><code>pointing</code>: get connection pointing to this.</li>
     *	 </ul>
     */
    /** @nodoc */
    virtual HRESULT GetConnexions(
	    const CATListValCATBaseUnknown_var& iObjects,
	    CATListValCATBaseUnknown_var*& opConnexionArray,
	    CATListValCATUnicodeString *& opConnectorArray,
	    const CATUnicodeString& iConnexionType= "all",
	    const CATUnicodeString& iDirection= "all")=0;


    /** @nodoc */
    virtual HRESULT areExposedBy(const CATListValCATBaseUnknown_var & ListCBU,
				 CATListValCATIVpmFactoryObject_var &oExposingDocs ) =0 ;

    /** 
		* @nodoc 
		* Stateless Create method,
		* Creates an entity of the given name, custimization
		* depending upon the domain name is not done here.
		*/
    virtual HRESULT  CreateFromEntityName(const CATUnicodeString & iEntityName, 
		CATIVpmFactoryObject_var& ohObject)=0;

    /** 
		* @nodoc
		* Stateless GetConnexions methods. 
		* @param ihFilterToApply filter to apply on
		* retrieved connections.
		*/
    virtual HRESULT GetConnections(
	    const CATListValCATBaseUnknown_var& iObjects,
	    CATListValCATBaseUnknown_var*& opConnexionArray,
	    CATListValCATUnicodeString *& opConnectorArray,
			const CATIVpmPSDMUFilter_var & ihFilterToApply,
	    const CATUnicodeString& iConnexionType="all",
	    const CATUnicodeString& iDirection="all")=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMTPRootDesktop, CATBaseUnknown);

#endif

