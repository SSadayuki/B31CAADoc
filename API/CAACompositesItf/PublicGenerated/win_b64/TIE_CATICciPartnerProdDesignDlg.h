#ifndef __TIE_CATICciPartnerProdDesignDlg
#define __TIE_CATICciPartnerProdDesignDlg

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerProdDesignDlg.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerProdDesignDlg */
#define declare_TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
class TIECATICciPartnerProdDesignDlg##classe : public CATICciPartnerProdDesignDlg \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerProdDesignDlg, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   GetDesignFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame); \
};



#define ENVTIEdeclare_CATICciPartnerProdDesignDlg(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   GetDesignFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame); \


#define ENVTIEdefine_CATICciPartnerProdDesignDlg(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::GetDesignFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame) \
{ \
return (ENVTIECALL(CATICciPartnerProdDesignDlg,ENVTIETypeLetter,ENVTIELetter)GetDesignFrame (ipContPage,oPartnersFrame)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerProdDesignDlg(classe)    TIECATICciPartnerProdDesignDlg##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerProdDesignDlg, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerProdDesignDlg, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerProdDesignDlg, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerProdDesignDlg, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerProdDesignDlg, classe) \
 \
HRESULT    TIECATICciPartnerProdDesignDlg##classe::GetDesignFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignFrame (ipContPage,oPartnersFrame)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
declare_TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdDesignDlg##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdDesignDlg,"CATICciPartnerProdDesignDlg",CATICciPartnerProdDesignDlg::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerProdDesignDlg, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdDesignDlg##classe(classe::MetaObject(),CATICciPartnerProdDesignDlg::MetaObject(),(void *)CreateTIECATICciPartnerProdDesignDlg##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerProdDesignDlg(classe) \
 \
 \
declare_TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdDesignDlg##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdDesignDlg,"CATICciPartnerProdDesignDlg",CATICciPartnerProdDesignDlg::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdDesignDlg(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerProdDesignDlg, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdDesignDlg##classe(classe::MetaObject(),CATICciPartnerProdDesignDlg::MetaObject(),(void *)CreateTIECATICciPartnerProdDesignDlg##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerProdDesignDlg(classe) TIE_CATICciPartnerProdDesignDlg(classe)
#else
#define BOA_CATICciPartnerProdDesignDlg(classe) CATImplementBOA(CATICciPartnerProdDesignDlg, classe)
#endif

#endif
