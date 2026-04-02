#ifndef __TIE_CATIExchangeWire
#define __TIE_CATIExchangeWire

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeWire.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeWire */
#define declare_TIE_CATIExchangeWire(classe) \
 \
 \
class TIECATIExchangeWire##classe : public CATIExchangeWire \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeWire, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATIExchangeEdge_var* GetListOfEdge() const ; \
      virtual CATListValCATIExchangeEdgeUse_var* GetListOfEdgeUse() const ; \
};



#define ENVTIEdeclare_CATIExchangeWire(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATIExchangeEdge_var* GetListOfEdge() const ; \
virtual CATListValCATIExchangeEdgeUse_var* GetListOfEdgeUse() const ; \


#define ENVTIEdefine_CATIExchangeWire(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATIExchangeEdge_var*  ENVTIEName::GetListOfEdge() const  \
{ \
return (ENVTIECALL(CATIExchangeWire,ENVTIETypeLetter,ENVTIELetter)GetListOfEdge()); \
} \
CATListValCATIExchangeEdgeUse_var*  ENVTIEName::GetListOfEdgeUse() const  \
{ \
return (ENVTIECALL(CATIExchangeWire,ENVTIETypeLetter,ENVTIELetter)GetListOfEdgeUse()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeWire(classe)    TIECATIExchangeWire##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeWire(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeWire, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeWire, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeWire, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeWire, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeWire, classe) \
 \
CATListValCATIExchangeEdge_var*  TIECATIExchangeWire##classe::GetListOfEdge() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfEdge()); \
} \
CATListValCATIExchangeEdgeUse_var*  TIECATIExchangeWire##classe::GetListOfEdgeUse() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfEdgeUse()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeWire(classe) \
 \
 \
declare_TIE_CATIExchangeWire(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeWire##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeWire,"CATIExchangeWire",CATIExchangeWire::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeWire(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeWire, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeWire##classe(classe::MetaObject(),CATIExchangeWire::MetaObject(),(void *)CreateTIECATIExchangeWire##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeWire(classe) \
 \
 \
declare_TIE_CATIExchangeWire(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeWire##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeWire,"CATIExchangeWire",CATIExchangeWire::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeWire(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeWire, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeWire##classe(classe::MetaObject(),CATIExchangeWire::MetaObject(),(void *)CreateTIECATIExchangeWire##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeWire(classe) TIE_CATIExchangeWire(classe)
#else
#define BOA_CATIExchangeWire(classe) CATImplementBOA(CATIExchangeWire, classe)
#endif

#endif
