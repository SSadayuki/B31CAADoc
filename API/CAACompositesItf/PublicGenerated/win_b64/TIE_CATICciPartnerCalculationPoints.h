#ifndef __TIE_CATICciPartnerCalculationPoints
#define __TIE_CATICciPartnerCalculationPoints

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerCalculationPoints.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerCalculationPoints */
#define declare_TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
class TIECATICciPartnerCalculationPoints##classe : public CATICciPartnerCalculationPoints \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerCalculationPoints, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetListStrategiesAndTypes(CATListOfCATUnicodeString &oListName, CATListOfCATUnicodeString &oListNlsName, CATListOfInt &oListType); \
      virtual HRESULT GetCalculatedPoint(CATUnicodeString iStrategyName, CATICciProducibility_var &ispProd, double &odCoordX,double &odCoordY, double &odCoordZ); \
};



#define ENVTIEdeclare_CATICciPartnerCalculationPoints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetListStrategiesAndTypes(CATListOfCATUnicodeString &oListName, CATListOfCATUnicodeString &oListNlsName, CATListOfInt &oListType); \
virtual HRESULT GetCalculatedPoint(CATUnicodeString iStrategyName, CATICciProducibility_var &ispProd, double &odCoordX,double &odCoordY, double &odCoordZ); \


#define ENVTIEdefine_CATICciPartnerCalculationPoints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetListStrategiesAndTypes(CATListOfCATUnicodeString &oListName, CATListOfCATUnicodeString &oListNlsName, CATListOfInt &oListType) \
{ \
return (ENVTIECALL(CATICciPartnerCalculationPoints,ENVTIETypeLetter,ENVTIELetter)GetListStrategiesAndTypes(oListName,oListNlsName,oListType)); \
} \
HRESULT  ENVTIEName::GetCalculatedPoint(CATUnicodeString iStrategyName, CATICciProducibility_var &ispProd, double &odCoordX,double &odCoordY, double &odCoordZ) \
{ \
return (ENVTIECALL(CATICciPartnerCalculationPoints,ENVTIETypeLetter,ENVTIELetter)GetCalculatedPoint(iStrategyName,ispProd,odCoordX,odCoordY,odCoordZ)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerCalculationPoints(classe)    TIECATICciPartnerCalculationPoints##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerCalculationPoints, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerCalculationPoints, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerCalculationPoints, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerCalculationPoints, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerCalculationPoints, classe) \
 \
HRESULT  TIECATICciPartnerCalculationPoints##classe::GetListStrategiesAndTypes(CATListOfCATUnicodeString &oListName, CATListOfCATUnicodeString &oListNlsName, CATListOfInt &oListType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListStrategiesAndTypes(oListName,oListNlsName,oListType)); \
} \
HRESULT  TIECATICciPartnerCalculationPoints##classe::GetCalculatedPoint(CATUnicodeString iStrategyName, CATICciProducibility_var &ispProd, double &odCoordX,double &odCoordY, double &odCoordZ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCalculatedPoint(iStrategyName,ispProd,odCoordX,odCoordY,odCoordZ)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
declare_TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerCalculationPoints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerCalculationPoints,"CATICciPartnerCalculationPoints",CATICciPartnerCalculationPoints::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerCalculationPoints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerCalculationPoints##classe(classe::MetaObject(),CATICciPartnerCalculationPoints::MetaObject(),(void *)CreateTIECATICciPartnerCalculationPoints##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerCalculationPoints(classe) \
 \
 \
declare_TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerCalculationPoints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerCalculationPoints,"CATICciPartnerCalculationPoints",CATICciPartnerCalculationPoints::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerCalculationPoints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerCalculationPoints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerCalculationPoints##classe(classe::MetaObject(),CATICciPartnerCalculationPoints::MetaObject(),(void *)CreateTIECATICciPartnerCalculationPoints##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerCalculationPoints(classe) TIE_CATICciPartnerCalculationPoints(classe)
#else
#define BOA_CATICciPartnerCalculationPoints(classe) CATImplementBOA(CATICciPartnerCalculationPoints, classe)
#endif

#endif
