#ifndef CATIStAnalysisFactory_H
#define CATIStAnalysisFactory_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATIStAnalysisFactory :
//   Class defining the factory for analysis features.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStAnalysisFactory (CAAFreeStyleItf FW)
//                  CATBaseUnknown      (System FW)
//==============================================================================
// Dec. 02   Creation                                     Jean-Michel PLOUHINEC
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStAnalysisFactory;
#else
extern "C" const IID IID_CATIStAnalysisFactory;
#endif

class CATDocument;

class CATIStDistanceAnalysis;
class CATIStCurvaturePorcupineAnalysis;

/**
 * @nodoc
 * Class defining the factory for analysis
 * <ul>
 * <li> Create the factory with the global function <tt>CATCreateStAnalysisFactory</tt>
 * <li> Use it to create a dedicated analysis
 * <li> Release this interface when it is not needed anymore.
 */ 

class ExportedByCAAFreeStyleItf CATIStAnalysisFactory : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
    /**
     * @nodoc
     * Create a <tt>Distance Analysis</tt> feature.
     * @param oAnalysisFeature
     * The pointer to the created analysis.
     *
     * @see CATBaseUnknown
     */
    virtual HRESULT CreateDistanceAnalysisFeature(CATIStDistanceAnalysis *& oAnalysisFeature,
                                                  CATDocument            *  iDocument = NULL) = 0;

    /**
     * @nodoc
     * Create a <tt>Curvature Purcupine Analysis</tt> feature.
     * @param oAnalysisFeature
     * The pointer to the created analysis.
     *
     * @see CATBaseUnknown
     */
    virtual HRESULT CreateCurvaturePorcupineAnalysisFeature(CATIStCurvaturePorcupineAnalysis *& oAnalysisFeature,
                                                            CATDocument                      *  iDocument = NULL) = 0;
};

CATDeclareHandler(CATIStAnalysisFactory, CATBaseUnknown);

#endif
































