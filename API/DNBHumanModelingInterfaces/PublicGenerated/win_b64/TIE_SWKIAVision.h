#ifndef __TIE_SWKIAVision
#define __TIE_SWKIAVision

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAVision.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAVision */
#define declare_TIE_SWKIAVision(classe) \
 \
 \
class TIESWKIAVision##classe : public SWKIAVision \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAVision, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FocalDistance(double & poFocalDistance); \
      virtual HRESULT __stdcall put_FocalDistance(double piFocalDistance); \
      virtual HRESULT __stdcall get_PonctumProximum(double & poPonctumProximum); \
      virtual HRESULT __stdcall put_PonctumProximum(double piPonctumProximum); \
      virtual HRESULT __stdcall get_PonctumRemotum(double & poPonctumRemotum); \
      virtual HRESULT __stdcall put_PonctumRemotum(double piPonctumRemotum); \
      virtual HRESULT __stdcall get_FocalPointX(double & poFocalPointX); \
      virtual HRESULT __stdcall get_FocalPointY(double & poFocalPointY); \
      virtual HRESULT __stdcall get_FocalPointZ(double & poFocalPointZ); \
      virtual HRESULT __stdcall LookAt(double piFocalDistance, double piVAngle, double piHAngle); \
      virtual HRESULT __stdcall LookAtPoint(double piX, double piY, double piZ); \
      virtual HRESULT __stdcall get_ActiveSide(CATLONG & poType); \
      virtual HRESULT __stdcall get_MonocularAngle(double & poAngle); \
      virtual HRESULT __stdcall put_MonocularAngle(double piAngle); \
      virtual HRESULT __stdcall get_BinocularAngle(double & poAngle); \
      virtual HRESULT __stdcall put_BinocularAngle(double piAngle); \
      virtual HRESULT __stdcall get_AmbinocularAngle(double & poAngle); \
      virtual HRESULT __stdcall put_AmbinocularAngle(double piAngle); \
      virtual HRESULT __stdcall get_VerticalTopAngle(double & poAngle); \
      virtual HRESULT __stdcall put_VerticalTopAngle(double piAngle); \
      virtual HRESULT __stdcall get_VerticalBottomAngle(double & poAngle); \
      virtual HRESULT __stdcall put_VerticalBottomAngle(double piAngle); \
      virtual HRESULT __stdcall get_CentralConeAngle(double & poAngle); \
      virtual HRESULT __stdcall put_CentralConeAngle(double piAngle); \
      virtual HRESULT __stdcall get_ActiveLineOfSight(SWKIALineOfSight *& poLineOfSight); \
      virtual HRESULT __stdcall get_Type(CATLONG & poType); \
      virtual HRESULT __stdcall put_Type(CATLONG piType); \
      virtual HRESULT __stdcall Reset(); \
      virtual HRESULT __stdcall CloseVisionWindows(); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAVision(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FocalDistance(double & poFocalDistance); \
virtual HRESULT __stdcall put_FocalDistance(double piFocalDistance); \
virtual HRESULT __stdcall get_PonctumProximum(double & poPonctumProximum); \
virtual HRESULT __stdcall put_PonctumProximum(double piPonctumProximum); \
virtual HRESULT __stdcall get_PonctumRemotum(double & poPonctumRemotum); \
virtual HRESULT __stdcall put_PonctumRemotum(double piPonctumRemotum); \
virtual HRESULT __stdcall get_FocalPointX(double & poFocalPointX); \
virtual HRESULT __stdcall get_FocalPointY(double & poFocalPointY); \
virtual HRESULT __stdcall get_FocalPointZ(double & poFocalPointZ); \
virtual HRESULT __stdcall LookAt(double piFocalDistance, double piVAngle, double piHAngle); \
virtual HRESULT __stdcall LookAtPoint(double piX, double piY, double piZ); \
virtual HRESULT __stdcall get_ActiveSide(CATLONG & poType); \
virtual HRESULT __stdcall get_MonocularAngle(double & poAngle); \
virtual HRESULT __stdcall put_MonocularAngle(double piAngle); \
virtual HRESULT __stdcall get_BinocularAngle(double & poAngle); \
virtual HRESULT __stdcall put_BinocularAngle(double piAngle); \
virtual HRESULT __stdcall get_AmbinocularAngle(double & poAngle); \
virtual HRESULT __stdcall put_AmbinocularAngle(double piAngle); \
virtual HRESULT __stdcall get_VerticalTopAngle(double & poAngle); \
virtual HRESULT __stdcall put_VerticalTopAngle(double piAngle); \
virtual HRESULT __stdcall get_VerticalBottomAngle(double & poAngle); \
virtual HRESULT __stdcall put_VerticalBottomAngle(double piAngle); \
virtual HRESULT __stdcall get_CentralConeAngle(double & poAngle); \
virtual HRESULT __stdcall put_CentralConeAngle(double piAngle); \
virtual HRESULT __stdcall get_ActiveLineOfSight(SWKIALineOfSight *& poLineOfSight); \
virtual HRESULT __stdcall get_Type(CATLONG & poType); \
virtual HRESULT __stdcall put_Type(CATLONG piType); \
virtual HRESULT __stdcall Reset(); \
virtual HRESULT __stdcall CloseVisionWindows(); \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAVision(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FocalDistance(double & poFocalDistance) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_FocalDistance(poFocalDistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_FocalDistance(double piFocalDistance) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_FocalDistance(piFocalDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_PonctumProximum(double & poPonctumProximum) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_PonctumProximum(poPonctumProximum)); \
} \
HRESULT __stdcall  ENVTIEName::put_PonctumProximum(double piPonctumProximum) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_PonctumProximum(piPonctumProximum)); \
} \
HRESULT __stdcall  ENVTIEName::get_PonctumRemotum(double & poPonctumRemotum) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_PonctumRemotum(poPonctumRemotum)); \
} \
HRESULT __stdcall  ENVTIEName::put_PonctumRemotum(double piPonctumRemotum) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_PonctumRemotum(piPonctumRemotum)); \
} \
HRESULT __stdcall  ENVTIEName::get_FocalPointX(double & poFocalPointX) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_FocalPointX(poFocalPointX)); \
} \
HRESULT __stdcall  ENVTIEName::get_FocalPointY(double & poFocalPointY) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_FocalPointY(poFocalPointY)); \
} \
HRESULT __stdcall  ENVTIEName::get_FocalPointZ(double & poFocalPointZ) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_FocalPointZ(poFocalPointZ)); \
} \
HRESULT __stdcall  ENVTIEName::LookAt(double piFocalDistance, double piVAngle, double piHAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)LookAt(piFocalDistance,piVAngle,piHAngle)); \
} \
HRESULT __stdcall  ENVTIEName::LookAtPoint(double piX, double piY, double piZ) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)LookAtPoint(piX,piY,piZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveSide(CATLONG & poType) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_ActiveSide(poType)); \
} \
HRESULT __stdcall  ENVTIEName::get_MonocularAngle(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_MonocularAngle(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_MonocularAngle(double piAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_MonocularAngle(piAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_BinocularAngle(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_BinocularAngle(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_BinocularAngle(double piAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_BinocularAngle(piAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AmbinocularAngle(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_AmbinocularAngle(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_AmbinocularAngle(double piAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_AmbinocularAngle(piAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_VerticalTopAngle(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_VerticalTopAngle(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_VerticalTopAngle(double piAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_VerticalTopAngle(piAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_VerticalBottomAngle(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_VerticalBottomAngle(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_VerticalBottomAngle(double piAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_VerticalBottomAngle(piAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_CentralConeAngle(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_CentralConeAngle(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_CentralConeAngle(double piAngle) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_CentralConeAngle(piAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveLineOfSight(SWKIALineOfSight *& poLineOfSight) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_ActiveLineOfSight(poLineOfSight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATLONG & poType) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_Type(poType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CATLONG piType) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_Type(piType)); \
} \
HRESULT __stdcall  ENVTIEName::Reset() \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)Reset()); \
} \
HRESULT __stdcall  ENVTIEName::CloseVisionWindows() \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)CloseVisionWindows()); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAVision,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAVision(classe)    TIESWKIAVision##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAVision(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAVision, classe) \
 \
 \
CATImplementTIEMethods(SWKIAVision, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAVision, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAVision, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAVision, classe) \
 \
HRESULT __stdcall  TIESWKIAVision##classe::get_FocalDistance(double & poFocalDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poFocalDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FocalDistance(poFocalDistance); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poFocalDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_FocalDistance(double piFocalDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piFocalDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FocalDistance(piFocalDistance); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piFocalDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_PonctumProximum(double & poPonctumProximum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poPonctumProximum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PonctumProximum(poPonctumProximum); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poPonctumProximum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_PonctumProximum(double piPonctumProximum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piPonctumProximum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PonctumProximum(piPonctumProximum); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piPonctumProximum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_PonctumRemotum(double & poPonctumRemotum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&poPonctumRemotum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PonctumRemotum(poPonctumRemotum); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&poPonctumRemotum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_PonctumRemotum(double piPonctumRemotum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piPonctumRemotum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PonctumRemotum(piPonctumRemotum); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piPonctumRemotum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_FocalPointX(double & poFocalPointX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poFocalPointX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FocalPointX(poFocalPointX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poFocalPointX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_FocalPointY(double & poFocalPointY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poFocalPointY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FocalPointY(poFocalPointY); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poFocalPointY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_FocalPointZ(double & poFocalPointZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poFocalPointZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FocalPointZ(poFocalPointZ); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poFocalPointZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::LookAt(double piFocalDistance, double piVAngle, double piHAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&piFocalDistance,&piVAngle,&piHAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LookAt(piFocalDistance,piVAngle,piHAngle); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&piFocalDistance,&piVAngle,&piHAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::LookAtPoint(double piX, double piY, double piZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&piX,&piY,&piZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LookAtPoint(piX,piY,piZ); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&piX,&piY,&piZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_ActiveSide(CATLONG & poType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveSide(poType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_MonocularAngle(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MonocularAngle(poAngle); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_MonocularAngle(double piAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&piAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MonocularAngle(piAngle); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&piAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_BinocularAngle(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BinocularAngle(poAngle); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_BinocularAngle(double piAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&piAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BinocularAngle(piAngle); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&piAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_AmbinocularAngle(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AmbinocularAngle(poAngle); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_AmbinocularAngle(double piAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&piAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AmbinocularAngle(piAngle); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&piAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_VerticalTopAngle(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VerticalTopAngle(poAngle); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_VerticalTopAngle(double piAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&piAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VerticalTopAngle(piAngle); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&piAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_VerticalBottomAngle(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VerticalBottomAngle(poAngle); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_VerticalBottomAngle(double piAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&piAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VerticalBottomAngle(piAngle); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&piAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_CentralConeAngle(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CentralConeAngle(poAngle); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_CentralConeAngle(double piAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&piAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CentralConeAngle(piAngle); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&piAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_ActiveLineOfSight(SWKIALineOfSight *& poLineOfSight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&poLineOfSight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveLineOfSight(poLineOfSight); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&poLineOfSight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_Type(CATLONG & poType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&poType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(poType); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&poType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_Type(CATLONG piType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&piType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(piType); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&piType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::Reset() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reset(); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::CloseVisionWindows() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseVisionWindows(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAVision##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAVision##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAVision##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAVision##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAVision##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAVision##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAVision(classe) \
 \
 \
declare_TIE_SWKIAVision(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAVision##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAVision,"SWKIAVision",SWKIAVision::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAVision(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAVision, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAVision##classe(classe::MetaObject(),SWKIAVision::MetaObject(),(void *)CreateTIESWKIAVision##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAVision(classe) \
 \
 \
declare_TIE_SWKIAVision(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAVision##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAVision,"SWKIAVision",SWKIAVision::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAVision(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAVision, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAVision##classe(classe::MetaObject(),SWKIAVision::MetaObject(),(void *)CreateTIESWKIAVision##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAVision(classe) TIE_SWKIAVision(classe)
#else
#define BOA_SWKIAVision(classe) CATImplementBOA(SWKIAVision, classe)
#endif

#endif
