#ifndef __TIE_CATIDftGenSRFactory
#define __TIE_CATIDftGenSRFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSRFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSRFactory */
#define declare_TIE_CATIDftGenSRFactory(classe) \
 \
 \
class TIECATIDftGenSRFactory##classe : public CATIDftGenSRFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSRFactory, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetCorresponding2DGeometry(CATGeometry * iGeom, CATIDftGenView * iView, const IID & iIID, CATIUnknownList ** oPCurveList) const ; \
      virtual HRESULT GetGeoFactory(const IID & iIID, void ** oFactory) const ; \
      virtual HRESULT GetPlane(CATIDftGenView * iView, CATPlane ** oPlane) ; \
      virtual HRESULT Create3DCurvesWithProvSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateTechProdSpecSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateThreadSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateThreadSRTop(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateThreadSRTopFromTR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateDressSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateTPSViewSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateAxisLineSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateGeoReplTextSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateSymbolSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateCenterLineSR(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateAxisLineSRWithProv(const IID & iIID, IUnknown ** oSR) const ; \
      virtual HRESULT CreateAnnotAndDressUpSRDuplicator(const IID & iIID, IUnknown ** oSR) const ; \
};



#define ENVTIEdeclare_CATIDftGenSRFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetCorresponding2DGeometry(CATGeometry * iGeom, CATIDftGenView * iView, const IID & iIID, CATIUnknownList ** oPCurveList) const ; \
virtual HRESULT GetGeoFactory(const IID & iIID, void ** oFactory) const ; \
virtual HRESULT GetPlane(CATIDftGenView * iView, CATPlane ** oPlane) ; \
virtual HRESULT Create3DCurvesWithProvSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateTechProdSpecSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateThreadSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateThreadSRTop(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateThreadSRTopFromTR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateDressSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateTPSViewSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateAxisLineSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateGeoReplTextSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateSymbolSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateCenterLineSR(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateAxisLineSRWithProv(const IID & iIID, IUnknown ** oSR) const ; \
virtual HRESULT CreateAnnotAndDressUpSRDuplicator(const IID & iIID, IUnknown ** oSR) const ; \


#define ENVTIEdefine_CATIDftGenSRFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetCorresponding2DGeometry(CATGeometry * iGeom, CATIDftGenView * iView, const IID & iIID, CATIUnknownList ** oPCurveList) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)GetCorresponding2DGeometry(iGeom,iView,iIID,oPCurveList)); \
} \
HRESULT  ENVTIEName::GetGeoFactory(const IID & iIID, void ** oFactory) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)GetGeoFactory(iIID,oFactory)); \
} \
HRESULT  ENVTIEName::GetPlane(CATIDftGenView * iView, CATPlane ** oPlane)  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)GetPlane(iView,oPlane)); \
} \
HRESULT  ENVTIEName::Create3DCurvesWithProvSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)Create3DCurvesWithProvSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateTechProdSpecSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateTechProdSpecSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateThreadSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateThreadSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateThreadSRTop(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateThreadSRTop(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateThreadSRTopFromTR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateThreadSRTopFromTR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateDressSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateDressSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateTPSViewSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateTPSViewSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateAxisLineSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateAxisLineSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateGeoReplTextSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateGeoReplTextSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateSymbolSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateSymbolSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateCenterLineSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateCenterLineSR(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateAxisLineSRWithProv(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateAxisLineSRWithProv(iIID,oSR)); \
} \
HRESULT  ENVTIEName::CreateAnnotAndDressUpSRDuplicator(const IID & iIID, IUnknown ** oSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSRFactory,ENVTIETypeLetter,ENVTIELetter)CreateAnnotAndDressUpSRDuplicator(iIID,oSR)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSRFactory(classe)    TIECATIDftGenSRFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSRFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSRFactory, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSRFactory, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSRFactory, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSRFactory, classe) \
 \
HRESULT  TIECATIDftGenSRFactory##classe::GetCorresponding2DGeometry(CATGeometry * iGeom, CATIDftGenView * iView, const IID & iIID, CATIUnknownList ** oPCurveList) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCorresponding2DGeometry(iGeom,iView,iIID,oPCurveList)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::GetGeoFactory(const IID & iIID, void ** oFactory) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeoFactory(iIID,oFactory)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::GetPlane(CATIDftGenView * iView, CATPlane ** oPlane)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlane(iView,oPlane)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::Create3DCurvesWithProvSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create3DCurvesWithProvSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateTechProdSpecSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTechProdSpecSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateThreadSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateThreadSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateThreadSRTop(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateThreadSRTop(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateThreadSRTopFromTR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateThreadSRTopFromTR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateDressSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDressSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateTPSViewSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTPSViewSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateAxisLineSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAxisLineSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateGeoReplTextSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGeoReplTextSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateSymbolSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSymbolSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateCenterLineSR(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCenterLineSR(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateAxisLineSRWithProv(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAxisLineSRWithProv(iIID,oSR)); \
} \
HRESULT  TIECATIDftGenSRFactory##classe::CreateAnnotAndDressUpSRDuplicator(const IID & iIID, IUnknown ** oSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAnnotAndDressUpSRDuplicator(iIID,oSR)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSRFactory(classe) \
 \
 \
declare_TIE_CATIDftGenSRFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRFactory,"CATIDftGenSRFactory",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSRFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRFactory##classe(classe::MetaObject(),TIECATIDftGenSRFactory##classe::MetaObject(),(void *)CreateTIECATIDftGenSRFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSRFactory(classe) \
 \
 \
declare_TIE_CATIDftGenSRFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRFactory,"CATIDftGenSRFactory",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSRFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRFactory##classe(classe::MetaObject(),TIECATIDftGenSRFactory##classe::MetaObject(),(void *)CreateTIECATIDftGenSRFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSRFactory(classe) TIE_CATIDftGenSRFactory(classe)
#else
#define BOA_CATIDftGenSRFactory(classe) CATImplementBOA(CATIDftGenSRFactory, classe)
#endif

#endif
