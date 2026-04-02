#ifndef __TIE_CATIDftGenSymbolicRep
#define __TIE_CATIDftGenSymbolicRep

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSymbolicRep.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSymbolicRep */
#define declare_TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
class TIECATIDftGenSymbolicRep##classe : public CATIDftGenSymbolicRep \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSymbolicRep, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Compare (CATIDftGenSymbolicRep * iSR, DftGenSRCompareStatus * oStatus) const ; \
      virtual HRESULT SetUpdatable(DftGenUpdatableStatus iStatus) ; \
      virtual HRESULT IsUpdatable(DftGenUpdatableStatus * oStatus) const ; \
      virtual HRESULT CanBeConnectedTo2DGeometry(CATIDftGenView * iView, DftGenConnectionStatus * oStatus) ; \
      virtual HRESULT Modify(CATIDftGenSymbolicRep * iSR) ; \
      virtual HRESULT Store(CATIUnknownList * iViewlist) ; \
      virtual HRESULT SetApplication(const CATString * iString) ; \
      virtual HRESULT GetApplication(CATString * oString) const ; \
      virtual HRESULT SetTransfo(const CATMathTransformation * iTransfo) ; \
      virtual HRESULT GetTransfo(CATMathTransformation ** oTransfo) const ; \
      virtual HRESULT SetProduct(IUnknown * iProduct) ; \
      virtual HRESULT GetProduct(const IID & iIID, IUnknown ** oProduct) const ; \
      virtual HRESULT SetFeature(CATILinkableObject* iLinkable) ; \
      virtual HRESULT GetFeature(CATILinkableObject** oLinkable) ; \
      virtual HRESULT SetContext(CATDftGenContext * iContext) ; \
      virtual HRESULT GetContext(CATDftGenContext ** oContext) const ; \
      virtual HRESULT DefineOperatorSensitivity(CATBoolean OperatorSensitive=TRUE, CATDftListOfOperatorType* ListOfOperators = 0) ; \
      virtual HRESULT DefineVisualProperties(CATVisPropertiesValues& iVisProperties) ; \
      virtual HRESULT SetApplicativeKey(CATUnicodeString* iKey) const ; \
};



#define ENVTIEdeclare_CATIDftGenSymbolicRep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Compare (CATIDftGenSymbolicRep * iSR, DftGenSRCompareStatus * oStatus) const ; \
virtual HRESULT SetUpdatable(DftGenUpdatableStatus iStatus) ; \
virtual HRESULT IsUpdatable(DftGenUpdatableStatus * oStatus) const ; \
virtual HRESULT CanBeConnectedTo2DGeometry(CATIDftGenView * iView, DftGenConnectionStatus * oStatus) ; \
virtual HRESULT Modify(CATIDftGenSymbolicRep * iSR) ; \
virtual HRESULT Store(CATIUnknownList * iViewlist) ; \
virtual HRESULT SetApplication(const CATString * iString) ; \
virtual HRESULT GetApplication(CATString * oString) const ; \
virtual HRESULT SetTransfo(const CATMathTransformation * iTransfo) ; \
virtual HRESULT GetTransfo(CATMathTransformation ** oTransfo) const ; \
virtual HRESULT SetProduct(IUnknown * iProduct) ; \
virtual HRESULT GetProduct(const IID & iIID, IUnknown ** oProduct) const ; \
virtual HRESULT SetFeature(CATILinkableObject* iLinkable) ; \
virtual HRESULT GetFeature(CATILinkableObject** oLinkable) ; \
virtual HRESULT SetContext(CATDftGenContext * iContext) ; \
virtual HRESULT GetContext(CATDftGenContext ** oContext) const ; \
virtual HRESULT DefineOperatorSensitivity(CATBoolean OperatorSensitive=TRUE, CATDftListOfOperatorType* ListOfOperators = 0) ; \
virtual HRESULT DefineVisualProperties(CATVisPropertiesValues& iVisProperties) ; \
virtual HRESULT SetApplicativeKey(CATUnicodeString* iKey) const ; \


#define ENVTIEdefine_CATIDftGenSymbolicRep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Compare (CATIDftGenSymbolicRep * iSR, DftGenSRCompareStatus * oStatus) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)Compare (iSR,oStatus)); \
} \
HRESULT  ENVTIEName::SetUpdatable(DftGenUpdatableStatus iStatus)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetUpdatable(iStatus)); \
} \
HRESULT  ENVTIEName::IsUpdatable(DftGenUpdatableStatus * oStatus) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)IsUpdatable(oStatus)); \
} \
HRESULT  ENVTIEName::CanBeConnectedTo2DGeometry(CATIDftGenView * iView, DftGenConnectionStatus * oStatus)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)CanBeConnectedTo2DGeometry(iView,oStatus)); \
} \
HRESULT  ENVTIEName::Modify(CATIDftGenSymbolicRep * iSR)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)Modify(iSR)); \
} \
HRESULT  ENVTIEName::Store(CATIUnknownList * iViewlist)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)Store(iViewlist)); \
} \
HRESULT  ENVTIEName::SetApplication(const CATString * iString)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetApplication(iString)); \
} \
HRESULT  ENVTIEName::GetApplication(CATString * oString) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)GetApplication(oString)); \
} \
HRESULT  ENVTIEName::SetTransfo(const CATMathTransformation * iTransfo)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetTransfo(iTransfo)); \
} \
HRESULT  ENVTIEName::GetTransfo(CATMathTransformation ** oTransfo) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)GetTransfo(oTransfo)); \
} \
HRESULT  ENVTIEName::SetProduct(IUnknown * iProduct)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetProduct(iProduct)); \
} \
HRESULT  ENVTIEName::GetProduct(const IID & iIID, IUnknown ** oProduct) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)GetProduct(iIID,oProduct)); \
} \
HRESULT  ENVTIEName::SetFeature(CATILinkableObject* iLinkable)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetFeature(iLinkable)); \
} \
HRESULT  ENVTIEName::GetFeature(CATILinkableObject** oLinkable)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)GetFeature(oLinkable)); \
} \
HRESULT  ENVTIEName::SetContext(CATDftGenContext * iContext)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetContext(iContext)); \
} \
HRESULT  ENVTIEName::GetContext(CATDftGenContext ** oContext) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)GetContext(oContext)); \
} \
HRESULT  ENVTIEName::DefineOperatorSensitivity(CATBoolean OperatorSensitive, CATDftListOfOperatorType* ListOfOperators )  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)DefineOperatorSensitivity(OperatorSensitive,ListOfOperators )); \
} \
HRESULT  ENVTIEName::DefineVisualProperties(CATVisPropertiesValues& iVisProperties)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)DefineVisualProperties(iVisProperties)); \
} \
HRESULT  ENVTIEName::SetApplicativeKey(CATUnicodeString* iKey) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRep,ENVTIETypeLetter,ENVTIELetter)SetApplicativeKey(iKey)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSymbolicRep(classe)    TIECATIDftGenSymbolicRep##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSymbolicRep, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSymbolicRep, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSymbolicRep, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSymbolicRep, classe) \
 \
HRESULT  TIECATIDftGenSymbolicRep##classe::Compare (CATIDftGenSymbolicRep * iSR, DftGenSRCompareStatus * oStatus) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compare (iSR,oStatus)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetUpdatable(DftGenUpdatableStatus iStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdatable(iStatus)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::IsUpdatable(DftGenUpdatableStatus * oStatus) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUpdatable(oStatus)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::CanBeConnectedTo2DGeometry(CATIDftGenView * iView, DftGenConnectionStatus * oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBeConnectedTo2DGeometry(iView,oStatus)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::Modify(CATIDftGenSymbolicRep * iSR)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Modify(iSR)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::Store(CATIUnknownList * iViewlist)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Store(iViewlist)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetApplication(const CATString * iString)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetApplication(iString)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::GetApplication(CATString * oString) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetApplication(oString)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetTransfo(const CATMathTransformation * iTransfo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTransfo(iTransfo)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::GetTransfo(CATMathTransformation ** oTransfo) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransfo(oTransfo)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetProduct(IUnknown * iProduct)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProduct(iProduct)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::GetProduct(const IID & iIID, IUnknown ** oProduct) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProduct(iIID,oProduct)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetFeature(CATILinkableObject* iLinkable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeature(iLinkable)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::GetFeature(CATILinkableObject** oLinkable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeature(oLinkable)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetContext(CATDftGenContext * iContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContext(iContext)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::GetContext(CATDftGenContext ** oContext) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContext(oContext)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::DefineOperatorSensitivity(CATBoolean OperatorSensitive, CATDftListOfOperatorType* ListOfOperators )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineOperatorSensitivity(OperatorSensitive,ListOfOperators )); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::DefineVisualProperties(CATVisPropertiesValues& iVisProperties)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineVisualProperties(iVisProperties)); \
} \
HRESULT  TIECATIDftGenSymbolicRep##classe::SetApplicativeKey(CATUnicodeString* iKey) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetApplicativeKey(iKey)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
declare_TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSymbolicRep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSymbolicRep,"CATIDftGenSymbolicRep",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSymbolicRep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSymbolicRep##classe(classe::MetaObject(),TIECATIDftGenSymbolicRep##classe::MetaObject(),(void *)CreateTIECATIDftGenSymbolicRep##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSymbolicRep(classe) \
 \
 \
declare_TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSymbolicRep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSymbolicRep,"CATIDftGenSymbolicRep",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSymbolicRep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSymbolicRep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSymbolicRep##classe(classe::MetaObject(),TIECATIDftGenSymbolicRep##classe::MetaObject(),(void *)CreateTIECATIDftGenSymbolicRep##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSymbolicRep(classe) TIE_CATIDftGenSymbolicRep(classe)
#else
#define BOA_CATIDftGenSymbolicRep(classe) CATImplementBOA(CATIDftGenSymbolicRep, classe)
#endif

#endif
