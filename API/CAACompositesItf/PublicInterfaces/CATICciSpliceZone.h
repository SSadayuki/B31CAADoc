#ifndef CATICciSpliceZone_H
#define CATICciSpliceZone_H
//===================================================================
// COPYRIGHT Dassault Systemes 2013
//===================================================================
// CATICciSpliceZone.cpp
// Header definition of class CATICciSpliceZone
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

#include "CATIMmiMechanicalFeature.h"
#include "CATICciCompositesGeometry.h"
#include "CATICciPly.h"


#include "CATBaseUnknown.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf  IID IID_CATICciSpliceZone ;
#else
extern "C" const IID IID_CATICciSpliceZone ;
#endif

/**
 * Splice Zone Type.
 * <b>Role:</b> Identifies type of splice zone.
 * @param CciButtSpliceZone
 *    Butt Splice Zone
 * @param CciNoSpliceZone 
 *    No Splice Zone
 */ 
enum CATCciSpliceZoneType
{
	CciButtSpliceZone     = 0,  
	CciNoSpliceZone       = 1
};


/**
* Interface to SpliceZone Object.
* <br><b>Role</b>: SpliceZone object access methods 
* @href CATIButtCciSpliceZone,CATINoCciSpliceZone, CATICciSpliceZoneGroup,CATICciCompositesAdditionalDataFactory
*/

class ExportedByCAACompositesItf CATICciSpliceZone : public CATBaseUnknown
{
	CATDeclareInterface;

public:


	/**
	* Gets the type of the Splice Zone
	* @param oType
	*   The Splice Zone  type.
	*/
	virtual HRESULT GetSpliceZoneType(CATCciSpliceZoneType & oType) = 0;


	/**
	* Gets the reference shell .
	* @param oRefShell
	*    Reference shell surface.
	*/
	virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell) = 0;

	/**
	* Sets the reference shell .
	* <br> WARNING: This method modifies the part document.
	* @param iRefShell
	*    Reference shell surface.
	*/
	virtual HRESULT SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell) = 0;

	/**
	* Gets Splice Zone 's composites geometry.
	* @param oGeometry
	*   The splice zone composites geometry.
	* <br> NOTE: Composites geometry aggregateds Contour object , Contour required to share same Reference Sheel
	*/
	virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) = 0;

	/**
	* Retrieves SpliceZone's shell corresponding to the highlight area.
	* @param oShell
	*    The highlight shell.
	*    Gets NULL if the shell is not stored i.e. not computed or removed by user.
	*/
	virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) = 0;

	/**
	* Creates (or retrieves)SpliceZone's  shell corresponding to the highlight area.
	* <br> WARNING: This method modifies the part document.
	* @param oShell
	*    The created or retrieved highlight shell.
	*/
	virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) = 0;

	/**
	* Removes previous SpliceZone's  shell corresponding to the highlight area.
	* <br> WARNING: this method modifies the part document.
	*/
	virtual HRESULT RemoveHighlightShell() = 0;

	/**
	* Gets list of plies applied to Splice Zone.
	* <br> WARNING: this method modifies the part document.
    * @param oListOfPlies
	*    List of plies applied to Splice Zone 
	*/
	virtual HRESULT GetPliesAppliedToSpliceZone( CATLISTV(CATBaseUnknown_var)& oListOfPlies) = 0;

	/**
	* Sets	list of plies applied to Splice Zone.
	* <br> WARNING: this method modifies the part document.
    * @param iListOfPlies
	*    List of plies applied to Splice Zone 
	*    <br> BEWARE: pre-existing list od Plies is overwritten 
	*/
	virtual HRESULT SetPliesAppliedToSpliceZone( const CATLISTV(CATBaseUnknown_var)& iListOfPlies) = 0;

};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciSpliceZone, CATBaseUnknown );

#endif
