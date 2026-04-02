#ifndef __TIE_CATIPrtToPattern
#define __TIE_CATIPrtToPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrtToPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrtToPattern */
#define declare_TIE_CATIPrtToPattern(classe) \
 \
 \
class TIECATIPrtToPattern##classe : public CATIPrtToPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrtToPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean SpecificPatternNecessity() const ; \
      virtual CATBoolean ValidForUserPattern() const ; \
};



#define ENVTIEdeclare_CATIPrtToPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean SpecificPatternNecessity() const ; \
virtual CATBoolean ValidForUserPattern() const ; \


#define ENVTIEdefine_CATIPrtToPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::SpecificPatternNecessity() const  \
{ \
return (ENVTIECALL(CATIPrtToPattern,ENVTIETypeLetter,ENVTIELetter)SpecificPatternNecessity()); \
} \
CATBoolean  ENVTIEName::ValidForUserPattern() const  \
{ \
return (ENVTIECALL(CATIPrtToPattern,ENVTIETypeLetter,ENVTIELetter)ValidForUserPattern()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrtToPattern(classe)    TIECATIPrtToPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrtToPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrtToPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIPrtToPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrtToPattern, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrtToPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrtToPattern, classe) \
 \
CATBoolean  TIECATIPrtToPattern##classe::SpecificPatternNecessity() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SpecificPatternNecessity()); \
} \
CATBoolean  TIECATIPrtToPattern##classe::ValidForUserPattern() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidForUserPattern()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrtToPattern(classe) \
 \
 \
declare_TIE_CATIPrtToPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtToPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtToPattern,"CATIPrtToPattern",CATIPrtToPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtToPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrtToPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtToPattern##classe(classe::MetaObject(),CATIPrtToPattern::MetaObject(),(void *)CreateTIECATIPrtToPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrtToPattern(classe) \
 \
 \
declare_TIE_CATIPrtToPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtToPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtToPattern,"CATIPrtToPattern",CATIPrtToPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtToPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrtToPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtToPattern##classe(classe::MetaObject(),CATIPrtToPattern::MetaObject(),(void *)CreateTIECATIPrtToPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrtToPattern(classe) TIE_CATIPrtToPattern(classe)
#else
#define BOA_CATIPrtToPattern(classe) CATImplementBOA(CATIPrtToPattern, classe)
#endif

#endif
