//===================================================================
// COPYRIGHT Dassault Systemes 2021
//===================================================================
// CATICciCoreSample2.h
// Header definition of class CATICciCoreSample2
//===================================================================
// Usage Notes : @nodoc
//-------------------------------------------------------------------
//  Inheritance :   CATICciCoreSample2 (CAACompositesItf FW)
//                     CATICciCoreSample (CAACompositesItf FW)
//                        CATBaseUnknown        (System FW)
//===================================================================
//  2021/23/04 Creation: NLE5
//===================================================================
#ifndef CATICciCoreSample2_H
#define CATICciCoreSample2_H

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CAACompositesItf.h"
#include "CATICciCoreSample.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciCoreSample2 ;
#else
extern "C" const IID IID_CATICciCoreSample2;
#endif


class ExportedByCAACompositesItf CATICciCoreSample2 : public CATICciCoreSample
{
	CATDeclareInterface;

public:

	/**
	* @nodoc
	*
	* NOTE: For CXR31 this method is available from SP4 onwards. From CXR32 onwards this will be moved in CAACompositesItf\PublicInterfaces\CATICciCoreSample.h
	*
	* Retrieves relative position of impacted entities of CS point with respect to given reference surface.
	* NOTE: This method must be called after successful operator run.
	* @param iPointIndex
	*   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors (which is set using SetPoints(..) method).
	* @param ispRefSurface
	*   The Reference surface with respect which relative position is to be computed.
	*   NOTE: The surface must be support surface of any of the given entities to the operator.
	* @param oPositionInfo
	*   The returns list of integers filled with +1/-1 representing each impacted entity’s position with respect to given reference surface.
	*   For a given reference surface the normal is computed at a given point.
	*   Considering layup if entities are along this computed normal direction then position info will be valuated as +1 else -1.
	*   NOTE: Position information list is filled by considering each impacted entity at considered core sample point.
	*         So sequence of impacted entities and position information is maintained
	*/
	virtual HRESULT RetrievePositionInformationOfEntities(int iPointIndex, const CATIMmiMechanicalFeature_var& ispRefSurface, CATListOfInt& oPositionInfo) = 0;

	/**
	* @nodoc
	*
	* NOTE: For CXR31 this method is available from SP4 onwards. From CXR32 onwards this will be moved in CAACompositesItf\PublicInterfaces\CATICciCoreSample.h
	*
	* Sets whether to consider layup while ordering impacted entities of each CS point.
	* @param ibConsiderLayupForOrdering
	*			Legal values:
	*			TRUE: Considering layup, the impacted entities of each CS point will be ordered as per distance from top of CS line.
	*				  NOTE: Top of CS line is a point at a distance of CS range from the CS point, along the given normal direction.
	*			FALSE: Ordering of impacted entities will be as per input given to the operator(default value while running the operator).
	*/
	virtual HRESULT SetLayupConsiderationToOrderImpactedEntities(CATBoolean ibConsiderLayupForOrdering) = 0;
};

//-----------------------------------------------------------------------
CATDeclareHandler(CATICciCoreSample2, CATICciCoreSample);

#endif

