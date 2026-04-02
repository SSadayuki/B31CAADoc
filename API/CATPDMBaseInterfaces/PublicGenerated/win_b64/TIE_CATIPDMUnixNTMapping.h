#ifndef __TIE_CATIPDMUnixNTMapping
#define __TIE_CATIPDMUnixNTMapping

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUnixNTMapping.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUnixNTMapping */
#define declare_TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
class TIECATIPDMUnixNTMapping##classe : public CATIPDMUnixNTMapping \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUnixNTMapping, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT UnixPathToNTPath(CATUnicodeString iUnixPath, CATUnicodeString& oNTPath) ; \
      virtual HRESULT NtPathToUnix(CATUnicodeString iNTPath , CATUnicodeString& oUnixPath) ; \
};



#define ENVTIEdeclare_CATIPDMUnixNTMapping(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT UnixPathToNTPath(CATUnicodeString iUnixPath, CATUnicodeString& oNTPath) ; \
virtual HRESULT NtPathToUnix(CATUnicodeString iNTPath , CATUnicodeString& oUnixPath) ; \


#define ENVTIEdefine_CATIPDMUnixNTMapping(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::UnixPathToNTPath(CATUnicodeString iUnixPath, CATUnicodeString& oNTPath)  \
{ \
return (ENVTIECALL(CATIPDMUnixNTMapping,ENVTIETypeLetter,ENVTIELetter)UnixPathToNTPath(iUnixPath,oNTPath)); \
} \
HRESULT  ENVTIEName::NtPathToUnix(CATUnicodeString iNTPath , CATUnicodeString& oUnixPath)  \
{ \
return (ENVTIECALL(CATIPDMUnixNTMapping,ENVTIETypeLetter,ENVTIELetter)NtPathToUnix(iNTPath ,oUnixPath)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUnixNTMapping(classe)    TIECATIPDMUnixNTMapping##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUnixNTMapping, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUnixNTMapping, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUnixNTMapping, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUnixNTMapping, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUnixNTMapping, classe) \
 \
HRESULT  TIECATIPDMUnixNTMapping##classe::UnixPathToNTPath(CATUnicodeString iUnixPath, CATUnicodeString& oNTPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnixPathToNTPath(iUnixPath,oNTPath)); \
} \
HRESULT  TIECATIPDMUnixNTMapping##classe::NtPathToUnix(CATUnicodeString iNTPath , CATUnicodeString& oUnixPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NtPathToUnix(iNTPath ,oUnixPath)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
declare_TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUnixNTMapping##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUnixNTMapping,"CATIPDMUnixNTMapping",CATIPDMUnixNTMapping::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUnixNTMapping, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUnixNTMapping##classe(classe::MetaObject(),CATIPDMUnixNTMapping::MetaObject(),(void *)CreateTIECATIPDMUnixNTMapping##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUnixNTMapping(classe) \
 \
 \
declare_TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUnixNTMapping##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUnixNTMapping,"CATIPDMUnixNTMapping",CATIPDMUnixNTMapping::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUnixNTMapping(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUnixNTMapping, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUnixNTMapping##classe(classe::MetaObject(),CATIPDMUnixNTMapping::MetaObject(),(void *)CreateTIECATIPDMUnixNTMapping##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUnixNTMapping(classe) TIE_CATIPDMUnixNTMapping(classe)
#else
#define BOA_CATIPDMUnixNTMapping(classe) CATImplementBOA(CATIPDMUnixNTMapping, classe)
#endif

#endif
