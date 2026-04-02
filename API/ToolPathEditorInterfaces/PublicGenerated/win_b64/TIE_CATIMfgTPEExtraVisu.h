#ifndef __TIE_CATIMfgTPEExtraVisu
#define __TIE_CATIMfgTPEExtraVisu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgTPEExtraVisu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgTPEExtraVisu */
#define declare_TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
class TIECATIMfgTPEExtraVisu##classe : public CATIMfgTPEExtraVisu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgTPEExtraVisu, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATRep * BuildRep () ; \
      virtual CATRep * GiveRep () ; \
      virtual HRESULT GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep ) ; \
      virtual int ModifyRep ( const CATNotification & iInfo ) ; \
      virtual void UnreferenceRep () ; \
      virtual HRESULT BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
      virtual HRESULT BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
      virtual HRESULT DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt ) ; \
      virtual CATRep * GetRep () ; \
      virtual HRESULT IsHighlightValid(CATPathElement & iPathElt) ; \
      virtual HRESULT SetVisuRep(CATRep * iRep) ; \
      virtual void SetRepNotUpToDate() ; \
      virtual int IsRepUpToDate() ; \
};



#define ENVTIEdeclare_CATIMfgTPEExtraVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATRep * BuildRep () ; \
virtual CATRep * GiveRep () ; \
virtual HRESULT GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep ) ; \
virtual int ModifyRep ( const CATNotification & iInfo ) ; \
virtual void UnreferenceRep () ; \
virtual HRESULT BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
virtual HRESULT BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
virtual HRESULT DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt ) ; \
virtual CATRep * GetRep () ; \
virtual HRESULT IsHighlightValid(CATPathElement & iPathElt) ; \
virtual HRESULT SetVisuRep(CATRep * iRep) ; \
virtual void SetRepNotUpToDate() ; \
virtual int IsRepUpToDate() ; \


#define ENVTIEdefine_CATIMfgTPEExtraVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATRep *  ENVTIEName::BuildRep ()  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)BuildRep ()); \
} \
CATRep *  ENVTIEName::GiveRep ()  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)GiveRep ()); \
} \
HRESULT  ENVTIEName::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)GiveContextualRep(iContext,oRep )); \
} \
int  ENVTIEName::ModifyRep ( const CATNotification & iInfo )  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)ModifyRep (iInfo )); \
} \
void  ENVTIEName::UnreferenceRep ()  \
{ \
 (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)UnreferenceRep ()); \
} \
HRESULT  ENVTIEName::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  ENVTIEName::GetRep ()  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)GetRep ()); \
} \
HRESULT  ENVTIEName::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)IsHighlightValid(iPathElt)); \
} \
HRESULT  ENVTIEName::SetVisuRep(CATRep * iRep)  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)SetVisuRep(iRep)); \
} \
void  ENVTIEName::SetRepNotUpToDate()  \
{ \
 (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)SetRepNotUpToDate()); \
} \
int  ENVTIEName::IsRepUpToDate()  \
{ \
return (ENVTIECALL(CATIMfgTPEExtraVisu,ENVTIETypeLetter,ENVTIELetter)IsRepUpToDate()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgTPEExtraVisu(classe)    TIECATIMfgTPEExtraVisu##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgTPEExtraVisu, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgTPEExtraVisu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgTPEExtraVisu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgTPEExtraVisu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgTPEExtraVisu, classe) \
 \
CATRep *  TIECATIMfgTPEExtraVisu##classe::BuildRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep ()); \
} \
CATRep *  TIECATIMfgTPEExtraVisu##classe::GiveRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveRep ()); \
} \
HRESULT  TIECATIMfgTPEExtraVisu##classe::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveContextualRep(iContext,oRep )); \
} \
int  TIECATIMfgTPEExtraVisu##classe::ModifyRep ( const CATNotification & iInfo )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyRep (iInfo )); \
} \
void  TIECATIMfgTPEExtraVisu##classe::UnreferenceRep ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnreferenceRep (); \
} \
HRESULT  TIECATIMfgTPEExtraVisu##classe::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  TIECATIMfgTPEExtraVisu##classe::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  TIECATIMfgTPEExtraVisu##classe::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  TIECATIMfgTPEExtraVisu##classe::GetRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRep ()); \
} \
HRESULT  TIECATIMfgTPEExtraVisu##classe::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHighlightValid(iPathElt)); \
} \
HRESULT  TIECATIMfgTPEExtraVisu##classe::SetVisuRep(CATRep * iRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisuRep(iRep)); \
} \
void  TIECATIMfgTPEExtraVisu##classe::SetRepNotUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRepNotUpToDate(); \
} \
int  TIECATIMfgTPEExtraVisu##classe::IsRepUpToDate()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRepUpToDate()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
declare_TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgTPEExtraVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgTPEExtraVisu,"CATIMfgTPEExtraVisu",CATIMfgTPEExtraVisu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgTPEExtraVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgTPEExtraVisu##classe(classe::MetaObject(),CATIMfgTPEExtraVisu::MetaObject(),(void *)CreateTIECATIMfgTPEExtraVisu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgTPEExtraVisu(classe) \
 \
 \
declare_TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgTPEExtraVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgTPEExtraVisu,"CATIMfgTPEExtraVisu",CATIMfgTPEExtraVisu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgTPEExtraVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgTPEExtraVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgTPEExtraVisu##classe(classe::MetaObject(),CATIMfgTPEExtraVisu::MetaObject(),(void *)CreateTIECATIMfgTPEExtraVisu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgTPEExtraVisu(classe) TIE_CATIMfgTPEExtraVisu(classe)
#else
#define BOA_CATIMfgTPEExtraVisu(classe) CATImplementBOA(CATIMfgTPEExtraVisu, classe)
#endif

#endif
