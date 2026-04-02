#ifndef __TIE_CATIUIActivate
#define __TIE_CATIUIActivate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUIActivate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUIActivate */
#define declare_TIE_CATIUIActivate(classe) \
 \
 \
class TIECATIUIActivate##classe : public CATIUIActivate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUIActivate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void  UIActivate (CATPathElement & path) ; \
      virtual void  UIDeactivate () ; \
      virtual CATString & GetWorkshop() ; \
      virtual CATString & GetDefaultCommand() ; \
      virtual CATCmdContainer * GetContextualMenu() ; \
      virtual CATCommandGlobalUndo * GetGlobalUndo () ; \
      virtual CATDocument * GetDocument(); \
      virtual void SetDocument(CATDocument * Doc); \
      virtual void SetDropSource (CATFrmDropSource * source); \
      virtual CATFrmDropSource * GetDropSource (); \
      virtual void SetDropTarget (CATFrmDropTarget * target); \
      virtual CATFrmDropTarget * GetDropTarget (); \
      virtual void ChangePathToActivate(CATPathElement * ioPathElement) ; \
      virtual void ObjectEdition(CATBoolean iObjectEdition) ; \
};



#define ENVTIEdeclare_CATIUIActivate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void  UIActivate (CATPathElement & path) ; \
virtual void  UIDeactivate () ; \
virtual CATString & GetWorkshop() ; \
virtual CATString & GetDefaultCommand() ; \
virtual CATCmdContainer * GetContextualMenu() ; \
virtual CATCommandGlobalUndo * GetGlobalUndo () ; \
virtual CATDocument * GetDocument(); \
virtual void SetDocument(CATDocument * Doc); \
virtual void SetDropSource (CATFrmDropSource * source); \
virtual CATFrmDropSource * GetDropSource (); \
virtual void SetDropTarget (CATFrmDropTarget * target); \
virtual CATFrmDropTarget * GetDropTarget (); \
virtual void ChangePathToActivate(CATPathElement * ioPathElement) ; \
virtual void ObjectEdition(CATBoolean iObjectEdition) ; \


#define ENVTIEdefine_CATIUIActivate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void   ENVTIEName::UIActivate (CATPathElement & path)  \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)UIActivate (path)); \
} \
void   ENVTIEName::UIDeactivate ()  \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)UIDeactivate ()); \
} \
CATString &  ENVTIEName::GetWorkshop()  \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetWorkshop()); \
} \
CATString &  ENVTIEName::GetDefaultCommand()  \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetDefaultCommand()); \
} \
CATCmdContainer *  ENVTIEName::GetContextualMenu()  \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetContextualMenu()); \
} \
CATCommandGlobalUndo *  ENVTIEName::GetGlobalUndo ()  \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetGlobalUndo ()); \
} \
CATDocument *  ENVTIEName::GetDocument() \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetDocument()); \
} \
void  ENVTIEName::SetDocument(CATDocument * Doc) \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)SetDocument(Doc)); \
} \
void  ENVTIEName::SetDropSource (CATFrmDropSource * source) \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)SetDropSource (source)); \
} \
CATFrmDropSource *  ENVTIEName::GetDropSource () \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetDropSource ()); \
} \
void  ENVTIEName::SetDropTarget (CATFrmDropTarget * target) \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)SetDropTarget (target)); \
} \
CATFrmDropTarget *  ENVTIEName::GetDropTarget () \
{ \
return (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)GetDropTarget ()); \
} \
void  ENVTIEName::ChangePathToActivate(CATPathElement * ioPathElement)  \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)ChangePathToActivate(ioPathElement)); \
} \
void  ENVTIEName::ObjectEdition(CATBoolean iObjectEdition)  \
{ \
 (ENVTIECALL(CATIUIActivate,ENVTIETypeLetter,ENVTIELetter)ObjectEdition(iObjectEdition)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUIActivate(classe)    TIECATIUIActivate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUIActivate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUIActivate, classe) \
 \
 \
CATImplementTIEMethods(CATIUIActivate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIUIActivate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIUIActivate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUIActivate, classe) \
 \
void   TIECATIUIActivate##classe::UIActivate (CATPathElement & path)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UIActivate (path); \
} \
void   TIECATIUIActivate##classe::UIDeactivate ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UIDeactivate (); \
} \
CATString &  TIECATIUIActivate##classe::GetWorkshop()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWorkshop()); \
} \
CATString &  TIECATIUIActivate##classe::GetDefaultCommand()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultCommand()); \
} \
CATCmdContainer *  TIECATIUIActivate##classe::GetContextualMenu()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualMenu()); \
} \
CATCommandGlobalUndo *  TIECATIUIActivate##classe::GetGlobalUndo ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGlobalUndo ()); \
} \
CATDocument *  TIECATIUIActivate##classe::GetDocument() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocument()); \
} \
void  TIECATIUIActivate##classe::SetDocument(CATDocument * Doc) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDocument(Doc); \
} \
void  TIECATIUIActivate##classe::SetDropSource (CATFrmDropSource * source) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDropSource (source); \
} \
CATFrmDropSource *  TIECATIUIActivate##classe::GetDropSource () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDropSource ()); \
} \
void  TIECATIUIActivate##classe::SetDropTarget (CATFrmDropTarget * target) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDropTarget (target); \
} \
CATFrmDropTarget *  TIECATIUIActivate##classe::GetDropTarget () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDropTarget ()); \
} \
void  TIECATIUIActivate##classe::ChangePathToActivate(CATPathElement * ioPathElement)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ChangePathToActivate(ioPathElement); \
} \
void  TIECATIUIActivate##classe::ObjectEdition(CATBoolean iObjectEdition)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ObjectEdition(iObjectEdition); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUIActivate(classe) \
 \
 \
declare_TIE_CATIUIActivate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUIActivate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUIActivate,"CATIUIActivate",CATIUIActivate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUIActivate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUIActivate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUIActivate##classe(classe::MetaObject(),CATIUIActivate::MetaObject(),(void *)CreateTIECATIUIActivate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUIActivate(classe) \
 \
 \
declare_TIE_CATIUIActivate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUIActivate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUIActivate,"CATIUIActivate",CATIUIActivate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUIActivate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUIActivate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUIActivate##classe(classe::MetaObject(),CATIUIActivate::MetaObject(),(void *)CreateTIECATIUIActivate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUIActivate(classe) TIE_CATIUIActivate(classe)
#else
#define BOA_CATIUIActivate(classe) CATImplementBOA(CATIUIActivate, classe)
#endif

#endif
