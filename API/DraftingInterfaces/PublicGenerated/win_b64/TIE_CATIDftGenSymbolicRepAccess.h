#ifndef __TIE_CATIDftGenSymbolicRepAccess
#define __TIE_CATIDftGenSymbolicRepAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSymbolicRepAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSymbolicRepAccess */
#define declare_TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
class TIECATIDftGenSymbolicRepAccess##classe : public CATIDftGenSymbolicRepAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSymbolicRepAccess, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RetrieveSymbolicReps (CATILinkableObject* iFeat, CATIProduct* iProduct, CATListPtrCATDftSymbolicRepInfo& ioPreviouslyCreatedSR) const ; \
      virtual HRESULT RequestObjectDeletion (CATBaseUnknown* i2DObjectToDestroy) ; \
};



#define ENVTIEdeclare_CATIDftGenSymbolicRepAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RetrieveSymbolicReps (CATILinkableObject* iFeat, CATIProduct* iProduct, CATListPtrCATDftSymbolicRepInfo& ioPreviouslyCreatedSR) const ; \
virtual HRESULT RequestObjectDeletion (CATBaseUnknown* i2DObjectToDestroy) ; \


#define ENVTIEdefine_CATIDftGenSymbolicRepAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RetrieveSymbolicReps (CATILinkableObject* iFeat, CATIProduct* iProduct, CATListPtrCATDftSymbolicRepInfo& ioPreviouslyCreatedSR) const  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRepAccess,ENVTIETypeLetter,ENVTIELetter)RetrieveSymbolicReps (iFeat,iProduct,ioPreviouslyCreatedSR)); \
} \
HRESULT  ENVTIEName::RequestObjectDeletion (CATBaseUnknown* i2DObjectToDestroy)  \
{ \
return (ENVTIECALL(CATIDftGenSymbolicRepAccess,ENVTIETypeLetter,ENVTIELetter)RequestObjectDeletion (i2DObjectToDestroy)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSymbolicRepAccess(classe)    TIECATIDftGenSymbolicRepAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSymbolicRepAccess, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSymbolicRepAccess, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSymbolicRepAccess, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSymbolicRepAccess, classe) \
 \
HRESULT  TIECATIDftGenSymbolicRepAccess##classe::RetrieveSymbolicReps (CATILinkableObject* iFeat, CATIProduct* iProduct, CATListPtrCATDftSymbolicRepInfo& ioPreviouslyCreatedSR) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetrieveSymbolicReps (iFeat,iProduct,ioPreviouslyCreatedSR)); \
} \
HRESULT  TIECATIDftGenSymbolicRepAccess##classe::RequestObjectDeletion (CATBaseUnknown* i2DObjectToDestroy)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RequestObjectDeletion (i2DObjectToDestroy)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
declare_TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSymbolicRepAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSymbolicRepAccess,"CATIDftGenSymbolicRepAccess",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSymbolicRepAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSymbolicRepAccess##classe(classe::MetaObject(),TIECATIDftGenSymbolicRepAccess##classe::MetaObject(),(void *)CreateTIECATIDftGenSymbolicRepAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
declare_TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSymbolicRepAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSymbolicRepAccess,"CATIDftGenSymbolicRepAccess",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSymbolicRepAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSymbolicRepAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSymbolicRepAccess##classe(classe::MetaObject(),TIECATIDftGenSymbolicRepAccess##classe::MetaObject(),(void *)CreateTIECATIDftGenSymbolicRepAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSymbolicRepAccess(classe) TIE_CATIDftGenSymbolicRepAccess(classe)
#else
#define BOA_CATIDftGenSymbolicRepAccess(classe) CATImplementBOA(CATIDftGenSymbolicRepAccess, classe)
#endif

#endif
