#ifndef CATSamToolsForExplicitation_h
#define CATSamToolsForExplicitation_h
//=============================================================================
// COPYRIGHT Dassault Systemes 2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATAnalysisResources.h"
#include "IUnknown.h"
class CATISamAnalysisSet;
class CATIContainer;
class CATAnalysisExplicitAxis;
class CATAnalysisExplicitParent;
class CATISpecObject;

/**
 * Global Services to help explicitation.<br>
 */

class ExportedByCATAnalysisResources CATSamToolsForExplicitation
{

 public:

/** 
 *  Logs the creation of an Explicit Axis.
 *  This feature must be used in order log the creation of an CATAnalysisExplicitAxis
 *  when this creation is done during the explicitation of an boundary condition, load or property.
 *  The axis life cyle is manage by the feature that manage the explicitation (By including the
 *  entity in the NewExplicitlist of CATISamExplicitation after calling the UpdateExplicitList). But to be collected under the axis feature set, 
 *  the axis must be also given to this Global Method. 
 *  @param piAxisSet the AxisSet feature.
 *  @param iAxis the explicit axis created.<p>
 *  This explicit axis must be created with the explicit object associated to piAxisSet as parent.
 */
		static HRESULT LogImplicitAxis(const CATISamAnalysisSet* piAxisSet,
                                   const CATAnalysisExplicitAxis &iAxis);
  
/** 
 * Returns the feature that have created an object.
 * @param iParent The explicitobject to search.
 * @param ipiCont The container in which the feature will be searched.
 * @return CATBaseUnknown#Release
 */ 
		static CATISpecObject* GetParentFeature(const CATAnalysisExplicitParent &iParent,
                                            const CATIContainer *ipiCont);

 private:
  CATSamToolsForExplicitation() {};

};

#endif
