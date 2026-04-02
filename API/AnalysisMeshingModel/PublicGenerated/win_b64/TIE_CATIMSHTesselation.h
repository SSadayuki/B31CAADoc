#ifndef __TIE_CATIMSHTesselation
#define __TIE_CATIMSHTesselation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHTesselation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHTesselation */
#define declare_TIE_CATIMSHTesselation(classe) \
 \
 \
class TIECATIMSHTesselation##classe : public CATIMSHTesselation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHTesselation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTessSizes ( CATMSHElement * iElement, int & oVertices, int & oTriaIso, int & oTriaStrip, int & oVertexStrip, int & oTriaFan, int & oVertexFan, int & oEdges ) const ; \
      virtual HRESULT TesselateElement ( CATMSHElement * iElement, float iShrink, int iExactMode, float * ioVertices, int & oVerticesArraySize, float * ioNormals, int & oNormalsArraySize, int * ioTriangleIndice, int & oNbTriangle, int * ioTriangleStripIndice, int & oNbTriangleStrip, int * ioNbVertexPerTriangleStrip, int * ioTriangleFanIndice, int & oNbTriangleFan, int * ioNbVertexPerTriangleFan, int * ioEdgeIndice, int & oNbEdge ) const ; \
};



#define ENVTIEdeclare_CATIMSHTesselation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTessSizes ( CATMSHElement * iElement, int & oVertices, int & oTriaIso, int & oTriaStrip, int & oVertexStrip, int & oTriaFan, int & oVertexFan, int & oEdges ) const ; \
virtual HRESULT TesselateElement ( CATMSHElement * iElement, float iShrink, int iExactMode, float * ioVertices, int & oVerticesArraySize, float * ioNormals, int & oNormalsArraySize, int * ioTriangleIndice, int & oNbTriangle, int * ioTriangleStripIndice, int & oNbTriangleStrip, int * ioNbVertexPerTriangleStrip, int * ioTriangleFanIndice, int & oNbTriangleFan, int * ioNbVertexPerTriangleFan, int * ioEdgeIndice, int & oNbEdge ) const ; \


#define ENVTIEdefine_CATIMSHTesselation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTessSizes ( CATMSHElement * iElement, int & oVertices, int & oTriaIso, int & oTriaStrip, int & oVertexStrip, int & oTriaFan, int & oVertexFan, int & oEdges ) const  \
{ \
return (ENVTIECALL(CATIMSHTesselation,ENVTIETypeLetter,ENVTIELetter)GetTessSizes (iElement,oVertices,oTriaIso,oTriaStrip,oVertexStrip,oTriaFan,oVertexFan,oEdges )); \
} \
HRESULT  ENVTIEName::TesselateElement ( CATMSHElement * iElement, float iShrink, int iExactMode, float * ioVertices, int & oVerticesArraySize, float * ioNormals, int & oNormalsArraySize, int * ioTriangleIndice, int & oNbTriangle, int * ioTriangleStripIndice, int & oNbTriangleStrip, int * ioNbVertexPerTriangleStrip, int * ioTriangleFanIndice, int & oNbTriangleFan, int * ioNbVertexPerTriangleFan, int * ioEdgeIndice, int & oNbEdge ) const  \
{ \
return (ENVTIECALL(CATIMSHTesselation,ENVTIETypeLetter,ENVTIELetter)TesselateElement (iElement,iShrink,iExactMode,ioVertices,oVerticesArraySize,ioNormals,oNormalsArraySize,ioTriangleIndice,oNbTriangle,ioTriangleStripIndice,oNbTriangleStrip,ioNbVertexPerTriangleStrip,ioTriangleFanIndice,oNbTriangleFan,ioNbVertexPerTriangleFan,ioEdgeIndice,oNbEdge )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHTesselation(classe)    TIECATIMSHTesselation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHTesselation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHTesselation, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHTesselation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHTesselation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHTesselation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHTesselation, classe) \
 \
HRESULT  TIECATIMSHTesselation##classe::GetTessSizes ( CATMSHElement * iElement, int & oVertices, int & oTriaIso, int & oTriaStrip, int & oVertexStrip, int & oTriaFan, int & oVertexFan, int & oEdges ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTessSizes (iElement,oVertices,oTriaIso,oTriaStrip,oVertexStrip,oTriaFan,oVertexFan,oEdges )); \
} \
HRESULT  TIECATIMSHTesselation##classe::TesselateElement ( CATMSHElement * iElement, float iShrink, int iExactMode, float * ioVertices, int & oVerticesArraySize, float * ioNormals, int & oNormalsArraySize, int * ioTriangleIndice, int & oNbTriangle, int * ioTriangleStripIndice, int & oNbTriangleStrip, int * ioNbVertexPerTriangleStrip, int * ioTriangleFanIndice, int & oNbTriangleFan, int * ioNbVertexPerTriangleFan, int * ioEdgeIndice, int & oNbEdge ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TesselateElement (iElement,iShrink,iExactMode,ioVertices,oVerticesArraySize,ioNormals,oNormalsArraySize,ioTriangleIndice,oNbTriangle,ioTriangleStripIndice,oNbTriangleStrip,ioNbVertexPerTriangleStrip,ioTriangleFanIndice,oNbTriangleFan,ioNbVertexPerTriangleFan,ioEdgeIndice,oNbEdge )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHTesselation(classe) \
 \
 \
declare_TIE_CATIMSHTesselation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHTesselation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHTesselation,"CATIMSHTesselation",CATIMSHTesselation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHTesselation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHTesselation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHTesselation##classe(classe::MetaObject(),CATIMSHTesselation::MetaObject(),(void *)CreateTIECATIMSHTesselation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHTesselation(classe) \
 \
 \
declare_TIE_CATIMSHTesselation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHTesselation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHTesselation,"CATIMSHTesselation",CATIMSHTesselation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHTesselation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHTesselation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHTesselation##classe(classe::MetaObject(),CATIMSHTesselation::MetaObject(),(void *)CreateTIECATIMSHTesselation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHTesselation(classe) TIE_CATIMSHTesselation(classe)
#else
#define BOA_CATIMSHTesselation(classe) CATImplementBOA(CATIMSHTesselation, classe)
#endif

#endif
