#ifndef __TIE_CATIAPattern
#define __TIE_CATIAPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPattern */
#define declare_TIE_CATIAPattern(classe) \
 \
 \
class TIECATIAPattern##classe : public CATIAPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ItemToCopy(CATIABase *& oToCopy); \
      virtual HRESULT __stdcall put_ItemToCopy(CATIABase * iToCopy); \
      virtual HRESULT __stdcall get_RotationAngle(CATIAAngle *& oRotationAngle); \
      virtual HRESULT __stdcall ActivatePosition(CATLONG iPosU, CATLONG iPosV); \
      virtual HRESULT __stdcall DesactivatePosition(CATLONG iPosU, CATLONG iPosV); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ItemToCopy(CATIABase *& oToCopy); \
virtual HRESULT __stdcall put_ItemToCopy(CATIABase * iToCopy); \
virtual HRESULT __stdcall get_RotationAngle(CATIAAngle *& oRotationAngle); \
virtual HRESULT __stdcall ActivatePosition(CATLONG iPosU, CATLONG iPosV); \
virtual HRESULT __stdcall DesactivatePosition(CATLONG iPosU, CATLONG iPosV); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ItemToCopy(CATIABase *& oToCopy) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)get_ItemToCopy(oToCopy)); \
} \
HRESULT __stdcall  ENVTIEName::put_ItemToCopy(CATIABase * iToCopy) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)put_ItemToCopy(iToCopy)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationAngle(CATIAAngle *& oRotationAngle) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)get_RotationAngle(oRotationAngle)); \
} \
HRESULT __stdcall  ENVTIEName::ActivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)ActivatePosition(iPosU,iPosV)); \
} \
HRESULT __stdcall  ENVTIEName::DesactivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)DesactivatePosition(iPosU,iPosV)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPattern,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPattern(classe)    TIECATIAPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIAPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPattern, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPattern, classe) \
 \
HRESULT __stdcall  TIECATIAPattern##classe::get_ItemToCopy(CATIABase *& oToCopy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oToCopy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ItemToCopy(oToCopy); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oToCopy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPattern##classe::put_ItemToCopy(CATIABase * iToCopy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iToCopy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ItemToCopy(iToCopy); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iToCopy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPattern##classe::get_RotationAngle(CATIAAngle *& oRotationAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRotationAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationAngle(oRotationAngle); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRotationAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPattern##classe::ActivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPosU,&iPosV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivatePosition(iPosU,iPosV); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPosU,&iPosV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPattern##classe::DesactivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPosU,&iPosV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivatePosition(iPosU,iPosV); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPosU,&iPosV); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPattern##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPattern##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPattern##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPattern##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPattern##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPattern(classe) \
 \
 \
declare_TIE_CATIAPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPattern,"CATIAPattern",CATIAPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPattern##classe(classe::MetaObject(),CATIAPattern::MetaObject(),(void *)CreateTIECATIAPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPattern(classe) \
 \
 \
declare_TIE_CATIAPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPattern,"CATIAPattern",CATIAPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPattern##classe(classe::MetaObject(),CATIAPattern::MetaObject(),(void *)CreateTIECATIAPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPattern(classe) TIE_CATIAPattern(classe)
#else
#define BOA_CATIAPattern(classe) CATImplementBOA(CATIAPattern, classe)
#endif

#endif
