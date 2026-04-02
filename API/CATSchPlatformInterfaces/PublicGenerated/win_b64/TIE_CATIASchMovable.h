#ifndef __TIE_CATIASchMovable
#define __TIE_CATIASchMovable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchMovable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchMovable */
#define declare_TIE_CATIASchMovable(classe) \
 \
 \
class TIECATIASchMovable##classe : public CATIASchMovable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchMovable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Transform(const CATSafeArrayVariant & iDb6TransMatrix); \
      virtual HRESULT __stdcall Translate(const CATSafeArrayVariant & iDb2Vector); \
      virtual HRESULT __stdcall Rotate(double iDb1RotationAngleInRadian); \
      virtual HRESULT __stdcall Scale(double iDb1ScaleFactor); \
      virtual HRESULT __stdcall ScaleSelectedObjects(CATIASchListOfObjects * iLCntblToScale, double iDb1ScaleFactor); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchMovable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Transform(const CATSafeArrayVariant & iDb6TransMatrix); \
virtual HRESULT __stdcall Translate(const CATSafeArrayVariant & iDb2Vector); \
virtual HRESULT __stdcall Rotate(double iDb1RotationAngleInRadian); \
virtual HRESULT __stdcall Scale(double iDb1ScaleFactor); \
virtual HRESULT __stdcall ScaleSelectedObjects(CATIASchListOfObjects * iLCntblToScale, double iDb1ScaleFactor); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchMovable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Transform(const CATSafeArrayVariant & iDb6TransMatrix) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)Transform(iDb6TransMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::Translate(const CATSafeArrayVariant & iDb2Vector) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)Translate(iDb2Vector)); \
} \
HRESULT __stdcall  ENVTIEName::Rotate(double iDb1RotationAngleInRadian) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)Rotate(iDb1RotationAngleInRadian)); \
} \
HRESULT __stdcall  ENVTIEName::Scale(double iDb1ScaleFactor) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)Scale(iDb1ScaleFactor)); \
} \
HRESULT __stdcall  ENVTIEName::ScaleSelectedObjects(CATIASchListOfObjects * iLCntblToScale, double iDb1ScaleFactor) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)ScaleSelectedObjects(iLCntblToScale,iDb1ScaleFactor)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchMovable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchMovable(classe)    TIECATIASchMovable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchMovable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchMovable, classe) \
 \
 \
CATImplementTIEMethods(CATIASchMovable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchMovable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchMovable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchMovable, classe) \
 \
HRESULT __stdcall  TIECATIASchMovable##classe::Transform(const CATSafeArrayVariant & iDb6TransMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDb6TransMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Transform(iDb6TransMatrix); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDb6TransMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchMovable##classe::Translate(const CATSafeArrayVariant & iDb2Vector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDb2Vector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Translate(iDb2Vector); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDb2Vector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchMovable##classe::Rotate(double iDb1RotationAngleInRadian) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iDb1RotationAngleInRadian); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rotate(iDb1RotationAngleInRadian); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iDb1RotationAngleInRadian); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchMovable##classe::Scale(double iDb1ScaleFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDb1ScaleFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Scale(iDb1ScaleFactor); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDb1ScaleFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchMovable##classe::ScaleSelectedObjects(CATIASchListOfObjects * iLCntblToScale, double iDb1ScaleFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLCntblToScale,&iDb1ScaleFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ScaleSelectedObjects(iLCntblToScale,iDb1ScaleFactor); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLCntblToScale,&iDb1ScaleFactor); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchMovable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchMovable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchMovable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchMovable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchMovable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchMovable(classe) \
 \
 \
declare_TIE_CATIASchMovable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchMovable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchMovable,"CATIASchMovable",CATIASchMovable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchMovable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchMovable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchMovable##classe(classe::MetaObject(),CATIASchMovable::MetaObject(),(void *)CreateTIECATIASchMovable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchMovable(classe) \
 \
 \
declare_TIE_CATIASchMovable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchMovable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchMovable,"CATIASchMovable",CATIASchMovable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchMovable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchMovable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchMovable##classe(classe::MetaObject(),CATIASchMovable::MetaObject(),(void *)CreateTIECATIASchMovable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchMovable(classe) TIE_CATIASchMovable(classe)
#else
#define BOA_CATIASchMovable(classe) CATImplementBOA(CATIASchMovable, classe)
#endif

#endif
