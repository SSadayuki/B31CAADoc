#ifndef __TIE_CATIAArrangementProduct
#define __TIE_CATIAArrangementProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementProduct */
#define declare_TIE_CATIAArrangementProduct(classe) \
 \
 \
class TIECATIAArrangementProduct##classe : public CATIAArrangementProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ArrangementAreas(CATIAArrangementAreas *& oArrAreas); \
      virtual HRESULT __stdcall get_ArrangementRectangles(CATIAArrangementRectangles *& oArrRectangles); \
      virtual HRESULT __stdcall get_ArrangementItemReservations(CATIAArrangementItemReservations *& oArrItemReservations); \
      virtual HRESULT __stdcall get_ArrangementRuns(CATIAArrangementRuns *& oArrRuns); \
      virtual HRESULT __stdcall get_ArrangementPathways(CATIAArrangementPathways *& oArrPathways); \
      virtual HRESULT __stdcall get_ArrangementBoundaries(CATIAArrangementBoundaries *& oArrBoundaries); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oArrObjType); \
      virtual HRESULT __stdcall SetArrangementNomenclature(const CATBSTR & iNomenclature); \
      virtual HRESULT __stdcall SetAutoName(); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ArrangementAreas(CATIAArrangementAreas *& oArrAreas); \
virtual HRESULT __stdcall get_ArrangementRectangles(CATIAArrangementRectangles *& oArrRectangles); \
virtual HRESULT __stdcall get_ArrangementItemReservations(CATIAArrangementItemReservations *& oArrItemReservations); \
virtual HRESULT __stdcall get_ArrangementRuns(CATIAArrangementRuns *& oArrRuns); \
virtual HRESULT __stdcall get_ArrangementPathways(CATIAArrangementPathways *& oArrPathways); \
virtual HRESULT __stdcall get_ArrangementBoundaries(CATIAArrangementBoundaries *& oArrBoundaries); \
virtual HRESULT __stdcall get_Type(CATBSTR & oArrObjType); \
virtual HRESULT __stdcall SetArrangementNomenclature(const CATBSTR & iNomenclature); \
virtual HRESULT __stdcall SetAutoName(); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ArrangementAreas(CATIAArrangementAreas *& oArrAreas) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_ArrangementAreas(oArrAreas)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementRectangles(CATIAArrangementRectangles *& oArrRectangles) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_ArrangementRectangles(oArrRectangles)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementItemReservations(CATIAArrangementItemReservations *& oArrItemReservations) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_ArrangementItemReservations(oArrItemReservations)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementRuns(CATIAArrangementRuns *& oArrRuns) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_ArrangementRuns(oArrRuns)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementPathways(CATIAArrangementPathways *& oArrPathways) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_ArrangementPathways(oArrPathways)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementBoundaries(CATIAArrangementBoundaries *& oArrBoundaries) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_ArrangementBoundaries(oArrBoundaries)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oArrObjType) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_Type(oArrObjType)); \
} \
HRESULT __stdcall  ENVTIEName::SetArrangementNomenclature(const CATBSTR & iNomenclature) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)SetArrangementNomenclature(iNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoName() \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)SetAutoName()); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementProduct,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementProduct(classe)    TIECATIAArrangementProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementProduct, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementProduct, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_ArrangementAreas(CATIAArrangementAreas *& oArrAreas) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oArrAreas); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementAreas(oArrAreas); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oArrAreas); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_ArrangementRectangles(CATIAArrangementRectangles *& oArrRectangles) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oArrRectangles); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementRectangles(oArrRectangles); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oArrRectangles); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_ArrangementItemReservations(CATIAArrangementItemReservations *& oArrItemReservations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oArrItemReservations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementItemReservations(oArrItemReservations); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oArrItemReservations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_ArrangementRuns(CATIAArrangementRuns *& oArrRuns) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oArrRuns); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementRuns(oArrRuns); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oArrRuns); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_ArrangementPathways(CATIAArrangementPathways *& oArrPathways) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oArrPathways); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementPathways(oArrPathways); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oArrPathways); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_ArrangementBoundaries(CATIAArrangementBoundaries *& oArrBoundaries) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oArrBoundaries); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementBoundaries(oArrBoundaries); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oArrBoundaries); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::get_Type(CATBSTR & oArrObjType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oArrObjType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oArrObjType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oArrObjType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::SetArrangementNomenclature(const CATBSTR & iNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetArrangementNomenclature(iNomenclature); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::SetAutoName() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoName(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementProduct##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementProduct##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementProduct##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementProduct##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementProduct##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementProduct##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementProduct(classe) \
 \
 \
declare_TIE_CATIAArrangementProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementProduct,"CATIAArrangementProduct",CATIAArrangementProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementProduct##classe(classe::MetaObject(),CATIAArrangementProduct::MetaObject(),(void *)CreateTIECATIAArrangementProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementProduct(classe) \
 \
 \
declare_TIE_CATIAArrangementProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementProduct,"CATIAArrangementProduct",CATIAArrangementProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementProduct##classe(classe::MetaObject(),CATIAArrangementProduct::MetaObject(),(void *)CreateTIECATIAArrangementProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementProduct(classe) TIE_CATIAArrangementProduct(classe)
#else
#define BOA_CATIAArrangementProduct(classe) CATImplementBOA(CATIAArrangementProduct, classe)
#endif

#endif
