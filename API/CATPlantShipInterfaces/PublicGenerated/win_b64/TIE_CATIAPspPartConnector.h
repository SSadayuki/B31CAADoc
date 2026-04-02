#ifndef __TIE_CATIAPspPartConnector
#define __TIE_CATIAPspPartConnector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspPartConnector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspPartConnector */
#define declare_TIE_CATIAPspPartConnector(classe) \
 \
 \
class TIECATIAPspPartConnector##classe : public CATIAPspPartConnector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspPartConnector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetFaceConnector(CATIAReference *& oCntr); \
      virtual HRESULT __stdcall SetFaceConnector(CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType); \
      virtual HRESULT __stdcall GetAlignmentConnector(CATIAReference *& oCntr); \
      virtual HRESULT __stdcall SetAlignmentConnector(CATIAReference * iAlignCntr, CatPspIDLPartConnectorType ieAlignType); \
      virtual HRESULT __stdcall GetOrientationConnector(CATIAReference *& oCntr); \
      virtual HRESULT __stdcall SetOrientationConnector(CATIAReference * iOrientCntr, CatPspIDLPartConnectorType ieOrientation); \
      virtual HRESULT __stdcall GetDatumConnector(CATIAReference *& oCntr); \
      virtual HRESULT __stdcall SetDatumConnector(CATIAReference * iDatumCntr); \
      virtual HRESULT __stdcall GetPosition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oPosition); \
      virtual HRESULT __stdcall GetAlignmentDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection); \
      virtual HRESULT __stdcall GetConnectorMathPlane(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oMathPlane); \
      virtual HRESULT __stdcall GetUpDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oUpDirection); \
      virtual HRESULT __stdcall get_FaceType(CatPspIDLPartConnectorType & oFaceType); \
      virtual HRESULT __stdcall get_AlignType(CatPspIDLPartConnectorType & oAlignType); \
      virtual HRESULT __stdcall get_ClockType(CatPspIDLPartConnectorType & oClockType); \
      virtual HRESULT __stdcall get_AttributeNames(CATIAPspListOfBSTRs *& oLAttributeNames); \
      virtual HRESULT __stdcall put_AttributeNames(CATIAPspListOfBSTRs * iLAttributeNames); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspPartConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetFaceConnector(CATIAReference *& oCntr); \
virtual HRESULT __stdcall SetFaceConnector(CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType); \
virtual HRESULT __stdcall GetAlignmentConnector(CATIAReference *& oCntr); \
virtual HRESULT __stdcall SetAlignmentConnector(CATIAReference * iAlignCntr, CatPspIDLPartConnectorType ieAlignType); \
virtual HRESULT __stdcall GetOrientationConnector(CATIAReference *& oCntr); \
virtual HRESULT __stdcall SetOrientationConnector(CATIAReference * iOrientCntr, CatPspIDLPartConnectorType ieOrientation); \
virtual HRESULT __stdcall GetDatumConnector(CATIAReference *& oCntr); \
virtual HRESULT __stdcall SetDatumConnector(CATIAReference * iDatumCntr); \
virtual HRESULT __stdcall GetPosition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oPosition); \
virtual HRESULT __stdcall GetAlignmentDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection); \
virtual HRESULT __stdcall GetConnectorMathPlane(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oMathPlane); \
virtual HRESULT __stdcall GetUpDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oUpDirection); \
virtual HRESULT __stdcall get_FaceType(CatPspIDLPartConnectorType & oFaceType); \
virtual HRESULT __stdcall get_AlignType(CatPspIDLPartConnectorType & oAlignType); \
virtual HRESULT __stdcall get_ClockType(CatPspIDLPartConnectorType & oClockType); \
virtual HRESULT __stdcall get_AttributeNames(CATIAPspListOfBSTRs *& oLAttributeNames); \
virtual HRESULT __stdcall put_AttributeNames(CATIAPspListOfBSTRs * iLAttributeNames); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspPartConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetFaceConnector(CATIAReference *& oCntr) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetFaceConnector(oCntr)); \
} \
HRESULT __stdcall  ENVTIEName::SetFaceConnector(CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)SetFaceConnector(iFaceCntr,ieFaceType)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlignmentConnector(CATIAReference *& oCntr) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetAlignmentConnector(oCntr)); \
} \
HRESULT __stdcall  ENVTIEName::SetAlignmentConnector(CATIAReference * iAlignCntr, CatPspIDLPartConnectorType ieAlignType) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)SetAlignmentConnector(iAlignCntr,ieAlignType)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrientationConnector(CATIAReference *& oCntr) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetOrientationConnector(oCntr)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrientationConnector(CATIAReference * iOrientCntr, CatPspIDLPartConnectorType ieOrientation) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)SetOrientationConnector(iOrientCntr,ieOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetDatumConnector(CATIAReference *& oCntr) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetDatumConnector(oCntr)); \
} \
HRESULT __stdcall  ENVTIEName::SetDatumConnector(CATIAReference * iDatumCntr) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)SetDatumConnector(iDatumCntr)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oPosition) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetPosition(iRelAxis,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlignmentDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetAlignmentDirection(iRelAxis,oAlignmentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetConnectorMathPlane(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oMathPlane) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetConnectorMathPlane(iRelAxis,oMathPlane)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oUpDirection) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetUpDirection(iRelAxis,oUpDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_FaceType(CatPspIDLPartConnectorType & oFaceType) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_FaceType(oFaceType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AlignType(CatPspIDLPartConnectorType & oAlignType) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_AlignType(oAlignType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClockType(CatPspIDLPartConnectorType & oClockType) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_ClockType(oClockType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttributeNames(CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_AttributeNames(oLAttributeNames)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttributeNames(CATIAPspListOfBSTRs * iLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)put_AttributeNames(iLAttributeNames)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspPartConnector,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspPartConnector(classe)    TIECATIAPspPartConnector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspPartConnector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspPartConnector, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspPartConnector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspPartConnector, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspPartConnector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspPartConnector, classe) \
 \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetFaceConnector(CATIAReference *& oCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceConnector(oCntr); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::SetFaceConnector(CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFaceCntr,&ieFaceType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFaceConnector(iFaceCntr,ieFaceType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFaceCntr,&ieFaceType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetAlignmentConnector(CATIAReference *& oCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlignmentConnector(oCntr); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::SetAlignmentConnector(CATIAReference * iAlignCntr, CatPspIDLPartConnectorType ieAlignType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAlignCntr,&ieAlignType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlignmentConnector(iAlignCntr,ieAlignType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAlignCntr,&ieAlignType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetOrientationConnector(CATIAReference *& oCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientationConnector(oCntr); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::SetOrientationConnector(CATIAReference * iOrientCntr, CatPspIDLPartConnectorType ieOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOrientCntr,&ieOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientationConnector(iOrientCntr,ieOrientation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOrientCntr,&ieOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetDatumConnector(CATIAReference *& oCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDatumConnector(oCntr); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::SetDatumConnector(CATIAReference * iDatumCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDatumCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDatumConnector(iDatumCntr); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDatumCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetPosition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRelAxis,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(iRelAxis,oPosition); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRelAxis,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetAlignmentDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRelAxis,&oAlignmentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlignmentDirection(iRelAxis,oAlignmentDirection); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRelAxis,&oAlignmentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetConnectorMathPlane(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oMathPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRelAxis,&oMathPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectorMathPlane(iRelAxis,oMathPlane); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRelAxis,&oMathPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::GetUpDirection(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oUpDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRelAxis,&oUpDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpDirection(iRelAxis,oUpDirection); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRelAxis,&oUpDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::get_FaceType(CatPspIDLPartConnectorType & oFaceType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFaceType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FaceType(oFaceType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFaceType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::get_AlignType(CatPspIDLPartConnectorType & oAlignType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oAlignType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AlignType(oAlignType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oAlignType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::get_ClockType(CatPspIDLPartConnectorType & oClockType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oClockType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClockType(oClockType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oClockType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::get_AttributeNames(CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttributeNames(oLAttributeNames); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPartConnector##classe::put_AttributeNames(CATIAPspListOfBSTRs * iLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttributeNames(iLAttributeNames); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPartConnector##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPartConnector##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPartConnector##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPartConnector##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPartConnector##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspPartConnector(classe) \
 \
 \
declare_TIE_CATIAPspPartConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPartConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPartConnector,"CATIAPspPartConnector",CATIAPspPartConnector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPartConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspPartConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPartConnector##classe(classe::MetaObject(),CATIAPspPartConnector::MetaObject(),(void *)CreateTIECATIAPspPartConnector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspPartConnector(classe) \
 \
 \
declare_TIE_CATIAPspPartConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPartConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPartConnector,"CATIAPspPartConnector",CATIAPspPartConnector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPartConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspPartConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPartConnector##classe(classe::MetaObject(),CATIAPspPartConnector::MetaObject(),(void *)CreateTIECATIAPspPartConnector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspPartConnector(classe) TIE_CATIAPspPartConnector(classe)
#else
#define BOA_CATIAPspPartConnector(classe) CATImplementBOA(CATIAPspPartConnector, classe)
#endif

#endif
