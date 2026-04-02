#ifndef __TIE_CATISchAppComponent
#define __TIE_CATISchAppComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppComponent */
#define declare_TIE_CATISchAppComponent(classe) \
 \
 \
class TIECATISchAppComponent##classe : public CATISchAppComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppComponent, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppCreateComponentInst (IUnknown **oNewAppCompInst) ; \
      virtual HRESULT AppCreateLocalReference (CATDocument *iDocToCopyTo, IUnknown **oNewAppCompRef) ; \
      virtual HRESULT AppListGRRNames (CATICStringList **oLGRRNames) ; \
      virtual HRESULT AppGetDefaultGRRName (char **oGRRDefaultName) ; \
      virtual HRESULT AppListGRRNames2 (CATListOfCATUnicodeString &oLGRRNames) ; \
      virtual HRESULT AppGetDefaultGRRName2 (CATUnicodeString &oGRRDefaultName) ; \
      virtual HRESULT AppPostPlaceProcess (CATISchComponent *iNewCompInst, CATISchAppConnectable *iCntblConnectedTo) ; \
      virtual HRESULT AppPostSlideProcess () ; \
      virtual HRESULT AppPostFlipConnectedProcess () ; \
      virtual HRESULT AppPostFlipOnLineProcess () ; \
      virtual HRESULT AppPostFlipHorizontalProcess () ; \
      virtual HRESULT AppPostFlipVerticalProcess () ; \
      virtual HRESULT AppPostUninsertProcess (CATISchRoute *iOldAppRoute1, CATISchRoute *iOldAppRoute2, CATISchRoute *iNewAppRoute) ; \
      virtual HRESULT AppPostSwitchGraphicProcess (CATISchGRR *iGRR) ; \
      virtual HRESULT AppOKToPlaceInSpace (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToSlide (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToFlipConnected (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToFlipOnLine (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToFlipVertical (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToFlipHorizontal (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToUninsert (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToScale (CATBoolean *oBYes) ; \
};



#define ENVTIEdeclare_CATISchAppComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppCreateComponentInst (IUnknown **oNewAppCompInst) ; \
virtual HRESULT AppCreateLocalReference (CATDocument *iDocToCopyTo, IUnknown **oNewAppCompRef) ; \
virtual HRESULT AppListGRRNames (CATICStringList **oLGRRNames) ; \
virtual HRESULT AppGetDefaultGRRName (char **oGRRDefaultName) ; \
virtual HRESULT AppListGRRNames2 (CATListOfCATUnicodeString &oLGRRNames) ; \
virtual HRESULT AppGetDefaultGRRName2 (CATUnicodeString &oGRRDefaultName) ; \
virtual HRESULT AppPostPlaceProcess (CATISchComponent *iNewCompInst, CATISchAppConnectable *iCntblConnectedTo) ; \
virtual HRESULT AppPostSlideProcess () ; \
virtual HRESULT AppPostFlipConnectedProcess () ; \
virtual HRESULT AppPostFlipOnLineProcess () ; \
virtual HRESULT AppPostFlipHorizontalProcess () ; \
virtual HRESULT AppPostFlipVerticalProcess () ; \
virtual HRESULT AppPostUninsertProcess (CATISchRoute *iOldAppRoute1, CATISchRoute *iOldAppRoute2, CATISchRoute *iNewAppRoute) ; \
virtual HRESULT AppPostSwitchGraphicProcess (CATISchGRR *iGRR) ; \
virtual HRESULT AppOKToPlaceInSpace (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToSlide (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToFlipConnected (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToFlipOnLine (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToFlipVertical (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToFlipHorizontal (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToUninsert (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToScale (CATBoolean *oBYes) ; \


#define ENVTIEdefine_CATISchAppComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppCreateComponentInst (IUnknown **oNewAppCompInst)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppCreateComponentInst (oNewAppCompInst)); \
} \
HRESULT  ENVTIEName::AppCreateLocalReference (CATDocument *iDocToCopyTo, IUnknown **oNewAppCompRef)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppCreateLocalReference (iDocToCopyTo,oNewAppCompRef)); \
} \
HRESULT  ENVTIEName::AppListGRRNames (CATICStringList **oLGRRNames)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppListGRRNames (oLGRRNames)); \
} \
HRESULT  ENVTIEName::AppGetDefaultGRRName (char **oGRRDefaultName)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppGetDefaultGRRName (oGRRDefaultName)); \
} \
HRESULT  ENVTIEName::AppListGRRNames2 (CATListOfCATUnicodeString &oLGRRNames)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppListGRRNames2 (oLGRRNames)); \
} \
HRESULT  ENVTIEName::AppGetDefaultGRRName2 (CATUnicodeString &oGRRDefaultName)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppGetDefaultGRRName2 (oGRRDefaultName)); \
} \
HRESULT  ENVTIEName::AppPostPlaceProcess (CATISchComponent *iNewCompInst, CATISchAppConnectable *iCntblConnectedTo)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostPlaceProcess (iNewCompInst,iCntblConnectedTo)); \
} \
HRESULT  ENVTIEName::AppPostSlideProcess ()  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostSlideProcess ()); \
} \
HRESULT  ENVTIEName::AppPostFlipConnectedProcess ()  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipConnectedProcess ()); \
} \
HRESULT  ENVTIEName::AppPostFlipOnLineProcess ()  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipOnLineProcess ()); \
} \
HRESULT  ENVTIEName::AppPostFlipHorizontalProcess ()  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipHorizontalProcess ()); \
} \
HRESULT  ENVTIEName::AppPostFlipVerticalProcess ()  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostFlipVerticalProcess ()); \
} \
HRESULT  ENVTIEName::AppPostUninsertProcess (CATISchRoute *iOldAppRoute1, CATISchRoute *iOldAppRoute2, CATISchRoute *iNewAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostUninsertProcess (iOldAppRoute1,iOldAppRoute2,iNewAppRoute)); \
} \
HRESULT  ENVTIEName::AppPostSwitchGraphicProcess (CATISchGRR *iGRR)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppPostSwitchGraphicProcess (iGRR)); \
} \
HRESULT  ENVTIEName::AppOKToPlaceInSpace (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToPlaceInSpace (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToSlide (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToSlide (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToFlipConnected (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipConnected (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToFlipOnLine (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipOnLine (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToFlipVertical (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipVertical (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToFlipHorizontal (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToFlipHorizontal (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToUninsert (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToUninsert (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToScale (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppComponent,ENVTIETypeLetter,ENVTIELetter)AppOKToScale (oBYes)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppComponent(classe)    TIECATISchAppComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppComponent, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppComponent, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppComponent, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppComponent, classe) \
 \
HRESULT  TIECATISchAppComponent##classe::AppCreateComponentInst (IUnknown **oNewAppCompInst)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateComponentInst (oNewAppCompInst)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppCreateLocalReference (CATDocument *iDocToCopyTo, IUnknown **oNewAppCompRef)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateLocalReference (iDocToCopyTo,oNewAppCompRef)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppListGRRNames (CATICStringList **oLGRRNames)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListGRRNames (oLGRRNames)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppGetDefaultGRRName (char **oGRRDefaultName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetDefaultGRRName (oGRRDefaultName)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppListGRRNames2 (CATListOfCATUnicodeString &oLGRRNames)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListGRRNames2 (oLGRRNames)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppGetDefaultGRRName2 (CATUnicodeString &oGRRDefaultName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetDefaultGRRName2 (oGRRDefaultName)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostPlaceProcess (CATISchComponent *iNewCompInst, CATISchAppConnectable *iCntblConnectedTo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostPlaceProcess (iNewCompInst,iCntblConnectedTo)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostSlideProcess ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostSlideProcess ()); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostFlipConnectedProcess ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipConnectedProcess ()); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostFlipOnLineProcess ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipOnLineProcess ()); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostFlipHorizontalProcess ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipHorizontalProcess ()); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostFlipVerticalProcess ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostFlipVerticalProcess ()); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostUninsertProcess (CATISchRoute *iOldAppRoute1, CATISchRoute *iOldAppRoute2, CATISchRoute *iNewAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostUninsertProcess (iOldAppRoute1,iOldAppRoute2,iNewAppRoute)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppPostSwitchGraphicProcess (CATISchGRR *iGRR)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostSwitchGraphicProcess (iGRR)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToPlaceInSpace (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToPlaceInSpace (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToSlide (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToSlide (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToFlipConnected (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipConnected (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToFlipOnLine (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipOnLine (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToFlipVertical (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipVertical (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToFlipHorizontal (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToFlipHorizontal (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToUninsert (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToUninsert (oBYes)); \
} \
HRESULT  TIECATISchAppComponent##classe::AppOKToScale (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToScale (oBYes)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppComponent(classe) \
 \
 \
declare_TIE_CATISchAppComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppComponent,"CATISchAppComponent",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppComponent##classe(classe::MetaObject(),TIECATISchAppComponent##classe::MetaObject(),(void *)CreateTIECATISchAppComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppComponent(classe) \
 \
 \
declare_TIE_CATISchAppComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppComponent,"CATISchAppComponent",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppComponent##classe(classe::MetaObject(),TIECATISchAppComponent##classe::MetaObject(),(void *)CreateTIECATISchAppComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppComponent(classe) TIE_CATISchAppComponent(classe)
#else
#define BOA_CATISchAppComponent(classe) CATImplementBOA(CATISchAppComponent, classe)
#endif

#endif
