// COPYRIGHT Dassault Systemes 2000
//===================================================================
//
// CATISamValidity.h
// Define the CATISamValidity interface
//
//===================================================================
//
// Usage notes:
//  This interface is dedicated to deal with the validity of the 
//  implementing analysis data. 
//
//===================================================================
//
//  Jun 2000  Creation:					
//===================================================================
#ifndef CATISamValidity_H
#define CATISamValidity_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamValidity ;
#else
extern "C" const IID IID_CATISamValidity ;
#endif

//------------------------------------------------------------------

/**
 * Control the validity on the implementing analysis feature.
 * <br><b>Role:</b>  This interface is called:
 * <ul>
 * <li> For the feature tree visualization in order to overload the icon look and feel.<br>
 * (UpToDate Icon information, analysis support support validity...).</li>
 * <li> To allow an analysis creation. As long as the definition is not valid, the creation will be diseable.</li>
 * </ul>
 */
class ExportedByCATAnalysisInterface CATISamValidity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * This method checks if the implementing analysis feature is valid.
   * @param iContext  defines the caller type of this interface (new V5R9).
   * <br><b>Legal values</b>:
   * <ul>
   * <li><font color="red">1</font color="red"> Graph visualization (fast check is recommended).  </li>
   * <li><font color="red">2</font color="red"> Validation of feature creation (complete check is recommended).  </li>
   * </ul>
   * @param oValidityStatus  returns the validity of the checked data.
   * <br><b>Legal values</b>:
   * <ul>
   * <li><font color="red">0</font color="red"> the definition is valid. </li>
   * <li><font color="red">1</font color="red"> the definition is incomplete.  </li>
   * </ul>
   * @return
   *   E_FAIL if the treatment fails.
   */
 	virtual HRESULT GetValidityStatus (const int iContext,int& oValidityStatus) = 0;


};

//------------------------------------------------------------------
CATDeclareHandler( CATISamValidity, CATBaseUnknown );



#endif
