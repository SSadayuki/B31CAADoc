// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATICciCompositesDataFactory.h
// Define the CATICciCompositesDataFactory interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
// 07-25-2003 Cre                                                       gsk
//===================================================================
#ifndef CATICciCompositesDataFactory_H
#define CATICciCompositesDataFactory_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

//-------------------------------------------------CAACompositesItf
#include "CATICciZonesGroup.h"
#include "CATICciZone.h"
#include "CATICciPliesGroup.h"
#include "CATICciSequence.h"
#include "CATICciPly.h"
#include "CATICciCore.h"
#include "CATICciEdgeOfPart.h"
#include "CATICciCompositesParameters.h"
//-------------------------------------------------MechanicalModeler
#include "CATIMmiMechanicalFeature.h"

//-------------------------------------------------ObjectSpecsModeler
#include "CATISpecObject.h"
//-------------------------------------------------ObjectModelerBase
//#include "CATDocument.h"

//-------------------------------------------------ObjectSpecsModeler
#include "CATUnicodeString.h"
#include "CATIMf3DAxisSystem.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciCompositesDataFactory;
#else
extern "C" const IID IID_CATICciCompositesDataFactory ;
#endif

//------------------------------------------------------------------

/**
* Factory of all features of Composites workshop.
* <b>Role</b>: Creation of all Composites features inside this part container.
* <p> Note: If the creation fails, the methods return NULL_var.
*/
class ExportedByCAACompositesItf CATICciCompositesDataFactory: public CATBaseUnknown
{
    CATDeclareInterface;
public:

    /**
    * Gets the composites parameters created in the document.
    * @param oParameters
    *     The created composites parameters feature
    */
    virtual HRESULT CreateCompositesParameters
        (CATICciCompositesParameters_var & oParameters ) = 0;

    /**
    * Gets the ZonesGroup created in the document.
    * @param iZoneGpName
    *     Name of the ZonesGp to be created.
    * @param iSurface
    *     The surface on which the Zones Group would be created.
    * @param iDrapingDir
    *     The Draping direction.
    * @param iRosette
    *     The Rosette.
    */
    virtual CATICciZonesGroup_var CreateZonesGroup( const CATUnicodeString &iZoneGpName,
        CATIMmiMechanicalFeature_var iSurface,
        CATBoolean iDrapingDir,
        CATIMf3DAxisSystem_var iRosette ) = 0;

    /**
    * Gets the Zone created in the document.
    * @param iZoneName
    *     Name of the zone to be created.
    * @param iZonesGroup
    *     The Zones Group under which the zone would be created.
    */
    virtual CATICciZone_var CreateZone( const CATUnicodeString &iZoneName,
        CATICciZonesGroup_var iZonesGroup ) = 0;

    /**
    * Gets the PliesGroup created in the document.
    * @param iPliesGpName
    *     Name of the ZonesGp to be created.
    * @param iSurface
    *     The surface on which the Zones Group would be created.
    * @param iDrapingDir
    *     The Draping direction.
    * @param iRosette
    *     The Rosette.
    */
    virtual CATICciPliesGroup_var CreatePliesGroup( const CATUnicodeString &iPliesGpName,
        CATIMmiMechanicalFeature_var iSurface,
        CATBoolean iDrapingDir,
        CATIMf3DAxisSystem_var iRosette ) = 0;

    /**
    * Gets the sequence.
    * @param iSeqName
    *     Name of the sequence  to be created.
    * @param iFather
    *     Sequence would be created after iFather, father of a sequence should be a PliesGroup 
    */
    virtual CATICciSequence_var CreateSequence( const CATUnicodeString &iSeqName,
        CATIMmiMechanicalFeature_var iFather ) = 0;

    /**
    * Gets the Ply created in the document.
    * @param iPlyName
    *     Name of the core to be created.
    * @param iFather
    *     Ply would be created after iFather. 
    * <br> Note: Father can be PliesGroup or Sequence, in any case a ply is created under a pliesGroup 
    *  because ply requires to aggregates under a sequence, a sequence is created by default 
    * (PliesGroup -> Sequence-> Ply)
    */
    virtual CATICciPly_var CreatePly( const CATUnicodeString &iPlyName,
        CATIMmiMechanicalFeature_var iFather ) = 0;

    /**
    * Gets the Core created in the document.
    * @param iCoreName
    *     Name of the core to be created.
    * @param iFather
    *     Core would be created after iFather
    */
    virtual CATICciCore_var CreateCore( const CATUnicodeString &iCoreName,
        CATIMmiMechanicalFeature_var iFather ) = 0;

    //--------------------------------------------------------------------------------------------------
    /**
    * @nodoc 
    * Migrates current part document to "best so far data" model.
    * <br>
    * <br> WARNING:This method modifies the part, the part needs to be updated after migration 
    */
    virtual HRESULT Migrate () = 0;

    //--------------------------------------------------------------------------------------------------
    /**
    * Creates the EEOP feature under EOP Group.
    * @param oEEOP.
    * returns the created EEOP
    */
    virtual HRESULT CreateEEOP(CATICciEdgeOfPart_var & oEEOP) =0;

    /**
    * Creates the MEOP feature under EOP Group.
    * @param oMEOP.
    * returns the created MEOP
    */
    virtual HRESULT CreateMEOP(CATICciEdgeOfPart_var & oMEOP) =0;
    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------

    /**
    * @deprecated V5R26 
    * Use @see #CreateZonesGroup overloaded method instead.
    * Gets the ZonesGroup created in the document.
    * @param iZoneGpName
    *     Name of the ZonesGp to be created.
    * @param iSurface
    *     The surface on which the Zones Group would be created.
    * @param iDrapingDir
    *     The Draping direction.
    * @param iRosette
    *     The Rosette.
    */
    virtual CATICciZonesGroup_var CreateZonesGroup( const CATUnicodeString &iZoneGpName,
        CATISpecObject_var iSurface,
        CATBoolean iDrapingDir,
        CATISpecObject_var iRosette ) = 0;

    /**
    * @deprecated V5R26 
    * Use @see #CreatePliesGroup overloaded method instead.
    * Gets the PliesGroup created in the document.
    * @param iPliesGpName
    *     Name of the ZonesGp to be created.
    * @param iSurface
    *     The surface on which the Zones Group would be created.
    * @param iDrapingDir
    *     The Draping direction.
    * @param iRosette
    *     The Rosette.
    */
    virtual CATICciPliesGroup_var CreatePliesGroup( const CATUnicodeString &iPliesGpName,
        CATISpecObject_var iSurface,
        CATBoolean iDrapingDir,
        CATISpecObject_var iRosette ) = 0;

    /**
    * @deprecated V5R26 
    * Use @see #CreatePly overloaded method instead.
    * Gets the Ply created in the document.
    * @param iPlyName
    *     Name of the core to be created.
    * @param iFather
    *     Ply would be created after iFather
    */
    virtual CATICciPly_var CreatePly( const CATUnicodeString &iPlyName,
        CATISpecObject_var iFather ) = 0;

    /**
    * @deprecated V5R26 
    * Use @see #CreateCore overloaded method instead.
    * Gets the Core created in the document.
    * @param iCoreName
    *     Name of the core to be created.
    * @param iFather
    *     Core would be created after iFather
    */
    virtual CATICciCore_var CreateCore( const CATUnicodeString &iCoreName,
        CATISpecObject_var iFather ) = 0;

};

//------------------------------------------------------------------
CATDeclareHandler( CATICciCompositesDataFactory, CATBaseUnknown);
#endif
