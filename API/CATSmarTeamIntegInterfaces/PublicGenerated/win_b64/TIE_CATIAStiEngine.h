#ifndef __TIE_CATIAStiEngine
#define __TIE_CATIAStiEngine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStiEngine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStiEngine */
#define declare_TIE_CATIAStiEngine(classe) \
 \
 \
class TIECATIAStiEngine##classe : public CATIAStiEngine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStiEngine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_IntegrationType(CATBSTR & oType); \
      virtual HRESULT __stdcall get_UseGraphicalUI(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_UseGraphicalUI(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall Connect(const CATBSTR & iUserLogin, const CATBSTR & iUserPassword); \
      virtual HRESULT __stdcall Disconnect(); \
      virtual HRESULT __stdcall IsConnected(CAT_VARIANT_BOOL & oIsConnected); \
      virtual HRESULT __stdcall GetStiDBItemFromCATBSTR(const CATBSTR & iFullPath, CATIAStiDBItem *& oStiDBItem); \
      virtual HRESULT __stdcall GetStiDBItemFromAnyObject(CATIABase * iAnyObject, CATIAStiDBItem *& oStiDBItem); \
      virtual HRESULT __stdcall GetSMARTEAMObjectID(CATIAStiDBItem * iStiDBItem, CATLONG & oobjectId); \
      virtual HRESULT __stdcall GetSMARTEAMClassID(CATIAStiDBItem * iStiDBItem, short & oclassId); \
      virtual HRESULT __stdcall Save(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall LifeCycleCheckIn(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall LifeCycleRelease(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall LifeCycleCheckOut(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall LifeCycleNewRelease(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall LifeCycleUndoCheckOut(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall BuildDocDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem); \
      virtual HRESULT __stdcall BuildFileDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem); \
      virtual HRESULT __stdcall LifeCycleCheckOutPropagated(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall LifeCycleNewReleasePropagated(CATIAStiDBItem * iStiDBItem); \
      virtual HRESULT __stdcall RefreshInfo(); \
      virtual HRESULT __stdcall GetTeamPDMURL(CATIAStiDBItem * iStiDBItem, CATBSTR & oTeamPDMURL); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStiEngine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_IntegrationType(CATBSTR & oType); \
virtual HRESULT __stdcall get_UseGraphicalUI(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_UseGraphicalUI(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall Connect(const CATBSTR & iUserLogin, const CATBSTR & iUserPassword); \
virtual HRESULT __stdcall Disconnect(); \
virtual HRESULT __stdcall IsConnected(CAT_VARIANT_BOOL & oIsConnected); \
virtual HRESULT __stdcall GetStiDBItemFromCATBSTR(const CATBSTR & iFullPath, CATIAStiDBItem *& oStiDBItem); \
virtual HRESULT __stdcall GetStiDBItemFromAnyObject(CATIABase * iAnyObject, CATIAStiDBItem *& oStiDBItem); \
virtual HRESULT __stdcall GetSMARTEAMObjectID(CATIAStiDBItem * iStiDBItem, CATLONG & oobjectId); \
virtual HRESULT __stdcall GetSMARTEAMClassID(CATIAStiDBItem * iStiDBItem, short & oclassId); \
virtual HRESULT __stdcall Save(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall LifeCycleCheckIn(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall LifeCycleRelease(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall LifeCycleCheckOut(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall LifeCycleNewRelease(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall LifeCycleUndoCheckOut(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall BuildDocDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem); \
virtual HRESULT __stdcall BuildFileDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem); \
virtual HRESULT __stdcall LifeCycleCheckOutPropagated(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall LifeCycleNewReleasePropagated(CATIAStiDBItem * iStiDBItem); \
virtual HRESULT __stdcall RefreshInfo(); \
virtual HRESULT __stdcall GetTeamPDMURL(CATIAStiDBItem * iStiDBItem, CATBSTR & oTeamPDMURL); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStiEngine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_IntegrationType(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)get_IntegrationType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_UseGraphicalUI(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)get_UseGraphicalUI(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_UseGraphicalUI(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)put_UseGraphicalUI(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::Connect(const CATBSTR & iUserLogin, const CATBSTR & iUserPassword) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)Connect(iUserLogin,iUserPassword)); \
} \
HRESULT __stdcall  ENVTIEName::Disconnect() \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)Disconnect()); \
} \
HRESULT __stdcall  ENVTIEName::IsConnected(CAT_VARIANT_BOOL & oIsConnected) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)IsConnected(oIsConnected)); \
} \
HRESULT __stdcall  ENVTIEName::GetStiDBItemFromCATBSTR(const CATBSTR & iFullPath, CATIAStiDBItem *& oStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)GetStiDBItemFromCATBSTR(iFullPath,oStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::GetStiDBItemFromAnyObject(CATIABase * iAnyObject, CATIAStiDBItem *& oStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)GetStiDBItemFromAnyObject(iAnyObject,oStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::GetSMARTEAMObjectID(CATIAStiDBItem * iStiDBItem, CATLONG & oobjectId) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)GetSMARTEAMObjectID(iStiDBItem,oobjectId)); \
} \
HRESULT __stdcall  ENVTIEName::GetSMARTEAMClassID(CATIAStiDBItem * iStiDBItem, short & oclassId) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)GetSMARTEAMClassID(iStiDBItem,oclassId)); \
} \
HRESULT __stdcall  ENVTIEName::Save(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)Save(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleCheckIn(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleCheckIn(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleRelease(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleRelease(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleCheckOut(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleCheckOut(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleNewRelease(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleNewRelease(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleUndoCheckOut(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleUndoCheckOut(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::BuildDocDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)BuildDocDBItemFromSmarTeamID(iobjectId,iclassId,oStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::BuildFileDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)BuildFileDBItemFromSmarTeamID(iobjectId,iclassId,oStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleCheckOutPropagated(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleCheckOutPropagated(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LifeCycleNewReleasePropagated(CATIAStiDBItem * iStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)LifeCycleNewReleasePropagated(iStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::RefreshInfo() \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)RefreshInfo()); \
} \
HRESULT __stdcall  ENVTIEName::GetTeamPDMURL(CATIAStiDBItem * iStiDBItem, CATBSTR & oTeamPDMURL) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)GetTeamPDMURL(iStiDBItem,oTeamPDMURL)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStiEngine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStiEngine(classe)    TIECATIAStiEngine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStiEngine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStiEngine, classe) \
 \
 \
CATImplementTIEMethods(CATIAStiEngine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStiEngine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStiEngine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStiEngine, classe) \
 \
HRESULT __stdcall  TIECATIAStiEngine##classe::get_IntegrationType(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntegrationType(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::get_UseGraphicalUI(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UseGraphicalUI(oIsActive); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::put_UseGraphicalUI(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UseGraphicalUI(iIsActive); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::Connect(const CATBSTR & iUserLogin, const CATBSTR & iUserPassword) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iUserLogin,&iUserPassword); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connect(iUserLogin,iUserPassword); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iUserLogin,&iUserPassword); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::Disconnect() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Disconnect(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::IsConnected(CAT_VARIANT_BOOL & oIsConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oIsConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsConnected(oIsConnected); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oIsConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::GetStiDBItemFromCATBSTR(const CATBSTR & iFullPath, CATIAStiDBItem *& oStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iFullPath,&oStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStiDBItemFromCATBSTR(iFullPath,oStiDBItem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iFullPath,&oStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::GetStiDBItemFromAnyObject(CATIABase * iAnyObject, CATIAStiDBItem *& oStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAnyObject,&oStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStiDBItemFromAnyObject(iAnyObject,oStiDBItem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAnyObject,&oStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::GetSMARTEAMObjectID(CATIAStiDBItem * iStiDBItem, CATLONG & oobjectId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iStiDBItem,&oobjectId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSMARTEAMObjectID(iStiDBItem,oobjectId); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iStiDBItem,&oobjectId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::GetSMARTEAMClassID(CATIAStiDBItem * iStiDBItem, short & oclassId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iStiDBItem,&oclassId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSMARTEAMClassID(iStiDBItem,oclassId); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iStiDBItem,&oclassId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::Save(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Save(iStiDBItem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleCheckIn(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleCheckIn(iStiDBItem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleRelease(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleRelease(iStiDBItem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleCheckOut(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleCheckOut(iStiDBItem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleNewRelease(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleNewRelease(iStiDBItem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleUndoCheckOut(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleUndoCheckOut(iStiDBItem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::BuildDocDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iobjectId,&iclassId,&oStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildDocDBItemFromSmarTeamID(iobjectId,iclassId,oStiDBItem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iobjectId,&iclassId,&oStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::BuildFileDBItemFromSmarTeamID(CATLONG iobjectId, short iclassId, CATIAStiDBItem *& oStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iobjectId,&iclassId,&oStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildFileDBItemFromSmarTeamID(iobjectId,iclassId,oStiDBItem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iobjectId,&iclassId,&oStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleCheckOutPropagated(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleCheckOutPropagated(iStiDBItem); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::LifeCycleNewReleasePropagated(CATIAStiDBItem * iStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LifeCycleNewReleasePropagated(iStiDBItem); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::RefreshInfo() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RefreshInfo(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiEngine##classe::GetTeamPDMURL(CATIAStiDBItem * iStiDBItem, CATBSTR & oTeamPDMURL) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iStiDBItem,&oTeamPDMURL); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTeamPDMURL(iStiDBItem,oTeamPDMURL); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iStiDBItem,&oTeamPDMURL); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiEngine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiEngine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiEngine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiEngine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiEngine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStiEngine(classe) \
 \
 \
declare_TIE_CATIAStiEngine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiEngine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiEngine,"CATIAStiEngine",CATIAStiEngine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiEngine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStiEngine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiEngine##classe(classe::MetaObject(),CATIAStiEngine::MetaObject(),(void *)CreateTIECATIAStiEngine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStiEngine(classe) \
 \
 \
declare_TIE_CATIAStiEngine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiEngine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiEngine,"CATIAStiEngine",CATIAStiEngine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiEngine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStiEngine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiEngine##classe(classe::MetaObject(),CATIAStiEngine::MetaObject(),(void *)CreateTIECATIAStiEngine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStiEngine(classe) TIE_CATIAStiEngine(classe)
#else
#define BOA_CATIAStiEngine(classe) CATImplementBOA(CATIAStiEngine, classe)
#endif

#endif
