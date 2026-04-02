//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//==============================================================================
//
// CATICciBaseContour :
//   Interface to manage a Composites contour.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciBaseContour (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciBaseContour_H
#define CATICciBaseContour_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciBaseContour;
#else
extern "C" const IID IID_CATICciBaseContour ;
#endif

class CATISpecObject_var;
class CATIMmiMechanicalFeature_var;

/**
 * Interface to Composites contour.
 * <b>Role</b>: Allows you to access data of any Composites contour feature
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciBaseContour: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
	
     /**
     * Gets the shell on which the base contour is laid down.
     * @param oSupportShell
     *    The support shell feature.
     */
     virtual HRESULT GetSupportShell (CATIMmiMechanicalFeature_var & oSupportShell) = 0;
     
     /**
     * Sets the shell on which the base contour is laid down.
     * @param iSupportShell
     *    The input support surface.
     */
     virtual HRESULT SetSupportShell (const CATIMmiMechanicalFeature_var & iSupportShell) = 0;
	 
     //--------------------------------------------------------------------------------------------------
     //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
     //--------------------------------------------------------------------------------------------------
  
	 /**
	 * @deprecated V5R26 
	 * Use @see #GetSupportShell(CATIMmiMechanicalFeature_var&) method instead.
     * Gets the shell on which the base contour is laid down.
     * @param oSupportShell
     *    The support shell feature.
     */
     virtual HRESULT GetSupportShell (CATISpecObject_var & oSupportShell) = 0;
     
     /**
	 * @deprecated V5R26 
	 * Use @see #SetSupportShell(CATIMmiMechanicalFeature_var&) method instead.
     * Sets the shell on which the base contour is laid down.
     * @param iSupportShell
     *    The input support surface.
     */
     virtual HRESULT SetSupportShell (const CATISpecObject_var & iSupportShell) = 0;

     // No constructors or destructors on this pure virtual base class
     // --------------------------------------------------------------
};

CATDeclareHandler(CATICciBaseContour, CATBaseUnknown);
//------------------------------------------------------------------

#endif
