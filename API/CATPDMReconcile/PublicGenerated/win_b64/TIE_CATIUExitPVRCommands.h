#ifndef __TIE_CATIUExitPVRCommands
#define __TIE_CATIUExitPVRCommands

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitPVRCommands.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitPVRCommands */
#define declare_TIE_CATIUExitPVRCommands(classe) \
 \
 \
class TIECATIUExitPVRCommands##classe : public CATIUExitPVRCommands \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitPVRCommands, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AfterPRCOpenFromPVR( CATDocument * ixPVRDoc , CATDocument * ixPRCDoc ) ; \
      virtual HRESULT UpdateAttributeOnPvrSynchro( CATDocument      * ixPVRDoc , int                inIsyncNeeded , CATUnicodeString & ocAttrId , CATUnicodeString & ocAttrVal ) ; \
      virtual HRESULT GetDefaultNamesForPVRCreation( int                                ilNewFrom , int                                ilFilteredPVR , const CATListValCATUnicodeString & iAttributeIdLst , const CATListValCATUnicodeString & iAttributeValueLst , CATUnicodeString                 & ioPVRName , CATUnicodeString                 & ioPVSName           ) ; \
};



#define ENVTIEdeclare_CATIUExitPVRCommands(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AfterPRCOpenFromPVR( CATDocument * ixPVRDoc , CATDocument * ixPRCDoc ) ; \
virtual HRESULT UpdateAttributeOnPvrSynchro( CATDocument      * ixPVRDoc , int                inIsyncNeeded , CATUnicodeString & ocAttrId , CATUnicodeString & ocAttrVal ) ; \
virtual HRESULT GetDefaultNamesForPVRCreation( int                                ilNewFrom , int                                ilFilteredPVR , const CATListValCATUnicodeString & iAttributeIdLst , const CATListValCATUnicodeString & iAttributeValueLst , CATUnicodeString                 & ioPVRName , CATUnicodeString                 & ioPVSName           ) ; \


#define ENVTIEdefine_CATIUExitPVRCommands(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AfterPRCOpenFromPVR( CATDocument * ixPVRDoc , CATDocument * ixPRCDoc )  \
{ \
return (ENVTIECALL(CATIUExitPVRCommands,ENVTIETypeLetter,ENVTIELetter)AfterPRCOpenFromPVR(ixPVRDoc ,ixPRCDoc )); \
} \
HRESULT  ENVTIEName::UpdateAttributeOnPvrSynchro( CATDocument      * ixPVRDoc , int                inIsyncNeeded , CATUnicodeString & ocAttrId , CATUnicodeString & ocAttrVal )  \
{ \
return (ENVTIECALL(CATIUExitPVRCommands,ENVTIETypeLetter,ENVTIELetter)UpdateAttributeOnPvrSynchro(ixPVRDoc ,inIsyncNeeded ,ocAttrId ,ocAttrVal )); \
} \
HRESULT  ENVTIEName::GetDefaultNamesForPVRCreation( int                                ilNewFrom , int                                ilFilteredPVR , const CATListValCATUnicodeString & iAttributeIdLst , const CATListValCATUnicodeString & iAttributeValueLst , CATUnicodeString                 & ioPVRName , CATUnicodeString                 & ioPVSName           )  \
{ \
return (ENVTIECALL(CATIUExitPVRCommands,ENVTIETypeLetter,ENVTIELetter)GetDefaultNamesForPVRCreation(ilNewFrom ,ilFilteredPVR ,iAttributeIdLst ,iAttributeValueLst ,ioPVRName ,ioPVSName           )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitPVRCommands(classe)    TIECATIUExitPVRCommands##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitPVRCommands(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitPVRCommands, classe) \
 \
 \
CATImplementTIEMethods(CATIUExitPVRCommands, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIUExitPVRCommands, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIUExitPVRCommands, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitPVRCommands, classe) \
 \
HRESULT  TIECATIUExitPVRCommands##classe::AfterPRCOpenFromPVR( CATDocument * ixPVRDoc , CATDocument * ixPRCDoc )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AfterPRCOpenFromPVR(ixPVRDoc ,ixPRCDoc )); \
} \
HRESULT  TIECATIUExitPVRCommands##classe::UpdateAttributeOnPvrSynchro( CATDocument      * ixPVRDoc , int                inIsyncNeeded , CATUnicodeString & ocAttrId , CATUnicodeString & ocAttrVal )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateAttributeOnPvrSynchro(ixPVRDoc ,inIsyncNeeded ,ocAttrId ,ocAttrVal )); \
} \
HRESULT  TIECATIUExitPVRCommands##classe::GetDefaultNamesForPVRCreation( int                                ilNewFrom , int                                ilFilteredPVR , const CATListValCATUnicodeString & iAttributeIdLst , const CATListValCATUnicodeString & iAttributeValueLst , CATUnicodeString                 & ioPVRName , CATUnicodeString                 & ioPVSName           )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultNamesForPVRCreation(ilNewFrom ,ilFilteredPVR ,iAttributeIdLst ,iAttributeValueLst ,ioPVRName ,ioPVSName           )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitPVRCommands(classe) \
 \
 \
declare_TIE_CATIUExitPVRCommands(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitPVRCommands##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitPVRCommands,"CATIUExitPVRCommands",CATIUExitPVRCommands::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitPVRCommands(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitPVRCommands, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitPVRCommands##classe(classe::MetaObject(),CATIUExitPVRCommands::MetaObject(),(void *)CreateTIECATIUExitPVRCommands##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitPVRCommands(classe) \
 \
 \
declare_TIE_CATIUExitPVRCommands(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitPVRCommands##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitPVRCommands,"CATIUExitPVRCommands",CATIUExitPVRCommands::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitPVRCommands(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitPVRCommands, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitPVRCommands##classe(classe::MetaObject(),CATIUExitPVRCommands::MetaObject(),(void *)CreateTIECATIUExitPVRCommands##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitPVRCommands(classe) TIE_CATIUExitPVRCommands(classe)
#else
#define BOA_CATIUExitPVRCommands(classe) CATImplementBOA(CATIUExitPVRCommands, classe)
#endif

#endif
