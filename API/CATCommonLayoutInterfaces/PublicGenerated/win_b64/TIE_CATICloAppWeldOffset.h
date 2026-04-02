#ifndef __TIE_CATICloAppWeldOffset
#define __TIE_CATICloAppWeldOffset

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloAppWeldOffset.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloAppWeldOffset */
#define declare_TIE_CATICloAppWeldOffset(classe) \
 \
 \
class TIECATICloAppWeldOffset##classe : public CATICloAppWeldOffset \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloAppWeldOffset, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetWeldOffset ( const wchar_t* iaWeldEndStyle, const double idRunInsideRadius, const double idRunOutsideRadius, const double idBranchInsideRadius, const double idBranchOutsideRadius, const double idWeldGap, double* odWeldOffset ) ; \
};



#define ENVTIEdeclare_CATICloAppWeldOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetWeldOffset ( const wchar_t* iaWeldEndStyle, const double idRunInsideRadius, const double idRunOutsideRadius, const double idBranchInsideRadius, const double idBranchOutsideRadius, const double idWeldGap, double* odWeldOffset ) ; \


#define ENVTIEdefine_CATICloAppWeldOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetWeldOffset ( const wchar_t* iaWeldEndStyle, const double idRunInsideRadius, const double idRunOutsideRadius, const double idBranchInsideRadius, const double idBranchOutsideRadius, const double idWeldGap, double* odWeldOffset )  \
{ \
return (ENVTIECALL(CATICloAppWeldOffset,ENVTIETypeLetter,ENVTIELetter)GetWeldOffset (iaWeldEndStyle,idRunInsideRadius,idRunOutsideRadius,idBranchInsideRadius,idBranchOutsideRadius,idWeldGap,odWeldOffset )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloAppWeldOffset(classe)    TIECATICloAppWeldOffset##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloAppWeldOffset(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloAppWeldOffset, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATICloAppWeldOffset, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATICloAppWeldOffset, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloAppWeldOffset, classe) \
 \
HRESULT  TIECATICloAppWeldOffset##classe::GetWeldOffset ( const wchar_t* iaWeldEndStyle, const double idRunInsideRadius, const double idRunOutsideRadius, const double idBranchInsideRadius, const double idBranchOutsideRadius, const double idWeldGap, double* odWeldOffset )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWeldOffset (iaWeldEndStyle,idRunInsideRadius,idRunOutsideRadius,idBranchInsideRadius,idBranchOutsideRadius,idWeldGap,odWeldOffset )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloAppWeldOffset(classe) \
 \
 \
declare_TIE_CATICloAppWeldOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloAppWeldOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloAppWeldOffset,"CATICloAppWeldOffset",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloAppWeldOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloAppWeldOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloAppWeldOffset##classe(classe::MetaObject(),TIECATICloAppWeldOffset##classe::MetaObject(),(void *)CreateTIECATICloAppWeldOffset##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloAppWeldOffset(classe) \
 \
 \
declare_TIE_CATICloAppWeldOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloAppWeldOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloAppWeldOffset,"CATICloAppWeldOffset",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloAppWeldOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloAppWeldOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloAppWeldOffset##classe(classe::MetaObject(),TIECATICloAppWeldOffset##classe::MetaObject(),(void *)CreateTIECATICloAppWeldOffset##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloAppWeldOffset(classe) TIE_CATICloAppWeldOffset(classe)
#else
#define BOA_CATICloAppWeldOffset(classe) CATImplementBOA(CATICloAppWeldOffset, classe)
#endif

#endif
