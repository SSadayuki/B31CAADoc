#ifndef __TIE_CATIA2DPrintArea
#define __TIE_CATIA2DPrintArea

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIA2DPrintArea.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIA2DPrintArea */
#define declare_TIE_CATIA2DPrintArea(classe) \
 \
 \
class TIECATIA2DPrintArea##classe : public CATIA2DPrintArea \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIA2DPrintArea, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetArea(double iX, double iY, double iWidth, double iHeigth); \
      virtual HRESULT __stdcall GetArea(double & oX, double & oY, double & oWidth, double & oHeigth, CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_AreaLowX(double iX); \
      virtual HRESULT __stdcall get_AreaLowX(double & oX); \
      virtual HRESULT __stdcall put_AreaLowY(double iY); \
      virtual HRESULT __stdcall get_AreaLowY(double & oY); \
      virtual HRESULT __stdcall put_AreaWidth(double iWidth); \
      virtual HRESULT __stdcall get_AreaWidth(double & oWidth); \
      virtual HRESULT __stdcall put_AreaHeigth(double iHeigth); \
      virtual HRESULT __stdcall get_AreaHeigth(double & oHeigth); \
      virtual HRESULT __stdcall put_ActivationState(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall get_ActivationState(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIA2DPrintArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetArea(double iX, double iY, double iWidth, double iHeigth); \
virtual HRESULT __stdcall GetArea(double & oX, double & oY, double & oWidth, double & oHeigth, CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_AreaLowX(double iX); \
virtual HRESULT __stdcall get_AreaLowX(double & oX); \
virtual HRESULT __stdcall put_AreaLowY(double iY); \
virtual HRESULT __stdcall get_AreaLowY(double & oY); \
virtual HRESULT __stdcall put_AreaWidth(double iWidth); \
virtual HRESULT __stdcall get_AreaWidth(double & oWidth); \
virtual HRESULT __stdcall put_AreaHeigth(double iHeigth); \
virtual HRESULT __stdcall get_AreaHeigth(double & oHeigth); \
virtual HRESULT __stdcall put_ActivationState(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall get_ActivationState(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIA2DPrintArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetArea(double iX, double iY, double iWidth, double iHeigth) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)SetArea(iX,iY,iWidth,iHeigth)); \
} \
HRESULT __stdcall  ENVTIEName::GetArea(double & oX, double & oY, double & oWidth, double & oHeigth, CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)GetArea(oX,oY,oWidth,oHeigth,oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaLowX(double iX) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)put_AreaLowX(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaLowX(double & oX) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_AreaLowX(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaLowY(double iY) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)put_AreaLowY(iY)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaLowY(double & oY) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_AreaLowY(oY)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaWidth(double iWidth) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)put_AreaWidth(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaWidth(double & oWidth) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_AreaWidth(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaHeigth(double iHeigth) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)put_AreaHeigth(iHeigth)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaHeigth(double & oHeigth) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_AreaHeigth(oHeigth)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActivationState(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)put_ActivationState(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActivationState(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_ActivationState(oActivated)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIA2DPrintArea,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIA2DPrintArea(classe)    TIECATIA2DPrintArea##classe


/* Common methods inside a TIE */
#define common_TIE_CATIA2DPrintArea(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIA2DPrintArea, classe) \
 \
 \
CATImplementTIEMethods(CATIA2DPrintArea, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIA2DPrintArea, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIA2DPrintArea, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIA2DPrintArea, classe) \
 \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::SetArea(double iX, double iY, double iWidth, double iHeigth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iX,&iY,&iWidth,&iHeigth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetArea(iX,iY,iWidth,iHeigth); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iX,&iY,&iWidth,&iHeigth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::GetArea(double & oX, double & oY, double & oWidth, double & oHeigth, CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oX,&oY,&oWidth,&oHeigth,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetArea(oX,oY,oWidth,oHeigth,oActivated); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oX,&oY,&oWidth,&oHeigth,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::put_AreaLowX(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaLowX(iX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::get_AreaLowX(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaLowX(oX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::put_AreaLowY(double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaLowY(iY); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::get_AreaLowY(double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaLowY(oY); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::put_AreaWidth(double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaWidth(iWidth); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::get_AreaWidth(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaWidth(oWidth); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::put_AreaHeigth(double iHeigth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iHeigth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaHeigth(iHeigth); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iHeigth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::get_AreaHeigth(double & oHeigth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oHeigth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaHeigth(oHeigth); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oHeigth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::put_ActivationState(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActivationState(iActivated); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DPrintArea##classe::get_ActivationState(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActivationState(oActivated); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DPrintArea##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DPrintArea##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DPrintArea##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DPrintArea##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DPrintArea##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIA2DPrintArea(classe) \
 \
 \
declare_TIE_CATIA2DPrintArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIA2DPrintArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIA2DPrintArea,"CATIA2DPrintArea",CATIA2DPrintArea::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIA2DPrintArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIA2DPrintArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIA2DPrintArea##classe(classe::MetaObject(),CATIA2DPrintArea::MetaObject(),(void *)CreateTIECATIA2DPrintArea##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIA2DPrintArea(classe) \
 \
 \
declare_TIE_CATIA2DPrintArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIA2DPrintArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIA2DPrintArea,"CATIA2DPrintArea",CATIA2DPrintArea::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIA2DPrintArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIA2DPrintArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIA2DPrintArea##classe(classe::MetaObject(),CATIA2DPrintArea::MetaObject(),(void *)CreateTIECATIA2DPrintArea##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIA2DPrintArea(classe) TIE_CATIA2DPrintArea(classe)
#else
#define BOA_CATIA2DPrintArea(classe) CATImplementBOA(CATIA2DPrintArea, classe)
#endif

#endif
