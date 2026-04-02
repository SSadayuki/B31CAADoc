#ifndef __TIE_CATICldCAAUtilities
#define __TIE_CATICldCAAUtilities

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICldCAAUtilities.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICldCAAUtilities */
#define declare_TIE_CATICldCAAUtilities(classe) \
 \
 \
class TIECATICldCAAUtilities##classe : public CATICldCAAUtilities \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICldCAAUtilities, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT InsertInProceduralView (const CATISpecObject_var &iFeature, const CATBoolean          iAfterCurrent = TRUE, const CATBoolean          iAsCurrent = TRUE) ; \
      virtual HRESULT UpdateResult (const CATISpecObject_var &iFeature, CATCldBody*               iGeometry, const CATBoolean          iUpdate = TRUE) ; \
      virtual CATCldBody* GetCldGeometry (const CATISpecObject_var &iFeature) ; \
};



#define ENVTIEdeclare_CATICldCAAUtilities(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT InsertInProceduralView (const CATISpecObject_var &iFeature, const CATBoolean          iAfterCurrent = TRUE, const CATBoolean          iAsCurrent = TRUE) ; \
virtual HRESULT UpdateResult (const CATISpecObject_var &iFeature, CATCldBody*               iGeometry, const CATBoolean          iUpdate = TRUE) ; \
virtual CATCldBody* GetCldGeometry (const CATISpecObject_var &iFeature) ; \


#define ENVTIEdefine_CATICldCAAUtilities(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::InsertInProceduralView (const CATISpecObject_var &iFeature, const CATBoolean          iAfterCurrent , const CATBoolean          iAsCurrent )  \
{ \
return (ENVTIECALL(CATICldCAAUtilities,ENVTIETypeLetter,ENVTIELetter)InsertInProceduralView (iFeature,iAfterCurrent ,iAsCurrent )); \
} \
HRESULT  ENVTIEName::UpdateResult (const CATISpecObject_var &iFeature, CATCldBody*               iGeometry, const CATBoolean          iUpdate )  \
{ \
return (ENVTIECALL(CATICldCAAUtilities,ENVTIETypeLetter,ENVTIELetter)UpdateResult (iFeature,iGeometry,iUpdate )); \
} \
CATCldBody*  ENVTIEName::GetCldGeometry (const CATISpecObject_var &iFeature)  \
{ \
return (ENVTIECALL(CATICldCAAUtilities,ENVTIETypeLetter,ENVTIELetter)GetCldGeometry (iFeature)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICldCAAUtilities(classe)    TIECATICldCAAUtilities##classe


/* Common methods inside a TIE */
#define common_TIE_CATICldCAAUtilities(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICldCAAUtilities, classe) \
 \
 \
CATImplementTIEMethods(CATICldCAAUtilities, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICldCAAUtilities, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICldCAAUtilities, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICldCAAUtilities, classe) \
 \
HRESULT  TIECATICldCAAUtilities##classe::InsertInProceduralView (const CATISpecObject_var &iFeature, const CATBoolean          iAfterCurrent , const CATBoolean          iAsCurrent )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertInProceduralView (iFeature,iAfterCurrent ,iAsCurrent )); \
} \
HRESULT  TIECATICldCAAUtilities##classe::UpdateResult (const CATISpecObject_var &iFeature, CATCldBody*               iGeometry, const CATBoolean          iUpdate )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateResult (iFeature,iGeometry,iUpdate )); \
} \
CATCldBody*  TIECATICldCAAUtilities##classe::GetCldGeometry (const CATISpecObject_var &iFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCldGeometry (iFeature)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICldCAAUtilities(classe) \
 \
 \
declare_TIE_CATICldCAAUtilities(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICldCAAUtilities##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICldCAAUtilities,"CATICldCAAUtilities",CATICldCAAUtilities::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICldCAAUtilities(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICldCAAUtilities, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICldCAAUtilities##classe(classe::MetaObject(),CATICldCAAUtilities::MetaObject(),(void *)CreateTIECATICldCAAUtilities##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICldCAAUtilities(classe) \
 \
 \
declare_TIE_CATICldCAAUtilities(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICldCAAUtilities##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICldCAAUtilities,"CATICldCAAUtilities",CATICldCAAUtilities::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICldCAAUtilities(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICldCAAUtilities, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICldCAAUtilities##classe(classe::MetaObject(),CATICldCAAUtilities::MetaObject(),(void *)CreateTIECATICldCAAUtilities##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICldCAAUtilities(classe) TIE_CATICldCAAUtilities(classe)
#else
#define BOA_CATICldCAAUtilities(classe) CATImplementBOA(CATICldCAAUtilities, classe)
#endif

#endif
