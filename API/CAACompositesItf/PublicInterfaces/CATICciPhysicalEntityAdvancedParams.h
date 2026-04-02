#ifndef CATICciPhysicalEntityAdvancedParams_H
#define CATICciPhysicalEntityAdvancedParams_H
//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2010
//===================================================================
// CATICciPhysicalEntityAdvancedParams.cpp
// Header definition of class CATICciPhysicalEntityAdvancedParams
//===================================================================
//
// Usage notes:
//
//===================================================================
/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

#include "CATICciPhysicalEntity.h"
extern ExportedByCAACompositesItf  IID IID_CATICciPhysicalEntityAdvancedParams ;

/**
 * Interface to design a component management for external paramter associated to a composite physical entity.
 * <b>Role</b>: Defines a protocol for CATIA Composites Interactive Ply Table to be able to display external parameter associated to physical entity.
 * <br> Target physical entities are plies or cut-pieces.
 * @see CATICciPhysicalEntity,  @see CATICciPly ,  @see CATICciCutPiece
 */
class ExportedByCAACompositesItf CATICciPhysicalEntityAdvancedParams: public CATBaseUnknown
{
CATDeclareInterface;

public:

    /** 
    * Gets the component name. 
    * @param oComponentId
    *   Id associated to the component 
    * @param oNLSComponentId
    *   NLS string asssociated with the Id associated to the component 
    */ 
    virtual HRESULT GetNameOfComponent       (CATUnicodeString & oComponentId, CATUnicodeString & oNLSComponentId) = 0; 

    /**
    * Gets the list of External parameter with their type.
    * @param oListOfParameterNames
    *   List of parameter associate to component , that can be recover on the physicalEntities (plies and/or Cut-pieces) 
     */
    virtual HRESULT GetListOfParametersInfos (CATListOfCATUnicodeString &oListOfParameterNames)=0 ; 

    /**
    * Gets the parameter valuation. 
    * @param ispPlyEntity
    *   PhysicalEntities (plies and/or Cut-pieces) on witch a parameter is queried  
    * @param iParameterName
    *   Parameter's name 
    * @param oHasAValue 
    *   A value has been found associated to the parameter on the Physical entity 
    * <ul>
    * <li> = 0  , no value associated to the parameter on the physicalEntity found </li>
    * <li> = 1  , parameter exists and has a value  </li>
    * </ul>
    * @param oValueAsString
    *   Parameter value, value is returned  as a formated string ready to be displayed. 
    * <br> Note : rc= E_FAIL, whenever  the ParameterName is not valid for the component  
    */
    virtual HRESULT GetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, int & oHasAValue, CATUnicodeString &oValueAsString) = 0; 

    /**
    * Sets the parameter valuation. 
    * @param ispPlyEntity
    *    PhysicalEntities (plies and/or Cut-pieces) on witch a parameter value is about to be modified  
    * @param iParameterName
    *    Paramter's name 
    * @param iValueAsString
    *   Parameter value, value has to be a formated string ready pass to data modeler implementation. 
    * @param oIsValuated
    *   A value has been  set or not on the associated to the parameter on the Physical entity 
    * <ul>
    * <li> = 0  , no value associated to the parameter  </li>
    * <li> = 1  , parameter has been correctly valuated with iValueAsString  </li>
    * </ul>
    * <br> Note : rc= E_FAIL, whenever  the ParameterName is not valid for the component  
    */
    virtual HRESULT SetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, const CATUnicodeString iValueAsString, int & oIsValuated) = 0; 

};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciPhysicalEntityAdvancedParams, CATBaseUnknown );

#endif
