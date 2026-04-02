#ifndef __TIE_CATISchAppRoute2
#define __TIE_CATISchAppRoute2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppRoute2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppRoute2 */
#define declare_TIE_CATISchAppRoute2(classe) \
 \
 \
class TIECATISchAppRoute2##classe : public CATISchAppRoute2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppRoute2, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppPostRouteProcess ( CATISchAppConnectable *iCntblConnectedTo) ; \
};



#define ENVTIEdeclare_CATISchAppRoute2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppPostRouteProcess ( CATISchAppConnectable *iCntblConnectedTo) ; \


#define ENVTIEdefine_CATISchAppRoute2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppPostRouteProcess ( CATISchAppConnectable *iCntblConnectedTo)  \
{ \
return (ENVTIECALL(CATISchAppRoute2,ENVTIETypeLetter,ENVTIELetter)AppPostRouteProcess (iCntblConnectedTo)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppRoute2(classe)    TIECATISchAppRoute2##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppRoute2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppRoute2, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppRoute2, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppRoute2, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppRoute2, classe) \
 \
HRESULT  TIECATISchAppRoute2##classe::AppPostRouteProcess ( CATISchAppConnectable *iCntblConnectedTo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostRouteProcess (iCntblConnectedTo)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppRoute2(classe) \
 \
 \
declare_TIE_CATISchAppRoute2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRoute2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRoute2,"CATISchAppRoute2",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRoute2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppRoute2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRoute2##classe(classe::MetaObject(),TIECATISchAppRoute2##classe::MetaObject(),(void *)CreateTIECATISchAppRoute2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppRoute2(classe) \
 \
 \
declare_TIE_CATISchAppRoute2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRoute2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRoute2,"CATISchAppRoute2",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRoute2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppRoute2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRoute2##classe(classe::MetaObject(),TIECATISchAppRoute2##classe::MetaObject(),(void *)CreateTIECATISchAppRoute2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppRoute2(classe) TIE_CATISchAppRoute2(classe)
#else
#define BOA_CATISchAppRoute2(classe) CATImplementBOA(CATISchAppRoute2, classe)
#endif

#endif
