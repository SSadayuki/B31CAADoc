#ifndef __TIE_CATIDOMNodeFilter
#define __TIE_CATIDOMNodeFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDOMNodeFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDOMNodeFilter */
#define declare_TIE_CATIDOMNodeFilter(classe) \
 \
 \
class TIECATIDOMNodeFilter##classe : public CATIDOMNodeFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDOMNodeFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AcceptNode( const CATIDOMNode_var & iNode, FilterAction & oAccepted) ; \
};



#define ENVTIEdeclare_CATIDOMNodeFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AcceptNode( const CATIDOMNode_var & iNode, FilterAction & oAccepted) ; \


#define ENVTIEdefine_CATIDOMNodeFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AcceptNode( const CATIDOMNode_var & iNode, FilterAction & oAccepted)  \
{ \
return (ENVTIECALL(CATIDOMNodeFilter,ENVTIETypeLetter,ENVTIELetter)AcceptNode(iNode,oAccepted)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDOMNodeFilter(classe)    TIECATIDOMNodeFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDOMNodeFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDOMNodeFilter, classe) \
 \
 \
CATImplementTIEMethods(CATIDOMNodeFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDOMNodeFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDOMNodeFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDOMNodeFilter, classe) \
 \
HRESULT  TIECATIDOMNodeFilter##classe::AcceptNode( const CATIDOMNode_var & iNode, FilterAction & oAccepted)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AcceptNode(iNode,oAccepted)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDOMNodeFilter(classe) \
 \
 \
declare_TIE_CATIDOMNodeFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDOMNodeFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDOMNodeFilter,"CATIDOMNodeFilter",CATIDOMNodeFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDOMNodeFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDOMNodeFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDOMNodeFilter##classe(classe::MetaObject(),CATIDOMNodeFilter::MetaObject(),(void *)CreateTIECATIDOMNodeFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDOMNodeFilter(classe) \
 \
 \
declare_TIE_CATIDOMNodeFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDOMNodeFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDOMNodeFilter,"CATIDOMNodeFilter",CATIDOMNodeFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDOMNodeFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDOMNodeFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDOMNodeFilter##classe(classe::MetaObject(),CATIDOMNodeFilter::MetaObject(),(void *)CreateTIECATIDOMNodeFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDOMNodeFilter(classe) TIE_CATIDOMNodeFilter(classe)
#else
#define BOA_CATIDOMNodeFilter(classe) CATImplementBOA(CATIDOMNodeFilter, classe)
#endif

#endif
