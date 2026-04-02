#ifndef __TIE_CATISchAppListContMem
#define __TIE_CATISchAppListContMem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppListContMem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppListContMem */
#define declare_TIE_CATISchAppListContMem(classe) \
 \
 \
class TIECATISchAppListContMem##classe : public CATISchAppListContMem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppListContMem, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListContainerMembers (const IID &iIID, const CATIContainer *iCont, CATIUnknownList **oLMembers); \
};



#define ENVTIEdeclare_CATISchAppListContMem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListContainerMembers (const IID &iIID, const CATIContainer *iCont, CATIUnknownList **oLMembers); \


#define ENVTIEdefine_CATISchAppListContMem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListContainerMembers (const IID &iIID, const CATIContainer *iCont, CATIUnknownList **oLMembers) \
{ \
return (ENVTIECALL(CATISchAppListContMem,ENVTIETypeLetter,ENVTIELetter)ListContainerMembers (iIID,iCont,oLMembers)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppListContMem(classe)    TIECATISchAppListContMem##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppListContMem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppListContMem, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppListContMem, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppListContMem, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppListContMem, classe) \
 \
HRESULT  TIECATISchAppListContMem##classe::ListContainerMembers (const IID &iIID, const CATIContainer *iCont, CATIUnknownList **oLMembers) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListContainerMembers (iIID,iCont,oLMembers)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppListContMem(classe) \
 \
 \
declare_TIE_CATISchAppListContMem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppListContMem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppListContMem,"CATISchAppListContMem",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppListContMem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppListContMem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppListContMem##classe(classe::MetaObject(),TIECATISchAppListContMem##classe::MetaObject(),(void *)CreateTIECATISchAppListContMem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppListContMem(classe) \
 \
 \
declare_TIE_CATISchAppListContMem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppListContMem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppListContMem,"CATISchAppListContMem",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppListContMem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppListContMem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppListContMem##classe(classe::MetaObject(),TIECATISchAppListContMem##classe::MetaObject(),(void *)CreateTIECATISchAppListContMem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppListContMem(classe) TIE_CATISchAppListContMem(classe)
#else
#define BOA_CATISchAppListContMem(classe) CATImplementBOA(CATISchAppListContMem, classe)
#endif

#endif
