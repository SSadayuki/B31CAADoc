#ifndef __TIE_CATIDlgTableViewColumnModel
#define __TIE_CATIDlgTableViewColumnModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDlgTableViewColumnModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDlgTableViewColumnModel */
#define declare_TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
class TIECATIDlgTableViewColumnModel##classe : public CATIDlgTableViewColumnModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDlgTableViewColumnModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetOrderedColumns( CATListOfCATString & oColumns ) ; \
      virtual HRESULT SetOrderedColumns( const CATListOfCATString & iColumns ) ; \
      virtual HRESULT GetLabel( const CATString & iColumn, CATUnicodeString & oLabel) ; \
      virtual HRESULT GetStyle( const CATString & iColumn, CATDlgTableStyle & oStyle) ; \
      virtual HRESULT GetWidth( const CATString &iColumn, int & oWidth ) ; \
      virtual HRESULT SetWidth( const CATString &iColumn, int iWidth ) ; \
      virtual void SetSortDefinition( const CATString &iColumnID, int iReverse= 0 ) ; \
      virtual void GetSortDefinition( CATString &oColumnID, int &oReverse ) ; \
      virtual HRESULT SetVisibility( const CATString & iColumn, CATDlgTableStyle iStyle) ; \
      virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
      virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
};



#define ENVTIEdeclare_CATIDlgTableViewColumnModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetOrderedColumns( CATListOfCATString & oColumns ) ; \
virtual HRESULT SetOrderedColumns( const CATListOfCATString & iColumns ) ; \
virtual HRESULT GetLabel( const CATString & iColumn, CATUnicodeString & oLabel) ; \
virtual HRESULT GetStyle( const CATString & iColumn, CATDlgTableStyle & oStyle) ; \
virtual HRESULT GetWidth( const CATString &iColumn, int & oWidth ) ; \
virtual HRESULT SetWidth( const CATString &iColumn, int iWidth ) ; \
virtual void SetSortDefinition( const CATString &iColumnID, int iReverse= 0 ) ; \
virtual void GetSortDefinition( CATString &oColumnID, int &oReverse ) ; \
virtual HRESULT SetVisibility( const CATString & iColumn, CATDlgTableStyle iStyle) ; \
virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \


#define ENVTIEdefine_CATIDlgTableViewColumnModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetOrderedColumns( CATListOfCATString & oColumns )  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetOrderedColumns(oColumns )); \
} \
HRESULT  ENVTIEName::SetOrderedColumns( const CATListOfCATString & iColumns )  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)SetOrderedColumns(iColumns )); \
} \
HRESULT  ENVTIEName::GetLabel( const CATString & iColumn, CATUnicodeString & oLabel)  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetLabel(iColumn,oLabel)); \
} \
HRESULT  ENVTIEName::GetStyle( const CATString & iColumn, CATDlgTableStyle & oStyle)  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetStyle(iColumn,oStyle)); \
} \
HRESULT  ENVTIEName::GetWidth( const CATString &iColumn, int & oWidth )  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetWidth(iColumn,oWidth )); \
} \
HRESULT  ENVTIEName::SetWidth( const CATString &iColumn, int iWidth )  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)SetWidth(iColumn,iWidth )); \
} \
void  ENVTIEName::SetSortDefinition( const CATString &iColumnID, int iReverse)  \
{ \
 (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)SetSortDefinition(iColumnID,iReverse)); \
} \
void  ENVTIEName::GetSortDefinition( CATString &oColumnID, int &oReverse )  \
{ \
 (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetSortDefinition(oColumnID,oReverse )); \
} \
HRESULT  ENVTIEName::SetVisibility( const CATString & iColumn, CATDlgTableStyle iStyle)  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)SetVisibility(iColumn,iStyle)); \
} \
HRESULT  ENVTIEName::GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetBackgroundColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  ENVTIEName::GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewColumnModel,ENVTIETypeLetter,ENVTIELetter)GetTextColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDlgTableViewColumnModel(classe)    TIECATIDlgTableViewColumnModel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDlgTableViewColumnModel, classe) \
 \
 \
CATImplementTIEMethods(CATIDlgTableViewColumnModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDlgTableViewColumnModel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDlgTableViewColumnModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDlgTableViewColumnModel, classe) \
 \
HRESULT  TIECATIDlgTableViewColumnModel##classe::GetOrderedColumns( CATListOfCATString & oColumns )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrderedColumns(oColumns )); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::SetOrderedColumns( const CATListOfCATString & iColumns )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrderedColumns(iColumns )); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::GetLabel( const CATString & iColumn, CATUnicodeString & oLabel)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabel(iColumn,oLabel)); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::GetStyle( const CATString & iColumn, CATDlgTableStyle & oStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStyle(iColumn,oStyle)); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::GetWidth( const CATString &iColumn, int & oWidth )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWidth(iColumn,oWidth )); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::SetWidth( const CATString &iColumn, int iWidth )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWidth(iColumn,iWidth )); \
} \
void  TIECATIDlgTableViewColumnModel##classe::SetSortDefinition( const CATString &iColumnID, int iReverse)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSortDefinition(iColumnID,iReverse); \
} \
void  TIECATIDlgTableViewColumnModel##classe::GetSortDefinition( CATString &oColumnID, int &oReverse )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSortDefinition(oColumnID,oReverse ); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::SetVisibility( const CATString & iColumn, CATDlgTableStyle iStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibility(iColumn,iStyle)); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  TIECATIDlgTableViewColumnModel##classe::GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
declare_TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewColumnModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewColumnModel,"CATIDlgTableViewColumnModel",CATIDlgTableViewColumnModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDlgTableViewColumnModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewColumnModel##classe(classe::MetaObject(),CATIDlgTableViewColumnModel::MetaObject(),(void *)CreateTIECATIDlgTableViewColumnModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDlgTableViewColumnModel(classe) \
 \
 \
declare_TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewColumnModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewColumnModel,"CATIDlgTableViewColumnModel",CATIDlgTableViewColumnModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewColumnModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDlgTableViewColumnModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewColumnModel##classe(classe::MetaObject(),CATIDlgTableViewColumnModel::MetaObject(),(void *)CreateTIECATIDlgTableViewColumnModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDlgTableViewColumnModel(classe) TIE_CATIDlgTableViewColumnModel(classe)
#else
#define BOA_CATIDlgTableViewColumnModel(classe) CATImplementBOA(CATIDlgTableViewColumnModel, classe)
#endif

#endif
