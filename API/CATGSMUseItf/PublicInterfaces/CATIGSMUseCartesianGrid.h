// 
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//---------------------------------------------------------------------
// CATIGSMUseCartesianGrid.h
//---------------------------------------------------------------------
// 
//  Interface for manipulation of cartesian grid
//
//---------------------------------------------------------------------
#ifndef CATIGSMUseCartesianGrid_H
#define CATIGSMUseCartesianGrid_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATGSMOrientation.h"
#include "CATGSMCartesianGridDef.h"
class CATICkeParm_var;
class CATMathPoint;
class CATMathDirection;
class CATIGSMUseDirection_var;
class CATIMmiMechanicalFeature_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseCartesianGrid ;
#else
extern "C" const IID IID_CATIGSMUseCartesianGrid ;
#endif


//---------------------------------------------------------------------
// Interface
//---------------------------------------------------------------------

/**
 * Cartesian grid feature : allows to manipulate the data of cartesian grid. 
 * <b>Role</b>: Allows to associate a cartesian grid to a working support 
 * <br> Note: Cartesian Grid is associated necessary to a planar working support 
 * @see  CATIGSMUseWorkingSupportFactory##CreateWorkingSupport
 * @see  CATIGrid 
 */

class ExportedByCATGSMUseItf CATIGSMUseCartesianGrid: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

   /** 
    * Gets the grid origin and axis. 
    * @param oOrigin
    *		the grid origin
    *	@param oFirstDir
    *		the grid first direction (H)
    *	@param oSecondDir
    *		the grid second direction (V)
    */
   virtual HRESULT GetAxis(CATMathPoint& oOrigin, 
			   CATMathDirection& oFirstDir,
			   CATMathDirection& oSecondDir) = 0;
   /** 
    * Sets the grid origin.
    * @param iOrigin
    *		the grid origin
    */
   virtual HRESULT SetOrigin(const CATMathPoint& iOrigin) = 0;

   /** 
    * Resets the grid origin. 
    * <br> Origin becomes the defaut: i.e origin of the support 
    */
   virtual HRESULT ResetOrigin() = 0;

   /**
    * Gets the first direction on the plane (H).
    * @param oDir
    *      first direction
    *      @see CATIGSMUseDirection 
    */
   virtual HRESULT GetFirstDirection(CATIGSMUseDirection_var & oDir) = 0;
   
   /**
    * Sets the first direction on the plane (H).
    * @param iDir
    *      first direction
    *      @see CATIGSMUseDirection 
    */
   virtual HRESULT SetFirstDirection(const CATIGSMUseDirection_var iDir) = 0;
   
   /**
    * Gets the second direction on the plane (V).
    * <br>This direction has to be kept perpendicular to the first direction
    *   @param oDir
    *      second direction
    *      @see CATIGSMUseDirection 
    */
   virtual HRESULT GetSecondDirection(CATMathDirection& oDir) = 0;
   
   /**
    * Sets the second direction on the plane (V).
    * <br>This direction has to be kept perpendicular to the first direction
    *   @param iDir
    *      second direction
    *      @see CATIGSMUseDirection 
    */
   virtual HRESULT SetSecondDirection(const CATMathDirection& iDir) = 0;

   /**
    *   Gets grid plane shading.
    *   <br>  Returned value  : = 0 Plane is not in shading mode (just grid visualisation) 
    *   <br>                  : = 1 Plane is shaded 
    */
   virtual int GetPlaneShading() = 0;

   /**
    *   Sets grid plane shading.
    *   @param iShading 
    *   <br>   : = 0 Plane is not in shading mode (just grid visualisation) 
    *   <br>   : = 1 Plane is shaded 
    */
   virtual HRESULT SetPlaneShading(const int iShading) = 0;

   /**
    *   Gets the status for same values for first and second directions spacing and step. 
    *   <br>  Returned value  : = 0 Not same spacing and step
    *   <br>                  : = 1 similar spacing and step
    */
   virtual int GetSameSteps() = 0;

   /**
    *   Sets the same values for first and second directions spacing and step.
    *   <br> References: first direction values are taken as references 
    *   @param isSame
    *   <br>          : = 1 similar spacing and step
    */
   virtual HRESULT SetSameSteps(const int isSame) = 0;

   /**
    *   Gets the first direction primary spacing.
    *   @param HSpacing
    *       The literal parameter of length type
    */
   virtual HRESULT GetFirstDirPrimarySpacing(CATICkeParm_var& HSpacing) = 0;

   /**
    *   Sets the first direction primary spacing.
    *   <pre> 
    *   Warning : the first time, methods to Sets spacing and steps have to be called in this order :
    *	1. SetFirstDirPrimarySpacing
    *   2. SetFirstDirSecondaryStep
    *   3. SetSecondDirPrimarySpacing
    *   4. SetSecondDirSecondaryStep
    *   </pre> 
    *   @param HSpacing
    *       The literal parameter of length type
    */
   virtual HRESULT SetFirstDirPrimarySpacing(const CATICkeParm_var& HSpacing) = 0;

   /**
    *   Gets the first direction secondary subdivisions number.
    *   @param HStep
    *       The literal parameter of integer type
    */
   virtual HRESULT GetFirstDirSecondaryStep(CATICkeParm_var& HStep) = 0;

   /**
    *   Sets the first direction secondary subdivisions number.
    *   <pre> 
    *   Warning : the first time, methods to Sets spacing and steps have to be called in this order :
    *	1. SetFirstDirPrimarySpacing
    *   2. SetFirstDirSecondaryStep
    *   3. SetSecondDirPrimarySpacing
    *   4. SetSecondDirSecondaryStep
    *   </pre> 
    *   @param HStep
    *       The literal parameter of integer type
    */
   virtual HRESULT SetFirstDirSecondaryStep(const CATICkeParm_var& HStep) = 0;

   /**
    *   Gets the second direction primary spacing.
    *   @param VSpacing
    *       The literal parameter of length type
    */
   virtual HRESULT GetSecondDirPrimarySpacing(CATICkeParm_var& VSpacing) = 0;

   /**
    *   Sets the second direction primary spacing.
    *   <pre> 
    *   Warning : the first time, methods to Sets spacing and steps have to be called in this order :
    *	1. SetFirstDirPrimarySpacing
    *   2. SetFirstDirSecondaryStep
    *   3. SetSecondDirPrimarySpacing
    *   4. SetSecondDirSecondaryStep
    *   </pre> 
    *   @param VSpacing
    *       The literal parameter of length type
    */
   virtual HRESULT SetSecondDirPrimarySpacing(const CATICkeParm_var& VSpacing) = 0;

   /**
    *   Gets the second direction secondary subdivisions number.
    *   @param VStep
    *       The literal parameter of integer type
    */
   virtual HRESULT GetSecondDirSecondaryStep(CATICkeParm_var& VStep) = 0;

   /**
    *   Sets the second direction secondary subdivisions number.
    *   <pre> 
    *   Warning : the first time, methods to Sets spacing and steps have to be called in this order :
    *	1. SetFirstDirPrimarySpacing
    *   2. SetFirstDirSecondaryStep
    *   3. SetSecondDirPrimarySpacing
    *   4. SetSecondDirSecondaryStep
    *   </pre> 
    *   @param VStep
    *       The literal parameter of integer type
    */
   virtual HRESULT SetSecondDirSecondaryStep(const CATICkeParm_var&  VStep) = 0;

   /**
    *   Sets Label for the 3D Furtive Grid. 
    *   <br> Allow to redefine the default Label of the Cartesian grid and specify there positions 
    *   @param Position 
    *       Position of the label 
    *   @param First direction Label (H) 
    *       Name of the H Label 
    *   @param Second direction Label (V) 
    *       Neam of the second direction Label 
    */
   virtual HRESULT Set3DFurtiveGridLabel( CATGSMCartesianGridLabel  Position, const CATUnicodeString& FirstDirText, const CATUnicodeString& SecondDirText)=0;

   /**
    *   Gets Label for the 3D Furtive Grid.  
    *   <br> Note: If no Label user defined, gets default label names 
    *   @param Position 
    *       Position of the label 
    *   @param First direction Label (H) 
    *       Name of the H Label 
    *   @param Second direction Label (V) 
    *       Neam of the second direction Label  
    */
   virtual HRESULT Get3DFurtiveGridLabel( CATGSMCartesianGridLabel& Position, CATUnicodeString& FirstDirText, CATUnicodeString & SecondDirText)=0;


   /**
    *   Gets the first direction visible area range.
    *   @param Range
    *       The literal parameter of length type
    */

   virtual HRESULT GetFirstDirVisibleAreaRange(CATICkeParm_var& Range) = 0;
   /**
    *   Sets the first direction visible area range.
    *   @param Range
    *       The literal parameter of length type
    */
   virtual HRESULT SetFirstDirVisibleAreaRange(const CATICkeParm_var& Range) = 0;
   /**
    *   Gets the second direction visible area range.
    *   @param Range
    *       The literal parameter of length type
    */
   virtual HRESULT GetSecondDirVisibleAreaRange(CATICkeParm_var& Range) = 0;
   /**
    *   Sets the second direction visible area range.
    *   @param Range
    *       The literal parameter of length type
    */
   virtual HRESULT SetSecondDirVisibleAreaRange(const CATICkeParm_var& Range) = 0;

   /**
    * Gets the first direction visible area orientation.
    *   <br>  Returned value  : enum {CATGSMSameOrientation, CATGSMInvertOrientation} 
    */
   virtual enum CATGSMOrientation GetFirstDirVisibleAreaOrientation() = 0;
   /**
    *   Sets the first direction visible area orientation.
    *   @param iOrientation
    *      first orientation used to choose visible area side
    */
   virtual HRESULT SetFirstDirVisibleAreaOrientation(const CATGSMOrientation iOrientation) = 0;
   /**
    * Gets the second direction visible area orientation.
    *   <br>  Returned value  : enum {CATGSMSameOrientation, CATGSMInvertOrientation} 
    */
   virtual enum CATGSMOrientation GetSecondDirVisibleAreaOrientation() = 0;
   /**
    *   Sets the second direction visible area orientation.
    *   @param iOrientation
    *      second orientation used to choose visible area side
    */
   virtual HRESULT SetSecondDirVisibleAreaOrientation(const CATGSMOrientation iOrientation) = 0;


  /**
    * Gets Origin for ranges. 
    * @param oOrigin 
    *     Origin 
    *     
    */ 
   virtual HRESULT GetOriginForRanges(CATIMmiMechanicalFeature_var & oOrigin) = 0;

   /**
    * Sets Origin for ranges.
    * @param iOrigin 
    *     Origin 
    *     
    */ 
   virtual HRESULT SetOriginForRanges(const CATIMmiMechanicalFeature_var& iOrigin) = 0;

   /**
    * Types for grid ( Finite, Infinite).
    * @param CATGSMGridFinite
    *    Visible area ranges, Origin, Orientation and Furtivity are defined
    * @param CATGSMGridInfinite
    *    Visible area is the three infinite planes.
    */
   enum CATGSMGridType { CATGSMGridFinite=1, CATGSMGridInfinite };

   /**
    * Gets type.
    *   <br>  Returned value  : enum {CATGSMGridFinite, CATGSMGridInfinite} 
    */
   virtual enum CATGSMGridType GetType() = 0;
   /**
    * Sets type.
    *   @param iType
    *      type enum {CATGSMGridFinite, CATGSMGridInfinite}
    */
   virtual HRESULT SetType(const enum CATGSMGridType iType) = 0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseCartesianGrid, CATBaseUnknown );

#endif
