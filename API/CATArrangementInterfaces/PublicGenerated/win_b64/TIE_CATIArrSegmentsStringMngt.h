#ifndef __TIE_CATIArrSegmentsStringMngt
#define __TIE_CATIArrSegmentsStringMngt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIArrSegmentsStringMngt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIArrSegmentsStringMngt */
#define declare_TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
class TIECATIArrSegmentsStringMngt##classe : public CATIArrSegmentsStringMngt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIArrSegmentsStringMngt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT DeleteNode(CATIArrNode_var &ispNode) ; \
      virtual HRESULT DeleteSegment(CATIArrSegment_var &ispSegment) ; \
};



#define ENVTIEdeclare_CATIArrSegmentsStringMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT DeleteNode(CATIArrNode_var &ispNode) ; \
virtual HRESULT DeleteSegment(CATIArrSegment_var &ispSegment) ; \


#define ENVTIEdefine_CATIArrSegmentsStringMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::DeleteNode(CATIArrNode_var &ispNode)  \
{ \
return (ENVTIECALL(CATIArrSegmentsStringMngt,ENVTIETypeLetter,ENVTIELetter)DeleteNode(ispNode)); \
} \
HRESULT  ENVTIEName::DeleteSegment(CATIArrSegment_var &ispSegment)  \
{ \
return (ENVTIECALL(CATIArrSegmentsStringMngt,ENVTIETypeLetter,ENVTIELetter)DeleteSegment(ispSegment)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIArrSegmentsStringMngt(classe)    TIECATIArrSegmentsStringMngt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIArrSegmentsStringMngt, classe) \
 \
 \
CATImplementTIEMethods(CATIArrSegmentsStringMngt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIArrSegmentsStringMngt, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIArrSegmentsStringMngt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIArrSegmentsStringMngt, classe) \
 \
HRESULT  TIECATIArrSegmentsStringMngt##classe::DeleteNode(CATIArrNode_var &ispNode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteNode(ispNode)); \
} \
HRESULT  TIECATIArrSegmentsStringMngt##classe::DeleteSegment(CATIArrSegment_var &ispSegment)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteSegment(ispSegment)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
declare_TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrSegmentsStringMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrSegmentsStringMngt,"CATIArrSegmentsStringMngt",CATIArrSegmentsStringMngt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIArrSegmentsStringMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrSegmentsStringMngt##classe(classe::MetaObject(),CATIArrSegmentsStringMngt::MetaObject(),(void *)CreateTIECATIArrSegmentsStringMngt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIArrSegmentsStringMngt(classe) \
 \
 \
declare_TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrSegmentsStringMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrSegmentsStringMngt,"CATIArrSegmentsStringMngt",CATIArrSegmentsStringMngt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrSegmentsStringMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIArrSegmentsStringMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrSegmentsStringMngt##classe(classe::MetaObject(),CATIArrSegmentsStringMngt::MetaObject(),(void *)CreateTIECATIArrSegmentsStringMngt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIArrSegmentsStringMngt(classe) TIE_CATIArrSegmentsStringMngt(classe)
#else
#define BOA_CATIArrSegmentsStringMngt(classe) CATImplementBOA(CATIArrSegmentsStringMngt, classe)
#endif

#endif
