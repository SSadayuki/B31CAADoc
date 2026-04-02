#ifndef __TIE_CATIVPMAccess
#define __TIE_CATIVPMAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVPMAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVPMAccess */
#define declare_TIE_CATIVPMAccess(classe) \
 \
 \
class TIECATIVPMAccess##classe : public CATIVPMAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVPMAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ExtractLFToMemory (int & ilgLF, char* iLongField, int & olgBuffer,  char *& oBuffer) ; \
      virtual HRESULT ExtractLFToFile (int & ilgLF, char* iLongField,  CATUnicodeString & ioPath) ; \
      virtual HRESULT ReadDone (const CATUnicodeString & iPath) ; \
};



#define ENVTIEdeclare_CATIVPMAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ExtractLFToMemory (int & ilgLF, char* iLongField, int & olgBuffer,  char *& oBuffer) ; \
virtual HRESULT ExtractLFToFile (int & ilgLF, char* iLongField,  CATUnicodeString & ioPath) ; \
virtual HRESULT ReadDone (const CATUnicodeString & iPath) ; \


#define ENVTIEdefine_CATIVPMAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ExtractLFToMemory (int & ilgLF, char* iLongField, int & olgBuffer,  char *& oBuffer)  \
{ \
return (ENVTIECALL(CATIVPMAccess,ENVTIETypeLetter,ENVTIELetter)ExtractLFToMemory (ilgLF,iLongField,olgBuffer,oBuffer)); \
} \
HRESULT  ENVTIEName::ExtractLFToFile (int & ilgLF, char* iLongField,  CATUnicodeString & ioPath)  \
{ \
return (ENVTIECALL(CATIVPMAccess,ENVTIETypeLetter,ENVTIELetter)ExtractLFToFile (ilgLF,iLongField,ioPath)); \
} \
HRESULT  ENVTIEName::ReadDone (const CATUnicodeString & iPath)  \
{ \
return (ENVTIECALL(CATIVPMAccess,ENVTIETypeLetter,ENVTIELetter)ReadDone (iPath)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVPMAccess(classe)    TIECATIVPMAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVPMAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVPMAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIVPMAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVPMAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVPMAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVPMAccess, classe) \
 \
HRESULT  TIECATIVPMAccess##classe::ExtractLFToMemory (int & ilgLF, char* iLongField, int & olgBuffer,  char *& oBuffer)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractLFToMemory (ilgLF,iLongField,olgBuffer,oBuffer)); \
} \
HRESULT  TIECATIVPMAccess##classe::ExtractLFToFile (int & ilgLF, char* iLongField,  CATUnicodeString & ioPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractLFToFile (ilgLF,iLongField,ioPath)); \
} \
HRESULT  TIECATIVPMAccess##classe::ReadDone (const CATUnicodeString & iPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadDone (iPath)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVPMAccess(classe) \
 \
 \
declare_TIE_CATIVPMAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVPMAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVPMAccess,"CATIVPMAccess",CATIVPMAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVPMAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVPMAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVPMAccess##classe(classe::MetaObject(),CATIVPMAccess::MetaObject(),(void *)CreateTIECATIVPMAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVPMAccess(classe) \
 \
 \
declare_TIE_CATIVPMAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVPMAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVPMAccess,"CATIVPMAccess",CATIVPMAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVPMAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVPMAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVPMAccess##classe(classe::MetaObject(),CATIVPMAccess::MetaObject(),(void *)CreateTIECATIVPMAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVPMAccess(classe) TIE_CATIVPMAccess(classe)
#else
#define BOA_CATIVPMAccess(classe) CATImplementBOA(CATIVPMAccess, classe)
#endif

#endif
