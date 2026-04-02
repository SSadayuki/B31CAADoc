#ifndef __TIE_CATIMfgMIKCE3
#define __TIE_CATIMfgMIKCE3

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIKCE3.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIKCE3 */
#define declare_TIE_CATIMfgMIKCE3(classe) \
 \
 \
class TIECATIMfgMIKCE3##classe : public CATIMfgMIKCE3 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIKCE3, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName) ; \
      virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
      virtual HRESULT MIKExit() ; \
      virtual HRESULT MIKCELicenseRelease() ; \
};



#define ENVTIEdeclare_CATIMfgMIKCE3(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName) ; \
virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
virtual HRESULT MIKExit() ; \
virtual HRESULT MIKCELicenseRelease() ; \


#define ENVTIEdefine_CATIMfgMIKCE3(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE3,ENVTIETypeLetter,ENVTIELetter)MIKInit(iMode,iMO,iFileName)); \
} \
HRESULT  ENVTIEName::MIKCreateDOFTable(double iTimeIncr)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE3,ENVTIETypeLetter,ENVTIELetter)MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  ENVTIEName::MIKExit()  \
{ \
return (ENVTIECALL(CATIMfgMIKCE3,ENVTIETypeLetter,ENVTIELetter)MIKExit()); \
} \
HRESULT  ENVTIEName::MIKCELicenseRelease()  \
{ \
return (ENVTIECALL(CATIMfgMIKCE3,ENVTIETypeLetter,ENVTIELetter)MIKCELicenseRelease()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIKCE3(classe)    TIECATIMfgMIKCE3##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIKCE3(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIKCE3, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIKCE3, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIKCE3, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIKCE3, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIKCE3, classe) \
 \
HRESULT  TIECATIMfgMIKCE3##classe::MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKInit(iMode,iMO,iFileName)); \
} \
HRESULT  TIECATIMfgMIKCE3##classe::MIKCreateDOFTable(double iTimeIncr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  TIECATIMfgMIKCE3##classe::MIKExit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKExit()); \
} \
HRESULT  TIECATIMfgMIKCE3##classe::MIKCELicenseRelease()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCELicenseRelease()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIKCE3(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE3(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE3##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE3,"CATIMfgMIKCE3",CATIMfgMIKCE3::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE3(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIKCE3, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE3##classe(classe::MetaObject(),CATIMfgMIKCE3::MetaObject(),(void *)CreateTIECATIMfgMIKCE3##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIKCE3(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE3(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE3##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE3,"CATIMfgMIKCE3",CATIMfgMIKCE3::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE3(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIKCE3, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE3##classe(classe::MetaObject(),CATIMfgMIKCE3::MetaObject(),(void *)CreateTIECATIMfgMIKCE3##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIKCE3(classe) TIE_CATIMfgMIKCE3(classe)
#else
#define BOA_CATIMfgMIKCE3(classe) CATImplementBOA(CATIMfgMIKCE3, classe)
#endif

#endif
