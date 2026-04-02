#ifndef __TIE_CATIExchangeRepresentation
#define __TIE_CATIExchangeRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeRepresentation */
#define declare_TIE_CATIExchangeRepresentation(classe) \
 \
 \
class TIECATIExchangeRepresentation##classe : public CATIExchangeRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetRepresentationType( CATUnicodeString& oRepresentationType) ; \
      virtual HRESULT GetAssociatedDocument( CATIExchangeInputDocument_var& oDocument ) ; \
};



#define ENVTIEdeclare_CATIExchangeRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetRepresentationType( CATUnicodeString& oRepresentationType) ; \
virtual HRESULT GetAssociatedDocument( CATIExchangeInputDocument_var& oDocument ) ; \


#define ENVTIEdefine_CATIExchangeRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetRepresentationType( CATUnicodeString& oRepresentationType)  \
{ \
return (ENVTIECALL(CATIExchangeRepresentation,ENVTIETypeLetter,ENVTIELetter)GetRepresentationType(oRepresentationType)); \
} \
HRESULT  ENVTIEName::GetAssociatedDocument( CATIExchangeInputDocument_var& oDocument )  \
{ \
return (ENVTIECALL(CATIExchangeRepresentation,ENVTIETypeLetter,ENVTIELetter)GetAssociatedDocument(oDocument )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeRepresentation(classe)    TIECATIExchangeRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeRepresentation, classe) \
 \
HRESULT  TIECATIExchangeRepresentation##classe::GetRepresentationType( CATUnicodeString& oRepresentationType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRepresentationType(oRepresentationType)); \
} \
HRESULT  TIECATIExchangeRepresentation##classe::GetAssociatedDocument( CATIExchangeInputDocument_var& oDocument )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssociatedDocument(oDocument )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeRepresentation,"CATIExchangeRepresentation",CATIExchangeRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeRepresentation##classe(classe::MetaObject(),CATIExchangeRepresentation::MetaObject(),(void *)CreateTIECATIExchangeRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeRepresentation,"CATIExchangeRepresentation",CATIExchangeRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeRepresentation##classe(classe::MetaObject(),CATIExchangeRepresentation::MetaObject(),(void *)CreateTIECATIExchangeRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeRepresentation(classe) TIE_CATIExchangeRepresentation(classe)
#else
#define BOA_CATIExchangeRepresentation(classe) CATImplementBOA(CATIExchangeRepresentation, classe)
#endif

#endif
