#ifndef __TIE_CATI3DGeoVisu
#define __TIE_CATI3DGeoVisu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATI3DGeoVisu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATI3DGeoVisu */
#define declare_TIE_CATI3DGeoVisu(classe) \
 \
 \
class TIECATI3DGeoVisu##classe : public CATI3DGeoVisu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATI3DGeoVisu, classe) \
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



#define ENVTIEdeclare_CATI3DGeoVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATI3DGeoVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATRep *  ENVTIEName::BuildRep ()  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)BuildRep ()); \
} \
CATRep *  ENVTIEName::GiveRep ()  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)GiveRep ()); \
} \
HRESULT  ENVTIEName::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)GiveContextualRep(iContext,oRep )); \
} \
int  ENVTIEName::ModifyRep ( const CATNotification & iInfo )  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)ModifyRep (iInfo )); \
} \
void  ENVTIEName::UnreferenceRep ()  \
{ \
 (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)UnreferenceRep ()); \
} \
HRESULT  ENVTIEName::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  ENVTIEName::GetRep ()  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)GetRep ()); \
} \
HRESULT  ENVTIEName::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)IsHighlightValid(iPathElt)); \
} \
HRESULT  ENVTIEName::SetVisuRep(CATRep * iRep)  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)SetVisuRep(iRep)); \
} \
void  ENVTIEName::SetRepNotUpToDate()  \
{ \
 (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)SetRepNotUpToDate()); \
} \
int  ENVTIEName::IsRepUpToDate()  \
{ \
return (ENVTIECALL(CATI3DGeoVisu,ENVTIETypeLetter,ENVTIELetter)IsRepUpToDate()); \
} \


/* Name of the TIE class */
#define class_TIE_CATI3DGeoVisu(classe)    TIECATI3DGeoVisu##classe


/* Common methods inside a TIE */
#define common_TIE_CATI3DGeoVisu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATI3DGeoVisu, classe) \
 \
 \
CATImplementTIEMethods(CATI3DGeoVisu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATI3DGeoVisu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATI3DGeoVisu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATI3DGeoVisu, classe) \
 \
CATRep *  TIECATI3DGeoVisu##classe::BuildRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep ()); \
} \
CATRep *  TIECATI3DGeoVisu##classe::GiveRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveRep ()); \
} \
HRESULT  TIECATI3DGeoVisu##classe::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveContextualRep(iContext,oRep )); \
} \
int  TIECATI3DGeoVisu##classe::ModifyRep ( const CATNotification & iInfo )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyRep (iInfo )); \
} \
void  TIECATI3DGeoVisu##classe::UnreferenceRep ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnreferenceRep (); \
} \
HRESULT  TIECATI3DGeoVisu##classe::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  TIECATI3DGeoVisu##classe::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  TIECATI3DGeoVisu##classe::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  TIECATI3DGeoVisu##classe::GetRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRep ()); \
} \
HRESULT  TIECATI3DGeoVisu##classe::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHighlightValid(iPathElt)); \
} \
HRESULT  TIECATI3DGeoVisu##classe::SetVisuRep(CATRep * iRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisuRep(iRep)); \
} \
void  TIECATI3DGeoVisu##classe::SetRepNotUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRepNotUpToDate(); \
} \
int  TIECATI3DGeoVisu##classe::IsRepUpToDate()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRepUpToDate()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATI3DGeoVisu(classe) \
 \
 \
declare_TIE_CATI3DGeoVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI3DGeoVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI3DGeoVisu,"CATI3DGeoVisu",CATI3DGeoVisu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI3DGeoVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATI3DGeoVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI3DGeoVisu##classe(classe::MetaObject(),CATI3DGeoVisu::MetaObject(),(void *)CreateTIECATI3DGeoVisu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATI3DGeoVisu(classe) \
 \
 \
declare_TIE_CATI3DGeoVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI3DGeoVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI3DGeoVisu,"CATI3DGeoVisu",CATI3DGeoVisu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI3DGeoVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATI3DGeoVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI3DGeoVisu##classe(classe::MetaObject(),CATI3DGeoVisu::MetaObject(),(void *)CreateTIECATI3DGeoVisu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATI3DGeoVisu(classe) TIE_CATI3DGeoVisu(classe)
#else
#define BOA_CATI3DGeoVisu(classe) CATImplementBOA(CATI3DGeoVisu, classe)
#endif

#endif
