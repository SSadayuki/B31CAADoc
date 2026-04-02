#ifndef __TIE_CATIMfgMIKCE2
#define __TIE_CATIMfgMIKCE2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIKCE2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIKCE2 */
#define declare_TIE_CATIMfgMIKCE2(classe) \
 \
 \
class TIECATIMfgMIKCE2##classe : public CATIMfgMIKCE2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIKCE2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName) ; \
      virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
      virtual HRESULT MIKExit() ; \
      virtual HRESULT MIKCELicenseRelease() ; \
};



#define ENVTIEdeclare_CATIMfgMIKCE2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName) ; \
virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
virtual HRESULT MIKExit() ; \
virtual HRESULT MIKCELicenseRelease() ; \


#define ENVTIEdefine_CATIMfgMIKCE2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE2,ENVTIETypeLetter,ENVTIELetter)MIKInit(iMode,iMO,iFileName)); \
} \
HRESULT  ENVTIEName::MIKCreateDOFTable(double iTimeIncr)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE2,ENVTIETypeLetter,ENVTIELetter)MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  ENVTIEName::MIKExit()  \
{ \
return (ENVTIECALL(CATIMfgMIKCE2,ENVTIETypeLetter,ENVTIELetter)MIKExit()); \
} \
HRESULT  ENVTIEName::MIKCELicenseRelease()  \
{ \
return (ENVTIECALL(CATIMfgMIKCE2,ENVTIETypeLetter,ENVTIELetter)MIKCELicenseRelease()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIKCE2(classe)    TIECATIMfgMIKCE2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIKCE2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIKCE2, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIKCE2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIKCE2, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIKCE2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIKCE2, classe) \
 \
HRESULT  TIECATIMfgMIKCE2##classe::MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKInit(iMode,iMO,iFileName)); \
} \
HRESULT  TIECATIMfgMIKCE2##classe::MIKCreateDOFTable(double iTimeIncr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  TIECATIMfgMIKCE2##classe::MIKExit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKExit()); \
} \
HRESULT  TIECATIMfgMIKCE2##classe::MIKCELicenseRelease()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCELicenseRelease()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIKCE2(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE2,"CATIMfgMIKCE2",CATIMfgMIKCE2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIKCE2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE2##classe(classe::MetaObject(),CATIMfgMIKCE2::MetaObject(),(void *)CreateTIECATIMfgMIKCE2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIKCE2(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE2,"CATIMfgMIKCE2",CATIMfgMIKCE2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIKCE2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE2##classe(classe::MetaObject(),CATIMfgMIKCE2::MetaObject(),(void *)CreateTIECATIMfgMIKCE2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIKCE2(classe) TIE_CATIMfgMIKCE2(classe)
#else
#define BOA_CATIMfgMIKCE2(classe) CATImplementBOA(CATIMfgMIKCE2, classe)
#endif

#endif
