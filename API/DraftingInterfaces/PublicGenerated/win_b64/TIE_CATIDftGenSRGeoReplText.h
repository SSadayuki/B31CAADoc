#ifndef __TIE_CATIDftGenSRGeoReplText
#define __TIE_CATIDftGenSRGeoReplText

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSRGeoReplText.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSRGeoReplText */
#define declare_TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
class TIECATIDftGenSRGeoReplText##classe : public CATIDftGenSRGeoReplText \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSRGeoReplText, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetString (const CATUnicodeString & iString) ; \
      virtual HRESULT GetString (CATUnicodeString * oString) ; \
      virtual HRESULT InsertCKEParm (CATICkeParm * iCKEParm, int iPos) ; \
      virtual HRESULT GetCKEParm (CATICkeParm ** oCKEParm, int * oPos) ; \
      virtual HRESULT SetGeometry (CATGeometry * iGeom) ; \
      virtual HRESULT GetGeometry (CATGeometry ** oGeom) ; \
      virtual HRESULT SetOrientation (int iType, double iAngle) ; \
      virtual HRESULT GetOrientation (int* oType, double * oAngle) ; \
      virtual HRESULT SetAnchorPoint (const CATMathPoint2D & iPoint) ; \
      virtual HRESULT SetAnchorPoint (const CATMathPoint & iPoint) ; \
      virtual HRESULT GetAnchorPoint (CATMathPoint2D * oPoint) ; \
      virtual HRESULT GetAnchorPoint (CATMathPoint * oPoint) ; \
      virtual HRESULT SetLeaderFlag (int iFlag) ; \
      virtual HRESULT SetLeaderTarget (const CATMathPoint2D & iPoint) ; \
      virtual HRESULT SetLeaderTarget (const CATMathPoint & iPoint) ; \
      virtual HRESULT GetLeaderTarget (CATMathPoint2D * oPoint) ; \
      virtual HRESULT GetLeaderTarget (CATMathPoint * oPoint) ; \
      virtual HRESULT SetLeaderSymbol (int iNumber) ; \
      virtual HRESULT GetLeaderSymbol (int* oNumber) ; \
      virtual HRESULT GetMirroring( CATDrwMirroringDefinition & oMirroring ) ; \
      virtual HRESULT SetMirroring( const CATDrwMirroringDefinition & iMirroring ) ; \
      virtual HRESULT GetBlankingMode( CATDrwBlankingMode & oBlankingMode ) ; \
      virtual HRESULT SetBlankingMode( const CATDrwBlankingMode & iBlankingMode ) ; \
      virtual HRESULT GetScaleMode( CATDrwScaleMode & oScaleMode ) ; \
      virtual HRESULT SetScaleMode( const CATDrwScaleMode & iScaleMode ) ; \
};



#define ENVTIEdeclare_CATIDftGenSRGeoReplText(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetString (const CATUnicodeString & iString) ; \
virtual HRESULT GetString (CATUnicodeString * oString) ; \
virtual HRESULT InsertCKEParm (CATICkeParm * iCKEParm, int iPos) ; \
virtual HRESULT GetCKEParm (CATICkeParm ** oCKEParm, int * oPos) ; \
virtual HRESULT SetGeometry (CATGeometry * iGeom) ; \
virtual HRESULT GetGeometry (CATGeometry ** oGeom) ; \
virtual HRESULT SetOrientation (int iType, double iAngle) ; \
virtual HRESULT GetOrientation (int* oType, double * oAngle) ; \
virtual HRESULT SetAnchorPoint (const CATMathPoint2D & iPoint) ; \
virtual HRESULT SetAnchorPoint (const CATMathPoint & iPoint) ; \
virtual HRESULT GetAnchorPoint (CATMathPoint2D * oPoint) ; \
virtual HRESULT GetAnchorPoint (CATMathPoint * oPoint) ; \
virtual HRESULT SetLeaderFlag (int iFlag) ; \
virtual HRESULT SetLeaderTarget (const CATMathPoint2D & iPoint) ; \
virtual HRESULT SetLeaderTarget (const CATMathPoint & iPoint) ; \
virtual HRESULT GetLeaderTarget (CATMathPoint2D * oPoint) ; \
virtual HRESULT GetLeaderTarget (CATMathPoint * oPoint) ; \
virtual HRESULT SetLeaderSymbol (int iNumber) ; \
virtual HRESULT GetLeaderSymbol (int* oNumber) ; \
virtual HRESULT GetMirroring( CATDrwMirroringDefinition & oMirroring ) ; \
virtual HRESULT SetMirroring( const CATDrwMirroringDefinition & iMirroring ) ; \
virtual HRESULT GetBlankingMode( CATDrwBlankingMode & oBlankingMode ) ; \
virtual HRESULT SetBlankingMode( const CATDrwBlankingMode & iBlankingMode ) ; \
virtual HRESULT GetScaleMode( CATDrwScaleMode & oScaleMode ) ; \
virtual HRESULT SetScaleMode( const CATDrwScaleMode & iScaleMode ) ; \


#define ENVTIEdefine_CATIDftGenSRGeoReplText(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetString (const CATUnicodeString & iString)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetString (iString)); \
} \
HRESULT  ENVTIEName::GetString (CATUnicodeString * oString)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetString (oString)); \
} \
HRESULT  ENVTIEName::InsertCKEParm (CATICkeParm * iCKEParm, int iPos)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)InsertCKEParm (iCKEParm,iPos)); \
} \
HRESULT  ENVTIEName::GetCKEParm (CATICkeParm ** oCKEParm, int * oPos)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetCKEParm (oCKEParm,oPos)); \
} \
HRESULT  ENVTIEName::SetGeometry (CATGeometry * iGeom)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetGeometry (iGeom)); \
} \
HRESULT  ENVTIEName::GetGeometry (CATGeometry ** oGeom)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetGeometry (oGeom)); \
} \
HRESULT  ENVTIEName::SetOrientation (int iType, double iAngle)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetOrientation (iType,iAngle)); \
} \
HRESULT  ENVTIEName::GetOrientation (int* oType, double * oAngle)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetOrientation (oType,oAngle)); \
} \
HRESULT  ENVTIEName::SetAnchorPoint (const CATMathPoint2D & iPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetAnchorPoint (iPoint)); \
} \
HRESULT  ENVTIEName::SetAnchorPoint (const CATMathPoint & iPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetAnchorPoint (iPoint)); \
} \
HRESULT  ENVTIEName::GetAnchorPoint (CATMathPoint2D * oPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetAnchorPoint (oPoint)); \
} \
HRESULT  ENVTIEName::GetAnchorPoint (CATMathPoint * oPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetAnchorPoint (oPoint)); \
} \
HRESULT  ENVTIEName::SetLeaderFlag (int iFlag)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetLeaderFlag (iFlag)); \
} \
HRESULT  ENVTIEName::SetLeaderTarget (const CATMathPoint2D & iPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetLeaderTarget (iPoint)); \
} \
HRESULT  ENVTIEName::SetLeaderTarget (const CATMathPoint & iPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetLeaderTarget (iPoint)); \
} \
HRESULT  ENVTIEName::GetLeaderTarget (CATMathPoint2D * oPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetLeaderTarget (oPoint)); \
} \
HRESULT  ENVTIEName::GetLeaderTarget (CATMathPoint * oPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetLeaderTarget (oPoint)); \
} \
HRESULT  ENVTIEName::SetLeaderSymbol (int iNumber)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetLeaderSymbol (iNumber)); \
} \
HRESULT  ENVTIEName::GetLeaderSymbol (int* oNumber)  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetLeaderSymbol (oNumber)); \
} \
HRESULT  ENVTIEName::GetMirroring( CATDrwMirroringDefinition & oMirroring )  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetMirroring(oMirroring )); \
} \
HRESULT  ENVTIEName::SetMirroring( const CATDrwMirroringDefinition & iMirroring )  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetMirroring(iMirroring )); \
} \
HRESULT  ENVTIEName::GetBlankingMode( CATDrwBlankingMode & oBlankingMode )  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetBlankingMode(oBlankingMode )); \
} \
HRESULT  ENVTIEName::SetBlankingMode( const CATDrwBlankingMode & iBlankingMode )  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetBlankingMode(iBlankingMode )); \
} \
HRESULT  ENVTIEName::GetScaleMode( CATDrwScaleMode & oScaleMode )  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)GetScaleMode(oScaleMode )); \
} \
HRESULT  ENVTIEName::SetScaleMode( const CATDrwScaleMode & iScaleMode )  \
{ \
return (ENVTIECALL(CATIDftGenSRGeoReplText,ENVTIETypeLetter,ENVTIELetter)SetScaleMode(iScaleMode )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSRGeoReplText(classe)    TIECATIDftGenSRGeoReplText##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSRGeoReplText, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSRGeoReplText, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSRGeoReplText, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSRGeoReplText, classe) \
 \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetString (const CATUnicodeString & iString)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetString (iString)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetString (CATUnicodeString * oString)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetString (oString)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::InsertCKEParm (CATICkeParm * iCKEParm, int iPos)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertCKEParm (iCKEParm,iPos)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetCKEParm (CATICkeParm ** oCKEParm, int * oPos)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCKEParm (oCKEParm,oPos)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetGeometry (CATGeometry * iGeom)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometry (iGeom)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetGeometry (CATGeometry ** oGeom)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometry (oGeom)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetOrientation (int iType, double iAngle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientation (iType,iAngle)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetOrientation (int* oType, double * oAngle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientation (oType,oAngle)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetAnchorPoint (const CATMathPoint2D & iPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnchorPoint (iPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetAnchorPoint (const CATMathPoint & iPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnchorPoint (iPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetAnchorPoint (CATMathPoint2D * oPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnchorPoint (oPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetAnchorPoint (CATMathPoint * oPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnchorPoint (oPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetLeaderFlag (int iFlag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLeaderFlag (iFlag)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetLeaderTarget (const CATMathPoint2D & iPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLeaderTarget (iPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetLeaderTarget (const CATMathPoint & iPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLeaderTarget (iPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetLeaderTarget (CATMathPoint2D * oPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLeaderTarget (oPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetLeaderTarget (CATMathPoint * oPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLeaderTarget (oPoint)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetLeaderSymbol (int iNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLeaderSymbol (iNumber)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetLeaderSymbol (int* oNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLeaderSymbol (oNumber)); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetMirroring( CATDrwMirroringDefinition & oMirroring )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMirroring(oMirroring )); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetMirroring( const CATDrwMirroringDefinition & iMirroring )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMirroring(iMirroring )); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetBlankingMode( CATDrwBlankingMode & oBlankingMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBlankingMode(oBlankingMode )); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetBlankingMode( const CATDrwBlankingMode & iBlankingMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBlankingMode(iBlankingMode )); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::GetScaleMode( CATDrwScaleMode & oScaleMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetScaleMode(oScaleMode )); \
} \
HRESULT  TIECATIDftGenSRGeoReplText##classe::SetScaleMode( const CATDrwScaleMode & iScaleMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetScaleMode(iScaleMode )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
declare_TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRGeoReplText##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRGeoReplText,"CATIDftGenSRGeoReplText",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSRGeoReplText, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRGeoReplText##classe(classe::MetaObject(),TIECATIDftGenSRGeoReplText##classe::MetaObject(),(void *)CreateTIECATIDftGenSRGeoReplText##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSRGeoReplText(classe) \
 \
 \
declare_TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRGeoReplText##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRGeoReplText,"CATIDftGenSRGeoReplText",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRGeoReplText(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSRGeoReplText, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRGeoReplText##classe(classe::MetaObject(),TIECATIDftGenSRGeoReplText##classe::MetaObject(),(void *)CreateTIECATIDftGenSRGeoReplText##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSRGeoReplText(classe) TIE_CATIDftGenSRGeoReplText(classe)
#else
#define BOA_CATIDftGenSRGeoReplText(classe) CATImplementBOA(CATIDftGenSRGeoReplText, classe)
#endif

#endif
