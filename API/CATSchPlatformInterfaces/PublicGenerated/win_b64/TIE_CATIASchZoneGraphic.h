#ifndef __TIE_CATIASchZoneGraphic
#define __TIE_CATIASchZoneGraphic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchZoneGraphic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchZoneGraphic */
#define declare_TIE_CATIASchZoneGraphic(classe) \
 \
 \
class TIECATIASchZoneGraphic##classe : public CATIASchZoneGraphic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchZoneGraphic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddGraphicalRepresentation(CATIASchGRRZone * iGRRToAdd); \
      virtual HRESULT __stdcall RemoveGraphicalRepresentation(CATIASchGRRZone * iGRRToRemove); \
      virtual HRESULT __stdcall ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchZoneGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddGraphicalRepresentation(CATIASchGRRZone * iGRRToAdd); \
virtual HRESULT __stdcall RemoveGraphicalRepresentation(CATIASchGRRZone * iGRRToRemove); \
virtual HRESULT __stdcall ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchZoneGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddGraphicalRepresentation(CATIASchGRRZone * iGRRToAdd) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)AddGraphicalRepresentation(iGRRToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGraphicalRepresentation(CATIASchGRRZone * iGRRToRemove) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveGraphicalRepresentation(iGRRToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)ListGraphicalRepresentations(oLGRR)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchZoneGraphic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchZoneGraphic(classe)    TIECATIASchZoneGraphic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchZoneGraphic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchZoneGraphic, classe) \
 \
 \
CATImplementTIEMethods(CATIASchZoneGraphic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchZoneGraphic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchZoneGraphic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchZoneGraphic, classe) \
 \
HRESULT __stdcall  TIECATIASchZoneGraphic##classe::AddGraphicalRepresentation(CATIASchGRRZone * iGRRToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGraphicalRepresentation(iGRRToAdd); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchZoneGraphic##classe::RemoveGraphicalRepresentation(CATIASchGRRZone * iGRRToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGraphicalRepresentation(iGRRToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchZoneGraphic##classe::ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGraphicalRepresentations(oLGRR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchZoneGraphic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchZoneGraphic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchZoneGraphic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchZoneGraphic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchZoneGraphic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchZoneGraphic(classe) \
 \
 \
declare_TIE_CATIASchZoneGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchZoneGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchZoneGraphic,"CATIASchZoneGraphic",CATIASchZoneGraphic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchZoneGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchZoneGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchZoneGraphic##classe(classe::MetaObject(),CATIASchZoneGraphic::MetaObject(),(void *)CreateTIECATIASchZoneGraphic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchZoneGraphic(classe) \
 \
 \
declare_TIE_CATIASchZoneGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchZoneGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchZoneGraphic,"CATIASchZoneGraphic",CATIASchZoneGraphic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchZoneGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchZoneGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchZoneGraphic##classe(classe::MetaObject(),CATIASchZoneGraphic::MetaObject(),(void *)CreateTIECATIASchZoneGraphic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchZoneGraphic(classe) TIE_CATIASchZoneGraphic(classe)
#else
#define BOA_CATIASchZoneGraphic(classe) CATImplementBOA(CATIASchZoneGraphic, classe)
#endif

#endif
