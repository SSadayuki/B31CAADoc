// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

#ifndef CATMldWksOption_h
#define CATMldWksOption_h

#include "CATMoldInterfaces.h"

#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

/**
 * Base class to manage the workbench option  
 * <b>Role</b>: This service is used to activate several workbench option: 
 * <ul>
 * <li>the representation simplified holes without the holes creation </li>
 * <li>the representation simplified 2D </li>
 * <li>the direct mouse pick technical </li>
 * <li>the WebBrowser </li>
 * <li>the Creation dialog box behavior </li>
 * </ul>
 */

class ExportedByCATMoldInterfaces CATMldWksOption
{
	public:

//////////////////////////////////////////////////////////////////////////////
//////////////// 		Creation dialog box behavior
//////////////////////////////////////////////////////////////////////////////

// ===========================================================================
   /**
	* Initialize the DrillFrom field in the Component creation dialog box. 
	* <br>Must be call at the creation of the workbench to be taking into account at 
	* the open of the Component creation dialog box.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>The "DrillFrom" fied is initialized with the position plane (default value)</dd>
	*     <dt>FALSE </dt>
	*     <dd>The "DrillFrom" fied is not initialized with the position plane </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void InitDrillFromFieldOnPlanePosition (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the DrillFrom field initialization mode in the Component creation dialog box
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>The "DrillFrom" fied is initialized with the position plane (default value)</dd>
	*     <dt>FALSE </dt>
	*     <dd>The "DrillFrom" fied is not initialized with the position plane </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsInitDrillFromFieldOnPlanePosition ();

// ===========================================================================
   /**
	* Initialize the DrillTo field in the Component creation dialog box. 
	* <br>Must be call at the creation of the workbench to be taking into account at 
	* the open of the Component creation dialog box.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>The "DrillTo" fied is initialized with the position plane</dd>
	*     <dt>FALSE </dt>
	*     <dd>The "DrillTo" fied is not initialized with the position plane (default value)</dd>
	*   </dl>	  
	*/
// ===========================================================================

static void InitDrillToFieldOnPlanePosition (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the DrillTo field initialization mode in the Component creation dialog box
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>The "DrillTo" fied is initialized with the position plane </dd>
	*     <dt>FALSE </dt>
	*     <dd>The "DrillTo" fied is not initialized with the position plane (default value)</dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsInitDrillToFieldOnPlanePosition ();

// ===========================================================================
   /**
	* Compute the between list automatically thanks the DrillTo and DrillFrom selection in the Component creation dialog box. 
	* <br>Must be call at the creation of the workbench to be taking into account at 
	* the open of the Component creation dialog box.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>The between list is compute automatically (default value)</dd>
	*     <dt>FALSE </dt>
	*     <dd>The between list is not compute automatically </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void ComputeBetweenListAutomatically (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the Between list computing mode in the Component creation dialog box
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>The between list is compute automatically (default value)</dd>
	*     <dt>FALSE </dt>
	*     <dd>The between list is not compute automatically </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsComputeBetweenListAutomatically ();

//////////////////////////////////////////////////////////////////////////////
//////////////// Representation
//////////////////////////////////////////////////////////////////////////////

// ===========================================================================
   /**
	* Activate the simplified representation mode for the Holes & Pad. 
	* <br>Must be call at the creation of the workbench to be taking into account for the creation 
	* of the setting panel.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>activate the representation simplified holes & pad without the holes creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>deactivate the representation simplified holes & pad (default state) </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void AllowRepresentation2DHolesPad (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the simplified representation mode for the Holes & Pad. 
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified holes & pad is activated </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation simplified holes & pad is not activated </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsAllowRepresentation2DHolesPad ();

// ===========================================================================
   /**
	* Activate the simplified representation mode for the Holes & Pad for all Tooling components
	* <br>Must be call at the creation of the workbench to be taking into account for the creation 
	* of the setting panel.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>activate the representation simplified holes & pad without the holes creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>deactivate the representation simplified holes & pad (default state) </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void AllowRepresentation2DHolesPadAllComponent (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the simplified representation mode for the Holes & Pad for all Tooling components 
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified holes & pad is activated for all Tooling components </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation simplified holes & pad is not activated for all Tooling components </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsAllowRepresentation2DHolesPadAllComponent ();

// ===========================================================================
   /**
	* Activate the simplified 2D representation mode.  
	* <br>Must be call at the creation of the workbench to be taking into account for the creation 
	* of the setting panel.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>activate the representation simplified 2D creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>deactivate the representation simplified 2D (default state) </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void AllowRepresentation2D (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the simplified 2D representation mode 
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified 2D is activated </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation simplified 2D is not activated </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsAllowRepresentation2D ();

//////////////////////////////////////////////////////////////////////////////
//////////////// DirectPointMousePick
//////////////////////////////////////////////////////////////////////////////

// ===========================================================================
   /**
	* Activate the mouse pick technical for the direct point location. 
	* <br>Must be call at the creation of the workbench to be taking into account.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>activate the mouse pick technical for the direct point location  </dd>
	*     <dt>FALSE </dt>
	*     <dd>deactivate the mouse pick technical for the direct point location (default state) </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void AllowDirectPointMousePick (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the the mouse pick technical for the direct point location 
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the mouse pick technical is activated </dd>
	*     <dt>FALSE </dt>
	*     <dd>the mouse pick technical is not activated </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsAllowDirectPointMousePick ();

//////////////////////////////////////////////////////////////////////////////
//////////////// WebBrowser
//////////////////////////////////////////////////////////////////////////////

// ===========================================================================
   /**
	* Activate the WebBrowser dialog in the Generic Create Component Dialog. 
	* <br>Must be call at the creation of the workbench to be taking into account.
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>activate the WebBrowser dialog in the Generic Create Component Dialog   </dd>
	*     <dt>FALSE </dt>
	*     <dd>deactivate the WebBrowser dialog in the Generic Create Component Dialog (default state) </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void AllowWebBrowser (const CATBoolean iFlag);

// ===========================================================================
   /**
	* Return the WebBrowser dialog visibility in the Generic Create Component Dialog 
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the WebBrowser dialog is activated </dd>
	*     <dt>FALSE </dt>
	*     <dd>the WebBrowser dialog is not activated </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsAllowWebBrowser ();

// ===========================================================================
   /**
	* Define the homePage fullpath for the WebBrowser dialog in the Generic Create Component Dialog.
	* <br>Must be call at the creation of the workbench to be taking into account.
	*	@param iHomePage 
	*/
// ===========================================================================

static void SetWebBrowserHomePage (const CATUnicodeString &iHomePage);

// ===========================================================================
   /**
	* Get the homePage fullpath for the WebBrowser dialog in the Generic Create Component Dialog.
	* <br>Must be call at the creation of the workbench to be taking into account.
	* @param oHomePage 
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the homePage fullpath WebBrowser dialog is defined </dd>
	*     <dt>FALSE </dt>
	*     <dd>the homePage fullpath WebBrowser dialog is not defined </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean GetWebBrowserHomePage (CATUnicodeString &oHomePage);

//////////////////////////////////////////////////////////////////////////////
//////////////// CurrentCatalogPath
//////////////////////////////////////////////////////////////////////////////

// ===========================================================================
   /**
	* SetCurrentCatalogPath : Set the current catalog storage path.
	*	Be careful the several path are separated by a delimiter ";" on WNT and ":"on Unix
	*   @param iCatalogPath
	*		the current catalog storage path
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The operation is Ok </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The operation is failed. </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT SetCurrentCatalogPath(CATUnicodeString & iCatalogPath);

// ===========================================================================
   /**
	* GetCurrentCatalogPath : Get the current catalog storage path.
	*	Be careful the several path are separated by a delimiter ";" on WNT and ":"on Unix
	*   @param oCatalogPath
	*		the current catalog storage path
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The operation is Ok </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The operation is failed. </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetCurrentCatalogPath(CATUnicodeString & oCatalogPath);


//////////////////////////////////////////////////////////////////////////////
//////////////// MoldBaseCatalogName
//////////////////////////////////////////////////////////////////////////////

// ===========================================================================
   /**
	* SetDefaultMoldBaseCatalogName : Set the default MoldBase Catalog Name.
	*   @param iMoldBaseCatalogName
	*		the default MoldBase Catalog Name.
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The operation is Ok </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The operation is failed. </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT SetDefaultMoldBaseCatalogName(CATUnicodeString iMoldBaseCatalogName);

// ===========================================================================
   /**
	* GetDefaultMoldBaseCatalogName : Set the default MoldBase Catalog Name.
	*   @param oMoldBaseCatalogName
	*		the default MoldBase Catalog Name.
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The operation is Ok </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The operation is failed. </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetDefaultMoldBaseCatalogName(CATUnicodeString& oMoldBaseCatalogName);


// Add In Mode Options

enum CATMldAddInOption {CATMldAddInOptionUnspecified,                 // 0
        CATMldAddInOptionTrue,      CATMldAddInOptionFalse     // 1 , 2
		 } ; 

// ===========================================================================
   /**
	* SetAddInMode: Activate the options in AddIn mode.
	* Must be call in the constructor of the AddIn
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The operation is Ok </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The operation is failed. </dd>
	*		</dl>
	*/
// ===========================================================================

static HRESULT SetAddInMode(const CATBoolean iFlag);

// ===========================================================================
   /**
	* IsAddInMode: Return if the options are active in AddIn mode or not
	* @return
    *   A boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the options are activated in AddIn mode</dd>
	*     <dt>FALSE </dt>
	*     <dd>the options are not activated in AddIn mode </dd>
	*   </dl>	  
	*/
// ===========================================================================

static CATBoolean IsAddInMode();

// ===========================================================================
   /**
	* AllowWebBrowserInAddIn: Activate the WebBrowser dialog in the Generic Create Component Dialog in AddIn
	* Must be called in the constructor of the AddIn after a call to SetAddInMode(TRUE)
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>CATMldWksOption::CATMldAddInOptionUnspecified</dt>
	*     <dd>the Workbench options will be taken into account   </dd>
	*     <dt>CATMldWksOption::CATMldAddInOptionTrue</dt>
	*     <dd>activate the WebBrowser dialog in the Generic Create Component Dialog in Add In mode   </dd>
	*     <dt>CATMldWksOption::CATMldAddInOptionFalse </dt>
	*     <dd>deactivate the WebBrowser dialog in the Generic Create Component Dialog in Add in mode(default state) </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void AllowWebBrowserInAddIn (const CATMldWksOption::CATMldAddInOption  iFlag);

// ===========================================================================
   /**
	* IsAllowWebBrowserInAddIn : Return the WebBrowser dialog visibility in the Generic Create Component Dialog in Add In mode
	* @return
    *   A CATMldWksOption::CATMldAddInOption
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>CATMldWksOption::CATMldAddInOptionUnspecified</dt>
	*     <dd>the Workbench options are taken into account   </dd>
	*     <dt>CATMldWksOption::CATMldAddInOptionTrue</dt>
	*     <dd>the WebBrowser dialog in the Generic Create Component Dialog in Add In mode  </dd>
	*     <dt>CATMldWksOption::CATMldAddInOptionFalse </dt>
	*     <dd>the WebBrowser dialog in the Generic Create Component Dialog in Add in mode is not activated  </dd>
	*   </dl>	    
	*/
// ===========================================================================

static CATMldWksOption::CATMldAddInOption IsAllowWebBrowserInAddIn ();

	private:

static CATBoolean _allowRepresentation2DHolesPadAllComponent;
static CATBoolean _allowRepresentation2DHolesPad;
static CATBoolean _allowRepresentation2D;
static CATBoolean _allowDirecPointMousePick;
static CATBoolean _allowWebBrowser;
static CATBoolean _initHomePageWebBrowser;
static CATUnicodeString _homePageWebBrowser;
static CATUnicodeString _moldBaseCatalogName;
static CATUnicodeString _currentCatalogPath;

// Creation dialog box behavior
static CATBoolean _initDrillFromFieldDialogBox;
static CATBoolean _initDrillToFieldDialogBox;
static CATBoolean _isComputeBetweenListAutomatically;

//Add In mode options
static CATBoolean _addInMode;
static CATMldWksOption::CATMldAddInOption _allowWebBrowserInAddIn;
 
};

#endif












