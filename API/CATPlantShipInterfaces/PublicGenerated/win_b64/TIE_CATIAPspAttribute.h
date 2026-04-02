#ifndef __TIE_CATIAPspAttribute
#define __TIE_CATIAPspAttribute

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspAttribute.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspAttribute */
#define declare_TIE_CATIAPspAttribute(classe) \
 \
 \
class TIECATIAPspAttribute##classe : public CATIAPspAttribute \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspAttribute, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ListAttributes(CatPspIDLDomainID iDomainID, CATIAPspListOfBSTRs *& oLAttributeNames); \
      virtual HRESULT __stdcall IsDiscrete(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & obStatus, short & oDiscreteType); \
      virtual HRESULT __stdcall GetType(const CATBSTR & iAttributeName, CatPspIDLAttrDataType & oType); \
      virtual HRESULT __stdcall GetParameter(const CATBSTR & iAttributeName, CATIAParameter *& oParm); \
      virtual HRESULT __stdcall GetMultiStringAttributeValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLMultiStringValues); \
      virtual HRESULT __stdcall ListStringDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteValues); \
      virtual HRESULT __stdcall ListDoubleDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfDoubles *& oLDBDiscreteValues); \
      virtual HRESULT __stdcall ListIntegerDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfLongs *& oLIntDiscreteValues); \
      virtual HRESULT __stdcall ListEncodedDecodedDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteEncodedValues, CATIAPspListOfBSTRs *& oLDiscreteDecodedValue); \
      virtual HRESULT __stdcall IsDerived(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & oBIsDerived); \
      virtual HRESULT __stdcall ResetDerivedAttr(const CATBSTR & iAttributeName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspAttribute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ListAttributes(CatPspIDLDomainID iDomainID, CATIAPspListOfBSTRs *& oLAttributeNames); \
virtual HRESULT __stdcall IsDiscrete(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & obStatus, short & oDiscreteType); \
virtual HRESULT __stdcall GetType(const CATBSTR & iAttributeName, CatPspIDLAttrDataType & oType); \
virtual HRESULT __stdcall GetParameter(const CATBSTR & iAttributeName, CATIAParameter *& oParm); \
virtual HRESULT __stdcall GetMultiStringAttributeValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLMultiStringValues); \
virtual HRESULT __stdcall ListStringDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteValues); \
virtual HRESULT __stdcall ListDoubleDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfDoubles *& oLDBDiscreteValues); \
virtual HRESULT __stdcall ListIntegerDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfLongs *& oLIntDiscreteValues); \
virtual HRESULT __stdcall ListEncodedDecodedDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteEncodedValues, CATIAPspListOfBSTRs *& oLDiscreteDecodedValue); \
virtual HRESULT __stdcall IsDerived(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & oBIsDerived); \
virtual HRESULT __stdcall ResetDerivedAttr(const CATBSTR & iAttributeName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspAttribute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ListAttributes(CatPspIDLDomainID iDomainID, CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)ListAttributes(iDomainID,oLAttributeNames)); \
} \
HRESULT __stdcall  ENVTIEName::IsDiscrete(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & obStatus, short & oDiscreteType) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)IsDiscrete(iAttributeName,obStatus,oDiscreteType)); \
} \
HRESULT __stdcall  ENVTIEName::GetType(const CATBSTR & iAttributeName, CatPspIDLAttrDataType & oType) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)GetType(iAttributeName,oType)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameter(const CATBSTR & iAttributeName, CATIAParameter *& oParm) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)GetParameter(iAttributeName,oParm)); \
} \
HRESULT __stdcall  ENVTIEName::GetMultiStringAttributeValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLMultiStringValues) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)GetMultiStringAttributeValues(iAttributeName,oLMultiStringValues)); \
} \
HRESULT __stdcall  ENVTIEName::ListStringDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteValues) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)ListStringDiscreteValues(iAttributeName,oLDiscreteValues)); \
} \
HRESULT __stdcall  ENVTIEName::ListDoubleDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfDoubles *& oLDBDiscreteValues) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)ListDoubleDiscreteValues(iAttributeName,oLDBDiscreteValues)); \
} \
HRESULT __stdcall  ENVTIEName::ListIntegerDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfLongs *& oLIntDiscreteValues) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)ListIntegerDiscreteValues(iAttributeName,oLIntDiscreteValues)); \
} \
HRESULT __stdcall  ENVTIEName::ListEncodedDecodedDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteEncodedValues, CATIAPspListOfBSTRs *& oLDiscreteDecodedValue) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)ListEncodedDecodedDiscreteValues(iAttributeName,oLDiscreteEncodedValues,oLDiscreteDecodedValue)); \
} \
HRESULT __stdcall  ENVTIEName::IsDerived(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & oBIsDerived) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)IsDerived(iAttributeName,oBIsDerived)); \
} \
HRESULT __stdcall  ENVTIEName::ResetDerivedAttr(const CATBSTR & iAttributeName) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)ResetDerivedAttr(iAttributeName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspAttribute,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspAttribute(classe)    TIECATIAPspAttribute##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspAttribute(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspAttribute, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspAttribute, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspAttribute, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspAttribute, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspAttribute, classe) \
 \
HRESULT __stdcall  TIECATIAPspAttribute##classe::ListAttributes(CatPspIDLDomainID iDomainID, CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDomainID,&oLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAttributes(iDomainID,oLAttributeNames); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDomainID,&oLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::IsDiscrete(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & obStatus, short & oDiscreteType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAttributeName,&obStatus,&oDiscreteType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsDiscrete(iAttributeName,obStatus,oDiscreteType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAttributeName,&obStatus,&oDiscreteType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::GetType(const CATBSTR & iAttributeName, CatPspIDLAttrDataType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAttributeName,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(iAttributeName,oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAttributeName,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::GetParameter(const CATBSTR & iAttributeName, CATIAParameter *& oParm) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAttributeName,&oParm); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameter(iAttributeName,oParm); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAttributeName,&oParm); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::GetMultiStringAttributeValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLMultiStringValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAttributeName,&oLMultiStringValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMultiStringAttributeValues(iAttributeName,oLMultiStringValues); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAttributeName,&oLMultiStringValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::ListStringDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAttributeName,&oLDiscreteValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListStringDiscreteValues(iAttributeName,oLDiscreteValues); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAttributeName,&oLDiscreteValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::ListDoubleDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfDoubles *& oLDBDiscreteValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iAttributeName,&oLDBDiscreteValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDoubleDiscreteValues(iAttributeName,oLDBDiscreteValues); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iAttributeName,&oLDBDiscreteValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::ListIntegerDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfLongs *& oLIntDiscreteValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAttributeName,&oLIntDiscreteValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListIntegerDiscreteValues(iAttributeName,oLIntDiscreteValues); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAttributeName,&oLIntDiscreteValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::ListEncodedDecodedDiscreteValues(const CATBSTR & iAttributeName, CATIAPspListOfBSTRs *& oLDiscreteEncodedValues, CATIAPspListOfBSTRs *& oLDiscreteDecodedValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iAttributeName,&oLDiscreteEncodedValues,&oLDiscreteDecodedValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListEncodedDecodedDiscreteValues(iAttributeName,oLDiscreteEncodedValues,oLDiscreteDecodedValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iAttributeName,&oLDiscreteEncodedValues,&oLDiscreteDecodedValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::IsDerived(const CATBSTR & iAttributeName, CAT_VARIANT_BOOL & oBIsDerived) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAttributeName,&oBIsDerived); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsDerived(iAttributeName,oBIsDerived); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAttributeName,&oBIsDerived); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAttribute##classe::ResetDerivedAttr(const CATBSTR & iAttributeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iAttributeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetDerivedAttr(iAttributeName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iAttributeName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttribute##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttribute##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttribute##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttribute##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttribute##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspAttribute(classe) \
 \
 \
declare_TIE_CATIAPspAttribute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspAttribute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspAttribute,"CATIAPspAttribute",CATIAPspAttribute::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspAttribute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspAttribute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspAttribute##classe(classe::MetaObject(),CATIAPspAttribute::MetaObject(),(void *)CreateTIECATIAPspAttribute##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspAttribute(classe) \
 \
 \
declare_TIE_CATIAPspAttribute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspAttribute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspAttribute,"CATIAPspAttribute",CATIAPspAttribute::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspAttribute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspAttribute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspAttribute##classe(classe::MetaObject(),CATIAPspAttribute::MetaObject(),(void *)CreateTIECATIAPspAttribute##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspAttribute(classe) TIE_CATIAPspAttribute(classe)
#else
#define BOA_CATIAPspAttribute(classe) CATImplementBOA(CATIAPspAttribute, classe)
#endif

#endif
