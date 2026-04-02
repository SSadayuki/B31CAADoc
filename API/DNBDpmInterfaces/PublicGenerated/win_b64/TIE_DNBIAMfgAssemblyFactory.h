#ifndef __TIE_DNBIAMfgAssemblyFactory
#define __TIE_DNBIAMfgAssemblyFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIAMfgAssemblyFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIAMfgAssemblyFactory */
#define declare_TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
class TIEDNBIAMfgAssemblyFactory##classe : public DNBIAMfgAssemblyFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIAMfgAssemblyFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateMfgAssembly(const CATBSTR & iNameBSTR, const CATBSTR & iPartNumberBSTR, DNBIAMfgAssemblyType iType, CATIAItem *& oMfgAssembly); \
      virtual HRESULT __stdcall GetNumberOfMfgAssemblies(CATLONG & oNumOfMfgAssemblies); \
      virtual HRESULT __stdcall RetrieveMfgAssemblyAtIndex(const CATVariant & iIndex, CATIAItem *& oItem); \
      virtual HRESULT __stdcall RetrieveMfgAssembly(const CATBSTR & iNameBSTR, CATSafeArrayVariant & oMfgAssemblies, CATLONG & oNumOfMfgAssemblies); \
      virtual HRESULT __stdcall RemoveMfgAssembly(CATIAItem * iMfgAssembly); \
      virtual HRESULT __stdcall RetriveALLMfgAssy(DNBIAMfgAssemblyType iType, CATSafeArrayVariant & oAllMAs, CATLONG & oNumOfMfgAssemblies); \
      virtual HRESULT __stdcall GetNumberofALLMfgAssy(DNBIAMfgAssemblyType iType, CATLONG & oNumOfMfgAssemblies); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIAMfgAssemblyFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateMfgAssembly(const CATBSTR & iNameBSTR, const CATBSTR & iPartNumberBSTR, DNBIAMfgAssemblyType iType, CATIAItem *& oMfgAssembly); \
virtual HRESULT __stdcall GetNumberOfMfgAssemblies(CATLONG & oNumOfMfgAssemblies); \
virtual HRESULT __stdcall RetrieveMfgAssemblyAtIndex(const CATVariant & iIndex, CATIAItem *& oItem); \
virtual HRESULT __stdcall RetrieveMfgAssembly(const CATBSTR & iNameBSTR, CATSafeArrayVariant & oMfgAssemblies, CATLONG & oNumOfMfgAssemblies); \
virtual HRESULT __stdcall RemoveMfgAssembly(CATIAItem * iMfgAssembly); \
virtual HRESULT __stdcall RetriveALLMfgAssy(DNBIAMfgAssemblyType iType, CATSafeArrayVariant & oAllMAs, CATLONG & oNumOfMfgAssemblies); \
virtual HRESULT __stdcall GetNumberofALLMfgAssy(DNBIAMfgAssemblyType iType, CATLONG & oNumOfMfgAssemblies); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIAMfgAssemblyFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateMfgAssembly(const CATBSTR & iNameBSTR, const CATBSTR & iPartNumberBSTR, DNBIAMfgAssemblyType iType, CATIAItem *& oMfgAssembly) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)CreateMfgAssembly(iNameBSTR,iPartNumberBSTR,iType,oMfgAssembly)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfMfgAssemblies(CATLONG & oNumOfMfgAssemblies) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)GetNumberOfMfgAssemblies(oNumOfMfgAssemblies)); \
} \
HRESULT __stdcall  ENVTIEName::RetrieveMfgAssemblyAtIndex(const CATVariant & iIndex, CATIAItem *& oItem) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)RetrieveMfgAssemblyAtIndex(iIndex,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::RetrieveMfgAssembly(const CATBSTR & iNameBSTR, CATSafeArrayVariant & oMfgAssemblies, CATLONG & oNumOfMfgAssemblies) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)RetrieveMfgAssembly(iNameBSTR,oMfgAssemblies,oNumOfMfgAssemblies)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMfgAssembly(CATIAItem * iMfgAssembly) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)RemoveMfgAssembly(iMfgAssembly)); \
} \
HRESULT __stdcall  ENVTIEName::RetriveALLMfgAssy(DNBIAMfgAssemblyType iType, CATSafeArrayVariant & oAllMAs, CATLONG & oNumOfMfgAssemblies) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)RetriveALLMfgAssy(iType,oAllMAs,oNumOfMfgAssemblies)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberofALLMfgAssy(DNBIAMfgAssemblyType iType, CATLONG & oNumOfMfgAssemblies) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)GetNumberofALLMfgAssy(iType,oNumOfMfgAssemblies)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIAMfgAssemblyFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIAMfgAssemblyFactory(classe)    TIEDNBIAMfgAssemblyFactory##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIAMfgAssemblyFactory, classe) \
 \
 \
CATImplementTIEMethods(DNBIAMfgAssemblyFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIAMfgAssemblyFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIAMfgAssemblyFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIAMfgAssemblyFactory, classe) \
 \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::CreateMfgAssembly(const CATBSTR & iNameBSTR, const CATBSTR & iPartNumberBSTR, DNBIAMfgAssemblyType iType, CATIAItem *& oMfgAssembly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iNameBSTR,&iPartNumberBSTR,&iType,&oMfgAssembly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateMfgAssembly(iNameBSTR,iPartNumberBSTR,iType,oMfgAssembly); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iNameBSTR,&iPartNumberBSTR,&iType,&oMfgAssembly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::GetNumberOfMfgAssemblies(CATLONG & oNumOfMfgAssemblies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNumOfMfgAssemblies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfMfgAssemblies(oNumOfMfgAssemblies); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNumOfMfgAssemblies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::RetrieveMfgAssemblyAtIndex(const CATVariant & iIndex, CATIAItem *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetrieveMfgAssemblyAtIndex(iIndex,oItem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::RetrieveMfgAssembly(const CATBSTR & iNameBSTR, CATSafeArrayVariant & oMfgAssemblies, CATLONG & oNumOfMfgAssemblies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNameBSTR,&oMfgAssemblies,&oNumOfMfgAssemblies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetrieveMfgAssembly(iNameBSTR,oMfgAssemblies,oNumOfMfgAssemblies); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNameBSTR,&oMfgAssemblies,&oNumOfMfgAssemblies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::RemoveMfgAssembly(CATIAItem * iMfgAssembly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iMfgAssembly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMfgAssembly(iMfgAssembly); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iMfgAssembly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::RetriveALLMfgAssy(DNBIAMfgAssemblyType iType, CATSafeArrayVariant & oAllMAs, CATLONG & oNumOfMfgAssemblies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iType,&oAllMAs,&oNumOfMfgAssemblies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetriveALLMfgAssy(iType,oAllMAs,oNumOfMfgAssemblies); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iType,&oAllMAs,&oNumOfMfgAssemblies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIAMfgAssemblyFactory##classe::GetNumberofALLMfgAssy(DNBIAMfgAssemblyType iType, CATLONG & oNumOfMfgAssemblies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iType,&oNumOfMfgAssemblies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberofALLMfgAssy(iType,oNumOfMfgAssemblies); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iType,&oNumOfMfgAssemblies); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssemblyFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssemblyFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssemblyFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssemblyFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIAMfgAssemblyFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
declare_TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIAMfgAssemblyFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIAMfgAssemblyFactory,"DNBIAMfgAssemblyFactory",DNBIAMfgAssemblyFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIAMfgAssemblyFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIAMfgAssemblyFactory##classe(classe::MetaObject(),DNBIAMfgAssemblyFactory::MetaObject(),(void *)CreateTIEDNBIAMfgAssemblyFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIAMfgAssemblyFactory(classe) \
 \
 \
declare_TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIAMfgAssemblyFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIAMfgAssemblyFactory,"DNBIAMfgAssemblyFactory",DNBIAMfgAssemblyFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIAMfgAssemblyFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIAMfgAssemblyFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIAMfgAssemblyFactory##classe(classe::MetaObject(),DNBIAMfgAssemblyFactory::MetaObject(),(void *)CreateTIEDNBIAMfgAssemblyFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIAMfgAssemblyFactory(classe) TIE_DNBIAMfgAssemblyFactory(classe)
#else
#define BOA_DNBIAMfgAssemblyFactory(classe) CATImplementBOA(DNBIAMfgAssemblyFactory, classe)
#endif

#endif
