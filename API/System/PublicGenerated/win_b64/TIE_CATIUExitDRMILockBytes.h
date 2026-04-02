#ifndef __TIE_CATIUExitDRMILockBytes
#define __TIE_CATIUExitDRMILockBytes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitDRMILockBytes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitDRMILockBytes */
#define declare_TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
class TIECATIUExitDRMILockBytes##classe : public CATIUExitDRMILockBytes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitDRMILockBytes, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  OpenOnILockBytes( CATILockBytes * iILB); \
      virtual HRESULT Close(); \
      virtual  HRESULT __stdcall ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead) ; \
      virtual  HRESULT __stdcall WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten) ; \
      virtual HRESULT __stdcall Flush( void) ; \
      virtual HRESULT __stdcall SetSize( ULARGE_INTEGER iLength) ; \
      virtual HRESULT __stdcall LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType) ; \
      virtual HRESULT __stdcall UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType) ; \
      virtual HRESULT __stdcall Stat( STATSTG  *oStat, DWORD iStatFlag) ; \
};



#define ENVTIEdeclare_CATIUExitDRMILockBytes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  OpenOnILockBytes( CATILockBytes * iILB); \
virtual HRESULT Close(); \
virtual  HRESULT __stdcall ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead) ; \
virtual  HRESULT __stdcall WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten) ; \
virtual HRESULT __stdcall Flush( void) ; \
virtual HRESULT __stdcall SetSize( ULARGE_INTEGER iLength) ; \
virtual HRESULT __stdcall LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType) ; \
virtual HRESULT __stdcall UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType) ; \
virtual HRESULT __stdcall Stat( STATSTG  *oStat, DWORD iStatFlag) ; \


#define ENVTIEdefine_CATIUExitDRMILockBytes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::OpenOnILockBytes( CATILockBytes * iILB) \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)OpenOnILockBytes(iILB)); \
} \
HRESULT  ENVTIEName::Close() \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT __stdcall  ENVTIEName::ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)ReadAt(iOffset,iBuff,iLengthToRead,oLengthRead)); \
} \
HRESULT __stdcall  ENVTIEName::WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)WriteAt(iOffset,iDataSource,iLengthToWrite,LengthWritten)); \
} \
HRESULT __stdcall  ENVTIEName::Flush( void)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)Flush()); \
} \
HRESULT __stdcall  ENVTIEName::SetSize( ULARGE_INTEGER iLength)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)SetSize(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)LockRegion(iOffset,iLegnth,dwLockType)); \
} \
HRESULT __stdcall  ENVTIEName::UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)UnlockRegion(iOffset,iLength,dwLockType)); \
} \
HRESULT __stdcall  ENVTIEName::Stat( STATSTG  *oStat, DWORD iStatFlag)  \
{ \
return (ENVTIECALL(CATIUExitDRMILockBytes,ENVTIETypeLetter,ENVTIELetter)Stat(oStat,iStatFlag)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitDRMILockBytes(classe)    TIECATIUExitDRMILockBytes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitDRMILockBytes, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitDRMILockBytes, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitDRMILockBytes, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitDRMILockBytes, classe) \
 \
HRESULT   TIECATIUExitDRMILockBytes##classe::OpenOnILockBytes( CATILockBytes * iILB) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenOnILockBytes(iILB)); \
} \
HRESULT  TIECATIUExitDRMILockBytes##classe::Close() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close()); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadAt(iOffset,iBuff,iLengthToRead,oLengthRead)); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WriteAt(iOffset,iDataSource,iLengthToWrite,LengthWritten)); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::Flush( void)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Flush()); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::SetSize( ULARGE_INTEGER iLength)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSize(iLength)); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockRegion(iOffset,iLegnth,dwLockType)); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnlockRegion(iOffset,iLength,dwLockType)); \
} \
HRESULT __stdcall  TIECATIUExitDRMILockBytes##classe::Stat( STATSTG  *oStat, DWORD iStatFlag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Stat(oStat,iStatFlag)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
declare_TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMILockBytes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMILockBytes,"CATIUExitDRMILockBytes",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitDRMILockBytes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMILockBytes##classe(classe::MetaObject(),TIECATIUExitDRMILockBytes##classe::MetaObject(),(void *)CreateTIECATIUExitDRMILockBytes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitDRMILockBytes(classe) \
 \
 \
declare_TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMILockBytes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMILockBytes,"CATIUExitDRMILockBytes",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMILockBytes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitDRMILockBytes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMILockBytes##classe(classe::MetaObject(),TIECATIUExitDRMILockBytes##classe::MetaObject(),(void *)CreateTIECATIUExitDRMILockBytes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitDRMILockBytes(classe) TIE_CATIUExitDRMILockBytes(classe)
#else
#define BOA_CATIUExitDRMILockBytes(classe) CATImplementBOA(CATIUExitDRMILockBytes, classe)
#endif

#endif
