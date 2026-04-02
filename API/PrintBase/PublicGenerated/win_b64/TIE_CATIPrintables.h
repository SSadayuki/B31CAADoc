#ifndef __TIE_CATIPrintables
#define __TIE_CATIPrintables

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrintables.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrintables */
#define declare_TIE_CATIPrintables(classe) \
 \
 \
class TIECATIPrintables##classe : public CATIPrintables \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrintables, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATPrintImage* CreatePrintableImages( int iImageNumber, int iIsWholeDocumentMode = 0) ; \
      virtual HRESULT CleanPrintableImage( void ) ; \
      virtual HRESULT GetImagesNumber( int& oImagesNumber ) ; \
      virtual HRESULT GetImageName( int iImageNumber, CATUnicodeString& oImageName) ; \
      virtual HRESULT GetCurrentImageNumber( int& iCurrentImageNumber) ; \
};



#define ENVTIEdeclare_CATIPrintables(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATPrintImage* CreatePrintableImages( int iImageNumber, int iIsWholeDocumentMode = 0) ; \
virtual HRESULT CleanPrintableImage( void ) ; \
virtual HRESULT GetImagesNumber( int& oImagesNumber ) ; \
virtual HRESULT GetImageName( int iImageNumber, CATUnicodeString& oImageName) ; \
virtual HRESULT GetCurrentImageNumber( int& iCurrentImageNumber) ; \


#define ENVTIEdefine_CATIPrintables(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATPrintImage*  ENVTIEName::CreatePrintableImages( int iImageNumber, int iIsWholeDocumentMode )  \
{ \
return (ENVTIECALL(CATIPrintables,ENVTIETypeLetter,ENVTIELetter)CreatePrintableImages(iImageNumber,iIsWholeDocumentMode )); \
} \
HRESULT  ENVTIEName::CleanPrintableImage( void )  \
{ \
return (ENVTIECALL(CATIPrintables,ENVTIETypeLetter,ENVTIELetter)CleanPrintableImage()); \
} \
HRESULT  ENVTIEName::GetImagesNumber( int& oImagesNumber )  \
{ \
return (ENVTIECALL(CATIPrintables,ENVTIETypeLetter,ENVTIELetter)GetImagesNumber(oImagesNumber )); \
} \
HRESULT  ENVTIEName::GetImageName( int iImageNumber, CATUnicodeString& oImageName)  \
{ \
return (ENVTIECALL(CATIPrintables,ENVTIETypeLetter,ENVTIELetter)GetImageName(iImageNumber,oImageName)); \
} \
HRESULT  ENVTIEName::GetCurrentImageNumber( int& iCurrentImageNumber)  \
{ \
return (ENVTIECALL(CATIPrintables,ENVTIETypeLetter,ENVTIELetter)GetCurrentImageNumber(iCurrentImageNumber)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrintables(classe)    TIECATIPrintables##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrintables(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrintables, classe) \
 \
 \
CATImplementTIEMethods(CATIPrintables, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrintables, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrintables, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrintables, classe) \
 \
CATPrintImage*  TIECATIPrintables##classe::CreatePrintableImages( int iImageNumber, int iIsWholeDocumentMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePrintableImages(iImageNumber,iIsWholeDocumentMode )); \
} \
HRESULT  TIECATIPrintables##classe::CleanPrintableImage( void )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanPrintableImage()); \
} \
HRESULT  TIECATIPrintables##classe::GetImagesNumber( int& oImagesNumber )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImagesNumber(oImagesNumber )); \
} \
HRESULT  TIECATIPrintables##classe::GetImageName( int iImageNumber, CATUnicodeString& oImageName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImageName(iImageNumber,oImageName)); \
} \
HRESULT  TIECATIPrintables##classe::GetCurrentImageNumber( int& iCurrentImageNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentImageNumber(iCurrentImageNumber)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrintables(classe) \
 \
 \
declare_TIE_CATIPrintables(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrintables##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrintables,"CATIPrintables",CATIPrintables::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrintables(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrintables, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrintables##classe(classe::MetaObject(),CATIPrintables::MetaObject(),(void *)CreateTIECATIPrintables##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrintables(classe) \
 \
 \
declare_TIE_CATIPrintables(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrintables##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrintables,"CATIPrintables",CATIPrintables::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrintables(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrintables, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrintables##classe(classe::MetaObject(),CATIPrintables::MetaObject(),(void *)CreateTIECATIPrintables##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrintables(classe) TIE_CATIPrintables(classe)
#else
#define BOA_CATIPrintables(classe) CATImplementBOA(CATIPrintables, classe)
#endif

#endif
