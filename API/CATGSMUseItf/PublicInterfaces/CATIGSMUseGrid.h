/* -*-c++-*- */
// 
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//---------------------------------------------------------------------
// Historic:
// Creation     : 00/07/03 > 
// Modification : 02/07/15 > CAA L0 exposition  
// Modification : 05/03/03 > CAA L1 exposition  
//---------------------------------------------------------------------
#ifndef CATIGSMUseGrid_H
#define CATIGSMUseGrid_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseGrid ;
#else
extern "C" const IID IID_CATIGSMUseGrid ;
#endif

//------------------------------------------------------------------

/**
 * Grid feature : allows to manipulate the generic data of grids
 * <b>Role</b>: Allows to associate a grid to a working support 
 * <br> Grid object is a genertal objet, it manipulate standard parameter for the grid 
 * <br> -  Visibility : grid visible or not 
 * @see  CATIGSMUseWorkingSupportFactory##CreateWorkingSupport
 * @see  CATICartesianGrid
 */

class ExportedByCATGSMUseItf CATIGSMUseGrid: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

   /**
    *   Gets the grid visibility.
    *   <br>  Returned value  : = 0 Grid not visible 
    *   <br>                  : = 1 Grid visible 
    */                                  

   virtual int GetVisibility() = 0;
   /**
    *   Sets the grid visibility.
    *   @param iVisible 
    *   <br>  iVisible   : = 0 Grid not visible 
    *   <br>             : = 1 Grid visible 
    */

   virtual HRESULT SetVisibility(const int iVisible) = 0;
   /**
    *   Sets the grid furtivity.
    *   @param iFurtivity
    *   <br>  iFurtivity   : = 0 Grid not furtive 
    *   <br>               : = 1 Grid furtive 
    */

   virtual HRESULT SetFurtivity(const int iFurtivity=1) = 0;
  /**
    *   Gets the grid furtivity.
    *   <br>  Returned value  : = 0 Grid not furtive 
    *   <br>                  : = 1 Grid furtive 
    */

   virtual int GetFurtivity() = 0;
   /**
    *   Sets the grid selectability.
    *   @param iSelectability
    *   <br>  iSelectability   : = 0 Grid not selectable 
    *   <br>				   : = 1 Grid selectable 
    */

   virtual HRESULT SetSelectability(const int iSelectability=1) = 0;
   /**
    *   Gets the grid selectability.
    *   <br>  Returned value  : = 0 Grid not selectable 
    *   <br>                  : = 1 Grid selectable 
    */
   virtual int GetSelectability() = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseGrid, CATBaseUnknown );

#endif
