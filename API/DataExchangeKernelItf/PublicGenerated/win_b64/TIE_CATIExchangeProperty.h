#ifndef __TIE_CATIExchangeProperty
#define __TIE_CATIExchangeProperty

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeProperty.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeProperty */
#define declare_TIE_CATIExchangeProperty(classe) \
 \
 \
class TIECATIExchangeProperty##classe : public CATIExchangeProperty \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeProperty, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetName(CATUnicodeString &oName) const ; \
      virtual HRESULT GetColor(double *oRColor, double *oGColor, double *oBColor) const ; \
      virtual short IsShow() const ; \
      virtual HRESULT GetType(short *oElementType) const ; \
      virtual HRESULT GetType(CATUnicodeString *oStringType) const ; \
      virtual char* GetInfo() const ; \
      virtual HRESULT GetId(CATLONG32* oID) const ; \
      virtual int GetLayerValue() const ; \
      virtual HRESULT GetElemTypeValue(int &oType) ; \
      virtual HRESULT GetElemWidthValue(double &oWidth) ; \
};



#define ENVTIEdeclare_CATIExchangeProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetName(CATUnicodeString &oName) const ; \
virtual HRESULT GetColor(double *oRColor, double *oGColor, double *oBColor) const ; \
virtual short IsShow() const ; \
virtual HRESULT GetType(short *oElementType) const ; \
virtual HRESULT GetType(CATUnicodeString *oStringType) const ; \
virtual char* GetInfo() const ; \
virtual HRESULT GetId(CATLONG32* oID) const ; \
virtual int GetLayerValue() const ; \
virtual HRESULT GetElemTypeValue(int &oType) ; \
virtual HRESULT GetElemWidthValue(double &oWidth) ; \


#define ENVTIEdefine_CATIExchangeProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetName(CATUnicodeString &oName) const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetName(oName)); \
} \
HRESULT  ENVTIEName::GetColor(double *oRColor, double *oGColor, double *oBColor) const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetColor(oRColor,oGColor,oBColor)); \
} \
short  ENVTIEName::IsShow() const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)IsShow()); \
} \
HRESULT  ENVTIEName::GetType(short *oElementType) const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetType(oElementType)); \
} \
HRESULT  ENVTIEName::GetType(CATUnicodeString *oStringType) const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetType(oStringType)); \
} \
char*  ENVTIEName::GetInfo() const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetInfo()); \
} \
HRESULT  ENVTIEName::GetId(CATLONG32* oID) const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetId(oID)); \
} \
int  ENVTIEName::GetLayerValue() const  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetLayerValue()); \
} \
HRESULT  ENVTIEName::GetElemTypeValue(int &oType)  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetElemTypeValue(oType)); \
} \
HRESULT  ENVTIEName::GetElemWidthValue(double &oWidth)  \
{ \
return (ENVTIECALL(CATIExchangeProperty,ENVTIETypeLetter,ENVTIELetter)GetElemWidthValue(oWidth)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeProperty(classe)    TIECATIExchangeProperty##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeProperty(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeProperty, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeProperty, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeProperty, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeProperty, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeProperty, classe) \
 \
HRESULT  TIECATIExchangeProperty##classe::GetName(CATUnicodeString &oName) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oName)); \
} \
HRESULT  TIECATIExchangeProperty##classe::GetColor(double *oRColor, double *oGColor, double *oBColor) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColor(oRColor,oGColor,oBColor)); \
} \
short  TIECATIExchangeProperty##classe::IsShow() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsShow()); \
} \
HRESULT  TIECATIExchangeProperty##classe::GetType(short *oElementType) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oElementType)); \
} \
HRESULT  TIECATIExchangeProperty##classe::GetType(CATUnicodeString *oStringType) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oStringType)); \
} \
char*  TIECATIExchangeProperty##classe::GetInfo() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInfo()); \
} \
HRESULT  TIECATIExchangeProperty##classe::GetId(CATLONG32* oID) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetId(oID)); \
} \
int  TIECATIExchangeProperty##classe::GetLayerValue() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLayerValue()); \
} \
HRESULT  TIECATIExchangeProperty##classe::GetElemTypeValue(int &oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElemTypeValue(oType)); \
} \
HRESULT  TIECATIExchangeProperty##classe::GetElemWidthValue(double &oWidth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElemWidthValue(oWidth)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeProperty(classe) \
 \
 \
declare_TIE_CATIExchangeProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProperty,"CATIExchangeProperty",CATIExchangeProperty::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProperty##classe(classe::MetaObject(),CATIExchangeProperty::MetaObject(),(void *)CreateTIECATIExchangeProperty##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeProperty(classe) \
 \
 \
declare_TIE_CATIExchangeProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProperty,"CATIExchangeProperty",CATIExchangeProperty::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProperty##classe(classe::MetaObject(),CATIExchangeProperty::MetaObject(),(void *)CreateTIECATIExchangeProperty##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeProperty(classe) TIE_CATIExchangeProperty(classe)
#else
#define BOA_CATIExchangeProperty(classe) CATImplementBOA(CATIExchangeProperty, classe)
#endif

#endif
