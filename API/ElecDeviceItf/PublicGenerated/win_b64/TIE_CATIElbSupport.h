#ifndef __TIE_CATIElbSupport
#define __TIE_CATIElbSupport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbSupport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbSupport */
#define declare_TIE_CATIElbSupport(classe) \
 \
 \
class TIECATIElbSupport##classe : public CATIElbSupport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbSupport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNumberOfSections(int &oNbSections) ; \
      virtual HRESULT ListSegments(CATListValCATBaseUnknown_var **oppListOfSegments, int                            iSectionNumber = 1, CATListOfDouble              **oppListOfSegmentU = 0, CATListOfDouble              **oppListOfSegmentV = 0) ; \
      virtual HRESULT SetSegmentPositions(CATListValCATBaseUnknown_var *ipListOfSegments, CATListOfDouble              *ipListOfSegmentU, CATListOfDouble              *ipListOfSegmentV, int                           iSectionNumber = 1) ; \
};



#define ENVTIEdeclare_CATIElbSupport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNumberOfSections(int &oNbSections) ; \
virtual HRESULT ListSegments(CATListValCATBaseUnknown_var **oppListOfSegments, int                            iSectionNumber = 1, CATListOfDouble              **oppListOfSegmentU = 0, CATListOfDouble              **oppListOfSegmentV = 0) ; \
virtual HRESULT SetSegmentPositions(CATListValCATBaseUnknown_var *ipListOfSegments, CATListOfDouble              *ipListOfSegmentU, CATListOfDouble              *ipListOfSegmentV, int                           iSectionNumber = 1) ; \


#define ENVTIEdefine_CATIElbSupport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNumberOfSections(int &oNbSections)  \
{ \
return (ENVTIECALL(CATIElbSupport,ENVTIETypeLetter,ENVTIELetter)GetNumberOfSections(oNbSections)); \
} \
HRESULT  ENVTIEName::ListSegments(CATListValCATBaseUnknown_var **oppListOfSegments, int                            iSectionNumber , CATListOfDouble              **oppListOfSegmentU , CATListOfDouble              **oppListOfSegmentV )  \
{ \
return (ENVTIECALL(CATIElbSupport,ENVTIETypeLetter,ENVTIELetter)ListSegments(oppListOfSegments,iSectionNumber ,oppListOfSegmentU ,oppListOfSegmentV )); \
} \
HRESULT  ENVTIEName::SetSegmentPositions(CATListValCATBaseUnknown_var *ipListOfSegments, CATListOfDouble              *ipListOfSegmentU, CATListOfDouble              *ipListOfSegmentV, int                           iSectionNumber )  \
{ \
return (ENVTIECALL(CATIElbSupport,ENVTIETypeLetter,ENVTIELetter)SetSegmentPositions(ipListOfSegments,ipListOfSegmentU,ipListOfSegmentV,iSectionNumber )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbSupport(classe)    TIECATIElbSupport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbSupport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbSupport, classe) \
 \
 \
CATImplementTIEMethods(CATIElbSupport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbSupport, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbSupport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbSupport, classe) \
 \
HRESULT  TIECATIElbSupport##classe::GetNumberOfSections(int &oNbSections)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfSections(oNbSections)); \
} \
HRESULT  TIECATIElbSupport##classe::ListSegments(CATListValCATBaseUnknown_var **oppListOfSegments, int                            iSectionNumber , CATListOfDouble              **oppListOfSegmentU , CATListOfDouble              **oppListOfSegmentV )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListSegments(oppListOfSegments,iSectionNumber ,oppListOfSegmentU ,oppListOfSegmentV )); \
} \
HRESULT  TIECATIElbSupport##classe::SetSegmentPositions(CATListValCATBaseUnknown_var *ipListOfSegments, CATListOfDouble              *ipListOfSegmentU, CATListOfDouble              *ipListOfSegmentV, int                           iSectionNumber )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSegmentPositions(ipListOfSegments,ipListOfSegmentU,ipListOfSegmentV,iSectionNumber )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbSupport(classe) \
 \
 \
declare_TIE_CATIElbSupport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbSupport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbSupport,"CATIElbSupport",CATIElbSupport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbSupport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbSupport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbSupport##classe(classe::MetaObject(),CATIElbSupport::MetaObject(),(void *)CreateTIECATIElbSupport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbSupport(classe) \
 \
 \
declare_TIE_CATIElbSupport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbSupport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbSupport,"CATIElbSupport",CATIElbSupport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbSupport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbSupport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbSupport##classe(classe::MetaObject(),CATIElbSupport::MetaObject(),(void *)CreateTIECATIElbSupport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbSupport(classe) TIE_CATIElbSupport(classe)
#else
#define BOA_CATIElbSupport(classe) CATImplementBOA(CATIElbSupport, classe)
#endif

#endif
