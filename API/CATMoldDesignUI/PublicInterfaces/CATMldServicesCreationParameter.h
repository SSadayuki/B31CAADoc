// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATMldServicesCreationParameter :						   
// Implementation of different services of CATMldServicesCreationParameter
//
//=============================================================================
//
#ifndef CATMldServicesCreationParameter_h
#define CATMldServicesCreationParameter_h

#include "CATMldServicesUI.h"

#include "CATUnicodeString.h"

/**
 * Base class to manage the creation parameter of the component
 * <b>Role</b>: This service is used to change the creation parameter
 * of the component.
 */

class ExportedByCATMldServicesUI CATMldServicesCreationParameter
{
	public:

// ===========================================================================
   /**
	* SetCutNocutInSectionView : Set the default value for the creation parameter
	*							cut/notcut insection view
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*		cut/notcut insection view yes / no
	*/
// ===========================================================================

static void SetCutNocutInSectionView(const CATUnicodeString iType,const CATBoolean iFlag);

// ===========================================================================
   /**
	* GetCutNocutInSectionView : Get the default value for the creation parameter
	*							cut/notcut insection view
	*   @param iType
	*		the component type (feature string)
	*	@param oFlag 
	*		the result cut/notcut insection view yes / no
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetCutNocutInSectionView(const CATUnicodeString iType, CATBoolean &oFlag);


// ===========================================================================
   /**
	* SetSelectionFilter : Set the default value for the creation parameter
	*							several instance by reference
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*		several instance by reference yes / no
	*/
// ===========================================================================

static void SetSelectionFilter(const CATUnicodeString iType,const CATBoolean iFlag);

// ===========================================================================
   /**
	* GetSelectionFilter : Get the default value for the creation parameter
	*							selection filter
	*   @param iType
	*		the component type (feature string)
	*	@param oFlag 
	*		the result selection filter yes / no
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetSelectionFilter(const CATUnicodeString iType, CATBoolean &oFlag);


// ===========================================================================
   /**
	* SetSeveralInstancebyRef : Set the default value for the creation parameter
	*							selection filter
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*		selection filter yes / no
	*/
// ===========================================================================

static void SetSeveralInstancebyRef(const CATUnicodeString iType,const CATBoolean iFlag);

// ===========================================================================
   /**
	* GetSeveralInstancebyRef : Get the default value for the creation parameter
	*							several instance by reference
	*   @param iType
	*		the component type (feature string)
	*	@param oFlag 
	*		the result several instance by reference yes / no
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetSeveralInstancebyRef(const CATUnicodeString iType, CATBoolean &oFlag);


// ===========================================================================
   /**
	* SetPlateName : Set the default value for the creation parameter
	*							plate name 
	*   @param iType 
	*		the component type (feature string)
	*	@param iPlateType
	*		the plate name (feature string)
	*/
// ===========================================================================

static void SetPlateName(const CATUnicodeString iType,const CATUnicodeString& iPlateType);

// ===========================================================================
   /**
	* GetPlateName : Get the default value for the creation parameter
	*							several instance by reference
	*   @param iType
	*		the component type (feature string)
	*	@param oPlateType 
	*		the plate name (feature string)
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetPlateName(const CATUnicodeString iType, CATUnicodeString& oPlateType);

// ===========================================================================
   /**
	* SetPlatePosition : Set the default value for the creation parameter
	*							plate position 
	*   @param iType 
	*		the component type (feature string)
	*	@param iPlatePosition
	*		the plate position flag 
	*		<dl>
	*			<dt>TRUE</dt>
	*			<dd>position Bottom </dd>
	*			<dt>FALSE </dt>
	*			<dd>position Top </dd>
	*		</dl>	  
	*/
// ===========================================================================

static void SetPlatePosition(const CATUnicodeString iType,const CATBoolean iPlatePosition);

// ===========================================================================
   /**
	* GetPlatePosition : Get the default value for the creation parameter
	*							plate position 
	*   @param iType
	*		the component type (feature string)
	*	@param oPlatePosition
	*		the plate position flag 
	*		<dl>
	*			<dt>TRUE</dt>
	*			<dd>position Bottom </dd>
	*			<dt>FALSE </dt>
	*			<dd>position Top </dd>
	*		</dl>	  
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetPlatePosition(const CATUnicodeString iType, CATBoolean& oPlatePosition);
// ===========================================================================
   /**
	* SetDirectRef : Set the default value for the creation parameter
	*							direct reference
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*		direct reference yes / no
	*/
// ===========================================================================

static void SetDirectRef(const CATUnicodeString iType,const CATBoolean iFlag);


// ===========================================================================
   /**
	* GetDirectRef : Get the default value for the creation parameter
	*							direct reference
	*   @param iType
	*		the component type (feature string)
	*	@param oFlag 
	*		the result direct reference yes / no
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetDirectRef(const CATUnicodeString iType, CATBoolean &oFlag);

/*
 *	Rule management
 */

// ===========================================================================
   /**
	* SetActivityRule : Set the activity of the rule 
	*							
	*   @param iType 
	*		the component type (feature string)
	*	@param iActivityRule
	*		the activity of the check button "Activate Rule".
	*/
// ===========================================================================

static void SetActivityRule(const CATUnicodeString iType,const CATBoolean iActivity);

// ===========================================================================
   /**
	* GetActivityRule : Get the activity of the rule 
	*
	*   @param iType
	*		the component type (feature string)
	*	@param oPlatePosition
	*		the activity of the check button "Activate Rule".
	*		<dl>
	*			<dt>TRUE</dt>
	*			<dd>activate </dd>
	*			<dt>FALSE </dt>
	*			<dd>deactivate </dd>
	*		</dl>	  
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetActivityRule(const CATUnicodeString iType, CATBoolean& iActivity);


// ===========================================================================
   /**
	* SetReferenceRule : Set the default reference rule name for the creation component
	*							
	*   @param iType 
	*		the component type (feature string)
	*	@param iPathRefRule
	*		the reference rule path 
	*	@param iReferenceRule
	*		the reference rule name 
	*/
// ===========================================================================

static void SetReferenceRule(const CATUnicodeString iType,const CATUnicodeString& iPathRefRule, const CATUnicodeString& iReferenceRule);

// ===========================================================================
   /**
	* GetReferenceRule : Get the default reference rule name for the creation component
	*							
	*   @param iType
	*		the component type (feature string)
	*	@param oPathRefRule
	*		the reference rule path 
	*	@param oReferenceRule
	*		the reference rule name 
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT GetReferenceRule(const CATUnicodeString iType, CATUnicodeString& oPathRefRule, CATUnicodeString& oReferenceRule);


	/*
	 *	WebBrowser management
	 */

	// ===========================================================================
   /**
	* SetActivityWebBrowser : Set the activity of the WebBrowser 
	*							
	*   @param iType 
	*		the component type (feature string)
	*	@param iActivityRWebBrowser
	*		the activity of the button "WebBrowser".
	*/
	// ===========================================================================
static void SetActivityWebBrowser(const CATUnicodeString &iType,const CATBoolean &iActivity);


	// ===========================================================================
   /**
	* GetActivityWebBrowser : Get the activity of the WebBrowser 
	*
	*   @param iType
	*		the component type (feature string)
	*	@param oPlatePosition
	*		the activity of the button "WebBrowser".
	*		<dl>
	*			<dt>TRUE</dt>
	*			<dd>activate </dd>
	*			<dt>FALSE </dt>
	*			<dd>deactivate </dd>
	*		</dl>	  
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
	// ===========================================================================
static HRESULT GetActivityWebBrowser(const CATUnicodeString &iType, CATBoolean& iActivity);


	// ===========================================================================
   /**
	* SetWebBrowserHomePage : Set the default WebBrowserHomePage for the creation component
	*							
	*   @param iType 
	*		the component type (feature string)
	*	@param iWebBrowserHomePage
	*		the WebBrowserHomePage
	*/
	// ===========================================================================
static void SetWebBrowserHomePage(const CATUnicodeString &iType,
									const CATUnicodeString& iWebBrowserHomePage);


	// ===========================================================================
   /**
	* GetWebBrowserHomePage : Get the default WebBrowserHomePage for the creation component
	*							
	*   @param iType
	*		the component type (feature string)
	*	@param oWebBrowserHomePage
	*		the WebBrowserHomePage
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>The parameter of the component type is found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>The parameter of the component type is not found </dd>
	*		</dl>	  
	*/
	// ===========================================================================
static HRESULT GetWebBrowserHomePage(const CATUnicodeString &iType,
										CATUnicodeString& oWebBrowserHomePage);

	private :

};

#endif












