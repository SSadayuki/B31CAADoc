#ifndef __TIE_CATIMSHConnectivity
#define __TIE_CATIMSHConnectivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHConnectivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHConnectivity */
#define declare_TIE_CATIMSHConnectivity(classe) \
 \
 \
class TIECATIMSHConnectivity##classe : public CATIMSHConnectivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHConnectivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual const char * GetName () const ; \
      virtual int GetNumber () ; \
      virtual const CATMSHConnecInfos  * GetInfos () const ; \
      virtual int GetNodesOfFaces ( const int *& oPtNodesOfFaces, const int *& oNodesOfFaces ) const ; \
      virtual int GetEdgesOfFaces ( const int *& oPtEdgesOfFaces, const int *& oEdgesOfFaces, const int *& oOrientOfEdges ) const ; \
      virtual int GetFacesOfEdges ( const int *& oPtFacesOfEdges, const int *& FacesOfEdges ) const ; \
      virtual int GetNodesOfEdges ( const int *& oPtNodesOfEdges, const int *& oNodesOfEdges ) const ; \
      virtual int GetFacesOfNodes ( const int *& oPtFacesOfNodes, const int *& oFacesOfNodes ) const ; \
      virtual int GetEdgesOfNodes ( const int *& oPtEdgesOfNodes, const int *& oEdgesOfNodes ) const ; \
      virtual CATIMSHConnectivity * GetFaceConnectivity ( int iNumFace = 0 ) const ; \
      virtual CATIMSHConnectivity * GetEdgeConnectivity ( int iNumEdge = 0 ) const ; \
      virtual const int * GetNodesPermutation () const ; \
      virtual const int * GetEdgesPermutation () const ; \
      virtual const int * GetFacesPermutation () const ; \
      virtual const CATIMSHConnectivity * Next () const ; \
      virtual CATMSHExtIConnectivity * GetImplementation () const ; \
      virtual CATIMSHShapeFunction * GetShapeFunction () const ; \
      virtual CATIMSHTesselation * GetTesselation () const ; \
      virtual CATMSHGeometricalEngine * GetGeometricalEngine () const ; \
      virtual CATMSHGeometricalEngine * CreateGeometricalEngine () ; \
      virtual int GetTypeOfNodes ( const int *& oTypeOfNodes ) const ; \
      virtual int GetInteriorAngleOfEdges ( const double *& oAnglesOfEdges ) const ; \
      virtual const CATIMSHConnectivity * GetMainConnectivity() const ; \
};



#define ENVTIEdeclare_CATIMSHConnectivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual const char * GetName () const ; \
virtual int GetNumber () ; \
virtual const CATMSHConnecInfos  * GetInfos () const ; \
virtual int GetNodesOfFaces ( const int *& oPtNodesOfFaces, const int *& oNodesOfFaces ) const ; \
virtual int GetEdgesOfFaces ( const int *& oPtEdgesOfFaces, const int *& oEdgesOfFaces, const int *& oOrientOfEdges ) const ; \
virtual int GetFacesOfEdges ( const int *& oPtFacesOfEdges, const int *& FacesOfEdges ) const ; \
virtual int GetNodesOfEdges ( const int *& oPtNodesOfEdges, const int *& oNodesOfEdges ) const ; \
virtual int GetFacesOfNodes ( const int *& oPtFacesOfNodes, const int *& oFacesOfNodes ) const ; \
virtual int GetEdgesOfNodes ( const int *& oPtEdgesOfNodes, const int *& oEdgesOfNodes ) const ; \
virtual CATIMSHConnectivity * GetFaceConnectivity ( int iNumFace = 0 ) const ; \
virtual CATIMSHConnectivity * GetEdgeConnectivity ( int iNumEdge = 0 ) const ; \
virtual const int * GetNodesPermutation () const ; \
virtual const int * GetEdgesPermutation () const ; \
virtual const int * GetFacesPermutation () const ; \
virtual const CATIMSHConnectivity * Next () const ; \
virtual CATMSHExtIConnectivity * GetImplementation () const ; \
virtual CATIMSHShapeFunction * GetShapeFunction () const ; \
virtual CATIMSHTesselation * GetTesselation () const ; \
virtual CATMSHGeometricalEngine * GetGeometricalEngine () const ; \
virtual CATMSHGeometricalEngine * CreateGeometricalEngine () ; \
virtual int GetTypeOfNodes ( const int *& oTypeOfNodes ) const ; \
virtual int GetInteriorAngleOfEdges ( const double *& oAnglesOfEdges ) const ; \
virtual const CATIMSHConnectivity * GetMainConnectivity() const ; \


#define ENVTIEdefine_CATIMSHConnectivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
const char *  ENVTIEName::GetName () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetName ()); \
} \
int  ENVTIEName::GetNumber ()  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetNumber ()); \
} \
const CATMSHConnecInfos  *  ENVTIEName::GetInfos () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetInfos ()); \
} \
int  ENVTIEName::GetNodesOfFaces ( const int *& oPtNodesOfFaces, const int *& oNodesOfFaces ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetNodesOfFaces (oPtNodesOfFaces,oNodesOfFaces )); \
} \
int  ENVTIEName::GetEdgesOfFaces ( const int *& oPtEdgesOfFaces, const int *& oEdgesOfFaces, const int *& oOrientOfEdges ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetEdgesOfFaces (oPtEdgesOfFaces,oEdgesOfFaces,oOrientOfEdges )); \
} \
int  ENVTIEName::GetFacesOfEdges ( const int *& oPtFacesOfEdges, const int *& FacesOfEdges ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetFacesOfEdges (oPtFacesOfEdges,FacesOfEdges )); \
} \
int  ENVTIEName::GetNodesOfEdges ( const int *& oPtNodesOfEdges, const int *& oNodesOfEdges ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetNodesOfEdges (oPtNodesOfEdges,oNodesOfEdges )); \
} \
int  ENVTIEName::GetFacesOfNodes ( const int *& oPtFacesOfNodes, const int *& oFacesOfNodes ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetFacesOfNodes (oPtFacesOfNodes,oFacesOfNodes )); \
} \
int  ENVTIEName::GetEdgesOfNodes ( const int *& oPtEdgesOfNodes, const int *& oEdgesOfNodes ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetEdgesOfNodes (oPtEdgesOfNodes,oEdgesOfNodes )); \
} \
CATIMSHConnectivity *  ENVTIEName::GetFaceConnectivity ( int iNumFace ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetFaceConnectivity (iNumFace )); \
} \
CATIMSHConnectivity *  ENVTIEName::GetEdgeConnectivity ( int iNumEdge ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetEdgeConnectivity (iNumEdge )); \
} \
const int *  ENVTIEName::GetNodesPermutation () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetNodesPermutation ()); \
} \
const int *  ENVTIEName::GetEdgesPermutation () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetEdgesPermutation ()); \
} \
const int *  ENVTIEName::GetFacesPermutation () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetFacesPermutation ()); \
} \
const CATIMSHConnectivity *  ENVTIEName::Next () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)Next ()); \
} \
CATMSHExtIConnectivity *  ENVTIEName::GetImplementation () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetImplementation ()); \
} \
CATIMSHShapeFunction *  ENVTIEName::GetShapeFunction () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetShapeFunction ()); \
} \
CATIMSHTesselation *  ENVTIEName::GetTesselation () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetTesselation ()); \
} \
CATMSHGeometricalEngine *  ENVTIEName::GetGeometricalEngine () const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetGeometricalEngine ()); \
} \
CATMSHGeometricalEngine *  ENVTIEName::CreateGeometricalEngine ()  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)CreateGeometricalEngine ()); \
} \
int  ENVTIEName::GetTypeOfNodes ( const int *& oTypeOfNodes ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetTypeOfNodes (oTypeOfNodes )); \
} \
int  ENVTIEName::GetInteriorAngleOfEdges ( const double *& oAnglesOfEdges ) const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetInteriorAngleOfEdges (oAnglesOfEdges )); \
} \
const CATIMSHConnectivity *  ENVTIEName::GetMainConnectivity() const  \
{ \
return (ENVTIECALL(CATIMSHConnectivity,ENVTIETypeLetter,ENVTIELetter)GetMainConnectivity()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHConnectivity(classe)    TIECATIMSHConnectivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHConnectivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHConnectivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHConnectivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHConnectivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHConnectivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHConnectivity, classe) \
 \
const char *  TIECATIMSHConnectivity##classe::GetName () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName ()); \
} \
int  TIECATIMSHConnectivity##classe::GetNumber ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumber ()); \
} \
const CATMSHConnecInfos  *  TIECATIMSHConnectivity##classe::GetInfos () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInfos ()); \
} \
int  TIECATIMSHConnectivity##classe::GetNodesOfFaces ( const int *& oPtNodesOfFaces, const int *& oNodesOfFaces ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodesOfFaces (oPtNodesOfFaces,oNodesOfFaces )); \
} \
int  TIECATIMSHConnectivity##classe::GetEdgesOfFaces ( const int *& oPtEdgesOfFaces, const int *& oEdgesOfFaces, const int *& oOrientOfEdges ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgesOfFaces (oPtEdgesOfFaces,oEdgesOfFaces,oOrientOfEdges )); \
} \
int  TIECATIMSHConnectivity##classe::GetFacesOfEdges ( const int *& oPtFacesOfEdges, const int *& FacesOfEdges ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacesOfEdges (oPtFacesOfEdges,FacesOfEdges )); \
} \
int  TIECATIMSHConnectivity##classe::GetNodesOfEdges ( const int *& oPtNodesOfEdges, const int *& oNodesOfEdges ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodesOfEdges (oPtNodesOfEdges,oNodesOfEdges )); \
} \
int  TIECATIMSHConnectivity##classe::GetFacesOfNodes ( const int *& oPtFacesOfNodes, const int *& oFacesOfNodes ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacesOfNodes (oPtFacesOfNodes,oFacesOfNodes )); \
} \
int  TIECATIMSHConnectivity##classe::GetEdgesOfNodes ( const int *& oPtEdgesOfNodes, const int *& oEdgesOfNodes ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgesOfNodes (oPtEdgesOfNodes,oEdgesOfNodes )); \
} \
CATIMSHConnectivity *  TIECATIMSHConnectivity##classe::GetFaceConnectivity ( int iNumFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceConnectivity (iNumFace )); \
} \
CATIMSHConnectivity *  TIECATIMSHConnectivity##classe::GetEdgeConnectivity ( int iNumEdge ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgeConnectivity (iNumEdge )); \
} \
const int *  TIECATIMSHConnectivity##classe::GetNodesPermutation () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodesPermutation ()); \
} \
const int *  TIECATIMSHConnectivity##classe::GetEdgesPermutation () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgesPermutation ()); \
} \
const int *  TIECATIMSHConnectivity##classe::GetFacesPermutation () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacesPermutation ()); \
} \
const CATIMSHConnectivity *  TIECATIMSHConnectivity##classe::Next () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Next ()); \
} \
CATMSHExtIConnectivity *  TIECATIMSHConnectivity##classe::GetImplementation () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImplementation ()); \
} \
CATIMSHShapeFunction *  TIECATIMSHConnectivity##classe::GetShapeFunction () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapeFunction ()); \
} \
CATIMSHTesselation *  TIECATIMSHConnectivity##classe::GetTesselation () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTesselation ()); \
} \
CATMSHGeometricalEngine *  TIECATIMSHConnectivity##classe::GetGeometricalEngine () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricalEngine ()); \
} \
CATMSHGeometricalEngine *  TIECATIMSHConnectivity##classe::CreateGeometricalEngine ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGeometricalEngine ()); \
} \
int  TIECATIMSHConnectivity##classe::GetTypeOfNodes ( const int *& oTypeOfNodes ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTypeOfNodes (oTypeOfNodes )); \
} \
int  TIECATIMSHConnectivity##classe::GetInteriorAngleOfEdges ( const double *& oAnglesOfEdges ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInteriorAngleOfEdges (oAnglesOfEdges )); \
} \
const CATIMSHConnectivity *  TIECATIMSHConnectivity##classe::GetMainConnectivity() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMainConnectivity()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHConnectivity(classe) \
 \
 \
declare_TIE_CATIMSHConnectivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHConnectivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHConnectivity,"CATIMSHConnectivity",CATIMSHConnectivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHConnectivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHConnectivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHConnectivity##classe(classe::MetaObject(),CATIMSHConnectivity::MetaObject(),(void *)CreateTIECATIMSHConnectivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHConnectivity(classe) \
 \
 \
declare_TIE_CATIMSHConnectivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHConnectivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHConnectivity,"CATIMSHConnectivity",CATIMSHConnectivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHConnectivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHConnectivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHConnectivity##classe(classe::MetaObject(),CATIMSHConnectivity::MetaObject(),(void *)CreateTIECATIMSHConnectivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHConnectivity(classe) TIE_CATIMSHConnectivity(classe)
#else
#define BOA_CATIMSHConnectivity(classe) CATImplementBOA(CATIMSHConnectivity, classe)
#endif

#endif
