#ifndef __TIE_ENOIACD5Engine
#define __TIE_ENOIACD5Engine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "ENOIACD5Engine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIACD5Engine */
#define declare_TIE_ENOIACD5Engine(classe) \
 \
 \
class TIEENOIACD5Engine##classe : public ENOIACD5Engine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIACD5Engine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_RelatedDesigns(CATBSTR & oRelatedDesigns); \
      virtual HRESULT __stdcall put_RelatedDesigns(const CATBSTR & iRelatedDesigns); \
      virtual HRESULT __stdcall get_ExpandMode(CATBSTR & oExpandMode); \
      virtual HRESULT __stdcall put_ExpandMode(const CATBSTR & iExpandMode); \
      virtual HRESULT __stdcall get_IncludeAllChildren(CAT_VARIANT_BOOL & oIncludeAllChildren); \
      virtual HRESULT __stdcall put_IncludeAllChildren(CAT_VARIANT_BOOL iIncludeAllChildren); \
      virtual HRESULT __stdcall Connect(const CATBSTR & iUserName, const CATBSTR & iUserPassword, const CATBSTR & iSecurityContext); \
      virtual HRESULT __stdcall Disconnect(); \
      virtual HRESULT __stdcall IsConnected(CAT_VARIANT_BOOL & oIsConnected); \
      virtual HRESULT __stdcall GetIDFromTNR(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, ENOIACD5ID *& oCD5ID); \
      virtual HRESULT __stdcall GetIDFromTNRV(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, const CATBSTR & iVersion, ENOIACD5ID *& oCD5ID); \
      virtual HRESULT __stdcall GetStructure(ENOIACD5ID * iCD5ID, ENOIACD5Structure *& oCD5Structure); \
      virtual HRESULT __stdcall Open(ENOIACD5ID * iCD5ID, CATIADocument *& oDocument); \
      virtual HRESULT __stdcall PartialOpen(ENOIACD5Structure * iCD5Structure, CATIADocument *& oDocument); \
      virtual HRESULT __stdcall InteractiveOpen(ENOIACD5ID * iCD5ID); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_ENOIACD5Engine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_RelatedDesigns(CATBSTR & oRelatedDesigns); \
virtual HRESULT __stdcall put_RelatedDesigns(const CATBSTR & iRelatedDesigns); \
virtual HRESULT __stdcall get_ExpandMode(CATBSTR & oExpandMode); \
virtual HRESULT __stdcall put_ExpandMode(const CATBSTR & iExpandMode); \
virtual HRESULT __stdcall get_IncludeAllChildren(CAT_VARIANT_BOOL & oIncludeAllChildren); \
virtual HRESULT __stdcall put_IncludeAllChildren(CAT_VARIANT_BOOL iIncludeAllChildren); \
virtual HRESULT __stdcall Connect(const CATBSTR & iUserName, const CATBSTR & iUserPassword, const CATBSTR & iSecurityContext); \
virtual HRESULT __stdcall Disconnect(); \
virtual HRESULT __stdcall IsConnected(CAT_VARIANT_BOOL & oIsConnected); \
virtual HRESULT __stdcall GetIDFromTNR(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, ENOIACD5ID *& oCD5ID); \
virtual HRESULT __stdcall GetIDFromTNRV(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, const CATBSTR & iVersion, ENOIACD5ID *& oCD5ID); \
virtual HRESULT __stdcall GetStructure(ENOIACD5ID * iCD5ID, ENOIACD5Structure *& oCD5Structure); \
virtual HRESULT __stdcall Open(ENOIACD5ID * iCD5ID, CATIADocument *& oDocument); \
virtual HRESULT __stdcall PartialOpen(ENOIACD5Structure * iCD5Structure, CATIADocument *& oDocument); \
virtual HRESULT __stdcall InteractiveOpen(ENOIACD5ID * iCD5ID); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_ENOIACD5Engine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_RelatedDesigns(CATBSTR & oRelatedDesigns) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)get_RelatedDesigns(oRelatedDesigns)); \
} \
HRESULT __stdcall  ENVTIEName::put_RelatedDesigns(const CATBSTR & iRelatedDesigns) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)put_RelatedDesigns(iRelatedDesigns)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExpandMode(CATBSTR & oExpandMode) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)get_ExpandMode(oExpandMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExpandMode(const CATBSTR & iExpandMode) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)put_ExpandMode(iExpandMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_IncludeAllChildren(CAT_VARIANT_BOOL & oIncludeAllChildren) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)get_IncludeAllChildren(oIncludeAllChildren)); \
} \
HRESULT __stdcall  ENVTIEName::put_IncludeAllChildren(CAT_VARIANT_BOOL iIncludeAllChildren) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)put_IncludeAllChildren(iIncludeAllChildren)); \
} \
HRESULT __stdcall  ENVTIEName::Connect(const CATBSTR & iUserName, const CATBSTR & iUserPassword, const CATBSTR & iSecurityContext) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)Connect(iUserName,iUserPassword,iSecurityContext)); \
} \
HRESULT __stdcall  ENVTIEName::Disconnect() \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)Disconnect()); \
} \
HRESULT __stdcall  ENVTIEName::IsConnected(CAT_VARIANT_BOOL & oIsConnected) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)IsConnected(oIsConnected)); \
} \
HRESULT __stdcall  ENVTIEName::GetIDFromTNR(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, ENOIACD5ID *& oCD5ID) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)GetIDFromTNR(iType,iName,iRevision,oCD5ID)); \
} \
HRESULT __stdcall  ENVTIEName::GetIDFromTNRV(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, const CATBSTR & iVersion, ENOIACD5ID *& oCD5ID) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)GetIDFromTNRV(iType,iName,iRevision,iVersion,oCD5ID)); \
} \
HRESULT __stdcall  ENVTIEName::GetStructure(ENOIACD5ID * iCD5ID, ENOIACD5Structure *& oCD5Structure) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)GetStructure(iCD5ID,oCD5Structure)); \
} \
HRESULT __stdcall  ENVTIEName::Open(ENOIACD5ID * iCD5ID, CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)Open(iCD5ID,oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::PartialOpen(ENOIACD5Structure * iCD5Structure, CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)PartialOpen(iCD5Structure,oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::InteractiveOpen(ENOIACD5ID * iCD5ID) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)InteractiveOpen(iCD5ID)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(ENOIACD5Engine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIACD5Engine(classe)    TIEENOIACD5Engine##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIACD5Engine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIACD5Engine, classe) \
 \
 \
CATImplementTIEMethods(ENOIACD5Engine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIACD5Engine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIACD5Engine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIACD5Engine, classe) \
 \
HRESULT __stdcall  TIEENOIACD5Engine##classe::get_RelatedDesigns(CATBSTR & oRelatedDesigns) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRelatedDesigns); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RelatedDesigns(oRelatedDesigns); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRelatedDesigns); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::put_RelatedDesigns(const CATBSTR & iRelatedDesigns) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRelatedDesigns); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RelatedDesigns(iRelatedDesigns); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRelatedDesigns); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::get_ExpandMode(CATBSTR & oExpandMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oExpandMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExpandMode(oExpandMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oExpandMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::put_ExpandMode(const CATBSTR & iExpandMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iExpandMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExpandMode(iExpandMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iExpandMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::get_IncludeAllChildren(CAT_VARIANT_BOOL & oIncludeAllChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIncludeAllChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IncludeAllChildren(oIncludeAllChildren); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIncludeAllChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::put_IncludeAllChildren(CAT_VARIANT_BOOL iIncludeAllChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIncludeAllChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IncludeAllChildren(iIncludeAllChildren); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIncludeAllChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::Connect(const CATBSTR & iUserName, const CATBSTR & iUserPassword, const CATBSTR & iSecurityContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iUserName,&iUserPassword,&iSecurityContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connect(iUserName,iUserPassword,iSecurityContext); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iUserName,&iUserPassword,&iSecurityContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::Disconnect() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Disconnect(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::IsConnected(CAT_VARIANT_BOOL & oIsConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsConnected(oIsConnected); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::GetIDFromTNR(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, ENOIACD5ID *& oCD5ID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iType,&iName,&iRevision,&oCD5ID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIDFromTNR(iType,iName,iRevision,oCD5ID); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iType,&iName,&iRevision,&oCD5ID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::GetIDFromTNRV(const CATBSTR & iType, const CATBSTR & iName, const CATBSTR & iRevision, const CATBSTR & iVersion, ENOIACD5ID *& oCD5ID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iType,&iName,&iRevision,&iVersion,&oCD5ID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIDFromTNRV(iType,iName,iRevision,iVersion,oCD5ID); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iType,&iName,&iRevision,&iVersion,&oCD5ID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::GetStructure(ENOIACD5ID * iCD5ID, ENOIACD5Structure *& oCD5Structure) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCD5ID,&oCD5Structure); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStructure(iCD5ID,oCD5Structure); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCD5ID,&oCD5Structure); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::Open(ENOIACD5ID * iCD5ID, CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iCD5ID,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Open(iCD5ID,oDocument); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iCD5ID,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::PartialOpen(ENOIACD5Structure * iCD5Structure, CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCD5Structure,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PartialOpen(iCD5Structure,oDocument); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCD5Structure,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Engine##classe::InteractiveOpen(ENOIACD5ID * iCD5ID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCD5ID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InteractiveOpen(iCD5ID); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCD5ID); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Engine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Engine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Engine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Engine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Engine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIACD5Engine(classe) \
 \
 \
declare_TIE_ENOIACD5Engine(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5Engine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5Engine,"ENOIACD5Engine",ENOIACD5Engine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5Engine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIACD5Engine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5Engine##classe(classe::MetaObject(),ENOIACD5Engine::MetaObject(),(void *)CreateTIEENOIACD5Engine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIACD5Engine(classe) \
 \
 \
declare_TIE_ENOIACD5Engine(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5Engine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5Engine,"ENOIACD5Engine",ENOIACD5Engine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5Engine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIACD5Engine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5Engine##classe(classe::MetaObject(),ENOIACD5Engine::MetaObject(),(void *)CreateTIEENOIACD5Engine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIACD5Engine(classe) TIE_ENOIACD5Engine(classe)
#else
#define BOA_ENOIACD5Engine(classe) CATImplementBOA(ENOIACD5Engine, classe)
#endif

#endif
