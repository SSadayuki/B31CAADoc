/* -*-c++-*- */
#ifndef CATILinkableObject_h
#define CATILinkableObject_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATINamingContext.h"
#include "sequence_octet.h"
#include "CosLinkable.h"
#include "booleanDef.h"
#include "stringDef.h"
#include "CATLISTV_CATBaseUnknown.h"

#include "CATListOfCATUnicodeString.h"
#include "CATUnicodeString.h"

class CATISymbolicLink;
class CATDocument;
class CATIBindParameters;

#include "AD0XXBAS.h"
extern ExportedByAD0XXBAS IID IID_CATILinkableObject ;

/**
* Interface allowing the retrieval of the document to which the object belongs.
*/

class ExportedByAD0XXBAS CATILinkableObject : public CATBaseUnknown
{
  CATDeclareInterface;

public:

// Old methods -> will disapear at the end of the migration
  /** @nodoc */
  virtual char* GetName (CATNameKind kind)=0 ;
  /** @nodoc */
  virtual SEQUENCE(octet) GetName_B (CATNameKind kind)=0 ;
  /** @nodoc */
  virtual void AddInverseLink    ( CATBaseUnknown_var inverse_handler ) = 0 ;
  /** @nodoc */
  virtual void RemoveInverseLink ( CATBaseUnknown_var inverse_handler ) = 0 ;
  /** @nodoc */
  virtual CATLISTV( CATBaseUnknown_var ) GetInverseLinks() = 0 ;
  

// New (or already existing methods) for object having a pointed behavior
  /** @nodoc */
  virtual CATISymbolicLink*   GetSymbolicLink() = 0;

  /** @nodoc */
  virtual CATBaseUnknown* GetNamingContext (CATIdent interfaceID)=0 ;
  /** @nodoc */
  virtual void                GetIdentifier( SEQUENCE(octet) & identifier
					    ,boolean         & IsAnUuid) = 0;
  
  /** 
  * Returns associated document owning object.
  * <br><b>Lifecycle rules deviation</b>: This method doesn't AddRef the returned value.
  */
  virtual CATDocument    * GetDocument ()=0 ;
  /** @nodoc */
  virtual SEQUENCE(octet)  GetLastModificationId ()=0 ;
  /** @nodoc */
  virtual SEQUENCE(octet)  GetLocatorType() = 0;
  /** @nodoc */
  virtual SEQUENCE(octet)  GetAdditionalInfos() = 0;

// New for object having a pointing  behavior

  /** @nodoc */
  virtual void  ListSupportedAreasIdentifier( CATListOfCATUnicodeString* listofareasidentifier
					     ,boolean& IsAStaticList) = 0;
  
  /** @nodoc */
  virtual boolean IsAFilledArea(const CATUnicodeString& area_identifier) = 0;
  
  /** @nodoc */
  virtual void  FillArea( const CATUnicodeString& area_identifier
			 ,SEQUENCE(octet)         pointed_name
			 ,boolean                 updateIfAlreadyExist) = 0;
  /** @nodoc */
  virtual SEQUENCE(octet)  GetStoredName(const CATUnicodeString& area_identifier) = 0;
  
  /** @nodoc */
  virtual CATLISTV(CATBaseUnknown_var) ExternalBindPointedObjects( const CATIdent interfaceId
								      ,CATIBindParameters* params) = 0;
  
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler( CATILinkableObject, CATBaseUnknown ) ;

#endif

