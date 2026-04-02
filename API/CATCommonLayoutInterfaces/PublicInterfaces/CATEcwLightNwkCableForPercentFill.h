#ifndef CATEcwLightNwkCableForPercentFill_H_
#define CATEcwLightNwkCableForPercentFill_H_

// COPYRIGHT DASSAULT SYSTEMES  1999
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// ============================================================================
// |
// |   Component Identifier: CATEcwLightNwkCableForPercentFill
// |
// ============================================================================
// |
// |
// ============================================================================
// |
// |   Audit Trail:
// |      Author:
// |      Date:       Aug. 04, 2008
// |      Chg ID: 
// |      Chg nature: Creation
// |
// |      Modified:
// |      Date:
// |      Chg ID:
// |      Chg nature:
// |
// ============================================================================

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfDouble.h"
#include "CATBoolean.h"

#include "CATCommonLayoutItfCPP.h"

/**
  <b>Role<\b> 
  * This is a CAA exposed class, meant to represent the Cable object
  * as defined in ECV (Electrical Cableway Route Management) application.
  * 
  * This class should NOT be instantiated by the user
  * The creation various instances of this class and setting data of various 
  * class members by use of Setxxx methods should not be managed by the CAA user.  
  *
  * This class shall be required by the CAA user, so as to calculate Percent Fill
  * (hereafter referred as PF) information. 
  * This class is an input argument to the CATIEcvPercentFill::ComputePercentFill
  * The ONLY method that the user should use from this class is GetCableData. 
  * This shall give him more details about the Cable
  * 
  * Warning: All other methods of CATEcwLightNwkCableForPercentFill should not 
  * be used by the user
 */
class ExportedByCATCommonLayoutItfCPP CATEcwLightNwkCableForPercentFill : public CATBaseUnknown
{
  CATDeclareClass;

  public:

    /**
    * Constructor
    * @param iDBKey
    *   Input the unique key of the cable
    */ 
    CATEcwLightNwkCableForPercentFill( int iDBKey );
    virtual ~CATEcwLightNwkCableForPercentFill();
 
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dCurrentCableOD 
      *   input: the OD of current Cable
    */
    void SetCurrentCableOD        ( double dCurrentCableOD );

    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dCurrentCableArea 
      *   input: the cumulative Area of current Cables
    */
    void SetCurrentCableArea      ( double dCurrentCableArea );

    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param iLRoutedCablesDiameter 
      *   input: the List of Diameters of Current Cables
    */
    void SetListOfRoutedCablesODs ( CATListOfDouble iLRoutedCablesDiameter );

    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dTotalCommonCableSize 
      *   input: the cumulative Diameters of Current Cables
    */
    void SetTotalCommonCableSize  ( double dTotalCommonCableSize );

    /**
      * Method can be called by the user from within his custom implementation of 
      * CATIEcvPercentFill::ComputePercentFillValue
      * 
      * @param odCurrentCableOD 
      *   output: the OD of current Cable
      * @param odCurrentCableArea 
      *   output: the cumulative Area of current Cables
      * @param oLRoutedCablesDiameter 
      *   output: the List of Diameters of Current Cables
      * @param odTotalCommonCableSize 
      *   output: the cumulative Diameters of Current Cables
    */
    void GetCableData( double          & odCurrentCableOD );//,
                       //double          & odCurrentCableArea,
                       //CATListOfDouble & oLRoutedCablesDiameter,
                       //double          & odTotalCommonCableSize );

 private:

    // unique identifier of this cable
    int             _DBKey;
    // List of ODs of cables
    CATListOfDouble _iLRoutedCablesDiameter;
    // Current cable OD being
    double          _dCurrentCableOD;
    // Current cable Area being
    double          _dCurrentCableArea;
    // Total common cable Size of cables
    double          _dTotalCommonCableSize;
};

#endif
