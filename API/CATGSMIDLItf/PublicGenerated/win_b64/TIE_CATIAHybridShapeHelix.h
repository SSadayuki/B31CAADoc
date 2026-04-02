#ifndef __TIE_CATIAHybridShapeHelix
#define __TIE_CATIAHybridShapeHelix

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeHelix.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeHelix */
#define declare_TIE_CATIAHybridShapeHelix(classe) \
 \
 \
class TIECATIAHybridShapeHelix##classe : public CATIAHybridShapeHelix \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeHelix, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Axis(CATIAReference *& oAxis); \
      virtual HRESULT __stdcall put_Axis(CATIAReference * iAxis); \
      virtual HRESULT __stdcall get_InvertAxis(CAT_VARIANT_BOOL & oInvert); \
      virtual HRESULT __stdcall put_InvertAxis(CAT_VARIANT_BOOL iInvert); \
      virtual HRESULT __stdcall get_StartingPoint(CATIAReference *& oStPt); \
      virtual HRESULT __stdcall put_StartingPoint(CATIAReference * iStPt); \
      virtual HRESULT __stdcall get_Pitch(CATIALength *& oInvert); \
      virtual HRESULT __stdcall get_Height(CATIALength *& oHeight); \
      virtual HRESULT __stdcall get_RevolNumber(CATIARealParam *& oNbRevol); \
      virtual HRESULT __stdcall get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution); \
      virtual HRESULT __stdcall put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution); \
      virtual HRESULT __stdcall get_StartingAngle(CATIAAngle *& oStartingAngle); \
      virtual HRESULT __stdcall get_TaperAngle(CATIAAngle *& oTaperAngle); \
      virtual HRESULT __stdcall get_TaperOutward(CAT_VARIANT_BOOL & oTaperOutward); \
      virtual HRESULT __stdcall put_TaperOutward(CAT_VARIANT_BOOL iTaperOutward); \
      virtual HRESULT __stdcall SetTaperAngle(double iTaperAngle); \
      virtual HRESULT __stdcall SetStartingAngle(double iStartingAngle); \
      virtual HRESULT __stdcall SetHeight(double iHeight); \
      virtual HRESULT __stdcall SetPitch(double iPitch); \
      virtual HRESULT __stdcall get_Profile(CATIAReference *& oProfile); \
      virtual HRESULT __stdcall put_Profile(CATIAReference * iProfile); \
      virtual HRESULT __stdcall get_PitchLawType(CATLONG & oLawType); \
      virtual HRESULT __stdcall put_PitchLawType(CATLONG iLawType); \
      virtual HRESULT __stdcall get_Pitch2(CATIALength *& oPitch2); \
      virtual HRESULT __stdcall SetPitch2(double iPitch2); \
      virtual HRESULT __stdcall SetRevolutionNumber(double iNbRevol); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeHelix(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Axis(CATIAReference *& oAxis); \
virtual HRESULT __stdcall put_Axis(CATIAReference * iAxis); \
virtual HRESULT __stdcall get_InvertAxis(CAT_VARIANT_BOOL & oInvert); \
virtual HRESULT __stdcall put_InvertAxis(CAT_VARIANT_BOOL iInvert); \
virtual HRESULT __stdcall get_StartingPoint(CATIAReference *& oStPt); \
virtual HRESULT __stdcall put_StartingPoint(CATIAReference * iStPt); \
virtual HRESULT __stdcall get_Pitch(CATIALength *& oInvert); \
virtual HRESULT __stdcall get_Height(CATIALength *& oHeight); \
virtual HRESULT __stdcall get_RevolNumber(CATIARealParam *& oNbRevol); \
virtual HRESULT __stdcall get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution); \
virtual HRESULT __stdcall put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution); \
virtual HRESULT __stdcall get_StartingAngle(CATIAAngle *& oStartingAngle); \
virtual HRESULT __stdcall get_TaperAngle(CATIAAngle *& oTaperAngle); \
virtual HRESULT __stdcall get_TaperOutward(CAT_VARIANT_BOOL & oTaperOutward); \
virtual HRESULT __stdcall put_TaperOutward(CAT_VARIANT_BOOL iTaperOutward); \
virtual HRESULT __stdcall SetTaperAngle(double iTaperAngle); \
virtual HRESULT __stdcall SetStartingAngle(double iStartingAngle); \
virtual HRESULT __stdcall SetHeight(double iHeight); \
virtual HRESULT __stdcall SetPitch(double iPitch); \
virtual HRESULT __stdcall get_Profile(CATIAReference *& oProfile); \
virtual HRESULT __stdcall put_Profile(CATIAReference * iProfile); \
virtual HRESULT __stdcall get_PitchLawType(CATLONG & oLawType); \
virtual HRESULT __stdcall put_PitchLawType(CATLONG iLawType); \
virtual HRESULT __stdcall get_Pitch2(CATIALength *& oPitch2); \
virtual HRESULT __stdcall SetPitch2(double iPitch2); \
virtual HRESULT __stdcall SetRevolutionNumber(double iNbRevol); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeHelix(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Axis(CATIAReference *& oAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Axis(oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_Axis(CATIAReference * iAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_Axis(iAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_InvertAxis(CAT_VARIANT_BOOL & oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_InvertAxis(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_InvertAxis(CAT_VARIANT_BOOL iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_InvertAxis(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartingPoint(CATIAReference *& oStPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_StartingPoint(oStPt)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartingPoint(CATIAReference * iStPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_StartingPoint(iStPt)); \
} \
HRESULT __stdcall  ENVTIEName::get_Pitch(CATIALength *& oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Pitch(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(CATIALength *& oHeight) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_RevolNumber(CATIARealParam *& oNbRevol) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_RevolNumber(oNbRevol)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_ClockwiseRevolution(oClockwiseRevolution)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_ClockwiseRevolution(iClockwiseRevolution)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartingAngle(CATIAAngle *& oStartingAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_StartingAngle(oStartingAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_TaperAngle(CATIAAngle *& oTaperAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_TaperAngle(oTaperAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_TaperOutward(CAT_VARIANT_BOOL & oTaperOutward) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_TaperOutward(oTaperOutward)); \
} \
HRESULT __stdcall  ENVTIEName::put_TaperOutward(CAT_VARIANT_BOOL iTaperOutward) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_TaperOutward(iTaperOutward)); \
} \
HRESULT __stdcall  ENVTIEName::SetTaperAngle(double iTaperAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)SetTaperAngle(iTaperAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartingAngle(double iStartingAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)SetStartingAngle(iStartingAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetHeight(double iHeight) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)SetHeight(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::SetPitch(double iPitch) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)SetPitch(iPitch)); \
} \
HRESULT __stdcall  ENVTIEName::get_Profile(CATIAReference *& oProfile) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Profile(oProfile)); \
} \
HRESULT __stdcall  ENVTIEName::put_Profile(CATIAReference * iProfile) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_Profile(iProfile)); \
} \
HRESULT __stdcall  ENVTIEName::get_PitchLawType(CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_PitchLawType(oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::put_PitchLawType(CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_PitchLawType(iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Pitch2(CATIALength *& oPitch2) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Pitch2(oPitch2)); \
} \
HRESULT __stdcall  ENVTIEName::SetPitch2(double iPitch2) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)SetPitch2(iPitch2)); \
} \
HRESULT __stdcall  ENVTIEName::SetRevolutionNumber(double iNbRevol) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)SetRevolutionNumber(iNbRevol)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeHelix,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeHelix(classe)    TIECATIAHybridShapeHelix##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeHelix(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeHelix, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeHelix, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeHelix, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeHelix, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeHelix, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_Axis(CATIAReference *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Axis(oAxis); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_Axis(CATIAReference * iAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Axis(iAxis); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_InvertAxis(CAT_VARIANT_BOOL & oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InvertAxis(oInvert); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_InvertAxis(CAT_VARIANT_BOOL iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InvertAxis(iInvert); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_StartingPoint(CATIAReference *& oStPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oStPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartingPoint(oStPt); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oStPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_StartingPoint(CATIAReference * iStPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iStPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartingPoint(iStPt); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iStPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_Pitch(CATIALength *& oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Pitch(oInvert); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_Height(CATIALength *& oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_RevolNumber(CATIARealParam *& oNbRevol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbRevol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RevolNumber(oNbRevol); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbRevol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oClockwiseRevolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClockwiseRevolution(oClockwiseRevolution); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oClockwiseRevolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iClockwiseRevolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClockwiseRevolution(iClockwiseRevolution); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iClockwiseRevolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_StartingAngle(CATIAAngle *& oStartingAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oStartingAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartingAngle(oStartingAngle); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oStartingAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_TaperAngle(CATIAAngle *& oTaperAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oTaperAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TaperAngle(oTaperAngle); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oTaperAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_TaperOutward(CAT_VARIANT_BOOL & oTaperOutward) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oTaperOutward); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TaperOutward(oTaperOutward); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oTaperOutward); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_TaperOutward(CAT_VARIANT_BOOL iTaperOutward) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iTaperOutward); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TaperOutward(iTaperOutward); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iTaperOutward); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::SetTaperAngle(double iTaperAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iTaperAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTaperAngle(iTaperAngle); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iTaperAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::SetStartingAngle(double iStartingAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iStartingAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartingAngle(iStartingAngle); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iStartingAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::SetHeight(double iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHeight(iHeight); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::SetPitch(double iPitch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iPitch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPitch(iPitch); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iPitch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_Profile(CATIAReference *& oProfile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oProfile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Profile(oProfile); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oProfile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_Profile(CATIAReference * iProfile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iProfile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Profile(iProfile); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iProfile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_PitchLawType(CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PitchLawType(oLawType); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::put_PitchLawType(CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PitchLawType(iLawType); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_Pitch2(CATIALength *& oPitch2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oPitch2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Pitch2(oPitch2); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oPitch2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::SetPitch2(double iPitch2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPitch2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPitch2(iPitch2); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPitch2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::SetRevolutionNumber(double iNbRevol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNbRevol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRevolutionNumber(iNbRevol); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNbRevol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHelix##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHelix##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHelix##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHelix##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHelix##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHelix##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeHelix(classe) \
 \
 \
declare_TIE_CATIAHybridShapeHelix(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeHelix##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeHelix,"CATIAHybridShapeHelix",CATIAHybridShapeHelix::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeHelix(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeHelix, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeHelix##classe(classe::MetaObject(),CATIAHybridShapeHelix::MetaObject(),(void *)CreateTIECATIAHybridShapeHelix##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeHelix(classe) \
 \
 \
declare_TIE_CATIAHybridShapeHelix(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeHelix##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeHelix,"CATIAHybridShapeHelix",CATIAHybridShapeHelix::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeHelix(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeHelix, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeHelix##classe(classe::MetaObject(),CATIAHybridShapeHelix::MetaObject(),(void *)CreateTIECATIAHybridShapeHelix##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeHelix(classe) TIE_CATIAHybridShapeHelix(classe)
#else
#define BOA_CATIAHybridShapeHelix(classe) CATImplementBOA(CATIAHybridShapeHelix, classe)
#endif

#endif
