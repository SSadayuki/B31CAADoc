/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLAffectedObject_H
#define CATIVpmAFLAffectedObject_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLAffectedObject ;
#else
extern "C" const IID IID_CATIVpmAFLAffectedObject ;
#endif

#include "sequence_octet.h"
#include "CORBAAnyDef.h"

class CATIVpmAFLAction_var;
class CATIVpmAFLAffectedObject_var;
class CATIVpmFactoryObject_var;
class CATIVpmPESomeone_var;
class CATIVpmPEOrganization_var;
class CATUnicodeString; 
class CATTime;
class CATListValCATIVpmAFLAffectedObject_var;

/**
 * Class to manage the Action Flow Affected Objects.
 * <b>Role</b>: Affected Objects are attached to Actions to control the
 * items that are to be created/modified for the Action.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLAffectedObject : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

    /**
     * Retrieves the UUID of an Affected Object.
     *  @param oUUID
     *   The Affected Object identifier.
     */        
    virtual HRESULT GetUUID(SEQUENCE(octet)& oUUID)=0; 

    /**
     * Retrieves the real object pointed to by the Affected Object.
     *  @param oObj
     *   The pointed object.
     */        
    virtual HRESULT GetRealObject(CATIVpmFactoryObject_var& oObj)=0;

    /**
     * Obsolete. Use the ENOVINamedObject interface instead.
     *  @param oName
     *   The Affected Object name.
     */        
    virtual HRESULT GetName(CATUnicodeString& oName)=0;

    /**
     * Retrieves the identifier of the object pointed to by the Affected Object.
     *  @param oId
     *   The pointed object identifier.
     */        
    virtual HRESULT GetId(SEQUENCE(octet)& oId)=0;

    /**
     * Retrieves the Identifier of the object pointed to by the Affected Object (under a tk_binary sequence octet).
     *  @param oId
     *   The pointed object identifier.
     */        
    virtual HRESULT GetId(CORBAAny& oId)=0;

    /**
     * Retrieves the type of Affected Object.
     *  @param oObjType
     *   The Affected Object type.
     */        
    virtual HRESULT GetType(CATUnicodeString& oObjType)=0;

    /**
     * Retrieves the description of this Affected Object.
     *  @param oObjDesc
     *   The Affected Object description.
     */        
    virtual HRESULT GetDesc(CATUnicodeString& oObjDesc)=0;

    /**
     * Assigns the description of this Affected Object.
     *  @param iObjDesc
     *   The Affected Object description.
     */        
    virtual HRESULT SetDesc(const CATUnicodeString& iObjDesc)=0;

    /**
     * Get the change type.
     * @param oChgType
     */        
    virtual HRESULT GetChangeType(CATUnicodeString& oChgType)=0;

    /**
     * Set the change type.
     * @param iChgType
     */        
    virtual HRESULT SetChangeType(const CATUnicodeString& iChgType)=0;

    /**
     * Retrieves the modeler source of this Affected Object.
     *  @param oObjSource
     *   The Affected Object modeler source.
     */        
    virtual HRESULT GetSource(CATUnicodeString& oObjSource)=0;

    /**
     * Assigns the modeler source of this Affected Object.
     *  @param iObjSource
     *   The Affected Object modeler source.
     */        
    virtual HRESULT SetSource(const CATUnicodeString& iObjSource)=0;

    /**
     * Retrieves the priority of this Affected Object.
     *  @param oObjPriority
     *   The Affected Object priority.
     */        
    virtual HRESULT GetPriority(CATUnicodeString& oObjPriority)=0;

    /**
     * Assigns the priority of this Affected Object.
     *  @param iObjPriority
     *   The Affected Object priority.
     */        
    virtual HRESULT SetPriority(const CATUnicodeString& iObjPriority)=0;

    /**
     * @nodoc
     */
    virtual HRESULT GetOwner(CATIVpmPESomeone_var& oOwner)=0;

    /**
     * @nodoc
     */
    virtual HRESULT GetOrganization(CATIVpmPEOrganization_var& oOrg)=0;

    /**
     * Retrieves the status of this Affected Object.
     *  @param oObjStatus
     *   The Affected Object status.
     */
    virtual HRESULT GetStatus(CATUnicodeString& oObjStatus)=0;

    /**
     * Retrieves the Action handling this Affected Object.
     *  @param oActionRelated
     *   The Action.
     */    
    virtual HRESULT GetActionRelated(CATIVpmAFLAction_var& oActionRelated)=0;

    /**
     * @nodoc
     */
    virtual HRESULT ChangeOwner(const CATIVpmPESomeone_var& iNewOwner)=0;

    /**
     * Copies attributes from this Affected Object to another (customized attributes are copied if possible).
     *  @param oObj
     *   The target Affected Object.
     */                       
    virtual HRESULT CopyTo(CATIVpmAFLAffectedObject_var& oObj)=0;     

    /**
     * Retrieves the creation date from this Affected Object.
     *  @param oTime
     *   The creation date.
     */             
    virtual HRESULT GetCreationDate(CATTime& oTime)=0;

    /**
     * Get the last modification date from this Affected Object.
     *  @param oTime
     *   The last modification date.
     */             
    virtual HRESULT GetLastModifDate(CATTime& oTime)=0;

    /**
     * Adds a pointed object to this Affected Object. The add operation may be persistent or not
     * depending on the persistency flag (second parameter).
     *  @param iObject
     *   The pointed object to be added.
     *  @param isPersistent
     *   Specify whether the add operation is persistent or not (default).
     */             
    virtual HRESULT AddObject(CATIVpmAFLAffectedObject_var& iObject, const int isPersistent=0)=0;

    /**
     * Removes a pointed object from this Affected Object.
     *  @param iObject
     *   The pointed object to be removed.
     */             
    virtual HRESULT RemoveObject(CATIVpmAFLAffectedObject_var& iObject)=0;

    /**
     * Retrieves a list of pointed Affected Objects for this Affected Object.
     *  @param oListObjects
     *   The list of pointed objects.
     */             
    virtual HRESULT GetPointedAffectedObjects(CATLISTV(CATIVpmAFLAffectedObject_var)& oListObjects)=0;

    /**
     * Retrieves a list of pointing Affected Objects for this Affected Object.
     *  @param oListObjects
     *   The list of pointing objects.
     */             
    virtual HRESULT GetPointingAffectedObjects(CATLISTV(CATIVpmAFLAffectedObject_var)& oListObjects)=0;
                          
    /**
     * Dumps the Affected Object attributes.
     *  @param iPrefix
     *   The prefix text for each output line.
     */             
    virtual HRESULT Dump(char* iPrefix)=0;

/////////////////////////////////////////////////////////////////////////////////////////////
// OBSOLETE IN V5R5
////////////////////////////////////////////////////////////////////////////////////////////

    /**
     * @nodoc
     * Deprecated since V5R5. 
     * The identifier is set only once at creation using AFLManager->CreateAffectedObject
     */        
    virtual HRESULT SetId(const CORBAAny& iId)=0;

    /**
     * @nodoc
     * Deprecated since V5R5. DO NOT USE.
     * The identifier is set only once at creation using AFLManager->CreateAffectedObject
     */        
    virtual HRESULT SetId(const SEQUENCE(octet)& iId)=0;

    /**
     * @nodoc
     * Deprecated since V5R5. DO NOT USE.
     * This attribute corresponded to the type (CATIVpmFactoryObject) of pointed object.
     * Instead GetRealObject()->GetEntityName()
     */        
    virtual HRESULT GetDocType(CATUnicodeString& oDocType)=0;

    /**
     * @nodoc
     * Deprecated since V5R5. DO NOT USE.
     * This attribute corresponded to the type (CATIVpmFactoryObject) of pointed object.
     * No method proposed in replacement to insure data integrity (object pointed , type).
     */        
    virtual HRESULT SetDocType(const CATUnicodeString& iDocType)=0;

    /**
     * @nodoc
     * Deprecated since V5R5. DO NOT USE.
     * This attribute corresponded to the type (CATIVpmFactoryObject) of pointed object.
     * No method proposed in replacement to insure data integrity (object pointed name, affected object name).
     */        
     virtual HRESULT SetName(const CATUnicodeString& iName)=0;

};

CATDeclareHandler(CATIVpmAFLAffectedObject, CATBaseUnknown);

#endif

