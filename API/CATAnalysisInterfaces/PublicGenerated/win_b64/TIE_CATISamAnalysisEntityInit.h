#ifndef __TIE_CATISamAnalysisEntityInit
#define __TIE_CATISamAnalysisEntityInit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisEntityInit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisEntityInit */
#define declare_TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
class TIECATISamAnalysisEntityInit##classe : public CATISamAnalysisEntityInit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisEntityInit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Initialize() ; \
      virtual HRESULT InitWhenPositioned() ; \
      virtual HRESULT Remove(int iForCloseContext) ; \
      virtual int CheckAnalysisSet(const CATISamAnalysisSet* ipiAnalysisSet) ; \
      virtual int GetAnalysisSetType(CATUnicodeString &oAllowedSetType) ; \
      virtual CATBoolean AggregateInSet() ; \
};



#define ENVTIEdeclare_CATISamAnalysisEntityInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Initialize() ; \
virtual HRESULT InitWhenPositioned() ; \
virtual HRESULT Remove(int iForCloseContext) ; \
virtual int CheckAnalysisSet(const CATISamAnalysisSet* ipiAnalysisSet) ; \
virtual int GetAnalysisSetType(CATUnicodeString &oAllowedSetType) ; \
virtual CATBoolean AggregateInSet() ; \


#define ENVTIEdefine_CATISamAnalysisEntityInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Initialize()  \
{ \
return (ENVTIECALL(CATISamAnalysisEntityInit,ENVTIETypeLetter,ENVTIELetter)Initialize()); \
} \
HRESULT  ENVTIEName::InitWhenPositioned()  \
{ \
return (ENVTIECALL(CATISamAnalysisEntityInit,ENVTIETypeLetter,ENVTIELetter)InitWhenPositioned()); \
} \
HRESULT  ENVTIEName::Remove(int iForCloseContext)  \
{ \
return (ENVTIECALL(CATISamAnalysisEntityInit,ENVTIETypeLetter,ENVTIELetter)Remove(iForCloseContext)); \
} \
int  ENVTIEName::CheckAnalysisSet(const CATISamAnalysisSet* ipiAnalysisSet)  \
{ \
return (ENVTIECALL(CATISamAnalysisEntityInit,ENVTIETypeLetter,ENVTIELetter)CheckAnalysisSet(ipiAnalysisSet)); \
} \
int  ENVTIEName::GetAnalysisSetType(CATUnicodeString &oAllowedSetType)  \
{ \
return (ENVTIECALL(CATISamAnalysisEntityInit,ENVTIETypeLetter,ENVTIELetter)GetAnalysisSetType(oAllowedSetType)); \
} \
CATBoolean  ENVTIEName::AggregateInSet()  \
{ \
return (ENVTIECALL(CATISamAnalysisEntityInit,ENVTIETypeLetter,ENVTIELetter)AggregateInSet()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisEntityInit(classe)    TIECATISamAnalysisEntityInit##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisEntityInit, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisEntityInit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisEntityInit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisEntityInit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisEntityInit, classe) \
 \
HRESULT  TIECATISamAnalysisEntityInit##classe::Initialize()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Initialize()); \
} \
HRESULT  TIECATISamAnalysisEntityInit##classe::InitWhenPositioned()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitWhenPositioned()); \
} \
HRESULT  TIECATISamAnalysisEntityInit##classe::Remove(int iForCloseContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iForCloseContext)); \
} \
int  TIECATISamAnalysisEntityInit##classe::CheckAnalysisSet(const CATISamAnalysisSet* ipiAnalysisSet)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckAnalysisSet(ipiAnalysisSet)); \
} \
int  TIECATISamAnalysisEntityInit##classe::GetAnalysisSetType(CATUnicodeString &oAllowedSetType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnalysisSetType(oAllowedSetType)); \
} \
CATBoolean  TIECATISamAnalysisEntityInit##classe::AggregateInSet()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AggregateInSet()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
declare_TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisEntityInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisEntityInit,"CATISamAnalysisEntityInit",CATISamAnalysisEntityInit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisEntityInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisEntityInit##classe(classe::MetaObject(),CATISamAnalysisEntityInit::MetaObject(),(void *)CreateTIECATISamAnalysisEntityInit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisEntityInit(classe) \
 \
 \
declare_TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisEntityInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisEntityInit,"CATISamAnalysisEntityInit",CATISamAnalysisEntityInit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisEntityInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisEntityInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisEntityInit##classe(classe::MetaObject(),CATISamAnalysisEntityInit::MetaObject(),(void *)CreateTIECATISamAnalysisEntityInit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisEntityInit(classe) TIE_CATISamAnalysisEntityInit(classe)
#else
#define BOA_CATISamAnalysisEntityInit(classe) CATImplementBOA(CATISamAnalysisEntityInit, classe)
#endif

#endif
