#ifndef __TIE_CATISamImageOwner
#define __TIE_CATISamImageOwner

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamImageOwner.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamImageOwner */
#define declare_TIE_CATISamImageOwner(classe) \
 \
 \
class TIECATISamImageOwner##classe : public CATISamImageOwner \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamImageOwner, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ConnectImages (CATListValCATBaseUnknown_var& iImages) ; \
      virtual HRESULT GetConnectedImages(CATListValCATBaseUnknown_var& oImages) ; \
      virtual HRESULT DisconnectImages(CATListValCATBaseUnknown_var& iImages) ; \
      virtual HRESULT DisconnectAllImages() ; \
      virtual HRESULT GetDeformationAvailability ( CATBoolean  & oIsAvailable) const ; \
};



#define ENVTIEdeclare_CATISamImageOwner(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ConnectImages (CATListValCATBaseUnknown_var& iImages) ; \
virtual HRESULT GetConnectedImages(CATListValCATBaseUnknown_var& oImages) ; \
virtual HRESULT DisconnectImages(CATListValCATBaseUnknown_var& iImages) ; \
virtual HRESULT DisconnectAllImages() ; \
virtual HRESULT GetDeformationAvailability ( CATBoolean  & oIsAvailable) const ; \


#define ENVTIEdefine_CATISamImageOwner(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ConnectImages (CATListValCATBaseUnknown_var& iImages)  \
{ \
return (ENVTIECALL(CATISamImageOwner,ENVTIETypeLetter,ENVTIELetter)ConnectImages (iImages)); \
} \
HRESULT  ENVTIEName::GetConnectedImages(CATListValCATBaseUnknown_var& oImages)  \
{ \
return (ENVTIECALL(CATISamImageOwner,ENVTIETypeLetter,ENVTIELetter)GetConnectedImages(oImages)); \
} \
HRESULT  ENVTIEName::DisconnectImages(CATListValCATBaseUnknown_var& iImages)  \
{ \
return (ENVTIECALL(CATISamImageOwner,ENVTIETypeLetter,ENVTIELetter)DisconnectImages(iImages)); \
} \
HRESULT  ENVTIEName::DisconnectAllImages()  \
{ \
return (ENVTIECALL(CATISamImageOwner,ENVTIETypeLetter,ENVTIELetter)DisconnectAllImages()); \
} \
HRESULT  ENVTIEName::GetDeformationAvailability ( CATBoolean  & oIsAvailable) const  \
{ \
return (ENVTIECALL(CATISamImageOwner,ENVTIETypeLetter,ENVTIELetter)GetDeformationAvailability (oIsAvailable)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamImageOwner(classe)    TIECATISamImageOwner##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamImageOwner(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamImageOwner, classe) \
 \
 \
CATImplementTIEMethods(CATISamImageOwner, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamImageOwner, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamImageOwner, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamImageOwner, classe) \
 \
HRESULT  TIECATISamImageOwner##classe::ConnectImages (CATListValCATBaseUnknown_var& iImages)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectImages (iImages)); \
} \
HRESULT  TIECATISamImageOwner##classe::GetConnectedImages(CATListValCATBaseUnknown_var& oImages)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectedImages(oImages)); \
} \
HRESULT  TIECATISamImageOwner##classe::DisconnectImages(CATListValCATBaseUnknown_var& iImages)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DisconnectImages(iImages)); \
} \
HRESULT  TIECATISamImageOwner##classe::DisconnectAllImages()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DisconnectAllImages()); \
} \
HRESULT  TIECATISamImageOwner##classe::GetDeformationAvailability ( CATBoolean  & oIsAvailable) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDeformationAvailability (oIsAvailable)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamImageOwner(classe) \
 \
 \
declare_TIE_CATISamImageOwner(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageOwner##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageOwner,"CATISamImageOwner",CATISamImageOwner::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageOwner(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamImageOwner, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageOwner##classe(classe::MetaObject(),CATISamImageOwner::MetaObject(),(void *)CreateTIECATISamImageOwner##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamImageOwner(classe) \
 \
 \
declare_TIE_CATISamImageOwner(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageOwner##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageOwner,"CATISamImageOwner",CATISamImageOwner::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageOwner(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamImageOwner, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageOwner##classe(classe::MetaObject(),CATISamImageOwner::MetaObject(),(void *)CreateTIECATISamImageOwner##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamImageOwner(classe) TIE_CATISamImageOwner(classe)
#else
#define BOA_CATISamImageOwner(classe) CATImplementBOA(CATISamImageOwner, classe)
#endif

#endif
