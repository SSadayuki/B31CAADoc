// COPYRIGHT Dassault Systemes 2000
//===================================================================
//
// CATISamSupportFilter.h
// Define the CATISamSupportFilter interface
//
//===================================================================
//
// Usage notes:
//  This interface allows to overload the behavior of the support
//	filter in the Analysis Data creation command.
//	To achive this aim, this interface will have to be implemented 
//	for the late type of the created analysis data. 
//
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U4   CATEAnalysisSupportFilter
  */
//===================================================================
#ifndef CATISamSupportFilter_H
#define CATISamSupportFilter_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATString.h"

class CATPathElement;
class CATILinkableObject;
class CATISpecObject;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamSupportFilter ;
#else
extern "C" const IID IID_CATISamSupportFilter ;
#endif

//------------------------------------------------------------------

/**
 * This interface allows to overload the behavior of the support
 * filter in the Analysis Data creation command.
 * To achive this aim, this interface will have to be implemented 
 * for the late type of the created analysis data.
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATAnalysisInterface CATISamSupportFilter: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * This method checks if the given PathElement contains
   * an object that could be used as support for the implementing Analysis 
   * Data.
   * <br><b>WARNING</b> The treatment of this method has to be fast, because
   * it will be used for pre hilighting.
   * @param iPath 
   *   PathElement which is scanned to find consistent support entity.
   * @return
   *   TRUE if an autorized datum has been found in the given Path.
   */
	  
	  virtual CATBoolean GetStatus (CATPathElement* iPath) = 0;

  /**
   * This method returns consistent data for the support 
   * definition of the implementing Analysis Data.
   * @param iPath 
   *   PathElement which is scanned to find consistent support entity.
   * @param oLinkable  [out , CATBaseUnknown#Release]
   *   if not NULL, datum that will be used to define a support.
   *   @see CATISamAnalysisSupport	
   * @param oSpecObject  [out , CATBaseUnknown#Release]
   *   entity that will be used to define a support.
   *   @see CATISamAnalysisSupport	
   * @return
   *   S_FALSE, if the given Path contains no onsistent data.
   *   else S_OK.
   */
	  
	  virtual HRESULT GetSelectableObject (CATPathElement*	    iPath,
										                     CATBaseUnknown*& oLinkable,
                                         CATBaseUnknown*&	oSpecObject) = 0;


  /**
   * This method allows specific Check for IDL validation. 
   * @param iLinkable       The pointed Object of the connector
   * @param iSpecObject     The positionning Object of the connector
   *  @see CATISamAnalysisSupport	
   * @return
   * <br><b>Legal values</b>:
   * <ul> <li> E_FAIL, Invalid Support.</li>
   *      <li> S_OK, Valid Support.</li></ul>
   */ 
	  virtual HRESULT ValidateSupport (const CATBaseUnknown* iLinkable,
                                     const CATBaseUnknown*	iSpecObject) = 0 ;


  /**
   * This method allows to define the NLS name that will appear in the support frame. 
   * @param iLinkable    The selected support
   * @param oNLSid       The NLS ID for the selected object.
	 *										 The ID for the plural form should be oNLSid_s
   * @return
   * <br><b>Legal values</b>:
   * <ul> <li> E_FAIL, No proposal for the selected element.</li>
   *      <li> S_OK,   One proposal returned.</li></ul>
   */ 
	  virtual HRESULT GetNLSid (const CATBaseUnknown* iLinkable,
                              CATString	&oNLSid) = 0 ;


};

//------------------------------------------------------------------

CATDeclareHandler( CATISamSupportFilter, CATBaseUnknown );


#endif
