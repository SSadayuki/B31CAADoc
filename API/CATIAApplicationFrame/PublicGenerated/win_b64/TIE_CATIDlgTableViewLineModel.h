#ifndef __TIE_CATIDlgTableViewLineModel
#define __TIE_CATIDlgTableViewLineModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDlgTableViewLineModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDlgTableViewLineModel */
#define declare_TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
class TIECATIDlgTableViewLineModel##classe : public CATIDlgTableViewLineModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDlgTableViewLineModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetLabel(const CATBaseUnknown_var iRow, const CATUnicodeString & oLabel) ; \
      virtual HRESULT GetWidth(int & oWidth) ; \
      virtual HRESULT SetWidth(int iwidth) ; \
      virtual HRESULT GetStyle( const CATBaseUnknown_var iRow, int & oStyle) ; \
      virtual HRESULT GetBackgroundColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
      virtual HRESULT GetTextColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
};



#define ENVTIEdeclare_CATIDlgTableViewLineModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetLabel(const CATBaseUnknown_var iRow, const CATUnicodeString & oLabel) ; \
virtual HRESULT GetWidth(int & oWidth) ; \
virtual HRESULT SetWidth(int iwidth) ; \
virtual HRESULT GetStyle( const CATBaseUnknown_var iRow, int & oStyle) ; \
virtual HRESULT GetBackgroundColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
virtual HRESULT GetTextColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \


#define ENVTIEdefine_CATIDlgTableViewLineModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetLabel(const CATBaseUnknown_var iRow, const CATUnicodeString & oLabel)  \
{ \
return (ENVTIECALL(CATIDlgTableViewLineModel,ENVTIETypeLetter,ENVTIELetter)GetLabel(iRow,oLabel)); \
} \
HRESULT  ENVTIEName::GetWidth(int & oWidth)  \
{ \
return (ENVTIECALL(CATIDlgTableViewLineModel,ENVTIETypeLetter,ENVTIELetter)GetWidth(oWidth)); \
} \
HRESULT  ENVTIEName::SetWidth(int iwidth)  \
{ \
return (ENVTIECALL(CATIDlgTableViewLineModel,ENVTIETypeLetter,ENVTIELetter)SetWidth(iwidth)); \
} \
HRESULT  ENVTIEName::GetStyle( const CATBaseUnknown_var iRow, int & oStyle)  \
{ \
return (ENVTIECALL(CATIDlgTableViewLineModel,ENVTIETypeLetter,ENVTIELetter)GetStyle(iRow,oStyle)); \
} \
HRESULT  ENVTIEName::GetBackgroundColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewLineModel,ENVTIETypeLetter,ENVTIELetter)GetBackgroundColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  ENVTIEName::GetTextColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewLineModel,ENVTIETypeLetter,ENVTIELetter)GetTextColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDlgTableViewLineModel(classe)    TIECATIDlgTableViewLineModel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDlgTableViewLineModel, classe) \
 \
 \
CATImplementTIEMethods(CATIDlgTableViewLineModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDlgTableViewLineModel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDlgTableViewLineModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDlgTableViewLineModel, classe) \
 \
HRESULT  TIECATIDlgTableViewLineModel##classe::GetLabel(const CATBaseUnknown_var iRow, const CATUnicodeString & oLabel)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabel(iRow,oLabel)); \
} \
HRESULT  TIECATIDlgTableViewLineModel##classe::GetWidth(int & oWidth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWidth(oWidth)); \
} \
HRESULT  TIECATIDlgTableViewLineModel##classe::SetWidth(int iwidth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWidth(iwidth)); \
} \
HRESULT  TIECATIDlgTableViewLineModel##classe::GetStyle( const CATBaseUnknown_var iRow, int & oStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStyle(iRow,oStyle)); \
} \
HRESULT  TIECATIDlgTableViewLineModel##classe::GetBackgroundColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  TIECATIDlgTableViewLineModel##classe::GetTextColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
declare_TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewLineModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewLineModel,"CATIDlgTableViewLineModel",CATIDlgTableViewLineModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDlgTableViewLineModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewLineModel##classe(classe::MetaObject(),CATIDlgTableViewLineModel::MetaObject(),(void *)CreateTIECATIDlgTableViewLineModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDlgTableViewLineModel(classe) \
 \
 \
declare_TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewLineModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewLineModel,"CATIDlgTableViewLineModel",CATIDlgTableViewLineModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewLineModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDlgTableViewLineModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewLineModel##classe(classe::MetaObject(),CATIDlgTableViewLineModel::MetaObject(),(void *)CreateTIECATIDlgTableViewLineModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDlgTableViewLineModel(classe) TIE_CATIDlgTableViewLineModel(classe)
#else
#define BOA_CATIDlgTableViewLineModel(classe) CATImplementBOA(CATIDlgTableViewLineModel, classe)
#endif

#endif
