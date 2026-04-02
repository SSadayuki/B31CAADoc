#ifndef __TIE_CATIMechanicalCCP
#define __TIE_CATIMechanicalCCP

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMechanicalCCP.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMechanicalCCP */
#define declare_TIE_CATIMechanicalCCP(classe) \
 \
 \
class TIECATIMechanicalCCP##classe : public CATIMechanicalCCP \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMechanicalCCP, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATISpecObject_var GiveMeYourFavoriteSpecifications() const ; \
      virtual int IsElementValidForPaste(CATPathElement* iPath) const ; \
      virtual CATMathPoint GetAnchorPoint() const ; \
      virtual CATMathDirection GetReferenceNormal() const ; \
      virtual int CanBeDeleted(CATListValCATISpecObject_var iList) const ; \
      virtual int CanBeCopied() const ; \
};



#define ENVTIEdeclare_CATIMechanicalCCP(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATISpecObject_var GiveMeYourFavoriteSpecifications() const ; \
virtual int IsElementValidForPaste(CATPathElement* iPath) const ; \
virtual CATMathPoint GetAnchorPoint() const ; \
virtual CATMathDirection GetReferenceNormal() const ; \
virtual int CanBeDeleted(CATListValCATISpecObject_var iList) const ; \
virtual int CanBeCopied() const ; \


#define ENVTIEdefine_CATIMechanicalCCP(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATISpecObject_var  ENVTIEName::GiveMeYourFavoriteSpecifications() const  \
{ \
return (ENVTIECALL(CATIMechanicalCCP,ENVTIETypeLetter,ENVTIELetter)GiveMeYourFavoriteSpecifications()); \
} \
int  ENVTIEName::IsElementValidForPaste(CATPathElement* iPath) const  \
{ \
return (ENVTIECALL(CATIMechanicalCCP,ENVTIETypeLetter,ENVTIELetter)IsElementValidForPaste(iPath)); \
} \
CATMathPoint  ENVTIEName::GetAnchorPoint() const  \
{ \
return (ENVTIECALL(CATIMechanicalCCP,ENVTIETypeLetter,ENVTIELetter)GetAnchorPoint()); \
} \
CATMathDirection  ENVTIEName::GetReferenceNormal() const  \
{ \
return (ENVTIECALL(CATIMechanicalCCP,ENVTIETypeLetter,ENVTIELetter)GetReferenceNormal()); \
} \
int  ENVTIEName::CanBeDeleted(CATListValCATISpecObject_var iList) const  \
{ \
return (ENVTIECALL(CATIMechanicalCCP,ENVTIETypeLetter,ENVTIELetter)CanBeDeleted(iList)); \
} \
int  ENVTIEName::CanBeCopied() const  \
{ \
return (ENVTIECALL(CATIMechanicalCCP,ENVTIETypeLetter,ENVTIELetter)CanBeCopied()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMechanicalCCP(classe)    TIECATIMechanicalCCP##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMechanicalCCP(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMechanicalCCP, classe) \
 \
 \
CATImplementTIEMethods(CATIMechanicalCCP, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMechanicalCCP, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMechanicalCCP, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMechanicalCCP, classe) \
 \
CATListValCATISpecObject_var  TIECATIMechanicalCCP##classe::GiveMeYourFavoriteSpecifications() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveMeYourFavoriteSpecifications()); \
} \
int  TIECATIMechanicalCCP##classe::IsElementValidForPaste(CATPathElement* iPath) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsElementValidForPaste(iPath)); \
} \
CATMathPoint  TIECATIMechanicalCCP##classe::GetAnchorPoint() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnchorPoint()); \
} \
CATMathDirection  TIECATIMechanicalCCP##classe::GetReferenceNormal() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceNormal()); \
} \
int  TIECATIMechanicalCCP##classe::CanBeDeleted(CATListValCATISpecObject_var iList) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBeDeleted(iList)); \
} \
int  TIECATIMechanicalCCP##classe::CanBeCopied() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBeCopied()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMechanicalCCP(classe) \
 \
 \
declare_TIE_CATIMechanicalCCP(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMechanicalCCP##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMechanicalCCP,"CATIMechanicalCCP",CATIMechanicalCCP::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMechanicalCCP(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMechanicalCCP, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMechanicalCCP##classe(classe::MetaObject(),CATIMechanicalCCP::MetaObject(),(void *)CreateTIECATIMechanicalCCP##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMechanicalCCP(classe) \
 \
 \
declare_TIE_CATIMechanicalCCP(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMechanicalCCP##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMechanicalCCP,"CATIMechanicalCCP",CATIMechanicalCCP::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMechanicalCCP(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMechanicalCCP, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMechanicalCCP##classe(classe::MetaObject(),CATIMechanicalCCP::MetaObject(),(void *)CreateTIECATIMechanicalCCP##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMechanicalCCP(classe) TIE_CATIMechanicalCCP(classe)
#else
#define BOA_CATIMechanicalCCP(classe) CATImplementBOA(CATIMechanicalCCP, classe)
#endif

#endif
