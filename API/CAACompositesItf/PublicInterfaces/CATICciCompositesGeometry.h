#ifndef CATICciCompositesGeometry_H
#define CATICciCompositesGeometry_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciCompositesGeometry :
//       Interface to manage composites geometry feature.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciCompositesGeometry (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATICciEdgeOfPart.h"
#include "CATICciSkinSwapping.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATICciLimitContour.h"

class CATICciLimitContour_var;
class CATICciContour_var;
class CATICciMaterialExcess_var;
class CATICciSkinSwapping_var;
class CATICciEdgeOfPart_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciCompositesGeometry;
#else
extern "C" const IID IID_CATICciCompositesGeometry;
#endif

/**
 * Interface of Composites geometry.
 * <b>Role</b>: Allows to access data of any Composites geometrical feature, agregated under
 * Zone, Ply or Cut Piece feature.
 * @see CATICciPly, CATICciZone, CATICciCutPiece
 */
class ExportedByCAACompositesItf CATICciCompositesGeometry : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
   /**
   * Gets the last feature of the composites geometry. This corresponds to the
   *   geometry of the composites entity (e.g. ply or cut-piece) aggregating this
   *   composites geometry feature.
   * <br> Note: the result is indentical to GetGeometry method of CATICciPly or CATCciCutPiece.
   * @param oResult
   *     The last feature of the composites geometry.
   */
   virtual HRESULT GetResult(CATIMmiMechanicalFeature_var& oResult) = 0;

   /**
   * Gets all the features of the current Composites Geometry.
   * @param oContourList
   *     The ordered (as agregated under the composites geometry) list of feature.
   *     Each element of the list reponds to interface CATICciBaseContour.
   */
   virtual HRESULT GetAllFeatures (CATLISTV(CATIMmiMechanicalFeature_var)& oFeaturesList) = 0;

   /**
   * Gets all the limit contour features of the current Composites Geometry.
   * @param oLimitContourList
   *     The ordered (as agregated under the composites geometry) list of limit contour feature.
   *     Each element of the list reponds to interface CATICciLimitContour.
   */
   virtual HRESULT GetAllLimitContours(CATLISTV(CATICciLimitContour_var)& oLimitContourList) = 0;
   
   /**
   * Adds an new contour feature at the end of the current composites geometry.
   * @param oContour
   *     The created contour feature
   * <p> Usage: after creating the contour curves and support surface MUST be set
   *            via CATICciContour interface
   * @see CATICciContour, CATICciBaseContour
   */
   virtual HRESULT AddContour(CATICciContour_var & oContour) = 0;

   /**
   * Adds a new limit contour feature at the end of the current composites geometry.
   * <br> WARNING: 	This methods cannot be used for geometry relative to any Zone or 
   *                 transition Zone feature.
   * @param oLimitContour
   *     The created limit contour feature
   * <p> Usage: after creating the limiting contour the relimiting curves, staggering values,
   *            staggering steps, etc, MUST be set via CATICciLimitContour interface
   * @see CATICciLimitContour, CATICciBaseContour
   */
   virtual HRESULT AddLimitContour(CATICciLimitContour_var & oLimitContour) = 0;
   /**
   *Add Material excess
   */
   virtual CATICciMaterialExcess_var AddMaterialExcess(CATICciEdgeOfPart_var iEEOP,CATICciEdgeOfPart_var iMEOP)= 0 ;
   /*
   *Add SkinSwapping
   */
   virtual CATICciSkinSwapping_var AddSkinSwapping(CATIMmiMechanicalFeature_var iDestinationSurface, const CATICciSkinSwapping::CATCciSwapMode iSwapType) = 0;
   
    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
   /**
   * @deprecated V5R26 
   * Use @see #GetResult overloaded method instead.
   * Gets the last feature of the composites geometry. This corresponds to the
   *   geometry of the composites entity (e.g. ply or cut-piece) aggregating this
   *   composites geometry feature.
   * <br> Note: the result is indentical to GetGeometry method of CATICciPly or CATCciCutPiece.
   * @param oResult
   *     The last feature of the composites geometry.
   */
   virtual HRESULT GetResult(CATISpecObject_var& oResult) = 0;

   /**
   * @deprecated V5R26 
   * Use @see #GetAllFeatures overloaded method instead.
   * Gets all the features of the current Composites Geometry.
   * @param oContourList
   *     The ordered (as agregated under the composites geometry) list of feature.
   *     Each element of the list reponds to interface CATICciBaseContour.
   */
   virtual HRESULT GetAllFeatures (CATLISTV(CATISpecObject_var)& oFeaturesList) = 0;

   /**
   * @deprecated V5R26 
   * Use @see #GetAllLimitContours overloaded method instead.
   * Gets all the limit contour features of the current Composites Geometry.
   * @param oLimitContourList
   *     The ordered (as agregated under the composites geometry) list of limit contour feature.
   *     Each element of the list reponds to interface CATICciLimitContour.
   */
   virtual HRESULT GetAllLimitContours(CATLISTV(CATISpecObject_var)& oLimitContourList) = 0;
   /*
   * @deprecated V5R26 
   * Use @see #AddSkinSwapping overloaded method instead.
   *Add SkinSwapping
   */
   virtual CATICciSkinSwapping_var AddSkinSwapping(CATISpecObject_var iDestinationSurface, const CATICciSkinSwapping::CATCciSwapMode iSwapType) = 0;

};

CATDeclareHandler(CATICciCompositesGeometry, CATBaseUnknown);

#endif
