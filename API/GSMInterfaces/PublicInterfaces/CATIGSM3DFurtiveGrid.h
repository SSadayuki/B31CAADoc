// COPYRIGHT Dassault Systemes 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//===================================================================
//
// CATIGSM3DFurtiveGrid.h
// Define the CATIGSM3DFurtiveGrid interface
//
//===================================================================

#ifndef CATIGSM3DFurtiveGrid_H
#define CATIGSM3DFurtiveGrid_H


#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATICkeParm.h"
#include "CATIGSMCartesianGrid.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSM3DFurtiveGrid;
#else
extern "C" const IID IID_CATIGSM3DFurtiveGrid ;
#endif

class CATISpecObject_var;
class CATIGSMWorkingSupport_var ;

//------------------------------------------------------------------

/**
 * 3D Furtive Grid Feature. 
 * <b>Role</b>: allows to manipulate the data of 3D Furtive Grid.
 * <br> The 3D Furtive Grid is constituated of three WorkOnSupport 
 * <br>  *  Each WorkOnSupport is constituated by a Cartesian Grid Plane 
 * <br>  *  When the current view becomes parallele to one of the defined cartesian grid plane the grid is displayed 
 * <br>  *  Each grid as the attribute Selectable, Furtive, xxxx 
 * <br>  *  Stepping, Labels,. position can be modified for each Cartesian Grid 
 * @see  CATIGSMWorkingSupportFactory##CreateW3DFurtiveGrid 
 * @see  CATIGrid,CATICartesianGrid 
 */

class ExportedByCATGitInterfaces CATIGSM3DFurtiveGrid: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


  /**
    * Gets Axis Syrtem for Local 3D Furtive Grid definition. 
    * @param oAxisSystem 
    *     Return local Axis System 
    *     if NULL_var = 3D Furtive Grid is define related reference plane (XY,YZ ,ZX) 
    *     Note: Only one reference 3D Furtive Grid can be defined in a CATPart
    */ 
   virtual HRESULT Get3DFurtiveGridLocalAxisSystem(CATISpecObject_var & oAxisSystem) = 0;

  /**
    * Sets Axis Syrtem for Local 3D Furtive Grid definition. 
    * @param iAxisSystem 
    *     Set iAxisSystem as Axis for the 3D Furtive Grid 
    *     
    */ 
   virtual HRESULT Set3DFurtiveGridLocalAxisSystem(const CATISpecObject_var & iAxisSystem) = 0;

  /**
    * Gets 3D Furtive Grid differnet WorkOnSupport. 
    * @param oWos 
    *     Work on Support 
    * @param iRank  
    *     Number of related Wos 
    *     
    */ 
   virtual HRESULT Get3DFurtiveGridWorkOnSupport (CATIGSMWorkingSupport_var& oWOS, int iRank) = 0;

   /**
    * Set 3D Furtive Grid differnet WorkOnSupport. 
    * @param iWos 
    *     Work on Support 
    * @param iRank  
    *     Number of related Wos 
    *     
    */ 
   virtual HRESULT Set3DFurtiveGridWorkOnSupport (const CATIGSMWorkingSupport_var& iWos, int iRank) = 0;


    /**
    * Gets type.
    *   <br>  Returned value  : enum {CATGSMGridFinite, CATGSMGridInfinite} 
    */
   virtual enum CATIGSMCartesianGrid::CATGSMGridType GetType() = 0;
   /**
    * Sets type.
    *   @param iType
    *      type enum {CATGSMGridFinite, CATGSMGridInfinite}
    */
   virtual HRESULT SetType(const enum CATIGSMCartesianGrid::CATGSMGridType iType) = 0;

   /**
    * Gets position.
    *   <br>  Returned value  : Position number from 1 to 8 
    */
   virtual int GetPosition() = 0;
   /**
    * Sets position.
    *   @param iPosition
    *      Position number from 1 to 8
    */
   virtual HRESULT SetPosition(const int iPosition) = 0;

  /**
    * Gets 3D Grid origin. 
    * @param oOrigin 
    *     Origin 
    *     
    */ 
   virtual HRESULT GetOrigin(CATISpecObject_var & oOrigin) = 0;

   /**
    * Sets 3D Grid origin. 
    * @param iOrigin 
    *     Origin 
    *     
    */ 
   virtual HRESULT SetOrigin(const CATISpecObject_var& iOrigin) = 0;

   /**
    *   Sets the grids furtivity.
    *   @param iFurtivity
    *   <br>  iFurtivity   : = 0 Grids not furtive 
    *   <br>               : = 1 Grids furtive 
    */
   virtual HRESULT SetFurtivity(const int iFurtivity=1) = 0;
  /**
    *   Gets the grids furtivity.
    *   <br>  Returned value  : = 0 Grids not furtive 
    *   <br>                  : = 1 Grids furtive 
    */
   virtual int GetFurtivity() = 0;

   /**
    *   Sets the label height, in point unit.
    *   @param LabelHeight
    *       The literal parameter of real type
    */
   virtual HRESULT SetLabelHeight(const CATICkeParm_var& LabelHeight) = 0;
   /**
    *   Gets the label height, in point unit.
    *   @param LabelHeight
    *       The literal parameter of real type
    */
   virtual HRESULT GetLabelHeight(CATICkeParm_var& LabelHeight) = 0;

    /**
    * Sets the 3D Grid origin, with offsets applied to it. 
    * @param iManipulatedOrigin
    *     ManipulatedOrigin   
    */  
   virtual HRESULT SetGridOrigin(const CATISpecObject_var& iManipulatedOrigin) = 0;

    /**
    * Gets the 3D Grid origin, with offsets applied to it. 
    * @param oManipulatedOrigin 
    *     ManipulatedOrigin   
    */ 
   virtual HRESULT GetGridOrigin(CATISpecObject_var& oManipulatedOrigin) = 0;

    /**
    * Sets the offset applied to 3D grid origin, along X direction. 
    * @param iOffsetValueX 
    *     OffsetValueX   
    */ 
   virtual HRESULT SetOffsetValueX(const CATICkeParm_var& iOffsetValueX) = 0;

    /**
    * Gets the offset applied to 3D grid origin, along X direction. 
    * @param oOffsetValueX 
    *     OffsetValueX   
    */ 
   virtual HRESULT GetOffsetValueX(CATICkeParm_var& oOffsetValueX) = 0;

    /**
    * Sets the offset applied to 3D grid origin, along Y direction. 
    * @param iOffsetValueY 
    *     OffsetValueY   
    */ 
   virtual HRESULT SetOffsetValueY(const CATICkeParm_var& iOffsetValueY) = 0;
    
    /**
    * Gets the offset applied to 3D grid origin, along Y direction. 
    * @param oOffsetValueY 
    *     OffsetValueY   
    */ 
   virtual HRESULT GetOffsetValueY(CATICkeParm_var& oOffsetValueY) = 0;

    /**
    * Sets the offset applied to 3D grid origin, along Z direction. 
    * @param iOffsetValueZ 
    *     OffsetValueZ   
    */ 
   virtual HRESULT SetOffsetValueZ(const CATICkeParm_var& iOffsetValueZ) = 0;

    /**
    * Gets the offset applied to 3D grid origin, along Z direction. 
    * @param oOffsetValueZ 
    *     OffsetValueZ   
    */ 
   virtual HRESULT GetOffsetValueZ(CATICkeParm_var& oOffsetValueZ) = 0;
};

CATDeclareHandler( CATIGSM3DFurtiveGrid, CATBaseUnknown );

//------------------------------------------------------------------

#endif
