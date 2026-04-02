#ifndef __TIE_CATIMfgDesignHoleParameters
#define __TIE_CATIMfgDesignHoleParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgDesignHoleParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgDesignHoleParameters */
#define declare_TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
class TIECATIMfgDesignHoleParameters##classe : public CATIMfgDesignHoleParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgDesignHoleParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDiameter (CATICkeParm_var &oDiameter) ; \
      virtual HRESULT GetDepth (CATICkeParm_var &oDepth) ; \
      virtual HRESULT GetOrigin (double& oX, double& oY, double& oZ) ; \
      virtual HRESULT GetDirection (double& oX, double& oY, double& oZ) ; \
      virtual HRESULT get_Parameter (const CATString &iParameterName, double &oParameter) ; \
      virtual HRESULT get_Parameter (const CATString &iParameterName, int &oParameter) ; \
};



#define ENVTIEdeclare_CATIMfgDesignHoleParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDiameter (CATICkeParm_var &oDiameter) ; \
virtual HRESULT GetDepth (CATICkeParm_var &oDepth) ; \
virtual HRESULT GetOrigin (double& oX, double& oY, double& oZ) ; \
virtual HRESULT GetDirection (double& oX, double& oY, double& oZ) ; \
virtual HRESULT get_Parameter (const CATString &iParameterName, double &oParameter) ; \
virtual HRESULT get_Parameter (const CATString &iParameterName, int &oParameter) ; \


#define ENVTIEdefine_CATIMfgDesignHoleParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDiameter (CATICkeParm_var &oDiameter)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleParameters,ENVTIETypeLetter,ENVTIELetter)GetDiameter (oDiameter)); \
} \
HRESULT  ENVTIEName::GetDepth (CATICkeParm_var &oDepth)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleParameters,ENVTIETypeLetter,ENVTIELetter)GetDepth (oDepth)); \
} \
HRESULT  ENVTIEName::GetOrigin (double& oX, double& oY, double& oZ)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleParameters,ENVTIETypeLetter,ENVTIELetter)GetOrigin (oX,oY,oZ)); \
} \
HRESULT  ENVTIEName::GetDirection (double& oX, double& oY, double& oZ)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleParameters,ENVTIETypeLetter,ENVTIELetter)GetDirection (oX,oY,oZ)); \
} \
HRESULT  ENVTIEName::get_Parameter (const CATString &iParameterName, double &oParameter)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleParameters,ENVTIETypeLetter,ENVTIELetter)get_Parameter (iParameterName,oParameter)); \
} \
HRESULT  ENVTIEName::get_Parameter (const CATString &iParameterName, int &oParameter)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleParameters,ENVTIETypeLetter,ENVTIELetter)get_Parameter (iParameterName,oParameter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgDesignHoleParameters(classe)    TIECATIMfgDesignHoleParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgDesignHoleParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgDesignHoleParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgDesignHoleParameters, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgDesignHoleParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgDesignHoleParameters, classe) \
 \
HRESULT  TIECATIMfgDesignHoleParameters##classe::GetDiameter (CATICkeParm_var &oDiameter)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDiameter (oDiameter)); \
} \
HRESULT  TIECATIMfgDesignHoleParameters##classe::GetDepth (CATICkeParm_var &oDepth)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDepth (oDepth)); \
} \
HRESULT  TIECATIMfgDesignHoleParameters##classe::GetOrigin (double& oX, double& oY, double& oZ)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin (oX,oY,oZ)); \
} \
HRESULT  TIECATIMfgDesignHoleParameters##classe::GetDirection (double& oX, double& oY, double& oZ)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection (oX,oY,oZ)); \
} \
HRESULT  TIECATIMfgDesignHoleParameters##classe::get_Parameter (const CATString &iParameterName, double &oParameter)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameter (iParameterName,oParameter)); \
} \
HRESULT  TIECATIMfgDesignHoleParameters##classe::get_Parameter (const CATString &iParameterName, int &oParameter)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameter (iParameterName,oParameter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
declare_TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgDesignHoleParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgDesignHoleParameters,"CATIMfgDesignHoleParameters",CATIMfgDesignHoleParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgDesignHoleParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgDesignHoleParameters##classe(classe::MetaObject(),CATIMfgDesignHoleParameters::MetaObject(),(void *)CreateTIECATIMfgDesignHoleParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgDesignHoleParameters(classe) \
 \
 \
declare_TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgDesignHoleParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgDesignHoleParameters,"CATIMfgDesignHoleParameters",CATIMfgDesignHoleParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgDesignHoleParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgDesignHoleParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgDesignHoleParameters##classe(classe::MetaObject(),CATIMfgDesignHoleParameters::MetaObject(),(void *)CreateTIECATIMfgDesignHoleParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgDesignHoleParameters(classe) TIE_CATIMfgDesignHoleParameters(classe)
#else
#define BOA_CATIMfgDesignHoleParameters(classe) CATImplementBOA(CATIMfgDesignHoleParameters, classe)
#endif

#endif
