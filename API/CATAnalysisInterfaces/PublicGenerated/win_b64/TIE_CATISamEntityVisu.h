#ifndef __TIE_CATISamEntityVisu
#define __TIE_CATISamEntityVisu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEntityVisu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEntityVisu */
#define declare_TIE_CATISamEntityVisu(classe) \
 \
 \
class TIECATISamEntityVisu##classe : public CATISamEntityVisu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEntityVisu, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CAT3DBagRep * BuildEntityRep(int iEntityUpToDate) ; \
      virtual HRESULT DecodeGraphic ( const CATPickPath &iPickPath, CATPathElement &ioPathElt) ; \
      virtual HRESULT BuildHighlightLook(const CATPathElement &iPathElt, CATRepPath &ioPathRep ) ; \
      virtual int ModifyRep(const CATNotification &iNotif) ; \
};



#define ENVTIEdeclare_CATISamEntityVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CAT3DBagRep * BuildEntityRep(int iEntityUpToDate) ; \
virtual HRESULT DecodeGraphic ( const CATPickPath &iPickPath, CATPathElement &ioPathElt) ; \
virtual HRESULT BuildHighlightLook(const CATPathElement &iPathElt, CATRepPath &ioPathRep ) ; \
virtual int ModifyRep(const CATNotification &iNotif) ; \


#define ENVTIEdefine_CATISamEntityVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CAT3DBagRep *  ENVTIEName::BuildEntityRep(int iEntityUpToDate)  \
{ \
return (ENVTIECALL(CATISamEntityVisu,ENVTIETypeLetter,ENVTIELetter)BuildEntityRep(iEntityUpToDate)); \
} \
HRESULT  ENVTIEName::DecodeGraphic ( const CATPickPath &iPickPath, CATPathElement &ioPathElt)  \
{ \
return (ENVTIECALL(CATISamEntityVisu,ENVTIETypeLetter,ENVTIELetter)DecodeGraphic (iPickPath,ioPathElt)); \
} \
HRESULT  ENVTIEName::BuildHighlightLook(const CATPathElement &iPathElt, CATRepPath &ioPathRep )  \
{ \
return (ENVTIECALL(CATISamEntityVisu,ENVTIETypeLetter,ENVTIELetter)BuildHighlightLook(iPathElt,ioPathRep )); \
} \
int  ENVTIEName::ModifyRep(const CATNotification &iNotif)  \
{ \
return (ENVTIECALL(CATISamEntityVisu,ENVTIETypeLetter,ENVTIELetter)ModifyRep(iNotif)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEntityVisu(classe)    TIECATISamEntityVisu##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEntityVisu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEntityVisu, classe) \
 \
 \
CATImplementTIEMethods(CATISamEntityVisu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEntityVisu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEntityVisu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEntityVisu, classe) \
 \
CAT3DBagRep *  TIECATISamEntityVisu##classe::BuildEntityRep(int iEntityUpToDate)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildEntityRep(iEntityUpToDate)); \
} \
HRESULT  TIECATISamEntityVisu##classe::DecodeGraphic ( const CATPickPath &iPickPath, CATPathElement &ioPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecodeGraphic (iPickPath,ioPathElt)); \
} \
HRESULT  TIECATISamEntityVisu##classe::BuildHighlightLook(const CATPathElement &iPathElt, CATRepPath &ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildHighlightLook(iPathElt,ioPathRep )); \
} \
int  TIECATISamEntityVisu##classe::ModifyRep(const CATNotification &iNotif)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyRep(iNotif)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEntityVisu(classe) \
 \
 \
declare_TIE_CATISamEntityVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEntityVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEntityVisu,"CATISamEntityVisu",CATISamEntityVisu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEntityVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEntityVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEntityVisu##classe(classe::MetaObject(),CATISamEntityVisu::MetaObject(),(void *)CreateTIECATISamEntityVisu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEntityVisu(classe) \
 \
 \
declare_TIE_CATISamEntityVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEntityVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEntityVisu,"CATISamEntityVisu",CATISamEntityVisu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEntityVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEntityVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEntityVisu##classe(classe::MetaObject(),CATISamEntityVisu::MetaObject(),(void *)CreateTIECATISamEntityVisu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEntityVisu(classe) TIE_CATISamEntityVisu(classe)
#else
#define BOA_CATISamEntityVisu(classe) CATImplementBOA(CATISamEntityVisu, classe)
#endif

#endif
