#ifndef __TIE_CATIPspPlacePart
#define __TIE_CATIPspPlacePart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPspPlacePart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPspPlacePart */
#define declare_TIE_CATIPspPlacePart(classe) \
 \
 \
class TIECATIPspPlacePart##classe : public CATIPspPlacePart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPspPlacePart, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart) ; \
      virtual HRESULT RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart) ; \
      virtual HRESULT GetErrorMessage (CATUnicodeString &ouErrorMessage) ; \
};



#define ENVTIEdeclare_CATIPspPlacePart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart) ; \
virtual HRESULT RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart) ; \
virtual HRESULT GetErrorMessage (CATUnicodeString &ouErrorMessage) ; \


#define ENVTIEdefine_CATIPspPlacePart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePart,ENVTIETypeLetter,ENVTIELetter)PlacePartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iUpDirection,iHorizontalOrientation,iPosition,opiInstancePart)); \
} \
HRESULT  ENVTIEName::RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePart,ENVTIETypeLetter,ENVTIELetter)RouteStringPartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iFirstPointUpDirection,ipiListPoints,iListBendRadii,opiInstancePart)); \
} \
HRESULT  ENVTIEName::GetErrorMessage (CATUnicodeString &ouErrorMessage)  \
{ \
return (ENVTIECALL(CATIPspPlacePart,ENVTIETypeLetter,ENVTIELetter)GetErrorMessage (ouErrorMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPspPlacePart(classe)    TIECATIPspPlacePart##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPspPlacePart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPspPlacePart, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIPspPlacePart, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIPspPlacePart, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPspPlacePart, classe) \
 \
HRESULT  TIECATIPspPlacePart##classe::PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlacePartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iUpDirection,iHorizontalOrientation,iPosition,opiInstancePart)); \
} \
HRESULT  TIECATIPspPlacePart##classe::RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RouteStringPartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iFirstPointUpDirection,ipiListPoints,iListBendRadii,opiInstancePart)); \
} \
HRESULT  TIECATIPspPlacePart##classe::GetErrorMessage (CATUnicodeString &ouErrorMessage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetErrorMessage (ouErrorMessage)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPspPlacePart(classe) \
 \
 \
declare_TIE_CATIPspPlacePart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspPlacePart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspPlacePart,"CATIPspPlacePart",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspPlacePart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPspPlacePart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspPlacePart##classe(classe::MetaObject(),TIECATIPspPlacePart##classe::MetaObject(),(void *)CreateTIECATIPspPlacePart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPspPlacePart(classe) \
 \
 \
declare_TIE_CATIPspPlacePart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspPlacePart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspPlacePart,"CATIPspPlacePart",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspPlacePart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPspPlacePart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspPlacePart##classe(classe::MetaObject(),TIECATIPspPlacePart##classe::MetaObject(),(void *)CreateTIECATIPspPlacePart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPspPlacePart(classe) TIE_CATIPspPlacePart(classe)
#else
#define BOA_CATIPspPlacePart(classe) CATImplementBOA(CATIPspPlacePart, classe)
#endif

#endif
