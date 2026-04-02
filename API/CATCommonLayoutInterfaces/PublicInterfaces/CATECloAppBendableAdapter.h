#ifndef CATECloAppBendableAdapter_H
#define CATECloAppBendableAdapter_H
// COPYRIGHT DASSAULT SYSTEMES  2002
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */


//  CATCommonLayoutInterfaces
#include "CATCommonLayoutItfCPP.h"

//  System
#include "CATBaseUnknown.h"
#include "CATMathConstant.h"

/**
 * Super class to derive implementation for interface CATICloAppBendable.
 * <b>Role</b>: Adapter
 */

class ExportedByCATCommonLayoutItfCPP CATECloAppBendableAdapter : public CATBaseUnknown
{
  public: 
      
    CATECloAppBendableAdapter();
    virtual ~CATECloAppBendableAdapter();  

   /**
    * Implements a function from an interface.
    * @see CATICloAppBendable
    */

    virtual HRESULT GetSpringBackRadius ( const CATAngle &iTurnAngleRadian, 
                                          const double &iRunNodeRadiusMM, 
                                          const double &iDiameterFactor, 
                                          const int &iRuleUsed, 
                                          double &oSpringBackRadiusMM);
  private:

    // do not implement
    CATECloAppBendableAdapter (CATECloAppBendableAdapter &);
    CATECloAppBendableAdapter& operator=(CATECloAppBendableAdapter&);
};

#endif
