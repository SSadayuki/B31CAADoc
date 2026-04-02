#ifndef CATEcwLightNwkArcForPercentFill_H_
#define CATEcwLightNwkArcForPercentFill_H_

// COPYRIGHT DASSAULT SYSTEMES  1999
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// ============================================================================
// |
// |   Component Identifier: CATEcwLightNwkArcForPercentFill
// |
// ============================================================================
// |
// |   Description:
// |   This is a CAA exposed class, meant to represent the Arc object
// |   as defined in ECV (Electrical Cableway Route Management) application
// |   This class shall be required by the CAA user, so as to calculate Percent Fill
// |   (hereafter referred as PF) information. 
// |      
// |===========================================================================
// |
// |   Usage Notes: 
// |
// |   The CAA user is expected to use the method GetDataToComputePercentFill
// |   from this class. This information shall help him in computation of PF.
// |
// |   The creation various instances of this class and setting data of various 
// |   class members by use of Set*** methods should not be managed by the CAA user.
// |
// ============================================================================
// |
// |   Audit Trail:
// |      Author
// |      Date      : Aug. 04, 2008
// |      Chg ID    : 
// |      Chg nature: Creation
// |
// ============================================================================

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfDouble.h"
#include "CATBoolean.h"

#include "CATCommonLayoutItfCPP.h"

/**
  <b>Role<\b> 
  * This is a CAA exposed class, meant to represent the Arc object
  * as defined in ECV (Electrical Cableway Route Management) application.
  * 
  * This class should NOT be instantiated by the user
  * The creation various instances of this class and setting data of various 
  * class members by use of Setxxx methods should not be managed by the CAA user.  
  *
  * This class shall be required by the CAA user, so as to calculate Percent Fill
  * (hereafter referred as PF) information. 
  * This class is an input argument to the CATIEcvPercentFill::ComputePercentFill
  * The ONLY method that the user should use from this class is GetArcData. 
  * This shall give him more details about the Arc
  * 
  * Warning: All other methods of CATEcwLightNwkArcForPercentFill should not 
  * be used by the user
 */
class ExportedByCATCommonLayoutItfCPP CATEcwLightNwkArcForPercentFill : public CATBaseUnknown
{
  CATDeclareClass;

  public:

    /**
    * Constructor
    * @param iDBKey
    *   Input the unique key of the arc
    * @return
    */ 
    // the CAA user shall not use the following method
    CATEcwLightNwkArcForPercentFill( int iDBKey );
    virtual ~CATEcwLightNwkArcForPercentFill();

    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param iName 
      *   input: the Name of the Arc
    */
    void SetName          ( CATUnicodeString iName   );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param iName 
      *   input: the Type of the Arc
    */
    void SetType          ( CATUnicodeString iType   );

    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dArcArea 
      *   input: the Area of the Arc
    */
    void SetArcArea       ( double dArcArea          );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dArcWidth 
      *   input: the Width of the Arc
    */
    void SetArcWidth      ( double dArcWidth         );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dArcExistingPFill 
      *   input: the existing PF of the Arc
    */
    void SetArcPercentFill( double dArcExistingPFill );
 
    /**
      * Method can be called by the user from within his custom implementation of 
      * CATIEcvPercentFill::ComputePercentFillValue
      * 
      * @param ouName 
      *   output: the Name of the Arc
      * @param ouType 
      *   output: the Type of the Arc
      * @param odArcArea 
      *   output: the Area of the Arc
      * @param odArcWidth 
      *   output: the Width of the Arc 
      * @param odArcExistingPFill 
      *   output: the existing Percent Fill of the Arc 
    */
    void GetArcData( CATUnicodeString & ouName,
                     CATUnicodeString & ouType,
                     double           & odArcArea,
                     double           & odArcWidth,
                     double           & odArcExistingPFill );
 private:

    // unique identifier of this Arc
    int               _DBKey;
    // Name of this Arc
    CATUnicodeString  _Name;
    // Type of this Arc
    CATUnicodeString  _Type;
    // Area of this Arc
    double            _dArcArea;
    // Width of this Arc
    double            _dArcWidth;
    // Existing Percent Fill of this Arc
    double            _dArcExistingPFill;
};

#endif
