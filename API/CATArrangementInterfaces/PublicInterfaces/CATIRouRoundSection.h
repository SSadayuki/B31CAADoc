#ifndef CATIRouRoundSection_H
#define CATIRouRoundSection_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATArrangementItfCPP.h"
#include "CATIRouSection.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIRouRoundSection;
#else
extern "C" const IID IID_CATIRouRoundSection;
#endif

/**
 * Interface on a RouRoundSection.
 * <b>Role</b>: To get/set the corresponding Diameter data.
 */

class ExportedByCATArrangementItfCPP CATIRouRoundSection : public CATIRouSection
{

  CATDeclareInterface;

public:

  /**
   * GetDiameter.
   * @return
   *   double.
   */  
  virtual HRESULT GetDiameter ( double& oDiameter) = 0;

  /**
   * @nodoc
   * SetDiameter.
   * @return
   *   double.
   */
  virtual HRESULT SetDiameter ( const double iDiameter) = 0;

  /**
   * GetInsideDiameter.
   * @return
   *   double.
   */  
  virtual HRESULT GetInsideDiameter ( double& oDiameter) = 0;

  /**
   * @nodoc
   * SetInsideDiameter.
   * @return
   *   double.
   */
  virtual HRESULT SetInsideDiameter ( const double iDiameter) = 0;

};

CATDeclareHandler( CATIRouRoundSection, CATBaseUnknown );

#endif
