#ifndef __TIE_CATICciCompositesMaterial
#define __TIE_CATICciCompositesMaterial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciCompositesMaterial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciCompositesMaterial */
#define declare_TIE_CATICciCompositesMaterial(classe) \
 \
 \
class TIECATICciCompositesMaterial##classe : public CATICciCompositesMaterial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciCompositesMaterial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT HasCompositeDomain(CATBoolean& oHasDomain) ; \
      virtual HRESULT CreateCompositesDomain() ; \
      virtual HRESULT DefineCompositesProperties(int iMaterialType, double iUncuredThickness, double iCuredThickness, double iMaxDeformation, double iLimitDeformation, double iFabricWidth, double iSurfacicWeigth, double iMassCost) ; \
      virtual HRESULT GetCompositesProperties(int &oMaterialType, double &oUncuredThickness, double &ooCuredThickness, double &oMaxDeformation, double &oLimitDeformation, double &oFabricWidth, double &oSurfacicWeigth, double &oMassCost) ; \
      virtual HRESULT DefineNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames) ; \
      virtual HRESULT GetNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames) ; \
      virtual HRESULT GetMaterialType(int& oMaterialType) ; \
      virtual HRESULT SetMaterialType(int iMaterialType) ; \
      virtual HRESULT GetUncuredThickness( double& oUncuredThickness) ; \
      virtual HRESULT SetUncuredThickness( double iUncuredThickness) ; \
      virtual HRESULT GetCuredThickness( double& oCuredThickness) ; \
      virtual HRESULT SetCuredThickness( double iCuredThickness) ; \
      virtual HRESULT GetMaxDeformation( double& oMaxDeformation) ; \
      virtual HRESULT SetMaxDeformation( double iMaxDeformation) ; \
      virtual HRESULT GetLimitDeformation( double& oLimitDeformation) ; \
      virtual HRESULT SetLimitDeformation( double iLimitDeformation) ; \
      virtual HRESULT GetFabricWidth( double& oFabricWidth) ; \
      virtual HRESULT SetFabricWidth( double iFabricWidth) ; \
      virtual HRESULT GetSurfacicWeigth( double& oSurfacicWeigth) ; \
      virtual HRESULT SetSurfacicWeigth( double iSurfacicWeigth) ; \
      virtual HRESULT GetMassCost(double& oMassCost) ; \
      virtual HRESULT SetMassCost( double iMassCost) ; \
};



#define ENVTIEdeclare_CATICciCompositesMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT HasCompositeDomain(CATBoolean& oHasDomain) ; \
virtual HRESULT CreateCompositesDomain() ; \
virtual HRESULT DefineCompositesProperties(int iMaterialType, double iUncuredThickness, double iCuredThickness, double iMaxDeformation, double iLimitDeformation, double iFabricWidth, double iSurfacicWeigth, double iMassCost) ; \
virtual HRESULT GetCompositesProperties(int &oMaterialType, double &oUncuredThickness, double &ooCuredThickness, double &oMaxDeformation, double &oLimitDeformation, double &oFabricWidth, double &oSurfacicWeigth, double &oMassCost) ; \
virtual HRESULT DefineNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames) ; \
virtual HRESULT GetNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames) ; \
virtual HRESULT GetMaterialType(int& oMaterialType) ; \
virtual HRESULT SetMaterialType(int iMaterialType) ; \
virtual HRESULT GetUncuredThickness( double& oUncuredThickness) ; \
virtual HRESULT SetUncuredThickness( double iUncuredThickness) ; \
virtual HRESULT GetCuredThickness( double& oCuredThickness) ; \
virtual HRESULT SetCuredThickness( double iCuredThickness) ; \
virtual HRESULT GetMaxDeformation( double& oMaxDeformation) ; \
virtual HRESULT SetMaxDeformation( double iMaxDeformation) ; \
virtual HRESULT GetLimitDeformation( double& oLimitDeformation) ; \
virtual HRESULT SetLimitDeformation( double iLimitDeformation) ; \
virtual HRESULT GetFabricWidth( double& oFabricWidth) ; \
virtual HRESULT SetFabricWidth( double iFabricWidth) ; \
virtual HRESULT GetSurfacicWeigth( double& oSurfacicWeigth) ; \
virtual HRESULT SetSurfacicWeigth( double iSurfacicWeigth) ; \
virtual HRESULT GetMassCost(double& oMassCost) ; \
virtual HRESULT SetMassCost( double iMassCost) ; \


#define ENVTIEdefine_CATICciCompositesMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::HasCompositeDomain(CATBoolean& oHasDomain)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)HasCompositeDomain(oHasDomain)); \
} \
HRESULT  ENVTIEName::CreateCompositesDomain()  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)CreateCompositesDomain()); \
} \
HRESULT  ENVTIEName::DefineCompositesProperties(int iMaterialType, double iUncuredThickness, double iCuredThickness, double iMaxDeformation, double iLimitDeformation, double iFabricWidth, double iSurfacicWeigth, double iMassCost)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)DefineCompositesProperties(iMaterialType,iUncuredThickness,iCuredThickness,iMaxDeformation,iLimitDeformation,iFabricWidth,iSurfacicWeigth,iMassCost)); \
} \
HRESULT  ENVTIEName::GetCompositesProperties(int &oMaterialType, double &oUncuredThickness, double &ooCuredThickness, double &oMaxDeformation, double &oLimitDeformation, double &oFabricWidth, double &oSurfacicWeigth, double &oMassCost)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetCompositesProperties(oMaterialType,oUncuredThickness,ooCuredThickness,oMaxDeformation,oLimitDeformation,oFabricWidth,oSurfacicWeigth,oMassCost)); \
} \
HRESULT  ENVTIEName::DefineNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)DefineNCFLayers(MaterialListForNCFLayers,ListOfDirections,ListOfDirNames)); \
} \
HRESULT  ENVTIEName::GetNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetNCFLayers(MaterialListForNCFLayers,ListOfDirections,ListOfDirNames)); \
} \
HRESULT  ENVTIEName::GetMaterialType(int& oMaterialType)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetMaterialType(oMaterialType)); \
} \
HRESULT  ENVTIEName::SetMaterialType(int iMaterialType)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetMaterialType(iMaterialType)); \
} \
HRESULT  ENVTIEName::GetUncuredThickness( double& oUncuredThickness)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetUncuredThickness(oUncuredThickness)); \
} \
HRESULT  ENVTIEName::SetUncuredThickness( double iUncuredThickness)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetUncuredThickness(iUncuredThickness)); \
} \
HRESULT  ENVTIEName::GetCuredThickness( double& oCuredThickness)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetCuredThickness(oCuredThickness)); \
} \
HRESULT  ENVTIEName::SetCuredThickness( double iCuredThickness)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetCuredThickness(iCuredThickness)); \
} \
HRESULT  ENVTIEName::GetMaxDeformation( double& oMaxDeformation)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetMaxDeformation(oMaxDeformation)); \
} \
HRESULT  ENVTIEName::SetMaxDeformation( double iMaxDeformation)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetMaxDeformation(iMaxDeformation)); \
} \
HRESULT  ENVTIEName::GetLimitDeformation( double& oLimitDeformation)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetLimitDeformation(oLimitDeformation)); \
} \
HRESULT  ENVTIEName::SetLimitDeformation( double iLimitDeformation)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetLimitDeformation(iLimitDeformation)); \
} \
HRESULT  ENVTIEName::GetFabricWidth( double& oFabricWidth)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetFabricWidth(oFabricWidth)); \
} \
HRESULT  ENVTIEName::SetFabricWidth( double iFabricWidth)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetFabricWidth(iFabricWidth)); \
} \
HRESULT  ENVTIEName::GetSurfacicWeigth( double& oSurfacicWeigth)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetSurfacicWeigth(oSurfacicWeigth)); \
} \
HRESULT  ENVTIEName::SetSurfacicWeigth( double iSurfacicWeigth)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetSurfacicWeigth(iSurfacicWeigth)); \
} \
HRESULT  ENVTIEName::GetMassCost(double& oMassCost)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetMassCost(oMassCost)); \
} \
HRESULT  ENVTIEName::SetMassCost( double iMassCost)  \
{ \
return (ENVTIECALL(CATICciCompositesMaterial,ENVTIETypeLetter,ENVTIELetter)SetMassCost(iMassCost)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciCompositesMaterial(classe)    TIECATICciCompositesMaterial##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciCompositesMaterial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciCompositesMaterial, classe) \
 \
 \
CATImplementTIEMethods(CATICciCompositesMaterial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciCompositesMaterial, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciCompositesMaterial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciCompositesMaterial, classe) \
 \
HRESULT  TIECATICciCompositesMaterial##classe::HasCompositeDomain(CATBoolean& oHasDomain)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasCompositeDomain(oHasDomain)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::CreateCompositesDomain()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCompositesDomain()); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::DefineCompositesProperties(int iMaterialType, double iUncuredThickness, double iCuredThickness, double iMaxDeformation, double iLimitDeformation, double iFabricWidth, double iSurfacicWeigth, double iMassCost)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineCompositesProperties(iMaterialType,iUncuredThickness,iCuredThickness,iMaxDeformation,iLimitDeformation,iFabricWidth,iSurfacicWeigth,iMassCost)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetCompositesProperties(int &oMaterialType, double &oUncuredThickness, double &ooCuredThickness, double &oMaxDeformation, double &oLimitDeformation, double &oFabricWidth, double &oSurfacicWeigth, double &oMassCost)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompositesProperties(oMaterialType,oUncuredThickness,ooCuredThickness,oMaxDeformation,oLimitDeformation,oFabricWidth,oSurfacicWeigth,oMassCost)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::DefineNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineNCFLayers(MaterialListForNCFLayers,ListOfDirections,ListOfDirNames)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetNCFLayers(CATListValCATISpecObject_var& MaterialListForNCFLayers, CATListOfDouble& ListOfDirections, CATListOfCATUnicodeString& ListOfDirNames)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNCFLayers(MaterialListForNCFLayers,ListOfDirections,ListOfDirNames)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetMaterialType(int& oMaterialType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialType(oMaterialType)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetMaterialType(int iMaterialType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaterialType(iMaterialType)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetUncuredThickness( double& oUncuredThickness)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUncuredThickness(oUncuredThickness)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetUncuredThickness( double iUncuredThickness)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUncuredThickness(iUncuredThickness)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetCuredThickness( double& oCuredThickness)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCuredThickness(oCuredThickness)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetCuredThickness( double iCuredThickness)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCuredThickness(iCuredThickness)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetMaxDeformation( double& oMaxDeformation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxDeformation(oMaxDeformation)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetMaxDeformation( double iMaxDeformation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxDeformation(iMaxDeformation)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetLimitDeformation( double& oLimitDeformation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitDeformation(oLimitDeformation)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetLimitDeformation( double iLimitDeformation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitDeformation(iLimitDeformation)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetFabricWidth( double& oFabricWidth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFabricWidth(oFabricWidth)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetFabricWidth( double iFabricWidth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFabricWidth(iFabricWidth)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetSurfacicWeigth( double& oSurfacicWeigth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfacicWeigth(oSurfacicWeigth)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetSurfacicWeigth( double iSurfacicWeigth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSurfacicWeigth(iSurfacicWeigth)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::GetMassCost(double& oMassCost)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMassCost(oMassCost)); \
} \
HRESULT  TIECATICciCompositesMaterial##classe::SetMassCost( double iMassCost)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMassCost(iMassCost)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciCompositesMaterial(classe) \
 \
 \
declare_TIE_CATICciCompositesMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesMaterial,"CATICciCompositesMaterial",CATICciCompositesMaterial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciCompositesMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesMaterial##classe(classe::MetaObject(),CATICciCompositesMaterial::MetaObject(),(void *)CreateTIECATICciCompositesMaterial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciCompositesMaterial(classe) \
 \
 \
declare_TIE_CATICciCompositesMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesMaterial,"CATICciCompositesMaterial",CATICciCompositesMaterial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciCompositesMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesMaterial##classe(classe::MetaObject(),CATICciCompositesMaterial::MetaObject(),(void *)CreateTIECATICciCompositesMaterial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciCompositesMaterial(classe) TIE_CATICciCompositesMaterial(classe)
#else
#define BOA_CATICciCompositesMaterial(classe) CATImplementBOA(CATICciCompositesMaterial, classe)
#endif

#endif
