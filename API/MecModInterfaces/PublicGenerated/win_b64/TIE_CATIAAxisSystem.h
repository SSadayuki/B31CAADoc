#ifndef __TIE_CATIAAxisSystem
#define __TIE_CATIAAxisSystem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAxisSystem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAxisSystem */
#define declare_TIE_CATIAAxisSystem(classe) \
 \
 \
class TIECATIAAxisSystem##classe : public CATIAAxisSystem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAxisSystem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATAxisSystemMainType & oType); \
      virtual HRESULT __stdcall put_Type(CATAxisSystemMainType iType); \
      virtual HRESULT __stdcall get_IsCurrent(CAT_VARIANT_BOOL & oIsCurrent); \
      virtual HRESULT __stdcall put_IsCurrent(CAT_VARIANT_BOOL iIsCurrent); \
      virtual HRESULT __stdcall get_OriginType(CATAxisSystemOriginType & oOriginType); \
      virtual HRESULT __stdcall put_OriginType(CATAxisSystemOriginType iOriginType); \
      virtual HRESULT __stdcall get_OriginPoint(CATIAReference *& oOriginPoint); \
      virtual HRESULT __stdcall put_OriginPoint(CATIAReference * iOriginPoint); \
      virtual HRESULT __stdcall get_XAxisType(CATAxisSystemAxisType & oAxisType); \
      virtual HRESULT __stdcall put_XAxisType(CATAxisSystemAxisType iAxisType); \
      virtual HRESULT __stdcall get_YAxisType(CATAxisSystemAxisType & oAxisType); \
      virtual HRESULT __stdcall put_YAxisType(CATAxisSystemAxisType iAxisType); \
      virtual HRESULT __stdcall get_ZAxisType(CATAxisSystemAxisType & oAxisType); \
      virtual HRESULT __stdcall put_ZAxisType(CATAxisSystemAxisType iAxisType); \
      virtual HRESULT __stdcall get_XAxisDirection(CATIAReference *& oAxisDirection); \
      virtual HRESULT __stdcall put_XAxisDirection(CATIAReference * iAxisDirection); \
      virtual HRESULT __stdcall get_YAxisDirection(CATIAReference *& oAxisDirection); \
      virtual HRESULT __stdcall put_YAxisDirection(CATIAReference * iAxisDirection); \
      virtual HRESULT __stdcall get_ZAxisDirection(CATIAReference *& oAxisDirection); \
      virtual HRESULT __stdcall put_ZAxisDirection(CATIAReference * iAxisDirection); \
      virtual HRESULT __stdcall get_AxisRotationReference(CATIAReference *& oAxisRotationReference); \
      virtual HRESULT __stdcall put_AxisRotationReference(CATIAReference * iAxisRotationReference); \
      virtual HRESULT __stdcall get_AxisRotationAngle(CATIAAngle *& oAxisRotationAngle); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
      virtual HRESULT __stdcall GetVectors(CATSafeArrayVariant & oVectorX, CATSafeArrayVariant & oVectorY); \
      virtual HRESULT __stdcall PutVectors(const CATSafeArrayVariant & iVectorX, const CATSafeArrayVariant & iVectorY); \
      virtual HRESULT __stdcall GetXAxis(CATSafeArrayVariant & oXAxis); \
      virtual HRESULT __stdcall PutXAxis(const CATSafeArrayVariant & iXAxis); \
      virtual HRESULT __stdcall GetYAxis(CATSafeArrayVariant & oYAxis); \
      virtual HRESULT __stdcall PutYAxis(const CATSafeArrayVariant & iYAxis); \
      virtual HRESULT __stdcall GetZAxis(CATSafeArrayVariant & oZAxis); \
      virtual HRESULT __stdcall PutZAxis(const CATSafeArrayVariant & iZAxis); \
      virtual HRESULT __stdcall GetEulerAngles(CATIAAngle *& oFirstAngle, CATIAAngle *& oSecondAngle, CATIAAngle *& ThirdAngle); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAxisSystem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATAxisSystemMainType & oType); \
virtual HRESULT __stdcall put_Type(CATAxisSystemMainType iType); \
virtual HRESULT __stdcall get_IsCurrent(CAT_VARIANT_BOOL & oIsCurrent); \
virtual HRESULT __stdcall put_IsCurrent(CAT_VARIANT_BOOL iIsCurrent); \
virtual HRESULT __stdcall get_OriginType(CATAxisSystemOriginType & oOriginType); \
virtual HRESULT __stdcall put_OriginType(CATAxisSystemOriginType iOriginType); \
virtual HRESULT __stdcall get_OriginPoint(CATIAReference *& oOriginPoint); \
virtual HRESULT __stdcall put_OriginPoint(CATIAReference * iOriginPoint); \
virtual HRESULT __stdcall get_XAxisType(CATAxisSystemAxisType & oAxisType); \
virtual HRESULT __stdcall put_XAxisType(CATAxisSystemAxisType iAxisType); \
virtual HRESULT __stdcall get_YAxisType(CATAxisSystemAxisType & oAxisType); \
virtual HRESULT __stdcall put_YAxisType(CATAxisSystemAxisType iAxisType); \
virtual HRESULT __stdcall get_ZAxisType(CATAxisSystemAxisType & oAxisType); \
virtual HRESULT __stdcall put_ZAxisType(CATAxisSystemAxisType iAxisType); \
virtual HRESULT __stdcall get_XAxisDirection(CATIAReference *& oAxisDirection); \
virtual HRESULT __stdcall put_XAxisDirection(CATIAReference * iAxisDirection); \
virtual HRESULT __stdcall get_YAxisDirection(CATIAReference *& oAxisDirection); \
virtual HRESULT __stdcall put_YAxisDirection(CATIAReference * iAxisDirection); \
virtual HRESULT __stdcall get_ZAxisDirection(CATIAReference *& oAxisDirection); \
virtual HRESULT __stdcall put_ZAxisDirection(CATIAReference * iAxisDirection); \
virtual HRESULT __stdcall get_AxisRotationReference(CATIAReference *& oAxisRotationReference); \
virtual HRESULT __stdcall put_AxisRotationReference(CATIAReference * iAxisRotationReference); \
virtual HRESULT __stdcall get_AxisRotationAngle(CATIAAngle *& oAxisRotationAngle); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
virtual HRESULT __stdcall GetVectors(CATSafeArrayVariant & oVectorX, CATSafeArrayVariant & oVectorY); \
virtual HRESULT __stdcall PutVectors(const CATSafeArrayVariant & iVectorX, const CATSafeArrayVariant & iVectorY); \
virtual HRESULT __stdcall GetXAxis(CATSafeArrayVariant & oXAxis); \
virtual HRESULT __stdcall PutXAxis(const CATSafeArrayVariant & iXAxis); \
virtual HRESULT __stdcall GetYAxis(CATSafeArrayVariant & oYAxis); \
virtual HRESULT __stdcall PutYAxis(const CATSafeArrayVariant & iYAxis); \
virtual HRESULT __stdcall GetZAxis(CATSafeArrayVariant & oZAxis); \
virtual HRESULT __stdcall PutZAxis(const CATSafeArrayVariant & iZAxis); \
virtual HRESULT __stdcall GetEulerAngles(CATIAAngle *& oFirstAngle, CATIAAngle *& oSecondAngle, CATIAAngle *& ThirdAngle); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAxisSystem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATAxisSystemMainType & oType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CATAxisSystemMainType iType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsCurrent(CAT_VARIANT_BOOL & oIsCurrent) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_IsCurrent(oIsCurrent)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsCurrent(CAT_VARIANT_BOOL iIsCurrent) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_IsCurrent(iIsCurrent)); \
} \
HRESULT __stdcall  ENVTIEName::get_OriginType(CATAxisSystemOriginType & oOriginType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_OriginType(oOriginType)); \
} \
HRESULT __stdcall  ENVTIEName::put_OriginType(CATAxisSystemOriginType iOriginType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_OriginType(iOriginType)); \
} \
HRESULT __stdcall  ENVTIEName::get_OriginPoint(CATIAReference *& oOriginPoint) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_OriginPoint(oOriginPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_OriginPoint(CATIAReference * iOriginPoint) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_OriginPoint(iOriginPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_XAxisType(CATAxisSystemAxisType & oAxisType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_XAxisType(oAxisType)); \
} \
HRESULT __stdcall  ENVTIEName::put_XAxisType(CATAxisSystemAxisType iAxisType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_XAxisType(iAxisType)); \
} \
HRESULT __stdcall  ENVTIEName::get_YAxisType(CATAxisSystemAxisType & oAxisType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_YAxisType(oAxisType)); \
} \
HRESULT __stdcall  ENVTIEName::put_YAxisType(CATAxisSystemAxisType iAxisType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_YAxisType(iAxisType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ZAxisType(CATAxisSystemAxisType & oAxisType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_ZAxisType(oAxisType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ZAxisType(CATAxisSystemAxisType iAxisType) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_ZAxisType(iAxisType)); \
} \
HRESULT __stdcall  ENVTIEName::get_XAxisDirection(CATIAReference *& oAxisDirection) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_XAxisDirection(oAxisDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_XAxisDirection(CATIAReference * iAxisDirection) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_XAxisDirection(iAxisDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_YAxisDirection(CATIAReference *& oAxisDirection) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_YAxisDirection(oAxisDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_YAxisDirection(CATIAReference * iAxisDirection) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_YAxisDirection(iAxisDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_ZAxisDirection(CATIAReference *& oAxisDirection) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_ZAxisDirection(oAxisDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_ZAxisDirection(CATIAReference * iAxisDirection) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_ZAxisDirection(iAxisDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisRotationReference(CATIAReference *& oAxisRotationReference) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_AxisRotationReference(oAxisRotationReference)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisRotationReference(CATIAReference * iAxisRotationReference) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_AxisRotationReference(iAxisRotationReference)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisRotationAngle(CATIAAngle *& oAxisRotationAngle) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_AxisRotationAngle(oAxisRotationAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)PutOrigin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetVectors(CATSafeArrayVariant & oVectorX, CATSafeArrayVariant & oVectorY) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetVectors(oVectorX,oVectorY)); \
} \
HRESULT __stdcall  ENVTIEName::PutVectors(const CATSafeArrayVariant & iVectorX, const CATSafeArrayVariant & iVectorY) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)PutVectors(iVectorX,iVectorY)); \
} \
HRESULT __stdcall  ENVTIEName::GetXAxis(CATSafeArrayVariant & oXAxis) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetXAxis(oXAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutXAxis(const CATSafeArrayVariant & iXAxis) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)PutXAxis(iXAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetYAxis(CATSafeArrayVariant & oYAxis) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetYAxis(oYAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutYAxis(const CATSafeArrayVariant & iYAxis) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)PutYAxis(iYAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetZAxis(CATSafeArrayVariant & oZAxis) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetZAxis(oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutZAxis(const CATSafeArrayVariant & iZAxis) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)PutZAxis(iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetEulerAngles(CATIAAngle *& oFirstAngle, CATIAAngle *& oSecondAngle, CATIAAngle *& ThirdAngle) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetEulerAngles(oFirstAngle,oSecondAngle,ThirdAngle)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAxisSystem,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAxisSystem(classe)    TIECATIAAxisSystem##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAxisSystem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAxisSystem, classe) \
 \
 \
CATImplementTIEMethods(CATIAAxisSystem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAxisSystem, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAxisSystem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAxisSystem, classe) \
 \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_Type(CATAxisSystemMainType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_Type(CATAxisSystemMainType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_IsCurrent(CAT_VARIANT_BOOL & oIsCurrent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oIsCurrent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsCurrent(oIsCurrent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oIsCurrent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_IsCurrent(CAT_VARIANT_BOOL iIsCurrent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIsCurrent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsCurrent(iIsCurrent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIsCurrent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_OriginType(CATAxisSystemOriginType & oOriginType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOriginType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginType(oOriginType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOriginType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_OriginType(CATAxisSystemOriginType iOriginType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOriginType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OriginType(iOriginType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOriginType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_OriginPoint(CATIAReference *& oOriginPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOriginPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginPoint(oOriginPoint); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOriginPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_OriginPoint(CATIAReference * iOriginPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOriginPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OriginPoint(iOriginPoint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOriginPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_XAxisType(CATAxisSystemAxisType & oAxisType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAxisType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_XAxisType(oAxisType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAxisType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_XAxisType(CATAxisSystemAxisType iAxisType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAxisType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_XAxisType(iAxisType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAxisType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_YAxisType(CATAxisSystemAxisType & oAxisType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oAxisType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_YAxisType(oAxisType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oAxisType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_YAxisType(CATAxisSystemAxisType iAxisType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAxisType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_YAxisType(iAxisType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAxisType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_ZAxisType(CATAxisSystemAxisType & oAxisType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAxisType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ZAxisType(oAxisType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAxisType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_ZAxisType(CATAxisSystemAxisType iAxisType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAxisType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ZAxisType(iAxisType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAxisType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_XAxisDirection(CATIAReference *& oAxisDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oAxisDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_XAxisDirection(oAxisDirection); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oAxisDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_XAxisDirection(CATIAReference * iAxisDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAxisDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_XAxisDirection(iAxisDirection); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAxisDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_YAxisDirection(CATIAReference *& oAxisDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAxisDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_YAxisDirection(oAxisDirection); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAxisDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_YAxisDirection(CATIAReference * iAxisDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAxisDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_YAxisDirection(iAxisDirection); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAxisDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_ZAxisDirection(CATIAReference *& oAxisDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oAxisDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ZAxisDirection(oAxisDirection); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oAxisDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_ZAxisDirection(CATIAReference * iAxisDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAxisDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ZAxisDirection(iAxisDirection); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAxisDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_AxisRotationReference(CATIAReference *& oAxisRotationReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oAxisRotationReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisRotationReference(oAxisRotationReference); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oAxisRotationReference); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::put_AxisRotationReference(CATIAReference * iAxisRotationReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iAxisRotationReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisRotationReference(iAxisRotationReference); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iAxisRotationReference); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::get_AxisRotationAngle(CATIAAngle *& oAxisRotationAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oAxisRotationAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisRotationAngle(oAxisRotationAngle); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oAxisRotationAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(iOrigin); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::GetVectors(CATSafeArrayVariant & oVectorX, CATSafeArrayVariant & oVectorY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oVectorX,&oVectorY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVectors(oVectorX,oVectorY); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oVectorX,&oVectorY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::PutVectors(const CATSafeArrayVariant & iVectorX, const CATSafeArrayVariant & iVectorY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iVectorX,&iVectorY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutVectors(iVectorX,iVectorY); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iVectorX,&iVectorY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::GetXAxis(CATSafeArrayVariant & oXAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oXAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetXAxis(oXAxis); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oXAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::PutXAxis(const CATSafeArrayVariant & iXAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iXAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutXAxis(iXAxis); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iXAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::GetYAxis(CATSafeArrayVariant & oYAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oYAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetYAxis(oYAxis); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oYAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::PutYAxis(const CATSafeArrayVariant & iYAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iYAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutYAxis(iYAxis); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iYAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::GetZAxis(CATSafeArrayVariant & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetZAxis(oZAxis); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::PutZAxis(const CATSafeArrayVariant & iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutZAxis(iZAxis); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxisSystem##classe::GetEulerAngles(CATIAAngle *& oFirstAngle, CATIAAngle *& oSecondAngle, CATIAAngle *& ThirdAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oFirstAngle,&oSecondAngle,&ThirdAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEulerAngles(oFirstAngle,oSecondAngle,ThirdAngle); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oFirstAngle,&oSecondAngle,&ThirdAngle); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisSystem##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisSystem##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisSystem##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisSystem##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisSystem##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAxisSystem(classe) \
 \
 \
declare_TIE_CATIAAxisSystem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAxisSystem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAxisSystem,"CATIAAxisSystem",CATIAAxisSystem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAxisSystem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAxisSystem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAxisSystem##classe(classe::MetaObject(),CATIAAxisSystem::MetaObject(),(void *)CreateTIECATIAAxisSystem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAxisSystem(classe) \
 \
 \
declare_TIE_CATIAAxisSystem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAxisSystem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAxisSystem,"CATIAAxisSystem",CATIAAxisSystem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAxisSystem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAxisSystem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAxisSystem##classe(classe::MetaObject(),CATIAAxisSystem::MetaObject(),(void *)CreateTIECATIAAxisSystem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAxisSystem(classe) TIE_CATIAAxisSystem(classe)
#else
#define BOA_CATIAAxisSystem(classe) CATImplementBOA(CATIAAxisSystem, classe)
#endif

#endif
