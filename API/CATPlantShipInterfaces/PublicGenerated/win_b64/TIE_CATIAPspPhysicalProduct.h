#ifndef __TIE_CATIAPspPhysicalProduct
#define __TIE_CATIAPspPhysicalProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspPhysicalProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspPhysicalProduct */
#define declare_TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
class TIECATIAPspPhysicalProduct##classe : public CATIAPspPhysicalProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspPhysicalProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Connectors(CATIAPspListOfObjects *& oLConnectors); \
      virtual HRESULT __stdcall AddConnector(const CATBSTR & iClassFilter, CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType, CATIAReference * iAlignmentCntr, CatPspIDLPartConnectorType ieAlignType, CATIAReference * iClockCntr, CatPspIDLPartConnectorType ieClockType, CATIAPspPartConnector *& oPartCntr); \
      virtual HRESULT __stdcall RemoveConnector(CATIAPspPartConnector * iCntrToRemove); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspPhysicalProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Connectors(CATIAPspListOfObjects *& oLConnectors); \
virtual HRESULT __stdcall AddConnector(const CATBSTR & iClassFilter, CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType, CATIAReference * iAlignmentCntr, CatPspIDLPartConnectorType ieAlignType, CATIAReference * iClockCntr, CatPspIDLPartConnectorType ieClockType, CATIAPspPartConnector *& oPartCntr); \
virtual HRESULT __stdcall RemoveConnector(CATIAPspPartConnector * iCntrToRemove); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspPhysicalProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Connectors(CATIAPspListOfObjects *& oLConnectors) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)get_Connectors(oLConnectors)); \
} \
HRESULT __stdcall  ENVTIEName::AddConnector(const CATBSTR & iClassFilter, CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType, CATIAReference * iAlignmentCntr, CatPspIDLPartConnectorType ieAlignType, CATIAReference * iClockCntr, CatPspIDLPartConnectorType ieClockType, CATIAPspPartConnector *& oPartCntr) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)AddConnector(iClassFilter,iFaceCntr,ieFaceType,iAlignmentCntr,ieAlignType,iClockCntr,ieClockType,oPartCntr)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveConnector(CATIAPspPartConnector * iCntrToRemove) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)RemoveConnector(iCntrToRemove)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspPhysicalProduct,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspPhysicalProduct(classe)    TIECATIAPspPhysicalProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspPhysicalProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspPhysicalProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspPhysicalProduct, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspPhysicalProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspPhysicalProduct, classe) \
 \
HRESULT __stdcall  TIECATIAPspPhysicalProduct##classe::get_Connectors(CATIAPspListOfObjects *& oLConnectors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLConnectors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Connectors(oLConnectors); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLConnectors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPhysicalProduct##classe::AddConnector(const CATBSTR & iClassFilter, CATIAReference * iFaceCntr, CatPspIDLPartConnectorType ieFaceType, CATIAReference * iAlignmentCntr, CatPspIDLPartConnectorType ieAlignType, CATIAReference * iClockCntr, CatPspIDLPartConnectorType ieClockType, CATIAPspPartConnector *& oPartCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iClassFilter,&iFaceCntr,&ieFaceType,&iAlignmentCntr,&ieAlignType,&iClockCntr,&ieClockType,&oPartCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConnector(iClassFilter,iFaceCntr,ieFaceType,iAlignmentCntr,ieAlignType,iClockCntr,ieClockType,oPartCntr); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iClassFilter,&iFaceCntr,&ieFaceType,&iAlignmentCntr,&ieAlignType,&iClockCntr,&ieClockType,&oPartCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPhysicalProduct##classe::RemoveConnector(CATIAPspPartConnector * iCntrToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCntrToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveConnector(iCntrToRemove); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCntrToRemove); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysicalProduct##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysicalProduct##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysicalProduct##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysicalProduct##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysicalProduct##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
declare_TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPhysicalProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPhysicalProduct,"CATIAPspPhysicalProduct",CATIAPspPhysicalProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspPhysicalProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPhysicalProduct##classe(classe::MetaObject(),CATIAPspPhysicalProduct::MetaObject(),(void *)CreateTIECATIAPspPhysicalProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspPhysicalProduct(classe) \
 \
 \
declare_TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPhysicalProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPhysicalProduct,"CATIAPspPhysicalProduct",CATIAPspPhysicalProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPhysicalProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspPhysicalProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPhysicalProduct##classe(classe::MetaObject(),CATIAPspPhysicalProduct::MetaObject(),(void *)CreateTIECATIAPspPhysicalProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspPhysicalProduct(classe) TIE_CATIAPspPhysicalProduct(classe)
#else
#define BOA_CATIAPspPhysicalProduct(classe) CATImplementBOA(CATIAPspPhysicalProduct, classe)
#endif

#endif
