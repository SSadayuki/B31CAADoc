#ifndef __TIE_CATIMfgResourceQueryUserDatabase
#define __TIE_CATIMfgResourceQueryUserDatabase

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgResourceQueryUserDatabase.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgResourceQueryUserDatabase */
#define declare_TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
class TIECATIMfgResourceQueryUserDatabase##classe : public CATIMfgResourceQueryUserDatabase \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgResourceQueryUserDatabase, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT InitConnection (); \
      virtual HRESULT ResetConnection (); \
      virtual HRESULT GetNamesToDisplay  (CATListOfCATUnicodeString &oListNames); \
      virtual HRESULT Initialize  (const CATUnicodeString &iName, const CATUnicodeString &iType); \
      virtual HRESULT AddSubComponentTypeConstraint (CATIMfgResourceQuery::MfgResourceQueryType  iResourceType, const CATUnicodeString                     &iFamily); \
      virtual HRESULT AddNameLikeConstraint  (const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT AddDiameterBetweenConstraint  (const double             &iMinValue, const double             &iMaxValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const int                &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const double             &iValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT AddConstraints  (const CATUnicodeString            &iAttribute, const CATUnicodeString            &iUnit, const int                         &iTypeValue, const CATListOfInt                &iOperators, const CATListOfInt                &iIntValues, const CATListOfDouble             &iDblValues, const CATListOfCATUnicodeString   &iStrValues, const CATListOfInt                &iLogLinks, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT Execute(); \
      virtual HRESULT GetResultSize(int &oNbElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT GetDescription (const int                  &iElem, CATListOfCATUnicodeString  &oAttributes, CATListOfInt               &oTypeValues, CATListOfInt               &oNbValues, CATListOfInt               &oIntValues, CATListOfDouble            &DblValues, CATListOfCATUnicodeString  &StrValues, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT GetComponentNameAndIndex(const int        &iNumElem, CATUnicodeString &oCompName, int              &oCompNumElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT GetCorrectors (const int                 &iElem, CATListOfCATUnicodeString &oListPoints, CATListOfInt              &oListNumber, CATListOfInt              &oListLengthNumber, CATListOfInt              &oListRadiusNumber, CATListOfDouble           &oListDiameter, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT GetRepresentation  (const int         &iElem, CATUnicodeString  &oPathName, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT GetRepresentation  (const int         &iElem, CATIDocId         *&oDocId, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
      virtual HRESULT InstantiateResourceInDocument (const int          &iElem, CATBaseUnknown_var &hBUResources, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent, CATDocument *piDoc = 0); \
};



#define ENVTIEdeclare_CATIMfgResourceQueryUserDatabase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT InitConnection (); \
virtual HRESULT ResetConnection (); \
virtual HRESULT GetNamesToDisplay  (CATListOfCATUnicodeString &oListNames); \
virtual HRESULT Initialize  (const CATUnicodeString &iName, const CATUnicodeString &iType); \
virtual HRESULT AddSubComponentTypeConstraint (CATIMfgResourceQuery::MfgResourceQueryType  iResourceType, const CATUnicodeString                     &iFamily); \
virtual HRESULT AddNameLikeConstraint  (const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT AddDiameterBetweenConstraint  (const double             &iMinValue, const double             &iMaxValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const int                &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const double             &iValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT AddConstraints  (const CATUnicodeString            &iAttribute, const CATUnicodeString            &iUnit, const int                         &iTypeValue, const CATListOfInt                &iOperators, const CATListOfInt                &iIntValues, const CATListOfDouble             &iDblValues, const CATListOfCATUnicodeString   &iStrValues, const CATListOfInt                &iLogLinks, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT Execute(); \
virtual HRESULT GetResultSize(int &oNbElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT GetDescription (const int                  &iElem, CATListOfCATUnicodeString  &oAttributes, CATListOfInt               &oTypeValues, CATListOfInt               &oNbValues, CATListOfInt               &oIntValues, CATListOfDouble            &DblValues, CATListOfCATUnicodeString  &StrValues, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT GetComponentNameAndIndex(const int        &iNumElem, CATUnicodeString &oCompName, int              &oCompNumElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT GetCorrectors (const int                 &iElem, CATListOfCATUnicodeString &oListPoints, CATListOfInt              &oListNumber, CATListOfInt              &oListLengthNumber, CATListOfInt              &oListRadiusNumber, CATListOfDouble           &oListDiameter, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT GetRepresentation  (const int         &iElem, CATUnicodeString  &oPathName, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT GetRepresentation  (const int         &iElem, CATIDocId         *&oDocId, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent); \
virtual HRESULT InstantiateResourceInDocument (const int          &iElem, CATBaseUnknown_var &hBUResources, CATIMfgResourceQuery::MfgResourceQueryType iResourceType=MfgCurrent, CATDocument *piDoc = 0); \


#define ENVTIEdefine_CATIMfgResourceQueryUserDatabase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::InitConnection () \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)InitConnection ()); \
} \
HRESULT  ENVTIEName::ResetConnection () \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)ResetConnection ()); \
} \
HRESULT  ENVTIEName::GetNamesToDisplay  (CATListOfCATUnicodeString &oListNames) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetNamesToDisplay  (oListNames)); \
} \
HRESULT  ENVTIEName::Initialize  (const CATUnicodeString &iName, const CATUnicodeString &iType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)Initialize  (iName,iType)); \
} \
HRESULT  ENVTIEName::AddSubComponentTypeConstraint (CATIMfgResourceQuery::MfgResourceQueryType  iResourceType, const CATUnicodeString                     &iFamily) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddSubComponentTypeConstraint (iResourceType,iFamily)); \
} \
HRESULT  ENVTIEName::AddNameLikeConstraint  (const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddNameLikeConstraint  (iValue,iResourceType)); \
} \
HRESULT  ENVTIEName::AddDiameterBetweenConstraint  (const double             &iMinValue, const double             &iMaxValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddDiameterBetweenConstraint  (iMinValue,iMaxValue,iUnit,iResourceType)); \
} \
HRESULT  ENVTIEName::AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const int                &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddConstraint  (iAttribute,iOperator,iValue,iResourceType)); \
} \
HRESULT  ENVTIEName::AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const double             &iValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddConstraint  (iAttribute,iOperator,iValue,iUnit,iResourceType)); \
} \
HRESULT  ENVTIEName::AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddConstraint  (iAttribute,iOperator,iValue,iResourceType)); \
} \
HRESULT  ENVTIEName::AddConstraints  (const CATUnicodeString            &iAttribute, const CATUnicodeString            &iUnit, const int                         &iTypeValue, const CATListOfInt                &iOperators, const CATListOfInt                &iIntValues, const CATListOfDouble             &iDblValues, const CATListOfCATUnicodeString   &iStrValues, const CATListOfInt                &iLogLinks, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)AddConstraints  (iAttribute,iUnit,iTypeValue,iOperators,iIntValues,iDblValues,iStrValues,iLogLinks,iResourceType)); \
} \
HRESULT  ENVTIEName::Execute() \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)Execute()); \
} \
HRESULT  ENVTIEName::GetResultSize(int &oNbElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetResultSize(oNbElem,iResourceType)); \
} \
HRESULT  ENVTIEName::GetDescription (const int                  &iElem, CATListOfCATUnicodeString  &oAttributes, CATListOfInt               &oTypeValues, CATListOfInt               &oNbValues, CATListOfInt               &oIntValues, CATListOfDouble            &DblValues, CATListOfCATUnicodeString  &StrValues, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetDescription (iElem,oAttributes,oTypeValues,oNbValues,oIntValues,DblValues,StrValues,iResourceType)); \
} \
HRESULT  ENVTIEName::GetComponentNameAndIndex(const int        &iNumElem, CATUnicodeString &oCompName, int              &oCompNumElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetComponentNameAndIndex(iNumElem,oCompName,oCompNumElem,iResourceType)); \
} \
HRESULT  ENVTIEName::GetCorrectors (const int                 &iElem, CATListOfCATUnicodeString &oListPoints, CATListOfInt              &oListNumber, CATListOfInt              &oListLengthNumber, CATListOfInt              &oListRadiusNumber, CATListOfDouble           &oListDiameter, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetCorrectors (iElem,oListPoints,oListNumber,oListLengthNumber,oListRadiusNumber,oListDiameter,iResourceType)); \
} \
HRESULT  ENVTIEName::GetRepresentation  (const int         &iElem, CATUnicodeString  &oPathName, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetRepresentation  (iElem,oPathName,iResourceType)); \
} \
HRESULT  ENVTIEName::GetRepresentation  (const int         &iElem, CATIDocId         *&oDocId, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)GetRepresentation  (iElem,oDocId,iResourceType)); \
} \
HRESULT  ENVTIEName::InstantiateResourceInDocument (const int          &iElem, CATBaseUnknown_var &hBUResources, CATIMfgResourceQuery::MfgResourceQueryType iResourceType, CATDocument *piDoc ) \
{ \
return (ENVTIECALL(CATIMfgResourceQueryUserDatabase,ENVTIETypeLetter,ENVTIELetter)InstantiateResourceInDocument (iElem,hBUResources,iResourceType,piDoc )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgResourceQueryUserDatabase(classe)    TIECATIMfgResourceQueryUserDatabase##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgResourceQueryUserDatabase, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgResourceQueryUserDatabase, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgResourceQueryUserDatabase, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgResourceQueryUserDatabase, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgResourceQueryUserDatabase, classe) \
 \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::InitConnection () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitConnection ()); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::ResetConnection () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetConnection ()); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetNamesToDisplay  (CATListOfCATUnicodeString &oListNames) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNamesToDisplay  (oListNames)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::Initialize  (const CATUnicodeString &iName, const CATUnicodeString &iType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Initialize  (iName,iType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddSubComponentTypeConstraint (CATIMfgResourceQuery::MfgResourceQueryType  iResourceType, const CATUnicodeString                     &iFamily) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSubComponentTypeConstraint (iResourceType,iFamily)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddNameLikeConstraint  (const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNameLikeConstraint  (iValue,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddDiameterBetweenConstraint  (const double             &iMinValue, const double             &iMaxValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDiameterBetweenConstraint  (iMinValue,iMaxValue,iUnit,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const int                &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraint  (iAttribute,iOperator,iValue,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const double             &iValue, const CATUnicodeString   &iUnit, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraint  (iAttribute,iOperator,iValue,iUnit,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddConstraint  (const CATUnicodeString   &iAttribute, const int                &iOperator, const CATUnicodeString   &iValue, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraint  (iAttribute,iOperator,iValue,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::AddConstraints  (const CATUnicodeString            &iAttribute, const CATUnicodeString            &iUnit, const int                         &iTypeValue, const CATListOfInt                &iOperators, const CATListOfInt                &iIntValues, const CATListOfDouble             &iDblValues, const CATListOfCATUnicodeString   &iStrValues, const CATListOfInt                &iLogLinks, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraints  (iAttribute,iUnit,iTypeValue,iOperators,iIntValues,iDblValues,iStrValues,iLogLinks,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::Execute() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Execute()); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetResultSize(int &oNbElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResultSize(oNbElem,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetDescription (const int                  &iElem, CATListOfCATUnicodeString  &oAttributes, CATListOfInt               &oTypeValues, CATListOfInt               &oNbValues, CATListOfInt               &oIntValues, CATListOfDouble            &DblValues, CATListOfCATUnicodeString  &StrValues, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDescription (iElem,oAttributes,oTypeValues,oNbValues,oIntValues,DblValues,StrValues,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetComponentNameAndIndex(const int        &iNumElem, CATUnicodeString &oCompName, int              &oCompNumElem, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetComponentNameAndIndex(iNumElem,oCompName,oCompNumElem,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetCorrectors (const int                 &iElem, CATListOfCATUnicodeString &oListPoints, CATListOfInt              &oListNumber, CATListOfInt              &oListLengthNumber, CATListOfInt              &oListRadiusNumber, CATListOfDouble           &oListDiameter, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCorrectors (iElem,oListPoints,oListNumber,oListLengthNumber,oListRadiusNumber,oListDiameter,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetRepresentation  (const int         &iElem, CATUnicodeString  &oPathName, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRepresentation  (iElem,oPathName,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::GetRepresentation  (const int         &iElem, CATIDocId         *&oDocId, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRepresentation  (iElem,oDocId,iResourceType)); \
} \
HRESULT  TIECATIMfgResourceQueryUserDatabase##classe::InstantiateResourceInDocument (const int          &iElem, CATBaseUnknown_var &hBUResources, CATIMfgResourceQuery::MfgResourceQueryType iResourceType, CATDocument *piDoc ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InstantiateResourceInDocument (iElem,hBUResources,iResourceType,piDoc )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
declare_TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgResourceQueryUserDatabase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgResourceQueryUserDatabase,"CATIMfgResourceQueryUserDatabase",CATIMfgResourceQueryUserDatabase::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgResourceQueryUserDatabase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgResourceQueryUserDatabase##classe(classe::MetaObject(),CATIMfgResourceQueryUserDatabase::MetaObject(),(void *)CreateTIECATIMfgResourceQueryUserDatabase##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
declare_TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgResourceQueryUserDatabase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgResourceQueryUserDatabase,"CATIMfgResourceQueryUserDatabase",CATIMfgResourceQueryUserDatabase::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgResourceQueryUserDatabase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgResourceQueryUserDatabase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgResourceQueryUserDatabase##classe(classe::MetaObject(),CATIMfgResourceQueryUserDatabase::MetaObject(),(void *)CreateTIECATIMfgResourceQueryUserDatabase##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgResourceQueryUserDatabase(classe) TIE_CATIMfgResourceQueryUserDatabase(classe)
#else
#define BOA_CATIMfgResourceQueryUserDatabase(classe) CATImplementBOA(CATIMfgResourceQueryUserDatabase, classe)
#endif

#endif
