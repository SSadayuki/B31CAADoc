#ifndef __TIE_CATIEhfManageLengthTolerance
#define __TIE_CATIEhfManageLengthTolerance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhfManageLengthTolerance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhfManageLengthTolerance */
#define declare_TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
class TIECATIEhfManageLengthTolerance##classe : public CATIEhfManageLengthTolerance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhfManageLengthTolerance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RemoveLengthTolerance( CATListValCATBaseUnknown_var * ipListLengthTolerances, CATIProduct                  * ipIProdRoot, CATBoolean                     iKeepExtraLength = FALSE ) ; \
      virtual HRESULT ListOfLengthTolerance( CATListValCATBaseUnknown_var ** oListLengthTolerances ) ; \
      virtual HRESULT CreateLengthTolerance( CATIEhfLengthTolerance ** opILengthTolerance, const CATBaseUnknown * ipFixExtremity, const CATBaseUnknown * ipMoveExtremity, CATIProduct          * ipIProdRoot, const CATBaseUnknown * ipDimension, const CATICkeInst * ipLengthTolerance ) ; \
};



#define ENVTIEdeclare_CATIEhfManageLengthTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RemoveLengthTolerance( CATListValCATBaseUnknown_var * ipListLengthTolerances, CATIProduct                  * ipIProdRoot, CATBoolean                     iKeepExtraLength = FALSE ) ; \
virtual HRESULT ListOfLengthTolerance( CATListValCATBaseUnknown_var ** oListLengthTolerances ) ; \
virtual HRESULT CreateLengthTolerance( CATIEhfLengthTolerance ** opILengthTolerance, const CATBaseUnknown * ipFixExtremity, const CATBaseUnknown * ipMoveExtremity, CATIProduct          * ipIProdRoot, const CATBaseUnknown * ipDimension, const CATICkeInst * ipLengthTolerance ) ; \


#define ENVTIEdefine_CATIEhfManageLengthTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RemoveLengthTolerance( CATListValCATBaseUnknown_var * ipListLengthTolerances, CATIProduct                  * ipIProdRoot, CATBoolean                     iKeepExtraLength )  \
{ \
return (ENVTIECALL(CATIEhfManageLengthTolerance,ENVTIETypeLetter,ENVTIELetter)RemoveLengthTolerance(ipListLengthTolerances,ipIProdRoot,iKeepExtraLength )); \
} \
HRESULT  ENVTIEName::ListOfLengthTolerance( CATListValCATBaseUnknown_var ** oListLengthTolerances )  \
{ \
return (ENVTIECALL(CATIEhfManageLengthTolerance,ENVTIETypeLetter,ENVTIELetter)ListOfLengthTolerance(oListLengthTolerances )); \
} \
HRESULT  ENVTIEName::CreateLengthTolerance( CATIEhfLengthTolerance ** opILengthTolerance, const CATBaseUnknown * ipFixExtremity, const CATBaseUnknown * ipMoveExtremity, CATIProduct          * ipIProdRoot, const CATBaseUnknown * ipDimension, const CATICkeInst * ipLengthTolerance )  \
{ \
return (ENVTIECALL(CATIEhfManageLengthTolerance,ENVTIETypeLetter,ENVTIELetter)CreateLengthTolerance(opILengthTolerance,ipFixExtremity,ipMoveExtremity,ipIProdRoot,ipDimension,ipLengthTolerance )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhfManageLengthTolerance(classe)    TIECATIEhfManageLengthTolerance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhfManageLengthTolerance, classe) \
 \
 \
CATImplementTIEMethods(CATIEhfManageLengthTolerance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhfManageLengthTolerance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhfManageLengthTolerance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhfManageLengthTolerance, classe) \
 \
HRESULT  TIECATIEhfManageLengthTolerance##classe::RemoveLengthTolerance( CATListValCATBaseUnknown_var * ipListLengthTolerances, CATIProduct                  * ipIProdRoot, CATBoolean                     iKeepExtraLength )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLengthTolerance(ipListLengthTolerances,ipIProdRoot,iKeepExtraLength )); \
} \
HRESULT  TIECATIEhfManageLengthTolerance##classe::ListOfLengthTolerance( CATListValCATBaseUnknown_var ** oListLengthTolerances )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListOfLengthTolerance(oListLengthTolerances )); \
} \
HRESULT  TIECATIEhfManageLengthTolerance##classe::CreateLengthTolerance( CATIEhfLengthTolerance ** opILengthTolerance, const CATBaseUnknown * ipFixExtremity, const CATBaseUnknown * ipMoveExtremity, CATIProduct          * ipIProdRoot, const CATBaseUnknown * ipDimension, const CATICkeInst * ipLengthTolerance )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLengthTolerance(opILengthTolerance,ipFixExtremity,ipMoveExtremity,ipIProdRoot,ipDimension,ipLengthTolerance )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
declare_TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfManageLengthTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfManageLengthTolerance,"CATIEhfManageLengthTolerance",CATIEhfManageLengthTolerance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhfManageLengthTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfManageLengthTolerance##classe(classe::MetaObject(),CATIEhfManageLengthTolerance::MetaObject(),(void *)CreateTIECATIEhfManageLengthTolerance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhfManageLengthTolerance(classe) \
 \
 \
declare_TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfManageLengthTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfManageLengthTolerance,"CATIEhfManageLengthTolerance",CATIEhfManageLengthTolerance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfManageLengthTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhfManageLengthTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfManageLengthTolerance##classe(classe::MetaObject(),CATIEhfManageLengthTolerance::MetaObject(),(void *)CreateTIECATIEhfManageLengthTolerance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhfManageLengthTolerance(classe) TIE_CATIEhfManageLengthTolerance(classe)
#else
#define BOA_CATIEhfManageLengthTolerance(classe) CATImplementBOA(CATIEhfManageLengthTolerance, classe)
#endif

#endif
