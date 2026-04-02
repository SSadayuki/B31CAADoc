#ifndef __TIE_CATIUExitIO
#define __TIE_CATIUExitIO

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitIO.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitIO */
#define declare_TIE_CATIUExitIO(classe) \
 \
 \
class TIECATIUExitIO##classe : public CATIUExitIO \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitIO, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnOpen (const CATUnicodeString *iFileName,CATAccessRight iMode, HRESULT *oGranted, CATFileSystemError *oError); \
      virtual HRESULT CreationMask (const CATUnicodeString *iFileName, DWORD *oMode, CATFileSystemError *oError); \
      virtual HRESULT OnClose (const CATUnicodeString *iFileName, CATFileSystemError *oError); \
};



#define ENVTIEdeclare_CATIUExitIO(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnOpen (const CATUnicodeString *iFileName,CATAccessRight iMode, HRESULT *oGranted, CATFileSystemError *oError); \
virtual HRESULT CreationMask (const CATUnicodeString *iFileName, DWORD *oMode, CATFileSystemError *oError); \
virtual HRESULT OnClose (const CATUnicodeString *iFileName, CATFileSystemError *oError); \


#define ENVTIEdefine_CATIUExitIO(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnOpen (const CATUnicodeString *iFileName,CATAccessRight iMode, HRESULT *oGranted, CATFileSystemError *oError) \
{ \
return (ENVTIECALL(CATIUExitIO,ENVTIETypeLetter,ENVTIELetter)OnOpen (iFileName,iMode,oGranted,oError)); \
} \
HRESULT  ENVTIEName::CreationMask (const CATUnicodeString *iFileName, DWORD *oMode, CATFileSystemError *oError) \
{ \
return (ENVTIECALL(CATIUExitIO,ENVTIETypeLetter,ENVTIELetter)CreationMask (iFileName,oMode,oError)); \
} \
HRESULT  ENVTIEName::OnClose (const CATUnicodeString *iFileName, CATFileSystemError *oError) \
{ \
return (ENVTIECALL(CATIUExitIO,ENVTIETypeLetter,ENVTIELetter)OnClose (iFileName,oError)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitIO(classe)    TIECATIUExitIO##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitIO(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitIO, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitIO, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitIO, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitIO, classe) \
 \
HRESULT  TIECATIUExitIO##classe::OnOpen (const CATUnicodeString *iFileName,CATAccessRight iMode, HRESULT *oGranted, CATFileSystemError *oError) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnOpen (iFileName,iMode,oGranted,oError)); \
} \
HRESULT  TIECATIUExitIO##classe::CreationMask (const CATUnicodeString *iFileName, DWORD *oMode, CATFileSystemError *oError) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreationMask (iFileName,oMode,oError)); \
} \
HRESULT  TIECATIUExitIO##classe::OnClose (const CATUnicodeString *iFileName, CATFileSystemError *oError) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnClose (iFileName,oError)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitIO(classe) \
 \
 \
declare_TIE_CATIUExitIO(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitIO##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitIO,"CATIUExitIO",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitIO(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitIO, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitIO##classe(classe::MetaObject(),TIECATIUExitIO##classe::MetaObject(),(void *)CreateTIECATIUExitIO##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitIO(classe) \
 \
 \
declare_TIE_CATIUExitIO(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitIO##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitIO,"CATIUExitIO",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitIO(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitIO, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitIO##classe(classe::MetaObject(),TIECATIUExitIO##classe::MetaObject(),(void *)CreateTIECATIUExitIO##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitIO(classe) TIE_CATIUExitIO(classe)
#else
#define BOA_CATIUExitIO(classe) CATImplementBOA(CATIUExitIO, classe)
#endif

#endif
