#ifndef __TIE_CATIAPspAppFactory
#define __TIE_CATIAPspAppFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspAppFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspAppFactory */
#define declare_TIE_CATIAPspAppFactory(classe) \
 \
 \
class TIECATIAPspAppFactory##classe : public CATIAPspAppFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspAppFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ListPhysicals(CATIAProduct * iCurrentProduct, CatPspIDLDomainID iDomainID, CATIAPspListOfObjects *& oListPhysicals); \
      virtual HRESULT __stdcall GetLogicalLine(CATIAProduct * iCurrentProduct, const CATBSTR & iLogicalLineID, CATIAPspLogicalLine *& oLogicalLine); \
      virtual HRESULT __stdcall ListLogicalLines(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListLogLines); \
      virtual HRESULT __stdcall DeleteLogicalLine(CATIAPspLogicalLine * iLogicalLine); \
      virtual HRESULT __stdcall GetCompartment(CATIAProduct * iCurrentProduct, const CATBSTR & iCompartmentID, CATIAPspGroup *& oCompartment); \
      virtual HRESULT __stdcall ListCompartments(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListCompartments); \
      virtual HRESULT __stdcall DeleteCompartment(CATIAPspGroup * iCompartment); \
      virtual HRESULT __stdcall CreateGroup(CATIAProduct * iCurrentProduct, const CATBSTR & iGroupType, const CATBSTR & iGroupID, CATIAPspGroup *& oGroup); \
      virtual HRESULT __stdcall ListGroups(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListGroups); \
      virtual HRESULT __stdcall DeleteGroup(CATIAPspGroup * iGroup); \
      virtual HRESULT __stdcall DeletePart(CATIAProduct * iPart); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspAppFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ListPhysicals(CATIAProduct * iCurrentProduct, CatPspIDLDomainID iDomainID, CATIAPspListOfObjects *& oListPhysicals); \
virtual HRESULT __stdcall GetLogicalLine(CATIAProduct * iCurrentProduct, const CATBSTR & iLogicalLineID, CATIAPspLogicalLine *& oLogicalLine); \
virtual HRESULT __stdcall ListLogicalLines(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListLogLines); \
virtual HRESULT __stdcall DeleteLogicalLine(CATIAPspLogicalLine * iLogicalLine); \
virtual HRESULT __stdcall GetCompartment(CATIAProduct * iCurrentProduct, const CATBSTR & iCompartmentID, CATIAPspGroup *& oCompartment); \
virtual HRESULT __stdcall ListCompartments(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListCompartments); \
virtual HRESULT __stdcall DeleteCompartment(CATIAPspGroup * iCompartment); \
virtual HRESULT __stdcall CreateGroup(CATIAProduct * iCurrentProduct, const CATBSTR & iGroupType, const CATBSTR & iGroupID, CATIAPspGroup *& oGroup); \
virtual HRESULT __stdcall ListGroups(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListGroups); \
virtual HRESULT __stdcall DeleteGroup(CATIAPspGroup * iGroup); \
virtual HRESULT __stdcall DeletePart(CATIAProduct * iPart); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspAppFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ListPhysicals(CATIAProduct * iCurrentProduct, CatPspIDLDomainID iDomainID, CATIAPspListOfObjects *& oListPhysicals) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)ListPhysicals(iCurrentProduct,iDomainID,oListPhysicals)); \
} \
HRESULT __stdcall  ENVTIEName::GetLogicalLine(CATIAProduct * iCurrentProduct, const CATBSTR & iLogicalLineID, CATIAPspLogicalLine *& oLogicalLine) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)GetLogicalLine(iCurrentProduct,iLogicalLineID,oLogicalLine)); \
} \
HRESULT __stdcall  ENVTIEName::ListLogicalLines(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListLogLines) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)ListLogicalLines(iCurrentProduct,oListLogLines)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteLogicalLine(CATIAPspLogicalLine * iLogicalLine) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)DeleteLogicalLine(iLogicalLine)); \
} \
HRESULT __stdcall  ENVTIEName::GetCompartment(CATIAProduct * iCurrentProduct, const CATBSTR & iCompartmentID, CATIAPspGroup *& oCompartment) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)GetCompartment(iCurrentProduct,iCompartmentID,oCompartment)); \
} \
HRESULT __stdcall  ENVTIEName::ListCompartments(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListCompartments) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)ListCompartments(iCurrentProduct,oListCompartments)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteCompartment(CATIAPspGroup * iCompartment) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)DeleteCompartment(iCompartment)); \
} \
HRESULT __stdcall  ENVTIEName::CreateGroup(CATIAProduct * iCurrentProduct, const CATBSTR & iGroupType, const CATBSTR & iGroupID, CATIAPspGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)CreateGroup(iCurrentProduct,iGroupType,iGroupID,oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::ListGroups(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListGroups) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)ListGroups(iCurrentProduct,oListGroups)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteGroup(CATIAPspGroup * iGroup) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)DeleteGroup(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::DeletePart(CATIAProduct * iPart) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)DeletePart(iPart)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspAppFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspAppFactory(classe)    TIECATIAPspAppFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspAppFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspAppFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspAppFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspAppFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspAppFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspAppFactory, classe) \
 \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::ListPhysicals(CATIAProduct * iCurrentProduct, CatPspIDLDomainID iDomainID, CATIAPspListOfObjects *& oListPhysicals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCurrentProduct,&iDomainID,&oListPhysicals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListPhysicals(iCurrentProduct,iDomainID,oListPhysicals); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCurrentProduct,&iDomainID,&oListPhysicals); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::GetLogicalLine(CATIAProduct * iCurrentProduct, const CATBSTR & iLogicalLineID, CATIAPspLogicalLine *& oLogicalLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurrentProduct,&iLogicalLineID,&oLogicalLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLogicalLine(iCurrentProduct,iLogicalLineID,oLogicalLine); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurrentProduct,&iLogicalLineID,&oLogicalLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::ListLogicalLines(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListLogLines) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCurrentProduct,&oListLogLines); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListLogicalLines(iCurrentProduct,oListLogLines); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCurrentProduct,&oListLogLines); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::DeleteLogicalLine(CATIAPspLogicalLine * iLogicalLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLogicalLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteLogicalLine(iLogicalLine); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLogicalLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::GetCompartment(CATIAProduct * iCurrentProduct, const CATBSTR & iCompartmentID, CATIAPspGroup *& oCompartment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iCurrentProduct,&iCompartmentID,&oCompartment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompartment(iCurrentProduct,iCompartmentID,oCompartment); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iCurrentProduct,&iCompartmentID,&oCompartment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::ListCompartments(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListCompartments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCurrentProduct,&oListCompartments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListCompartments(iCurrentProduct,oListCompartments); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCurrentProduct,&oListCompartments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::DeleteCompartment(CATIAPspGroup * iCompartment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iCompartment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteCompartment(iCompartment); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iCompartment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::CreateGroup(CATIAProduct * iCurrentProduct, const CATBSTR & iGroupType, const CATBSTR & iGroupID, CATIAPspGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCurrentProduct,&iGroupType,&iGroupID,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGroup(iCurrentProduct,iGroupType,iGroupID,oGroup); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCurrentProduct,&iGroupType,&iGroupID,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::ListGroups(CATIAProduct * iCurrentProduct, CATIAPspListOfObjects *& oListGroups) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iCurrentProduct,&oListGroups); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGroups(iCurrentProduct,oListGroups); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iCurrentProduct,&oListGroups); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::DeleteGroup(CATIAPspGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteGroup(iGroup); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspAppFactory##classe::DeletePart(CATIAProduct * iPart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iPart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeletePart(iPart); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iPart); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAppFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAppFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAppFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAppFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAppFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspAppFactory(classe) \
 \
 \
declare_TIE_CATIAPspAppFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspAppFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspAppFactory,"CATIAPspAppFactory",CATIAPspAppFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspAppFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspAppFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspAppFactory##classe(classe::MetaObject(),CATIAPspAppFactory::MetaObject(),(void *)CreateTIECATIAPspAppFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspAppFactory(classe) \
 \
 \
declare_TIE_CATIAPspAppFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspAppFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspAppFactory,"CATIAPspAppFactory",CATIAPspAppFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspAppFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspAppFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspAppFactory##classe(classe::MetaObject(),CATIAPspAppFactory::MetaObject(),(void *)CreateTIECATIAPspAppFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspAppFactory(classe) TIE_CATIAPspAppFactory(classe)
#else
#define BOA_CATIAPspAppFactory(classe) CATImplementBOA(CATIAPspAppFactory, classe)
#endif

#endif
