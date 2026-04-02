#ifndef CATICoCoreSampleOper_H
#define CATICoCoreSampleOper_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICoCoreSampleOper :
//   Class defining the operator that performs a core sample
//   in a composites part.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICoCoreSampleOper (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICoCoreSampleOper;
#else
extern "C" const IID IID_CATICoCoreSampleOper;
#endif

class CATSoftwareConfiguration;
class CATUnicodeString;
class CATDocument;
class CATMathSetOfPointsNDWithVectors;

/**
 * Core Sampling.
 * <br><b>Role</b>: Class defining the operator that performs a core sample in a composites part. 
 * <ul>
 *    <li> Create the operator with the global function <tt>CATCreateCoCoreSampleOper</tt>
 *    <li> Run with the <tt>Run</tt> method
 *    <li> Get the results with the corresponding methods.
 *    <li> Release this interface when it is no longer needed.
 * </ul>
 */ 
class ExportedByCAACompositesItf CATICoCoreSampleOper : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
   /**
   * Defines the component inputs.
   * @param iDocument
   *     The document in which to perform core sample (CATPart only).
   * @param iPointsAndVectors
   *     The points at which to perform a core sample and associated directions in which
   * to perform the core samples.
   * @param iImpTol
   *     The impact tolerance value i.e. the maximum distance which will be taken into
   *     account by the core sample before and after the point.
   * @param iNonStructural
   *   To determine whether nonstructural plies will be taken for core sampling values.
   *   <br><b>Legal values</b>: 
   *   <ul>
   *      <li>FALSE when non-structural plies are neglected (default value). 
   *      <li>TRUE when non-structural plies are included. 
   *   </ul>
   */
   virtual HRESULT SetInputs(CATDocument * iDocument,
      const CATMathSetOfPointsNDWithVectors & iPointsAndVectors,
      double iImpTol,
      CATBoolean iNonStructural = FALSE) = 0;

   /**
   * Defines the component inputs.
   * @param iDocument
   *  The document in which to perform core sample (CATPart only).
   * @param iPointsAndVectors
   *  The points at which to perform a core sample and associated directions in which
   *  to perform the core samples.
   * @param iImpTol
   *   The impact tolerance value i.e. the maximum distance which will be taken into
   *   account by the core sample before and after the point.
   * @iListOfPlies
   *   List of plies to be taken into during core sample computation.
   * @param iNonStructural
   *   To determine whether nonstructural plies will be taken for core sampling values.
   *   <br><b>Legal values</b>: 
   *   <ul>
   *      <li>FALSE when non-structural plies are neglected (default value). 
   *      <li>TRUE when non-structural plies are included. 
   *   </ul>
   */
   virtual HRESULT SetInputs(CATDocument * iDocument,
      const CATMathSetOfPointsNDWithVectors & iPointsAndVectors,
      double iImpTol,
      const CATLISTV(CATBaseUnknown_var) &iListOfPlies,
      CATBoolean iNonStructural = FALSE) = 0;

   /**
   * Runs the operator.
   * @return
   * An HRESULT. The error can be retrieved by using CATGetLastError.
   */
   virtual HRESULT Run() = 0;

   /**
   * Retrieves the number of plies for each core sampling point.
   * @param iPointIndex
   *  The index of the core sampling point to be considered
   *  (0 <= iPointIndex < NbPoints)
   * @param ioNbPlies
   *  The number of plies impacted by the core sample at the given point.
   */
   virtual HRESULT GetNumberOfEntities(int iPointIndex, int & oNbEntities) = 0;

   /**
   * Retrieves the core sample information for a given point.
   * @param iPointIndex
   *		The index of the core sampling point to be considered
   *		(0 <= iPointIndex < NbPoints)
   * @param ioSequenceNames
   *		The list of sequences impacted by the core sample at the given point.
   * @param ioEntityNames
   *		The list of entities (ply or core) impacted by the core sample at the given point.
   * @param ioEntityTypes
   *		The list of entity types (1:ply or 2:core) of the entities impacted by the core sample
   *		at the given point.
   * @param ioMaterials
   *		The list of materials of the entities impacted by the core sample at the given point.
   * @param ioEntityThicknesses
   *		The list of thicknesses of the entities impacted by the core sample at the given point.
   * @param ioDirections
   *		The list of directions (e.g. 0 or 45 degrees) corresponding to the entities impacted
   *		by the core sample at the given point.
   * @param ioLocalRosetteNames
   *		The list of rosettes names corresponding to the entities impacted by the core sample
   *		at the given point.
   * @param ioLocalRosetteCoords
   *		The list of coordinates of the rosettes corresponding to the entities impacted by
   *		the core sample at the given point.
   *		Array of size = 3*3*NbEntities, where NbEntities is the result of GetNumberOfEntities.
   * @param oReferenceElements
   *		The list of reference elements (surface or solid) of the entities impacted by the
   *		core sample.
   * @param oDrapingDirs
   *		The list of draping directions (0 or 1) of the plies impacted by the core sample.
   */
   virtual HRESULT GetResults(int iPointIndex,
      CATLISTV(CATUnicodeString) &	oSequenceNames,
      CATLISTV(CATUnicodeString) &	oEntityNames,
      CATListOfInt &				oEntityTypes,
      CATLISTV(CATBaseUnknown_var)& oMaterials,
      CATListOfDouble &			oEntityThicknesses,
      CATListOfDouble &			oDirections,
      CATLISTV(CATUnicodeString) &	oLocalRosetteNames,
      double *&					oLocalRosetteCoords,
      CATLISTV(CATBaseUnknown_var)& oReferenceElements,
      CATListOfInt &				oDrapingDirs) = 0;

   /**
   * Retrieves the core sample information for a given point.
   * @param iPointIndex
   *		The index of the core sampling point to be considered
   *		(0 <= iPointIndex < NbPoints)
   * @param oSequenceNames
   *		The list of sequences impacted by the core sample at the given point.
   * @param oEntityNames
   *		The list of entities (ply or core) impacted by the core sample at the given point.
   * @param oEntityTypes
   *		The list of entity types (1:ply or 2:core) of the entities impacted by the core sample
   *		at the given point.
   * @param oMaterials
   *		The list of materials of the entities impacted by the core sample at the given point.
   * @param oEntityThicknesses
   *		The list of thicknesses of the entities impacted by the core sample at the given point.
   * @param oDirections1
   *		The list of coordinates of the first (warp) fiber direction of the entities impacted by
   *		the core sample at the given point.
   *		Array of size = 3*NbEntities, where NbEntities is the result of GetNumberOfEntities.
   * @param oDirections2
   *		The list of coordinates of the second (weft) fiber direction of the entities impacted by
   *		the core sample at the given point.
   *		Array of size = 3*NbEntities, where NbEntities is the result of GetNumberOfEntities.
   * @param oReferenceElements
   *		The list of reference elements (surface or solid) of the entities impacted by the
   *		core sample.
   * @param oDrapingDirs
   *		The list of draping directions (0 or 1) of the plies impacted by the core sample.
   * @param oFiberOrientComputationDiagnostic
   *		The list of diagnostic values corresponding to the computation of the actual fiber orientation
   *		of the entities impacted by the core sample.
   *		0: actual fiber directions were computed correctly (or theoretical fiber directions if iActualOrientations = FALSE)
   *		1: producibility parameters were not available on entity, so theoretical fiber directions are returned
   *		2: actual fiber directions computation failed, so theoretical fiber directions are returned
   *		3: actual fiber directions AND theoretical fiber directions computations failed (e.g. rosette transfer issue)
   * @param iActualOrientations
   *		To force computation of actual fiber directions at the core sample point. 
   *		If actual fiber directions could not be computed for a ply its theoretical directions are returned.
   *		<br> WARNING: Producibility parameters need to be stored under each ply to obtain actual fiber directions.
   */
   virtual HRESULT GetResultsForAnalysis(  int iPointIndex,
      CATLISTV(CATUnicodeString) &  oSequenceNames,
      CATLISTV(CATUnicodeString) &  oEntityNames,
      CATListOfInt &				  oEntityTypes,
      CATLISTV(CATBaseUnknown_var)& oMaterials,
      CATListOfDouble &			  oEntityThicknesses,
      double *&					  oDirections1,
      double *&					  oDirections2,
      CATLISTV(CATBaseUnknown_var)& oReferenceElements,
      CATListOfInt &				  oDrapingDirs,
      CATListOfInt &				  oFiberOrientComputationDiagnostic,
      CATBoolean                    iActualOrientations = FALSE) = 0;


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

   /** 
   * @nodoc
   * DO NOT USE.
   * Checks the producibility feature on the list of Plies or cutpieces.
   * @param oIndex
   *     The list of plies or cutpieces.
   * @param oIndex
   *     The list of values as 1 if produciblity exits for a ply or a cutpiece. Else 0.
   * @return
   *     Returns E_FAIL if any of the entity in the iPliesList is not a ply or cutpiece.
   */
   virtual HRESULT CheckProducibility( CATListValCATBaseUnknown_var iPliesList, CATListOfInt &oIndex ) = 0;
};

CATDeclareHandler(CATICoCoreSampleOper, CATBaseUnknown);

#endif
