#ifndef __TIE_CATICciGridCellProperties
#define __TIE_CATICciGridCellProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciGridCellProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciGridCellProperties */
#define declare_TIE_CATICciGridCellProperties(classe) \
 \
 \
class TIECATICciGridCellProperties##classe : public CATICciGridCellProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciGridCellProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetColor (unsigned int iRed, unsigned int iGreen, unsigned int iBlue) ; \
      virtual HRESULT GetColor (unsigned int & oRed, unsigned int & iGreen, unsigned int & iBlue) ; \
};



#define ENVTIEdeclare_CATICciGridCellProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetColor (unsigned int iRed, unsigned int iGreen, unsigned int iBlue) ; \
virtual HRESULT GetColor (unsigned int & oRed, unsigned int & iGreen, unsigned int & iBlue) ; \


#define ENVTIEdefine_CATICciGridCellProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetColor (unsigned int iRed, unsigned int iGreen, unsigned int iBlue)  \
{ \
return (ENVTIECALL(CATICciGridCellProperties,ENVTIETypeLetter,ENVTIELetter)SetColor (iRed,iGreen,iBlue)); \
} \
HRESULT  ENVTIEName::GetColor (unsigned int & oRed, unsigned int & iGreen, unsigned int & iBlue)  \
{ \
return (ENVTIECALL(CATICciGridCellProperties,ENVTIETypeLetter,ENVTIELetter)GetColor (oRed,iGreen,iBlue)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciGridCellProperties(classe)    TIECATICciGridCellProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciGridCellProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciGridCellProperties, classe) \
 \
 \
CATImplementTIEMethods(CATICciGridCellProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciGridCellProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciGridCellProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciGridCellProperties, classe) \
 \
HRESULT  TIECATICciGridCellProperties##classe::SetColor (unsigned int iRed, unsigned int iGreen, unsigned int iBlue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColor (iRed,iGreen,iBlue)); \
} \
HRESULT  TIECATICciGridCellProperties##classe::GetColor (unsigned int & oRed, unsigned int & iGreen, unsigned int & iBlue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColor (oRed,iGreen,iBlue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciGridCellProperties(classe) \
 \
 \
declare_TIE_CATICciGridCellProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciGridCellProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciGridCellProperties,"CATICciGridCellProperties",CATICciGridCellProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciGridCellProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciGridCellProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciGridCellProperties##classe(classe::MetaObject(),CATICciGridCellProperties::MetaObject(),(void *)CreateTIECATICciGridCellProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciGridCellProperties(classe) \
 \
 \
declare_TIE_CATICciGridCellProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciGridCellProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciGridCellProperties,"CATICciGridCellProperties",CATICciGridCellProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciGridCellProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciGridCellProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciGridCellProperties##classe(classe::MetaObject(),CATICciGridCellProperties::MetaObject(),(void *)CreateTIECATICciGridCellProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciGridCellProperties(classe) TIE_CATICciGridCellProperties(classe)
#else
#define BOA_CATICciGridCellProperties(classe) CATImplementBOA(CATICciGridCellProperties, classe)
#endif

#endif
