#ifndef CATIEcvPercentFill_H
#define CATIEcvPercentFill_H
// COPYRIGHT DASSAULT SYSTEMES 2008
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEEcvPercentFillAdapter
  */

//===================================================================
//
// CATIEcvPercentFill.h
// Define the CATIEcvPercentFill interface
//
//===================================================================
//
// Usage notes:
// Users implementing this interface must derive from the adapter 
// CATEEcvPercentFillAdapter.h in case new methods are added.
//
// Users must define a .dic file tie this interface to the exposed 
//  Node and Arc objects defined below:
//  1) For Node the object is CATEcwLightNwkNodeForPercentFill.
//  2) For Arc the object is CATEcwLightNwkArcForPercentFill.
//===================================================================
//
//===================================================================

#include "IUnknown.h"
#include "CATEcwLightNwkNodeForPercentFill.h"
#include "CATEcwLightNwkArcForPercentFill.h"
#include "CATEcwLightNwkCableForPercentFill.h"
#include "CATLISTP_CATEcwLightNwkCableForPercentFill.h"
#include "CATLISTP_CATEcwLightNwkArcForPercentFill.h"

extern "C" const IID IID_CATIEcvPercentFill ;

//------------------------------------------------------------------
/**
  <b>Role<\b> The only method(ComputePercentFill) of this interface shall be called 
  * multiple times from the ManageCablesFromDatabase Command.
  * When the command performs operations such as AutoRouteCable, PartialRouteCable, 
  * PartialDeleteCable, DeleteCable, LoadDataFromDatabase, Validate
  * 
  * Internal implementation of this interface exists for Node and Arc objects 
  * and shall be invoked by default.
  *
  * If the user needs to override this behavior, he should implement this
  * interface on CAA exposed objects CATEcwLightNwkNodeForPercentFill
  * and CATEcwLightNwkArcForPercentFill
  * <p><b>BOA  information</b>:  this  interface  can  be  implemented 
  *  using  the  BOA  (Basic  Object  Adapter). 
  *  To  know  more  about  the  BOA,  refer  to  the  CAA  Encyclopedia  home  page.   
  *  Click  Middleware  at  the  bottom  left,  then  click  the  Object  Modeler  tab  page. 
  *  Several  articles  deal  with  the  BOA.</p>
 */
//class CATIEcvPercentFill: public CATBaseUnknown
class CATIEcvPercentFill: public IUnknown
{
  CATDeclareInterface;

  public:

  // ***************************************************************************************
  // Note that this method(ComputePercentFill) may be called multiple times while performing 
  // any operation, say AutoRouteCable, PartialRouteCable, PartialDeleteCable, DeleteCable,
  // LoadDataFromDatabase, Validate
  // ***************************************************************************************

  /*
  * @pNwkNode
  *  This the input Node (class CATEcwLightNwkNodeForPercentFill, which is also 
  *  Public exposed) Details about the Node such as Name, Type, Area, 
  *  ExistingPercentFill, ListOfConnected Arcs etc can be obtained from this class.

  * @pNwkArc
  *  This the input Arc (class CATEcwLightNwkArcForPercentFill, which is also Public 
  *  exposed) Details about the Arc such as Name, Type, Area, Width, ExistingPercentFill
  *  etc can be obtained from this class. This input may or may not be Valid.

  * @pListOfCATEcwLightNwkArcForPercentFill
  *  This the input ListOfArcs (collection of class CATEcwLightNwkArcForPercentFill)
  *  More information on usage of this class shall be added by R19sp1 CORA.

  * @pNwkCable
  *  This the input Cable (class CATEcwLightNwkCableForPercentFill, which is also 
  *  Public exposed) Details about the Cable such as CableOD, Total Common Cable Size, 
  *  etc can be obtained from this class.

  * @pListOfCATEcwLightNwkCableForPercentFill
  *  This the input ListOfCables (each member belongs to class 
  *  CATEcwLightNwkCableForPercentFill, which is also Public exposed) The current 
  *  input Node/Arc are included in the CableRoutes of these cables

  * @iRoutingMode - The current operation being performed from the Main Command.
  * <br><b>
  *  Value = 1 denotes that input pNwkCable is being added to the Node/Arc
  *  Value = 2 denotes that input pNwkCable is being deleted from the Node/Arc
  *  Value = 3 denotes that load data from ECDB database process is underway and the 
  *            computed Percent Fill value shall be assigned to the input Node/Arc
  *  Value = 4 denotes that validation operation is being performed and the computed 
  *            Percent Fill value shall be assigned to the input Node/Arc
  *  </b>

  * @iRouteToolsOptionStackCableOption
  *  Tools->Options setting under General->Equipment & Systems->Electrical Cabling 
  *  Discipline-> Electrical Cableway Routing -> Manage Cables From Database Routing Options
  * <br><b>
  *  Value = 1, when the Option is enabled and 0 when it is disabled
  *  </b>

  * @iPFToBeSetOnNode - this option is relevant in Raceway model case only
  *  In case of a Hanger-Loft network model, this option shall be ignored.
  * <br><b>
  *  If Value = 1, the computed value shall be set on the input Node
  *  If Value = 0, the computed value shall be set on the input Arc
  *  </b>

  * @odComputedPercentFill
  *  this is the only output from this method. The value that will be set on Node/Arc. 
  *  In most cases, it shall be a number from 0 to 100.
  *  The value needs to be computed based on the other input arguments
  */

  virtual HRESULT ComputePercentFillValue
  ( CATEcwLightNwkNodeForPercentFill            *   pNwkNode, 
    CATEcwLightNwkArcForPercentFill             *   pNwkArc,
    CATLISTP(CATEcwLightNwkArcForPercentFill)       pListOfCATEcwLightNwkArcForPercentFill,
    CATEcwLightNwkCableForPercentFill           *   pNwkCable,
    CATLISTP(CATEcwLightNwkCableForPercentFill)     pListOfCATEcwLightNwkCableForPercentFill,
    int                                             iRoutingMode,
    int                                             iRouteToolsOptionStackCableOption,
    int                                             iPFToBeSetOnNode,
    double                                      &   odComputedPercentFill
    ) = 0;

};

//------------------------------------------------------------------

#endif
