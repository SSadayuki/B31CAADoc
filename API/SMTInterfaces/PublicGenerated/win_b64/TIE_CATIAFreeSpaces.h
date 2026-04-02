#ifndef __TIE_CATIAFreeSpaces
#define __TIE_CATIAFreeSpaces

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFreeSpaces.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFreeSpaces */
#define declare_TIE_CATIAFreeSpaces(classe) \
 \
 \
class TIECATIAFreeSpaces##classe : public CATIAFreeSpaces \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFreeSpaces, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAProduct * iProductForFreeSpace, double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, CATLONG iTypeFreeSpace, double iXpt, double iYpt, double iZpt, const CATSafeArrayVariant & iHoles, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIAFreeSpace *& o0FreeSpace); \
      virtual HRESULT __stdcall AddAroundAny(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, CATIAFreeSpace *& o0FreeSpace); \
      virtual HRESULT __stdcall AddAroundProducts(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, const CATSafeArrayVariant & iReferenceSelection, CATIAFreeSpace *& onFreeSpace); \
      virtual HRESULT __stdcall AddFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace); \
      virtual HRESULT __stdcall AddInflatingFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace); \
      virtual HRESULT __stdcall AddSplitFromFile(double iX, double iY, double iZ, double iNx, double iNy, double iNz, const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFreeSpaces(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAProduct * iProductForFreeSpace, double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, CATLONG iTypeFreeSpace, double iXpt, double iYpt, double iZpt, const CATSafeArrayVariant & iHoles, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIAFreeSpace *& o0FreeSpace); \
virtual HRESULT __stdcall AddAroundAny(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, CATIAFreeSpace *& o0FreeSpace); \
virtual HRESULT __stdcall AddAroundProducts(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, const CATSafeArrayVariant & iReferenceSelection, CATIAFreeSpace *& onFreeSpace); \
virtual HRESULT __stdcall AddFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace); \
virtual HRESULT __stdcall AddInflatingFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace); \
virtual HRESULT __stdcall AddSplitFromFile(double iX, double iY, double iZ, double iNx, double iNy, double iNz, const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFreeSpaces(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAProduct * iProductForFreeSpace, double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, CATLONG iTypeFreeSpace, double iXpt, double iYpt, double iZpt, const CATSafeArrayVariant & iHoles, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIAFreeSpace *& o0FreeSpace) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)Add(iProductForFreeSpace,iAccuracy,iXmin,iXmax,iYmin,iYmax,iZmin,iZmax,iTypeFreeSpace,iXpt,iYpt,iZpt,iHoles,iShapeName,iActivatedShape,iDefaultShape,o0FreeSpace)); \
} \
HRESULT __stdcall  ENVTIEName::AddAroundAny(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, CATIAFreeSpace *& o0FreeSpace) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)AddAroundAny(iAccuracy,iXmin,iXmax,iYmin,iYmax,iZmin,iZmax,iShapeName,iTypeFreeSpace,iHoles,o0FreeSpace)); \
} \
HRESULT __stdcall  ENVTIEName::AddAroundProducts(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, const CATSafeArrayVariant & iReferenceSelection, CATIAFreeSpace *& onFreeSpace) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)AddAroundProducts(iAccuracy,iXmin,iXmax,iYmin,iYmax,iZmin,iZmax,iShapeName,iTypeFreeSpace,iHoles,iReferenceSelection,onFreeSpace)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)AddFromFile(iFileName,iShapeName,onFreeSpace)); \
} \
HRESULT __stdcall  ENVTIEName::AddInflatingFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)AddInflatingFromFile(iFileName,iShapeName,onFreeSpace)); \
} \
HRESULT __stdcall  ENVTIEName::AddSplitFromFile(double iX, double iY, double iZ, double iNx, double iNy, double iNz, const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)AddSplitFromFile(iX,iY,iZ,iNx,iNy,iNz,iFileName,iShapeName,onFreeSpace)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFreeSpaces,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFreeSpaces(classe)    TIECATIAFreeSpaces##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFreeSpaces(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFreeSpaces, classe) \
 \
 \
CATImplementTIEMethods(CATIAFreeSpaces, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFreeSpaces, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFreeSpaces, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFreeSpaces, classe) \
 \
HRESULT __stdcall  TIECATIAFreeSpaces##classe::Add(CATIAProduct * iProductForFreeSpace, double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, CATLONG iTypeFreeSpace, double iXpt, double iYpt, double iZpt, const CATSafeArrayVariant & iHoles, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIAFreeSpace *& o0FreeSpace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProductForFreeSpace,&iAccuracy,&iXmin,&iXmax,&iYmin,&iYmax,&iZmin,&iZmax,&iTypeFreeSpace,&iXpt,&iYpt,&iZpt,&iHoles,&iShapeName,&iActivatedShape,&iDefaultShape,&o0FreeSpace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProductForFreeSpace,iAccuracy,iXmin,iXmax,iYmin,iYmax,iZmin,iZmax,iTypeFreeSpace,iXpt,iYpt,iZpt,iHoles,iShapeName,iActivatedShape,iDefaultShape,o0FreeSpace); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProductForFreeSpace,&iAccuracy,&iXmin,&iXmax,&iYmin,&iYmax,&iZmin,&iZmax,&iTypeFreeSpace,&iXpt,&iYpt,&iZpt,&iHoles,&iShapeName,&iActivatedShape,&iDefaultShape,&o0FreeSpace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeSpaces##classe::AddAroundAny(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, CATIAFreeSpace *& o0FreeSpace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAccuracy,&iXmin,&iXmax,&iYmin,&iYmax,&iZmin,&iZmax,&iShapeName,&iTypeFreeSpace,&iHoles,&o0FreeSpace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAroundAny(iAccuracy,iXmin,iXmax,iYmin,iYmax,iZmin,iZmax,iShapeName,iTypeFreeSpace,iHoles,o0FreeSpace); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAccuracy,&iXmin,&iXmax,&iYmin,&iYmax,&iZmin,&iZmax,&iShapeName,&iTypeFreeSpace,&iHoles,&o0FreeSpace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeSpaces##classe::AddAroundProducts(double iAccuracy, double iXmin, double iXmax, double iYmin, double iYmax, double iZmin, double iZmax, const CATBSTR & iShapeName, CATLONG iTypeFreeSpace, const CATSafeArrayVariant & iHoles, const CATSafeArrayVariant & iReferenceSelection, CATIAFreeSpace *& onFreeSpace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAccuracy,&iXmin,&iXmax,&iYmin,&iYmax,&iZmin,&iZmax,&iShapeName,&iTypeFreeSpace,&iHoles,&iReferenceSelection,&onFreeSpace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAroundProducts(iAccuracy,iXmin,iXmax,iYmin,iYmax,iZmin,iZmax,iShapeName,iTypeFreeSpace,iHoles,iReferenceSelection,onFreeSpace); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAccuracy,&iXmin,&iXmax,&iYmin,&iYmax,&iZmin,&iZmax,&iShapeName,&iTypeFreeSpace,&iHoles,&iReferenceSelection,&onFreeSpace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeSpaces##classe::AddFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFileName,&iShapeName,&onFreeSpace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromFile(iFileName,iShapeName,onFreeSpace); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFileName,&iShapeName,&onFreeSpace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeSpaces##classe::AddInflatingFromFile(const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFileName,&iShapeName,&onFreeSpace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInflatingFromFile(iFileName,iShapeName,onFreeSpace); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFileName,&iShapeName,&onFreeSpace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeSpaces##classe::AddSplitFromFile(double iX, double iY, double iZ, double iNx, double iNy, double iNz, const CATBSTR & iFileName, const CATBSTR & iShapeName, CATIAFreeSpace *& onFreeSpace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iX,&iY,&iZ,&iNx,&iNy,&iNz,&iFileName,&iShapeName,&onFreeSpace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSplitFromFile(iX,iY,iZ,iNx,iNy,iNz,iFileName,iShapeName,onFreeSpace); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iX,&iY,&iZ,&iNx,&iNy,&iNz,&iFileName,&iShapeName,&onFreeSpace); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpaces##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpaces##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpaces##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpaces##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpaces##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpaces##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFreeSpaces(classe) \
 \
 \
declare_TIE_CATIAFreeSpaces(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeSpaces##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeSpaces,"CATIAFreeSpaces",CATIAFreeSpaces::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeSpaces(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFreeSpaces, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeSpaces##classe(classe::MetaObject(),CATIAFreeSpaces::MetaObject(),(void *)CreateTIECATIAFreeSpaces##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFreeSpaces(classe) \
 \
 \
declare_TIE_CATIAFreeSpaces(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeSpaces##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeSpaces,"CATIAFreeSpaces",CATIAFreeSpaces::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeSpaces(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFreeSpaces, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeSpaces##classe(classe::MetaObject(),CATIAFreeSpaces::MetaObject(),(void *)CreateTIECATIAFreeSpaces##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFreeSpaces(classe) TIE_CATIAFreeSpaces(classe)
#else
#define BOA_CATIAFreeSpaces(classe) CATImplementBOA(CATIAFreeSpaces, classe)
#endif

#endif
