#ifndef CATMSHExtIOpenSmartSurf_H
#define CATMSHExtIOpenSmartSurf_H


// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATIMSHOpenSmartSurf.h"

class CATIMSHMeshPart;

//-----------------------------------------------------------------------

/**
 * Adapter from the CATIMSHOpenSmartSurf interface. 
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHOpenSmartSurf.
 * That means one should derive from this class to implement one or more of the
 * four method defined by the interface and representing users exit to specify and
 * modify topology simplification or mesh.
 * @see CATIMSHOpenSmartSurf, CATIMSHMeshPart
 */
class ExportedByMSHGeomTools CATMSHExtIOpenSmartSurf: public CATBaseUnknown
{
  
public:

 /**
  *  Constructor.
	*/
	CATMSHExtIOpenSmartSurf ();
	
 /**
	*  Destructor.
	*/
	virtual ~CATMSHExtIOpenSmartSurf ();
	
 /** 
	* User exit in order to specify topology.
	*/
	HRESULT SpecifyTopology ( CATIMSHMeshPart * MeshPart );
	
 /**
	* User exit in order to modify topology after automatic
	* simplification.
	*/
	HRESULT ModifyTopology ( CATIMSHMeshPart * MeshPart ); 
		
 /** 
	* User exit in order to specify mesh ( specify mesh method
	* in each mesh area).
	*/
	HRESULT SpecifyMesh ( CATIMSHMeshPart * MeshPart );
};

//-----------------------------------------------------------------------

#endif
