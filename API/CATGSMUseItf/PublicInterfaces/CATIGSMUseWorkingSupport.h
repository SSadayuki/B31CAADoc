/* -*-c++-*- */
// 
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


//---------------------------------------------------------------------
// Historic:
// Creation     : 00/07/03 > Working support  Access
// Modification : 02/07/15 > CAA L0 exposition  
// Modification : 05/03/03 > CAA L1 exposition  
//---------------------------------------------------------------------
//  CATIGSMUseWorkingSupport.h
//---------------------------------------------------------------------

#ifndef CATIGSMUseWorkingSupport_H
#define CATIGSMUseWorkingSupport_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATICkeParm.h"
//ObjectSpecsModeler
#include "CATLISTV_CATIMmiMechanicalFeature.h"

class CATIMmiMechanicalFeature_var;
class CATIGSMUseGrid_var;
class CATMathPoint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseWorkingSupport ;
#else
extern "C" const IID IID_CATIGSMUseWorkingSupport ;
#endif

/**
 * Working support feature.
 * <b>Role</b> : allows to manipulate the data of a working support
 * @see CATIGSMUseWorkingSupportFactory#CreateWorkingSupport
 */
class ExportedByCATGSMUseItf CATIGSMUseWorkingSupport: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
   /**
    *  Asks whether this working support is the active one.
    *      <br> TRUE  = if Working Support is current 
    *      <br> FALSE = if Working Support is NOT current one  
    */
   virtual CATBoolean IsCurrent() = 0;

   /**
    * Gets the working support.
    * @param ospSupport
    *     The support.
    *     <br> Note: The support can be a plane or a surface.
    */
   virtual HRESULT GetReferenceSupport(CATIMmiMechanicalFeature_var& ospSupport) = 0;

   /**
    * Sets the working support.
    * @param ispSupport
    *     The support.
    *     <br> Note: The support can be a plane or a surface.
    */
   virtual HRESULT SetReferenceSupport(const CATIMmiMechanicalFeature_var& ispSupport) = 0;

   /**
    * Gets the reference point.
    * <br> Note: This data is not mandatory, point can be NULL_var
    * @param ospPoint
    *      The point
    */
   virtual HRESULT GetReferencePoint(CATIMmiMechanicalFeature_var& ospPoint) = 0;

   /**
    * Gets the reference mathematical point.
    * <br> Note:  This method is only valid when the reference support has been set 
    * and when there is no grid.
    * <br>This point is either the default computed point or the reference point that has
    * been set by the user.
    * @param oPoint
    *      The point
    * @return
    *      S_OK if OK, E_FAIL if fail
    */
   virtual HRESULT GetReferenceMathPoint(CATMathPoint& oPoint) = 0;

   /**
    * Sets the reference point. 
    * <br>This data is not mandatory, point=NULL_var is allowed.
    * @param ispPoint
    *      The point
    */
   virtual HRESULT SetReferencePoint(const CATIMmiMechanicalFeature_var& ispPoint) = 0;

   /**
    * Defines available grid types
.     * @param  GSMUnknownGrid
    *     Unknown type of grid 
    * @param  GSMNoGrid
    *     No grid
    * @param   GSMCartesianGrid
    *     Cartesian grid 
    * @param  GSMSelectableGrid
    *     New selectable cartesian Grid (R10)
    * @param  GSMReferenceGrid
    *     New selectable reference cartesian Grid (R10)
    * @param  GSMGridSetGrid
    *     GridSet Grid
    */
   enum GridType { GSMUnknownGrid=0, GSMNoGrid=1, GSMCartesianGrid=2, GSMGridSetGrid=3 };
   /** 
    * Gets the grid type.
    * @param oType
    *      Type of grid support 
    */
   virtual HRESULT GetGridType(GridType& oType) = 0;

   /** 
    * Sets the grid type.
    * @param iType
    *      Type of grid support 
    */
   virtual HRESULT SetGridType(const GridType iType) = 0;

   /**
    *  Gets the grid feature.
    *  @param ospGrid
    *	the returned grid when it exits. 
    *  <br> Note: This can be :
    *  <ul> 
    *  <li>  - NULL_var when there is no grid </li> 
    *  <li>  - a CATIGSMUseCartesianGrid handler when grid type is Cartesian </li>
    *  </ul> 
    *   @see CATIGSMUseCartesianGrid, CATIGSMUseGrid
    */
   virtual HRESULT GetGrid(CATIGSMUseGrid_var& ospGrid) = 0;

  /**
   *  Gets the geometric data useful for working support sub-elements featurizarion in case of selectable WorkingSupport.
   *  The geometrics data are the 2 infinite lines representing the two main direction of the grid.
   * @param ospData
   *      The geometric line.
   * @param iRank
   *	  The rank of the geometic line (1 or 2)
   */
   virtual HRESULT GetGeometricData(CATIMmiMechanicalFeature_var& ospData, int iRank) = 0;

  /**
   * Flags features created on the WorkOnSupport.
   *   @param iFeatureOnSupport
   *      Feature to be flag as creasted on the WorkOnSupport
   */
   virtual HRESULT SetFeatureOnSupport(const CATIMmiMechanicalFeature_var& iFeatureOnSupport) =0;

  /**
   * Gets all features created on the WorkOnSupport.
   *   @param oListOfFeatures
   *      List of features created on the WorkOnSupport
   */
   virtual HRESULT GetListOfFeaturesOnSupport(CATLISTV(CATIMmiMechanicalFeature_var) & oListOfFeatures) =0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseWorkingSupport, CATBaseUnknown );

#endif
