#ifndef __TIE_CATIADatumTarget
#define __TIE_CATIADatumTarget

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIADatumTarget.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADatumTarget */
#define declare_TIE_CATIADatumTarget(classe) \
 \
 \
class TIECATIADatumTarget##classe : public CATIADatumTarget \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADatumTarget, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Label(CATBSTR & oLabel); \
      virtual HRESULT __stdcall put_Label(const CATBSTR & iLabel); \
      virtual HRESULT __stdcall get_Datum(CATIABase *& oDatum); \
      virtual HRESULT __stdcall SetAreaForm(const CATBSTR & iAreaForm); \
      virtual HRESULT __stdcall GetAreaForm(CATBSTR & oAreaForm); \
      virtual HRESULT __stdcall SetCircularAreaSize(double iAreaSize); \
      virtual HRESULT __stdcall GetCircularAreaSize(double & oAreaSize); \
      virtual HRESULT __stdcall SetRectangularAreaSize(double iLength, double iWidth); \
      virtual HRESULT __stdcall GetRectangularAreaSize(double & oLength, double & oWidth); \
      virtual HRESULT __stdcall SetMovableDirectionTTRS(CATIAUserSurface * ipDirectionTTRS); \
      virtual HRESULT __stdcall GetMovableDirectionTTRS(CATIAUserSurface *& opDirectionTTRS); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADatumTarget(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Label(CATBSTR & oLabel); \
virtual HRESULT __stdcall put_Label(const CATBSTR & iLabel); \
virtual HRESULT __stdcall get_Datum(CATIABase *& oDatum); \
virtual HRESULT __stdcall SetAreaForm(const CATBSTR & iAreaForm); \
virtual HRESULT __stdcall GetAreaForm(CATBSTR & oAreaForm); \
virtual HRESULT __stdcall SetCircularAreaSize(double iAreaSize); \
virtual HRESULT __stdcall GetCircularAreaSize(double & oAreaSize); \
virtual HRESULT __stdcall SetRectangularAreaSize(double iLength, double iWidth); \
virtual HRESULT __stdcall GetRectangularAreaSize(double & oLength, double & oWidth); \
virtual HRESULT __stdcall SetMovableDirectionTTRS(CATIAUserSurface * ipDirectionTTRS); \
virtual HRESULT __stdcall GetMovableDirectionTTRS(CATIAUserSurface *& opDirectionTTRS); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADatumTarget(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Label(CATBSTR & oLabel) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Label(oLabel)); \
} \
HRESULT __stdcall  ENVTIEName::put_Label(const CATBSTR & iLabel) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)put_Label(iLabel)); \
} \
HRESULT __stdcall  ENVTIEName::get_Datum(CATIABase *& oDatum) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Datum(oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::SetAreaForm(const CATBSTR & iAreaForm) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)SetAreaForm(iAreaForm)); \
} \
HRESULT __stdcall  ENVTIEName::GetAreaForm(CATBSTR & oAreaForm) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)GetAreaForm(oAreaForm)); \
} \
HRESULT __stdcall  ENVTIEName::SetCircularAreaSize(double iAreaSize) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)SetCircularAreaSize(iAreaSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetCircularAreaSize(double & oAreaSize) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)GetCircularAreaSize(oAreaSize)); \
} \
HRESULT __stdcall  ENVTIEName::SetRectangularAreaSize(double iLength, double iWidth) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)SetRectangularAreaSize(iLength,iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetRectangularAreaSize(double & oLength, double & oWidth) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)GetRectangularAreaSize(oLength,oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::SetMovableDirectionTTRS(CATIAUserSurface * ipDirectionTTRS) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)SetMovableDirectionTTRS(ipDirectionTTRS)); \
} \
HRESULT __stdcall  ENVTIEName::GetMovableDirectionTTRS(CATIAUserSurface *& opDirectionTTRS) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)GetMovableDirectionTTRS(opDirectionTTRS)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADatumTarget,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADatumTarget(classe)    TIECATIADatumTarget##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADatumTarget(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADatumTarget, classe) \
 \
 \
CATImplementTIEMethods(CATIADatumTarget, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADatumTarget, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADatumTarget, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADatumTarget, classe) \
 \
HRESULT __stdcall  TIECATIADatumTarget##classe::get_Label(CATBSTR & oLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Label(oLabel)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::put_Label(const CATBSTR & iLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Label(iLabel)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::get_Datum(CATIABase *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Datum(oDatum)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::SetAreaForm(const CATBSTR & iAreaForm) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAreaForm(iAreaForm)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::GetAreaForm(CATBSTR & oAreaForm) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAreaForm(oAreaForm)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::SetCircularAreaSize(double iAreaSize) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCircularAreaSize(iAreaSize)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::GetCircularAreaSize(double & oAreaSize) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCircularAreaSize(oAreaSize)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::SetRectangularAreaSize(double iLength, double iWidth) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRectangularAreaSize(iLength,iWidth)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::GetRectangularAreaSize(double & oLength, double & oWidth) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRectangularAreaSize(oLength,oWidth)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::SetMovableDirectionTTRS(CATIAUserSurface * ipDirectionTTRS) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMovableDirectionTTRS(ipDirectionTTRS)); \
} \
HRESULT __stdcall  TIECATIADatumTarget##classe::GetMovableDirectionTTRS(CATIAUserSurface *& opDirectionTTRS) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMovableDirectionTTRS(opDirectionTTRS)); \
} \
HRESULT  __stdcall  TIECATIADatumTarget##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIADatumTarget##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIADatumTarget##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADatumTarget##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADatumTarget##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADatumTarget(classe) \
 \
 \
declare_TIE_CATIADatumTarget(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADatumTarget##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADatumTarget,"CATIADatumTarget",CATIADatumTarget::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADatumTarget(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADatumTarget, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADatumTarget##classe(classe::MetaObject(),CATIADatumTarget::MetaObject(),(void *)CreateTIECATIADatumTarget##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADatumTarget(classe) \
 \
 \
declare_TIE_CATIADatumTarget(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADatumTarget##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADatumTarget,"CATIADatumTarget",CATIADatumTarget::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADatumTarget(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADatumTarget, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADatumTarget##classe(classe::MetaObject(),CATIADatumTarget::MetaObject(),(void *)CreateTIECATIADatumTarget##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADatumTarget(classe) TIE_CATIADatumTarget(classe)
#else
#define BOA_CATIADatumTarget(classe) CATImplementBOA(CATIADatumTarget, classe)
#endif

#endif
