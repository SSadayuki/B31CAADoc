#ifndef __TIE_CATIPersistent
#define __TIE_CATIPersistent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPersistent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPersistent */
#define declare_TIE_CATIPersistent(classe) \
 \
 \
class TIECATIPersistent##classe : public CATIPersistent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPersistent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean Dirty (); \
      virtual void Save (); \
      virtual void SaveAs (char* iStoragePrintableName, CATBoolean iBecameCurrent); \
      virtual void SaveAs_B (_SEQUENCE_octet storageName, CATBoolean becameCurrent); \
      virtual void Load (char* iStoragePrintableName, CATBoolean iReadOnly); \
      virtual void Load_B (_SEQUENCE_octet storageName, CATBoolean readOnly); \
};



#define ENVTIEdeclare_CATIPersistent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean Dirty (); \
virtual void Save (); \
virtual void SaveAs (char* iStoragePrintableName, CATBoolean iBecameCurrent); \
virtual void SaveAs_B (_SEQUENCE_octet storageName, CATBoolean becameCurrent); \
virtual void Load (char* iStoragePrintableName, CATBoolean iReadOnly); \
virtual void Load_B (_SEQUENCE_octet storageName, CATBoolean readOnly); \


#define ENVTIEdefine_CATIPersistent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::Dirty () \
{ \
return (ENVTIECALL(CATIPersistent,ENVTIETypeLetter,ENVTIELetter)Dirty ()); \
} \
void  ENVTIEName::Save () \
{ \
 (ENVTIECALL(CATIPersistent,ENVTIETypeLetter,ENVTIELetter)Save ()); \
} \
void  ENVTIEName::SaveAs (char* iStoragePrintableName, CATBoolean iBecameCurrent) \
{ \
 (ENVTIECALL(CATIPersistent,ENVTIETypeLetter,ENVTIELetter)SaveAs (iStoragePrintableName,iBecameCurrent)); \
} \
void  ENVTIEName::SaveAs_B (_SEQUENCE_octet storageName, CATBoolean becameCurrent) \
{ \
 (ENVTIECALL(CATIPersistent,ENVTIETypeLetter,ENVTIELetter)SaveAs_B (storageName,becameCurrent)); \
} \
void  ENVTIEName::Load (char* iStoragePrintableName, CATBoolean iReadOnly) \
{ \
 (ENVTIECALL(CATIPersistent,ENVTIETypeLetter,ENVTIELetter)Load (iStoragePrintableName,iReadOnly)); \
} \
void  ENVTIEName::Load_B (_SEQUENCE_octet storageName, CATBoolean readOnly) \
{ \
 (ENVTIECALL(CATIPersistent,ENVTIETypeLetter,ENVTIELetter)Load_B (storageName,readOnly)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPersistent(classe)    TIECATIPersistent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPersistent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPersistent, classe) \
 \
 \
CATImplementTIEMethods(CATIPersistent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPersistent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPersistent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPersistent, classe) \
 \
CATBoolean  TIECATIPersistent##classe::Dirty () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dirty ()); \
} \
void  TIECATIPersistent##classe::Save () \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Save (); \
} \
void  TIECATIPersistent##classe::SaveAs (char* iStoragePrintableName, CATBoolean iBecameCurrent) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveAs (iStoragePrintableName,iBecameCurrent); \
} \
void  TIECATIPersistent##classe::SaveAs_B (_SEQUENCE_octet storageName, CATBoolean becameCurrent) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveAs_B (storageName,becameCurrent); \
} \
void  TIECATIPersistent##classe::Load (char* iStoragePrintableName, CATBoolean iReadOnly) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load (iStoragePrintableName,iReadOnly); \
} \
void  TIECATIPersistent##classe::Load_B (_SEQUENCE_octet storageName, CATBoolean readOnly) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load_B (storageName,readOnly); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPersistent(classe) \
 \
 \
declare_TIE_CATIPersistent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPersistent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPersistent,"CATIPersistent",CATIPersistent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPersistent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPersistent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPersistent##classe(classe::MetaObject(),CATIPersistent::MetaObject(),(void *)CreateTIECATIPersistent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPersistent(classe) \
 \
 \
declare_TIE_CATIPersistent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPersistent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPersistent,"CATIPersistent",CATIPersistent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPersistent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPersistent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPersistent##classe(classe::MetaObject(),CATIPersistent::MetaObject(),(void *)CreateTIECATIPersistent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPersistent(classe) TIE_CATIPersistent(classe)
#else
#define BOA_CATIPersistent(classe) CATImplementBOA(CATIPersistent, classe)
#endif

#endif
