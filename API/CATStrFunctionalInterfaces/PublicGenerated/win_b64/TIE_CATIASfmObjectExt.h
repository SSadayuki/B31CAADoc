#ifndef __TIE_CATIASfmObjectExt
#define __TIE_CATIASfmObjectExt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmObjectExt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmObjectExt */
#define declare_TIE_CATIASfmObjectExt(classe) \
 \
 \
class TIECATIASfmObjectExt##classe : public CATIASfmObjectExt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmObjectExt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CoG_x(double & oCoG_x); \
      virtual HRESULT __stdcall get_CoG_y(double & oCoG_y); \
      virtual HRESULT __stdcall get_CoG_z(double & oCoG_z); \
      virtual HRESULT __stdcall get_Grade(CATBSTR & oGrade); \
      virtual HRESULT __stdcall get_IsASuperObject(CAT_VARIANT_BOOL & oIsSuperObject); \
      virtual HRESULT __stdcall get_Material(CATBSTR & oMaterial); \
      virtual HRESULT __stdcall get_PaintedArea(double & oPaintedArea); \
      virtual HRESULT __stdcall get_ProfileLength(double & oProfileLength); \
      virtual HRESULT __stdcall get_Weight(double & oWeight); \
      virtual HRESULT __stdcall get_WeldingLength(double & oWeldingLength); \
      virtual HRESULT __stdcall get_SupportName(CATBSTR & oSupportName); \
      virtual HRESULT __stdcall get_SupportOffset(double & oSupportOffset); \
      virtual HRESULT __stdcall get_PlatePerimeter(double & oPlatePerimeter); \
      virtual HRESULT __stdcall get_PlateWidth(double & oPlateWidth); \
      virtual HRESULT __stdcall get_SurfaceArea(double & oSurfaceArea); \
      virtual HRESULT __stdcall get_Thickness(double & oThickness); \
      virtual HRESULT __stdcall get_Offset(double & oOffset); \
      virtual HRESULT __stdcall get_SectionName(CATBSTR & oSectionName); \
      virtual HRESULT __stdcall get_TopZ(double & oTopZ); \
      virtual HRESULT __stdcall get_BottomZ(double & oBottomZ); \
      virtual HRESULT __stdcall get_StartEndCutName(CATBSTR & oStartEndCutName); \
      virtual HRESULT __stdcall get_EndEndCutName(CATBSTR & oEndEndCutName); \
      virtual HRESULT __stdcall get_PlateLength(double & oLength); \
      virtual HRESULT __stdcall get_SupportedPlateName(CATBSTR & oSupportedPlateName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmObjectExt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CoG_x(double & oCoG_x); \
virtual HRESULT __stdcall get_CoG_y(double & oCoG_y); \
virtual HRESULT __stdcall get_CoG_z(double & oCoG_z); \
virtual HRESULT __stdcall get_Grade(CATBSTR & oGrade); \
virtual HRESULT __stdcall get_IsASuperObject(CAT_VARIANT_BOOL & oIsSuperObject); \
virtual HRESULT __stdcall get_Material(CATBSTR & oMaterial); \
virtual HRESULT __stdcall get_PaintedArea(double & oPaintedArea); \
virtual HRESULT __stdcall get_ProfileLength(double & oProfileLength); \
virtual HRESULT __stdcall get_Weight(double & oWeight); \
virtual HRESULT __stdcall get_WeldingLength(double & oWeldingLength); \
virtual HRESULT __stdcall get_SupportName(CATBSTR & oSupportName); \
virtual HRESULT __stdcall get_SupportOffset(double & oSupportOffset); \
virtual HRESULT __stdcall get_PlatePerimeter(double & oPlatePerimeter); \
virtual HRESULT __stdcall get_PlateWidth(double & oPlateWidth); \
virtual HRESULT __stdcall get_SurfaceArea(double & oSurfaceArea); \
virtual HRESULT __stdcall get_Thickness(double & oThickness); \
virtual HRESULT __stdcall get_Offset(double & oOffset); \
virtual HRESULT __stdcall get_SectionName(CATBSTR & oSectionName); \
virtual HRESULT __stdcall get_TopZ(double & oTopZ); \
virtual HRESULT __stdcall get_BottomZ(double & oBottomZ); \
virtual HRESULT __stdcall get_StartEndCutName(CATBSTR & oStartEndCutName); \
virtual HRESULT __stdcall get_EndEndCutName(CATBSTR & oEndEndCutName); \
virtual HRESULT __stdcall get_PlateLength(double & oLength); \
virtual HRESULT __stdcall get_SupportedPlateName(CATBSTR & oSupportedPlateName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmObjectExt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CoG_x(double & oCoG_x) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_CoG_x(oCoG_x)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoG_y(double & oCoG_y) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_CoG_y(oCoG_y)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoG_z(double & oCoG_z) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_CoG_z(oCoG_z)); \
} \
HRESULT __stdcall  ENVTIEName::get_Grade(CATBSTR & oGrade) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Grade(oGrade)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsASuperObject(CAT_VARIANT_BOOL & oIsSuperObject) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_IsASuperObject(oIsSuperObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Material(CATBSTR & oMaterial) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Material(oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaintedArea(double & oPaintedArea) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_PaintedArea(oPaintedArea)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProfileLength(double & oProfileLength) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_ProfileLength(oProfileLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_Weight(double & oWeight) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Weight(oWeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_WeldingLength(double & oWeldingLength) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_WeldingLength(oWeldingLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportName(CATBSTR & oSupportName) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_SupportName(oSupportName)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportOffset(double & oSupportOffset) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_SupportOffset(oSupportOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlatePerimeter(double & oPlatePerimeter) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_PlatePerimeter(oPlatePerimeter)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlateWidth(double & oPlateWidth) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_PlateWidth(oPlateWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfaceArea(double & oSurfaceArea) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_SurfaceArea(oSurfaceArea)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(double & oThickness) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offset(double & oOffset) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Offset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionName(CATBSTR & oSectionName) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_SectionName(oSectionName)); \
} \
HRESULT __stdcall  ENVTIEName::get_TopZ(double & oTopZ) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_TopZ(oTopZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomZ(double & oBottomZ) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_BottomZ(oBottomZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartEndCutName(CATBSTR & oStartEndCutName) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_StartEndCutName(oStartEndCutName)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndEndCutName(CATBSTR & oEndEndCutName) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_EndEndCutName(oEndEndCutName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlateLength(double & oLength) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_PlateLength(oLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportedPlateName(CATBSTR & oSupportedPlateName) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_SupportedPlateName(oSupportedPlateName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmObjectExt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmObjectExt(classe)    TIECATIASfmObjectExt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmObjectExt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmObjectExt, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmObjectExt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmObjectExt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmObjectExt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmObjectExt, classe) \
 \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_CoG_x(double & oCoG_x) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCoG_x); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoG_x(oCoG_x); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCoG_x); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_CoG_y(double & oCoG_y) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCoG_y); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoG_y(oCoG_y); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCoG_y); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_CoG_z(double & oCoG_z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCoG_z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoG_z(oCoG_z); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCoG_z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_Grade(CATBSTR & oGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Grade(oGrade); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oGrade); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_IsASuperObject(CAT_VARIANT_BOOL & oIsSuperObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsSuperObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsASuperObject(oIsSuperObject); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsSuperObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_Material(CATBSTR & oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Material(oMaterial); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_PaintedArea(double & oPaintedArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPaintedArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaintedArea(oPaintedArea); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPaintedArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_ProfileLength(double & oProfileLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oProfileLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProfileLength(oProfileLength); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oProfileLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_Weight(double & oWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Weight(oWeight); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oWeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_WeldingLength(double & oWeldingLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oWeldingLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WeldingLength(oWeldingLength); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oWeldingLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_SupportName(CATBSTR & oSupportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSupportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportName(oSupportName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSupportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_SupportOffset(double & oSupportOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oSupportOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportOffset(oSupportOffset); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oSupportOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_PlatePerimeter(double & oPlatePerimeter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oPlatePerimeter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlatePerimeter(oPlatePerimeter); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oPlatePerimeter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_PlateWidth(double & oPlateWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oPlateWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlateWidth(oPlateWidth); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oPlateWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_SurfaceArea(double & oSurfaceArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oSurfaceArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceArea(oSurfaceArea); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oSurfaceArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_Thickness(double & oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_Offset(double & oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oOffset); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_SectionName(CATBSTR & oSectionName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oSectionName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionName(oSectionName); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oSectionName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_TopZ(double & oTopZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oTopZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TopZ(oTopZ); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oTopZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_BottomZ(double & oBottomZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oBottomZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomZ(oBottomZ); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oBottomZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_StartEndCutName(CATBSTR & oStartEndCutName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oStartEndCutName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartEndCutName(oStartEndCutName); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oStartEndCutName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_EndEndCutName(CATBSTR & oEndEndCutName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oEndEndCutName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndEndCutName(oEndEndCutName); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oEndEndCutName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_PlateLength(double & oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlateLength(oLength); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmObjectExt##classe::get_SupportedPlateName(CATBSTR & oSupportedPlateName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oSupportedPlateName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportedPlateName(oSupportedPlateName); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oSupportedPlateName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmObjectExt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmObjectExt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmObjectExt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmObjectExt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmObjectExt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmObjectExt(classe) \
 \
 \
declare_TIE_CATIASfmObjectExt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmObjectExt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmObjectExt,"CATIASfmObjectExt",CATIASfmObjectExt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmObjectExt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmObjectExt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmObjectExt##classe(classe::MetaObject(),CATIASfmObjectExt::MetaObject(),(void *)CreateTIECATIASfmObjectExt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmObjectExt(classe) \
 \
 \
declare_TIE_CATIASfmObjectExt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmObjectExt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmObjectExt,"CATIASfmObjectExt",CATIASfmObjectExt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmObjectExt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmObjectExt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmObjectExt##classe(classe::MetaObject(),CATIASfmObjectExt::MetaObject(),(void *)CreateTIECATIASfmObjectExt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmObjectExt(classe) TIE_CATIASfmObjectExt(classe)
#else
#define BOA_CATIASfmObjectExt(classe) CATImplementBOA(CATIASfmObjectExt, classe)
#endif

#endif
