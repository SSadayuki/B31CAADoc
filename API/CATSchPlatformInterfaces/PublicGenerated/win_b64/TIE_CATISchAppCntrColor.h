#ifndef __TIE_CATISchAppCntrColor
#define __TIE_CATISchAppCntrColor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCntrColor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCntrColor */
#define declare_TIE_CATISchAppCntrColor(classe) \
 \
 \
class TIECATISchAppCntrColor##classe : public CATISchAppCntrColor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCntrColor, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetConnectorColorByType (unsigned int *oColor) ; \
};



#define ENVTIEdeclare_CATISchAppCntrColor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetConnectorColorByType (unsigned int *oColor) ; \


#define ENVTIEdefine_CATISchAppCntrColor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetConnectorColorByType (unsigned int *oColor)  \
{ \
return (ENVTIECALL(CATISchAppCntrColor,ENVTIETypeLetter,ENVTIELetter)AppGetConnectorColorByType (oColor)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCntrColor(classe)    TIECATISchAppCntrColor##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCntrColor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCntrColor, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCntrColor, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCntrColor, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCntrColor, classe) \
 \
HRESULT  TIECATISchAppCntrColor##classe::AppGetConnectorColorByType (unsigned int *oColor)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetConnectorColorByType (oColor)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCntrColor(classe) \
 \
 \
declare_TIE_CATISchAppCntrColor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrColor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrColor,"CATISchAppCntrColor",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrColor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCntrColor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrColor##classe(classe::MetaObject(),TIECATISchAppCntrColor##classe::MetaObject(),(void *)CreateTIECATISchAppCntrColor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCntrColor(classe) \
 \
 \
declare_TIE_CATISchAppCntrColor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrColor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrColor,"CATISchAppCntrColor",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrColor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCntrColor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrColor##classe(classe::MetaObject(),TIECATISchAppCntrColor##classe::MetaObject(),(void *)CreateTIECATISchAppCntrColor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCntrColor(classe) TIE_CATISchAppCntrColor(classe)
#else
#define BOA_CATISchAppCntrColor(classe) CATImplementBOA(CATISchAppCntrColor, classe)
#endif

#endif
