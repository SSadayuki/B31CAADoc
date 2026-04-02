#ifndef __TIE_CATIUExitCryptedILockBytes
#define __TIE_CATIUExitCryptedILockBytes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitCryptedILockBytes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitCryptedILockBytes */
#define declare_TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
class TIECATIUExitCryptedILockBytes##classe : public CATIUExitCryptedILockBytes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitCryptedILockBytes, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  Open( const CATUnicodeString *iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag= CATSys_Close); \
      virtual HRESULT  OpenW( const CATUC2Bytes * iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag= CATSys_Close); \
      virtual HRESULT Close() ; \
      virtual  HRESULT Read(   void  *iBuff, ULONG iLengthToRead, ULONG *oLengthRead) ; \
      virtual  HRESULT Write( const void *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten) ; \
      virtual HRESULT ReadLine ( char * ioLine,  ULONG iNb, int &oEof); \
      virtual HRESULT WriteLine ( const char * iBuff); \
      virtual HRESULT ReadLineW ( CATUnicodeString * ioLine,  ULONG iNb, int &oEof); \
      virtual HRESULT ReadLineWchar ( CATUC2Bytes * ioLine,  ULONG iNb, int &oEof); \
      virtual HRESULT WriteLineW ( const CATUnicodeString * iBuff); \
      virtual HRESULT WriteLineWchar ( const  CATUC2Bytes* iBuff); \
      virtual  HRESULT __stdcall ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead) ; \
      virtual  HRESULT __stdcall WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten) ; \
      virtual HRESULT __stdcall Flush( void) ; \
      virtual HRESULT __stdcall SetSize( ULARGE_INTEGER iLength) ; \
      virtual HRESULT __stdcall LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType) ; \
      virtual HRESULT __stdcall UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType) ; \
      virtual HRESULT __stdcall Stat( STATSTG  *oStat, DWORD iStatFlag) ; \
};



#define ENVTIEdeclare_CATIUExitCryptedILockBytes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  Open( const CATUnicodeString *iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag= CATSys_Close); \
virtual HRESULT  OpenW( const CATUC2Bytes * iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag= CATSys_Close); \
virtual HRESULT Close() ; \
virtual  HRESULT Read(   void  *iBuff, ULONG iLengthToRead, ULONG *oLengthRead) ; \
virtual  HRESULT Write( const void *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten) ; \
virtual HRESULT ReadLine ( char * ioLine,  ULONG iNb, int &oEof); \
virtual HRESULT WriteLine ( const char * iBuff); \
virtual HRESULT ReadLineW ( CATUnicodeString * ioLine,  ULONG iNb, int &oEof); \
virtual HRESULT ReadLineWchar ( CATUC2Bytes * ioLine,  ULONG iNb, int &oEof); \
virtual HRESULT WriteLineW ( const CATUnicodeString * iBuff); \
virtual HRESULT WriteLineWchar ( const  CATUC2Bytes* iBuff); \
virtual  HRESULT __stdcall ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead) ; \
virtual  HRESULT __stdcall WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten) ; \
virtual HRESULT __stdcall Flush( void) ; \
virtual HRESULT __stdcall SetSize( ULARGE_INTEGER iLength) ; \
virtual HRESULT __stdcall LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType) ; \
virtual HRESULT __stdcall UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType) ; \
virtual HRESULT __stdcall Stat( STATSTG  *oStat, DWORD iStatFlag) ; \


#define ENVTIEdefine_CATIUExitCryptedILockBytes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::Open( const CATUnicodeString *iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)Open(iPath,iMode,iOpenMode,iSharingMode,iOpenFlag,iCloseFlag)); \
} \
HRESULT   ENVTIEName::OpenW( const CATUC2Bytes * iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)OpenW(iPath,iMode,iOpenMode,iSharingMode,iOpenFlag,iCloseFlag)); \
} \
HRESULT  ENVTIEName::Close()  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT  ENVTIEName::Read(   void  *iBuff, ULONG iLengthToRead, ULONG *oLengthRead)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)Read(iBuff,iLengthToRead,oLengthRead)); \
} \
HRESULT  ENVTIEName::Write( const void *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)Write(iDataSource,iLengthToWrite,LengthWritten)); \
} \
HRESULT  ENVTIEName::ReadLine ( char * ioLine,  ULONG iNb, int &oEof) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)ReadLine (ioLine,iNb,oEof)); \
} \
HRESULT  ENVTIEName::WriteLine ( const char * iBuff) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)WriteLine (iBuff)); \
} \
HRESULT  ENVTIEName::ReadLineW ( CATUnicodeString * ioLine,  ULONG iNb, int &oEof) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)ReadLineW (ioLine,iNb,oEof)); \
} \
HRESULT  ENVTIEName::ReadLineWchar ( CATUC2Bytes * ioLine,  ULONG iNb, int &oEof) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)ReadLineWchar (ioLine,iNb,oEof)); \
} \
HRESULT  ENVTIEName::WriteLineW ( const CATUnicodeString * iBuff) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)WriteLineW (iBuff)); \
} \
HRESULT  ENVTIEName::WriteLineWchar ( const  CATUC2Bytes* iBuff) \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)WriteLineWchar (iBuff)); \
} \
HRESULT __stdcall  ENVTIEName::ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)ReadAt(iOffset,iBuff,iLengthToRead,oLengthRead)); \
} \
HRESULT __stdcall  ENVTIEName::WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)WriteAt(iOffset,iDataSource,iLengthToWrite,LengthWritten)); \
} \
HRESULT __stdcall  ENVTIEName::Flush( void)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)Flush()); \
} \
HRESULT __stdcall  ENVTIEName::SetSize( ULARGE_INTEGER iLength)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)SetSize(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)LockRegion(iOffset,iLegnth,dwLockType)); \
} \
HRESULT __stdcall  ENVTIEName::UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)UnlockRegion(iOffset,iLength,dwLockType)); \
} \
HRESULT __stdcall  ENVTIEName::Stat( STATSTG  *oStat, DWORD iStatFlag)  \
{ \
return (ENVTIECALL(CATIUExitCryptedILockBytes,ENVTIETypeLetter,ENVTIELetter)Stat(oStat,iStatFlag)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitCryptedILockBytes(classe)    TIECATIUExitCryptedILockBytes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitCryptedILockBytes, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitCryptedILockBytes, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitCryptedILockBytes, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitCryptedILockBytes, classe) \
 \
HRESULT   TIECATIUExitCryptedILockBytes##classe::Open( const CATUnicodeString *iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Open(iPath,iMode,iOpenMode,iSharingMode,iOpenFlag,iCloseFlag)); \
} \
HRESULT   TIECATIUExitCryptedILockBytes##classe::OpenW( const CATUC2Bytes * iPath, DWORD iMode, CATSysOpenMode iOpenMode, CATSysSharing iSharingMode, CATSysCreateMode iOpenFlag, CATSysCloseMode iCloseFlag) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenW(iPath,iMode,iOpenMode,iSharingMode,iOpenFlag,iCloseFlag)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::Close()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close()); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::Read(   void  *iBuff, ULONG iLengthToRead, ULONG *oLengthRead)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Read(iBuff,iLengthToRead,oLengthRead)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::Write( const void *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Write(iDataSource,iLengthToWrite,LengthWritten)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::ReadLine ( char * ioLine,  ULONG iNb, int &oEof) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadLine (ioLine,iNb,oEof)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::WriteLine ( const char * iBuff) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WriteLine (iBuff)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::ReadLineW ( CATUnicodeString * ioLine,  ULONG iNb, int &oEof) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadLineW (ioLine,iNb,oEof)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::ReadLineWchar ( CATUC2Bytes * ioLine,  ULONG iNb, int &oEof) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadLineWchar (ioLine,iNb,oEof)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::WriteLineW ( const CATUnicodeString * iBuff) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WriteLineW (iBuff)); \
} \
HRESULT  TIECATIUExitCryptedILockBytes##classe::WriteLineWchar ( const  CATUC2Bytes* iBuff) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WriteLineWchar (iBuff)); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::ReadAt( ULARGE_INTEGER iOffset, void  *iBuff, ULONG iLengthToRead, ULONG  *oLengthRead)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadAt(iOffset,iBuff,iLengthToRead,oLengthRead)); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::WriteAt( ULARGE_INTEGER iOffset, const void  *iDataSource, ULONG iLengthToWrite, ULONG  *LengthWritten)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WriteAt(iOffset,iDataSource,iLengthToWrite,LengthWritten)); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::Flush( void)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Flush()); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::SetSize( ULARGE_INTEGER iLength)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSize(iLength)); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::LockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLegnth, DWORD dwLockType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockRegion(iOffset,iLegnth,dwLockType)); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::UnlockRegion( ULARGE_INTEGER iOffset, ULARGE_INTEGER iLength, DWORD dwLockType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnlockRegion(iOffset,iLength,dwLockType)); \
} \
HRESULT __stdcall  TIECATIUExitCryptedILockBytes##classe::Stat( STATSTG  *oStat, DWORD iStatFlag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Stat(oStat,iStatFlag)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
declare_TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitCryptedILockBytes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitCryptedILockBytes,"CATIUExitCryptedILockBytes",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitCryptedILockBytes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitCryptedILockBytes##classe(classe::MetaObject(),TIECATIUExitCryptedILockBytes##classe::MetaObject(),(void *)CreateTIECATIUExitCryptedILockBytes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitCryptedILockBytes(classe) \
 \
 \
declare_TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitCryptedILockBytes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitCryptedILockBytes,"CATIUExitCryptedILockBytes",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitCryptedILockBytes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitCryptedILockBytes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitCryptedILockBytes##classe(classe::MetaObject(),TIECATIUExitCryptedILockBytes##classe::MetaObject(),(void *)CreateTIECATIUExitCryptedILockBytes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitCryptedILockBytes(classe) TIE_CATIUExitCryptedILockBytes(classe)
#else
#define BOA_CATIUExitCryptedILockBytes(classe) CATImplementBOA(CATIUExitCryptedILockBytes, classe)
#endif

#endif
