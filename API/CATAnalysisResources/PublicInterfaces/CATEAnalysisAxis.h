// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATEAnalysisAxis.h
// Provide default implementation of some methods of interface
//    CATISamAnalysisAxis for AnalysisAxis
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATEAnalysisAxis_H
#define CATEAnalysisAxis_H
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CATAnalysisResources.h"
#include "CATISamAnalysisAxis.h"

//------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamAnalysisEntityInit interface.
 * It can be used for AnalysisEntity derived from "AnalysisAxis".
 */

class ExportedByCATAnalysisResources CATEAnalysisAxis: public CATISamAnalysisAxis
{
  
  public:
/**
 * Default constructor.
 */
    CATEAnalysisAxis();

/**
 * Destructor.
 */
    virtual ~CATEAnalysisAxis();    

/**
 * Retrieves the mathematical axis system.
 * <br><b>Role:</b>This method retrieves from the analysis feature a mathematical axis system.
 *   @param oMathAxis
 *      The mathematical axis in model unit
 */ 
   virtual  HRESULT GetMathAxis(CATMathAxis& oMathAxis) const;

/**
 * Retrieves the mathematical axis system.
 * <br><b>Role:</b>This method retrieves from the analysis feature a mathematical axis system.
 *   @param oMathAxis
 *      The mathematical axis in MKS unit
 */
    virtual HRESULT GetMKSMathAxis(CATMathAxis& oMathAxis) const	=0;	


  private:
/**
 * Constructors. No implementation provided. Just declared to avoid that 
 * someone could build this class.
 */
    CATEAnalysisAxis(const CATEAnalysisAxis &);
    CATEAnalysisAxis& operator=(const CATEAnalysisAxis &);


};   

#endif


