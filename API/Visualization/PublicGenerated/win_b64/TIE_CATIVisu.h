#ifndef __TIE_CATIVisu
#define __TIE_CATIVisu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVisu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVisu */
#define declare_TIE_CATIVisu(classe) \
 \
 \
class TIECATIVisu##classe : public CATIVisu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVisu, classe) \
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



#define ENVTIEdeclare_CATIVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATRep *  ENVTIEName::BuildRep ()  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)BuildRep ()); \
} \
CATRep *  ENVTIEName::GiveRep ()  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)GiveRep ()); \
} \
HRESULT  ENVTIEName::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)GiveContextualRep(iContext,oRep )); \
} \
int  ENVTIEName::ModifyRep ( const CATNotification & iInfo )  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)ModifyRep (iInfo )); \
} \
void  ENVTIEName::UnreferenceRep ()  \
{ \
 (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)UnreferenceRep ()); \
} \
HRESULT  ENVTIEName::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  ENVTIEName::GetRep ()  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)GetRep ()); \
} \
HRESULT  ENVTIEName::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)IsHighlightValid(iPathElt)); \
} \
HRESULT  ENVTIEName::SetVisuRep(CATRep * iRep)  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)SetVisuRep(iRep)); \
} \
void  ENVTIEName::SetRepNotUpToDate()  \
{ \
 (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)SetRepNotUpToDate()); \
} \
int  ENVTIEName::IsRepUpToDate()  \
{ \
return (ENVTIECALL(CATIVisu,ENVTIETypeLetter,ENVTIELetter)IsRepUpToDate()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVisu(classe)    TIECATIVisu##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVisu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVisu, classe) \
 \
 \
CATImplementTIEMethods(CATIVisu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVisu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVisu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVisu, classe) \
 \
CATRep *  TIECATIVisu##classe::BuildRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep ()); \
} \
CATRep *  TIECATIVisu##classe::GiveRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveRep ()); \
} \
HRESULT  TIECATIVisu##classe::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveContextualRep(iContext,oRep )); \
} \
int  TIECATIVisu##classe::ModifyRep ( const CATNotification & iInfo )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyRep (iInfo )); \
} \
void  TIECATIVisu##classe::UnreferenceRep ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnreferenceRep (); \
} \
HRESULT  TIECATIVisu##classe::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  TIECATIVisu##classe::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  TIECATIVisu##classe::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  TIECATIVisu##classe::GetRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRep ()); \
} \
HRESULT  TIECATIVisu##classe::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHighlightValid(iPathElt)); \
} \
HRESULT  TIECATIVisu##classe::SetVisuRep(CATRep * iRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisuRep(iRep)); \
} \
void  TIECATIVisu##classe::SetRepNotUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRepNotUpToDate(); \
} \
int  TIECATIVisu##classe::IsRepUpToDate()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRepUpToDate()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVisu(classe) \
 \
 \
declare_TIE_CATIVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisu,"CATIVisu",CATIVisu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisu##classe(classe::MetaObject(),CATIVisu::MetaObject(),(void *)CreateTIECATIVisu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVisu(classe) \
 \
 \
declare_TIE_CATIVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisu,"CATIVisu",CATIVisu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisu##classe(classe::MetaObject(),CATIVisu::MetaObject(),(void *)CreateTIECATIVisu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVisu(classe) TIE_CATIVisu(classe)
#else
#define BOA_CATIVisu(classe) CATImplementBOA(CATIVisu, classe)
#endif

#endif
