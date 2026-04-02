#ifndef __TIE_CATIAWorkScene
#define __TIE_CATIAWorkScene

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAWorkScene.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAWorkScene */
#define declare_TIE_CATIAWorkScene(classe) \
 \
 \
class TIECATIAWorkScene##classe : public CATIAWorkScene \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAWorkScene, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall HasAMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oHasAShape); \
      virtual HRESULT __stdcall GetMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep); \
      virtual HRESULT __stdcall GetPartNumber(CATIAProduct * iProduct, CATBSTR & oPartNumber); \
      virtual HRESULT __stdcall GetRevision(CATIAProduct * iProduct, CATBSTR & oRevision); \
      virtual HRESULT __stdcall GetDefinition(CATIAProduct * iProduct, CATBSTR & oDefinition); \
      virtual HRESULT __stdcall GetNomenclature(CATIAProduct * iProduct, CATBSTR & oNomenclature); \
      virtual HRESULT __stdcall GetSource(CATIAProduct * iProduct, CatProductSource & oSource); \
      virtual HRESULT __stdcall GetDescription(CATIAProduct * iProduct, CATBSTR & oDescription); \
      virtual HRESULT __stdcall GetMove(CATIAProduct * iProduct, CATIAMove *& oMove); \
      virtual HRESULT __stdcall GetPosition(CATIAProduct * iProduct, CATIAPosition *& oPosition); \
      virtual HRESULT __stdcall UpgradeToPartial(CATIAScene *& oProductScene); \
      virtual HRESULT __stdcall UpgradeToFull(CATIAScene *& oProductScene); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAWorkScene(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall HasAMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oHasAShape); \
virtual HRESULT __stdcall GetMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep); \
virtual HRESULT __stdcall GetPartNumber(CATIAProduct * iProduct, CATBSTR & oPartNumber); \
virtual HRESULT __stdcall GetRevision(CATIAProduct * iProduct, CATBSTR & oRevision); \
virtual HRESULT __stdcall GetDefinition(CATIAProduct * iProduct, CATBSTR & oDefinition); \
virtual HRESULT __stdcall GetNomenclature(CATIAProduct * iProduct, CATBSTR & oNomenclature); \
virtual HRESULT __stdcall GetSource(CATIAProduct * iProduct, CatProductSource & oSource); \
virtual HRESULT __stdcall GetDescription(CATIAProduct * iProduct, CATBSTR & oDescription); \
virtual HRESULT __stdcall GetMove(CATIAProduct * iProduct, CATIAMove *& oMove); \
virtual HRESULT __stdcall GetPosition(CATIAProduct * iProduct, CATIAPosition *& oPosition); \
virtual HRESULT __stdcall UpgradeToPartial(CATIAScene *& oProductScene); \
virtual HRESULT __stdcall UpgradeToFull(CATIAScene *& oProductScene); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAWorkScene(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::HasAMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oHasAShape) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)HasAMasterShapeRepresentation(iProduct,oHasAShape)); \
} \
HRESULT __stdcall  ENVTIEName::GetMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetMasterShapeRepresentation(iProduct,iLoadIfNecessary,oMasterShapeRep)); \
} \
HRESULT __stdcall  ENVTIEName::GetPartNumber(CATIAProduct * iProduct, CATBSTR & oPartNumber) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetPartNumber(iProduct,oPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetRevision(CATIAProduct * iProduct, CATBSTR & oRevision) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetRevision(iProduct,oRevision)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefinition(CATIAProduct * iProduct, CATBSTR & oDefinition) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetDefinition(iProduct,oDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::GetNomenclature(CATIAProduct * iProduct, CATBSTR & oNomenclature) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetNomenclature(iProduct,oNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::GetSource(CATIAProduct * iProduct, CatProductSource & oSource) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetSource(iProduct,oSource)); \
} \
HRESULT __stdcall  ENVTIEName::GetDescription(CATIAProduct * iProduct, CATBSTR & oDescription) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetDescription(iProduct,oDescription)); \
} \
HRESULT __stdcall  ENVTIEName::GetMove(CATIAProduct * iProduct, CATIAMove *& oMove) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetMove(iProduct,oMove)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(CATIAProduct * iProduct, CATIAPosition *& oPosition) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetPosition(iProduct,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::UpgradeToPartial(CATIAScene *& oProductScene) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)UpgradeToPartial(oProductScene)); \
} \
HRESULT __stdcall  ENVTIEName::UpgradeToFull(CATIAScene *& oProductScene) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)UpgradeToFull(oProductScene)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAWorkScene,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAWorkScene(classe)    TIECATIAWorkScene##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAWorkScene(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAWorkScene, classe) \
 \
 \
CATImplementTIEMethods(CATIAWorkScene, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAWorkScene, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAWorkScene, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAWorkScene, classe) \
 \
HRESULT __stdcall  TIECATIAWorkScene##classe::HasAMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oHasAShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProduct,&oHasAShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAMasterShapeRepresentation(iProduct,oHasAShape); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProduct,&oHasAShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetMasterShapeRepresentation(CATIAProduct * iProduct, CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&iLoadIfNecessary,&oMasterShapeRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMasterShapeRepresentation(iProduct,iLoadIfNecessary,oMasterShapeRep); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&iLoadIfNecessary,&oMasterShapeRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetPartNumber(CATIAProduct * iProduct, CATBSTR & oPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iProduct,&oPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartNumber(iProduct,oPartNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iProduct,&oPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetRevision(CATIAProduct * iProduct, CATBSTR & oRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProduct,&oRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRevision(iProduct,oRevision); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProduct,&oRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetDefinition(CATIAProduct * iProduct, CATBSTR & oDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iProduct,&oDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefinition(iProduct,oDefinition); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iProduct,&oDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetNomenclature(CATIAProduct * iProduct, CATBSTR & oNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iProduct,&oNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNomenclature(iProduct,oNomenclature); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iProduct,&oNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetSource(CATIAProduct * iProduct, CatProductSource & oSource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iProduct,&oSource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSource(iProduct,oSource); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iProduct,&oSource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetDescription(CATIAProduct * iProduct, CATBSTR & oDescription) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iProduct,&oDescription); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDescription(iProduct,oDescription); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iProduct,&oDescription); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetMove(CATIAProduct * iProduct, CATIAMove *& oMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iProduct,&oMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMove(iProduct,oMove); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iProduct,&oMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::GetPosition(CATIAProduct * iProduct, CATIAPosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iProduct,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(iProduct,oPosition); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iProduct,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::UpgradeToPartial(CATIAScene *& oProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpgradeToPartial(oProductScene); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oProductScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScene##classe::UpgradeToFull(CATIAScene *& oProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpgradeToFull(oProductScene); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oProductScene); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScene##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScene##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScene##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScene##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScene##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAWorkScene(classe) \
 \
 \
declare_TIE_CATIAWorkScene(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWorkScene##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWorkScene,"CATIAWorkScene",CATIAWorkScene::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWorkScene(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAWorkScene, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWorkScene##classe(classe::MetaObject(),CATIAWorkScene::MetaObject(),(void *)CreateTIECATIAWorkScene##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAWorkScene(classe) \
 \
 \
declare_TIE_CATIAWorkScene(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWorkScene##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWorkScene,"CATIAWorkScene",CATIAWorkScene::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWorkScene(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAWorkScene, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWorkScene##classe(classe::MetaObject(),CATIAWorkScene::MetaObject(),(void *)CreateTIECATIAWorkScene##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAWorkScene(classe) TIE_CATIAWorkScene(classe)
#else
#define BOA_CATIAWorkScene(classe) CATImplementBOA(CATIAWorkScene, classe)
#endif

#endif
