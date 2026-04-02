#ifndef __TIE_CATIASchAppComponent
#define __TIE_CATIASchAppComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppComponent */
#define declare_TIE_CATIASchAppComponent(classe) \
 \
 \
class TIECATIASchAppComponent##classe : public CATIASchAppComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppCreateComponentInst(CATIABase *& oNewAppCompInst); \
      virtual HRESULT __stdcall AppCreateLocalReference(CATIADocument * iDocToCopyTo, CATIABase *& oNewAppCompRef); \
      virtual HRESULT __stdcall AppListGRRNames(CATIASchListOfBSTRs *& oLGRRNames); \
      virtual HRESULT __stdcall AppGetDefaultGRRName(CATBSTR & oGRRDefaultName); \
      virtual HRESULT __stdcall AppPostPlaceProcess(CATIASchComponent * iNewCompInst, CATIASchAppConnectable * iCntblConnectedTo); \
      virtual HRESULT __stdcall AppPostSlideProcess(); \
      virtual HRESULT __stdcall AppPostFlipConnectedProcess(); \
      virtual HRESULT __stdcall AppPostFlipOnLineProcess(); \
      virtual HRESULT __stdcall AppPostFlipHorizontalProcess(); \
      virtual HRESULT __stdcall AppPostFlipVerticalProcess(); \
      virtual HRESULT __stdcall AppPostUninsertProcess(CATIASchRoute * iOldAppRoute1, CATIASchRoute * iOldAppRoute2, CATIASchRoute * iNewAppRoute); \
      virtual HRESULT __stdcall AppPostSwitchGraphicProcess(CATIASchGRR * iGRR); \
      virtual HRESULT __stdcall AppOKToPlaceInSpace(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToSlide(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToFlipConnected(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToFlipOnLine(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToFlipVertical(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToFlipHorizontal(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToUninsert(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToScale(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppCreateComponentInst(CATIABase *& oNewAppCompInst); \
virtual HRESULT __stdcall AppCreateLocalReference(CATIADocument * iDocToCopyTo, CATIABase *& oNewAppCompRef); \
virtual HRESULT __stdcall AppListGRRNames(CATIASchListOfBSTRs *& oLGRRNames); \
virtual HRESULT __stdcall AppGetDefaultGRRName(CATBSTR & oGRRDefaultName); \
virtual HRESULT __stdcall AppPostPlaceProcess(CATIASchComponent * iNewCompInst, CATIASchAppConnectable * iCntblConnectedTo); \
virtual HRESULT __stdcall AppPostSlideProcess(); \
virtual HRESULT __stdcall AppPostFlipConnectedProcess(); \
virtual HRESULT __stdcall AppPostFlipOnLineProcess(); \
virtual HRESULT __stdcall AppPostFlipHorizontalProcess(); \
virtual HRESULT __stdcall AppPostFlipVerticalProcess(); \
virtual HRESULT __stdcall AppPostUninsertProcess(CATIASchRoute * iOldAppRoute1, CATIASchRoute * iOldAppRoute2, CATIASchRoute * iNewAppRoute); \
virtual HRESULT __stdcall AppPostSwitchGraphicProcess(CATIASchGRR * iGRR); \
virtual HRESULT __stdcall AppOKToPlaceInSpace(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToSlide(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToFlipConnected(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToFlipOnLine(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToFlipVertical(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToFlipHorizontal(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToUninsert(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToScale(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppCreateComponentInst(CATIABase *& oNewAppCompInst) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppCreateComponentInst(oNewAppCompInst)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateLocalReference(CATIADocument * iDocToCopyTo, CATIABase *& oNewAppCompRef) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppCreateLocalReference(iDocToCopyTo,oNewAppCompRef)); \
} \
HRESULT __stdcall  ENVTIEName::AppListGRRNames(CATIASchListOfBSTRs *& oLGRRNames) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppListGRRNames(oLGRRNames)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetDefaultGRRName(CATBSTR & oGRRDefaultName) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppGetDefaultGRRName(oGRRDefaultName)); \
} \
HRESULT __stdcall  ENVTIEName::AppPostPlaceProcess(CATIASchComponent * iNewCompInst, CATIASchAppConnectable * iCntblConnectedTo) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostPlaceProcess(iNewCompInst,iCntblConnectedTo)); \
} \
HRESULT __stdcall  ENVTIEName::AppPostSlideProcess() \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostSlideProcess()); \
} \
HRESULT __stdcall  ENVTIEName::AppPostFlipConnectedProcess() \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipConnectedProcess()); \
} \
HRESULT __stdcall  ENVTIEName::AppPostFlipOnLineProcess() \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipOnLineProcess()); \
} \
HRESULT __stdcall  ENVTIEName::AppPostFlipHorizontalProcess() \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipHorizontalProcess()); \
} \
HRESULT __stdcall  ENVTIEName::AppPostFlipVerticalProcess() \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipVerticalProcess()); \
} \
HRESULT __stdcall  ENVTIEName::AppPostUninsertProcess(CATIASchRoute * iOldAppRoute1, CATIASchRoute * iOldAppRoute2, CATIASchRoute * iNewAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostUninsertProcess(iOldAppRoute1,iOldAppRoute2,iNewAppRoute)); \
} \
HRESULT __stdcall  ENVTIEName::AppPostSwitchGraphicProcess(CATIASchGRR * iGRR) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostSwitchGraphicProcess(iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToPlaceInSpace(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToPlaceInSpace(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToSlide(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToSlide(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToFlipConnected(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipConnected(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToFlipOnLine(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipOnLine(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToFlipVertical(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipVertical(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToFlipHorizontal(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipHorizontal(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToUninsert(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToUninsert(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToScale(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToScale(oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppComponent(classe)    TIECATIASchAppComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppComponent, classe) \
 \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppCreateComponentInst(CATIABase *& oNewAppCompInst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNewAppCompInst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateComponentInst(oNewAppCompInst); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNewAppCompInst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppCreateLocalReference(CATIADocument * iDocToCopyTo, CATIABase *& oNewAppCompRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDocToCopyTo,&oNewAppCompRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateLocalReference(iDocToCopyTo,oNewAppCompRef); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDocToCopyTo,&oNewAppCompRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppListGRRNames(CATIASchListOfBSTRs *& oLGRRNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRRNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListGRRNames(oLGRRNames); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRRNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppGetDefaultGRRName(CATBSTR & oGRRDefaultName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oGRRDefaultName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetDefaultGRRName(oGRRDefaultName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oGRRDefaultName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostPlaceProcess(CATIASchComponent * iNewCompInst, CATIASchAppConnectable * iCntblConnectedTo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNewCompInst,&iCntblConnectedTo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostPlaceProcess(iNewCompInst,iCntblConnectedTo); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNewCompInst,&iCntblConnectedTo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostSlideProcess() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostSlideProcess(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostFlipConnectedProcess() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipConnectedProcess(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostFlipOnLineProcess() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipOnLineProcess(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostFlipHorizontalProcess() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipHorizontalProcess(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostFlipVerticalProcess() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipVerticalProcess(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostUninsertProcess(CATIASchRoute * iOldAppRoute1, CATIASchRoute * iOldAppRoute2, CATIASchRoute * iNewAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iOldAppRoute1,&iOldAppRoute2,&iNewAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostUninsertProcess(iOldAppRoute1,iOldAppRoute2,iNewAppRoute); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iOldAppRoute1,&iOldAppRoute2,&iNewAppRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppPostSwitchGraphicProcess(CATIASchGRR * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostSwitchGraphicProcess(iGRR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToPlaceInSpace(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToPlaceInSpace(oBYes); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToSlide(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToSlide(oBYes); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToFlipConnected(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipConnected(oBYes); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToFlipOnLine(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipOnLine(oBYes); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToFlipVertical(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipVertical(oBYes); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToFlipHorizontal(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipHorizontal(oBYes); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToUninsert(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToUninsert(oBYes); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppComponent##classe::AppOKToScale(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToScale(oBYes); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppComponent(classe) \
 \
 \
declare_TIE_CATIASchAppComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppComponent,"CATIASchAppComponent",CATIASchAppComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppComponent##classe(classe::MetaObject(),CATIASchAppComponent::MetaObject(),(void *)CreateTIECATIASchAppComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppComponent(classe) \
 \
 \
declare_TIE_CATIASchAppComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppComponent,"CATIASchAppComponent",CATIASchAppComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppComponent##classe(classe::MetaObject(),CATIASchAppComponent::MetaObject(),(void *)CreateTIECATIASchAppComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppComponent(classe) TIE_CATIASchAppComponent(classe)
#else
#define BOA_CATIASchAppComponent(classe) CATImplementBOA(CATIASchAppComponent, classe)
#endif

#endif
