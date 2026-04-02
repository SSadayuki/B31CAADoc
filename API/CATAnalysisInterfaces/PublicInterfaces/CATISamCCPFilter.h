// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATISamCCPFilter.h
// Define the CATISamCCPFilter interface
//
//===================================================================
//
// Usage notes:
// Interface used to define CCP/Delete Rules on Owner Feature
//
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
#ifndef CATISamCCPFilter_H
#define CATISamCCPFilter_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamCCPFilter;
#else
extern "C" const IID IID_CATISamCCPFilter ;
#endif

//------------------------------------------------------------------

/**
 * Interface used to define CCP/Delete Rules on Analysis Feature.
 */
class ExportedByCATAnalysisInterface CATISamCCPFilter: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Informs if operation is allowed. 
 * @param iHeaderID Header identifier : Cut, Copy, Paste, Delete
 * @return authorization flag.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">1</font color="red"> iHeaderID command is allowed. </li>
 * <li><font color="red">0</font color="red"> iHeaderID command is not allowed.</li></ul>
 */
    virtual int IsFeatureAvailable(const char * &iHeaderID) = 0;
};

//------------------------------------------------------------------
CATDeclareHandler( CATISamCCPFilter, CATBaseUnknown );

#endif
