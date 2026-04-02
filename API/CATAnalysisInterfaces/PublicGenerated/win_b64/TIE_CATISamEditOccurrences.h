#ifndef __TIE_CATISamEditOccurrences
#define __TIE_CATISamEditOccurrences

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditOccurrences.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditOccurrences */
#define declare_TIE_CATISamEditOccurrences(classe) \
 \
 \
class TIECATISamEditOccurrences##classe : public CATISamEditOccurrences \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditOccurrences, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDlgFrame * GetModificationFrame(CATDialog * iParent,CATBoolean iMultiSel=TRUE) ; \
      virtual HRESULT GetTitle(CATUnicodeString& oTitle); \
};



#define ENVTIEdeclare_CATISamEditOccurrences(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDlgFrame * GetModificationFrame(CATDialog * iParent,CATBoolean iMultiSel=TRUE) ; \
virtual HRESULT GetTitle(CATUnicodeString& oTitle); \


#define ENVTIEdefine_CATISamEditOccurrences(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDlgFrame *  ENVTIEName::GetModificationFrame(CATDialog * iParent,CATBoolean iMultiSel)  \
{ \
return (ENVTIECALL(CATISamEditOccurrences,ENVTIETypeLetter,ENVTIELetter)GetModificationFrame(iParent,iMultiSel)); \
} \
HRESULT  ENVTIEName::GetTitle(CATUnicodeString& oTitle) \
{ \
return (ENVTIECALL(CATISamEditOccurrences,ENVTIETypeLetter,ENVTIELetter)GetTitle(oTitle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditOccurrences(classe)    TIECATISamEditOccurrences##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditOccurrences(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditOccurrences, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditOccurrences, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditOccurrences, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditOccurrences, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditOccurrences, classe) \
 \
CATDlgFrame *  TIECATISamEditOccurrences##classe::GetModificationFrame(CATDialog * iParent,CATBoolean iMultiSel)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModificationFrame(iParent,iMultiSel)); \
} \
HRESULT  TIECATISamEditOccurrences##classe::GetTitle(CATUnicodeString& oTitle) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTitle(oTitle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditOccurrences(classe) \
 \
 \
declare_TIE_CATISamEditOccurrences(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditOccurrences##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditOccurrences,"CATISamEditOccurrences",CATISamEditOccurrences::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditOccurrences(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditOccurrences, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditOccurrences##classe(classe::MetaObject(),CATISamEditOccurrences::MetaObject(),(void *)CreateTIECATISamEditOccurrences##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditOccurrences(classe) \
 \
 \
declare_TIE_CATISamEditOccurrences(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditOccurrences##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditOccurrences,"CATISamEditOccurrences",CATISamEditOccurrences::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditOccurrences(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditOccurrences, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditOccurrences##classe(classe::MetaObject(),CATISamEditOccurrences::MetaObject(),(void *)CreateTIECATISamEditOccurrences##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditOccurrences(classe) TIE_CATISamEditOccurrences(classe)
#else
#define BOA_CATISamEditOccurrences(classe) CATImplementBOA(CATISamEditOccurrences, classe)
#endif

#endif
