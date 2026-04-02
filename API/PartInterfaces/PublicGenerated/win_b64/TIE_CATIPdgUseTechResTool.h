#ifndef __TIE_CATIPdgUseTechResTool
#define __TIE_CATIPdgUseTechResTool

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPdgUseTechResTool.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPdgUseTechResTool */
#define declare_TIE_CATIPdgUseTechResTool(classe) \
 \
 \
class TIECATIPdgUseTechResTool##classe : public CATIPdgUseTechResTool \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPdgUseTechResTool, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAllTechResFromTool(CATListPtrCATIPdgUseTechnoRes &oTechResList); \
};



#define ENVTIEdeclare_CATIPdgUseTechResTool(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAllTechResFromTool(CATListPtrCATIPdgUseTechnoRes &oTechResList); \


#define ENVTIEdefine_CATIPdgUseTechResTool(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAllTechResFromTool(CATListPtrCATIPdgUseTechnoRes &oTechResList) \
{ \
return (ENVTIECALL(CATIPdgUseTechResTool,ENVTIETypeLetter,ENVTIELetter)GetAllTechResFromTool(oTechResList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPdgUseTechResTool(classe)    TIECATIPdgUseTechResTool##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPdgUseTechResTool(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPdgUseTechResTool, classe) \
 \
 \
CATImplementTIEMethods(CATIPdgUseTechResTool, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPdgUseTechResTool, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPdgUseTechResTool, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPdgUseTechResTool, classe) \
 \
HRESULT  TIECATIPdgUseTechResTool##classe::GetAllTechResFromTool(CATListPtrCATIPdgUseTechnoRes &oTechResList) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllTechResFromTool(oTechResList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPdgUseTechResTool(classe) \
 \
 \
declare_TIE_CATIPdgUseTechResTool(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPdgUseTechResTool##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPdgUseTechResTool,"CATIPdgUseTechResTool",CATIPdgUseTechResTool::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPdgUseTechResTool(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPdgUseTechResTool, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPdgUseTechResTool##classe(classe::MetaObject(),CATIPdgUseTechResTool::MetaObject(),(void *)CreateTIECATIPdgUseTechResTool##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPdgUseTechResTool(classe) \
 \
 \
declare_TIE_CATIPdgUseTechResTool(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPdgUseTechResTool##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPdgUseTechResTool,"CATIPdgUseTechResTool",CATIPdgUseTechResTool::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPdgUseTechResTool(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPdgUseTechResTool, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPdgUseTechResTool##classe(classe::MetaObject(),CATIPdgUseTechResTool::MetaObject(),(void *)CreateTIECATIPdgUseTechResTool##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPdgUseTechResTool(classe) TIE_CATIPdgUseTechResTool(classe)
#else
#define BOA_CATIPdgUseTechResTool(classe) CATImplementBOA(CATIPdgUseTechResTool, classe)
#endif

#endif
