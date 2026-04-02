// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisSupportFilter.h Provide adaptor to interface CATISamSupportFilter
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisSupportFilter_H
#define CATEAnalysisSupportFilter_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisResources.h"
#include "CATISamSupportFilter.h"
#include "CATBoolean.h"
#include "CATString.h"

//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamSupportFilter interface.
 * It can be used for AnalysisEntity or AnalysisSet.
 * @see CATISamSupportFilter
 */

class ExportedByCATAnalysisResources CATEAnalysisSupportFilter: public CATISamSupportFilter
{

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     CATEAnalysisSupportFilter ();
     virtual ~CATEAnalysisSupportFilter ();

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
	  
	  virtual CATBoolean GetStatus (CATPathElement* iPath);

  /**
   * This method returns consistent data for the support 
   * definition of the implementing Analysis Data.
   * @param iPath 
   *   PathElement which is scanned to find consistent support entity.
   * @param oLinkable  [out , CATBaseUnknown#Release]
   *   Represents the object to link with.
   *   @see CATISamAnalysisSupport	
   * @param oSpecObject  [out , CATBaseUnknown#Release]
   *   Represents the product instance.
   *   @see CATISamAnalysisSupport	
   * @return
   *   E_NOTIMPL for this implementation
   */
	  
	  virtual HRESULT GetSelectableObject (CATPathElement*	iPath,
										                     CATBaseUnknown*& oLinkable,
                                         CATBaseUnknown*&	oSpecObject) ;


  /**
   * This method allows specific Check for IDL validation. (Will be introducted in R14)
   * @param iLinkable       The pointed Object of the connector
   * @param iSpecObject     The positionning Object of the connector
   *  @see CATISamAnalysisSupport	
   */ 
	  virtual HRESULT ValidateSupport (const CATBaseUnknown* iLinkable,
                                     const CATBaseUnknown*	iSpecObject) ;

  /**
   * This method allows to define the NLS name that will appear in the support frame. 
   * @param iLinkable    The selected support
   * @param oNLSid       The NLS ID for the selected object.
	 *										 The ID for the plural form should be oNLSid_s
   */ 
		virtual HRESULT GetNLSid (const CATBaseUnknown* iLinkable, CATString	&oNLSid);

  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEAnalysisSupportFilter (CATEAnalysisSupportFilter &);
  CATEAnalysisSupportFilter& operator=(CATEAnalysisSupportFilter&);

};

//-----------------------------------------------------------------------

#endif
