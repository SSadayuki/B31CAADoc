#ifndef __TIE_CATIV4DataSaver
#define __TIE_CATIV4DataSaver

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIV4DataSaver.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIV4DataSaver */
#define declare_TIE_CATIV4DataSaver(classe) \
 \
 \
class TIECATIV4DataSaver##classe : public CATIV4DataSaver \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIV4DataSaver, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetData(int & oV4Type, double * & oV4Block) ; \
      virtual HRESULT GetUserIntent(int & oIntent) ; \
      virtual HRESULT GetSplineConstraintData(int & oV4SplineType, int & oV4BlockLength, double * & oV4BlockData) ; \
};



#define ENVTIEdeclare_CATIV4DataSaver(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetData(int & oV4Type, double * & oV4Block) ; \
virtual HRESULT GetUserIntent(int & oIntent) ; \
virtual HRESULT GetSplineConstraintData(int & oV4SplineType, int & oV4BlockLength, double * & oV4BlockData) ; \


#define ENVTIEdefine_CATIV4DataSaver(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetData(int & oV4Type, double * & oV4Block)  \
{ \
return (ENVTIECALL(CATIV4DataSaver,ENVTIETypeLetter,ENVTIELetter)GetData(oV4Type,oV4Block)); \
} \
HRESULT  ENVTIEName::GetUserIntent(int & oIntent)  \
{ \
return (ENVTIECALL(CATIV4DataSaver,ENVTIETypeLetter,ENVTIELetter)GetUserIntent(oIntent)); \
} \
HRESULT  ENVTIEName::GetSplineConstraintData(int & oV4SplineType, int & oV4BlockLength, double * & oV4BlockData)  \
{ \
return (ENVTIECALL(CATIV4DataSaver,ENVTIETypeLetter,ENVTIELetter)GetSplineConstraintData(oV4SplineType,oV4BlockLength,oV4BlockData)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIV4DataSaver(classe)    TIECATIV4DataSaver##classe


/* Common methods inside a TIE */
#define common_TIE_CATIV4DataSaver(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIV4DataSaver, classe) \
 \
 \
CATImplementTIEMethods(CATIV4DataSaver, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIV4DataSaver, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIV4DataSaver, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIV4DataSaver, classe) \
 \
HRESULT  TIECATIV4DataSaver##classe::GetData(int & oV4Type, double * & oV4Block)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetData(oV4Type,oV4Block)); \
} \
HRESULT  TIECATIV4DataSaver##classe::GetUserIntent(int & oIntent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUserIntent(oIntent)); \
} \
HRESULT  TIECATIV4DataSaver##classe::GetSplineConstraintData(int & oV4SplineType, int & oV4BlockLength, double * & oV4BlockData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSplineConstraintData(oV4SplineType,oV4BlockLength,oV4BlockData)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIV4DataSaver(classe) \
 \
 \
declare_TIE_CATIV4DataSaver(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIV4DataSaver##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIV4DataSaver,"CATIV4DataSaver",CATIV4DataSaver::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIV4DataSaver(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIV4DataSaver, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIV4DataSaver##classe(classe::MetaObject(),CATIV4DataSaver::MetaObject(),(void *)CreateTIECATIV4DataSaver##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIV4DataSaver(classe) \
 \
 \
declare_TIE_CATIV4DataSaver(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIV4DataSaver##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIV4DataSaver,"CATIV4DataSaver",CATIV4DataSaver::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIV4DataSaver(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIV4DataSaver, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIV4DataSaver##classe(classe::MetaObject(),CATIV4DataSaver::MetaObject(),(void *)CreateTIECATIV4DataSaver##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIV4DataSaver(classe) TIE_CATIV4DataSaver(classe)
#else
#define BOA_CATIV4DataSaver(classe) CATImplementBOA(CATIV4DataSaver, classe)
#endif

#endif
