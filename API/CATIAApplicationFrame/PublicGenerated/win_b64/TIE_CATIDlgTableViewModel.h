#ifndef __TIE_CATIDlgTableViewModel
#define __TIE_CATIDlgTableViewModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDlgTableViewModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDlgTableViewModel */
#define declare_TIE_CATIDlgTableViewModel(classe) \
 \
 \
class TIECATIDlgTableViewModel##classe : public CATIDlgTableViewModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDlgTableViewModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetUpdateEvent(CATCallbackEvent * oUpdateEvent) ; \
      virtual HRESULT GetEventPublisher(CATBaseUnknown ** oTableModelEventPublisher) ; \
      virtual HRESULT GetLabel( CATBaseUnknown_var & iLine, const CATString & iColumn, CATUnicodeString & oLabel) ; \
      virtual HRESULT SetLabel( CATBaseUnknown_var & iLine, const CATString &iColumn, const CATUnicodeString& iLabel ) ; \
      virtual HRESULT IsEditable( CATBaseUnknown_var & iLine, const CATString& iColumn, CATBoolean & oEditable) ; \
      virtual HRESULT GetIcon( CATBaseUnknown_var iLine , const CATString &iColumn, CATUnicodeString & oIcon) ; \
      virtual HRESULT GetStyle( CATBaseUnknown_var iLine, const CATString &iColumnID, CATDlgTableStyle & oStyle) ; \
      virtual HRESULT GetLineCount(int & oLineCount) ; \
      virtual HRESULT GetLines(int iStart, int iCount, CATListOfCATBaseUnknown_var & oLines) ; \
      virtual HRESULT GetBorderColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
      virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
      virtual HRESULT GetTextColor(CATBaseUnknown_var iLine, const CATString &iColumn, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
      virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
      virtual HRESULT GetBackgroundColor(CATBaseUnknown_var iLine , const CATString &iColumnID, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
};



#define ENVTIEdeclare_CATIDlgTableViewModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetUpdateEvent(CATCallbackEvent * oUpdateEvent) ; \
virtual HRESULT GetEventPublisher(CATBaseUnknown ** oTableModelEventPublisher) ; \
virtual HRESULT GetLabel( CATBaseUnknown_var & iLine, const CATString & iColumn, CATUnicodeString & oLabel) ; \
virtual HRESULT SetLabel( CATBaseUnknown_var & iLine, const CATString &iColumn, const CATUnicodeString& iLabel ) ; \
virtual HRESULT IsEditable( CATBaseUnknown_var & iLine, const CATString& iColumn, CATBoolean & oEditable) ; \
virtual HRESULT GetIcon( CATBaseUnknown_var iLine , const CATString &iColumn, CATUnicodeString & oIcon) ; \
virtual HRESULT GetStyle( CATBaseUnknown_var iLine, const CATString &iColumnID, CATDlgTableStyle & oStyle) ; \
virtual HRESULT GetLineCount(int & oLineCount) ; \
virtual HRESULT GetLines(int iStart, int iCount, CATListOfCATBaseUnknown_var & oLines) ; \
virtual HRESULT GetBorderColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
virtual HRESULT GetTextColor(CATBaseUnknown_var iLine, const CATString &iColumn, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \
virtual HRESULT GetBackgroundColor(CATBaseUnknown_var iLine , const CATString &iColumnID, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) ; \


#define ENVTIEdefine_CATIDlgTableViewModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetUpdateEvent(CATCallbackEvent * oUpdateEvent)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetUpdateEvent(oUpdateEvent)); \
} \
HRESULT  ENVTIEName::GetEventPublisher(CATBaseUnknown ** oTableModelEventPublisher)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetEventPublisher(oTableModelEventPublisher)); \
} \
HRESULT  ENVTIEName::GetLabel( CATBaseUnknown_var & iLine, const CATString & iColumn, CATUnicodeString & oLabel)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetLabel(iLine,iColumn,oLabel)); \
} \
HRESULT  ENVTIEName::SetLabel( CATBaseUnknown_var & iLine, const CATString &iColumn, const CATUnicodeString& iLabel )  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)SetLabel(iLine,iColumn,iLabel )); \
} \
HRESULT  ENVTIEName::IsEditable( CATBaseUnknown_var & iLine, const CATString& iColumn, CATBoolean & oEditable)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)IsEditable(iLine,iColumn,oEditable)); \
} \
HRESULT  ENVTIEName::GetIcon( CATBaseUnknown_var iLine , const CATString &iColumn, CATUnicodeString & oIcon)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetIcon(iLine ,iColumn,oIcon)); \
} \
HRESULT  ENVTIEName::GetStyle( CATBaseUnknown_var iLine, const CATString &iColumnID, CATDlgTableStyle & oStyle)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetStyle(iLine,iColumnID,oStyle)); \
} \
HRESULT  ENVTIEName::GetLineCount(int & oLineCount)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetLineCount(oLineCount)); \
} \
HRESULT  ENVTIEName::GetLines(int iStart, int iCount, CATListOfCATBaseUnknown_var & oLines)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetLines(iStart,iCount,oLines)); \
} \
HRESULT  ENVTIEName::GetBorderColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetBorderColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  ENVTIEName::GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetTextColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  ENVTIEName::GetTextColor(CATBaseUnknown_var iLine, const CATString &iColumn, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetTextColor(iLine,iColumn,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  ENVTIEName::GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetBackgroundColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  ENVTIEName::GetBackgroundColor(CATBaseUnknown_var iLine , const CATString &iColumnID, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
return (ENVTIECALL(CATIDlgTableViewModel,ENVTIETypeLetter,ENVTIELetter)GetBackgroundColor(iLine ,iColumnID,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDlgTableViewModel(classe)    TIECATIDlgTableViewModel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDlgTableViewModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDlgTableViewModel, classe) \
 \
 \
CATImplementTIEMethods(CATIDlgTableViewModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDlgTableViewModel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDlgTableViewModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDlgTableViewModel, classe) \
 \
HRESULT  TIECATIDlgTableViewModel##classe::GetUpdateEvent(CATCallbackEvent * oUpdateEvent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateEvent(oUpdateEvent)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetEventPublisher(CATBaseUnknown ** oTableModelEventPublisher)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEventPublisher(oTableModelEventPublisher)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetLabel( CATBaseUnknown_var & iLine, const CATString & iColumn, CATUnicodeString & oLabel)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabel(iLine,iColumn,oLabel)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::SetLabel( CATBaseUnknown_var & iLine, const CATString &iColumn, const CATUnicodeString& iLabel )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLabel(iLine,iColumn,iLabel )); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::IsEditable( CATBaseUnknown_var & iLine, const CATString& iColumn, CATBoolean & oEditable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsEditable(iLine,iColumn,oEditable)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetIcon( CATBaseUnknown_var iLine , const CATString &iColumn, CATUnicodeString & oIcon)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIcon(iLine ,iColumn,oIcon)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetStyle( CATBaseUnknown_var iLine, const CATString &iColumnID, CATDlgTableStyle & oStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStyle(iLine,iColumnID,oStyle)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetLineCount(int & oLineCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineCount(oLineCount)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetLines(int iStart, int iCount, CATListOfCATBaseUnknown_var & oLines)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLines(iStart,iCount,oLines)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetBorderColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBorderColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetTextColor(CATBaseUnknown_var iLine, const CATString &iColumn, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextColor(iLine,iColumn,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundColor(iStyle,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \
HRESULT  TIECATIDlgTableViewModel##classe::GetBackgroundColor(CATBaseUnknown_var iLine , const CATString &iColumnID, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundColor(iLine ,iColumnID,ioRed,ioGreen,ioBlue,ioAlpha)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDlgTableViewModel(classe) \
 \
 \
declare_TIE_CATIDlgTableViewModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewModel,"CATIDlgTableViewModel",CATIDlgTableViewModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDlgTableViewModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewModel##classe(classe::MetaObject(),CATIDlgTableViewModel::MetaObject(),(void *)CreateTIECATIDlgTableViewModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDlgTableViewModel(classe) \
 \
 \
declare_TIE_CATIDlgTableViewModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewModel,"CATIDlgTableViewModel",CATIDlgTableViewModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDlgTableViewModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewModel##classe(classe::MetaObject(),CATIDlgTableViewModel::MetaObject(),(void *)CreateTIECATIDlgTableViewModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDlgTableViewModel(classe) TIE_CATIDlgTableViewModel(classe)
#else
#define BOA_CATIDlgTableViewModel(classe) CATImplementBOA(CATIDlgTableViewModel, classe)
#endif

#endif
