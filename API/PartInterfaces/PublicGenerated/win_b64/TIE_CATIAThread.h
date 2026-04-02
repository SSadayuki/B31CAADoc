#ifndef __TIE_CATIAThread
#define __TIE_CATIAThread

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAThread.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAThread */
#define declare_TIE_CATIAThread(classe) \
 \
 \
class TIECATIAThread##classe : public CATIAThread \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAThread, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_LateralFaceElement(CATIAReference *& oLateralFaceElement); \
      virtual HRESULT __stdcall put_LateralFaceElement(CATIAReference * iLateralFaceElement); \
      virtual HRESULT __stdcall get_LimitFaceElement(CATIAReference *& oLimitFaceElement); \
      virtual HRESULT __stdcall put_LimitFaceElement(CATIAReference * iLimitFaceElement); \
      virtual HRESULT __stdcall ReverseDirection(); \
      virtual HRESULT __stdcall get_Side(CatThreadSide & oThreadSide); \
      virtual HRESULT __stdcall put_Side(CatThreadSide iThreadSide); \
      virtual HRESULT __stdcall get_Depth(double & oDepth); \
      virtual HRESULT __stdcall put_Depth(double iDepth); \
      virtual HRESULT __stdcall get_Diameter(double & oDiameter); \
      virtual HRESULT __stdcall put_Diameter(double iDiameter); \
      virtual HRESULT __stdcall get_Pitch(double & oPitch); \
      virtual HRESULT __stdcall put_Pitch(double iPitch); \
      virtual HRESULT __stdcall get_ThreadDescription(CATIAStrParam *& oThreadDescParam); \
      virtual HRESULT __stdcall CreateStandardThreadDesignTable(CatThreadStandard iStandardType); \
      virtual HRESULT __stdcall CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath); \
      virtual HRESULT __stdcall SetExplicitPolarity(CatThreadPolarity iThreadPolarity); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAThread(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_LateralFaceElement(CATIAReference *& oLateralFaceElement); \
virtual HRESULT __stdcall put_LateralFaceElement(CATIAReference * iLateralFaceElement); \
virtual HRESULT __stdcall get_LimitFaceElement(CATIAReference *& oLimitFaceElement); \
virtual HRESULT __stdcall put_LimitFaceElement(CATIAReference * iLimitFaceElement); \
virtual HRESULT __stdcall ReverseDirection(); \
virtual HRESULT __stdcall get_Side(CatThreadSide & oThreadSide); \
virtual HRESULT __stdcall put_Side(CatThreadSide iThreadSide); \
virtual HRESULT __stdcall get_Depth(double & oDepth); \
virtual HRESULT __stdcall put_Depth(double iDepth); \
virtual HRESULT __stdcall get_Diameter(double & oDiameter); \
virtual HRESULT __stdcall put_Diameter(double iDiameter); \
virtual HRESULT __stdcall get_Pitch(double & oPitch); \
virtual HRESULT __stdcall put_Pitch(double iPitch); \
virtual HRESULT __stdcall get_ThreadDescription(CATIAStrParam *& oThreadDescParam); \
virtual HRESULT __stdcall CreateStandardThreadDesignTable(CatThreadStandard iStandardType); \
virtual HRESULT __stdcall CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath); \
virtual HRESULT __stdcall SetExplicitPolarity(CatThreadPolarity iThreadPolarity); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAThread(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_LateralFaceElement(CATIAReference *& oLateralFaceElement) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_LateralFaceElement(oLateralFaceElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_LateralFaceElement(CATIAReference * iLateralFaceElement) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_LateralFaceElement(iLateralFaceElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitFaceElement(CATIAReference *& oLimitFaceElement) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_LimitFaceElement(oLimitFaceElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitFaceElement(CATIAReference * iLimitFaceElement) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_LimitFaceElement(iLimitFaceElement)); \
} \
HRESULT __stdcall  ENVTIEName::ReverseDirection() \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)ReverseDirection()); \
} \
HRESULT __stdcall  ENVTIEName::get_Side(CatThreadSide & oThreadSide) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Side(oThreadSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_Side(CatThreadSide iThreadSide) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_Side(iThreadSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_Depth(double & oDepth) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Depth(oDepth)); \
} \
HRESULT __stdcall  ENVTIEName::put_Depth(double iDepth) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_Depth(iDepth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diameter(double & oDiameter) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Diameter(oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::put_Diameter(double iDiameter) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_Diameter(iDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Pitch(double & oPitch) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Pitch(oPitch)); \
} \
HRESULT __stdcall  ENVTIEName::put_Pitch(double iPitch) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_Pitch(iPitch)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThreadDescription(CATIAStrParam *& oThreadDescParam) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_ThreadDescription(oThreadDescParam)); \
} \
HRESULT __stdcall  ENVTIEName::CreateStandardThreadDesignTable(CatThreadStandard iStandardType) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)CreateStandardThreadDesignTable(iStandardType)); \
} \
HRESULT __stdcall  ENVTIEName::CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)CreateUserStandardDesignTable(iStandardName,iPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetExplicitPolarity(CatThreadPolarity iThreadPolarity) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)SetExplicitPolarity(iThreadPolarity)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAThread,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAThread(classe)    TIECATIAThread##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAThread(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAThread, classe) \
 \
 \
CATImplementTIEMethods(CATIAThread, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAThread, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAThread, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAThread, classe) \
 \
HRESULT __stdcall  TIECATIAThread##classe::get_LateralFaceElement(CATIAReference *& oLateralFaceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLateralFaceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LateralFaceElement(oLateralFaceElement); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLateralFaceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::put_LateralFaceElement(CATIAReference * iLateralFaceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLateralFaceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LateralFaceElement(iLateralFaceElement); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLateralFaceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::get_LimitFaceElement(CATIAReference *& oLimitFaceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLimitFaceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitFaceElement(oLimitFaceElement); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLimitFaceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::put_LimitFaceElement(CATIAReference * iLimitFaceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLimitFaceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitFaceElement(iLimitFaceElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLimitFaceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::ReverseDirection() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseDirection(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::get_Side(CatThreadSide & oThreadSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oThreadSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Side(oThreadSide); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oThreadSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::put_Side(CatThreadSide iThreadSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iThreadSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Side(iThreadSide); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iThreadSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::get_Depth(double & oDepth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oDepth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Depth(oDepth); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oDepth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::put_Depth(double iDepth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iDepth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Depth(iDepth); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iDepth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::get_Diameter(double & oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diameter(oDiameter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::put_Diameter(double iDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Diameter(iDiameter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::get_Pitch(double & oPitch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oPitch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Pitch(oPitch); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oPitch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::put_Pitch(double iPitch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPitch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Pitch(iPitch); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPitch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::get_ThreadDescription(CATIAStrParam *& oThreadDescParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oThreadDescParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThreadDescription(oThreadDescParam); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oThreadDescParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::CreateStandardThreadDesignTable(CatThreadStandard iStandardType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iStandardType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateStandardThreadDesignTable(iStandardType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iStandardType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iStandardName,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateUserStandardDesignTable(iStandardName,iPath); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iStandardName,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThread##classe::SetExplicitPolarity(CatThreadPolarity iThreadPolarity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iThreadPolarity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExplicitPolarity(iThreadPolarity); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iThreadPolarity); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThread##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThread##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThread##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThread##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThread##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAThread(classe) \
 \
 \
declare_TIE_CATIAThread(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAThread##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAThread,"CATIAThread",CATIAThread::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAThread(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAThread, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAThread##classe(classe::MetaObject(),CATIAThread::MetaObject(),(void *)CreateTIECATIAThread##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAThread(classe) \
 \
 \
declare_TIE_CATIAThread(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAThread##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAThread,"CATIAThread",CATIAThread::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAThread(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAThread, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAThread##classe(classe::MetaObject(),CATIAThread::MetaObject(),(void *)CreateTIECATIAThread##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAThread(classe) TIE_CATIAThread(classe)
#else
#define BOA_CATIAThread(classe) CATImplementBOA(CATIAThread, classe)
#endif

#endif
