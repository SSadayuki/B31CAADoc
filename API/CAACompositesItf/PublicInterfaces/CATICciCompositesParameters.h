#ifndef CATICciCompositesParameters_H
#define CATICciCompositesParameters_H

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciCompositesParameters :
//   Interface to manage composites parameters feature.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciCompositesParameters (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATICciRosette.h"
#include "CATICciMaterialCache.h"
#include "CATLISTV_CATICciRosette.h"

class CATIDocId_var;
class CATICkeParm_var;
class CATICciManufacturingParameters_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciCompositesParameters;
#else
extern "C" const IID IID_CATICciCompositesParameters;
#endif


/**
* Interface of Composites parameters.
* <b>Role</b>: Allows to access data of Composites parameter feature, that enables to
* manage available materials and fiber directions.
*/
class ExportedByCAACompositesItf CATICciCompositesParameters : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
    * Gets the number of Material cache features.
    * @param oNbMatCache
    *   Number of Material cache features available in the composites parameters
    */
    virtual HRESULT GetNumberOfMaterialCache (int & oNbMatCache) = 0;

    /**
    * Gets the Material cache feature of index iMatCacheIndex.
    * @param iMatCacheIndex
    *   The index of querried Material cache feature.
    *   1 <= iDirIndex <= Number of Material cache.
    * @param oMatCache
    *   The Material cache feature.
    */
    virtual HRESULT GetMaterialCache (int iMatCacheIndex, 
        CATICciMaterialCache_var & oMatCache) = 0;

    /**
    * Adds a Material cache feature at the end of the list of Material cache.
    * @param iMaterial
    *   The material to attach with added Material cache feature.
    */
    virtual HRESULT AddMaterialCache (const CATIMaterialFeature_var & iMaterial) = 0;

    /**
    * Removes a Material cache feature.
    * @param iMatCache
    *   The Material cache feature to remove.
    */
    virtual HRESULT RemoveMaterialCache (CATICciMaterialCache_var & iMatCache) = 0;

    /**
    * Gets the number of directions.
    * @param oNbDirections
    *   Number of directions available in the composites parameters
    */
    virtual HRESULT GetNumberOfDirections(int & oNbDirections) = 0;

    /**
    * Gets a direction and its corresponding name, value and color.
    * @param iDirIndex
    *   Index of the direction wanted
    *	 1 <= iDirIndex <= Number of directions
    * @param oNameAndValue
    *	 Knowledgeware parameter containing the name and the value of the direction
    * @param oColorRed
    *	 Red value of the direction color
    * @param oColorGreen
    *	 Green value of the direction color
    * @param oColorBlue
    *	 Blue value of the direction color
    */
    virtual HRESULT GetDirection(int iDirIndex, 
        CATICkeParm_var & oNameAndValue,
        int & oColorRed,
        int & oColorGreen,
        int & oColorBlue) = 0;

    /**
    * Adds a direction at the end of the list of directions.
    * @param iNameAndValue
    *	 Knowledgeware parameter containing the name and the value of the direction
    * @param iColorRed
    *	 Red value of the direction color
    * @param iColorGreen
    *	 Green value of the direction color
    * @param iColorBlue
    *	 Blue value of the direction color
    */
    virtual HRESULT AddDirection(const CATICkeParm_var & iNameAndValue,
        int iColorRed,
        int iColorGreen,
        int iColorBlue) = 0;

    /**
    * Removes a direction from the list of directions.
    * @param iDirIndex
    *   Index of the direction to remove
    */
    virtual HRESULT RemoveDirection (int iDirIndex) = 0;

	 /**
    * Gets the list of rosettes.
    * @param oRosetteList
    *   List of Rosettes
    */
    virtual HRESULT GetListOfRosettes( CATLISTV(CATICciRosette_var) &oRosetteList ) const = 0;

    /**
    * Removes a rosette.
    * @param ispRosette
    *   Rosette to be deleted
    */
    virtual HRESULT RemoveRosette( const CATICciRosette_var &ispRosette) = 0;

    /**
    * Creates a new rosette.
    * @param ospRosette
    *   The new rosette which was created
    */
    virtual HRESULT CreateRosette( CATICciRosette_var &ospRosette ) = 0;
 
    // ====================================================================================
    // DO NOT USE
    // ====================================================================================
    /**
    * @deprecated V5R18
    * Replace by @href #GetMaterialCache method.
    */
    virtual HRESULT GetMaterialCatalog(CATIDocId_var & oMaterialCatalog) = 0;

    /**
    * @deprecated V5R18
    * Replace by @href #AddMaterialCache method.
    */
    virtual HRESULT SetMaterialCatalog(const CATIDocId_var & iMaterialCatalog) = 0;




};

CATDeclareHandler(CATICciCompositesParameters, CATBaseUnknown);

#endif
