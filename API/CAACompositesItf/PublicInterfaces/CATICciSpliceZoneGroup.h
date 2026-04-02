#ifndef CATICciSpliceZoneGroup_H
#define CATICciSpliceZoneGroup_H
//===================================================================
// COPYRIGHT Dassault Systemes 2013
//===================================================================
// CATICciSpliceZoneGroup.cpp
// Header definition of class CATICciSpliceZoneGroup
//===================================================================
//
// Usage notes:
//
//===================================================================

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf  IID IID_CATICciSpliceZoneGroup ;
#else
extern "C" const IID IID_CATICciSpliceZoneGroup ;
#endif

/**
 * Splice Zone Group Type.
 * <b>Role:</b> Identifies type of splice zone group.
 * @param CciButtSpliceZoneGroup
 *    Splice Zone Group contains only Butt Splice Zone
 * @param CciNoSpliceZoneGroup 
 *    Splice Zone Group contains only No Splice Zone
 */ 
enum CATCciSpliceZoneGroupType
{
	CciButtSpliceZoneGroup       = 0,  
	CciNoSpliceZoneGroup         = 1, 
};

/**
* Interface to SpliceZoneGroup Object.
* <br><b>Role</b>: SpliceZoneGroup object access methods 
* <br> SpliceZoneGroup is a tool aggregated under the Stacking that contain either all ButtSpliceZone or All NoSpliceZone
* <br> To Get SpliceZoneGroup:  Get elements under stacking , identify Splice Zone Group thanks to present interface.
* @example
*    CATLISTV(CATBaseUnknown_var) ListOfElements;
*    rc = Stacking->GetElementsUnderStacking( ListOfElements );
*	if( SUCCEEDED(rc))	{ 
*		for(int ii =1; ii<= ListOfElements.Size();ii++ )		{
*
*			CATICciSpliceZoneGroup_var spSpliceZoneGroup = ListOfElements[ii] ; 
*			if (NULL_var != spSpliceZoneGroup) 
*			{ 
*				......	
*			}
*		}	// End loop on elements under stacking  
*	}
*	
* @href CATICciStacking, CATICciStacking#GetElementsUnderStacking, CATICciSpliceZone 
*/
class ExportedByCAACompositesItf CATICciSpliceZoneGroup : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Gets the type of the Splice Zone Group 
	* @param oType
	*   The Splice Zone Group  type.
	*/
	virtual HRESULT GetSpliceZoneGroupType(CATCciSpliceZoneGroupType & oType) = 0;

	/**
	* Gets the list of SpliceZones in  the group of plies.
	* @param oListOfSequences
	*   The list of sequences (CATICciSpliceZone).
	*/
	virtual HRESULT GetSpliceZones(CATLISTV(CATIMmiMechanicalFeature_var)& oListOfSpliceZones) = 0;

};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciSpliceZoneGroup, CATBaseUnknown );

#endif
