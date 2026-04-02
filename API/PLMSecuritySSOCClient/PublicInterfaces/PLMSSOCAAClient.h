// COPYRIGHT DASSAULT SYSTEMES 2006
/** @CAA2Required */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/

#ifdef  _WINDOWS_SOURCE
	#ifdef  __PLMSSOCAAClient
		#define ExportedByPLMSSOCAAClient    __declspec(dllexport)
	#else
		#define ExportedByPLMSSOCAAClient    __declspec(dllimport)
	#endif
#else
	#define ExportedByPLMSSOCAAClient
#endif
