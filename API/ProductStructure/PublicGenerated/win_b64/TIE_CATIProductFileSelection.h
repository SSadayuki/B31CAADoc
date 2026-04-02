#ifndef __TIE_CATIProductFileSelection
#define __TIE_CATIProductFileSelection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIProductFileSelection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIProductFileSelection */
#define declare_TIE_CATIProductFileSelection(classe) \
 \
 \
class TIECATIProductFileSelection##classe : public CATIProductFileSelection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIProductFileSelection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetRecognizedPathExtensions( CATListOfCATUnicodeString *& ioListOfTypes ) ; \
      virtual HRESULT GetCurrentFiles( CATListOfCATUnicodeString *& oListOfPaths ) ; \
      virtual HRESULT KeepRecognizedFiles( CATListOfCATUnicodeString *& ioListOfPaths, CATListOfCATUnicodeString *& ioListOfPathExtensions ) ; \
      virtual HRESULT UnkeepAll() ; \
      virtual HRESULT   ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList ) ; \
      virtual HRESULT   GetSelectionCount( long & oCount ) ; \
};



#define ENVTIEdeclare_CATIProductFileSelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetRecognizedPathExtensions( CATListOfCATUnicodeString *& ioListOfTypes ) ; \
virtual HRESULT GetCurrentFiles( CATListOfCATUnicodeString *& oListOfPaths ) ; \
virtual HRESULT KeepRecognizedFiles( CATListOfCATUnicodeString *& ioListOfPaths, CATListOfCATUnicodeString *& ioListOfPathExtensions ) ; \
virtual HRESULT UnkeepAll() ; \
virtual HRESULT   ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList ) ; \
virtual HRESULT   GetSelectionCount( long & oCount ) ; \


#define ENVTIEdefine_CATIProductFileSelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetRecognizedPathExtensions( CATListOfCATUnicodeString *& ioListOfTypes )  \
{ \
return (ENVTIECALL(CATIProductFileSelection,ENVTIETypeLetter,ENVTIELetter)GetRecognizedPathExtensions(ioListOfTypes )); \
} \
HRESULT  ENVTIEName::GetCurrentFiles( CATListOfCATUnicodeString *& oListOfPaths )  \
{ \
return (ENVTIECALL(CATIProductFileSelection,ENVTIETypeLetter,ENVTIELetter)GetCurrentFiles(oListOfPaths )); \
} \
HRESULT  ENVTIEName::KeepRecognizedFiles( CATListOfCATUnicodeString *& ioListOfPaths, CATListOfCATUnicodeString *& ioListOfPathExtensions )  \
{ \
return (ENVTIECALL(CATIProductFileSelection,ENVTIETypeLetter,ENVTIELetter)KeepRecognizedFiles(ioListOfPaths,ioListOfPathExtensions )); \
} \
HRESULT  ENVTIEName::UnkeepAll()  \
{ \
return (ENVTIECALL(CATIProductFileSelection,ENVTIETypeLetter,ENVTIELetter)UnkeepAll()); \
} \
HRESULT    ENVTIEName::ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList )  \
{ \
return (ENVTIECALL(CATIProductFileSelection,ENVTIETypeLetter,ENVTIELetter)ExtractProducts (iOptionalContainer ,iTargetProduct ,oList )); \
} \
HRESULT    ENVTIEName::GetSelectionCount( long & oCount )  \
{ \
return (ENVTIECALL(CATIProductFileSelection,ENVTIETypeLetter,ENVTIELetter)GetSelectionCount(oCount )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIProductFileSelection(classe)    TIECATIProductFileSelection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIProductFileSelection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIProductFileSelection, classe) \
 \
 \
CATImplementTIEMethods(CATIProductFileSelection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIProductFileSelection, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIProductFileSelection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIProductFileSelection, classe) \
 \
HRESULT  TIECATIProductFileSelection##classe::GetRecognizedPathExtensions( CATListOfCATUnicodeString *& ioListOfTypes )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRecognizedPathExtensions(ioListOfTypes )); \
} \
HRESULT  TIECATIProductFileSelection##classe::GetCurrentFiles( CATListOfCATUnicodeString *& oListOfPaths )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentFiles(oListOfPaths )); \
} \
HRESULT  TIECATIProductFileSelection##classe::KeepRecognizedFiles( CATListOfCATUnicodeString *& ioListOfPaths, CATListOfCATUnicodeString *& ioListOfPathExtensions )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->KeepRecognizedFiles(ioListOfPaths,ioListOfPathExtensions )); \
} \
HRESULT  TIECATIProductFileSelection##classe::UnkeepAll()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnkeepAll()); \
} \
HRESULT    TIECATIProductFileSelection##classe::ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractProducts (iOptionalContainer ,iTargetProduct ,oList )); \
} \
HRESULT    TIECATIProductFileSelection##classe::GetSelectionCount( long & oCount )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectionCount(oCount )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIProductFileSelection(classe) \
 \
 \
declare_TIE_CATIProductFileSelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIProductFileSelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIProductFileSelection,"CATIProductFileSelection",CATIProductFileSelection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIProductFileSelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIProductFileSelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIProductFileSelection##classe(classe::MetaObject(),CATIProductFileSelection::MetaObject(),(void *)CreateTIECATIProductFileSelection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIProductFileSelection(classe) \
 \
 \
declare_TIE_CATIProductFileSelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIProductFileSelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIProductFileSelection,"CATIProductFileSelection",CATIProductFileSelection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIProductFileSelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIProductFileSelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIProductFileSelection##classe(classe::MetaObject(),CATIProductFileSelection::MetaObject(),(void *)CreateTIECATIProductFileSelection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIProductFileSelection(classe) TIE_CATIProductFileSelection(classe)
#else
#define BOA_CATIProductFileSelection(classe) CATImplementBOA(CATIProductFileSelection, classe)
#endif

#endif
