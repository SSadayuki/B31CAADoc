// --------------------------------------------------------            
// VPM (c) Copyright Dassault Systemes 1996                           
// -------------------------------------------------------------       
// Responsable: AHC                                                     
// --------------------------------------------------------------       
// Macro: CATIVpmFactoryObject.h                                      
// --------------------------------------------------------------       
// Contenu:  VPM Manager, gestion des objets du VPM         
// --------------------------------------------------------------       
// Historique:                                                          
// Creation : 96/09/12 > AHC                                           
// --------------------------------------------------------------       
//
#ifndef CATIVpmFactoryObject_H_
#define CATIVpmFactoryObject_H_
//
//
/**
*	@CAA2Level L1
*	@CAA2Usage U3
*/
#include "CATBaseUnknown.h"
#include "CATInterfaceObject.h"
#include "CATIContainer.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

class ENOVIObjectInfo_var ;
class CATVpmAssocObject ;

#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmFactoryObject ;
#else
extern "C" const IID IID_CATIVpmFactoryObject ;
#endif

/**
 * This interface is the base interface implemented by all persistent ENOVIA objects.
 */
class ExportedByGUIDVPMInterfaces CATIVpmFactoryObject : public CATBaseUnknown   
  {
  //
  CATDeclareInterface;
  //
  public:

/**
*   Get the type.
*   @param oObjetType
*   The corresponding ENOVIObjectInfo.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Lock Owner is valuated</dd>
*     <dt>S_FALSE</dt>
*     <dd>Lock Owner is not assign</dd>
*   </dl>		
*/
  virtual HRESULT GetObjectInfo( ENOVIObjectInfo_var& oObjetType)= 0;
  //
  // -> Renseignement de l'objet Factory
  //

/** @nodoc
*   Set the factory object.
*   @param iObj
*   The factory object.
*   @return
*   None. 
*/
  virtual void SetRealObject(void*  iObj)=0 ;

/** @nodoc
*   Set the factory object by an interface.
*   @param iObj
*   The factory object.
*   @return
*   None. 
*/
  virtual void SetFactoryObject(const CATInterfaceObject_var& iObj)=0;

/** @nodoc
*   Get the factory object.
*   @return
*   A pointer on the factory object. 
*/
  virtual void* GetRealObject()=0;

/** @nodoc
*   Get the factory object by its interface.
*   @return
*   A handler on the factory object. 
*/
  virtual CATInterfaceObject_var GetFactoryObject()=0;

/**
*   Get the name of the domain.
*   @return
*   The name of the domain. 
*/
  virtual CATUnicodeString GetDomainName()=0;

/**
*   Get the name of the environment.
*   @return
*   The name of the environment. 
*/
  virtual CATUnicodeString GetEnvironmentName()=0;

/**
*   Get the nickname.
*   @return
*   The nickname. 
*/
  virtual CATUnicodeString GetNickName()=0;

/**
*   Get the name of the interface.
*   @return
*   The interface's name. 
*/
  virtual CATUnicodeString GetInterfaceName()=0;

/**
*   Get a logical name of the entity.
*   @return
*   The logical name. 
*/
  virtual CATUnicodeString GetEntityName()=0;

/**
*   Get the receptacle container.
*   @return
*   The container. 
*/
  virtual CATIContainer_var GetContainer()=0;

/** @nodoc */
  virtual void*  GetAssociatedNod()=0;

/** @nodoc */
  virtual void SetAssociatedNod(CATVpmAssocObject* iNod )=0;

/** @nodoc */
  virtual void SetNull(const int& isnull) =0  ;

/**
*   Get the type by name.
*   @param oType
*   The type of the object.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Type is retrieved</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
  virtual HRESULT GetType(CATUnicodeString& oType )=0;

/**
*   IsAKindOf.
*   @param iType
*   The type to test.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>IsAKindOf is TRUE</dd>
*     <dt>S_FALSE</dt>
*     <dd>IsAKindOf is FALSE</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
  virtual HRESULT IsAKindOf(const CATUnicodeString& iType)=0;

  };
  CATDeclareHandler(CATIVpmFactoryObject,CATBaseUnknown);
//
//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
#endif
