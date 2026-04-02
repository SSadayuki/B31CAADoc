#ifndef __TIE_CATIASfmFactory
#define __TIE_CATIASfmFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmFactory */
#define declare_TIE_CATIASfmFactory(classe) \
 \
 \
class TIECATIASfmFactory##classe : public CATIASfmFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetManager(CATIASfmManager *& oSfmManager); \
      virtual HRESULT __stdcall AddSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate); \
      virtual HRESULT __stdcall AddAdvSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate); \
      virtual HRESULT __stdcall AddSuperStiffener(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iWebSupport, CATIASfmStiffener *& oSuperStiffener); \
      virtual HRESULT __stdcall AddMemberCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember); \
      virtual HRESULT __stdcall AddMemberCrvOnRef(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iReference, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember); \
      virtual HRESULT __stdcall AddMemberPtLength(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, double iLength, CATIAReference * iDestination, CATIASfmMemberPointLength *& oMember); \
      virtual HRESULT __stdcall AddMemberPtUpToLimit(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, CATIAReference * iLimit, CATIAReference * iDestination, CATIASfmMemberPointUpToLimit *& oMember); \
      virtual HRESULT __stdcall AddMemberPtPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
      virtual HRESULT __stdcall AddMemberPtPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
      virtual HRESULT __stdcall AddMemberPtOnCrvPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
      virtual HRESULT __stdcall AddMemberPtOnCrvPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
      virtual HRESULT __stdcall AddMemberSurfSurf(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iSurface1, CATIAReference * iSurface2, CATIAReference * iDestination, CATIASfmMemberSurfSurf *& oMember); \
      virtual HRESULT __stdcall AddMemberBeamsAndPlane(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmMember * iMember1, CATIASfmMember * iMember2, CATIAReference * iRefPlane, CATIAReference * iDestination, CATIASfmMemberPlane2Curves *& oMember); \
      virtual HRESULT __stdcall AddSuperStiffenerOnFreeEdge(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iFreeEdge, CATIASfmStiffenerOnFreeEdge *& oSuperStiffenerOnFreeEdge); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetManager(CATIASfmManager *& oSfmManager); \
virtual HRESULT __stdcall AddSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate); \
virtual HRESULT __stdcall AddAdvSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate); \
virtual HRESULT __stdcall AddSuperStiffener(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iWebSupport, CATIASfmStiffener *& oSuperStiffener); \
virtual HRESULT __stdcall AddMemberCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember); \
virtual HRESULT __stdcall AddMemberCrvOnRef(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iReference, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember); \
virtual HRESULT __stdcall AddMemberPtLength(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, double iLength, CATIAReference * iDestination, CATIASfmMemberPointLength *& oMember); \
virtual HRESULT __stdcall AddMemberPtUpToLimit(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, CATIAReference * iLimit, CATIAReference * iDestination, CATIASfmMemberPointUpToLimit *& oMember); \
virtual HRESULT __stdcall AddMemberPtPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
virtual HRESULT __stdcall AddMemberPtPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
virtual HRESULT __stdcall AddMemberPtOnCrvPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
virtual HRESULT __stdcall AddMemberPtOnCrvPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember); \
virtual HRESULT __stdcall AddMemberSurfSurf(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iSurface1, CATIAReference * iSurface2, CATIAReference * iDestination, CATIASfmMemberSurfSurf *& oMember); \
virtual HRESULT __stdcall AddMemberBeamsAndPlane(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmMember * iMember1, CATIASfmMember * iMember2, CATIAReference * iRefPlane, CATIAReference * iDestination, CATIASfmMemberPlane2Curves *& oMember); \
virtual HRESULT __stdcall AddSuperStiffenerOnFreeEdge(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iFreeEdge, CATIASfmStiffenerOnFreeEdge *& oSuperStiffenerOnFreeEdge); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetManager(CATIASfmManager *& oSfmManager) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)GetManager(oSfmManager)); \
} \
HRESULT __stdcall  ENVTIEName::AddSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddSuperPlate(iCategory,iSupport,iDestination,oSuperPlate)); \
} \
HRESULT __stdcall  ENVTIEName::AddAdvSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddAdvSuperPlate(iCategory,iSupport,iDestination,oSuperPlate)); \
} \
HRESULT __stdcall  ENVTIEName::AddSuperStiffener(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iWebSupport, CATIASfmStiffener *& oSuperStiffener) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddSuperStiffener(iCategory,iSectionName,iSuperPlate,iWebSupport,oSuperStiffener)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberCrv(iCategory,iSectionName,iCurve,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberCrvOnRef(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iReference, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberCrvOnRef(iCategory,iSectionName,iCurve,iReference,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberPtLength(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, double iLength, CATIAReference * iDestination, CATIASfmMemberPointLength *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberPtLength(iCategory,iSectionName,iPoint,iDirection,iLength,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberPtUpToLimit(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, CATIAReference * iLimit, CATIAReference * iDestination, CATIASfmMemberPointUpToLimit *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberPtUpToLimit(iCategory,iSectionName,iPoint,iDirection,iLimit,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberPtPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberPtPt(iCategory,iSectionName,iPoint1,iPoint2,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberPtPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberPtPtOnCrv(iCategory,iSectionName,iPoint1,iCurve2,iRatioMode2,iOffset2,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberPtOnCrvPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberPtOnCrvPt(iCategory,iSectionName,iCurve1,iRatioMode1,iOffset1,iPoint2,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberPtOnCrvPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberPtOnCrvPtOnCrv(iCategory,iSectionName,iCurve1,iRatioMode1,iOffset1,iCurve2,iRatioMode2,iOffset2,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberSurfSurf(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iSurface1, CATIAReference * iSurface2, CATIAReference * iDestination, CATIASfmMemberSurfSurf *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberSurfSurf(iCategory,iSectionName,iSurface1,iSurface2,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberBeamsAndPlane(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmMember * iMember1, CATIASfmMember * iMember2, CATIAReference * iRefPlane, CATIAReference * iDestination, CATIASfmMemberPlane2Curves *& oMember) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberBeamsAndPlane(iCategory,iSectionName,iMember1,iMember2,iRefPlane,iDestination,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddSuperStiffenerOnFreeEdge(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iFreeEdge, CATIASfmStiffenerOnFreeEdge *& oSuperStiffenerOnFreeEdge) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)AddSuperStiffenerOnFreeEdge(iCategory,iSectionName,iSuperPlate,iFreeEdge,oSuperStiffenerOnFreeEdge)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmFactory(classe)    TIECATIASfmFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmFactory, classe) \
 \
HRESULT __stdcall  TIECATIASfmFactory##classe::GetManager(CATIASfmManager *& oSfmManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSfmManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManager(oSfmManager); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSfmManager); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCategory,&iSupport,&iDestination,&oSuperPlate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSuperPlate(iCategory,iSupport,iDestination,oSuperPlate); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCategory,&iSupport,&iDestination,&oSuperPlate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddAdvSuperPlate(const CATBSTR & iCategory, CATIAReference * iSupport, CATIAReference * iDestination, CATIASfmSuperPlate *& oSuperPlate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCategory,&iSupport,&iDestination,&oSuperPlate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAdvSuperPlate(iCategory,iSupport,iDestination,oSuperPlate); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCategory,&iSupport,&iDestination,&oSuperPlate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddSuperStiffener(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iWebSupport, CATIASfmStiffener *& oSuperStiffener) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCategory,&iSectionName,&iSuperPlate,&iWebSupport,&oSuperStiffener); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSuperStiffener(iCategory,iSectionName,iSuperPlate,iWebSupport,oSuperStiffener); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iSuperPlate,&iWebSupport,&oSuperStiffener); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iCategory,&iSectionName,&iCurve,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberCrv(iCategory,iSectionName,iCurve,iDestination,oMember); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iCurve,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberCrvOnRef(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve, CATIAReference * iReference, CATIAReference * iDestination, CATIASfmMemberCurve *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCategory,&iSectionName,&iCurve,&iReference,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberCrvOnRef(iCategory,iSectionName,iCurve,iReference,iDestination,oMember); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iCurve,&iReference,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberPtLength(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, double iLength, CATIAReference * iDestination, CATIASfmMemberPointLength *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iCategory,&iSectionName,&iPoint,&iDirection,&iLength,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberPtLength(iCategory,iSectionName,iPoint,iDirection,iLength,iDestination,oMember); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iPoint,&iDirection,&iLength,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberPtUpToLimit(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint, CATIAReference * iDirection, CATIAReference * iLimit, CATIAReference * iDestination, CATIASfmMemberPointUpToLimit *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCategory,&iSectionName,&iPoint,&iDirection,&iLimit,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberPtUpToLimit(iCategory,iSectionName,iPoint,iDirection,iLimit,iDestination,oMember); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iPoint,&iDirection,&iLimit,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberPtPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iCategory,&iSectionName,&iPoint1,&iPoint2,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberPtPt(iCategory,iSectionName,iPoint1,iPoint2,iDestination,oMember); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iPoint1,&iPoint2,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberPtPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iPoint1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCategory,&iSectionName,&iPoint1,&iCurve2,&iRatioMode2,&iOffset2,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberPtPtOnCrv(iCategory,iSectionName,iPoint1,iCurve2,iRatioMode2,iOffset2,iDestination,oMember); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iPoint1,&iCurve2,&iRatioMode2,&iOffset2,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberPtOnCrvPt(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iPoint2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iCategory,&iSectionName,&iCurve1,&iRatioMode1,&iOffset1,&iPoint2,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberPtOnCrvPt(iCategory,iSectionName,iCurve1,iRatioMode1,iOffset1,iPoint2,iDestination,oMember); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iCurve1,&iRatioMode1,&iOffset1,&iPoint2,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberPtOnCrvPtOnCrv(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iCurve1, CAT_VARIANT_BOOL iRatioMode1, double iOffset1, CATIAReference * iCurve2, CAT_VARIANT_BOOL iRatioMode2, double iOffset2, CATIAReference * iDestination, CATIASfmMember2Points *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCategory,&iSectionName,&iCurve1,&iRatioMode1,&iOffset1,&iCurve2,&iRatioMode2,&iOffset2,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberPtOnCrvPtOnCrv(iCategory,iSectionName,iCurve1,iRatioMode1,iOffset1,iCurve2,iRatioMode2,iOffset2,iDestination,oMember); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iCurve1,&iRatioMode1,&iOffset1,&iCurve2,&iRatioMode2,&iOffset2,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberSurfSurf(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIAReference * iSurface1, CATIAReference * iSurface2, CATIAReference * iDestination, CATIASfmMemberSurfSurf *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iCategory,&iSectionName,&iSurface1,&iSurface2,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberSurfSurf(iCategory,iSectionName,iSurface1,iSurface2,iDestination,oMember); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iSurface1,&iSurface2,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddMemberBeamsAndPlane(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmMember * iMember1, CATIASfmMember * iMember2, CATIAReference * iRefPlane, CATIAReference * iDestination, CATIASfmMemberPlane2Curves *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCategory,&iSectionName,&iMember1,&iMember2,&iRefPlane,&iDestination,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberBeamsAndPlane(iCategory,iSectionName,iMember1,iMember2,iRefPlane,iDestination,oMember); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iMember1,&iMember2,&iRefPlane,&iDestination,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFactory##classe::AddSuperStiffenerOnFreeEdge(const CATBSTR & iCategory, const CATBSTR & iSectionName, CATIASfmSuperPlate * iSuperPlate, CATIAReference * iFreeEdge, CATIASfmStiffenerOnFreeEdge *& oSuperStiffenerOnFreeEdge) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCategory,&iSectionName,&iSuperPlate,&iFreeEdge,&oSuperStiffenerOnFreeEdge); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSuperStiffenerOnFreeEdge(iCategory,iSectionName,iSuperPlate,iFreeEdge,oSuperStiffenerOnFreeEdge); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCategory,&iSectionName,&iSuperPlate,&iFreeEdge,&oSuperStiffenerOnFreeEdge); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmFactory(classe) \
 \
 \
declare_TIE_CATIASfmFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmFactory,"CATIASfmFactory",CATIASfmFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmFactory##classe(classe::MetaObject(),CATIASfmFactory::MetaObject(),(void *)CreateTIECATIASfmFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmFactory(classe) \
 \
 \
declare_TIE_CATIASfmFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmFactory,"CATIASfmFactory",CATIASfmFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmFactory##classe(classe::MetaObject(),CATIASfmFactory::MetaObject(),(void *)CreateTIECATIASfmFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmFactory(classe) TIE_CATIASfmFactory(classe)
#else
#define BOA_CATIASfmFactory(classe) CATImplementBOA(CATIASfmFactory, classe)
#endif

#endif
