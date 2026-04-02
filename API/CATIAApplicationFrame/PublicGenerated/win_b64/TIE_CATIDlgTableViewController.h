#ifndef __TIE_CATIDlgTableViewController
#define __TIE_CATIDlgTableViewController

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDlgTableViewController.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDlgTableViewController */
#define declare_TIE_CATIDlgTableViewController(classe) \
 \
 \
class TIECATIDlgTableViewController##classe : public CATIDlgTableViewController \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDlgTableViewController, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void OnScrollStart() ; \
      virtual void OnScroll() ; \
      virtual void OnScrollStop() ; \
      virtual HRESULT IsSelected( CATBaseUnknown_var iRow, CATBoolean & oSelected) ; \
      virtual HRESULT IsSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oSelected) ; \
      virtual HRESULT IsPreSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oPreSelected) ; \
      virtual HRESULT HasSelection( const CATString& iColumn, CATBoolean & oHasSelection ) ; \
      virtual HRESULT OnSelect( CATBaseUnknown_var iRow, const CATString& iColumn) ; \
      virtual HRESULT OnMoveOver( CATBaseUnknown_var iRow, const CATString& iColumn ) ; \
      virtual HRESULT OnActivate( CATBaseUnknown_var iRow ) ; \
      virtual HRESULT OnContext( CATBaseUnknown_var iRow ) ; \
      virtual HRESULT OnCellContext( CATBaseUnknown_var iRow, const CATString& iColumn ) ; \
      virtual HRESULT OnColumnHeaderContext( const CATString& iColumn ) ; \
      virtual HRESULT OnRowHeaderContext( CATBaseUnknown_var iRow ) ; \
};



#define ENVTIEdeclare_CATIDlgTableViewController(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void OnScrollStart() ; \
virtual void OnScroll() ; \
virtual void OnScrollStop() ; \
virtual HRESULT IsSelected( CATBaseUnknown_var iRow, CATBoolean & oSelected) ; \
virtual HRESULT IsSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oSelected) ; \
virtual HRESULT IsPreSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oPreSelected) ; \
virtual HRESULT HasSelection( const CATString& iColumn, CATBoolean & oHasSelection ) ; \
virtual HRESULT OnSelect( CATBaseUnknown_var iRow, const CATString& iColumn) ; \
virtual HRESULT OnMoveOver( CATBaseUnknown_var iRow, const CATString& iColumn ) ; \
virtual HRESULT OnActivate( CATBaseUnknown_var iRow ) ; \
virtual HRESULT OnContext( CATBaseUnknown_var iRow ) ; \
virtual HRESULT OnCellContext( CATBaseUnknown_var iRow, const CATString& iColumn ) ; \
virtual HRESULT OnColumnHeaderContext( const CATString& iColumn ) ; \
virtual HRESULT OnRowHeaderContext( CATBaseUnknown_var iRow ) ; \


#define ENVTIEdefine_CATIDlgTableViewController(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::OnScrollStart()  \
{ \
 (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnScrollStart()); \
} \
void  ENVTIEName::OnScroll()  \
{ \
 (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnScroll()); \
} \
void  ENVTIEName::OnScrollStop()  \
{ \
 (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnScrollStop()); \
} \
HRESULT  ENVTIEName::IsSelected( CATBaseUnknown_var iRow, CATBoolean & oSelected)  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)IsSelected(iRow,oSelected)); \
} \
HRESULT  ENVTIEName::IsSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oSelected)  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)IsSelected(iRow,iColumn,oSelected)); \
} \
HRESULT  ENVTIEName::IsPreSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oPreSelected)  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)IsPreSelected(iRow,iColumn,oPreSelected)); \
} \
HRESULT  ENVTIEName::HasSelection( const CATString& iColumn, CATBoolean & oHasSelection )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)HasSelection(iColumn,oHasSelection )); \
} \
HRESULT  ENVTIEName::OnSelect( CATBaseUnknown_var iRow, const CATString& iColumn)  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnSelect(iRow,iColumn)); \
} \
HRESULT  ENVTIEName::OnMoveOver( CATBaseUnknown_var iRow, const CATString& iColumn )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnMoveOver(iRow,iColumn )); \
} \
HRESULT  ENVTIEName::OnActivate( CATBaseUnknown_var iRow )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnActivate(iRow )); \
} \
HRESULT  ENVTIEName::OnContext( CATBaseUnknown_var iRow )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnContext(iRow )); \
} \
HRESULT  ENVTIEName::OnCellContext( CATBaseUnknown_var iRow, const CATString& iColumn )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnCellContext(iRow,iColumn )); \
} \
HRESULT  ENVTIEName::OnColumnHeaderContext( const CATString& iColumn )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnColumnHeaderContext(iColumn )); \
} \
HRESULT  ENVTIEName::OnRowHeaderContext( CATBaseUnknown_var iRow )  \
{ \
return (ENVTIECALL(CATIDlgTableViewController,ENVTIETypeLetter,ENVTIELetter)OnRowHeaderContext(iRow )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDlgTableViewController(classe)    TIECATIDlgTableViewController##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDlgTableViewController(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDlgTableViewController, classe) \
 \
 \
CATImplementTIEMethods(CATIDlgTableViewController, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDlgTableViewController, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDlgTableViewController, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDlgTableViewController, classe) \
 \
void  TIECATIDlgTableViewController##classe::OnScrollStart()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnScrollStart(); \
} \
void  TIECATIDlgTableViewController##classe::OnScroll()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnScroll(); \
} \
void  TIECATIDlgTableViewController##classe::OnScrollStop()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnScrollStop(); \
} \
HRESULT  TIECATIDlgTableViewController##classe::IsSelected( CATBaseUnknown_var iRow, CATBoolean & oSelected)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSelected(iRow,oSelected)); \
} \
HRESULT  TIECATIDlgTableViewController##classe::IsSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oSelected)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSelected(iRow,iColumn,oSelected)); \
} \
HRESULT  TIECATIDlgTableViewController##classe::IsPreSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oPreSelected)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPreSelected(iRow,iColumn,oPreSelected)); \
} \
HRESULT  TIECATIDlgTableViewController##classe::HasSelection( const CATString& iColumn, CATBoolean & oHasSelection )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasSelection(iColumn,oHasSelection )); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnSelect( CATBaseUnknown_var iRow, const CATString& iColumn)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnSelect(iRow,iColumn)); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnMoveOver( CATBaseUnknown_var iRow, const CATString& iColumn )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnMoveOver(iRow,iColumn )); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnActivate( CATBaseUnknown_var iRow )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnActivate(iRow )); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnContext( CATBaseUnknown_var iRow )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnContext(iRow )); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnCellContext( CATBaseUnknown_var iRow, const CATString& iColumn )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnCellContext(iRow,iColumn )); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnColumnHeaderContext( const CATString& iColumn )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnColumnHeaderContext(iColumn )); \
} \
HRESULT  TIECATIDlgTableViewController##classe::OnRowHeaderContext( CATBaseUnknown_var iRow )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnRowHeaderContext(iRow )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDlgTableViewController(classe) \
 \
 \
declare_TIE_CATIDlgTableViewController(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewController##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewController,"CATIDlgTableViewController",CATIDlgTableViewController::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewController(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDlgTableViewController, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewController##classe(classe::MetaObject(),CATIDlgTableViewController::MetaObject(),(void *)CreateTIECATIDlgTableViewController##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDlgTableViewController(classe) \
 \
 \
declare_TIE_CATIDlgTableViewController(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDlgTableViewController##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDlgTableViewController,"CATIDlgTableViewController",CATIDlgTableViewController::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDlgTableViewController(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDlgTableViewController, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDlgTableViewController##classe(classe::MetaObject(),CATIDlgTableViewController::MetaObject(),(void *)CreateTIECATIDlgTableViewController##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDlgTableViewController(classe) TIE_CATIDlgTableViewController(classe)
#else
#define BOA_CATIDlgTableViewController(classe) CATImplementBOA(CATIDlgTableViewController, classe)
#endif

#endif
