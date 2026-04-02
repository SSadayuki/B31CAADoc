/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                             C.Cressend
// January 01   Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLProductView_H_
#define CATIVpmAFLProductView_H_
 
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLProductView ;
#else
extern "C" const IID IID_CATIVpmAFLProductView ;
#endif

#include "CATIVpmAFLAction.h"

class CATIVpmAFLAffectedObject_var;
class CATIVpmAFLXeff_var;
class CATIVpmAFLProduct_var;
class CATListValCATIVpmAFLXeff_var;
class CATIVpmAFLContext_var;
class CATIConfigurableObject_var;
class CATILinkableObject_var;
class CATICfgGroupModif_var;
class CATUnicodeString;

/**
 * Class interface to the ProductView methods.
 * <b>Role</b>: Defines the interfaces to methods to manage ProductViews.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLProductView : public CATBaseUnknown
{
     CATDeclareInterface ;  

public:
     //-----
/**
 * Retrieves the Configurable Object pointed to by this ProductView.
 *  @param oCfgObj
 *   The Configurable Object.
 */    
     virtual HRESULT GetValue(CATIConfigurableObject_var& oCfgObj)=0;

/**
 * Instead use ENOVINamedObject->get_Name();
 * Retrieves the ProductView name.
 *  @param oName
 *   The name.
 */                 
     virtual HRESULT GetName(CATUnicodeString& oName)=0;

/**
 * Retrieves the Product for this ProductView.
 *  @param oProduct
 *   The Product.
 */    
     virtual HRESULT GetRelatedProduct(CATIVpmAFLProduct_var& oProduct)=0;

/**
 * Retrieves the Action related to this ProductView.
 *  @param oAction
 *   The Action.
 */    
     virtual HRESULT GetRelatedAction(CATIVpmAFLAction_var& oAction)=0;
  
/**
 * Checks whether this Factory (Linkable) Object is already modified
 * in the current ProductView.
 *  @param iObj
 *   The Factory Object.
 *  @param oPointed
 *   The indicator flag.
 *   <br><b>Legal values</b>: 0 object is not modified, 1 object had been added,
 *   2 object has been deleted, 3 object has been both added and deleted.
 */    
     virtual HRESULT IsPointedByAMod(const CATILinkableObject_var& iObj, 
                                     int&                          oPointed)=0;

/**
 * should be obsolete in V5R5 but  STILL IN USE
 * Instead will use virtual HRESULT Action->AddContext(CATIVpmAFLContext_var& iContext); 
 * @nodoc
 */        
     virtual HRESULT SetContext(const CATIVpmAFLContext_var& iContext)=0; 

/**
 * should be obsolete in V5R5 but  STILL IN USE
 * Instead will use  virtual HRESULT Action->GetAllContexts(CATLISTV(CATIVpmAFLContext_var)& oListContext);
 * @nodoc
 */        
     virtual HRESULT GetContext(CATIVpmAFLContext_var& oContext)=0;

/**
 * Retrieves the creation date.
 *  @param oTime
 *   The creation date attribute.
 */             
     virtual HRESULT GetCreationDate(CATTime& oTime)=0;

/**
 * Retrieves the last modification date.
 *  @param oTime
 *   The last modification date attribute.
 */             
     virtual HRESULT GetLastModifDate(CATTime& oTime)=0;

/**
 * Dumps all the ProductView attributes
 *  @param iPrefix
 *   The prefix text for each output line.
 */                 
     virtual HRESULT Dump(char* iPrefix)=0;


/////////////////////////////////////////////////////////////////////////////////////////////
// NEW METHOD(S) IN V5R5
////////////////////////////////////////////////////////////////////////////////////////////
/**
 * Retrieves the Cfg Group Modif related to this ProductView.
 *  @param oModif
 *   The Group Modif object.
 */
     virtual HRESULT GetGroupModif(CATICfgGroupModif_var& oModif)=0;

/////////////////////////////////////////////////////////////////////////////////////////////
// OBSOLETE IN V5R5
////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Modify : obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use modif->Modify(CATICfgOperation::Operation iOperation...)
 */             
     virtual HRESULT Modify(CATIVpmAFLAction::Operation         iOperation,
                            const CATIVpmAFLAffectedObject_var& Obj1,
                            const CATIVpmAFLAffectedObject_var& Obj2)=0;

/**
 * SetName : obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use PV->GetValue(CFGOBJ) and CFGOBJ->GetName()
 */             
     virtual HRESULT SetName(const CATUnicodeString& iType)=0; 

/**
 * obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use virtual HRESULT Modif->GetAttachedObjectsPlus(SEQUENCE(CORBAAny)& oListObj)=0;
 */        
     virtual HRESULT GetAttachedObjectsPlus(SEQUENCE(CORBAAny)& oListObj)=0;

/**
 * obsolete in V5R5  ( ASSERT ) DO NOT USE
 * Instead use       virtual HRESULT    Modif->GetAttachedObjectsMinus(SEQUENCE(CORBAAny)& oListObj)=0;
 */        
     virtual HRESULT GetAttachedObjectsMinus(SEQUENCE(CORBAAny)& oListObj)=0;

/**
 * Delete : obsolete in V5R5 (ASSERT) DO NOT USE
 * Instead USE ENOVILifeCycleObject interface.
 */                 
     virtual HRESULT Delete()=0;

/**
 * SetValue : obsolete in V5R5 (ASSERT) DO NOT USE
 * The CV is set only once at creation using Action->AddProductView()
 */                 
     virtual HRESULT SetValue(const CATIConfigurableObject_var& oObj)=0;

/**
 * CopyTo : obsolete in V5R5 (ASSERT) DO NOT USE
 * (same problem as in the SetValue : manage data integrity).
 */             
     virtual HRESULT CopyTo(CATIVpmAFLProductView_var& oObj)=0;

/**
 * AFLXeff are removed in V5R5 : instead use GroupMod->GetModificationList; and Modif->CfgXeffMethod();
 * To recover GroupMod call PV->GetGroupMod(CATICfgGroupModif_var& GroupModif);
 * @nodoc
 */                   
     virtual HRESULT SetXeff(const CATICfgORExpression_var& iORExp,
                             const CATUnicodeString&        iIName,
                             CATIVpmAFLXeff_var&            oXeff)=0;

/**
 * AFLXeff are removed in V5R5 : instead use GroupMod->GetModificationList; and Modif->CfgXeffMethod();
 * To recover GroupMod call PV->GetGroupMod(CATICfgGroupModif_var& GroupModif);
 * @nodoc
 */                   
     virtual HRESULT UnsetXeff(CATIVpmAFLXeff_var& iXeff)=0;

/**
 * AFLXeff are removed in V5R5 : instead use GroupMod->GetModificationList; and Modif->CfgXeffMethod();
 * To recover GroupMod call PV->GetGroupMod(CATICfgGroupModif_var& GroupModif);
 * @nodoc
 */                   
     virtual HRESULT GetAllXeff(CATListValCATIVpmAFLXeff_var& oListXeff)=0;

/**
 * AFLXeff are removed in V5R5 : instead use GroupMod->GetModificationList; and Modif->CfgXeffMethod();
 * To recover GroupMod call PV->GetGroupMod(CATICfgGroupModif_var& GroupModif);
 * @nodoc
 */                   
     virtual HRESULT GetXeff(const CATUnicodeString& iXeffName,
                             CATIVpmAFLXeff_var&     oXeff)=0;

};
CATDeclareHandler(CATIVpmAFLProductView, CATBaseUnknown);
#endif

