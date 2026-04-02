#ifndef __TIE_CATIMfgCustomizeHighlight
#define __TIE_CATIMfgCustomizeHighlight

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgCustomizeHighlight.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgCustomizeHighlight */
#define declare_TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
class TIECATIMfgCustomizeHighlight##classe : public CATIMfgCustomizeHighlight \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgCustomizeHighlight, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDesignFeatures (CATListValCATBaseUnknown_var& oDFList) ; \
      virtual HRESULT GetManufacturingFeatures (CATListValCATBaseUnknown_var& oMfgFeatureList) ; \
      virtual CATBoolean HasRep() ; \
      virtual CATBoolean HasPermanentRep() ; \
};



#define ENVTIEdeclare_CATIMfgCustomizeHighlight(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDesignFeatures (CATListValCATBaseUnknown_var& oDFList) ; \
virtual HRESULT GetManufacturingFeatures (CATListValCATBaseUnknown_var& oMfgFeatureList) ; \
virtual CATBoolean HasRep() ; \
virtual CATBoolean HasPermanentRep() ; \


#define ENVTIEdefine_CATIMfgCustomizeHighlight(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDesignFeatures (CATListValCATBaseUnknown_var& oDFList)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeHighlight,ENVTIETypeLetter,ENVTIELetter)GetDesignFeatures (oDFList)); \
} \
HRESULT  ENVTIEName::GetManufacturingFeatures (CATListValCATBaseUnknown_var& oMfgFeatureList)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeHighlight,ENVTIETypeLetter,ENVTIELetter)GetManufacturingFeatures (oMfgFeatureList)); \
} \
CATBoolean  ENVTIEName::HasRep()  \
{ \
return (ENVTIECALL(CATIMfgCustomizeHighlight,ENVTIETypeLetter,ENVTIELetter)HasRep()); \
} \
CATBoolean  ENVTIEName::HasPermanentRep()  \
{ \
return (ENVTIECALL(CATIMfgCustomizeHighlight,ENVTIETypeLetter,ENVTIELetter)HasPermanentRep()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgCustomizeHighlight(classe)    TIECATIMfgCustomizeHighlight##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgCustomizeHighlight, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgCustomizeHighlight, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgCustomizeHighlight, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgCustomizeHighlight, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgCustomizeHighlight, classe) \
 \
HRESULT  TIECATIMfgCustomizeHighlight##classe::GetDesignFeatures (CATListValCATBaseUnknown_var& oDFList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignFeatures (oDFList)); \
} \
HRESULT  TIECATIMfgCustomizeHighlight##classe::GetManufacturingFeatures (CATListValCATBaseUnknown_var& oMfgFeatureList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManufacturingFeatures (oMfgFeatureList)); \
} \
CATBoolean  TIECATIMfgCustomizeHighlight##classe::HasRep()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasRep()); \
} \
CATBoolean  TIECATIMfgCustomizeHighlight##classe::HasPermanentRep()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasPermanentRep()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeHighlight##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeHighlight,"CATIMfgCustomizeHighlight",CATIMfgCustomizeHighlight::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgCustomizeHighlight, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeHighlight##classe(classe::MetaObject(),CATIMfgCustomizeHighlight::MetaObject(),(void *)CreateTIECATIMfgCustomizeHighlight##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgCustomizeHighlight(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeHighlight##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeHighlight,"CATIMfgCustomizeHighlight",CATIMfgCustomizeHighlight::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeHighlight(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgCustomizeHighlight, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeHighlight##classe(classe::MetaObject(),CATIMfgCustomizeHighlight::MetaObject(),(void *)CreateTIECATIMfgCustomizeHighlight##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgCustomizeHighlight(classe) TIE_CATIMfgCustomizeHighlight(classe)
#else
#define BOA_CATIMfgCustomizeHighlight(classe) CATImplementBOA(CATIMfgCustomizeHighlight, classe)
#endif

#endif
