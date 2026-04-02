#ifndef __TIE_CATISamReporting
#define __TIE_CATISamReporting

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamReporting.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamReporting */
#define declare_TIE_CATISamReporting(classe) \
 \
 \
class TIECATISamReporting##classe : public CATISamReporting \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamReporting, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDefaultImagesList ( CATListValCATString  & oDefaultImagesList ) ; \
      virtual HRESULT GetSelectedOccurrences ( CATSamOccurSelectMode & oOccurSelectMode, CATListOfInt & oOccurrencesList ) ; \
};



#define ENVTIEdeclare_CATISamReporting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDefaultImagesList ( CATListValCATString  & oDefaultImagesList ) ; \
virtual HRESULT GetSelectedOccurrences ( CATSamOccurSelectMode & oOccurSelectMode, CATListOfInt & oOccurrencesList ) ; \


#define ENVTIEdefine_CATISamReporting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDefaultImagesList ( CATListValCATString  & oDefaultImagesList )  \
{ \
return (ENVTIECALL(CATISamReporting,ENVTIETypeLetter,ENVTIELetter)GetDefaultImagesList (oDefaultImagesList )); \
} \
HRESULT  ENVTIEName::GetSelectedOccurrences ( CATSamOccurSelectMode & oOccurSelectMode, CATListOfInt & oOccurrencesList )  \
{ \
return (ENVTIECALL(CATISamReporting,ENVTIETypeLetter,ENVTIELetter)GetSelectedOccurrences (oOccurSelectMode,oOccurrencesList )); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamReporting(classe)    TIECATISamReporting##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamReporting(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamReporting, classe) \
 \
 \
CATImplementTIEMethods(CATISamReporting, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamReporting, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamReporting, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamReporting, classe) \
 \
HRESULT  TIECATISamReporting##classe::GetDefaultImagesList ( CATListValCATString  & oDefaultImagesList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultImagesList (oDefaultImagesList )); \
} \
HRESULT  TIECATISamReporting##classe::GetSelectedOccurrences ( CATSamOccurSelectMode & oOccurSelectMode, CATListOfInt & oOccurrencesList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectedOccurrences (oOccurSelectMode,oOccurrencesList )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamReporting(classe) \
 \
 \
declare_TIE_CATISamReporting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamReporting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamReporting,"CATISamReporting",CATISamReporting::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamReporting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamReporting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamReporting##classe(classe::MetaObject(),CATISamReporting::MetaObject(),(void *)CreateTIECATISamReporting##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamReporting(classe) \
 \
 \
declare_TIE_CATISamReporting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamReporting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamReporting,"CATISamReporting",CATISamReporting::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamReporting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamReporting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamReporting##classe(classe::MetaObject(),CATISamReporting::MetaObject(),(void *)CreateTIECATISamReporting##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamReporting(classe) TIE_CATISamReporting(classe)
#else
#define BOA_CATISamReporting(classe) CATImplementBOA(CATISamReporting, classe)
#endif

#endif
