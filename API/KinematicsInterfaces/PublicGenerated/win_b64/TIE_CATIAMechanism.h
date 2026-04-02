#ifndef __TIE_CATIAMechanism
#define __TIE_CATIAMechanism

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMechanism.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMechanism */
#define declare_TIE_CATIAMechanism(classe) \
 \
 \
class TIECATIAMechanism##classe : public CATIAMechanism \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMechanism, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NbProducts(CATLONG & oNbProducts); \
      virtual HRESULT __stdcall get_NbJoints(CATLONG & oNbJoints); \
      virtual HRESULT __stdcall get_Joints(CATIAJoints *& oJoints); \
      virtual HRESULT __stdcall get_NbCommands(CATLONG & oNbCommands); \
      virtual HRESULT __stdcall get_Commands(CATIAMechanismCommands *& oCommands); \
      virtual HRESULT __stdcall get_NbDof(CATLONG & oNbDof); \
      virtual HRESULT __stdcall get_FixedPart(CATIAProduct *& oFixedPart); \
      virtual HRESULT __stdcall put_FixedPart(CATIAProduct * iFixedPart); \
      virtual HRESULT __stdcall AddJoint(const CATBSTR & iJointType, CATSafeArrayVariant & iListElem, CATIAJoint *& oNewJoint); \
      virtual HRESULT __stdcall AddCommand(const CATBSTR & iCmdType, CATIAJoint * iJoint, CATIAMechanismCommand *& oNewCommand); \
      virtual HRESULT __stdcall GetCommandValues(CATSafeArrayVariant & ioCmdValues); \
      virtual HRESULT __stdcall PutCommandValues(const CATSafeArrayVariant & iCmdValues); \
      virtual HRESULT __stdcall GetProduct(CATLONG iIndex, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall GetProductMotion(CATIAProduct * iProduct, CATSafeArrayVariant & ioMotion); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall PutCommandValuesWithMultiSteps(const CATSafeArrayVariant & iCmdValues, CATLONG iNbSteps, CATLONG & oStepReached); \
      virtual HRESULT __stdcall ResetCmdValueToZero(CATIAMechanismCommand * iCommand); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMechanism(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NbProducts(CATLONG & oNbProducts); \
virtual HRESULT __stdcall get_NbJoints(CATLONG & oNbJoints); \
virtual HRESULT __stdcall get_Joints(CATIAJoints *& oJoints); \
virtual HRESULT __stdcall get_NbCommands(CATLONG & oNbCommands); \
virtual HRESULT __stdcall get_Commands(CATIAMechanismCommands *& oCommands); \
virtual HRESULT __stdcall get_NbDof(CATLONG & oNbDof); \
virtual HRESULT __stdcall get_FixedPart(CATIAProduct *& oFixedPart); \
virtual HRESULT __stdcall put_FixedPart(CATIAProduct * iFixedPart); \
virtual HRESULT __stdcall AddJoint(const CATBSTR & iJointType, CATSafeArrayVariant & iListElem, CATIAJoint *& oNewJoint); \
virtual HRESULT __stdcall AddCommand(const CATBSTR & iCmdType, CATIAJoint * iJoint, CATIAMechanismCommand *& oNewCommand); \
virtual HRESULT __stdcall GetCommandValues(CATSafeArrayVariant & ioCmdValues); \
virtual HRESULT __stdcall PutCommandValues(const CATSafeArrayVariant & iCmdValues); \
virtual HRESULT __stdcall GetProduct(CATLONG iIndex, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall GetProductMotion(CATIAProduct * iProduct, CATSafeArrayVariant & ioMotion); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall PutCommandValuesWithMultiSteps(const CATSafeArrayVariant & iCmdValues, CATLONG iNbSteps, CATLONG & oStepReached); \
virtual HRESULT __stdcall ResetCmdValueToZero(CATIAMechanismCommand * iCommand); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMechanism(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NbProducts(CATLONG & oNbProducts) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_NbProducts(oNbProducts)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbJoints(CATLONG & oNbJoints) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_NbJoints(oNbJoints)); \
} \
HRESULT __stdcall  ENVTIEName::get_Joints(CATIAJoints *& oJoints) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_Joints(oJoints)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbCommands(CATLONG & oNbCommands) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_NbCommands(oNbCommands)); \
} \
HRESULT __stdcall  ENVTIEName::get_Commands(CATIAMechanismCommands *& oCommands) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_Commands(oCommands)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbDof(CATLONG & oNbDof) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_NbDof(oNbDof)); \
} \
HRESULT __stdcall  ENVTIEName::get_FixedPart(CATIAProduct *& oFixedPart) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_FixedPart(oFixedPart)); \
} \
HRESULT __stdcall  ENVTIEName::put_FixedPart(CATIAProduct * iFixedPart) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)put_FixedPart(iFixedPart)); \
} \
HRESULT __stdcall  ENVTIEName::AddJoint(const CATBSTR & iJointType, CATSafeArrayVariant & iListElem, CATIAJoint *& oNewJoint) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)AddJoint(iJointType,iListElem,oNewJoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddCommand(const CATBSTR & iCmdType, CATIAJoint * iJoint, CATIAMechanismCommand *& oNewCommand) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)AddCommand(iCmdType,iJoint,oNewCommand)); \
} \
HRESULT __stdcall  ENVTIEName::GetCommandValues(CATSafeArrayVariant & ioCmdValues) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)GetCommandValues(ioCmdValues)); \
} \
HRESULT __stdcall  ENVTIEName::PutCommandValues(const CATSafeArrayVariant & iCmdValues) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)PutCommandValues(iCmdValues)); \
} \
HRESULT __stdcall  ENVTIEName::GetProduct(CATLONG iIndex, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)GetProduct(iIndex,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetProductMotion(CATIAProduct * iProduct, CATSafeArrayVariant & ioMotion) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)GetProductMotion(iProduct,ioMotion)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::PutCommandValuesWithMultiSteps(const CATSafeArrayVariant & iCmdValues, CATLONG iNbSteps, CATLONG & oStepReached) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)PutCommandValuesWithMultiSteps(iCmdValues,iNbSteps,oStepReached)); \
} \
HRESULT __stdcall  ENVTIEName::ResetCmdValueToZero(CATIAMechanismCommand * iCommand) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)ResetCmdValueToZero(iCommand)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMechanism,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMechanism(classe)    TIECATIAMechanism##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMechanism(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMechanism, classe) \
 \
 \
CATImplementTIEMethods(CATIAMechanism, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMechanism, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMechanism, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMechanism, classe) \
 \
HRESULT __stdcall  TIECATIAMechanism##classe::get_NbProducts(CATLONG & oNbProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbProducts(oNbProducts); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::get_NbJoints(CATLONG & oNbJoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbJoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbJoints(oNbJoints); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbJoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::get_Joints(CATIAJoints *& oJoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oJoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Joints(oJoints); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oJoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::get_NbCommands(CATLONG & oNbCommands) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNbCommands); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbCommands(oNbCommands); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNbCommands); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::get_Commands(CATIAMechanismCommands *& oCommands) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCommands); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Commands(oCommands); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCommands); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::get_NbDof(CATLONG & oNbDof) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNbDof); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbDof(oNbDof); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNbDof); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::get_FixedPart(CATIAProduct *& oFixedPart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oFixedPart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FixedPart(oFixedPart); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oFixedPart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::put_FixedPart(CATIAProduct * iFixedPart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iFixedPart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FixedPart(iFixedPart); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iFixedPart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::AddJoint(const CATBSTR & iJointType, CATSafeArrayVariant & iListElem, CATIAJoint *& oNewJoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iJointType,&iListElem,&oNewJoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddJoint(iJointType,iListElem,oNewJoint); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iJointType,&iListElem,&oNewJoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::AddCommand(const CATBSTR & iCmdType, CATIAJoint * iJoint, CATIAMechanismCommand *& oNewCommand) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCmdType,&iJoint,&oNewCommand); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCommand(iCmdType,iJoint,oNewCommand); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCmdType,&iJoint,&oNewCommand); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::GetCommandValues(CATSafeArrayVariant & ioCmdValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioCmdValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCommandValues(ioCmdValues); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioCmdValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::PutCommandValues(const CATSafeArrayVariant & iCmdValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCmdValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutCommandValues(iCmdValues); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCmdValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::GetProduct(CATLONG iIndex, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProduct(iIndex,oProduct); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::GetProductMotion(CATIAProduct * iProduct, CATSafeArrayVariant & ioMotion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iProduct,&ioMotion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductMotion(iProduct,ioMotion); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iProduct,&ioMotion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::PutCommandValuesWithMultiSteps(const CATSafeArrayVariant & iCmdValues, CATLONG iNbSteps, CATLONG & oStepReached) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iCmdValues,&iNbSteps,&oStepReached); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutCommandValuesWithMultiSteps(iCmdValues,iNbSteps,oStepReached); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iCmdValues,&iNbSteps,&oStepReached); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanism##classe::ResetCmdValueToZero(CATIAMechanismCommand * iCommand) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iCommand); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetCmdValueToZero(iCommand); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iCommand); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanism##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanism##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanism##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanism##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanism##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMechanism(classe) \
 \
 \
declare_TIE_CATIAMechanism(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMechanism##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMechanism,"CATIAMechanism",CATIAMechanism::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMechanism(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMechanism, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMechanism##classe(classe::MetaObject(),CATIAMechanism::MetaObject(),(void *)CreateTIECATIAMechanism##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMechanism(classe) \
 \
 \
declare_TIE_CATIAMechanism(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMechanism##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMechanism,"CATIAMechanism",CATIAMechanism::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMechanism(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMechanism, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMechanism##classe(classe::MetaObject(),CATIAMechanism::MetaObject(),(void *)CreateTIECATIAMechanism##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMechanism(classe) TIE_CATIAMechanism(classe)
#else
#define BOA_CATIAMechanism(classe) CATImplementBOA(CATIAMechanism, classe)
#endif

#endif
