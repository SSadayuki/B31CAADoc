#ifndef CATIStConnectionMeasure_H
#define CATIStConnectionMeasure_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATIStConnectionMeasure :
//   Class defining the operator that measures the maximum deviation
//   between two mono-dimensional or bi-dimensional cells
//   for the specified continuity level.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStConnectionMeasure (CAAFreeStyleItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
// Oct. 02   Creation                                             Thomas ECKERT
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStConnectionMeasure;
#else
extern "C" const IID IID_CATIStConnectionMeasure;
#endif

#include "CATFreeFormDef.h"

class CATSoftwareConfiguration;

class CATBody;
class CATCell;

/**
 * @nodoc
 * Class defining the operator that measures the maximum deviation between two mono-dimensional
 * or bi-dimensional cells for the specified continuity level.
 * <ul>
 * <li> Create the operator with the global function <tt>CATCreateStConnectionMeasure</tt>
 * <li> Set the operator geometrical inputs (cells and bodies).
 * <li> Set the continuity level (G0/G1/G2).
 * <li> Run with the <tt>Run</tt> method
 * <li> Get the results with the corresponding methods.
 * <li> Release this interface when it is not needed anymore.
 */ 

class ExportedByCAAFreeStyleItf CATIStConnectionMeasure : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
    /**
     * @nodoc
     * Defines the component inputs.
     * @param ipBody1
     * The pointer to the CATBody that contains ipSideOnBody1.
     * @param ipBody2
     * The pointer to the CATBody that contains ipSideOnBody2.
     * @param ipSideOnBody1
     * The pointer to the side to be taken into account on ipBody1.
     * @param ipSideOnBody2
     * The pointer to the side to be taken into account on ipBody2.
     * @param ipLocationOnBody1
     * The pointer to the CATCell on which the continuity is computed. It belongs to ipBody1.
     * @param ipLocationOnBody2
     * The pointer to the CATCell on which the continuity is computed. It belongs to ipBody2.
     */
    virtual HRESULT SetInputs(CATBody * ipBody1, CATCell * ipSideOnBody1, CATCell * ipLocationOnBody1,
                              CATBody * ipBody2, CATCell * ipSideOnBody2, CATCell * ipLocationOnBody2) = 0;

    /**
     * @nodoc
     * Defines the continuity level.
     * @param iContinuityLevel
     * The continuity level : CATFrFContinuity(CATFrFPointCont/CATFrFTangentCont/CATFrFCurvatureCont).
     */
    virtual HRESULT SetContinuityLevel(const CATFrFContinuity iContinuityLevel) = 0;
    
    /**
     * @nodoc
     * Runs the operator.
     * @return
     * An HRESULT. The error can be retrieved by using CATGetLastError.
     */
    virtual HRESULT Run() = 0;
    
    /**
     * @nodoc
     * Retrieves the maximum deviation for G0 continuity.
     * @param oMaxDeviationG0
     * The result as a double.
     */
    virtual HRESULT GetMaxDeviationG0(double & oMaxDeviationG0) = 0;

    /**
     * @nodoc
     * Retrieves the maximum deviation for G1 continuity.
     * @param oMaxDeviationG1
     * The result as a double.
     */
    virtual HRESULT GetMaxDeviationG1(double & oMaxDeviationG1) = 0;

    /**
     * @nodoc
     * Retrieves the maximum deviation for G2 continuity.
     * @param oMaxDeviationG2
     * The result as a double.
     */
    virtual HRESULT GetMaxDeviationG2(double & oMaxDeviationG2) = 0;

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
};

CATDeclareHandler(CATIStConnectionMeasure, CATBaseUnknown);

#endif
