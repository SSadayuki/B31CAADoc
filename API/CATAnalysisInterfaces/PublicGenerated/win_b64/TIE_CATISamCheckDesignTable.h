#ifndef __TIE_CATISamCheckDesignTable
#define __TIE_CATISamCheckDesignTable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamCheckDesignTable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamCheckDesignTable */
#define declare_TIE_CATISamCheckDesignTable(classe) \
 \
 \
class TIECATISamCheckDesignTable##classe : public CATISamCheckDesignTable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamCheckDesignTable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNbColumns(const CATISamBasicComponent * ipiBasicComponent, int& oNb) ; \
      virtual HRESULT GetMagnitudes(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oMagnitudes) ; \
      virtual HRESULT CheckFormat(const CATISamBasicComponent * ipiBasicComponent, CATIDesignTable * iDT, CATListOfCATUnicodeString& oUnits) ; \
      virtual HRESULT GetColTitles(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oTitles) ; \
      virtual HRESULT IsBoundingBoxDisplayed(const CATISamBasicComponent * ipiBasicComponent, int & oIsBoundingBoxDisp) ; \
};



#define ENVTIEdeclare_CATISamCheckDesignTable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNbColumns(const CATISamBasicComponent * ipiBasicComponent, int& oNb) ; \
virtual HRESULT GetMagnitudes(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oMagnitudes) ; \
virtual HRESULT CheckFormat(const CATISamBasicComponent * ipiBasicComponent, CATIDesignTable * iDT, CATListOfCATUnicodeString& oUnits) ; \
virtual HRESULT GetColTitles(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oTitles) ; \
virtual HRESULT IsBoundingBoxDisplayed(const CATISamBasicComponent * ipiBasicComponent, int & oIsBoundingBoxDisp) ; \


#define ENVTIEdefine_CATISamCheckDesignTable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNbColumns(const CATISamBasicComponent * ipiBasicComponent, int& oNb)  \
{ \
return (ENVTIECALL(CATISamCheckDesignTable,ENVTIETypeLetter,ENVTIELetter)GetNbColumns(ipiBasicComponent,oNb)); \
} \
HRESULT  ENVTIEName::GetMagnitudes(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oMagnitudes)  \
{ \
return (ENVTIECALL(CATISamCheckDesignTable,ENVTIETypeLetter,ENVTIELetter)GetMagnitudes(ipiBasicComponent,oMagnitudes)); \
} \
HRESULT  ENVTIEName::CheckFormat(const CATISamBasicComponent * ipiBasicComponent, CATIDesignTable * iDT, CATListOfCATUnicodeString& oUnits)  \
{ \
return (ENVTIECALL(CATISamCheckDesignTable,ENVTIETypeLetter,ENVTIELetter)CheckFormat(ipiBasicComponent,iDT,oUnits)); \
} \
HRESULT  ENVTIEName::GetColTitles(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oTitles)  \
{ \
return (ENVTIECALL(CATISamCheckDesignTable,ENVTIETypeLetter,ENVTIELetter)GetColTitles(ipiBasicComponent,oTitles)); \
} \
HRESULT  ENVTIEName::IsBoundingBoxDisplayed(const CATISamBasicComponent * ipiBasicComponent, int & oIsBoundingBoxDisp)  \
{ \
return (ENVTIECALL(CATISamCheckDesignTable,ENVTIETypeLetter,ENVTIELetter)IsBoundingBoxDisplayed(ipiBasicComponent,oIsBoundingBoxDisp)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamCheckDesignTable(classe)    TIECATISamCheckDesignTable##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamCheckDesignTable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamCheckDesignTable, classe) \
 \
 \
CATImplementTIEMethods(CATISamCheckDesignTable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamCheckDesignTable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamCheckDesignTable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamCheckDesignTable, classe) \
 \
HRESULT  TIECATISamCheckDesignTable##classe::GetNbColumns(const CATISamBasicComponent * ipiBasicComponent, int& oNb)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbColumns(ipiBasicComponent,oNb)); \
} \
HRESULT  TIECATISamCheckDesignTable##classe::GetMagnitudes(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oMagnitudes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMagnitudes(ipiBasicComponent,oMagnitudes)); \
} \
HRESULT  TIECATISamCheckDesignTable##classe::CheckFormat(const CATISamBasicComponent * ipiBasicComponent, CATIDesignTable * iDT, CATListOfCATUnicodeString& oUnits)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckFormat(ipiBasicComponent,iDT,oUnits)); \
} \
HRESULT  TIECATISamCheckDesignTable##classe::GetColTitles(const CATISamBasicComponent * ipiBasicComponent, CATListOfCATUnicodeString& oTitles)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColTitles(ipiBasicComponent,oTitles)); \
} \
HRESULT  TIECATISamCheckDesignTable##classe::IsBoundingBoxDisplayed(const CATISamBasicComponent * ipiBasicComponent, int & oIsBoundingBoxDisp)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBoundingBoxDisplayed(ipiBasicComponent,oIsBoundingBoxDisp)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamCheckDesignTable(classe) \
 \
 \
declare_TIE_CATISamCheckDesignTable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCheckDesignTable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCheckDesignTable,"CATISamCheckDesignTable",CATISamCheckDesignTable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCheckDesignTable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamCheckDesignTable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCheckDesignTable##classe(classe::MetaObject(),CATISamCheckDesignTable::MetaObject(),(void *)CreateTIECATISamCheckDesignTable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamCheckDesignTable(classe) \
 \
 \
declare_TIE_CATISamCheckDesignTable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCheckDesignTable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCheckDesignTable,"CATISamCheckDesignTable",CATISamCheckDesignTable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCheckDesignTable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamCheckDesignTable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCheckDesignTable##classe(classe::MetaObject(),CATISamCheckDesignTable::MetaObject(),(void *)CreateTIECATISamCheckDesignTable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamCheckDesignTable(classe) TIE_CATISamCheckDesignTable(classe)
#else
#define BOA_CATISamCheckDesignTable(classe) CATImplementBOA(CATISamCheckDesignTable, classe)
#endif

#endif
