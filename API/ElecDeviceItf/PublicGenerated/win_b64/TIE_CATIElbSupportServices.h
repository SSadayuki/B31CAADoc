#ifndef __TIE_CATIElbSupportServices
#define __TIE_CATIElbSupportServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbSupportServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbSupportServices */
#define declare_TIE_CATIElbSupportServices(classe) \
 \
 \
class TIECATIElbSupportServices##classe : public CATIElbSupportServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbSupportServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListSegments( CATListValCATBaseUnknown_var ** ippListSupports, CATListOfInt ** ippListOfSectionNumber = 0, CATListPtrCATListValCATBaseUnknown_var ** oppListOfListOfSegments = 0, CATListPtrCATListOfDouble **oppListOfListOfSegmentU = 0, CATListPtrCATListOfDouble **oppListOfListOfSegmentV = 0) ; \
};



#define ENVTIEdeclare_CATIElbSupportServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListSegments( CATListValCATBaseUnknown_var ** ippListSupports, CATListOfInt ** ippListOfSectionNumber = 0, CATListPtrCATListValCATBaseUnknown_var ** oppListOfListOfSegments = 0, CATListPtrCATListOfDouble **oppListOfListOfSegmentU = 0, CATListPtrCATListOfDouble **oppListOfListOfSegmentV = 0) ; \


#define ENVTIEdefine_CATIElbSupportServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListSegments( CATListValCATBaseUnknown_var ** ippListSupports, CATListOfInt ** ippListOfSectionNumber , CATListPtrCATListValCATBaseUnknown_var ** oppListOfListOfSegments , CATListPtrCATListOfDouble **oppListOfListOfSegmentU , CATListPtrCATListOfDouble **oppListOfListOfSegmentV )  \
{ \
return (ENVTIECALL(CATIElbSupportServices,ENVTIETypeLetter,ENVTIELetter)ListSegments(ippListSupports,ippListOfSectionNumber ,oppListOfListOfSegments ,oppListOfListOfSegmentU ,oppListOfListOfSegmentV )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbSupportServices(classe)    TIECATIElbSupportServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbSupportServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbSupportServices, classe) \
 \
 \
CATImplementTIEMethods(CATIElbSupportServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbSupportServices, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbSupportServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbSupportServices, classe) \
 \
HRESULT  TIECATIElbSupportServices##classe::ListSegments( CATListValCATBaseUnknown_var ** ippListSupports, CATListOfInt ** ippListOfSectionNumber , CATListPtrCATListValCATBaseUnknown_var ** oppListOfListOfSegments , CATListPtrCATListOfDouble **oppListOfListOfSegmentU , CATListPtrCATListOfDouble **oppListOfListOfSegmentV )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListSegments(ippListSupports,ippListOfSectionNumber ,oppListOfListOfSegments ,oppListOfListOfSegmentU ,oppListOfListOfSegmentV )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbSupportServices(classe) \
 \
 \
declare_TIE_CATIElbSupportServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbSupportServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbSupportServices,"CATIElbSupportServices",CATIElbSupportServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbSupportServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbSupportServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbSupportServices##classe(classe::MetaObject(),CATIElbSupportServices::MetaObject(),(void *)CreateTIECATIElbSupportServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbSupportServices(classe) \
 \
 \
declare_TIE_CATIElbSupportServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbSupportServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbSupportServices,"CATIElbSupportServices",CATIElbSupportServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbSupportServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbSupportServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbSupportServices##classe(classe::MetaObject(),CATIElbSupportServices::MetaObject(),(void *)CreateTIECATIElbSupportServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbSupportServices(classe) TIE_CATIElbSupportServices(classe)
#else
#define BOA_CATIElbSupportServices(classe) CATImplementBOA(CATIElbSupportServices, classe)
#endif

#endif
