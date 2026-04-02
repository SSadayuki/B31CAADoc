#ifndef __TIE_CATIISOPanelMgt
#define __TIE_CATIISOPanelMgt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIISOPanelMgt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIISOPanelMgt */
#define declare_TIE_CATIISOPanelMgt(classe) \
 \
 \
class TIECATIISOPanelMgt##classe : public CATIISOPanelMgt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIISOPanelMgt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  CreatePanelforSimul(const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation) ; \
      virtual HRESULT  UpdatePanel(int iRank, const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation) ; \
      virtual HRESULT  ClosePanel() ; \
};



#define ENVTIEdeclare_CATIISOPanelMgt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  CreatePanelforSimul(const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation) ; \
virtual HRESULT  UpdatePanel(int iRank, const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation) ; \
virtual HRESULT  ClosePanel() ; \


#define ENVTIEdefine_CATIISOPanelMgt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::CreatePanelforSimul(const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation)  \
{ \
return (ENVTIECALL(CATIISOPanelMgt,ENVTIETypeLetter,ENVTIELetter)CreatePanelforSimul(iMfgProgram,iMfgOperation)); \
} \
HRESULT   ENVTIEName::UpdatePanel(int iRank, const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation)  \
{ \
return (ENVTIECALL(CATIISOPanelMgt,ENVTIETypeLetter,ENVTIELetter)UpdatePanel(iRank,iMfgProgram,iMfgOperation)); \
} \
HRESULT   ENVTIEName::ClosePanel()  \
{ \
return (ENVTIECALL(CATIISOPanelMgt,ENVTIETypeLetter,ENVTIELetter)ClosePanel()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIISOPanelMgt(classe)    TIECATIISOPanelMgt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIISOPanelMgt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIISOPanelMgt, classe) \
 \
 \
CATImplementTIEMethods(CATIISOPanelMgt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIISOPanelMgt, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIISOPanelMgt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIISOPanelMgt, classe) \
 \
HRESULT   TIECATIISOPanelMgt##classe::CreatePanelforSimul(const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePanelforSimul(iMfgProgram,iMfgOperation)); \
} \
HRESULT   TIECATIISOPanelMgt##classe::UpdatePanel(int iRank, const CATBaseUnknown_var &iMfgProgram, const CATBaseUnknown_var &iMfgOperation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdatePanel(iRank,iMfgProgram,iMfgOperation)); \
} \
HRESULT   TIECATIISOPanelMgt##classe::ClosePanel()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ClosePanel()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIISOPanelMgt(classe) \
 \
 \
declare_TIE_CATIISOPanelMgt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIISOPanelMgt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIISOPanelMgt,"CATIISOPanelMgt",CATIISOPanelMgt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIISOPanelMgt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIISOPanelMgt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIISOPanelMgt##classe(classe::MetaObject(),CATIISOPanelMgt::MetaObject(),(void *)CreateTIECATIISOPanelMgt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIISOPanelMgt(classe) \
 \
 \
declare_TIE_CATIISOPanelMgt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIISOPanelMgt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIISOPanelMgt,"CATIISOPanelMgt",CATIISOPanelMgt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIISOPanelMgt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIISOPanelMgt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIISOPanelMgt##classe(classe::MetaObject(),CATIISOPanelMgt::MetaObject(),(void *)CreateTIECATIISOPanelMgt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIISOPanelMgt(classe) TIE_CATIISOPanelMgt(classe)
#else
#define BOA_CATIISOPanelMgt(classe) CATImplementBOA(CATIISOPanelMgt, classe)
#endif

#endif
