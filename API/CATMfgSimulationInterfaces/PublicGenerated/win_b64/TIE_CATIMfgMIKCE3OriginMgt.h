#ifndef __TIE_CATIMfgMIKCE3OriginMgt
#define __TIE_CATIMfgMIKCE3OriginMgt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMIKCE3OriginMgt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMIKCE3OriginMgt */
#define declare_TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
class TIECATIMfgMIKCE3OriginMgt##classe : public CATIMfgMIKCE3OriginMgt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMIKCE3OriginMgt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT MIKGetListOfISOSyntax(const CATUnicodeString&             iFileName, CATListValCATUnicodeString&   oListOfISOCode, CATListOfInt&                 oListOfISOIndex) ; \
};



#define ENVTIEdeclare_CATIMfgMIKCE3OriginMgt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT MIKGetListOfISOSyntax(const CATUnicodeString&             iFileName, CATListValCATUnicodeString&   oListOfISOCode, CATListOfInt&                 oListOfISOIndex) ; \


#define ENVTIEdefine_CATIMfgMIKCE3OriginMgt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::MIKGetListOfISOSyntax(const CATUnicodeString&             iFileName, CATListValCATUnicodeString&   oListOfISOCode, CATListOfInt&                 oListOfISOIndex)  \
{ \
return (ENVTIECALL(CATIMfgMIKCE3OriginMgt,ENVTIETypeLetter,ENVTIELetter)MIKGetListOfISOSyntax(iFileName,oListOfISOCode,oListOfISOIndex)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMIKCE3OriginMgt(classe)    TIECATIMfgMIKCE3OriginMgt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMIKCE3OriginMgt, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMIKCE3OriginMgt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMIKCE3OriginMgt, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMIKCE3OriginMgt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMIKCE3OriginMgt, classe) \
 \
HRESULT  TIECATIMfgMIKCE3OriginMgt##classe::MIKGetListOfISOSyntax(const CATUnicodeString&             iFileName, CATListValCATUnicodeString&   oListOfISOCode, CATListOfInt&                 oListOfISOIndex)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MIKGetListOfISOSyntax(iFileName,oListOfISOCode,oListOfISOIndex)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE3OriginMgt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE3OriginMgt,"CATIMfgMIKCE3OriginMgt",CATIMfgMIKCE3OriginMgt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMIKCE3OriginMgt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE3OriginMgt##classe(classe::MetaObject(),CATIMfgMIKCE3OriginMgt::MetaObject(),(void *)CreateTIECATIMfgMIKCE3OriginMgt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
declare_TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMIKCE3OriginMgt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMIKCE3OriginMgt,"CATIMfgMIKCE3OriginMgt",CATIMfgMIKCE3OriginMgt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMIKCE3OriginMgt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMIKCE3OriginMgt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMIKCE3OriginMgt##classe(classe::MetaObject(),CATIMfgMIKCE3OriginMgt::MetaObject(),(void *)CreateTIECATIMfgMIKCE3OriginMgt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMIKCE3OriginMgt(classe) TIE_CATIMfgMIKCE3OriginMgt(classe)
#else
#define BOA_CATIMfgMIKCE3OriginMgt(classe) CATImplementBOA(CATIMfgMIKCE3OriginMgt, classe)
#endif

#endif
