#ifndef __TIE_CATICloAppBendable
#define __TIE_CATICloAppBendable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloAppBendable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloAppBendable */
#define declare_TIE_CATICloAppBendable(classe) \
 \
 \
class TIECATICloAppBendable##classe : public CATICloAppBendable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloAppBendable, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSpringBackRadius ( const CATAngle &iTurnAngleRadian, const double &iRunNodeRadiusMM, const double &iDiameterFactor, const int &iRuleUsed, double &oSpringBackRadiusMM) ; \
};



#define ENVTIEdeclare_CATICloAppBendable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSpringBackRadius ( const CATAngle &iTurnAngleRadian, const double &iRunNodeRadiusMM, const double &iDiameterFactor, const int &iRuleUsed, double &oSpringBackRadiusMM) ; \


#define ENVTIEdefine_CATICloAppBendable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSpringBackRadius ( const CATAngle &iTurnAngleRadian, const double &iRunNodeRadiusMM, const double &iDiameterFactor, const int &iRuleUsed, double &oSpringBackRadiusMM)  \
{ \
return (ENVTIECALL(CATICloAppBendable,ENVTIETypeLetter,ENVTIELetter)GetSpringBackRadius (iTurnAngleRadian,iRunNodeRadiusMM,iDiameterFactor,iRuleUsed,oSpringBackRadiusMM)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloAppBendable(classe)    TIECATICloAppBendable##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloAppBendable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloAppBendable, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATICloAppBendable, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATICloAppBendable, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloAppBendable, classe) \
 \
HRESULT  TIECATICloAppBendable##classe::GetSpringBackRadius ( const CATAngle &iTurnAngleRadian, const double &iRunNodeRadiusMM, const double &iDiameterFactor, const int &iRuleUsed, double &oSpringBackRadiusMM)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpringBackRadius (iTurnAngleRadian,iRunNodeRadiusMM,iDiameterFactor,iRuleUsed,oSpringBackRadiusMM)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloAppBendable(classe) \
 \
 \
declare_TIE_CATICloAppBendable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloAppBendable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloAppBendable,"CATICloAppBendable",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloAppBendable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloAppBendable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloAppBendable##classe(classe::MetaObject(),TIECATICloAppBendable##classe::MetaObject(),(void *)CreateTIECATICloAppBendable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloAppBendable(classe) \
 \
 \
declare_TIE_CATICloAppBendable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloAppBendable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloAppBendable,"CATICloAppBendable",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloAppBendable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloAppBendable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloAppBendable##classe(classe::MetaObject(),TIECATICloAppBendable##classe::MetaObject(),(void *)CreateTIECATICloAppBendable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloAppBendable(classe) TIE_CATICloAppBendable(classe)
#else
#define BOA_CATICloAppBendable(classe) CATImplementBOA(CATICloAppBendable, classe)
#endif

#endif
