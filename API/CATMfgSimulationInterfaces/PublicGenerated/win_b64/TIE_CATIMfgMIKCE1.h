#ifndef __TIE_CATIMfgMIKCE1
#define __TIE_CATIMfgMIKCE1

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIKCE1.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIKCE1 */
#define declare_TIE_CATIMfgMIKCE1(classe) \
 \
 \
class TIECATIMfgMIKCE1##classe : public CATIMfgMIKCE1 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIKCE1, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName) ; \
      virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
      virtual HRESULT MIKExit() ; \
      virtual HRESULT MIKCELicenseRelease() ; \
};



#define ENVTIEdeclare_CATIMfgMIKCE1(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName) ; \
virtual HRESULT MIKCreateDOFTable(double iTimeIncr) ; \
virtual HRESULT MIKExit() ; \
virtual HRESULT MIKCELicenseRelease() ; \


#define ENVTIEdefine_CATIMfgMIKCE1(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE1,ENVTIETypeLetter,ENVTIELetter)MIKInit(iMode,iMO,iFileName)); \
} \
HRESULT  ENVTIEName::MIKCreateDOFTable(double iTimeIncr)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE1,ENVTIETypeLetter,ENVTIELetter)MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  ENVTIEName::MIKExit()  \
{ \
return (ENVTIECALL(CATIMfgMIKCE1,ENVTIETypeLetter,ENVTIELetter)MIKExit()); \
} \
HRESULT  ENVTIEName::MIKCELicenseRelease()  \
{ \
return (ENVTIECALL(CATIMfgMIKCE1,ENVTIETypeLetter,ENVTIELetter)MIKCELicenseRelease()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIKCE1(classe)    TIECATIMfgMIKCE1##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIKCE1(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIKCE1, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIKCE1, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIKCE1, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIKCE1, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIKCE1, classe) \
 \
HRESULT  TIECATIMfgMIKCE1##classe::MIKInit(int                       iMode, const CATBaseUnknown_var& iMO, const CATUnicodeString&   iFileName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKInit(iMode,iMO,iFileName)); \
} \
HRESULT  TIECATIMfgMIKCE1##classe::MIKCreateDOFTable(double iTimeIncr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCreateDOFTable(iTimeIncr)); \
} \
HRESULT  TIECATIMfgMIKCE1##classe::MIKExit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKExit()); \
} \
HRESULT  TIECATIMfgMIKCE1##classe::MIKCELicenseRelease()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKCELicenseRelease()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIKCE1(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE1(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE1##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE1,"CATIMfgMIKCE1",CATIMfgMIKCE1::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE1(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIKCE1, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE1##classe(classe::MetaObject(),CATIMfgMIKCE1::MetaObject(),(void *)CreateTIECATIMfgMIKCE1##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIKCE1(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE1(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE1##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE1,"CATIMfgMIKCE1",CATIMfgMIKCE1::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE1(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIKCE1, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE1##classe(classe::MetaObject(),CATIMfgMIKCE1::MetaObject(),(void *)CreateTIECATIMfgMIKCE1##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIKCE1(classe) TIE_CATIMfgMIKCE1(classe)
#else
#define BOA_CATIMfgMIKCE1(classe) CATImplementBOA(CATIMfgMIKCE1, classe)
#endif

#endif
