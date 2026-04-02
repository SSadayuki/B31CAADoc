#ifndef __TIE_CATI3DVisuProvider
#define __TIE_CATI3DVisuProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATI3DVisuProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATI3DVisuProvider */
#define declare_TIE_CATI3DVisuProvider(classe) \
 \
 \
class TIECATI3DVisuProvider##classe : public CATI3DVisuProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATI3DVisuProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** oListChildren) ; \
};



#define ENVTIEdeclare_CATI3DVisuProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** oListChildren) ; \


#define ENVTIEdefine_CATI3DVisuProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** oListChildren)  \
{ \
return (ENVTIECALL(CATI3DVisuProvider,ENVTIETypeLetter,ENVTIELetter)GetChildren(iObj,oListChildren)); \
} \


/* Name of the TIE class */
#define class_TIE_CATI3DVisuProvider(classe)    TIECATI3DVisuProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATI3DVisuProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATI3DVisuProvider, classe) \
 \
 \
CATImplementTIEMethods(CATI3DVisuProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATI3DVisuProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATI3DVisuProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATI3DVisuProvider, classe) \
 \
HRESULT  TIECATI3DVisuProvider##classe::GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** oListChildren)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren(iObj,oListChildren)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATI3DVisuProvider(classe) \
 \
 \
declare_TIE_CATI3DVisuProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI3DVisuProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI3DVisuProvider,"CATI3DVisuProvider",CATI3DVisuProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI3DVisuProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATI3DVisuProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI3DVisuProvider##classe(classe::MetaObject(),CATI3DVisuProvider::MetaObject(),(void *)CreateTIECATI3DVisuProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATI3DVisuProvider(classe) \
 \
 \
declare_TIE_CATI3DVisuProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI3DVisuProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI3DVisuProvider,"CATI3DVisuProvider",CATI3DVisuProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI3DVisuProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATI3DVisuProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI3DVisuProvider##classe(classe::MetaObject(),CATI3DVisuProvider::MetaObject(),(void *)CreateTIECATI3DVisuProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATI3DVisuProvider(classe) TIE_CATI3DVisuProvider(classe)
#else
#define BOA_CATI3DVisuProvider(classe) CATImplementBOA(CATI3DVisuProvider, classe)
#endif

#endif
