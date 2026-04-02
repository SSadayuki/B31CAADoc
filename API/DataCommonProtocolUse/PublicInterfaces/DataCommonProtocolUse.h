
#ifndef __DataCommonProtocolUse_h__
#define __DataCommonProtocolUse_h__

// COPYRIGHT DASSAULT SYSTEMES 2009  

/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifdef  _WINDOWS_SOURCE
#ifdef  __DataCommonProtocolUse
#define ExportedByDataCommonProtocolUse __declspec(dllexport)
#else
#define ExportedByDataCommonProtocolUse __declspec(dllimport)
#endif
#else
#define ExportedByDataCommonProtocolUse
#endif


#endif // __DataCommonProtocolUse_h__
