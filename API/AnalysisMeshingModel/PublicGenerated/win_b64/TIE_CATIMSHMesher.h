#ifndef __TIE_CATIMSHMesher
#define __TIE_CATIMSHMesher

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHMesher.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHMesher */
#define declare_TIE_CATIMSHMesher(classe) \
 \
 \
class TIECATIMSHMesher##classe : public CATIMSHMesher \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHMesher, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int IsATypeOf ( CATIMSHMeshPart * iMeshPart , const CATUnicodeString &iType ) ; \
      virtual HRESULT Check ( CATIMSHMeshPart * iMeshPart , CATMSHListOfMeshPart * &oParentMeshParts ) ; \
      virtual HRESULT Mesh ( CATIMSHMeshPart * iMeshPart ) ; \
      virtual HRESULT CloseEdition () ; \
      virtual HRESULT SaveInEdition () ; \
      virtual int IsConnecting ( CATIMSHMeshPart * iMeshPart , CATIProduct * iProduct , CATIGeometricalElement * iSupport ) ; \
      virtual HRESULT BeforeUpdating ( CATIMSHMeshPart * iMeshPart ) ; \
      virtual CATBaseUnknown * GetImplementation () ; \
};



#define ENVTIEdeclare_CATIMSHMesher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int IsATypeOf ( CATIMSHMeshPart * iMeshPart , const CATUnicodeString &iType ) ; \
virtual HRESULT Check ( CATIMSHMeshPart * iMeshPart , CATMSHListOfMeshPart * &oParentMeshParts ) ; \
virtual HRESULT Mesh ( CATIMSHMeshPart * iMeshPart ) ; \
virtual HRESULT CloseEdition () ; \
virtual HRESULT SaveInEdition () ; \
virtual int IsConnecting ( CATIMSHMeshPart * iMeshPart , CATIProduct * iProduct , CATIGeometricalElement * iSupport ) ; \
virtual HRESULT BeforeUpdating ( CATIMSHMeshPart * iMeshPart ) ; \
virtual CATBaseUnknown * GetImplementation () ; \


#define ENVTIEdefine_CATIMSHMesher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::IsATypeOf ( CATIMSHMeshPart * iMeshPart , const CATUnicodeString &iType )  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)IsATypeOf (iMeshPart ,iType )); \
} \
HRESULT  ENVTIEName::Check ( CATIMSHMeshPart * iMeshPart , CATMSHListOfMeshPart * &oParentMeshParts )  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)Check (iMeshPart ,oParentMeshParts )); \
} \
HRESULT  ENVTIEName::Mesh ( CATIMSHMeshPart * iMeshPart )  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)Mesh (iMeshPart )); \
} \
HRESULT  ENVTIEName::CloseEdition ()  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)CloseEdition ()); \
} \
HRESULT  ENVTIEName::SaveInEdition ()  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)SaveInEdition ()); \
} \
int  ENVTIEName::IsConnecting ( CATIMSHMeshPart * iMeshPart , CATIProduct * iProduct , CATIGeometricalElement * iSupport )  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)IsConnecting (iMeshPart ,iProduct ,iSupport )); \
} \
HRESULT  ENVTIEName::BeforeUpdating ( CATIMSHMeshPart * iMeshPart )  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)BeforeUpdating (iMeshPart )); \
} \
CATBaseUnknown *  ENVTIEName::GetImplementation ()  \
{ \
return (ENVTIECALL(CATIMSHMesher,ENVTIETypeLetter,ENVTIELetter)GetImplementation ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHMesher(classe)    TIECATIMSHMesher##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHMesher(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHMesher, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHMesher, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHMesher, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHMesher, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHMesher, classe) \
 \
int  TIECATIMSHMesher##classe::IsATypeOf ( CATIMSHMeshPart * iMeshPart , const CATUnicodeString &iType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsATypeOf (iMeshPart ,iType )); \
} \
HRESULT  TIECATIMSHMesher##classe::Check ( CATIMSHMeshPart * iMeshPart , CATMSHListOfMeshPart * &oParentMeshParts )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Check (iMeshPart ,oParentMeshParts )); \
} \
HRESULT  TIECATIMSHMesher##classe::Mesh ( CATIMSHMeshPart * iMeshPart )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Mesh (iMeshPart )); \
} \
HRESULT  TIECATIMSHMesher##classe::CloseEdition ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseEdition ()); \
} \
HRESULT  TIECATIMSHMesher##classe::SaveInEdition ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveInEdition ()); \
} \
int  TIECATIMSHMesher##classe::IsConnecting ( CATIMSHMeshPart * iMeshPart , CATIProduct * iProduct , CATIGeometricalElement * iSupport )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsConnecting (iMeshPart ,iProduct ,iSupport )); \
} \
HRESULT  TIECATIMSHMesher##classe::BeforeUpdating ( CATIMSHMeshPart * iMeshPart )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeforeUpdating (iMeshPart )); \
} \
CATBaseUnknown *  TIECATIMSHMesher##classe::GetImplementation ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImplementation ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHMesher(classe) \
 \
 \
declare_TIE_CATIMSHMesher(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHMesher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHMesher,"CATIMSHMesher",CATIMSHMesher::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHMesher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHMesher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHMesher##classe(classe::MetaObject(),CATIMSHMesher::MetaObject(),(void *)CreateTIECATIMSHMesher##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHMesher(classe) \
 \
 \
declare_TIE_CATIMSHMesher(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHMesher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHMesher,"CATIMSHMesher",CATIMSHMesher::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHMesher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHMesher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHMesher##classe(classe::MetaObject(),CATIMSHMesher::MetaObject(),(void *)CreateTIECATIMSHMesher##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHMesher(classe) TIE_CATIMSHMesher(classe)
#else
#define BOA_CATIMSHMesher(classe) CATImplementBOA(CATIMSHMesher, classe)
#endif

#endif
