#ifndef __TIE_CATIProductSelection
#define __TIE_CATIProductSelection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIProductSelection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIProductSelection */
#define declare_TIE_CATIProductSelection(classe) \
 \
 \
class TIECATIProductSelection##classe : public CATIProductSelection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIProductSelection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList ) ; \
      virtual HRESULT   GetSelectionCount( long & oCount ) ; \
};



#define ENVTIEdeclare_CATIProductSelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList ) ; \
virtual HRESULT   GetSelectionCount( long & oCount ) ; \


#define ENVTIEdefine_CATIProductSelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList )  \
{ \
return (ENVTIECALL(CATIProductSelection,ENVTIETypeLetter,ENVTIELetter)ExtractProducts (iOptionalContainer ,iTargetProduct ,oList )); \
} \
HRESULT    ENVTIEName::GetSelectionCount( long & oCount )  \
{ \
return (ENVTIECALL(CATIProductSelection,ENVTIETypeLetter,ENVTIELetter)GetSelectionCount(oCount )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIProductSelection(classe)    TIECATIProductSelection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIProductSelection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIProductSelection, classe) \
 \
 \
CATImplementTIEMethods(CATIProductSelection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIProductSelection, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIProductSelection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIProductSelection, classe) \
 \
HRESULT    TIECATIProductSelection##classe::ExtractProducts (  CATIContainer                *  iOptionalContainer , CATIProduct                  *  iTargetProduct , CATListValCATBaseUnknown_var *& oList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractProducts (iOptionalContainer ,iTargetProduct ,oList )); \
} \
HRESULT    TIECATIProductSelection##classe::GetSelectionCount( long & oCount )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectionCount(oCount )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIProductSelection(classe) \
 \
 \
declare_TIE_CATIProductSelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIProductSelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIProductSelection,"CATIProductSelection",CATIProductSelection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIProductSelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIProductSelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIProductSelection##classe(classe::MetaObject(),CATIProductSelection::MetaObject(),(void *)CreateTIECATIProductSelection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIProductSelection(classe) \
 \
 \
declare_TIE_CATIProductSelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIProductSelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIProductSelection,"CATIProductSelection",CATIProductSelection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIProductSelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIProductSelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIProductSelection##classe(classe::MetaObject(),CATIProductSelection::MetaObject(),(void *)CreateTIECATIProductSelection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIProductSelection(classe) TIE_CATIProductSelection(classe)
#else
#define BOA_CATIProductSelection(classe) CATImplementBOA(CATIProductSelection, classe)
#endif

#endif
