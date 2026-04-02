#ifndef __TIE_ENOIACD5Structure
#define __TIE_ENOIACD5Structure

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "ENOIACD5Structure.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIACD5Structure */
#define declare_TIE_ENOIACD5Structure(classe) \
 \
 \
class TIEENOIACD5Structure##classe : public ENOIACD5Structure \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIACD5Structure, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Include(ENOIACD5ID * iID); \
      virtual HRESULT __stdcall GetRoot(ENOIACD5ID *& oID); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_ENOIACD5Structure(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Include(ENOIACD5ID * iID); \
virtual HRESULT __stdcall GetRoot(ENOIACD5ID *& oID); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_ENOIACD5Structure(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Include(ENOIACD5ID * iID) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)Include(iID)); \
} \
HRESULT __stdcall  ENVTIEName::GetRoot(ENOIACD5ID *& oID) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)GetRoot(oID)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(ENOIACD5Structure,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIACD5Structure(classe)    TIEENOIACD5Structure##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIACD5Structure(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIACD5Structure, classe) \
 \
 \
CATImplementTIEMethods(ENOIACD5Structure, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIACD5Structure, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIACD5Structure, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIACD5Structure, classe) \
 \
HRESULT __stdcall  TIEENOIACD5Structure##classe::Include(ENOIACD5ID * iID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Include(iID); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5Structure##classe::GetRoot(ENOIACD5ID *& oID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRoot(oID); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oID); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Structure##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Structure##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Structure##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Structure##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5Structure##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIACD5Structure(classe) \
 \
 \
declare_TIE_ENOIACD5Structure(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5Structure##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5Structure,"ENOIACD5Structure",ENOIACD5Structure::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5Structure(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIACD5Structure, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5Structure##classe(classe::MetaObject(),ENOIACD5Structure::MetaObject(),(void *)CreateTIEENOIACD5Structure##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIACD5Structure(classe) \
 \
 \
declare_TIE_ENOIACD5Structure(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5Structure##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5Structure,"ENOIACD5Structure",ENOIACD5Structure::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5Structure(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIACD5Structure, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5Structure##classe(classe::MetaObject(),ENOIACD5Structure::MetaObject(),(void *)CreateTIEENOIACD5Structure##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIACD5Structure(classe) TIE_ENOIACD5Structure(classe)
#else
#define BOA_ENOIACD5Structure(classe) CATImplementBOA(ENOIACD5Structure, classe)
#endif

#endif
