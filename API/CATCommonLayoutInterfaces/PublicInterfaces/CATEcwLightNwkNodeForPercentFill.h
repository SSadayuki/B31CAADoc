#ifndef CATEcwLightNwkNodeForPercentFill_H_
#define CATEcwLightNwkNodeForPercentFill_H_

// COPYRIGHT DASSAULT SYSTEMES  1999
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// ============================================================================
// |
// |   Component Identifier: CATEcwLightNwkNodeForPercentFill
// |
// ============================================================================
// |
// |   Description:
// |   This is a CAA exposed class, meant to represent the Node object
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
// |      Author:
// |      Date:       Aug. 4, 2008
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
#include "CATLISTP_CATEcwLightNwkArcForPercentFill.h"

/**
  <b>Role<\b> 
  * This is a CAA exposed class, meant to represent the Node object
  * as defined in ECV (Electrical Cableway Route Management) application.
  * 
  * This class should NOT be instantiated by the user
  * The creation various instances of this class and setting data of various 
  * class members by use of Setxxx methods should not be managed by the CAA user.  
  *
  * This class shall be required by the CAA user, so as to calculate Percent Fill
  * (hereafter referred as PF) information. 
  * This class is an input argument to the CATIEcvPercentFill::ComputePercentFill
  * The ONLY method that the user should use from this class is GetNodeData. 
  * This shall give him more details about the Node
  * 
  * Warning: All other methods of CATEcwLightNwkNodeForPercentFill should not 
  * be used by the user
 */
class ExportedByCATCommonLayoutItfCPP CATEcwLightNwkNodeForPercentFill : public CATBaseUnknown
{
  CATDeclareClass;

  public:

    /**
    * Constructor
    * @param iDBKey
    *   Input the unique key of the node
    * @return
    */ 
    // the CAA user shall not use the following method
    CATEcwLightNwkNodeForPercentFill( int iDBKey );
    virtual ~CATEcwLightNwkNodeForPercentFill();
 
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param iName 
      *   input: the Name of the Node
    */
    void SetName                ( CATUnicodeString iName );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param iType 
      *   input: the Type of the Node
    */
    void SetType                ( CATUnicodeString iType );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dNodeArea 
      *   input: the Area of the Node
    */
    void SetArea                ( double dNodeArea );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param dNodeExistingPFill 
      *   input: the existing PercentFill of the Node
    */
    void SetExistingPercentFill ( double dNodeExistingPFill );
    
    /**
      * Method called by ManageCablesFromDatabase Command UI to set data for later use.
      * the CAA user shall not use the following method
      * 
      * @param pListOfCAANwkArc 
      *   input: the ListOfArc connected to the Node
    */
    void SetListOfNodeArcs      (CATLISTP(CATEcwLightNwkArcForPercentFill)  pListOfCAANwkArc);

    /**
      * Method can be called by the user from within his custom implementation of 
      * CATIEcvPercentFill::ComputePercentFillValue
      * 
      * @param ouName 
      *   output: the Name of the Node
      * @param ouType 
      *   output: the Type of the Node
      * @param odNodeArea 
      *   output: the Area of the Node
      * @param odNodeExistingPFill 
      *   output: the existing Percent Fill of the Node 
      * @param opListOfCAANwkArc 
      *   output: the List of Arcs connected to the Node
    */
    void GetNodeData( CATUnicodeString  & ouName,
                      CATUnicodeString  & ouType,
                      double            & odNodeArea,
                      double            & odNodeExistingPFill,
                      CATLISTP(CATEcwLightNwkArcForPercentFill) 
                                        & opListOfCAANwkArc);

  private:

    // unique identifier of this Node
    int              _DBKey;
    // Name of this Node
    CATUnicodeString _Name;
    // Type of this Node
    CATUnicodeString _Type;
    // Area of this Node
    double           _dNodeArea;
    // Existing Percent Fill of this Node
    double           _dNodeExistingPFill;
    // List of Arcs connected to this Node
    CATLISTP(CATEcwLightNwkArcForPercentFill)  _pListOfCAANwkArc;
};

#endif
