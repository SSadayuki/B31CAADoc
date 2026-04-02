#ifndef __TIE_CATIExchangeLoop
#define __TIE_CATIExchangeLoop

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeLoop.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeLoop */
#define declare_TIE_CATIExchangeLoop(classe) \
 \
 \
class TIECATIExchangeLoop##classe : public CATIExchangeLoop \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeLoop, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsOuterLoop(short *oIsOuter) const ; \
      virtual CATListValCATIExchangeEdgeUse_var* EnumEdgeUses() const ; \
      virtual CATListValCATIExchangeEdge_var* EnumEdges() const ; \
      virtual HRESULT GetPreferredRepresentation(int* oChoice) ; \
      virtual HRESULT AreThereTwoRepresentations ( CATBoolean* oBothRepresentations ) ; \
};



#define ENVTIEdeclare_CATIExchangeLoop(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsOuterLoop(short *oIsOuter) const ; \
virtual CATListValCATIExchangeEdgeUse_var* EnumEdgeUses() const ; \
virtual CATListValCATIExchangeEdge_var* EnumEdges() const ; \
virtual HRESULT GetPreferredRepresentation(int* oChoice) ; \
virtual HRESULT AreThereTwoRepresentations ( CATBoolean* oBothRepresentations ) ; \


#define ENVTIEdefine_CATIExchangeLoop(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsOuterLoop(short *oIsOuter) const  \
{ \
return (ENVTIECALL(CATIExchangeLoop,ENVTIETypeLetter,ENVTIELetter)IsOuterLoop(oIsOuter)); \
} \
CATListValCATIExchangeEdgeUse_var*  ENVTIEName::EnumEdgeUses() const  \
{ \
return (ENVTIECALL(CATIExchangeLoop,ENVTIETypeLetter,ENVTIELetter)EnumEdgeUses()); \
} \
CATListValCATIExchangeEdge_var*  ENVTIEName::EnumEdges() const  \
{ \
return (ENVTIECALL(CATIExchangeLoop,ENVTIETypeLetter,ENVTIELetter)EnumEdges()); \
} \
HRESULT  ENVTIEName::GetPreferredRepresentation(int* oChoice)  \
{ \
return (ENVTIECALL(CATIExchangeLoop,ENVTIETypeLetter,ENVTIELetter)GetPreferredRepresentation(oChoice)); \
} \
HRESULT  ENVTIEName::AreThereTwoRepresentations ( CATBoolean* oBothRepresentations )  \
{ \
return (ENVTIECALL(CATIExchangeLoop,ENVTIETypeLetter,ENVTIELetter)AreThereTwoRepresentations (oBothRepresentations )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeLoop(classe)    TIECATIExchangeLoop##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeLoop(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeLoop, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeLoop, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeLoop, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeLoop, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeLoop, classe) \
 \
HRESULT  TIECATIExchangeLoop##classe::IsOuterLoop(short *oIsOuter) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsOuterLoop(oIsOuter)); \
} \
CATListValCATIExchangeEdgeUse_var*  TIECATIExchangeLoop##classe::EnumEdgeUses() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumEdgeUses()); \
} \
CATListValCATIExchangeEdge_var*  TIECATIExchangeLoop##classe::EnumEdges() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumEdges()); \
} \
HRESULT  TIECATIExchangeLoop##classe::GetPreferredRepresentation(int* oChoice)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreferredRepresentation(oChoice)); \
} \
HRESULT  TIECATIExchangeLoop##classe::AreThereTwoRepresentations ( CATBoolean* oBothRepresentations )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AreThereTwoRepresentations (oBothRepresentations )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeLoop(classe) \
 \
 \
declare_TIE_CATIExchangeLoop(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeLoop##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeLoop,"CATIExchangeLoop",CATIExchangeLoop::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeLoop(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeLoop, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeLoop##classe(classe::MetaObject(),CATIExchangeLoop::MetaObject(),(void *)CreateTIECATIExchangeLoop##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeLoop(classe) \
 \
 \
declare_TIE_CATIExchangeLoop(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeLoop##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeLoop,"CATIExchangeLoop",CATIExchangeLoop::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeLoop(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeLoop, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeLoop##classe(classe::MetaObject(),CATIExchangeLoop::MetaObject(),(void *)CreateTIECATIExchangeLoop##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeLoop(classe) TIE_CATIExchangeLoop(classe)
#else
#define BOA_CATIExchangeLoop(classe) CATImplementBOA(CATIExchangeLoop, classe)
#endif

#endif
