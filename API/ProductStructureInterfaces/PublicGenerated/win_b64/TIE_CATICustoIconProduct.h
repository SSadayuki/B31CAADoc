#ifndef __TIE_CATICustoIconProduct
#define __TIE_CATICustoIconProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICustoIconProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICustoIconProduct */
#define declare_TIE_CATICustoIconProduct(classe) \
 \
 \
class TIECATICustoIconProduct##classe : public CATICustoIconProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICustoIconProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetIconForProduct( CATUnicodeString &  oIcon ) ; \
      virtual HRESULT GetIconForComponent( CATUnicodeString &  oIcon ) ; \
      virtual HRESULT IsPossibleToAddDocMask() ; \
      virtual HRESULT IsPossibleToAddRepMask() ; \
      virtual HRESULT IsPossibleToAddCentralMask() ; \
      virtual HRESULT IsPossibleToAddGearsMask() ; \
      virtual HRESULT IsPossibleToAddContextDesignMask() ; \
      virtual HRESULT IsPossibleToAddFlexibleDesignMask() ; \
};



#define ENVTIEdeclare_CATICustoIconProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetIconForProduct( CATUnicodeString &  oIcon ) ; \
virtual HRESULT GetIconForComponent( CATUnicodeString &  oIcon ) ; \
virtual HRESULT IsPossibleToAddDocMask() ; \
virtual HRESULT IsPossibleToAddRepMask() ; \
virtual HRESULT IsPossibleToAddCentralMask() ; \
virtual HRESULT IsPossibleToAddGearsMask() ; \
virtual HRESULT IsPossibleToAddContextDesignMask() ; \
virtual HRESULT IsPossibleToAddFlexibleDesignMask() ; \


#define ENVTIEdefine_CATICustoIconProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetIconForProduct( CATUnicodeString &  oIcon )  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)GetIconForProduct(oIcon )); \
} \
HRESULT  ENVTIEName::GetIconForComponent( CATUnicodeString &  oIcon )  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)GetIconForComponent(oIcon )); \
} \
HRESULT  ENVTIEName::IsPossibleToAddDocMask()  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)IsPossibleToAddDocMask()); \
} \
HRESULT  ENVTIEName::IsPossibleToAddRepMask()  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)IsPossibleToAddRepMask()); \
} \
HRESULT  ENVTIEName::IsPossibleToAddCentralMask()  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)IsPossibleToAddCentralMask()); \
} \
HRESULT  ENVTIEName::IsPossibleToAddGearsMask()  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)IsPossibleToAddGearsMask()); \
} \
HRESULT  ENVTIEName::IsPossibleToAddContextDesignMask()  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)IsPossibleToAddContextDesignMask()); \
} \
HRESULT  ENVTIEName::IsPossibleToAddFlexibleDesignMask()  \
{ \
return (ENVTIECALL(CATICustoIconProduct,ENVTIETypeLetter,ENVTIELetter)IsPossibleToAddFlexibleDesignMask()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICustoIconProduct(classe)    TIECATICustoIconProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATICustoIconProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICustoIconProduct, classe) \
 \
 \
CATImplementTIEMethods(CATICustoIconProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICustoIconProduct, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICustoIconProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICustoIconProduct, classe) \
 \
HRESULT  TIECATICustoIconProduct##classe::GetIconForProduct( CATUnicodeString &  oIcon )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIconForProduct(oIcon )); \
} \
HRESULT  TIECATICustoIconProduct##classe::GetIconForComponent( CATUnicodeString &  oIcon )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIconForComponent(oIcon )); \
} \
HRESULT  TIECATICustoIconProduct##classe::IsPossibleToAddDocMask()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPossibleToAddDocMask()); \
} \
HRESULT  TIECATICustoIconProduct##classe::IsPossibleToAddRepMask()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPossibleToAddRepMask()); \
} \
HRESULT  TIECATICustoIconProduct##classe::IsPossibleToAddCentralMask()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPossibleToAddCentralMask()); \
} \
HRESULT  TIECATICustoIconProduct##classe::IsPossibleToAddGearsMask()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPossibleToAddGearsMask()); \
} \
HRESULT  TIECATICustoIconProduct##classe::IsPossibleToAddContextDesignMask()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPossibleToAddContextDesignMask()); \
} \
HRESULT  TIECATICustoIconProduct##classe::IsPossibleToAddFlexibleDesignMask()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPossibleToAddFlexibleDesignMask()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICustoIconProduct(classe) \
 \
 \
declare_TIE_CATICustoIconProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICustoIconProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICustoIconProduct,"CATICustoIconProduct",CATICustoIconProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICustoIconProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICustoIconProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICustoIconProduct##classe(classe::MetaObject(),CATICustoIconProduct::MetaObject(),(void *)CreateTIECATICustoIconProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICustoIconProduct(classe) \
 \
 \
declare_TIE_CATICustoIconProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICustoIconProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICustoIconProduct,"CATICustoIconProduct",CATICustoIconProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICustoIconProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICustoIconProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICustoIconProduct##classe(classe::MetaObject(),CATICustoIconProduct::MetaObject(),(void *)CreateTIECATICustoIconProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICustoIconProduct(classe) TIE_CATICustoIconProduct(classe)
#else
#define BOA_CATICustoIconProduct(classe) CATImplementBOA(CATICustoIconProduct, classe)
#endif

#endif
