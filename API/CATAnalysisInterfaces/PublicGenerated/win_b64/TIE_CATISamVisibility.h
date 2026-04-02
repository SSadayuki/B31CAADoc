#ifndef __TIE_CATISamVisibility
#define __TIE_CATISamVisibility

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamVisibility.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamVisibility */
#define declare_TIE_CATISamVisibility(classe) \
 \
 \
class TIECATISamVisibility##classe : public CATISamVisibility \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamVisibility, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void SetVisibilityProperty(CATSamVisibility iVisibility) ; \
      virtual CATSamVisibility GetVisibilityProperty() ; \
      virtual CATBoolean IsVisibleInGraph() ; \
      virtual CATBoolean IsVisibleIn3D() ; \
      virtual CATBoolean IsPersistent() const ; \
};



#define ENVTIEdeclare_CATISamVisibility(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void SetVisibilityProperty(CATSamVisibility iVisibility) ; \
virtual CATSamVisibility GetVisibilityProperty() ; \
virtual CATBoolean IsVisibleInGraph() ; \
virtual CATBoolean IsVisibleIn3D() ; \
virtual CATBoolean IsPersistent() const ; \


#define ENVTIEdefine_CATISamVisibility(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::SetVisibilityProperty(CATSamVisibility iVisibility)  \
{ \
 (ENVTIECALL(CATISamVisibility,ENVTIETypeLetter,ENVTIELetter)SetVisibilityProperty(iVisibility)); \
} \
CATSamVisibility  ENVTIEName::GetVisibilityProperty()  \
{ \
return (ENVTIECALL(CATISamVisibility,ENVTIETypeLetter,ENVTIELetter)GetVisibilityProperty()); \
} \
CATBoolean  ENVTIEName::IsVisibleInGraph()  \
{ \
return (ENVTIECALL(CATISamVisibility,ENVTIETypeLetter,ENVTIELetter)IsVisibleInGraph()); \
} \
CATBoolean  ENVTIEName::IsVisibleIn3D()  \
{ \
return (ENVTIECALL(CATISamVisibility,ENVTIETypeLetter,ENVTIELetter)IsVisibleIn3D()); \
} \
CATBoolean  ENVTIEName::IsPersistent() const  \
{ \
return (ENVTIECALL(CATISamVisibility,ENVTIETypeLetter,ENVTIELetter)IsPersistent()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamVisibility(classe)    TIECATISamVisibility##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamVisibility(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamVisibility, classe) \
 \
 \
CATImplementTIEMethods(CATISamVisibility, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamVisibility, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamVisibility, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamVisibility, classe) \
 \
void  TIECATISamVisibility##classe::SetVisibilityProperty(CATSamVisibility iVisibility)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibilityProperty(iVisibility); \
} \
CATSamVisibility  TIECATISamVisibility##classe::GetVisibilityProperty()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibilityProperty()); \
} \
CATBoolean  TIECATISamVisibility##classe::IsVisibleInGraph()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsVisibleInGraph()); \
} \
CATBoolean  TIECATISamVisibility##classe::IsVisibleIn3D()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsVisibleIn3D()); \
} \
CATBoolean  TIECATISamVisibility##classe::IsPersistent() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPersistent()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamVisibility(classe) \
 \
 \
declare_TIE_CATISamVisibility(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamVisibility##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamVisibility,"CATISamVisibility",CATISamVisibility::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamVisibility(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamVisibility, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamVisibility##classe(classe::MetaObject(),CATISamVisibility::MetaObject(),(void *)CreateTIECATISamVisibility##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamVisibility(classe) \
 \
 \
declare_TIE_CATISamVisibility(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamVisibility##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamVisibility,"CATISamVisibility",CATISamVisibility::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamVisibility(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamVisibility, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamVisibility##classe(classe::MetaObject(),CATISamVisibility::MetaObject(),(void *)CreateTIECATISamVisibility##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamVisibility(classe) TIE_CATISamVisibility(classe)
#else
#define BOA_CATISamVisibility(classe) CATImplementBOA(CATISamVisibility, classe)
#endif

#endif
