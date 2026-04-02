// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisEditionCusto.h Provide adaptor to interface CATISamEditionCusto
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisEditionCusto_H
#define CATEAnalysisEditionCusto_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisResources.h"
#include "CATISamEditionCusto.h"
//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamEditionCusto interface.
 * It can be used for AnalysisEntity or AnalysisSet.<br>
 * This adapter allow a BOA implementation.
 * @see CATISamEditionCusto
 */

class ExportedByCATAnalysisResources CATEAnalysisEditionCusto: public CATISamEditionCusto
{

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     CATEAnalysisEditionCusto ();
     virtual ~CATEAnalysisEditionCusto ();

/**
 * Allows the Apply Action.
 * @param iTypeAction the action to perform.
 * Default Implementation returns <font color="red">FALSE</font>.
 */
    virtual CATBoolean AllowApply() ;

/**
 * Implement the actions.
 * @param iTypeAction the action to perform.
 */
    virtual HRESULT ActionPanel(CATSamTypeActionPanel iTypeAction);

  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEAnalysisEditionCusto (CATEAnalysisEditionCusto &);
  CATEAnalysisEditionCusto& operator=(CATEAnalysisEditionCusto&);

};

//-----------------------------------------------------------------------

#endif
