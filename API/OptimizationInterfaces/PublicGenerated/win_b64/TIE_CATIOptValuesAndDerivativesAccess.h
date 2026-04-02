#ifndef __TIE_CATIOptValuesAndDerivativesAccess
#define __TIE_CATIOptValuesAndDerivativesAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIOptValuesAndDerivativesAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIOptValuesAndDerivativesAccess */
#define declare_TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
class TIECATIOptValuesAndDerivativesAccess##classe : public CATIOptValuesAndDerivativesAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIOptValuesAndDerivativesAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  GetOutputValues( double*& oOutputList); \
      virtual HRESULT  GetOutputErrors( CATListOfInt& oList); \
      virtual HRESULT IsNumberOfOutputsVariable(int& oAnswer); \
      virtual HRESULT  SetParameters( CATListValCATBaseUnknown_var *  iParamList) ; \
      virtual HRESULT TestDerivativesExistence(CATListOfInt& oExistence, int& oNumberOfSucceededTests) const ; \
      virtual HRESULT GetDerivativeErrorMessages(CATListOfCATString& oErrorMessages) const ; \
      virtual HRESULT GetOutputErrorMessages(CATListOfCATString& oErrorMessages) const ; \
      virtual HRESULT  GetFirstOrderDerivative(double*& oFirstOrderDerivatives) const ; \
      virtual HRESULT GetSecondOrderDerivative(double*& oSecondOrderDerivatives) const ; \
      virtual HRESULT  SetFirstOrderDerivative(double* iFirstOrderDerivatives) const ; \
      virtual HRESULT SetSecondOrderDerivative(double* iSecondOrderDerivatives) const ; \
      virtual HRESULT GetNthOrderDerivative(double*& oNthOrderDerivatives, int iOrder) const ; \
      virtual HRESULT  GetParameters( CATListValCATBaseUnknown_var *&  oParamList) const ; \
      virtual HRESULT  SetParametersDelta(const CATListOfDouble& iDeltas) ; \
      virtual HRESULT  GetParametersDelta( CATListOfDouble& oDeltas) const ; \
      virtual int GetNumberOfValues( ) const ; \
      virtual HRESULT  GetNumberOfParameters( int& oNumberOfParameters) const ; \
      virtual void GetMagnitude(CATUnicodeString& oNameOfTheMagnitude ) const ; \
};



#define ENVTIEdeclare_CATIOptValuesAndDerivativesAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  GetOutputValues( double*& oOutputList); \
virtual HRESULT  GetOutputErrors( CATListOfInt& oList); \
virtual HRESULT IsNumberOfOutputsVariable(int& oAnswer); \
virtual HRESULT  SetParameters( CATListValCATBaseUnknown_var *  iParamList) ; \
virtual HRESULT TestDerivativesExistence(CATListOfInt& oExistence, int& oNumberOfSucceededTests) const ; \
virtual HRESULT GetDerivativeErrorMessages(CATListOfCATString& oErrorMessages) const ; \
virtual HRESULT GetOutputErrorMessages(CATListOfCATString& oErrorMessages) const ; \
virtual HRESULT  GetFirstOrderDerivative(double*& oFirstOrderDerivatives) const ; \
virtual HRESULT GetSecondOrderDerivative(double*& oSecondOrderDerivatives) const ; \
virtual HRESULT  SetFirstOrderDerivative(double* iFirstOrderDerivatives) const ; \
virtual HRESULT SetSecondOrderDerivative(double* iSecondOrderDerivatives) const ; \
virtual HRESULT GetNthOrderDerivative(double*& oNthOrderDerivatives, int iOrder) const ; \
virtual HRESULT  GetParameters( CATListValCATBaseUnknown_var *&  oParamList) const ; \
virtual HRESULT  SetParametersDelta(const CATListOfDouble& iDeltas) ; \
virtual HRESULT  GetParametersDelta( CATListOfDouble& oDeltas) const ; \
virtual int GetNumberOfValues( ) const ; \
virtual HRESULT  GetNumberOfParameters( int& oNumberOfParameters) const ; \
virtual void GetMagnitude(CATUnicodeString& oNameOfTheMagnitude ) const ; \


#define ENVTIEdefine_CATIOptValuesAndDerivativesAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::GetOutputValues( double*& oOutputList) \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetOutputValues(oOutputList)); \
} \
HRESULT   ENVTIEName::GetOutputErrors( CATListOfInt& oList) \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetOutputErrors(oList)); \
} \
HRESULT  ENVTIEName::IsNumberOfOutputsVariable(int& oAnswer) \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)IsNumberOfOutputsVariable(oAnswer)); \
} \
HRESULT   ENVTIEName::SetParameters( CATListValCATBaseUnknown_var *  iParamList)  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)SetParameters(iParamList)); \
} \
HRESULT  ENVTIEName::TestDerivativesExistence(CATListOfInt& oExistence, int& oNumberOfSucceededTests) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)TestDerivativesExistence(oExistence,oNumberOfSucceededTests)); \
} \
HRESULT  ENVTIEName::GetDerivativeErrorMessages(CATListOfCATString& oErrorMessages) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetDerivativeErrorMessages(oErrorMessages)); \
} \
HRESULT  ENVTIEName::GetOutputErrorMessages(CATListOfCATString& oErrorMessages) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetOutputErrorMessages(oErrorMessages)); \
} \
HRESULT   ENVTIEName::GetFirstOrderDerivative(double*& oFirstOrderDerivatives) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetFirstOrderDerivative(oFirstOrderDerivatives)); \
} \
HRESULT  ENVTIEName::GetSecondOrderDerivative(double*& oSecondOrderDerivatives) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetSecondOrderDerivative(oSecondOrderDerivatives)); \
} \
HRESULT   ENVTIEName::SetFirstOrderDerivative(double* iFirstOrderDerivatives) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)SetFirstOrderDerivative(iFirstOrderDerivatives)); \
} \
HRESULT  ENVTIEName::SetSecondOrderDerivative(double* iSecondOrderDerivatives) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)SetSecondOrderDerivative(iSecondOrderDerivatives)); \
} \
HRESULT  ENVTIEName::GetNthOrderDerivative(double*& oNthOrderDerivatives, int iOrder) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetNthOrderDerivative(oNthOrderDerivatives,iOrder)); \
} \
HRESULT   ENVTIEName::GetParameters( CATListValCATBaseUnknown_var *&  oParamList) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetParameters(oParamList)); \
} \
HRESULT   ENVTIEName::SetParametersDelta(const CATListOfDouble& iDeltas)  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)SetParametersDelta(iDeltas)); \
} \
HRESULT   ENVTIEName::GetParametersDelta( CATListOfDouble& oDeltas) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetParametersDelta(oDeltas)); \
} \
int  ENVTIEName::GetNumberOfValues( ) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetNumberOfValues()); \
} \
HRESULT   ENVTIEName::GetNumberOfParameters( int& oNumberOfParameters) const  \
{ \
return (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetNumberOfParameters(oNumberOfParameters)); \
} \
void  ENVTIEName::GetMagnitude(CATUnicodeString& oNameOfTheMagnitude ) const  \
{ \
 (ENVTIECALL(CATIOptValuesAndDerivativesAccess,ENVTIETypeLetter,ENVTIELetter)GetMagnitude(oNameOfTheMagnitude )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIOptValuesAndDerivativesAccess(classe)    TIECATIOptValuesAndDerivativesAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIOptValuesAndDerivativesAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIOptValuesAndDerivativesAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIOptValuesAndDerivativesAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIOptValuesAndDerivativesAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIOptValuesAndDerivativesAccess, classe) \
 \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::GetOutputValues( double*& oOutputList) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputValues(oOutputList)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::GetOutputErrors( CATListOfInt& oList) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputErrors(oList)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::IsNumberOfOutputsVariable(int& oAnswer) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsNumberOfOutputsVariable(oAnswer)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::SetParameters( CATListValCATBaseUnknown_var *  iParamList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameters(iParamList)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::TestDerivativesExistence(CATListOfInt& oExistence, int& oNumberOfSucceededTests) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestDerivativesExistence(oExistence,oNumberOfSucceededTests)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::GetDerivativeErrorMessages(CATListOfCATString& oErrorMessages) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDerivativeErrorMessages(oErrorMessages)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::GetOutputErrorMessages(CATListOfCATString& oErrorMessages) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputErrorMessages(oErrorMessages)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::GetFirstOrderDerivative(double*& oFirstOrderDerivatives) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstOrderDerivative(oFirstOrderDerivatives)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::GetSecondOrderDerivative(double*& oSecondOrderDerivatives) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondOrderDerivative(oSecondOrderDerivatives)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::SetFirstOrderDerivative(double* iFirstOrderDerivatives) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstOrderDerivative(iFirstOrderDerivatives)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::SetSecondOrderDerivative(double* iSecondOrderDerivatives) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondOrderDerivative(iSecondOrderDerivatives)); \
} \
HRESULT  TIECATIOptValuesAndDerivativesAccess##classe::GetNthOrderDerivative(double*& oNthOrderDerivatives, int iOrder) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNthOrderDerivative(oNthOrderDerivatives,iOrder)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::GetParameters( CATListValCATBaseUnknown_var *&  oParamList) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameters(oParamList)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::SetParametersDelta(const CATListOfDouble& iDeltas)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParametersDelta(iDeltas)); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::GetParametersDelta( CATListOfDouble& oDeltas) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParametersDelta(oDeltas)); \
} \
int  TIECATIOptValuesAndDerivativesAccess##classe::GetNumberOfValues( ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfValues()); \
} \
HRESULT   TIECATIOptValuesAndDerivativesAccess##classe::GetNumberOfParameters( int& oNumberOfParameters) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfParameters(oNumberOfParameters)); \
} \
void  TIECATIOptValuesAndDerivativesAccess##classe::GetMagnitude(CATUnicodeString& oNameOfTheMagnitude ) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMagnitude(oNameOfTheMagnitude ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
declare_TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOptValuesAndDerivativesAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOptValuesAndDerivativesAccess,"CATIOptValuesAndDerivativesAccess",CATIOptValuesAndDerivativesAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIOptValuesAndDerivativesAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOptValuesAndDerivativesAccess##classe(classe::MetaObject(),CATIOptValuesAndDerivativesAccess::MetaObject(),(void *)CreateTIECATIOptValuesAndDerivativesAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
declare_TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOptValuesAndDerivativesAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOptValuesAndDerivativesAccess,"CATIOptValuesAndDerivativesAccess",CATIOptValuesAndDerivativesAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOptValuesAndDerivativesAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIOptValuesAndDerivativesAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOptValuesAndDerivativesAccess##classe(classe::MetaObject(),CATIOptValuesAndDerivativesAccess::MetaObject(),(void *)CreateTIECATIOptValuesAndDerivativesAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIOptValuesAndDerivativesAccess(classe) TIE_CATIOptValuesAndDerivativesAccess(classe)
#else
#define BOA_CATIOptValuesAndDerivativesAccess(classe) CATImplementBOA(CATIOptValuesAndDerivativesAccess, classe)
#endif

#endif
