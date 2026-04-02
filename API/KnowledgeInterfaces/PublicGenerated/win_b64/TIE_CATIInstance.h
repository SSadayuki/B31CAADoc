#ifndef __TIE_CATIInstance
#define __TIE_CATIInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIInstance */
#define declare_TIE_CATIInstance(classe) \
 \
 \
class TIECATIInstance##classe : public CATIInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATIType* Type() const ; \
      virtual CATIInstance* IsSupporting( const CATIType_var& iType ) const ; \
      virtual HRESULT ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const ; \
      virtual HRESULT AddInstanceListener( const CATIInstanceListener_var &iListener ) ; \
      virtual HRESULT RemoveInstanceListener( const CATIInstanceListener_var &iListener ) ; \
      virtual HRESULT AdviseAttributeChanged( const CATUnicodeString &iKey, const CATIValue_var& iValue ) ; \
      virtual HRESULT AdviseDynamicAttributeAdded( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
      virtual HRESULT AdviseDynamicAttributeRemoved( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
      virtual HRESULT AdviseDynamicAttributeRenamed( const CATUnicodeString &iKey, const CATUnicodeString &iNewKey ) ; \
      virtual HRESULT AdviseRemoved(  ) ; \
      virtual HRESULT AdviseModification(  ) ; \
      virtual HRESULT AdviseTypeChanged( ) ; \
      virtual HRESULT SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
      virtual CATIValue* GetValue( const CATUnicodeString& iKey ) ; \
      virtual CATIInstance* GetOwner() const ; \
      virtual HRESULT AdviseSpecificEvent( const CATBaseUnknown_var &iEvent, const CATListValCATBaseUnknown_var &iList ) ; \
};



#define ENVTIEdeclare_CATIInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATIType* Type() const ; \
virtual CATIInstance* IsSupporting( const CATIType_var& iType ) const ; \
virtual HRESULT ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const ; \
virtual HRESULT AddInstanceListener( const CATIInstanceListener_var &iListener ) ; \
virtual HRESULT RemoveInstanceListener( const CATIInstanceListener_var &iListener ) ; \
virtual HRESULT AdviseAttributeChanged( const CATUnicodeString &iKey, const CATIValue_var& iValue ) ; \
virtual HRESULT AdviseDynamicAttributeAdded( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
virtual HRESULT AdviseDynamicAttributeRemoved( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
virtual HRESULT AdviseDynamicAttributeRenamed( const CATUnicodeString &iKey, const CATUnicodeString &iNewKey ) ; \
virtual HRESULT AdviseRemoved(  ) ; \
virtual HRESULT AdviseModification(  ) ; \
virtual HRESULT AdviseTypeChanged( ) ; \
virtual HRESULT SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
virtual CATIValue* GetValue( const CATUnicodeString& iKey ) ; \
virtual CATIInstance* GetOwner() const ; \
virtual HRESULT AdviseSpecificEvent( const CATBaseUnknown_var &iEvent, const CATListValCATBaseUnknown_var &iList ) ; \


#define ENVTIEdefine_CATIInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATIType*  ENVTIEName::Type() const  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)Type()); \
} \
CATIInstance*  ENVTIEName::IsSupporting( const CATIType_var& iType ) const  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)IsSupporting(iType )); \
} \
HRESULT  ENVTIEName::ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)ListSupportedTypes(iolListOfCATIType )); \
} \
HRESULT  ENVTIEName::AddInstanceListener( const CATIInstanceListener_var &iListener )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AddInstanceListener(iListener )); \
} \
HRESULT  ENVTIEName::RemoveInstanceListener( const CATIInstanceListener_var &iListener )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)RemoveInstanceListener(iListener )); \
} \
HRESULT  ENVTIEName::AdviseAttributeChanged( const CATUnicodeString &iKey, const CATIValue_var& iValue )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseAttributeChanged(iKey,iValue )); \
} \
HRESULT  ENVTIEName::AdviseDynamicAttributeAdded( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseDynamicAttributeAdded(iKey,iValue )); \
} \
HRESULT  ENVTIEName::AdviseDynamicAttributeRemoved( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseDynamicAttributeRemoved(iKey,iValue )); \
} \
HRESULT  ENVTIEName::AdviseDynamicAttributeRenamed( const CATUnicodeString &iKey, const CATUnicodeString &iNewKey )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseDynamicAttributeRenamed(iKey,iNewKey )); \
} \
HRESULT  ENVTIEName::AdviseRemoved(  )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseRemoved()); \
} \
HRESULT  ENVTIEName::AdviseModification(  )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseModification()); \
} \
HRESULT  ENVTIEName::AdviseTypeChanged( )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseTypeChanged()); \
} \
HRESULT  ENVTIEName::SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)SetValue(iKey,iValue )); \
} \
CATIValue*  ENVTIEName::GetValue( const CATUnicodeString& iKey )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)GetValue(iKey )); \
} \
CATIInstance*  ENVTIEName::GetOwner() const  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)GetOwner()); \
} \
HRESULT  ENVTIEName::AdviseSpecificEvent( const CATBaseUnknown_var &iEvent, const CATListValCATBaseUnknown_var &iList )  \
{ \
return (ENVTIECALL(CATIInstance,ENVTIETypeLetter,ENVTIELetter)AdviseSpecificEvent(iEvent,iList )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIInstance(classe)    TIECATIInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIInstance, classe) \
 \
 \
CATImplementTIEMethods(CATIInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIInstance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIInstance, classe) \
 \
CATIType*  TIECATIInstance##classe::Type() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Type()); \
} \
CATIInstance*  TIECATIInstance##classe::IsSupporting( const CATIType_var& iType ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSupporting(iType )); \
} \
HRESULT  TIECATIInstance##classe::ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListSupportedTypes(iolListOfCATIType )); \
} \
HRESULT  TIECATIInstance##classe::AddInstanceListener( const CATIInstanceListener_var &iListener )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInstanceListener(iListener )); \
} \
HRESULT  TIECATIInstance##classe::RemoveInstanceListener( const CATIInstanceListener_var &iListener )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInstanceListener(iListener )); \
} \
HRESULT  TIECATIInstance##classe::AdviseAttributeChanged( const CATUnicodeString &iKey, const CATIValue_var& iValue )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseAttributeChanged(iKey,iValue )); \
} \
HRESULT  TIECATIInstance##classe::AdviseDynamicAttributeAdded( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseDynamicAttributeAdded(iKey,iValue )); \
} \
HRESULT  TIECATIInstance##classe::AdviseDynamicAttributeRemoved( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseDynamicAttributeRemoved(iKey,iValue )); \
} \
HRESULT  TIECATIInstance##classe::AdviseDynamicAttributeRenamed( const CATUnicodeString &iKey, const CATUnicodeString &iNewKey )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseDynamicAttributeRenamed(iKey,iNewKey )); \
} \
HRESULT  TIECATIInstance##classe::AdviseRemoved(  )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseRemoved()); \
} \
HRESULT  TIECATIInstance##classe::AdviseModification(  )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseModification()); \
} \
HRESULT  TIECATIInstance##classe::AdviseTypeChanged( )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseTypeChanged()); \
} \
HRESULT  TIECATIInstance##classe::SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValue(iKey,iValue )); \
} \
CATIValue*  TIECATIInstance##classe::GetValue( const CATUnicodeString& iKey )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iKey )); \
} \
CATIInstance*  TIECATIInstance##classe::GetOwner() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOwner()); \
} \
HRESULT  TIECATIInstance##classe::AdviseSpecificEvent( const CATBaseUnknown_var &iEvent, const CATListValCATBaseUnknown_var &iList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdviseSpecificEvent(iEvent,iList )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIInstance(classe) \
 \
 \
declare_TIE_CATIInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIInstance,"CATIInstance",CATIInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIInstance##classe(classe::MetaObject(),CATIInstance::MetaObject(),(void *)CreateTIECATIInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIInstance(classe) \
 \
 \
declare_TIE_CATIInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIInstance,"CATIInstance",CATIInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIInstance##classe(classe::MetaObject(),CATIInstance::MetaObject(),(void *)CreateTIECATIInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIInstance(classe) TIE_CATIInstance(classe)
#else
#define BOA_CATIInstance(classe) CATImplementBOA(CATIInstance, classe)
#endif

#endif
