// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATICciSkinSwapping.h
// Define the CATICciSkinSwapping interface
//
//===================================================================
//
// Usage notes:
//   Interface to manage Skin Swapping feature.
//
//===================================================================
//  Inheritance : CATICciSkinSwapping (CAACompositesItf FW)
//                 CATICciBaseContour (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//===================================================================
#ifndef CATICciSkinSwapping_H
#define CATICciSkinSwapping_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICciBaseContour.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciSkinSwapping;
#else
extern "C" const IID IID_CATICciSkinSwapping ;
#endif

class CATISpecObject_var;
class CATIMmiMechanicalFeature_var;

/**
 * Interface to Skin Swapping.
 * <b>Role</b>: Allows to manage a Composites Skin Swapping feature.
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciSkinSwapping: public CATICciBaseContour
{
   CATDeclareInterface;

public:

   enum CATCciSwapMode { Projection=1, Elevation, Unfold};

   /**
   * Gets the original swapped surface.
   * @param oSurface
   *   The original swapped surface.
   */
   virtual HRESULT GetOriginalSurface (CATIMmiMechanicalFeature_var & oSurface) = 0;
   /**
   *Set Surface for SkinSwapping.
   * @param iDestinationSurface
   *    The Surface to which swapping is done.
   */
   virtual HRESULT SetDestinationSurface(const CATIMmiMechanicalFeature_var iDestinationSurface) = 0;
   /**
   *Get Surface for SkinSwapping.
   * @param oDestinationSurface
   *    The Surface of the swapping.
   */
   virtual HRESULT GetDestinationSurface(CATIMmiMechanicalFeature_var& oDestinationSurface) = 0;
   /**
   *Set the type of Swapping.
   * @param iType
   *    The mode : one among Projection,Elevation,Unfold.
   */
   virtual HRESULT SetSwapMode(const CATCciSwapMode iType) = 0;
   /**
   *Get the type of Swapping.
   * @param oType
   *    The mode : one among Projection,Elevation,Unfold.
   */
   virtual HRESULT GetSwapMode(CATCciSwapMode &oType) = 0;

   /**
	* @deprecated V5R26 
	* Use @see #GetOriginalSurface(CATIMmiMechanicalFeature_var&) method instead.
	* Gets the original swapped surface.
	* @param oSurface
	*   The original swapped surface.
	*/
	virtual HRESULT GetOriginalSurface (CATISpecObject_var & oSurface) = 0;
	
	/**
	* @deprecated V5R26 
	* Use @see #SetDestinationSurface(CATIMmiMechanicalFeature_var) method instead.
	*Set Surface for SkinSwapping.
	* @param iDestinationSurface
	*    The Surface to which swapping is done.
	*/
	virtual HRESULT SetDestinationSurface(const CATISpecObject_var iDestinationSurface) = 0;
	
	/**
	* @deprecated V5R26 
	* Use @see #GetDestinationSurface(CATIMmiMechanicalFeature_var&) method instead.
	*Get Surface for SkinSwapping.
	* @param oDestinationSurface
	*    The Surface of the swapping.
	*/
	virtual HRESULT GetDestinationSurface(CATISpecObject_var& oDestinationSurface) = 0;
   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------
};

CATDeclareHandler(CATICciSkinSwapping, CATICciBaseContour);
//------------------------------------------------------------------

#endif
