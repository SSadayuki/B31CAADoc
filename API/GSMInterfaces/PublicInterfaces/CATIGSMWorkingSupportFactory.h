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
//  CATIGSMWorkingSupportFactory.h
//---------------------------------------------------------------------


#ifndef CATIGSMWorkingSupportFactory_H
#define CATIGSMWorkingSupportFactory_H

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATIGSMWorkingSupport.h"

class CATIGSMWorkingSupportSet_var;
class CATISpecObject_var;
class CATIGSMCartesianGrid_var;
class CATIGSM3DFurtiveGrid_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMWorkingSupportFactory ;
#else
extern "C" const IID IID_CATIGSMWorkingSupportFactory ;
#endif

//------------------------------------------------------------------

/**
 * Factory allowing to create working support objects.
 * <b>Role</b>: Allows to create Working support set and working supports 
 * <br> Working support set is the tool aggregated to the part for grouping Working supports 
 * <br> several Working supports  can be created , one is current 
 * <br> Note: the supports can be either planes or surfaces.
 */
class ExportedByCATGitInterfaces CATIGSMWorkingSupportFactory: public CATBaseUnknown
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
    *	@see CATIGSMWorkingSupportSet
    */
   virtual CATIGSMWorkingSupportSet_var GetWorkingSupportSet(int WithCreation=0) = 0;

   /**
    *   Creates a working support.
    *   <br> Note: a Working support set should exist before creation af a working support
    *	@param ispSupport
    *	  The reference support to take into account.
    *     <br> Note: the support can be either a plane or a surface.
    *	@param iType
    *	   The grid type
    *	@see CATIGSMWorkingSupport##GridType 
    */
   virtual CATIGSMWorkingSupport_var CreateWorkingSupport(const CATISpecObject_var &ispSupport,
							  CATIGSMWorkingSupport::GridType iType=CATIGSMWorkingSupport::GSMNoGrid) = 0;

   /**
    *  Creates a cartesian grid.
    *   <br> By default, the created grid is visible
    *   <br> Note: Cartesian grid should  necessary be  associated to a planar working support 
    *	@see CATIGSMCartesianGrid
    */
   virtual CATIGSMCartesianGrid_var CreateCartesianGrid() = 0;

   /**
    *  Creates a 3D Furtive Grid. 
    */ 
   virtual CATIGSM3DFurtiveGrid_var Create3DFurtiveGrid() = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMWorkingSupportFactory, CATBaseUnknown );

#endif


