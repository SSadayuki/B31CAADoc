#ifndef __TIE_CATIExchangeBoundaryRepresentation
#define __TIE_CATIExchangeBoundaryRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeBoundaryRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeBoundaryRepresentation */
#define declare_TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
class TIECATIExchangeBoundaryRepresentation##classe : public CATIExchangeBoundaryRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeBoundaryRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATIExchangeBody_var* EnumBodies(CATIExchangeTransformation* iTransf =0 ) const ; \
      virtual CATListValCATBaseUnknown_var* EnumGeometricalElements(CATIExchangeTransformation* iTransf =0 ) const ; \
};



#define ENVTIEdeclare_CATIExchangeBoundaryRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATIExchangeBody_var* EnumBodies(CATIExchangeTransformation* iTransf =0 ) const ; \
virtual CATListValCATBaseUnknown_var* EnumGeometricalElements(CATIExchangeTransformation* iTransf =0 ) const ; \


#define ENVTIEdefine_CATIExchangeBoundaryRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATIExchangeBody_var*  ENVTIEName::EnumBodies(CATIExchangeTransformation* iTransf ) const  \
{ \
return (ENVTIECALL(CATIExchangeBoundaryRepresentation,ENVTIETypeLetter,ENVTIELetter)EnumBodies(iTransf )); \
} \
CATListValCATBaseUnknown_var*  ENVTIEName::EnumGeometricalElements(CATIExchangeTransformation* iTransf ) const  \
{ \
return (ENVTIECALL(CATIExchangeBoundaryRepresentation,ENVTIETypeLetter,ENVTIELetter)EnumGeometricalElements(iTransf )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeBoundaryRepresentation(classe)    TIECATIExchangeBoundaryRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeBoundaryRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeBoundaryRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeBoundaryRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeBoundaryRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeBoundaryRepresentation, classe) \
 \
CATListValCATIExchangeBody_var*  TIECATIExchangeBoundaryRepresentation##classe::EnumBodies(CATIExchangeTransformation* iTransf ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumBodies(iTransf )); \
} \
CATListValCATBaseUnknown_var*  TIECATIExchangeBoundaryRepresentation##classe::EnumGeometricalElements(CATIExchangeTransformation* iTransf ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumGeometricalElements(iTransf )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBoundaryRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBoundaryRepresentation,"CATIExchangeBoundaryRepresentation",CATIExchangeBoundaryRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeBoundaryRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBoundaryRepresentation##classe(classe::MetaObject(),CATIExchangeBoundaryRepresentation::MetaObject(),(void *)CreateTIECATIExchangeBoundaryRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBoundaryRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBoundaryRepresentation,"CATIExchangeBoundaryRepresentation",CATIExchangeBoundaryRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBoundaryRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeBoundaryRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBoundaryRepresentation##classe(classe::MetaObject(),CATIExchangeBoundaryRepresentation::MetaObject(),(void *)CreateTIECATIExchangeBoundaryRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeBoundaryRepresentation(classe) TIE_CATIExchangeBoundaryRepresentation(classe)
#else
#define BOA_CATIExchangeBoundaryRepresentation(classe) CATImplementBOA(CATIExchangeBoundaryRepresentation, classe)
#endif

#endif
