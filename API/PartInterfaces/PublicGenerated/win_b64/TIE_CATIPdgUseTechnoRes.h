#ifndef __TIE_CATIPdgUseTechnoRes
#define __TIE_CATIPdgUseTechnoRes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPdgUseTechnoRes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPdgUseTechnoRes */
#define declare_TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
class TIECATIPdgUseTechnoRes##classe : public CATIPdgUseTechnoRes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPdgUseTechnoRes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTechResfaces (ListPOfCATFace &oTechResFacesList); \
      virtual HRESULT GetTechResAttributes (CATListValCATICkeParm_var &oTechResList); \
};



#define ENVTIEdeclare_CATIPdgUseTechnoRes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTechResfaces (ListPOfCATFace &oTechResFacesList); \
virtual HRESULT GetTechResAttributes (CATListValCATICkeParm_var &oTechResList); \


#define ENVTIEdefine_CATIPdgUseTechnoRes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTechResfaces (ListPOfCATFace &oTechResFacesList) \
{ \
return (ENVTIECALL(CATIPdgUseTechnoRes,ENVTIETypeLetter,ENVTIELetter)GetTechResfaces (oTechResFacesList)); \
} \
HRESULT  ENVTIEName::GetTechResAttributes (CATListValCATICkeParm_var &oTechResList) \
{ \
return (ENVTIECALL(CATIPdgUseTechnoRes,ENVTIETypeLetter,ENVTIELetter)GetTechResAttributes (oTechResList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPdgUseTechnoRes(classe)    TIECATIPdgUseTechnoRes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPdgUseTechnoRes, classe) \
 \
 \
CATImplementTIEMethods(CATIPdgUseTechnoRes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPdgUseTechnoRes, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPdgUseTechnoRes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPdgUseTechnoRes, classe) \
 \
HRESULT  TIECATIPdgUseTechnoRes##classe::GetTechResfaces (ListPOfCATFace &oTechResFacesList) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechResfaces (oTechResFacesList)); \
} \
HRESULT  TIECATIPdgUseTechnoRes##classe::GetTechResAttributes (CATListValCATICkeParm_var &oTechResList) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechResAttributes (oTechResList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
declare_TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPdgUseTechnoRes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPdgUseTechnoRes,"CATIPdgUseTechnoRes",CATIPdgUseTechnoRes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPdgUseTechnoRes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPdgUseTechnoRes##classe(classe::MetaObject(),CATIPdgUseTechnoRes::MetaObject(),(void *)CreateTIECATIPdgUseTechnoRes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPdgUseTechnoRes(classe) \
 \
 \
declare_TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPdgUseTechnoRes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPdgUseTechnoRes,"CATIPdgUseTechnoRes",CATIPdgUseTechnoRes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPdgUseTechnoRes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPdgUseTechnoRes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPdgUseTechnoRes##classe(classe::MetaObject(),CATIPdgUseTechnoRes::MetaObject(),(void *)CreateTIECATIPdgUseTechnoRes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPdgUseTechnoRes(classe) TIE_CATIPdgUseTechnoRes(classe)
#else
#define BOA_CATIPdgUseTechnoRes(classe) CATImplementBOA(CATIPdgUseTechnoRes, classe)
#endif

#endif
