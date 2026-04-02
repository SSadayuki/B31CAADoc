#ifndef CNext_H
#define CNext_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATInteractiveApplication.h"

#include "CD0APPLI.h"
#include "CATApplicationFrame.h"
#include "CATCommandHeader.h"
#include <CATListOfCATString.h>
#include <CATListOfCATUnicodeString.h>
#include "CATBoolean.h"
#include "CATEventSubscriberTypedefs.h"

class CATLicenseManagerInit;
class CATNotification;
class CATCommand;

/**
* Class to define a new product line.
*/
class ExportedByCD0APPLI CNext : public CATInteractiveApplication
{
  CATDeclareClass;
  
public:
  /** 
   * Constructs a new product line.
   * @param iApplicationName
   * Name of the new product line
   */
  CNext(CATString iApplicationName = "CATIA");

  virtual ~CNext();
  
#ifdef _WINDOWS_SOURCE
//  suffixe "2" : pour eviter "surcharge" des methodes de CATBaseUnknown 
  /** @nodoc */
  STDMETHODIMP_(ULONG) AddRef2();
  /** @nodoc */
  STDMETHODIMP_(ULONG) Release2();
#endif
  /** @nodoc */
  void BeginApplication();
    /** @nodoc */
  int  EndApplication();
    /** @nodoc */
  void SetVisibility(int);
    /** @nodoc */
  int  GetVisibility();
    /** @nodoc */
  void StartCommand(CATCommandHeader * command,
		    const CATUnicodeString & documents);

    /** @nodoc */
  CATString GetApplicationName ();  

//DBI-->
#ifdef  _WINDOWS_SOURCE
    /** @nodoc */
  CATBoolean	IsOleServer () const;
#endif//_WINDOWS_SOURCE
//<--DBI

  /* Begin JDU */
#ifdef _WINDOWS_SOURCE
	/** @nodoc
	 * Override CATApplication default implementation of this method
	 * to provide a root application object and make the application VBA compatible.
	 */
	virtual HRESULT GetVBAApplicationObject(
			IDispatch*& oAppObject,
			CATUnicodeString& oAppName,
			CATUnicodeString& oTypelibName);
#endif // _WINDOWS_SOURCE

	/** @nodoc
	 * Position the return code which will be returned by EndApplication.
	 * This is useful when CNext -batch -macro is launched and the
	 * launched macro fails.
	 */
	void setReturnCode(int iReturnCode);
/* End JDU */

private:
  
	/** @nodoc
	 * These OnIdle callbacks are related to -workbench and -e options
	 * OnIdleAutoSaveCB runs the AutoSaveHeader (warm-start) if requested
     *   (this must be done at first).
	 * OnIdleNewCB runs the FileNew or FileOpen if requested
     *   (this must be done just after auto save).
	 * OnIdleWsCB loads he workshop and workbench,
	 * OnIdleCB runs the commands.
	 */
  static void OnIdleAutoSaveCB(CATCommand * ToClient, int, CATCommand *);
  void OnIdleAutoSave();
  static void OnIdleNewCB     (CATCommand * ToClient, int, CATCommand *);
  void OnIdleNew     ();
  static void OnIdleWsCB      (CATCommand * ToClient, int, CATCommand *);
  void OnIdleWs      ();
  static void OnIdleCmdCB     (CATCommand * ToClient, int, CATCommand *);
  void OnIdleCmd     ();
  
  void OnErrorCB(CATCallbackEvent, void *, CATNotification *,
		 CATSubscriberData, CATCallback);
  void ErrorPanelCB(CATCommand *, CATNotification *, CATCommandClientData);
  
  CATNotifPropagationMode AnalyseNotification(CATCommand *, CATNotification *);
  int  IsOption(const char * arg, const char * option = NULL);
  void ReadArgs(const CATString & command,
		int & counter,
		int argc,
		CATListOfCATUnicodeString argv);

  void DisplayWb (CATString wbId);
  
  int _Visibility; // booleen (utile sur windows only)

//DBI-->
#ifdef  _WINDOWS_SOURCE
  // TRUE si CNext est lance avec l'option /embedding
  CATBoolean   _OleServer;
#endif//_WINDOWS_SOURCE
//<--DBI

  CATApplicationFrame * _pFrame;
  CATListOfCATString        _commands;
  CATListOfCATUnicodeString _args;
  CATString _applicationName;
  CATListOfCATUnicodeString _workbenches;
  
  CATLicenseManagerInit * _lminit;
/* Begin JDU */
  int _returnCode;
/* End JDU */

  CATString _wb, _ws;

  CATBoolean _batchMode;
  
#ifdef _WINDOWS_SOURCE
  int _Count;
  int _TimerOn;      // booleen
  void OnTimer();
  static void TimerCallBack();
#endif
};

#endif
