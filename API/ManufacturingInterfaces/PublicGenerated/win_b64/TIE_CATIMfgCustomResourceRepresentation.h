#ifndef __TIE_CATIMfgCustomResourceRepresentation
#define __TIE_CATIMfgCustomResourceRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgCustomResourceRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgCustomResourceRepresentation */
#define declare_TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
class TIECATIMfgCustomResourceRepresentation##classe : public CATIMfgCustomResourceRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgCustomResourceRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts); \
      virtual HRESULT GetVisibleProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts); \
      virtual HRESULT GetCUTAndNOCUTProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts); \
      virtual HRESULT GetCUTAndNOCUTFromVisibleProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts); \
};



#define ENVTIEdeclare_CATIMfgCustomResourceRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts); \
virtual HRESULT GetVisibleProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts); \
virtual HRESULT GetCUTAndNOCUTProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts); \
virtual HRESULT GetCUTAndNOCUTFromVisibleProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts); \


#define ENVTIEdefine_CATIMfgCustomResourceRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts) \
{ \
return (ENVTIECALL(CATIMfgCustomResourceRepresentation,ENVTIETypeLetter,ENVTIELetter)GetProfilePts (oNbPoints,oListParms,oListXCoord,oListYCoord,oListRadius,oListAngDeb,oListAngEnd,oListNumPts)); \
} \
HRESULT  ENVTIEName::GetVisibleProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts) \
{ \
return (ENVTIECALL(CATIMfgCustomResourceRepresentation,ENVTIETypeLetter,ENVTIELetter)GetVisibleProfilePts (oNbPoints,oListParms,oListXCoord,oListYCoord,oListRadius,oListAngDeb,oListAngEnd,oListNumPts)); \
} \
HRESULT  ENVTIEName::GetCUTAndNOCUTProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts) \
{ \
return (ENVTIECALL(CATIMfgCustomResourceRepresentation,ENVTIETypeLetter,ENVTIELetter)GetCUTAndNOCUTProfilePts (oNbCUTPoints,oListCUTXCoord,oListCUTYCoord,oListCUTRadius,oListCUTAngDeb,oListCUTAngFin,oListCUTNumPts,oNbNOCUTPoints,oListNOCUTXCoord,oListNOCUTYCoord,oListNOCUTRadius,oListNOCUTAngDeb,oListNOCUTAngFin,oListNOCUTNumPts)); \
} \
HRESULT  ENVTIEName::GetCUTAndNOCUTFromVisibleProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts) \
{ \
return (ENVTIECALL(CATIMfgCustomResourceRepresentation,ENVTIETypeLetter,ENVTIELetter)GetCUTAndNOCUTFromVisibleProfilePts (oNbCUTPoints,oListCUTXCoord,oListCUTYCoord,oListCUTRadius,oListCUTAngDeb,oListCUTAngFin,oListCUTNumPts,oNbNOCUTPoints,oListNOCUTXCoord,oListNOCUTYCoord,oListNOCUTRadius,oListNOCUTAngDeb,oListNOCUTAngFin,oListNOCUTNumPts)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgCustomResourceRepresentation(classe)    TIECATIMfgCustomResourceRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgCustomResourceRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgCustomResourceRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgCustomResourceRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgCustomResourceRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgCustomResourceRepresentation, classe) \
 \
HRESULT  TIECATIMfgCustomResourceRepresentation##classe::GetProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProfilePts (oNbPoints,oListParms,oListXCoord,oListYCoord,oListRadius,oListAngDeb,oListAngEnd,oListNumPts)); \
} \
HRESULT  TIECATIMfgCustomResourceRepresentation##classe::GetVisibleProfilePts (int                       &oNbPoints, CATListOfCATUnicodeString &oListParms, CATListOfDouble           &oListXCoord, CATListOfDouble           &oListYCoord, CATListOfDouble           &oListRadius, CATListOfDouble           &oListAngDeb, CATListOfDouble           &oListAngEnd, CATListOfInt              &oListNumPts) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibleProfilePts (oNbPoints,oListParms,oListXCoord,oListYCoord,oListRadius,oListAngDeb,oListAngEnd,oListNumPts)); \
} \
HRESULT  TIECATIMfgCustomResourceRepresentation##classe::GetCUTAndNOCUTProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCUTAndNOCUTProfilePts (oNbCUTPoints,oListCUTXCoord,oListCUTYCoord,oListCUTRadius,oListCUTAngDeb,oListCUTAngFin,oListCUTNumPts,oNbNOCUTPoints,oListNOCUTXCoord,oListNOCUTYCoord,oListNOCUTRadius,oListNOCUTAngDeb,oListNOCUTAngFin,oListNOCUTNumPts)); \
} \
HRESULT  TIECATIMfgCustomResourceRepresentation##classe::GetCUTAndNOCUTFromVisibleProfilePts (int             &oNbCUTPoints, CATListOfDouble &oListCUTXCoord, CATListOfDouble &oListCUTYCoord, CATListOfDouble &oListCUTRadius, CATListOfDouble &oListCUTAngDeb, CATListOfDouble &oListCUTAngFin, CATListOfInt    &oListCUTNumPts, int             &oNbNOCUTPoints, CATListOfDouble &oListNOCUTXCoord, CATListOfDouble &oListNOCUTYCoord, CATListOfDouble &oListNOCUTRadius, CATListOfDouble &oListNOCUTAngDeb, CATListOfDouble &oListNOCUTAngFin, CATListOfInt    &oListNOCUTNumPts) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCUTAndNOCUTFromVisibleProfilePts (oNbCUTPoints,oListCUTXCoord,oListCUTYCoord,oListCUTRadius,oListCUTAngDeb,oListCUTAngFin,oListCUTNumPts,oNbNOCUTPoints,oListNOCUTXCoord,oListNOCUTYCoord,oListNOCUTRadius,oListNOCUTAngDeb,oListNOCUTAngFin,oListNOCUTNumPts)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
declare_TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomResourceRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomResourceRepresentation,"CATIMfgCustomResourceRepresentation",CATIMfgCustomResourceRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgCustomResourceRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomResourceRepresentation##classe(classe::MetaObject(),CATIMfgCustomResourceRepresentation::MetaObject(),(void *)CreateTIECATIMfgCustomResourceRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
declare_TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomResourceRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomResourceRepresentation,"CATIMfgCustomResourceRepresentation",CATIMfgCustomResourceRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomResourceRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgCustomResourceRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomResourceRepresentation##classe(classe::MetaObject(),CATIMfgCustomResourceRepresentation::MetaObject(),(void *)CreateTIECATIMfgCustomResourceRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgCustomResourceRepresentation(classe) TIE_CATIMfgCustomResourceRepresentation(classe)
#else
#define BOA_CATIMfgCustomResourceRepresentation(classe) CATImplementBOA(CATIMfgCustomResourceRepresentation, classe)
#endif

#endif
