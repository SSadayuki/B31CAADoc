#ifndef __TIE_CATICkeLaw
#define __TIE_CATICkeLaw

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICkeLaw.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICkeLaw */
#define declare_TIE_CATICkeLaw(classe) \
 \
 \
class TIECATICkeLaw##classe : public CATICkeLaw \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICkeLaw, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATICkeFunction_var GetFunction () const ; \
      virtual void GetDomain (double &oMin, double &oMax) const ; \
      virtual CATCompositeLaw* ComputesCompositeLaw () const ; \
      virtual CATCkeListOfParm GetFormalParameters () const ; \
      virtual	void AddFormalParameter (const CATICkeParm_var &iParm) const ; \
      virtual	void RemoveFormalParameter (const CATICkeParm_var &iParm) const ; \
};



#define ENVTIEdeclare_CATICkeLaw(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATICkeFunction_var GetFunction () const ; \
virtual void GetDomain (double &oMin, double &oMax) const ; \
virtual CATCompositeLaw* ComputesCompositeLaw () const ; \
virtual CATCkeListOfParm GetFormalParameters () const ; \
virtual	void AddFormalParameter (const CATICkeParm_var &iParm) const ; \
virtual	void RemoveFormalParameter (const CATICkeParm_var &iParm) const ; \


#define ENVTIEdefine_CATICkeLaw(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATICkeFunction_var  ENVTIEName::GetFunction () const  \
{ \
return (ENVTIECALL(CATICkeLaw,ENVTIETypeLetter,ENVTIELetter)GetFunction ()); \
} \
void  ENVTIEName::GetDomain (double &oMin, double &oMax) const  \
{ \
 (ENVTIECALL(CATICkeLaw,ENVTIETypeLetter,ENVTIELetter)GetDomain (oMin,oMax)); \
} \
CATCompositeLaw*  ENVTIEName::ComputesCompositeLaw () const  \
{ \
return (ENVTIECALL(CATICkeLaw,ENVTIETypeLetter,ENVTIELetter)ComputesCompositeLaw ()); \
} \
CATCkeListOfParm  ENVTIEName::GetFormalParameters () const  \
{ \
return (ENVTIECALL(CATICkeLaw,ENVTIETypeLetter,ENVTIELetter)GetFormalParameters ()); \
} \
	void  ENVTIEName::AddFormalParameter (const CATICkeParm_var &iParm) const  \
{ \
 (ENVTIECALL(CATICkeLaw,ENVTIETypeLetter,ENVTIELetter)AddFormalParameter (iParm)); \
} \
	void  ENVTIEName::RemoveFormalParameter (const CATICkeParm_var &iParm) const  \
{ \
 (ENVTIECALL(CATICkeLaw,ENVTIETypeLetter,ENVTIELetter)RemoveFormalParameter (iParm)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICkeLaw(classe)    TIECATICkeLaw##classe


/* Common methods inside a TIE */
#define common_TIE_CATICkeLaw(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICkeLaw, classe) \
 \
 \
CATImplementTIEMethods(CATICkeLaw, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICkeLaw, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICkeLaw, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICkeLaw, classe) \
 \
CATICkeFunction_var  TIECATICkeLaw##classe::GetFunction () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFunction ()); \
} \
void  TIECATICkeLaw##classe::GetDomain (double &oMin, double &oMax) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDomain (oMin,oMax); \
} \
CATCompositeLaw*  TIECATICkeLaw##classe::ComputesCompositeLaw () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputesCompositeLaw ()); \
} \
CATCkeListOfParm  TIECATICkeLaw##classe::GetFormalParameters () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFormalParameters ()); \
} \
	void  TIECATICkeLaw##classe::AddFormalParameter (const CATICkeParm_var &iParm) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFormalParameter (iParm); \
} \
	void  TIECATICkeLaw##classe::RemoveFormalParameter (const CATICkeParm_var &iParm) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFormalParameter (iParm); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICkeLaw(classe) \
 \
 \
declare_TIE_CATICkeLaw(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICkeLaw##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICkeLaw,"CATICkeLaw",CATICkeLaw::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICkeLaw(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICkeLaw, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICkeLaw##classe(classe::MetaObject(),CATICkeLaw::MetaObject(),(void *)CreateTIECATICkeLaw##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICkeLaw(classe) \
 \
 \
declare_TIE_CATICkeLaw(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICkeLaw##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICkeLaw,"CATICkeLaw",CATICkeLaw::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICkeLaw(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICkeLaw, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICkeLaw##classe(classe::MetaObject(),CATICkeLaw::MetaObject(),(void *)CreateTIECATICkeLaw##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICkeLaw(classe) TIE_CATICkeLaw(classe)
#else
#define BOA_CATICkeLaw(classe) CATImplementBOA(CATICkeLaw, classe)
#endif

#endif
