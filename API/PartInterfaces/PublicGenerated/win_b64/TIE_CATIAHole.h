#ifndef __TIE_CATIAHole
#define __TIE_CATIAHole

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHole.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHole */
#define declare_TIE_CATIAHole(classe) \
 \
 \
class TIECATIAHole##classe : public CATIAHole \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHole, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatHoleType & oType); \
      virtual HRESULT __stdcall put_Type(CatHoleType iType); \
      virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
      virtual HRESULT __stdcall get_HeadDiameter(CATIALength *& oHeadDiameter); \
      virtual HRESULT __stdcall get_HeadDepth(CATIALength *& oHeadDepth); \
      virtual HRESULT __stdcall get_HeadAngle(CATIAAngle *& oHeadAngle); \
      virtual HRESULT __stdcall get_AnchorMode(CatHoleAnchorMode & oMode); \
      virtual HRESULT __stdcall put_AnchorMode(CatHoleAnchorMode iMode); \
      virtual HRESULT __stdcall get_BottomType(CatHoleBottomType & oBottomType); \
      virtual HRESULT __stdcall put_BottomType(CatHoleBottomType iBottomType); \
      virtual HRESULT __stdcall get_BottomAngle(CATIAAngle *& oBottomAngle); \
      virtual HRESULT __stdcall get_BottomLimit(CATIALimit *& oBottomLimit); \
      virtual HRESULT __stdcall get_ThreadingMode(CatHoleThreadingMode & oThreadingMode); \
      virtual HRESULT __stdcall put_ThreadingMode(CatHoleThreadingMode iThreadingMode); \
      virtual HRESULT __stdcall get_ThreadSide(CatHoleThreadSide & oThreadSide); \
      virtual HRESULT __stdcall put_ThreadSide(CatHoleThreadSide iThreadSide); \
      virtual HRESULT __stdcall get_ThreadDepth(CATIALength *& oThreadDepth); \
      virtual HRESULT __stdcall get_ThreadDiameter(CATIALength *& oThreadDepth); \
      virtual HRESULT __stdcall get_ThreadPitch(CATIALength *& oThreadPitch); \
      virtual HRESULT __stdcall Reverse(); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & ioOrigin); \
      virtual HRESULT __stdcall SetOrigin(double iX, double iY, double iZ); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
      virtual HRESULT __stdcall SetDirection(CATIAReference * iDirection); \
      virtual HRESULT __stdcall get_CounterSunkMode(CatCSHoleMode & oCSMode); \
      virtual HRESULT __stdcall put_CounterSunkMode(CatCSHoleMode iCSMode); \
      virtual HRESULT __stdcall get_HoleThreadDescription(CATIAStrParam *& oThreadDescParam); \
      virtual HRESULT __stdcall CreateStandardThreadDesignTable(CatHoleThreadStandard iStandardType); \
      virtual HRESULT __stdcall CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath); \
      virtual HRESULT __stdcall get_CounterDrilledMode(CatCDHoleMode & oCDMode); \
      virtual HRESULT __stdcall put_CounterDrilledMode(CatCDHoleMode iCDMode); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHole(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatHoleType & oType); \
virtual HRESULT __stdcall put_Type(CatHoleType iType); \
virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
virtual HRESULT __stdcall get_HeadDiameter(CATIALength *& oHeadDiameter); \
virtual HRESULT __stdcall get_HeadDepth(CATIALength *& oHeadDepth); \
virtual HRESULT __stdcall get_HeadAngle(CATIAAngle *& oHeadAngle); \
virtual HRESULT __stdcall get_AnchorMode(CatHoleAnchorMode & oMode); \
virtual HRESULT __stdcall put_AnchorMode(CatHoleAnchorMode iMode); \
virtual HRESULT __stdcall get_BottomType(CatHoleBottomType & oBottomType); \
virtual HRESULT __stdcall put_BottomType(CatHoleBottomType iBottomType); \
virtual HRESULT __stdcall get_BottomAngle(CATIAAngle *& oBottomAngle); \
virtual HRESULT __stdcall get_BottomLimit(CATIALimit *& oBottomLimit); \
virtual HRESULT __stdcall get_ThreadingMode(CatHoleThreadingMode & oThreadingMode); \
virtual HRESULT __stdcall put_ThreadingMode(CatHoleThreadingMode iThreadingMode); \
virtual HRESULT __stdcall get_ThreadSide(CatHoleThreadSide & oThreadSide); \
virtual HRESULT __stdcall put_ThreadSide(CatHoleThreadSide iThreadSide); \
virtual HRESULT __stdcall get_ThreadDepth(CATIALength *& oThreadDepth); \
virtual HRESULT __stdcall get_ThreadDiameter(CATIALength *& oThreadDepth); \
virtual HRESULT __stdcall get_ThreadPitch(CATIALength *& oThreadPitch); \
virtual HRESULT __stdcall Reverse(); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & ioOrigin); \
virtual HRESULT __stdcall SetOrigin(double iX, double iY, double iZ); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
virtual HRESULT __stdcall SetDirection(CATIAReference * iDirection); \
virtual HRESULT __stdcall get_CounterSunkMode(CatCSHoleMode & oCSMode); \
virtual HRESULT __stdcall put_CounterSunkMode(CatCSHoleMode iCSMode); \
virtual HRESULT __stdcall get_HoleThreadDescription(CATIAStrParam *& oThreadDescParam); \
virtual HRESULT __stdcall CreateStandardThreadDesignTable(CatHoleThreadStandard iStandardType); \
virtual HRESULT __stdcall CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath); \
virtual HRESULT __stdcall get_CounterDrilledMode(CatCDHoleMode & oCDMode); \
virtual HRESULT __stdcall put_CounterDrilledMode(CatCDHoleMode iCDMode); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHole(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatHoleType & oType) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CatHoleType iType) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diameter(CATIALength *& oDiameter) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_Diameter(oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadDiameter(CATIALength *& oHeadDiameter) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_HeadDiameter(oHeadDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadDepth(CATIALength *& oHeadDepth) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_HeadDepth(oHeadDepth)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadAngle(CATIAAngle *& oHeadAngle) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_HeadAngle(oHeadAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorMode(CatHoleAnchorMode & oMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_AnchorMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorMode(CatHoleAnchorMode iMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_AnchorMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomType(CatHoleBottomType & oBottomType) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_BottomType(oBottomType)); \
} \
HRESULT __stdcall  ENVTIEName::put_BottomType(CatHoleBottomType iBottomType) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_BottomType(iBottomType)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomAngle(CATIAAngle *& oBottomAngle) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_BottomAngle(oBottomAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomLimit(CATIALimit *& oBottomLimit) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_BottomLimit(oBottomLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThreadingMode(CatHoleThreadingMode & oThreadingMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_ThreadingMode(oThreadingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ThreadingMode(CatHoleThreadingMode iThreadingMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_ThreadingMode(iThreadingMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThreadSide(CatHoleThreadSide & oThreadSide) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_ThreadSide(oThreadSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_ThreadSide(CatHoleThreadSide iThreadSide) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_ThreadSide(iThreadSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThreadDepth(CATIALength *& oThreadDepth) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_ThreadDepth(oThreadDepth)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThreadDiameter(CATIALength *& oThreadDepth) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_ThreadDiameter(oThreadDepth)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThreadPitch(CATIALength *& oThreadPitch) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_ThreadPitch(oThreadPitch)); \
} \
HRESULT __stdcall  ENVTIEName::Reverse() \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)Reverse()); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & ioOrigin) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)GetOrigin(ioOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrigin(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)SetOrigin(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)GetDirection(ioDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirection(CATIAReference * iDirection) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)SetDirection(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_CounterSunkMode(CatCSHoleMode & oCSMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_CounterSunkMode(oCSMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_CounterSunkMode(CatCSHoleMode iCSMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_CounterSunkMode(iCSMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_HoleThreadDescription(CATIAStrParam *& oThreadDescParam) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_HoleThreadDescription(oThreadDescParam)); \
} \
HRESULT __stdcall  ENVTIEName::CreateStandardThreadDesignTable(CatHoleThreadStandard iStandardType) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)CreateStandardThreadDesignTable(iStandardType)); \
} \
HRESULT __stdcall  ENVTIEName::CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)CreateUserStandardDesignTable(iStandardName,iPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_CounterDrilledMode(CatCDHoleMode & oCDMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_CounterDrilledMode(oCDMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_CounterDrilledMode(CatCDHoleMode iCDMode) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_CounterDrilledMode(iCDMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileElement(CATIAReference * iProfileElement) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)SetProfileElement(iProfileElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHole,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHole(classe)    TIECATIAHole##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHole(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHole, classe) \
 \
 \
CATImplementTIEMethods(CATIAHole, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHole, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHole, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHole, classe) \
 \
HRESULT __stdcall  TIECATIAHole##classe::get_Type(CatHoleType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_Type(CatHoleType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_Diameter(CATIALength *& oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diameter(oDiameter); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_HeadDiameter(CATIALength *& oHeadDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oHeadDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadDiameter(oHeadDiameter); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oHeadDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_HeadDepth(CATIALength *& oHeadDepth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oHeadDepth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadDepth(oHeadDepth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oHeadDepth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_HeadAngle(CATIAAngle *& oHeadAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oHeadAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadAngle(oHeadAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oHeadAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_AnchorMode(CatHoleAnchorMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorMode(oMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_AnchorMode(CatHoleAnchorMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorMode(iMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_BottomType(CatHoleBottomType & oBottomType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oBottomType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomType(oBottomType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oBottomType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_BottomType(CatHoleBottomType iBottomType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iBottomType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BottomType(iBottomType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iBottomType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_BottomAngle(CATIAAngle *& oBottomAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oBottomAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomAngle(oBottomAngle); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oBottomAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_BottomLimit(CATIALimit *& oBottomLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oBottomLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomLimit(oBottomLimit); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oBottomLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_ThreadingMode(CatHoleThreadingMode & oThreadingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oThreadingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThreadingMode(oThreadingMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oThreadingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_ThreadingMode(CatHoleThreadingMode iThreadingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iThreadingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ThreadingMode(iThreadingMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iThreadingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_ThreadSide(CatHoleThreadSide & oThreadSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThreadSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThreadSide(oThreadSide); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThreadSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_ThreadSide(CatHoleThreadSide iThreadSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iThreadSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ThreadSide(iThreadSide); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iThreadSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_ThreadDepth(CATIALength *& oThreadDepth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThreadDepth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThreadDepth(oThreadDepth); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThreadDepth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_ThreadDiameter(CATIALength *& oThreadDepth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oThreadDepth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThreadDiameter(oThreadDepth); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oThreadDepth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_ThreadPitch(CATIALength *& oThreadPitch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oThreadPitch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThreadPitch(oThreadPitch); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oThreadPitch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::Reverse() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reverse(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::GetOrigin(CATSafeArrayVariant & ioOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ioOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(ioOrigin); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ioOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::SetOrigin(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrigin(iX,iY,iZ); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(ioDirection); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::SetDirection(CATIAReference * iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirection(iDirection); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_CounterSunkMode(CatCSHoleMode & oCSMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oCSMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CounterSunkMode(oCSMode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oCSMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_CounterSunkMode(CatCSHoleMode iCSMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iCSMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CounterSunkMode(iCSMode); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iCSMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_HoleThreadDescription(CATIAStrParam *& oThreadDescParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oThreadDescParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HoleThreadDescription(oThreadDescParam); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oThreadDescParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::CreateStandardThreadDesignTable(CatHoleThreadStandard iStandardType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iStandardType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateStandardThreadDesignTable(iStandardType); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iStandardType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::CreateUserStandardDesignTable(const CATBSTR & iStandardName, const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iStandardName,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateUserStandardDesignTable(iStandardName,iPath); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iStandardName,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_CounterDrilledMode(CatCDHoleMode & oCDMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oCDMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CounterDrilledMode(oCDMode); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oCDMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::put_CounterDrilledMode(CatCDHoleMode iCDMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iCDMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CounterDrilledMode(iCDMode); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iCDMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHole##classe::SetProfileElement(CATIAReference * iProfileElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iProfileElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileElement(iProfileElement); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iProfileElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHole##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHole##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHole##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHole##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHole##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHole(classe) \
 \
 \
declare_TIE_CATIAHole(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHole##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHole,"CATIAHole",CATIAHole::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHole(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHole, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHole##classe(classe::MetaObject(),CATIAHole::MetaObject(),(void *)CreateTIECATIAHole##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHole(classe) \
 \
 \
declare_TIE_CATIAHole(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHole##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHole,"CATIAHole",CATIAHole::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHole(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHole, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHole##classe(classe::MetaObject(),CATIAHole::MetaObject(),(void *)CreateTIECATIAHole##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHole(classe) TIE_CATIAHole(classe)
#else
#define BOA_CATIAHole(classe) CATImplementBOA(CATIAHole, classe)
#endif

#endif
