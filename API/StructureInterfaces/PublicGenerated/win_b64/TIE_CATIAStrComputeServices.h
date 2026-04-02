#ifndef __TIE_CATIAStrComputeServices
#define __TIE_CATIAStrComputeServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrComputeServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrComputeServices */
#define declare_TIE_CATIAStrComputeServices(classe) \
 \
 \
class TIECATIAStrComputeServices##classe : public CATIAStrComputeServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrComputeServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetLength(CATIAProduct * iProduct, double & oLength); \
      virtual HRESULT __stdcall GetMass(CATIAProduct * iProduct, double & oMass); \
      virtual HRESULT __stdcall GetVolume(CATIAProduct * iProduct, double & oVolume); \
      virtual HRESULT __stdcall GetWetArea(CATIAProduct * iProduct, double & oWetArea); \
      virtual HRESULT __stdcall GetSurface(CATIAProduct * iProduct, double & oSurface); \
      virtual HRESULT __stdcall GetCenterOfGravity(CATIAProduct * iProduct, double & oX, double & oY, double & oZ); \
      virtual HRESULT __stdcall GetMaterialName(CATIAProduct * iProduct, CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrComputeServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetLength(CATIAProduct * iProduct, double & oLength); \
virtual HRESULT __stdcall GetMass(CATIAProduct * iProduct, double & oMass); \
virtual HRESULT __stdcall GetVolume(CATIAProduct * iProduct, double & oVolume); \
virtual HRESULT __stdcall GetWetArea(CATIAProduct * iProduct, double & oWetArea); \
virtual HRESULT __stdcall GetSurface(CATIAProduct * iProduct, double & oSurface); \
virtual HRESULT __stdcall GetCenterOfGravity(CATIAProduct * iProduct, double & oX, double & oY, double & oZ); \
virtual HRESULT __stdcall GetMaterialName(CATIAProduct * iProduct, CATBSTR & oName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrComputeServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetLength(CATIAProduct * iProduct, double & oLength) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetLength(iProduct,oLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetMass(CATIAProduct * iProduct, double & oMass) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetMass(iProduct,oMass)); \
} \
HRESULT __stdcall  ENVTIEName::GetVolume(CATIAProduct * iProduct, double & oVolume) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetVolume(iProduct,oVolume)); \
} \
HRESULT __stdcall  ENVTIEName::GetWetArea(CATIAProduct * iProduct, double & oWetArea) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetWetArea(iProduct,oWetArea)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurface(CATIAProduct * iProduct, double & oSurface) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetSurface(iProduct,oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenterOfGravity(CATIAProduct * iProduct, double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetCenterOfGravity(iProduct,oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaterialName(CATIAProduct * iProduct, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetMaterialName(iProduct,oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrComputeServices,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrComputeServices(classe)    TIECATIAStrComputeServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrComputeServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrComputeServices, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrComputeServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrComputeServices, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrComputeServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrComputeServices, classe) \
 \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetLength(CATIAProduct * iProduct, double & oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProduct,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLength(iProduct,oLength); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProduct,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetMass(CATIAProduct * iProduct, double & oMass) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&oMass); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMass(iProduct,oMass); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&oMass); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetVolume(CATIAProduct * iProduct, double & oVolume) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iProduct,&oVolume); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVolume(iProduct,oVolume); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iProduct,&oVolume); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetWetArea(CATIAProduct * iProduct, double & oWetArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProduct,&oWetArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWetArea(iProduct,oWetArea); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProduct,&oWetArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetSurface(CATIAProduct * iProduct, double & oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iProduct,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurface(iProduct,oSurface); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iProduct,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetCenterOfGravity(CATIAProduct * iProduct, double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iProduct,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenterOfGravity(iProduct,oX,oY,oZ); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iProduct,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrComputeServices##classe::GetMaterialName(CATIAProduct * iProduct, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iProduct,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialName(iProduct,oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iProduct,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrComputeServices##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrComputeServices##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrComputeServices##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrComputeServices##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrComputeServices##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrComputeServices(classe) \
 \
 \
declare_TIE_CATIAStrComputeServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrComputeServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrComputeServices,"CATIAStrComputeServices",CATIAStrComputeServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrComputeServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrComputeServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrComputeServices##classe(classe::MetaObject(),CATIAStrComputeServices::MetaObject(),(void *)CreateTIECATIAStrComputeServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrComputeServices(classe) \
 \
 \
declare_TIE_CATIAStrComputeServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrComputeServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrComputeServices,"CATIAStrComputeServices",CATIAStrComputeServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrComputeServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrComputeServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrComputeServices##classe(classe::MetaObject(),CATIAStrComputeServices::MetaObject(),(void *)CreateTIECATIAStrComputeServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrComputeServices(classe) TIE_CATIAStrComputeServices(classe)
#else
#define BOA_CATIAStrComputeServices(classe) CATImplementBOA(CATIAStrComputeServices, classe)
#endif

#endif
