#ifndef __TIE_CATISamAnalysisConnectionDesign
#define __TIE_CATISamAnalysisConnectionDesign

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisConnectionDesign.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisConnectionDesign */
#define declare_TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
class TIECATISamAnalysisConnectionDesign##classe : public CATISamAnalysisConnectionDesign \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisConnectionDesign, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetConnectionDesigners(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATISpecObject_var * &oMeshPartList1, CATListValCATBaseUnknown_var &oConnectorList2, CATListValCATISpecObject_var * &oMeshPartList2 ) ; \
      virtual HRESULT GetConnectedSupports(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATBaseUnknown_var &oConnectorList2) ; \
};



#define ENVTIEdeclare_CATISamAnalysisConnectionDesign(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetConnectionDesigners(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATISpecObject_var * &oMeshPartList1, CATListValCATBaseUnknown_var &oConnectorList2, CATListValCATISpecObject_var * &oMeshPartList2 ) ; \
virtual HRESULT GetConnectedSupports(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATBaseUnknown_var &oConnectorList2) ; \


#define ENVTIEdefine_CATISamAnalysisConnectionDesign(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetConnectionDesigners(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATISpecObject_var * &oMeshPartList1, CATListValCATBaseUnknown_var &oConnectorList2, CATListValCATISpecObject_var * &oMeshPartList2 )  \
{ \
return (ENVTIECALL(CATISamAnalysisConnectionDesign,ENVTIETypeLetter,ENVTIELetter)GetConnectionDesigners(oConnectorList1,oMeshPartList1,oConnectorList2,oMeshPartList2 )); \
} \
HRESULT  ENVTIEName::GetConnectedSupports(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATBaseUnknown_var &oConnectorList2)  \
{ \
return (ENVTIECALL(CATISamAnalysisConnectionDesign,ENVTIETypeLetter,ENVTIELetter)GetConnectedSupports(oConnectorList1,oConnectorList2)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisConnectionDesign(classe)    TIECATISamAnalysisConnectionDesign##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisConnectionDesign, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisConnectionDesign, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisConnectionDesign, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisConnectionDesign, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisConnectionDesign, classe) \
 \
HRESULT  TIECATISamAnalysisConnectionDesign##classe::GetConnectionDesigners(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATISpecObject_var * &oMeshPartList1, CATListValCATBaseUnknown_var &oConnectorList2, CATListValCATISpecObject_var * &oMeshPartList2 )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectionDesigners(oConnectorList1,oMeshPartList1,oConnectorList2,oMeshPartList2 )); \
} \
HRESULT  TIECATISamAnalysisConnectionDesign##classe::GetConnectedSupports(CATListValCATBaseUnknown_var &oConnectorList1, CATListValCATBaseUnknown_var &oConnectorList2)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectedSupports(oConnectorList1,oConnectorList2)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
declare_TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisConnectionDesign##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisConnectionDesign,"CATISamAnalysisConnectionDesign",CATISamAnalysisConnectionDesign::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisConnectionDesign, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisConnectionDesign##classe(classe::MetaObject(),CATISamAnalysisConnectionDesign::MetaObject(),(void *)CreateTIECATISamAnalysisConnectionDesign##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisConnectionDesign(classe) \
 \
 \
declare_TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisConnectionDesign##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisConnectionDesign,"CATISamAnalysisConnectionDesign",CATISamAnalysisConnectionDesign::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisConnectionDesign(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisConnectionDesign, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisConnectionDesign##classe(classe::MetaObject(),CATISamAnalysisConnectionDesign::MetaObject(),(void *)CreateTIECATISamAnalysisConnectionDesign##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisConnectionDesign(classe) TIE_CATISamAnalysisConnectionDesign(classe)
#else
#define BOA_CATISamAnalysisConnectionDesign(classe) CATImplementBOA(CATISamAnalysisConnectionDesign, classe)
#endif

#endif
