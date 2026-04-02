#ifndef __TIE_CATIGSMMultiSelAccess
#define __TIE_CATIGSMMultiSelAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGSMMultiSelAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGSMMultiSelAccess */
#define declare_TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
class TIECATIGSMMultiSelAccess##classe : public CATIGSMMultiSelAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGSMMultiSelAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetElem(CATISpecObject_var &iSpec, int nB= 1); \
      virtual HRESULT GetElem(CATISpecObject_var &oSpec, int nB= 1); \
      virtual HRESULT GetCommonElems(CATListValCATISpecObject_var &oListOfCommonFeats); \
      virtual HRESULT UpdateMultiSel( CATISpecObject_var &iSpecMultisel, CATListValCATISpecObject_var &list1, CATListValCATISpecObject_var &list2); \
      virtual HRESULT CheckCoherency(CATISpecObject_var &iSpecMultiSel, boolean &iCoherent); \
};



#define ENVTIEdeclare_CATIGSMMultiSelAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetElem(CATISpecObject_var &iSpec, int nB= 1); \
virtual HRESULT GetElem(CATISpecObject_var &oSpec, int nB= 1); \
virtual HRESULT GetCommonElems(CATListValCATISpecObject_var &oListOfCommonFeats); \
virtual HRESULT UpdateMultiSel( CATISpecObject_var &iSpecMultisel, CATListValCATISpecObject_var &list1, CATListValCATISpecObject_var &list2); \
virtual HRESULT CheckCoherency(CATISpecObject_var &iSpecMultiSel, boolean &iCoherent); \


#define ENVTIEdefine_CATIGSMMultiSelAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetElem(CATISpecObject_var &iSpec, int nB) \
{ \
return (ENVTIECALL(CATIGSMMultiSelAccess,ENVTIETypeLetter,ENVTIELetter)SetElem(iSpec,nB)); \
} \
HRESULT  ENVTIEName::GetElem(CATISpecObject_var &oSpec, int nB) \
{ \
return (ENVTIECALL(CATIGSMMultiSelAccess,ENVTIETypeLetter,ENVTIELetter)GetElem(oSpec,nB)); \
} \
HRESULT  ENVTIEName::GetCommonElems(CATListValCATISpecObject_var &oListOfCommonFeats) \
{ \
return (ENVTIECALL(CATIGSMMultiSelAccess,ENVTIETypeLetter,ENVTIELetter)GetCommonElems(oListOfCommonFeats)); \
} \
HRESULT  ENVTIEName::UpdateMultiSel( CATISpecObject_var &iSpecMultisel, CATListValCATISpecObject_var &list1, CATListValCATISpecObject_var &list2) \
{ \
return (ENVTIECALL(CATIGSMMultiSelAccess,ENVTIETypeLetter,ENVTIELetter)UpdateMultiSel(iSpecMultisel,list1,list2)); \
} \
HRESULT  ENVTIEName::CheckCoherency(CATISpecObject_var &iSpecMultiSel, boolean &iCoherent) \
{ \
return (ENVTIECALL(CATIGSMMultiSelAccess,ENVTIETypeLetter,ENVTIELetter)CheckCoherency(iSpecMultiSel,iCoherent)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGSMMultiSelAccess(classe)    TIECATIGSMMultiSelAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGSMMultiSelAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIGSMMultiSelAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGSMMultiSelAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGSMMultiSelAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGSMMultiSelAccess, classe) \
 \
HRESULT  TIECATIGSMMultiSelAccess##classe::SetElem(CATISpecObject_var &iSpec, int nB) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetElem(iSpec,nB)); \
} \
HRESULT  TIECATIGSMMultiSelAccess##classe::GetElem(CATISpecObject_var &oSpec, int nB) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElem(oSpec,nB)); \
} \
HRESULT  TIECATIGSMMultiSelAccess##classe::GetCommonElems(CATListValCATISpecObject_var &oListOfCommonFeats) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCommonElems(oListOfCommonFeats)); \
} \
HRESULT  TIECATIGSMMultiSelAccess##classe::UpdateMultiSel( CATISpecObject_var &iSpecMultisel, CATListValCATISpecObject_var &list1, CATListValCATISpecObject_var &list2) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateMultiSel(iSpecMultisel,list1,list2)); \
} \
HRESULT  TIECATIGSMMultiSelAccess##classe::CheckCoherency(CATISpecObject_var &iSpecMultiSel, boolean &iCoherent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckCoherency(iSpecMultiSel,iCoherent)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
declare_TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMMultiSelAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMMultiSelAccess,"CATIGSMMultiSelAccess",CATIGSMMultiSelAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGSMMultiSelAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMMultiSelAccess##classe(classe::MetaObject(),CATIGSMMultiSelAccess::MetaObject(),(void *)CreateTIECATIGSMMultiSelAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGSMMultiSelAccess(classe) \
 \
 \
declare_TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMMultiSelAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMMultiSelAccess,"CATIGSMMultiSelAccess",CATIGSMMultiSelAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMMultiSelAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGSMMultiSelAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMMultiSelAccess##classe(classe::MetaObject(),CATIGSMMultiSelAccess::MetaObject(),(void *)CreateTIECATIGSMMultiSelAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGSMMultiSelAccess(classe) TIE_CATIGSMMultiSelAccess(classe)
#else
#define BOA_CATIGSMMultiSelAccess(classe) CATImplementBOA(CATIGSMMultiSelAccess, classe)
#endif

#endif
