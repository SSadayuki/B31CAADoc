// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : CATIVpmLightExpandObject.h                                      
// --------------------------------------------------------------
// Content     : Result object for Light Expand
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/09/19 > JDV                                          
// --------------------------------------------------------------

/** 
  * @CAA2Level L1
  * @CAA2Usage U3
 */

#ifndef CATIVpmLightExpandObject_H
#define CATIVpmLightExpandObject_H


#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATLISTV_sequence_octet.h"
#include "CORBAAnyDef.h"
#include "CATBoolean.h"
class CATListPtrCATIVpmLightExpandObject;


/**
  * Types of documents.
 */
enum DocumentCriteria
{
   LEX_NoDocuments,
   LEX_RepresentationOnInst,
   LEX_DocumentationOnInst,
   LEX_DocumentOnInst,
   LEX_RepresentationOnRef,
   LEX_DocumentationOnRef,
   LEX_DocumentOnRef,
   LEX_Representation,
   LEX_Documentation,
   LEX_Document
};                           


/**
  * Synchronization status.
 */
enum vpmOutOfSync
{
   LEX_Version,
   LEX_Reference,
   LEX_Quantity,
   LEX_Position,
   LEX_UpToDate,
   LEX_Unknown
};


/**
  * Types of objects.
 */
enum vpmTypeNames
{
   LEX_ProductRootClass,
   LEX_GCoGenericComponent,
   LEX_TempoItemInstance,
   LEX_PartReference,
   LEX_PartInstance,
   LEX_ProductInstance,
   LEX_AssemblyRelation_PM,
   LEX_ProductSpecification,
   LEX_DocumentRevision,
   LEX_TechPack,
   LEX_UnknownType,
   LEX_AssemblyRelation_PS,
   LEX_Folder,
   LEX_TableOfContent,
   LEX_NavRep,
   LEX_ConfigHandler,
   LEX_ProductType,
   LEX_Zone,
   LEX_DocSheet
};


/** 
  * Class containing the results of a Light Expand.
 */

class ExportedByGUIDVPMInterfaces CATIVpmLightExpandObject
{

   public :

      /** 
        * Destructor of the class. This destructor must be called at the end of the process to free the memory
        * taken by the data.
       */

      virtual ~CATIVpmLightExpandObject();


      /**
        * Gets the level of the object in the tree structure.
        * @param oLevel : The level of the object in the tree, relative to the root object that got expanded.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getLevel( int & oLevel ) = 0;


      /**
        * Gets the display name of the object.
        * @param oName : The name of the object to be displayed.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getName( CATUnicodeString & oName ) = 0;


      /**
        * Gets the parent index of the current object, in the list of results.
        * @param oParentElem : The index of the parent of the current object in the list of results.
        *                      If oParentElem is 0, it means that the parent is the root object that got expanded - the object is a first level object.
        *                      If oParentElem is -1, it means that the parent index has not been computed (expand LEX_MODE_DMU).
        *                      If the object is a document or a TechPack, it gives the part on which this object is attached.
        * @returns : S_OK if everything went fine
        *            S_FALSE for a first level object or in LEX_MODE_DMU expand mode.
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getParent( int & oParentElem ) = 0;


      /**
        * Gets the UUID of the current object.
        * @param objUUID : The UUID of the object.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getUUID( SEQUENCE(octet) & objUUID ) = 0;


      /**
        * Gets the synchronization status of the current object.
        * @param oSyncStatus : Synchronization status of the object.
        * @returns : S_OK if the object is synchronized. In that case, oSyncStatus is equal to UpToDate.
        *            S_FALSE if the object is an instance and is not synchronized. In that case, oSyncStatus gives the reason.
        *            S_FALSE if the object is not an instance. In that case, oSyncStatus is equal to Unknown.
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getUpToDate( vpmOutOfSync & oSyncStatus ) = 0;


      /**
        * Gets the list of available attribute names on the current object.
        * @param oAttributeNames : List of attribute names for which the value is available in the result.
        * @param oTypes          : Type of the attribute.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getAttributeNames( CATListOfCATUnicodeString & oAttributeNames, CATListOfInt & oTypes ) = 0;


      /**
        * Gets the value of one attribute on the current object.
        * @param iAttributeName : Name of the attribute. This name must be in the list given by getAttributeNames.
        * @param oValue         : Values of the attribute.
        * @param oIsSet         : Flag to know if the attribute is set or not. It can have 3 values :
        *                         1 if the attribute is set.
        *                         0 if the attribute is not set. In that case, the value oValue is empty.
        *                         -1 if the object itself doesn't exist. See the CAA use case for an example.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getAttributeValue( const CATUnicodeString & iAttributeName, CORBAAny & oValue, int & oIsSet ) = 0;


      /**
        * Gets the basic type of the current object.
        * @param oBasicType : The basic type of the current object.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getBasicType( vpmTypeNames & oBasicType ) = 0;


      /**
        * Gets the real type of the current object.
        * @param oRealType : The real type of the current object.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getRealType( CATUnicodeString & oRealType ) = 0;


      /**
        * Gets the domain of the current object.
        * @param oDomain : The domain of the current object.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getDomain( CATUnicodeString & oDomain ) = 0;


      /**
        * Gets the documents attached to the current object.
        * @param oDocuments : The list of documents attached to the current object. Do not delete the list, do not create it either.
        *                     Do not delete the pointers inside this list, deleting the current object will delete them, and the list.
        *                     If there are no documents, the pointer oDocuments will be null.
        * @param iDocCriteria : The type of document to retrieve.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getDocuments( CATListPtrCATIVpmLightExpandObject * & oDocuments, DocumentCriteria iDocCriteria = LEX_NoDocuments ) = 0;


      /**
        * Gets the Technological Packages attached to the current object.
        * @param oTechPacks : The list of technological packages attached to the current object. Do not delete the list, do not create it either.
        *                     Do not delete the pointers inside this list, deleting the current object will delete them, and the list.
        *                     If there are no tech packs, the pointer oTechPacks will be null.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getTechPacks( CATListPtrCATIVpmLightExpandObject * & oTechPacks ) = 0;


      /**
        * Gets the lock information of the current object.
        * @param oLockOwner : The lock owner of the object. If the object is not locked, the string is empty.
        * @param iIsRef : For a Part Instance and a Product Instance, the lock is retrieved on the instance if iIsRef is false
        *                 and on the reference if iIsRef is true.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getLockInfo( CATUnicodeString & oLockOwner, CATBoolean iIsRef = FALSE ) = 0;
};

#endif




