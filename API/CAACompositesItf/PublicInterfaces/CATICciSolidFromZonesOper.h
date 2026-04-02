#ifndef CATICciSolidFromZonesOper_H
#define CATICciSolidFromZonesOper_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciSolidFromZonesOper :
//   Interface to generate a solid from zones.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciSolidFromZonesOper (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"

class CATICciZonesGroup_var;
class CATISpecObject_var;
class CATDocument;
class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciSolidFromZonesOper;
#else
extern "C" const IID IID_CATICciSolidFromZonesOper;
#endif

// Types of solid from zones:
// - WithTranzitionZones: solid is created taking the solid from zones into account
// - WithoutTranzitionZones: solid is created without taking the solid from zones into account
enum SolidFromZonesType {WithTransitionZones, WithoutTransitionZones};

/**
 * Interface to generate a solid from zones.
 * <ul>
 * <li> Release this interface when it is no longer needed.
 */ 

class ExportedByCAACompositesItf CATICciSolidFromZonesOper : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
 	/**
     * Sets the document in which the solid will be created.
     * @param iDocument
     *	The document which the solid will be created
	 *  Note: it must be a CATPart document
     */
    virtual HRESULT SetDocument(CATDocument * iDocument) = 0;
	
	/**
     * Sets the group of zones for which the solid will be created.
     * @param iZonesGroup
     *	The zones group on which the solid will be created
     */
    virtual HRESULT SetZonesGroup(const CATICciZonesGroup_var & iZonesGroup) = 0;

    /**
     * Sets the solid type.
     * @param iType
     *	Solid type i.e. WithTranzitionZones or WithoutTranzitionZones
     */
    virtual HRESULT SetSolidType(SolidFromZonesType iType) = 0;

    /**
     * Computes the solid from zones from the given zones group
     * @param oSolid
     *	Computed solid 
	 * Note: oSolid is aggregated in the part under a new body
     */
	virtual HRESULT Run(CATIMmiMechanicalFeature_var & oSolid) = 0;

   /**
	 * @deprecated V5R26 
	 * Use @see #Run(CATIMmiMechanicalFeature_var&) method instead.
	 * Computes the solid from zones from the given zones group
     * @param oSolid
     *	Computed solid spec
	 * Note: oSolid is aggregated in the part under a new body
     */
	virtual HRESULT Run(CATISpecObject_var & oSolid) = 0;
};

CATDeclareHandler(CATICciSolidFromZonesOper, CATBaseUnknown);

#endif
