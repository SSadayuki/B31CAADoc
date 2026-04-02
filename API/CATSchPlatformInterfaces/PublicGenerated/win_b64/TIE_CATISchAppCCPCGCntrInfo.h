#ifndef __TIE_CATISchAppCCPCGCntrInfo
#define __TIE_CATISchAppCCPCGCntrInfo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCCPCGCntrInfo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCCPCGCntrInfo */
#define declare_TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
class TIECATISchAppCCPCGCntrInfo##classe : public CATISchAppCCPCGCntrInfo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCCPCGCntrInfo, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetCGConnectInfo( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATICStringList **oLCStrConMainCntrName); \
      virtual HRESULT AppPostCGPlacementConnect ( const CATISchAppConnector *iCntrToConnect, const char *iConMainCntrName) ; \
      virtual HRESULT AppGetCGConnectInfo2( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATListOfCATUnicodeString &oLUStrConMainCntrName); \
      virtual HRESULT AppPostCGPlacementConnect2 ( const CATISchAppConnector *iCntrToConnect, const CATUnicodeString &iConMainCntrName) ; \
};



#define ENVTIEdeclare_CATISchAppCCPCGCntrInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetCGConnectInfo( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATICStringList **oLCStrConMainCntrName); \
virtual HRESULT AppPostCGPlacementConnect ( const CATISchAppConnector *iCntrToConnect, const char *iConMainCntrName) ; \
virtual HRESULT AppGetCGConnectInfo2( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATListOfCATUnicodeString &oLUStrConMainCntrName); \
virtual HRESULT AppPostCGPlacementConnect2 ( const CATISchAppConnector *iCntrToConnect, const CATUnicodeString &iConMainCntrName) ; \


#define ENVTIEdefine_CATISchAppCCPCGCntrInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetCGConnectInfo( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATICStringList **oLCStrConMainCntrName) \
{ \
return (ENVTIECALL(CATISchAppCCPCGCntrInfo,ENVTIETypeLetter,ENVTIELetter)AppGetCGConnectInfo(iCntrSrcOfThis,oLConCntrNeedsMapping,oLCStrConMainCntrName)); \
} \
HRESULT  ENVTIEName::AppPostCGPlacementConnect ( const CATISchAppConnector *iCntrToConnect, const char *iConMainCntrName)  \
{ \
return (ENVTIECALL(CATISchAppCCPCGCntrInfo,ENVTIETypeLetter,ENVTIELetter)AppPostCGPlacementConnect (iCntrToConnect,iConMainCntrName)); \
} \
HRESULT  ENVTIEName::AppGetCGConnectInfo2( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATListOfCATUnicodeString &oLUStrConMainCntrName) \
{ \
return (ENVTIECALL(CATISchAppCCPCGCntrInfo,ENVTIETypeLetter,ENVTIELetter)AppGetCGConnectInfo2(iCntrSrcOfThis,oLConCntrNeedsMapping,oLUStrConMainCntrName)); \
} \
HRESULT  ENVTIEName::AppPostCGPlacementConnect2 ( const CATISchAppConnector *iCntrToConnect, const CATUnicodeString &iConMainCntrName)  \
{ \
return (ENVTIECALL(CATISchAppCCPCGCntrInfo,ENVTIETypeLetter,ENVTIELetter)AppPostCGPlacementConnect2 (iCntrToConnect,iConMainCntrName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCCPCGCntrInfo(classe)    TIECATISchAppCCPCGCntrInfo##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCCPCGCntrInfo, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCCPCGCntrInfo, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCCPCGCntrInfo, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCCPCGCntrInfo, classe) \
 \
HRESULT  TIECATISchAppCCPCGCntrInfo##classe::AppGetCGConnectInfo( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATICStringList **oLCStrConMainCntrName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetCGConnectInfo(iCntrSrcOfThis,oLConCntrNeedsMapping,oLCStrConMainCntrName)); \
} \
HRESULT  TIECATISchAppCCPCGCntrInfo##classe::AppPostCGPlacementConnect ( const CATISchAppConnector *iCntrToConnect, const char *iConMainCntrName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostCGPlacementConnect (iCntrToConnect,iConMainCntrName)); \
} \
HRESULT  TIECATISchAppCCPCGCntrInfo##classe::AppGetCGConnectInfo2( const CATISchAppConnector *iCntrSrcOfThis, CATIUnknownList **oLConCntrNeedsMapping, CATListOfCATUnicodeString &oLUStrConMainCntrName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetCGConnectInfo2(iCntrSrcOfThis,oLConCntrNeedsMapping,oLUStrConMainCntrName)); \
} \
HRESULT  TIECATISchAppCCPCGCntrInfo##classe::AppPostCGPlacementConnect2 ( const CATISchAppConnector *iCntrToConnect, const CATUnicodeString &iConMainCntrName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostCGPlacementConnect2 (iCntrToConnect,iConMainCntrName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
declare_TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCCPCGCntrInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCCPCGCntrInfo,"CATISchAppCCPCGCntrInfo",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCCPCGCntrInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCCPCGCntrInfo##classe(classe::MetaObject(),TIECATISchAppCCPCGCntrInfo##classe::MetaObject(),(void *)CreateTIECATISchAppCCPCGCntrInfo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
declare_TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCCPCGCntrInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCCPCGCntrInfo,"CATISchAppCCPCGCntrInfo",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCCPCGCntrInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCCPCGCntrInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCCPCGCntrInfo##classe(classe::MetaObject(),TIECATISchAppCCPCGCntrInfo##classe::MetaObject(),(void *)CreateTIECATISchAppCCPCGCntrInfo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCCPCGCntrInfo(classe) TIE_CATISchAppCCPCGCntrInfo(classe)
#else
#define BOA_CATISchAppCCPCGCntrInfo(classe) CATImplementBOA(CATISchAppCCPCGCntrInfo, classe)
#endif

#endif
