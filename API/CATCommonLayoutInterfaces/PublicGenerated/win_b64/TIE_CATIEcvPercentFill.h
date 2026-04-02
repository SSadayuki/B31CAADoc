#ifndef __TIE_CATIEcvPercentFill
#define __TIE_CATIEcvPercentFill

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEcvPercentFill.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEcvPercentFill */
#define declare_TIE_CATIEcvPercentFill(classe) \
 \
 \
class TIECATIEcvPercentFill##classe : public CATIEcvPercentFill \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEcvPercentFill, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputePercentFillValue ( CATEcwLightNwkNodeForPercentFill            *   pNwkNode, CATEcwLightNwkArcForPercentFill             *   pNwkArc, CATListPtrCATEcwLightNwkArcForPercentFill       pListOfCATEcwLightNwkArcForPercentFill, CATEcwLightNwkCableForPercentFill           *   pNwkCable, CATListPtrCATEcwLightNwkCableForPercentFill     pListOfCATEcwLightNwkCableForPercentFill, int                                             iRoutingMode, int                                             iRouteToolsOptionStackCableOption, int                                             iPFToBeSetOnNode, double                                      &   odComputedPercentFill ) ; \
};



#define ENVTIEdeclare_CATIEcvPercentFill(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputePercentFillValue ( CATEcwLightNwkNodeForPercentFill            *   pNwkNode, CATEcwLightNwkArcForPercentFill             *   pNwkArc, CATListPtrCATEcwLightNwkArcForPercentFill       pListOfCATEcwLightNwkArcForPercentFill, CATEcwLightNwkCableForPercentFill           *   pNwkCable, CATListPtrCATEcwLightNwkCableForPercentFill     pListOfCATEcwLightNwkCableForPercentFill, int                                             iRoutingMode, int                                             iRouteToolsOptionStackCableOption, int                                             iPFToBeSetOnNode, double                                      &   odComputedPercentFill ) ; \


#define ENVTIEdefine_CATIEcvPercentFill(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputePercentFillValue ( CATEcwLightNwkNodeForPercentFill            *   pNwkNode, CATEcwLightNwkArcForPercentFill             *   pNwkArc, CATListPtrCATEcwLightNwkArcForPercentFill       pListOfCATEcwLightNwkArcForPercentFill, CATEcwLightNwkCableForPercentFill           *   pNwkCable, CATListPtrCATEcwLightNwkCableForPercentFill     pListOfCATEcwLightNwkCableForPercentFill, int                                             iRoutingMode, int                                             iRouteToolsOptionStackCableOption, int                                             iPFToBeSetOnNode, double                                      &   odComputedPercentFill )  \
{ \
return (ENVTIECALL(CATIEcvPercentFill,ENVTIETypeLetter,ENVTIELetter)ComputePercentFillValue (pNwkNode,pNwkArc,pListOfCATEcwLightNwkArcForPercentFill,pNwkCable,pListOfCATEcwLightNwkCableForPercentFill,iRoutingMode,iRouteToolsOptionStackCableOption,iPFToBeSetOnNode,odComputedPercentFill )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEcvPercentFill(classe)    TIECATIEcvPercentFill##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEcvPercentFill(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEcvPercentFill, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIEcvPercentFill, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIEcvPercentFill, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEcvPercentFill, classe) \
 \
HRESULT  TIECATIEcvPercentFill##classe::ComputePercentFillValue ( CATEcwLightNwkNodeForPercentFill            *   pNwkNode, CATEcwLightNwkArcForPercentFill             *   pNwkArc, CATListPtrCATEcwLightNwkArcForPercentFill       pListOfCATEcwLightNwkArcForPercentFill, CATEcwLightNwkCableForPercentFill           *   pNwkCable, CATListPtrCATEcwLightNwkCableForPercentFill     pListOfCATEcwLightNwkCableForPercentFill, int                                             iRoutingMode, int                                             iRouteToolsOptionStackCableOption, int                                             iPFToBeSetOnNode, double                                      &   odComputedPercentFill )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputePercentFillValue (pNwkNode,pNwkArc,pListOfCATEcwLightNwkArcForPercentFill,pNwkCable,pListOfCATEcwLightNwkCableForPercentFill,iRoutingMode,iRouteToolsOptionStackCableOption,iPFToBeSetOnNode,odComputedPercentFill )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEcvPercentFill(classe) \
 \
 \
declare_TIE_CATIEcvPercentFill(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEcvPercentFill##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEcvPercentFill,"CATIEcvPercentFill",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEcvPercentFill(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEcvPercentFill, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEcvPercentFill##classe(classe::MetaObject(),TIECATIEcvPercentFill##classe::MetaObject(),(void *)CreateTIECATIEcvPercentFill##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEcvPercentFill(classe) \
 \
 \
declare_TIE_CATIEcvPercentFill(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEcvPercentFill##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEcvPercentFill,"CATIEcvPercentFill",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEcvPercentFill(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEcvPercentFill, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEcvPercentFill##classe(classe::MetaObject(),TIECATIEcvPercentFill##classe::MetaObject(),(void *)CreateTIECATIEcvPercentFill##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEcvPercentFill(classe) TIE_CATIEcvPercentFill(classe)
#else
#define BOA_CATIEcvPercentFill(classe) CATImplementBOA(CATIEcvPercentFill, classe)
#endif

#endif
