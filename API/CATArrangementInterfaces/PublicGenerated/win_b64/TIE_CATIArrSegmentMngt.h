#ifndef __TIE_CATIArrSegmentMngt
#define __TIE_CATIArrSegmentMngt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIArrSegmentMngt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIArrSegmentMngt */
#define declare_TIE_CATIArrSegmentMngt(classe) \
 \
 \
class TIECATIArrSegmentMngt##classe : public CATIArrSegmentMngt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIArrSegmentMngt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT InsertNodes( const int iNumberOfNodesToInsert ) ; \
};



#define ENVTIEdeclare_CATIArrSegmentMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT InsertNodes( const int iNumberOfNodesToInsert ) ; \


#define ENVTIEdefine_CATIArrSegmentMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::InsertNodes( const int iNumberOfNodesToInsert )  \
{ \
return (ENVTIECALL(CATIArrSegmentMngt,ENVTIETypeLetter,ENVTIELetter)InsertNodes(iNumberOfNodesToInsert )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIArrSegmentMngt(classe)    TIECATIArrSegmentMngt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIArrSegmentMngt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIArrSegmentMngt, classe) \
 \
 \
CATImplementTIEMethods(CATIArrSegmentMngt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIArrSegmentMngt, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIArrSegmentMngt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIArrSegmentMngt, classe) \
 \
HRESULT  TIECATIArrSegmentMngt##classe::InsertNodes( const int iNumberOfNodesToInsert )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertNodes(iNumberOfNodesToInsert )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIArrSegmentMngt(classe) \
 \
 \
declare_TIE_CATIArrSegmentMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrSegmentMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrSegmentMngt,"CATIArrSegmentMngt",CATIArrSegmentMngt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrSegmentMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIArrSegmentMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrSegmentMngt##classe(classe::MetaObject(),CATIArrSegmentMngt::MetaObject(),(void *)CreateTIECATIArrSegmentMngt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIArrSegmentMngt(classe) \
 \
 \
declare_TIE_CATIArrSegmentMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrSegmentMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrSegmentMngt,"CATIArrSegmentMngt",CATIArrSegmentMngt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrSegmentMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIArrSegmentMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrSegmentMngt##classe(classe::MetaObject(),CATIArrSegmentMngt::MetaObject(),(void *)CreateTIECATIArrSegmentMngt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIArrSegmentMngt(classe) TIE_CATIArrSegmentMngt(classe)
#else
#define BOA_CATIArrSegmentMngt(classe) CATImplementBOA(CATIArrSegmentMngt, classe)
#endif

#endif
