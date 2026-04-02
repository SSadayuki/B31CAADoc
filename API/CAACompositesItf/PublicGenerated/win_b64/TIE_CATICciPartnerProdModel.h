#ifndef __TIE_CATICciPartnerProdModel
#define __TIE_CATICciPartnerProdModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerProdModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerProdModel */
#define declare_TIE_CATICciPartnerProdModel(classe) \
 \
 \
class TIECATICciPartnerProdModel##classe : public CATICciPartnerProdModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerProdModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   InitPartnerProducibility  (CATISpecObject_var spProducibility ); \
      virtual HRESULT   InitPartnerProducibility (CATICciProducibility_var ispProducibility); \
      virtual HRESULT   SetPartnerProducibilityModel  (CATISpecObject_var spProducibility, int & oHasBeenChanged ); \
      virtual HRESULT   SetPartnerProducibilityModel (CATICciProducibility_var ispProducibility, int & oHasBeenChanged) ; \
};



#define ENVTIEdeclare_CATICciPartnerProdModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   InitPartnerProducibility  (CATISpecObject_var spProducibility ); \
virtual HRESULT   InitPartnerProducibility (CATICciProducibility_var ispProducibility); \
virtual HRESULT   SetPartnerProducibilityModel  (CATISpecObject_var spProducibility, int & oHasBeenChanged ); \
virtual HRESULT   SetPartnerProducibilityModel (CATICciProducibility_var ispProducibility, int & oHasBeenChanged) ; \


#define ENVTIEdefine_CATICciPartnerProdModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::InitPartnerProducibility  (CATISpecObject_var spProducibility ) \
{ \
return (ENVTIECALL(CATICciPartnerProdModel,ENVTIETypeLetter,ENVTIELetter)InitPartnerProducibility  (spProducibility )); \
} \
HRESULT    ENVTIEName::InitPartnerProducibility (CATICciProducibility_var ispProducibility) \
{ \
return (ENVTIECALL(CATICciPartnerProdModel,ENVTIETypeLetter,ENVTIELetter)InitPartnerProducibility (ispProducibility)); \
} \
HRESULT    ENVTIEName::SetPartnerProducibilityModel  (CATISpecObject_var spProducibility, int & oHasBeenChanged ) \
{ \
return (ENVTIECALL(CATICciPartnerProdModel,ENVTIETypeLetter,ENVTIELetter)SetPartnerProducibilityModel  (spProducibility,oHasBeenChanged )); \
} \
HRESULT    ENVTIEName::SetPartnerProducibilityModel (CATICciProducibility_var ispProducibility, int & oHasBeenChanged)  \
{ \
return (ENVTIECALL(CATICciPartnerProdModel,ENVTIETypeLetter,ENVTIELetter)SetPartnerProducibilityModel (ispProducibility,oHasBeenChanged)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerProdModel(classe)    TIECATICciPartnerProdModel##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerProdModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerProdModel, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerProdModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerProdModel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerProdModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerProdModel, classe) \
 \
HRESULT    TIECATICciPartnerProdModel##classe::InitPartnerProducibility  (CATISpecObject_var spProducibility ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitPartnerProducibility  (spProducibility )); \
} \
HRESULT    TIECATICciPartnerProdModel##classe::InitPartnerProducibility (CATICciProducibility_var ispProducibility) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitPartnerProducibility (ispProducibility)); \
} \
HRESULT    TIECATICciPartnerProdModel##classe::SetPartnerProducibilityModel  (CATISpecObject_var spProducibility, int & oHasBeenChanged ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartnerProducibilityModel  (spProducibility,oHasBeenChanged )); \
} \
HRESULT    TIECATICciPartnerProdModel##classe::SetPartnerProducibilityModel (CATICciProducibility_var ispProducibility, int & oHasBeenChanged)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartnerProducibilityModel (ispProducibility,oHasBeenChanged)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerProdModel(classe) \
 \
 \
declare_TIE_CATICciPartnerProdModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdModel,"CATICciPartnerProdModel",CATICciPartnerProdModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerProdModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdModel##classe(classe::MetaObject(),CATICciPartnerProdModel::MetaObject(),(void *)CreateTIECATICciPartnerProdModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerProdModel(classe) \
 \
 \
declare_TIE_CATICciPartnerProdModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdModel,"CATICciPartnerProdModel",CATICciPartnerProdModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerProdModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdModel##classe(classe::MetaObject(),CATICciPartnerProdModel::MetaObject(),(void *)CreateTIECATICciPartnerProdModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerProdModel(classe) TIE_CATICciPartnerProdModel(classe)
#else
#define BOA_CATICciPartnerProdModel(classe) CATImplementBOA(CATICciPartnerProdModel, classe)
#endif

#endif
