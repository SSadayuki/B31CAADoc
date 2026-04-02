#ifndef __TIE_CATISamGroup
#define __TIE_CATISamGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamGroup */
#define declare_TIE_CATISamGroup(classe) \
 \
 \
class TIECATISamGroup##classe : public CATISamGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetGroupType(CATSamGroupType &oType) const ; \
      virtual HRESULT GetGroupAvailableContents(int & oNumber,const CATSamValue* & oContents) const ; \
      virtual HRESULT GetGroupAvailablePositions(const CATSamValue iContent, int & oNumber,const CATString* & oPositions) const ; \
      virtual HRESULT IsGroupOf(const CATSamValue iContent, const CATString iPosition, CATBoolean &oRes) const ; \
      virtual HRESULT GetContent(const CATSamValue iContent, const CATString iPosition, const CATAnalysisEntityCollector* & oCollector) const ; \
      virtual HRESULT Update() ; \
};



#define ENVTIEdeclare_CATISamGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetGroupType(CATSamGroupType &oType) const ; \
virtual HRESULT GetGroupAvailableContents(int & oNumber,const CATSamValue* & oContents) const ; \
virtual HRESULT GetGroupAvailablePositions(const CATSamValue iContent, int & oNumber,const CATString* & oPositions) const ; \
virtual HRESULT IsGroupOf(const CATSamValue iContent, const CATString iPosition, CATBoolean &oRes) const ; \
virtual HRESULT GetContent(const CATSamValue iContent, const CATString iPosition, const CATAnalysisEntityCollector* & oCollector) const ; \
virtual HRESULT Update() ; \


#define ENVTIEdefine_CATISamGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetGroupType(CATSamGroupType &oType) const  \
{ \
return (ENVTIECALL(CATISamGroup,ENVTIETypeLetter,ENVTIELetter)GetGroupType(oType)); \
} \
HRESULT  ENVTIEName::GetGroupAvailableContents(int & oNumber,const CATSamValue* & oContents) const  \
{ \
return (ENVTIECALL(CATISamGroup,ENVTIETypeLetter,ENVTIELetter)GetGroupAvailableContents(oNumber,oContents)); \
} \
HRESULT  ENVTIEName::GetGroupAvailablePositions(const CATSamValue iContent, int & oNumber,const CATString* & oPositions) const  \
{ \
return (ENVTIECALL(CATISamGroup,ENVTIETypeLetter,ENVTIELetter)GetGroupAvailablePositions(iContent,oNumber,oPositions)); \
} \
HRESULT  ENVTIEName::IsGroupOf(const CATSamValue iContent, const CATString iPosition, CATBoolean &oRes) const  \
{ \
return (ENVTIECALL(CATISamGroup,ENVTIETypeLetter,ENVTIELetter)IsGroupOf(iContent,iPosition,oRes)); \
} \
HRESULT  ENVTIEName::GetContent(const CATSamValue iContent, const CATString iPosition, const CATAnalysisEntityCollector* & oCollector) const  \
{ \
return (ENVTIECALL(CATISamGroup,ENVTIETypeLetter,ENVTIELetter)GetContent(iContent,iPosition,oCollector)); \
} \
HRESULT  ENVTIEName::Update()  \
{ \
return (ENVTIECALL(CATISamGroup,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamGroup(classe)    TIECATISamGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamGroup, classe) \
 \
 \
CATImplementTIEMethods(CATISamGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamGroup, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamGroup, classe) \
 \
HRESULT  TIECATISamGroup##classe::GetGroupType(CATSamGroupType &oType) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGroupType(oType)); \
} \
HRESULT  TIECATISamGroup##classe::GetGroupAvailableContents(int & oNumber,const CATSamValue* & oContents) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGroupAvailableContents(oNumber,oContents)); \
} \
HRESULT  TIECATISamGroup##classe::GetGroupAvailablePositions(const CATSamValue iContent, int & oNumber,const CATString* & oPositions) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGroupAvailablePositions(iContent,oNumber,oPositions)); \
} \
HRESULT  TIECATISamGroup##classe::IsGroupOf(const CATSamValue iContent, const CATString iPosition, CATBoolean &oRes) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGroupOf(iContent,iPosition,oRes)); \
} \
HRESULT  TIECATISamGroup##classe::GetContent(const CATSamValue iContent, const CATString iPosition, const CATAnalysisEntityCollector* & oCollector) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContent(iContent,iPosition,oCollector)); \
} \
HRESULT  TIECATISamGroup##classe::Update()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamGroup(classe) \
 \
 \
declare_TIE_CATISamGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamGroup,"CATISamGroup",CATISamGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamGroup##classe(classe::MetaObject(),CATISamGroup::MetaObject(),(void *)CreateTIECATISamGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamGroup(classe) \
 \
 \
declare_TIE_CATISamGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamGroup,"CATISamGroup",CATISamGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamGroup##classe(classe::MetaObject(),CATISamGroup::MetaObject(),(void *)CreateTIECATISamGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamGroup(classe) TIE_CATISamGroup(classe)
#else
#define BOA_CATISamGroup(classe) CATImplementBOA(CATISamGroup, classe)
#endif

#endif
