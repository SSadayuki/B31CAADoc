#ifndef __TIE_CATIAVarRadEdgeFillet
#define __TIE_CATIAVarRadEdgeFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAVarRadEdgeFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVarRadEdgeFillet */
#define declare_TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
class TIECATIAVarRadEdgeFillet##classe : public CATIAVarRadEdgeFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVarRadEdgeFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_EdgesToFillet(CATIAReferences *& oEdgesToFillet); \
      virtual HRESULT __stdcall get_FilletVariation(CatFilletVariation & oVariation); \
      virtual HRESULT __stdcall put_FilletVariation(CatFilletVariation iVariation); \
      virtual HRESULT __stdcall get_ImposedVertices(CATIAReferences *& oImposedVertices); \
      virtual HRESULT __stdcall get_FilletSpine(CATIAReference *& oSpine); \
      virtual HRESULT __stdcall put_FilletSpine(CATIAReference * iSpine); \
      virtual HRESULT __stdcall get_BitangencyType(CatFilletBitangencyType & oType); \
      virtual HRESULT __stdcall put_BitangencyType(CatFilletBitangencyType iType); \
      virtual HRESULT __stdcall ImposedVertexRadius(CATIAReference * iImposedVertex, CATIALength *& oImposedVertexRadius); \
      virtual HRESULT __stdcall AddEdgeToFillet(CATIAReference * iEdge, double iRadius); \
      virtual HRESULT __stdcall WithdrawEdgeToFillet(CATIAReference * iEdge); \
      virtual HRESULT __stdcall AddImposedVertex(CATIAReference * iVertex, double iRadius); \
      virtual HRESULT __stdcall WithdrawImposedVertex(CATIAReference * iVertex); \
      virtual HRESULT __stdcall get_SharpEdgeRemovalMode(short & oMode); \
      virtual HRESULT __stdcall put_SharpEdgeRemovalMode(short iMode); \
      virtual HRESULT __stdcall SwitchToConstFilletType(CATIAConstRadEdgeFillet *& opConstFillet); \
      virtual HRESULT __stdcall get_EdgePropagation(CatFilletEdgePropagation & oPropagation); \
      virtual HRESULT __stdcall put_EdgePropagation(CatFilletEdgePropagation iPropagation); \
      virtual HRESULT __stdcall get_EdgesToKeep(CATIAReferences *& oEdgesToKeep); \
      virtual HRESULT __stdcall AddEdgeToKeep(CATIAReference * iEdgeToKeep); \
      virtual HRESULT __stdcall WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw); \
      virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
      virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
      virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
      virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAVarRadEdgeFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_EdgesToFillet(CATIAReferences *& oEdgesToFillet); \
virtual HRESULT __stdcall get_FilletVariation(CatFilletVariation & oVariation); \
virtual HRESULT __stdcall put_FilletVariation(CatFilletVariation iVariation); \
virtual HRESULT __stdcall get_ImposedVertices(CATIAReferences *& oImposedVertices); \
virtual HRESULT __stdcall get_FilletSpine(CATIAReference *& oSpine); \
virtual HRESULT __stdcall put_FilletSpine(CATIAReference * iSpine); \
virtual HRESULT __stdcall get_BitangencyType(CatFilletBitangencyType & oType); \
virtual HRESULT __stdcall put_BitangencyType(CatFilletBitangencyType iType); \
virtual HRESULT __stdcall ImposedVertexRadius(CATIAReference * iImposedVertex, CATIALength *& oImposedVertexRadius); \
virtual HRESULT __stdcall AddEdgeToFillet(CATIAReference * iEdge, double iRadius); \
virtual HRESULT __stdcall WithdrawEdgeToFillet(CATIAReference * iEdge); \
virtual HRESULT __stdcall AddImposedVertex(CATIAReference * iVertex, double iRadius); \
virtual HRESULT __stdcall WithdrawImposedVertex(CATIAReference * iVertex); \
virtual HRESULT __stdcall get_SharpEdgeRemovalMode(short & oMode); \
virtual HRESULT __stdcall put_SharpEdgeRemovalMode(short iMode); \
virtual HRESULT __stdcall SwitchToConstFilletType(CATIAConstRadEdgeFillet *& opConstFillet); \
virtual HRESULT __stdcall get_EdgePropagation(CatFilletEdgePropagation & oPropagation); \
virtual HRESULT __stdcall put_EdgePropagation(CatFilletEdgePropagation iPropagation); \
virtual HRESULT __stdcall get_EdgesToKeep(CATIAReferences *& oEdgesToKeep); \
virtual HRESULT __stdcall AddEdgeToKeep(CATIAReference * iEdgeToKeep); \
virtual HRESULT __stdcall WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw); \
virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAVarRadEdgeFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_EdgesToFillet(CATIAReferences *& oEdgesToFillet) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgesToFillet(oEdgesToFillet)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletVariation(CatFilletVariation & oVariation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletVariation(oVariation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletVariation(CatFilletVariation iVariation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletVariation(iVariation)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImposedVertices(CATIAReferences *& oImposedVertices) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_ImposedVertices(oImposedVertices)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletSpine(CATIAReference *& oSpine) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletSpine(oSpine)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletSpine(CATIAReference * iSpine) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletSpine(iSpine)); \
} \
HRESULT __stdcall  ENVTIEName::get_BitangencyType(CatFilletBitangencyType & oType) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_BitangencyType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_BitangencyType(CatFilletBitangencyType iType) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_BitangencyType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::ImposedVertexRadius(CATIAReference * iImposedVertex, CATIALength *& oImposedVertexRadius) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)ImposedVertexRadius(iImposedVertex,oImposedVertexRadius)); \
} \
HRESULT __stdcall  ENVTIEName::AddEdgeToFillet(CATIAReference * iEdge, double iRadius) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)AddEdgeToFillet(iEdge,iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawEdgeToFillet(CATIAReference * iEdge) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)WithdrawEdgeToFillet(iEdge)); \
} \
HRESULT __stdcall  ENVTIEName::AddImposedVertex(CATIAReference * iVertex, double iRadius) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)AddImposedVertex(iVertex,iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawImposedVertex(CATIAReference * iVertex) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)WithdrawImposedVertex(iVertex)); \
} \
HRESULT __stdcall  ENVTIEName::get_SharpEdgeRemovalMode(short & oMode) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_SharpEdgeRemovalMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SharpEdgeRemovalMode(short iMode) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_SharpEdgeRemovalMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::SwitchToConstFilletType(CATIAConstRadEdgeFillet *& opConstFillet) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)SwitchToConstFilletType(opConstFillet)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgePropagation(CatFilletEdgePropagation & oPropagation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgePropagation(oPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::put_EdgePropagation(CatFilletEdgePropagation iPropagation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_EdgePropagation(iPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgesToKeep(CATIAReferences *& oEdgesToKeep) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgesToKeep(oEdgesToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::AddEdgeToKeep(CATIAReference * iEdgeToKeep) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)AddEdgeToKeep(iEdgeToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)WithdrawEdgeToKeep(iEdgeToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletBoundaryRelimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletBoundaryRelimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletTrimSupport(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletTrimSupport(iRelimitation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAVarRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVarRadEdgeFillet(classe)    TIECATIAVarRadEdgeFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVarRadEdgeFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIAVarRadEdgeFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVarRadEdgeFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVarRadEdgeFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVarRadEdgeFillet, classe) \
 \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_EdgesToFillet(CATIAReferences *& oEdgesToFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oEdgesToFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgesToFillet(oEdgesToFillet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oEdgesToFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_FilletVariation(CatFilletVariation & oVariation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oVariation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletVariation(oVariation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oVariation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_FilletVariation(CatFilletVariation iVariation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iVariation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletVariation(iVariation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iVariation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_ImposedVertices(CATIAReferences *& oImposedVertices) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oImposedVertices); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImposedVertices(oImposedVertices); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oImposedVertices); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_FilletSpine(CATIAReference *& oSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletSpine(oSpine); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_FilletSpine(CATIAReference * iSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletSpine(iSpine); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_BitangencyType(CatFilletBitangencyType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BitangencyType(oType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_BitangencyType(CatFilletBitangencyType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BitangencyType(iType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::ImposedVertexRadius(CATIAReference * iImposedVertex, CATIALength *& oImposedVertexRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iImposedVertex,&oImposedVertexRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImposedVertexRadius(iImposedVertex,oImposedVertexRadius); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iImposedVertex,&oImposedVertexRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::AddEdgeToFillet(CATIAReference * iEdge, double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iEdge,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEdgeToFillet(iEdge,iRadius); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iEdge,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::WithdrawEdgeToFillet(CATIAReference * iEdge) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iEdge); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawEdgeToFillet(iEdge); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iEdge); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::AddImposedVertex(CATIAReference * iVertex, double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iVertex,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddImposedVertex(iVertex,iRadius); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iVertex,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::WithdrawImposedVertex(CATIAReference * iVertex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iVertex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawImposedVertex(iVertex); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iVertex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_SharpEdgeRemovalMode(short & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SharpEdgeRemovalMode(oMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_SharpEdgeRemovalMode(short iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SharpEdgeRemovalMode(iMode); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::SwitchToConstFilletType(CATIAConstRadEdgeFillet *& opConstFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&opConstFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwitchToConstFilletType(opConstFillet); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&opConstFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_EdgePropagation(CatFilletEdgePropagation & oPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgePropagation(oPropagation); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_EdgePropagation(CatFilletEdgePropagation iPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EdgePropagation(iPropagation); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_EdgesToKeep(CATIAReferences *& oEdgesToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oEdgesToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgesToKeep(oEdgesToKeep); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oEdgesToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::AddEdgeToKeep(CATIAReference * iEdgeToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iEdgeToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEdgeToKeep(iEdgeToKeep); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iEdgeToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iEdgeToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawEdgeToKeep(iEdgeToWithdraw); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iEdgeToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletBoundaryRelimitation(oRelimitation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletBoundaryRelimitation(iRelimitation); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletTrimSupport(oRelimitation); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVarRadEdgeFillet##classe::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletTrimSupport(iRelimitation); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVarRadEdgeFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVarRadEdgeFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVarRadEdgeFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVarRadEdgeFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVarRadEdgeFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
declare_TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVarRadEdgeFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVarRadEdgeFillet,"CATIAVarRadEdgeFillet",CATIAVarRadEdgeFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVarRadEdgeFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVarRadEdgeFillet##classe(classe::MetaObject(),CATIAVarRadEdgeFillet::MetaObject(),(void *)CreateTIECATIAVarRadEdgeFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVarRadEdgeFillet(classe) \
 \
 \
declare_TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVarRadEdgeFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVarRadEdgeFillet,"CATIAVarRadEdgeFillet",CATIAVarRadEdgeFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVarRadEdgeFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVarRadEdgeFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVarRadEdgeFillet##classe(classe::MetaObject(),CATIAVarRadEdgeFillet::MetaObject(),(void *)CreateTIECATIAVarRadEdgeFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVarRadEdgeFillet(classe) TIE_CATIAVarRadEdgeFillet(classe)
#else
#define BOA_CATIAVarRadEdgeFillet(classe) CATImplementBOA(CATIAVarRadEdgeFillet, classe)
#endif

#endif
