#ifndef __TIE_CATIADrawingCoordDim
#define __TIE_CATIADrawingCoordDim

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingCoordDim.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingCoordDim */
#define declare_TIE_CATIADrawingCoordDim(classe) \
 \
 \
class TIECATIADrawingCoordDim##classe : public CATIADrawingCoordDim \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingCoordDim, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_x(double & oxposition); \
      virtual HRESULT __stdcall put_x(double oxposition); \
      virtual HRESULT __stdcall get_y(double & oyposition); \
      virtual HRESULT __stdcall put_y(double iyposition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall GetCoordValues(CATLONG & oType, double & oX, double & oY, double & oZ); \
      virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingCoordDim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_x(double & oxposition); \
virtual HRESULT __stdcall put_x(double oxposition); \
virtual HRESULT __stdcall get_y(double & oyposition); \
virtual HRESULT __stdcall put_y(double iyposition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall GetCoordValues(CATLONG & oType, double & oX, double & oY, double & oZ); \
virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingCoordDim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_x(double & oxposition) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double oxposition) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)put_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oyposition) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_y(oyposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iyposition) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)put_y(iyposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordValues(CATLONG & oType, double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)GetCoordValues(oType,oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_TextProperties(oTextProperties)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingCoordDim,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingCoordDim(classe)    TIECATIADrawingCoordDim##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingCoordDim(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingCoordDim, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingCoordDim, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingCoordDim, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingCoordDim, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingCoordDim, classe) \
 \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::get_x(double & oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oxposition); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::put_x(double oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(oxposition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::get_y(double & oyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oyposition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::put_y(double iyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iyposition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::GetCoordValues(CATLONG & oType, double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oType,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordValues(oType,oX,oY,oZ); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oType,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingCoordDim##classe::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oTextProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextProperties(oTextProperties); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oTextProperties); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingCoordDim##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingCoordDim##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingCoordDim##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingCoordDim##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingCoordDim##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingCoordDim(classe) \
 \
 \
declare_TIE_CATIADrawingCoordDim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingCoordDim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingCoordDim,"CATIADrawingCoordDim",CATIADrawingCoordDim::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingCoordDim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingCoordDim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingCoordDim##classe(classe::MetaObject(),CATIADrawingCoordDim::MetaObject(),(void *)CreateTIECATIADrawingCoordDim##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingCoordDim(classe) \
 \
 \
declare_TIE_CATIADrawingCoordDim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingCoordDim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingCoordDim,"CATIADrawingCoordDim",CATIADrawingCoordDim::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingCoordDim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingCoordDim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingCoordDim##classe(classe::MetaObject(),CATIADrawingCoordDim::MetaObject(),(void *)CreateTIECATIADrawingCoordDim##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingCoordDim(classe) TIE_CATIADrawingCoordDim(classe)
#else
#define BOA_CATIADrawingCoordDim(classe) CATImplementBOA(CATIADrawingCoordDim, classe)
#endif

#endif
