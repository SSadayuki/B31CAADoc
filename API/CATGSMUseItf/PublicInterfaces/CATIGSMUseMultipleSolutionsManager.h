/* -*-c++-*- */

#ifndef CATIGSMUseMultipleSolutionsManager_H
#define CATIGSMUseMultipleSolutionsManager_H

// COPYRIGHT DASSAULT SYSTEMES 2011

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseMultipleSolutionsManager;
#else
extern "C" const IID IID_CATIGSMUseMultipleSolutionsManager;
#endif

/**
 * Interface to manage multiple solutions for GSD features
 * <b>Role</b>: Implemented on GSD features that can manage multiple solutions such as
 * <ul>
 * <li> Corners </li>
 * <li> Circles (bi-tangent and radius, bi-tangent and point, tri-tangent, two points, center tangent) </li>
 * <li> Lines (bi-tangent,bisecting) </li>
 * <li> Sweeps (some sweep segment and sweep circle) </li>
 * </ul>
 * Allow to compute all the solutions, get number of solutions, get solution topological result
 * and set feature attributes corresponding to chosen solution.
 * Interface is implemented as transient extension, data computed by ComputeAllSolutions method
 * are cleaned when interface pointer is released.
 *
 @example
 * Build pSpecCorner first solution
 *  <pre> 
 *  CATIGSMUseMultipleSolutionsManager * pMultiSolMng=NULL;
 *  if(SUCCEEDED(pSpecCorner->QueryInterface(IID_CATIGSMUseMultipleSolutionsManager,(void**)&pMultiSolMng))){
 *    if(SUCCEEDED(pMultiSolMng->ComputeAllSolutions())){
 *      if(SUCCEEDED(pMultiSolMng->SetCurrentSolution(1))){
 *        CATTry{
 *          pSpecCorner->Update();
 *        }
 *        CATCatch(CATError,pErr){
 *          Flush(pErr);
 *        }
 *        CATEndTry
 *      }
 *    }
 *    pMultiSolMng->Release(); pMultiSolMng=NULL;
 *  }
 *  </pre> 
 */

class ExportedByCATGSMUseItf CATIGSMUseMultipleSolutionsManager: public CATBaseUnknown
{
CATDeclareInterface;

public:
  /**
   * Compute all solutions according to feature inputs
   * return E_FAIL in case of computation error
   * error can be retrieved by using CATError::CATGetLastError(hr)
   * @see CATError#CATGetLastError
   */
  virtual HRESULT ComputeAllSolutions() = 0;

  /**
   * Gets the number of solutions
   * (ComputeAllSolutions must have been called before)
   * @param oNbSols
   *  Number of Solutions
   */
  virtual HRESULT GetNumberOfSolutions(int & oNbSols) = 0;

  /**
   * Gets the topology representing the solution iSolIndex
   * (ComputeAllSolutions must have been called before)
   * @param iSolIndex
   *  solution index from 1 to 'number of solutions'
   * @param ospTopo
   *  solution topology
   *  returned topology lifecycle is linked to extension lifecycle
   *  i.e topology will be removed from CGM container when the interface pointer will be released or when the feature will be removed
   */
  virtual HRESULT GetPreviewTopology(int iSolIndex, CATBaseUnknown_var & ospTopo) = 0;


  /**
   * Sets feature stabilization attributes (orientations, indexes...) in order to build
   * the solution corresponding to iSolIndex.
   * (ComputeAllSolutions must have been called before)
   * This method does not update the feature
   * @param iSolIndex
   *  solution index from 1 to 'number of solutions'
   */
  virtual HRESULT SetCurrentSolution(int iSolIndex) = 0;

   /**
   * Gets feature current solution index according to its stabilization attributes (orientations, indexes...) 
   * (ComputeAllSolutions must have been called before)
   * @param oSolIndex
   *  solution index from 1 to 'number of solutions'
   */
  virtual HRESULT GetCurrentSolution(int & oSolIndex) = 0;
};

//-----------------------------------------------------------------------
CATDeclareHandler( CATIGSMUseMultipleSolutionsManager, CATBaseUnknown );

#endif
