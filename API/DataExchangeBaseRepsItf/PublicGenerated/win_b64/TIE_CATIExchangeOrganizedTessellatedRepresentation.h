#ifndef __TIE_CATIExchangeOrganizedTessellatedRepresentation
#define __TIE_CATIExchangeOrganizedTessellatedRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeOrganizedTessellatedRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeOrganizedTessellatedRepresentation */
#define declare_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
class TIECATIExchangeOrganizedTessellatedRepresentation##classe : public CATIExchangeOrganizedTessellatedRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeOrganizedTessellatedRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNodeVisibility(const void* iNodeID, const CATBoolean& iDesactivateInheritance, CATBoolean& oIsVisible) ; \
      virtual HRESULT GetNodeLayer(const void* iNodeID, unsigned int& oLayerValue) ; \
      virtual HRESULT GetNodeColorRGB( const void* iNodeID, unsigned int& oRed, unsigned int& oGreen, unsigned int& oBlue) ; \
      virtual HRESULT GetNodeOpacity(const void* iNodeID, unsigned int& oAlpha) ; \
      virtual HRESULT GetFeatureNodeType(const void* iNodeID, CATUnicodeString & oType , CATUnicodeString & oSuperType ) ; \
      virtual HRESULT IsFeatureNodeTypeDefined(const void* iNodeID, const XCAD_TessellatedFeature_Type & iXCADType ) ; \
      virtual HRESULT GetLineStyle(const void* iNodeID, unsigned short & oPattern, unsigned short & oRatio ) ; \
      virtual HRESULT GetLineThickness(const void* iNodeID, float & oThickness) ; \
      virtual HRESULT GetNumberOfAxisSystems(unsigned int &oNbOfAxisSystemID) ; \
      virtual HRESULT GetAxisSystemNode(const unsigned int& iAxisNumber, void*& oAxisNodeID, void*& oAxisFatherNodeID ) ; \
      virtual HRESULT GetAxisSystemParameters(const void* iNodeID, double oAxisOrigin[3], double oAxisXVector[3], double oAxisYVector[3], double oAxisZVector[3]) ; \
};



#define ENVTIEdeclare_CATIExchangeOrganizedTessellatedRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNodeVisibility(const void* iNodeID, const CATBoolean& iDesactivateInheritance, CATBoolean& oIsVisible) ; \
virtual HRESULT GetNodeLayer(const void* iNodeID, unsigned int& oLayerValue) ; \
virtual HRESULT GetNodeColorRGB( const void* iNodeID, unsigned int& oRed, unsigned int& oGreen, unsigned int& oBlue) ; \
virtual HRESULT GetNodeOpacity(const void* iNodeID, unsigned int& oAlpha) ; \
virtual HRESULT GetFeatureNodeType(const void* iNodeID, CATUnicodeString & oType , CATUnicodeString & oSuperType ) ; \
virtual HRESULT IsFeatureNodeTypeDefined(const void* iNodeID, const XCAD_TessellatedFeature_Type & iXCADType ) ; \
virtual HRESULT GetLineStyle(const void* iNodeID, unsigned short & oPattern, unsigned short & oRatio ) ; \
virtual HRESULT GetLineThickness(const void* iNodeID, float & oThickness) ; \
virtual HRESULT GetNumberOfAxisSystems(unsigned int &oNbOfAxisSystemID) ; \
virtual HRESULT GetAxisSystemNode(const unsigned int& iAxisNumber, void*& oAxisNodeID, void*& oAxisFatherNodeID ) ; \
virtual HRESULT GetAxisSystemParameters(const void* iNodeID, double oAxisOrigin[3], double oAxisXVector[3], double oAxisYVector[3], double oAxisZVector[3]) ; \


#define ENVTIEdefine_CATIExchangeOrganizedTessellatedRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNodeVisibility(const void* iNodeID, const CATBoolean& iDesactivateInheritance, CATBoolean& oIsVisible)  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeVisibility(iNodeID,iDesactivateInheritance,oIsVisible)); \
} \
HRESULT  ENVTIEName::GetNodeLayer(const void* iNodeID, unsigned int& oLayerValue)  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeLayer(iNodeID,oLayerValue)); \
} \
HRESULT  ENVTIEName::GetNodeColorRGB( const void* iNodeID, unsigned int& oRed, unsigned int& oGreen, unsigned int& oBlue)  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeColorRGB(iNodeID,oRed,oGreen,oBlue)); \
} \
HRESULT  ENVTIEName::GetNodeOpacity(const void* iNodeID, unsigned int& oAlpha)  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeOpacity(iNodeID,oAlpha)); \
} \
HRESULT  ENVTIEName::GetFeatureNodeType(const void* iNodeID, CATUnicodeString & oType , CATUnicodeString & oSuperType )  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetFeatureNodeType(iNodeID,oType ,oSuperType )); \
} \
HRESULT  ENVTIEName::IsFeatureNodeTypeDefined(const void* iNodeID, const XCAD_TessellatedFeature_Type & iXCADType )  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)IsFeatureNodeTypeDefined(iNodeID,iXCADType )); \
} \
HRESULT  ENVTIEName::GetLineStyle(const void* iNodeID, unsigned short & oPattern, unsigned short & oRatio )  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetLineStyle(iNodeID,oPattern,oRatio )); \
} \
HRESULT  ENVTIEName::GetLineThickness(const void* iNodeID, float & oThickness)  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetLineThickness(iNodeID,oThickness)); \
} \
HRESULT  ENVTIEName::GetNumberOfAxisSystems(unsigned int &oNbOfAxisSystemID)  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNumberOfAxisSystems(oNbOfAxisSystemID)); \
} \
HRESULT  ENVTIEName::GetAxisSystemNode(const unsigned int& iAxisNumber, void*& oAxisNodeID, void*& oAxisFatherNodeID )  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetAxisSystemNode(iAxisNumber,oAxisNodeID,oAxisFatherNodeID )); \
} \
HRESULT  ENVTIEName::GetAxisSystemParameters(const void* iNodeID, double oAxisOrigin[3], double oAxisXVector[3], double oAxisYVector[3], double oAxisZVector[3])  \
{ \
return (ENVTIECALL(CATIExchangeOrganizedTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetAxisSystemParameters(iNodeID,oAxisOrigin,oAxisXVector,oAxisYVector,oAxisZVector)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe)    TIECATIExchangeOrganizedTessellatedRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeOrganizedTessellatedRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeOrganizedTessellatedRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeOrganizedTessellatedRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeOrganizedTessellatedRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeOrganizedTessellatedRepresentation, classe) \
 \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetNodeVisibility(const void* iNodeID, const CATBoolean& iDesactivateInheritance, CATBoolean& oIsVisible)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeVisibility(iNodeID,iDesactivateInheritance,oIsVisible)); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetNodeLayer(const void* iNodeID, unsigned int& oLayerValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeLayer(iNodeID,oLayerValue)); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetNodeColorRGB( const void* iNodeID, unsigned int& oRed, unsigned int& oGreen, unsigned int& oBlue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeColorRGB(iNodeID,oRed,oGreen,oBlue)); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetNodeOpacity(const void* iNodeID, unsigned int& oAlpha)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeOpacity(iNodeID,oAlpha)); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetFeatureNodeType(const void* iNodeID, CATUnicodeString & oType , CATUnicodeString & oSuperType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeatureNodeType(iNodeID,oType ,oSuperType )); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::IsFeatureNodeTypeDefined(const void* iNodeID, const XCAD_TessellatedFeature_Type & iXCADType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFeatureNodeTypeDefined(iNodeID,iXCADType )); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetLineStyle(const void* iNodeID, unsigned short & oPattern, unsigned short & oRatio )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineStyle(iNodeID,oPattern,oRatio )); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetLineThickness(const void* iNodeID, float & oThickness)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineThickness(iNodeID,oThickness)); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetNumberOfAxisSystems(unsigned int &oNbOfAxisSystemID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfAxisSystems(oNbOfAxisSystemID)); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetAxisSystemNode(const unsigned int& iAxisNumber, void*& oAxisNodeID, void*& oAxisFatherNodeID )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSystemNode(iAxisNumber,oAxisNodeID,oAxisFatherNodeID )); \
} \
HRESULT  TIECATIExchangeOrganizedTessellatedRepresentation##classe::GetAxisSystemParameters(const void* iNodeID, double oAxisOrigin[3], double oAxisXVector[3], double oAxisYVector[3], double oAxisZVector[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSystemParameters(iNodeID,oAxisOrigin,oAxisXVector,oAxisYVector,oAxisZVector)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOrganizedTessellatedRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOrganizedTessellatedRepresentation,"CATIExchangeOrganizedTessellatedRepresentation",CATIExchangeOrganizedTessellatedRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeOrganizedTessellatedRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOrganizedTessellatedRepresentation##classe(classe::MetaObject(),CATIExchangeOrganizedTessellatedRepresentation::MetaObject(),(void *)CreateTIECATIExchangeOrganizedTessellatedRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOrganizedTessellatedRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOrganizedTessellatedRepresentation,"CATIExchangeOrganizedTessellatedRepresentation",CATIExchangeOrganizedTessellatedRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOrganizedTessellatedRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeOrganizedTessellatedRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOrganizedTessellatedRepresentation##classe(classe::MetaObject(),CATIExchangeOrganizedTessellatedRepresentation::MetaObject(),(void *)CreateTIECATIExchangeOrganizedTessellatedRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeOrganizedTessellatedRepresentation(classe) TIE_CATIExchangeOrganizedTessellatedRepresentation(classe)
#else
#define BOA_CATIExchangeOrganizedTessellatedRepresentation(classe) CATImplementBOA(CATIExchangeOrganizedTessellatedRepresentation, classe)
#endif

#endif
