//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007 - 2014
//==============================================================================
//
// CATICciCoreSample :
//   Interface to manage a core sample operator.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciCoreSample (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciCoreSample_H
#define CATICciCoreSample_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciCoreSample;
#else
extern "C" const IID IID_CATICciCoreSample ;
#endif

class CATMathSetOfPointsNDWithVectors;
class CATSoftwareConfiguration;
/**
* Interface to run a Core Sample computation.
* <b>Role</b>: Allows to launch a Core Sample operator.
* @see CATCreateCoCoreSampleOper#CATCreateCciCoreSample to create the operator
*/
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciCoreSample: public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
    * Sets the documents to perform core sample operation.
    * @param iListOfParts
    *   The list of documents in which we want to perform core sample operation (CATPart only).
    * <br>Note : Each input element must adhere to @href CATILinkableObject interface.
    */
    virtual HRESULT SetParts(const CATLISTV(CATBaseUnknown_var) & iListOfParts) = 0;

    /**
    * Defines inputs to run core sample operator.
    * @param iPointsAndVectors
    *   The list of points and associated directions at which we want to perform core sample operation.
    * @param iImpTol
    *   The impact tolerance value i.e. the maximum distance which will be taken into account by the core sample operator before and after the point.
    * @param iNonStructural
    *   To determine whether nonstructural plies will be taken into account for core sampling values.
    *   <br><b>Legal values</b>:
    *   <ul>
    *      <li>FALSE when non-structural plies are neglected (default value).
    *      <li>TRUE when non-structural plies are included.
    *   </ul>
    */
    virtual HRESULT SetPoints(const CATMathSetOfPointsNDWithVectors & iPointsAndVectors, const double iImpTol, CATBoolean iNonStructural = FALSE) = 0;

    /**
    * Sets list of impacted plies (optional).
    * <br>If not called, the plies and cores will be retrieved from the given Parts (see @href #SetParts)
    * @param iListOfPlies
    *   The list of plies to be taken into account by core sample operator.
    * <br>Note : Each input element must adhere to one of the following interfaces : @href CATICciPly or @href CATICciCore.
    */
    virtual HRESULT SetPlies(const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfPlies) = 0;

    /**
    * Runs the core sample operator.
    * @param iRunType
    *   The core sample process mode.
    *   <br><b>Legal values</b>:
    *   <ul>
    *      <li>1: To run standard core sample process.
    *      <li>2: To compute theoritical fiber directions (rosette transfer).
    *      <li>3: To compute actual fiber directions (producibility computation).
    *   </ul>
    * @return
    *   An HRESULT value.
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The core sample has succeeded</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>The core sample has failed, the error can be retrieved by using @href CATError#CATGetLastError</dd>
    *   </dl>
    */
    virtual HRESULT Run(const int iRunType) = 0;

    /**
    * Retrieves core sample results for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oEntities
    *   The returned list of entities impacted by the core sample at the given point.
    *   <br>All returned entities adhere to @href CATICciPhysicalEntity interface.
    */
    virtual HRESULT GetResults(const int iPointIndex, CATLISTV(CATIMmiMechanicalFeature_var) & oEntities) = 0;

    /**
    * Retrieves core sample results for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oEntities
    *   The returned list of entities (ply and core) impacted by the core sample at the given point.
    *   <br>All returned entities adhere to @href CATICciPhysicalEntity interface.
    * @param oDirections1
    *   The returned list of coordinates of the first (warp) fiber direction of the entities impacted by the core sample at the given point.
    *	<br>Array of size = 3*NbEntities, where NbEntities is the size of the oEntities list.
    * @param oDirections2
    *   The returned list of coordinates of the second (weft) fiber direction of the entities impacted by the core sample at the given point.
    *	<br>Array of size = 3*NbEntities, where NbEntities is the size of the oEntities list.
    * @param oFiberOrientComputationDiagnostic
    *	The list of diagnostic values corresponding to the computation of fiber orientation of the entities impacted.
    *   <br><b>Legal values</b>:
    *   <ul>
    *		<li>0: Actual fiber directions (or theoretical fiber directions if iRunType = 2) are computed correctly.
    *		<li>1: Producibility parameters are not available on entity, so returns the theoretical fiber directions.
    *		<li>2: Actual fiber directions computation failed, so returns the theoretical fiber directions.
    *		<li>3: in case the impacted entity is a core (and default values for fiber directions).
    *		<li>4: if both computations failed (returns E_FAIL).
    *   </ul>
    */
    virtual HRESULT GetResultsForAnalysis(const int iPointIndex,
                                          CATLISTV(CATIMmiMechanicalFeature_var) & oEntities,
                                          double *& oDirections1,
                                          double *& oDirections2,
                                          CATListOfInt & oFiberOrientationComputationDiagnostic) = 0;

    /**
    * Retrieves core sample thickness for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oListEntityThickness
    *   The returned list of total thickness impacted by the core sample at the given point.
    */
    virtual HRESULT GetThickness(const int iPointIndex, CATListOfDouble & oListEntityThickness) = 0;

    /**
    * Retrieves core sample results for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oImpactedEntities
    *   returns list of entities impacted by the coresample at the given point.
    *   <br>All returned entities adhere to @href CATICciPhysicalEntity interface.
    * @param oDirections1
    *   returns list of simulated coordinates of the first (warp) fiber direction of the entities impacted at the given point.
    *	<br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    *   <br>returns NULL if fiber (warp & weft ) directions are theoretical.
    * @param oDirections2
    *   returns list of simulated coordinates of the second (weft) fiber direction of the entities impacted at the given point.
    *	<br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    *   <br>returns NULL if fiber (warp & weft ) directions are theoretical.
    * @param oFiberOrientComputationDiagnostic
    *	The list of diagnostic values corresponding to the computation of fiber orientation of the entities impacted.
    *   <br><b>Legal values</b>:
    *   <ul>
    *		<li>0: Actual fiber directions (or theoretical fiber directions if iRunType = 2) are computed correctly.
    *		<li>1: Producibility parameters are not available on entity, so returns the theoretical fiber directions.
    *		<li>2: Actual fiber directions computation failed, so returns the theoretical fiber directions.
    *		<li>3: in case the impacted entity is a core (and default values for fiber directions).
    *		<li>4: if both computations failed (returns E_FAIL).
    *   </ul>
    * @param oRosetteDirections1
    *   returns list of theorical coordinates of the transferred rosette X direction at the given point
    *   <br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    * @param oRosetteDirections2
    *   returns list of theorical coordinates of the transferred rosette Y direction at the given point
    *   <br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    * @param oDeviationAngles
    *   returns list of deviated angle of the impacted entities at the given point.
    *   <br>Array of size = Nbentities, where Nbentities is the size of the oImpactedEntities list.
    *   <br>returns NULL if fiber(warp & weft )directions are theoretical.
    */
    virtual HRESULT GetResultsForAnalysis(const int iPointIndex,
                                          CATLISTV(CATIMmiMechanicalFeature_var) & oImpactedEntities,
                                          double *& oDirections1,
                                          double *& oDirections2,
                                          CATListOfInt & oFiberOrientationComputationDiagnostic,
                                          double *& oRosette_X_Directions,
                                          double *& oRosette_Y_Directions,
                                          double *& oDeviationAngles) = 0;

	
    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------

    /**
    * @deprecated V5R26
    * Use @href #SetPlies overloaded method instead.
    * Sets list of impacted plies (optional).
    * <br>If not called, the plies and cores will be retrieved from the given Parts (see @href #SetParts)
    * @param iListOfPlies
    *   The list of plies to be taken into account by core sample operator.
    * <br>Note : Each input element must adhere to one of the following interfaces : @href CATICciPly or @href CATICciCore.
    */
    virtual HRESULT SetPlies(const CATLISTV(CATISpecObject_var) & iListOfPlies) = 0;

    /**
    * @deprecated V5R26
    * Use @href #GetResults overloaded method instead.
    * Retrieves core sample results for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oEntities
    *   The returned list of entities impacted by the core sample at the given point.
    *   <br>All returned entities adhere to @href CATICciPhysicalEntity interface.
    */
    virtual HRESULT GetResults(const int iPointIndex, CATLISTV(CATISpecObject_var) & oEntities) = 0;
	
    /**
    * @deprecated V5R26
    * Use @href #GetResultsForAnalysis overloaded method instead.
    * Retrieves core sample results for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oEntities
    *   The returned list of entities (ply and core) impacted by the core sample at the given point.
    *   <br>All returned entities adhere to @href CATICciPhysicalEntity interface.
    * @param oDirections1
    *   The returned list of coordinates of the first (warp) fiber direction of the entities impacted by the core sample at the given point.
    *	<br>Array of size = 3*NbEntities, where NbEntities is the size of the oEntities list.
    * @param oDirections2
    *   The returned list of coordinates of the second (weft) fiber direction of the entities impacted by the core sample at the given point.
    *	<br>Array of size = 3*NbEntities, where NbEntities is the size of the oEntities list.
    * @param oFiberOrientComputationDiagnostic
    *	The list of diagnostic values corresponding to the computation of fiber orientation of the entities impacted.
    *   <br><b>Legal values</b>:
    *   <ul>
    *		<li>0: Actual fiber directions (or theoretical fiber directions if iRunType = 2) are computed correctly.
    *		<li>1: Producibility parameters are not available on entity, so returns the theoretical fiber directions.
    *		<li>2: Actual fiber directions computation failed, so returns the theoretical fiber directions.
    *		<li>3: in case the impacted entity is a core (and default values for fiber directions).
    *		<li>4: if both computations failed (returns E_FAIL).
    *   </ul>
    */
    virtual HRESULT GetResultsForAnalysis(const int iPointIndex,
                                          CATLISTV(CATISpecObject_var) & oEntities,
                                          double *& oDirections1,
                                          double *& oDirections2,
                                          CATListOfInt & oFiberOrientationComputationDiagnostic) = 0;

	/**
    * @deprecated V5R26
    * Use @href #GetResultsForAnalysis overloaded method instead.
    * Retrieves core sample results for a given point.
    * @param iPointIndex
    *   The index of given point in previous list of type CATMathSetOfPointsNDWithVectors.
    * @param oImpactedEntities
    *   returns list of entities impacted by the coresample at the given point.
    *   <br>All returned entities adhere to @href CATICciPhysicalEntity interface.
    * @param oDirections1
    *   returns list of simulated coordinates of the first (warp) fiber direction of the entities impacted at the given point.
    *	<br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    *   <br>returns NULL if fiber (warp & weft ) directions are theoretical.
    * @param oDirections2
    *   returns list of simulated coordinates of the second (weft) fiber direction of the entities impacted at the given point.
    *	<br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    *   <br>returns NULL if fiber (warp & weft ) directions are theoretical.
    * @param oFiberOrientComputationDiagnostic
    *	The list of diagnostic values corresponding to the computation of fiber orientation of the entities impacted.
    *   <br><b>Legal values</b>:
    *   <ul>
    *		<li>0: Actual fiber directions (or theoretical fiber directions if iRunType = 2) are computed correctly.
    *		<li>1: Producibility parameters are not available on entity, so returns the theoretical fiber directions.
    *		<li>2: Actual fiber directions computation failed, so returns the theoretical fiber directions.
    *		<li>3: in case the impacted entity is a core (and default values for fiber directions).
    *		<li>4: if both computations failed (returns E_FAIL).
    *   </ul>
    * @param oRosetteDirections1
    *   returns list of theorical coordinates of the transferred rosette X direction at the given point
    *   <br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    * @param oRosetteDirections2
    *   returns list of theorical coordinates of the transferred rosette Y direction at the given point
    *   <br>Array of size = 3*Nbentities, where Nbentities is the size of the oImpactedEntities list.
    * @param oDeviationAngles
    *   returns list of deviated angle of the impacted entities at the given point.
    *   <br>Array of size = Nbentities, where Nbentities is the size of the oImpactedEntities list.
    *   <br>returns NULL if fiber(warp & weft )directions are theoretical.
    */
    virtual HRESULT GetResultsForAnalysis(const int iPointIndex,
                                          CATLISTV(CATISpecObject_var) & oImpactedEntities,
                                          double *& oDirections1,
                                          double *& oDirections2,
                                          CATListOfInt & oFiberOrientationComputationDiagnostic,
                                          double *& oRosette_X_Directions,
                                          double *& oRosette_Y_Directions,
                                          double *& oDeviationAngles) = 0;

    //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    //
    //               N O N - C A A             M E T H O D S
    //
    //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    /**
    * @nodoc
    * DO NOT USE.
    */
    virtual HRESULT SetSoftwareConfiguration(CATSoftwareConfiguration * iConfig) = 0;

    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};

CATDeclareHandler(CATICciCoreSample, CATBaseUnknown);
//------------------------------------------------------------------

#endif
