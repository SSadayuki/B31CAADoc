/* -*-c++-*- */

// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//---------------------------------------------------------------------
// Historic:
// Creation     : 00/07/03 > Factory for creating/activating support set and create working support 
// Modification : 02/07/15 > CAA L0 exposition  
// Modification : 05/03/03 > CAA L1 exposition  
//---------------------------------------------------------------------
//  CATIGSMUseWorkingSupportFactory.h
//---------------------------------------------------------------------


#ifndef CATIGSMUseWorkingSupportFactory_H
#define CATIGSMUseWorkingSupportFactory_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATIGSMUseWorkingSupport.h"

class CATIGSMUseWorkingSupportSet_var;
class CATIMmiMechanicalFeature_var;
class CATIGSMUseCartesianGrid_var;
class CATIGSMUse3DFurtiveGrid_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseWorkingSupportFactory ;
#else
extern "C" const IID IID_CATIGSMUseWorkingSupportFactory ;
#endif

//------------------------------------------------------------------

/**
 * Factory allowing to create working support objects.
 * <b>Role</b>: Allows to create Working support set and working supports 
 * <br> Working support set is the tool aggregated to the part for grouping Working supports 
 * <br> several Working supports  can be created , one is current 
 * <br> Note: the supports can be either planes or surfaces.
 */
class ExportedByCATGSMUseItf CATIGSMUseWorkingSupportFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
  
   
   /**
    *   Gets or creates a working support set
    *   @param WithCreation
    *	   Tells if the set has to be created when it does not exist
    *      <br> Note: Only one Support set is created by Part document      
    *   @return
    *      The working support set when it exists or has been created, NULL_var otherwise
    *	@see CATIGSMUseWorkingSupportSet
    */
   virtual CATIGSMUseWorkingSupportSet_var GetWorkingSupportSet(int WithCreation=0) = 0;

   /**
    *   Creates a working support.
    *   <br> Note: a Working support set should exist before creation af a working support
    *	@param ispSupport
    *	  The reference support to take into account.
    *     <br> Note: the support can be either a plane or a surface.
    *	@param iType
    *	   The grid type
    *	@see CATIGSMUseWorkingSupport##GridType 
    */
   virtual CATIGSMUseWorkingSupport_var CreateWorkingSupport(const CATIMmiMechanicalFeature_var &ispSupport,
							  CATIGSMUseWorkingSupport::GridType iType=CATIGSMUseWorkingSupport::GSMNoGrid) = 0;

   /**
    *  Creates a cartesian grid.
    *   <br> By default, the created grid is visible
    *   <br> Note: Cartesian grid should  necessary be  associated to a planar working support 
    *	@see CATIGSMUseCartesianGrid
    */
   virtual CATIGSMUseCartesianGrid_var CreateCartesianGrid() = 0;

   /**
    *  Creates a 3D Furtive Grid. 
    */ 
   virtual CATIGSMUse3DFurtiveGrid_var Create3DFurtiveGrid() = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseWorkingSupportFactory, CATBaseUnknown );

#endif


