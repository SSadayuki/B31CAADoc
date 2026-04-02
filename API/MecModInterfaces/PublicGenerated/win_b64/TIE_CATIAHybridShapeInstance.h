#ifndef __TIE_CATIAHybridShapeInstance
#define __TIE_CATIAHybridShapeInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeInstance */
#define declare_TIE_CATIAHybridShapeInstance(classe) \
 \
 \
class TIECATIAHybridShapeInstance##classe : public CATIAHybridShapeInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetInput(const CATBSTR & iIndex, CATIABase *& oInput); \
      virtual HRESULT __stdcall GetInputData(const CATBSTR & iName, CATBaseDispatch *& oInput); \
      virtual HRESULT __stdcall PutInput(const CATBSTR & iIndex, CATIABase * iInput); \
      virtual HRESULT __stdcall PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput); \
      virtual HRESULT __stdcall get_InputsCount(CATLONG & oNbInputs); \
      virtual HRESULT __stdcall GetInputFromPosition(CATLONG iPosition, CATIABase *& oInput); \
      virtual HRESULT __stdcall GetInputDataFromPosition(CATLONG iPosition, CATBaseDispatch *& oInput); \
      virtual HRESULT __stdcall GetParameter(const CATBSTR & iName, CATIABase *& oParameter); \
      virtual HRESULT __stdcall get_ParametersCount(CATLONG & oNbParameters); \
      virtual HRESULT __stdcall GetParameterFromPosition(CATLONG iPosition, CATIABase *& oParameter); \
      virtual HRESULT __stdcall GetOutput(const CATBSTR & iName, CATIABase *& oOutput); \
      virtual HRESULT __stdcall get_OutputsCount(CATLONG & oNbOutputs); \
      virtual HRESULT __stdcall GetOutputFromPosition(CATLONG iPosition, CATIABase *& oOutput); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetInput(const CATBSTR & iIndex, CATIABase *& oInput); \
virtual HRESULT __stdcall GetInputData(const CATBSTR & iName, CATBaseDispatch *& oInput); \
virtual HRESULT __stdcall PutInput(const CATBSTR & iIndex, CATIABase * iInput); \
virtual HRESULT __stdcall PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput); \
virtual HRESULT __stdcall get_InputsCount(CATLONG & oNbInputs); \
virtual HRESULT __stdcall GetInputFromPosition(CATLONG iPosition, CATIABase *& oInput); \
virtual HRESULT __stdcall GetInputDataFromPosition(CATLONG iPosition, CATBaseDispatch *& oInput); \
virtual HRESULT __stdcall GetParameter(const CATBSTR & iName, CATIABase *& oParameter); \
virtual HRESULT __stdcall get_ParametersCount(CATLONG & oNbParameters); \
virtual HRESULT __stdcall GetParameterFromPosition(CATLONG iPosition, CATIABase *& oParameter); \
virtual HRESULT __stdcall GetOutput(const CATBSTR & iName, CATIABase *& oOutput); \
virtual HRESULT __stdcall get_OutputsCount(CATLONG & oNbOutputs); \
virtual HRESULT __stdcall GetOutputFromPosition(CATLONG iPosition, CATIABase *& oOutput); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetInput(const CATBSTR & iIndex, CATIABase *& oInput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetInput(iIndex,oInput)); \
} \
HRESULT __stdcall  ENVTIEName::GetInputData(const CATBSTR & iName, CATBaseDispatch *& oInput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetInputData(iName,oInput)); \
} \
HRESULT __stdcall  ENVTIEName::PutInput(const CATBSTR & iIndex, CATIABase * iInput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)PutInput(iIndex,iInput)); \
} \
HRESULT __stdcall  ENVTIEName::PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)PutInputData(iName,iInput)); \
} \
HRESULT __stdcall  ENVTIEName::get_InputsCount(CATLONG & oNbInputs) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_InputsCount(oNbInputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetInputFromPosition(CATLONG iPosition, CATIABase *& oInput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetInputFromPosition(iPosition,oInput)); \
} \
HRESULT __stdcall  ENVTIEName::GetInputDataFromPosition(CATLONG iPosition, CATBaseDispatch *& oInput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetInputDataFromPosition(iPosition,oInput)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameter(const CATBSTR & iName, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetParameter(iName,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParametersCount(CATLONG & oNbParameters) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_ParametersCount(oNbParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterFromPosition(CATLONG iPosition, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetParameterFromPosition(iPosition,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutput(const CATBSTR & iName, CATIABase *& oOutput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetOutput(iName,oOutput)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputsCount(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_OutputsCount(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputFromPosition(CATLONG iPosition, CATIABase *& oOutput) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetOutputFromPosition(iPosition,oOutput)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeInstance,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeInstance(classe)    TIECATIAHybridShapeInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeInstance, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeInstance, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeInstance, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetInput(const CATBSTR & iIndex, CATIABase *& oInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInput(iIndex,oInput); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetInputData(const CATBSTR & iName, CATBaseDispatch *& oInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInputData(iName,oInput); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::PutInput(const CATBSTR & iIndex, CATIABase * iInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&iInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutInput(iIndex,iInput); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&iInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iName,&iInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutInputData(iName,iInput); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iName,&iInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::get_InputsCount(CATLONG & oNbInputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNbInputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InputsCount(oNbInputs); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNbInputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetInputFromPosition(CATLONG iPosition, CATIABase *& oInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPosition,&oInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInputFromPosition(iPosition,oInput); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPosition,&oInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetInputDataFromPosition(CATLONG iPosition, CATBaseDispatch *& oInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPosition,&oInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInputDataFromPosition(iPosition,oInput); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPosition,&oInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetParameter(const CATBSTR & iName, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iName,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameter(iName,oParameter); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iName,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::get_ParametersCount(CATLONG & oNbParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParametersCount(oNbParameters); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetParameterFromPosition(CATLONG iPosition, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPosition,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterFromPosition(iPosition,oParameter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPosition,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetOutput(const CATBSTR & iName, CATIABase *& oOutput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iName,&oOutput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutput(iName,oOutput); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iName,&oOutput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::get_OutputsCount(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputsCount(oNbOutputs); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::GetOutputFromPosition(CATLONG iPosition, CATIABase *& oOutput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPosition,&oOutput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputFromPosition(iPosition,oOutput); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPosition,&oOutput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeInstance##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeInstance##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeInstance##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeInstance##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeInstance##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeInstance##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeInstance(classe) \
 \
 \
declare_TIE_CATIAHybridShapeInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeInstance,"CATIAHybridShapeInstance",CATIAHybridShapeInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeInstance##classe(classe::MetaObject(),CATIAHybridShapeInstance::MetaObject(),(void *)CreateTIECATIAHybridShapeInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeInstance(classe) \
 \
 \
declare_TIE_CATIAHybridShapeInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeInstance,"CATIAHybridShapeInstance",CATIAHybridShapeInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeInstance##classe(classe::MetaObject(),CATIAHybridShapeInstance::MetaObject(),(void *)CreateTIECATIAHybridShapeInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeInstance(classe) TIE_CATIAHybridShapeInstance(classe)
#else
#define BOA_CATIAHybridShapeInstance(classe) CATImplementBOA(CATIAHybridShapeInstance, classe)
#endif

#endif
