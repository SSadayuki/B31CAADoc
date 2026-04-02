#ifndef __TIE_CATICciVirtualStackingImportExport
#define __TIE_CATICciVirtualStackingImportExport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciVirtualStackingImportExport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciVirtualStackingImportExport */
#define declare_TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
class TIECATICciVirtualStackingImportExport##classe : public CATICciVirtualStackingImportExport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciVirtualStackingImportExport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ExportVirtualStacking(CATICkeSheet_var &ispSheet,const CATCciVirtualStackingEntityLevel& iEntityLevel,const CATCciVirtualStackingViewMode& iViewMode, const CATBoolean& bReorder, CATUnicodeString& oWarningMessage); \
      virtual HRESULT ImportVirtualStacking(const CATICkeSheet_var &ispSheet, CATUnicodeString& oWarningMessage); \
};



#define ENVTIEdeclare_CATICciVirtualStackingImportExport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ExportVirtualStacking(CATICkeSheet_var &ispSheet,const CATCciVirtualStackingEntityLevel& iEntityLevel,const CATCciVirtualStackingViewMode& iViewMode, const CATBoolean& bReorder, CATUnicodeString& oWarningMessage); \
virtual HRESULT ImportVirtualStacking(const CATICkeSheet_var &ispSheet, CATUnicodeString& oWarningMessage); \


#define ENVTIEdefine_CATICciVirtualStackingImportExport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ExportVirtualStacking(CATICkeSheet_var &ispSheet,const CATCciVirtualStackingEntityLevel& iEntityLevel,const CATCciVirtualStackingViewMode& iViewMode, const CATBoolean& bReorder, CATUnicodeString& oWarningMessage) \
{ \
return (ENVTIECALL(CATICciVirtualStackingImportExport,ENVTIETypeLetter,ENVTIELetter)ExportVirtualStacking(ispSheet,iEntityLevel,iViewMode,bReorder,oWarningMessage)); \
} \
HRESULT  ENVTIEName::ImportVirtualStacking(const CATICkeSheet_var &ispSheet, CATUnicodeString& oWarningMessage) \
{ \
return (ENVTIECALL(CATICciVirtualStackingImportExport,ENVTIETypeLetter,ENVTIELetter)ImportVirtualStacking(ispSheet,oWarningMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciVirtualStackingImportExport(classe)    TIECATICciVirtualStackingImportExport##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciVirtualStackingImportExport, classe) \
 \
 \
CATImplementTIEMethods(CATICciVirtualStackingImportExport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciVirtualStackingImportExport, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciVirtualStackingImportExport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciVirtualStackingImportExport, classe) \
 \
HRESULT  TIECATICciVirtualStackingImportExport##classe::ExportVirtualStacking(CATICkeSheet_var &ispSheet,const CATCciVirtualStackingEntityLevel& iEntityLevel,const CATCciVirtualStackingViewMode& iViewMode, const CATBoolean& bReorder, CATUnicodeString& oWarningMessage) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportVirtualStacking(ispSheet,iEntityLevel,iViewMode,bReorder,oWarningMessage)); \
} \
HRESULT  TIECATICciVirtualStackingImportExport##classe::ImportVirtualStacking(const CATICkeSheet_var &ispSheet, CATUnicodeString& oWarningMessage) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportVirtualStacking(ispSheet,oWarningMessage)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
declare_TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciVirtualStackingImportExport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciVirtualStackingImportExport,"CATICciVirtualStackingImportExport",CATICciVirtualStackingImportExport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciVirtualStackingImportExport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciVirtualStackingImportExport##classe(classe::MetaObject(),CATICciVirtualStackingImportExport::MetaObject(),(void *)CreateTIECATICciVirtualStackingImportExport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciVirtualStackingImportExport(classe) \
 \
 \
declare_TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciVirtualStackingImportExport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciVirtualStackingImportExport,"CATICciVirtualStackingImportExport",CATICciVirtualStackingImportExport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciVirtualStackingImportExport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciVirtualStackingImportExport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciVirtualStackingImportExport##classe(classe::MetaObject(),CATICciVirtualStackingImportExport::MetaObject(),(void *)CreateTIECATICciVirtualStackingImportExport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciVirtualStackingImportExport(classe) TIE_CATICciVirtualStackingImportExport(classe)
#else
#define BOA_CATICciVirtualStackingImportExport(classe) CATImplementBOA(CATICciVirtualStackingImportExport, classe)
#endif

#endif
