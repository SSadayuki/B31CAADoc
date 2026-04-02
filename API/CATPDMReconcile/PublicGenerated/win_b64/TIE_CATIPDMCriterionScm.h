#ifndef __TIE_CATIPDMCriterionScm
#define __TIE_CATIPDMCriterionScm

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMCriterionScm.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMCriterionScm */
#define declare_TIE_CATIPDMCriterionScm(classe) \
 \
 \
class TIECATIPDMCriterionScm##classe : public CATIPDMCriterionScm \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMCriterionScm, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsApplicable( CATScmObject * iCATRecObj ) const ; \
      virtual HRESULT GetName( CATUnicodeString & oName ) const ; \
      virtual HRESULT GetOrderIndex( int & onOrder ) const ; \
      virtual HRESULT GetCriterionMode( int & onMode ) const ; \
      virtual HRESULT GetCriterionParameters( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & oQueryLabelList , CATListValCATUnicodeString & oQueryValueList ) ; \
      virtual HRESULT ExecuteCriterion( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & iQueryValueList , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList ) ; \
      virtual HRESULT GetCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & ocXmlQueryStream ) ; \
      virtual HRESULT CheckCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & iocXmlQueryStream ) ; \
      virtual HRESULT ExecuteCriterionXML( CATScmObject               * ixScmObj , CATUnicodeString           & icXmlQueryStream , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList ) ; \
};



#define ENVTIEdeclare_CATIPDMCriterionScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsApplicable( CATScmObject * iCATRecObj ) const ; \
virtual HRESULT GetName( CATUnicodeString & oName ) const ; \
virtual HRESULT GetOrderIndex( int & onOrder ) const ; \
virtual HRESULT GetCriterionMode( int & onMode ) const ; \
virtual HRESULT GetCriterionParameters( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & oQueryLabelList , CATListValCATUnicodeString & oQueryValueList ) ; \
virtual HRESULT ExecuteCriterion( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & iQueryValueList , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList ) ; \
virtual HRESULT GetCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & ocXmlQueryStream ) ; \
virtual HRESULT CheckCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & iocXmlQueryStream ) ; \
virtual HRESULT ExecuteCriterionXML( CATScmObject               * ixScmObj , CATUnicodeString           & icXmlQueryStream , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList ) ; \


#define ENVTIEdefine_CATIPDMCriterionScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsApplicable( CATScmObject * iCATRecObj ) const  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)IsApplicable(iCATRecObj )); \
} \
HRESULT  ENVTIEName::GetName( CATUnicodeString & oName ) const  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)GetName(oName )); \
} \
HRESULT  ENVTIEName::GetOrderIndex( int & onOrder ) const  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)GetOrderIndex(onOrder )); \
} \
HRESULT  ENVTIEName::GetCriterionMode( int & onMode ) const  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)GetCriterionMode(onMode )); \
} \
HRESULT  ENVTIEName::GetCriterionParameters( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & oQueryLabelList , CATListValCATUnicodeString & oQueryValueList )  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)GetCriterionParameters(iCATRecObj ,oQueryLabelList ,oQueryValueList )); \
} \
HRESULT  ENVTIEName::ExecuteCriterion( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & iQueryValueList , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList )  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)ExecuteCriterion(iCATRecObj ,iQueryValueList ,oPDMRecObjList ,oPDMColumnNameList )); \
} \
HRESULT  ENVTIEName::GetCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & ocXmlQueryStream )  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)GetCriterionParametersXML(ixScmObj ,ocXmlQueryStream )); \
} \
HRESULT  ENVTIEName::CheckCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & iocXmlQueryStream )  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)CheckCriterionParametersXML(ixScmObj ,iocXmlQueryStream )); \
} \
HRESULT  ENVTIEName::ExecuteCriterionXML( CATScmObject               * ixScmObj , CATUnicodeString           & icXmlQueryStream , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList )  \
{ \
return (ENVTIECALL(CATIPDMCriterionScm,ENVTIETypeLetter,ENVTIELetter)ExecuteCriterionXML(ixScmObj ,icXmlQueryStream ,oPDMRecObjList ,oPDMColumnNameList )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMCriterionScm(classe)    TIECATIPDMCriterionScm##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMCriterionScm(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMCriterionScm, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMCriterionScm, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMCriterionScm, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMCriterionScm, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMCriterionScm, classe) \
 \
HRESULT  TIECATIPDMCriterionScm##classe::IsApplicable( CATScmObject * iCATRecObj ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsApplicable(iCATRecObj )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::GetName( CATUnicodeString & oName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oName )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::GetOrderIndex( int & onOrder ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrderIndex(onOrder )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::GetCriterionMode( int & onMode ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCriterionMode(onMode )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::GetCriterionParameters( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & oQueryLabelList , CATListValCATUnicodeString & oQueryValueList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCriterionParameters(iCATRecObj ,oQueryLabelList ,oQueryValueList )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::ExecuteCriterion( CATScmObject               * iCATRecObj , CATListValCATUnicodeString & iQueryValueList , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExecuteCriterion(iCATRecObj ,iQueryValueList ,oPDMRecObjList ,oPDMColumnNameList )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::GetCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & ocXmlQueryStream )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCriterionParametersXML(ixScmObj ,ocXmlQueryStream )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::CheckCriterionParametersXML( CATScmObject     * ixScmObj , CATUnicodeString & iocXmlQueryStream )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckCriterionParametersXML(ixScmObj ,iocXmlQueryStream )); \
} \
HRESULT  TIECATIPDMCriterionScm##classe::ExecuteCriterionXML( CATScmObject               * ixScmObj , CATUnicodeString           & icXmlQueryStream , CATListPtrCATScmPDMObject  & oPDMRecObjList , CATListValCATUnicodeString & oPDMColumnNameList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExecuteCriterionXML(ixScmObj ,icXmlQueryStream ,oPDMRecObjList ,oPDMColumnNameList )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMCriterionScm(classe) \
 \
 \
declare_TIE_CATIPDMCriterionScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMCriterionScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMCriterionScm,"CATIPDMCriterionScm",CATIPDMCriterionScm::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMCriterionScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMCriterionScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMCriterionScm##classe(classe::MetaObject(),CATIPDMCriterionScm::MetaObject(),(void *)CreateTIECATIPDMCriterionScm##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMCriterionScm(classe) \
 \
 \
declare_TIE_CATIPDMCriterionScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMCriterionScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMCriterionScm,"CATIPDMCriterionScm",CATIPDMCriterionScm::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMCriterionScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMCriterionScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMCriterionScm##classe(classe::MetaObject(),CATIPDMCriterionScm::MetaObject(),(void *)CreateTIECATIPDMCriterionScm##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMCriterionScm(classe) TIE_CATIPDMCriterionScm(classe)
#else
#define BOA_CATIPDMCriterionScm(classe) CATImplementBOA(CATIPDMCriterionScm, classe)
#endif

#endif
