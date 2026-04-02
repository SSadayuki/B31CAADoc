#ifndef __TIE_CATICloTransferElements
#define __TIE_CATICloTransferElements

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloTransferElements.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloTransferElements */
#define declare_TIE_CATICloTransferElements(classe) \
 \
 \
class TIECATICloTransferElements##classe : public CATICloTransferElements \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloTransferElements, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT TransferElements ( CATListValCATBaseUnknown_var &iListOfParts ) ; \
};



#define ENVTIEdeclare_CATICloTransferElements(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT TransferElements ( CATListValCATBaseUnknown_var &iListOfParts ) ; \


#define ENVTIEdefine_CATICloTransferElements(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::TransferElements ( CATListValCATBaseUnknown_var &iListOfParts )  \
{ \
return (ENVTIECALL(CATICloTransferElements,ENVTIETypeLetter,ENVTIELetter)TransferElements (iListOfParts )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloTransferElements(classe)    TIECATICloTransferElements##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloTransferElements(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloTransferElements, classe) \
 \
 \
CATImplementTIEMethods(CATICloTransferElements, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICloTransferElements, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICloTransferElements, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloTransferElements, classe) \
 \
HRESULT  TIECATICloTransferElements##classe::TransferElements ( CATListValCATBaseUnknown_var &iListOfParts )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TransferElements (iListOfParts )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloTransferElements(classe) \
 \
 \
declare_TIE_CATICloTransferElements(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloTransferElements##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloTransferElements,"CATICloTransferElements",CATICloTransferElements::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloTransferElements(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloTransferElements, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloTransferElements##classe(classe::MetaObject(),CATICloTransferElements::MetaObject(),(void *)CreateTIECATICloTransferElements##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloTransferElements(classe) \
 \
 \
declare_TIE_CATICloTransferElements(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloTransferElements##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloTransferElements,"CATICloTransferElements",CATICloTransferElements::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloTransferElements(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloTransferElements, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloTransferElements##classe(classe::MetaObject(),CATICloTransferElements::MetaObject(),(void *)CreateTIECATICloTransferElements##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloTransferElements(classe) TIE_CATICloTransferElements(classe)
#else
#define BOA_CATICloTransferElements(classe) CATImplementBOA(CATICloTransferElements, classe)
#endif

#endif
