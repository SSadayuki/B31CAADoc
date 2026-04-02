#ifndef __TIE_CATIAArrNomenclatureTree
#define __TIE_CATIAArrNomenclatureTree

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrNomenclatureTree.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrNomenclatureTree */
#define declare_TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
class TIECATIAArrNomenclatureTree##classe : public CATIAArrNomenclatureTree \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrNomenclatureTree, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_BaseNomenclatures(CATIAArrNomenclatures *& oNomenclatures); \
      virtual HRESULT __stdcall GetNomenclature(const CATBSTR & iTypeName, CATIAArrNomenclature *& oNomenclature); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrNomenclatureTree(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_BaseNomenclatures(CATIAArrNomenclatures *& oNomenclatures); \
virtual HRESULT __stdcall GetNomenclature(const CATBSTR & iTypeName, CATIAArrNomenclature *& oNomenclature); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrNomenclatureTree(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_BaseNomenclatures(CATIAArrNomenclatures *& oNomenclatures) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)get_BaseNomenclatures(oNomenclatures)); \
} \
HRESULT __stdcall  ENVTIEName::GetNomenclature(const CATBSTR & iTypeName, CATIAArrNomenclature *& oNomenclature) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)GetNomenclature(iTypeName,oNomenclature)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrNomenclatureTree,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrNomenclatureTree(classe)    TIECATIAArrNomenclatureTree##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrNomenclatureTree, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrNomenclatureTree, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrNomenclatureTree, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrNomenclatureTree, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrNomenclatureTree, classe) \
 \
HRESULT __stdcall  TIECATIAArrNomenclatureTree##classe::get_BaseNomenclatures(CATIAArrNomenclatures *& oNomenclatures) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNomenclatures); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BaseNomenclatures(oNomenclatures); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNomenclatures); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclatureTree##classe::GetNomenclature(const CATBSTR & iTypeName, CATIAArrNomenclature *& oNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iTypeName,&oNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNomenclature(iTypeName,oNomenclature); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iTypeName,&oNomenclature); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatureTree##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatureTree##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatureTree##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatureTree##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatureTree##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
declare_TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrNomenclatureTree##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrNomenclatureTree,"CATIAArrNomenclatureTree",CATIAArrNomenclatureTree::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrNomenclatureTree, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrNomenclatureTree##classe(classe::MetaObject(),CATIAArrNomenclatureTree::MetaObject(),(void *)CreateTIECATIAArrNomenclatureTree##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrNomenclatureTree(classe) \
 \
 \
declare_TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrNomenclatureTree##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrNomenclatureTree,"CATIAArrNomenclatureTree",CATIAArrNomenclatureTree::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrNomenclatureTree(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrNomenclatureTree, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrNomenclatureTree##classe(classe::MetaObject(),CATIAArrNomenclatureTree::MetaObject(),(void *)CreateTIECATIAArrNomenclatureTree##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrNomenclatureTree(classe) TIE_CATIAArrNomenclatureTree(classe)
#else
#define BOA_CATIAArrNomenclatureTree(classe) CATImplementBOA(CATIAArrNomenclatureTree, classe)
#endif

#endif
