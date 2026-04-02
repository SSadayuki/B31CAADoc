#ifndef __TIE_CATIPspPlacePartOnRun
#define __TIE_CATIPspPlacePartOnRun

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPspPlacePartOnRun.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPspPlacePartOnRun */
#define declare_TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
class TIECATIPspPlacePartOnRun##classe : public CATIPspPlacePartOnRun \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPspPlacePartOnRun, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart) ; \
      virtual HRESULT GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart, CATUnicodeString &ouCatalogPartName) ; \
      virtual HRESULT PlacePartOnRunSegment (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunSegment, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathPoint &iPosition, IUnknown *&opiInstancePart) ; \
      virtual HRESULT PlacePartOnRunNode (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunNode, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart) ; \
      virtual HRESULT PlacePartOnPartConnector (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiPartConnector, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart, int iReconnectRun = 0 ) ; \
      virtual HRESULT FlipPlacedPart (const IUnknown *ipiPlacedInstancePart) ; \
      virtual HRESULT SetCatalogPartName (const IUnknown *ipiPlacedInstancePart, const CATUnicodeString &iuCatalogPartName) ; \
      virtual HRESULT BreakAndTrimRuns ( const IUnknown *ipiPartToSplitRun, IUnknown *&opiRun1, IUnknown *&opiRun2)  ; \
      virtual HRESULT ConnectRunToPart ( const IUnknown *ipiRun, IUnknown *ipiPart)  ; \
      virtual HRESULT PlaceStringsOnRun (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiReferencePart, const IUnknown *ipiRun, CATIUnknownList *&iopiInstanceParts, int iSpecFromLocation=1) ; \
      virtual HRESULT PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart) ; \
      virtual HRESULT RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart) ; \
      virtual HRESULT GetErrorMessage (CATUnicodeString &ouErrorMessage) ; \
};



#define ENVTIEdeclare_CATIPspPlacePartOnRun(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart) ; \
virtual HRESULT GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart, CATUnicodeString &ouCatalogPartName) ; \
virtual HRESULT PlacePartOnRunSegment (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunSegment, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathPoint &iPosition, IUnknown *&opiInstancePart) ; \
virtual HRESULT PlacePartOnRunNode (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunNode, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart) ; \
virtual HRESULT PlacePartOnPartConnector (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiPartConnector, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart, int iReconnectRun = 0 ) ; \
virtual HRESULT FlipPlacedPart (const IUnknown *ipiPlacedInstancePart) ; \
virtual HRESULT SetCatalogPartName (const IUnknown *ipiPlacedInstancePart, const CATUnicodeString &iuCatalogPartName) ; \
virtual HRESULT BreakAndTrimRuns ( const IUnknown *ipiPartToSplitRun, IUnknown *&opiRun1, IUnknown *&opiRun2)  ; \
virtual HRESULT ConnectRunToPart ( const IUnknown *ipiRun, IUnknown *ipiPart)  ; \
virtual HRESULT PlaceStringsOnRun (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiReferencePart, const IUnknown *ipiRun, CATIUnknownList *&iopiInstanceParts, int iSpecFromLocation=1) ; \
virtual HRESULT PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart) ; \
virtual HRESULT RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart) ; \
virtual HRESULT GetErrorMessage (CATUnicodeString &ouErrorMessage) ; \


#define ENVTIEdefine_CATIPspPlacePartOnRun(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)GetReferencePartFromCatalog(iuStandard,iuSpecName,iuPartType,iuPartNumber,ipiPhysicalParentProduct,opiReferencePart)); \
} \
HRESULT  ENVTIEName::GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart, CATUnicodeString &ouCatalogPartName)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)GetReferencePartFromCatalog(iuStandard,iuSpecName,iuPartType,iuPartNumber,ipiPhysicalParentProduct,opiReferencePart,ouCatalogPartName)); \
} \
HRESULT  ENVTIEName::PlacePartOnRunSegment (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunSegment, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathPoint &iPosition, IUnknown *&opiInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)PlacePartOnRunSegment (iuStandard,iuFunctionType,ipiReferencePart,ipiRunSegment,ipiLogicalLine,iuPlacedPartID,iPosition,opiInstancePart)); \
} \
HRESULT  ENVTIEName::PlacePartOnRunNode (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunNode, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)PlacePartOnRunNode (iuStandard,iuFunctionType,ipiReferencePart,ipiRunNode,ipiLogicalLine,iuPlacedPartID,opiInstancePart)); \
} \
HRESULT  ENVTIEName::PlacePartOnPartConnector (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiPartConnector, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart, int iReconnectRun )  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)PlacePartOnPartConnector (iuStandard,iuFunctionType,ipiReferencePart,ipiPartConnector,ipiLogicalLine,iuPlacedPartID,opiInstancePart,iReconnectRun )); \
} \
HRESULT  ENVTIEName::FlipPlacedPart (const IUnknown *ipiPlacedInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)FlipPlacedPart (ipiPlacedInstancePart)); \
} \
HRESULT  ENVTIEName::SetCatalogPartName (const IUnknown *ipiPlacedInstancePart, const CATUnicodeString &iuCatalogPartName)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)SetCatalogPartName (ipiPlacedInstancePart,iuCatalogPartName)); \
} \
HRESULT  ENVTIEName::BreakAndTrimRuns ( const IUnknown *ipiPartToSplitRun, IUnknown *&opiRun1, IUnknown *&opiRun2)   \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)BreakAndTrimRuns (ipiPartToSplitRun,opiRun1,opiRun2)); \
} \
HRESULT  ENVTIEName::ConnectRunToPart ( const IUnknown *ipiRun, IUnknown *ipiPart)   \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)ConnectRunToPart (ipiRun,ipiPart)); \
} \
HRESULT  ENVTIEName::PlaceStringsOnRun (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiReferencePart, const IUnknown *ipiRun, CATIUnknownList *&iopiInstanceParts, int iSpecFromLocation)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)PlaceStringsOnRun (iuStandard,iuFunctionType,iuPartNumber,ipiReferencePart,ipiRun,iopiInstanceParts,iSpecFromLocation)); \
} \
HRESULT  ENVTIEName::PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)PlacePartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iUpDirection,iHorizontalOrientation,iPosition,opiInstancePart)); \
} \
HRESULT  ENVTIEName::RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)RouteStringPartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iFirstPointUpDirection,ipiListPoints,iListBendRadii,opiInstancePart)); \
} \
HRESULT  ENVTIEName::GetErrorMessage (CATUnicodeString &ouErrorMessage)  \
{ \
return (ENVTIECALL(CATIPspPlacePartOnRun,ENVTIETypeLetter,ENVTIELetter)GetErrorMessage (ouErrorMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPspPlacePartOnRun(classe)    TIECATIPspPlacePartOnRun##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPspPlacePartOnRun, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIPspPlacePartOnRun, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIPspPlacePartOnRun, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPspPlacePartOnRun, classe) \
 \
HRESULT  TIECATIPspPlacePartOnRun##classe::GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferencePartFromCatalog(iuStandard,iuSpecName,iuPartType,iuPartNumber,ipiPhysicalParentProduct,opiReferencePart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpecName, const CATUnicodeString &iuPartType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiPhysicalParentProduct, IUnknown *&opiReferencePart, CATUnicodeString &ouCatalogPartName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferencePartFromCatalog(iuStandard,iuSpecName,iuPartType,iuPartNumber,ipiPhysicalParentProduct,opiReferencePart,ouCatalogPartName)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::PlacePartOnRunSegment (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunSegment, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathPoint &iPosition, IUnknown *&opiInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlacePartOnRunSegment (iuStandard,iuFunctionType,ipiReferencePart,ipiRunSegment,ipiLogicalLine,iuPlacedPartID,iPosition,opiInstancePart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::PlacePartOnRunNode (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiRunNode, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlacePartOnRunNode (iuStandard,iuFunctionType,ipiReferencePart,ipiRunNode,ipiLogicalLine,iuPlacedPartID,opiInstancePart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::PlacePartOnPartConnector (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiPartConnector, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, IUnknown *&opiInstancePart, int iReconnectRun )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlacePartOnPartConnector (iuStandard,iuFunctionType,ipiReferencePart,ipiPartConnector,ipiLogicalLine,iuPlacedPartID,opiInstancePart,iReconnectRun )); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::FlipPlacedPart (const IUnknown *ipiPlacedInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipPlacedPart (ipiPlacedInstancePart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::SetCatalogPartName (const IUnknown *ipiPlacedInstancePart, const CATUnicodeString &iuCatalogPartName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCatalogPartName (ipiPlacedInstancePart,iuCatalogPartName)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::BreakAndTrimRuns ( const IUnknown *ipiPartToSplitRun, IUnknown *&opiRun1, IUnknown *&opiRun2)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BreakAndTrimRuns (ipiPartToSplitRun,opiRun1,opiRun2)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::ConnectRunToPart ( const IUnknown *ipiRun, IUnknown *ipiPart)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectRunToPart (ipiRun,ipiPart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::PlaceStringsOnRun (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const CATUnicodeString &iuPartNumber, const IUnknown *ipiReferencePart, const IUnknown *ipiRun, CATIUnknownList *&iopiInstanceParts, int iSpecFromLocation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlaceStringsOnRun (iuStandard,iuFunctionType,iuPartNumber,ipiReferencePart,ipiRun,iopiInstanceParts,iSpecFromLocation)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::PlacePartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iUpDirection, const CATMathDirection &iHorizontalOrientation, const CATMathPoint &iPosition, IUnknown *&opiInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlacePartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iUpDirection,iHorizontalOrientation,iPosition,opiInstancePart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::RouteStringPartInSpace (const CATUnicodeString &iuStandard, const CATUnicodeString &iuFunctionType, const IUnknown *ipiReferencePart, const IUnknown *ipiParentProduct, const IUnknown *ipiLogicalLine, const CATUnicodeString &iuPlacedPartID, const CATMathDirection &iFirstPointUpDirection, const CATIUnknownList *ipiListPoints, const CATListOfDouble &iListBendRadii, IUnknown *&opiInstancePart)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RouteStringPartInSpace (iuStandard,iuFunctionType,ipiReferencePart,ipiParentProduct,ipiLogicalLine,iuPlacedPartID,iFirstPointUpDirection,ipiListPoints,iListBendRadii,opiInstancePart)); \
} \
HRESULT  TIECATIPspPlacePartOnRun##classe::GetErrorMessage (CATUnicodeString &ouErrorMessage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetErrorMessage (ouErrorMessage)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
declare_TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspPlacePartOnRun##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspPlacePartOnRun,"CATIPspPlacePartOnRun",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPspPlacePartOnRun, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspPlacePartOnRun##classe(classe::MetaObject(),TIECATIPspPlacePartOnRun##classe::MetaObject(),(void *)CreateTIECATIPspPlacePartOnRun##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPspPlacePartOnRun(classe) \
 \
 \
declare_TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspPlacePartOnRun##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspPlacePartOnRun,"CATIPspPlacePartOnRun",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspPlacePartOnRun(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPspPlacePartOnRun, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspPlacePartOnRun##classe(classe::MetaObject(),TIECATIPspPlacePartOnRun##classe::MetaObject(),(void *)CreateTIECATIPspPlacePartOnRun##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPspPlacePartOnRun(classe) TIE_CATIPspPlacePartOnRun(classe)
#else
#define BOA_CATIPspPlacePartOnRun(classe) CATImplementBOA(CATIPspPlacePartOnRun, classe)
#endif

#endif
