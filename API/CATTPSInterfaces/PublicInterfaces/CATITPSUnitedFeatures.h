#ifndef CATITPSUnitedFeatures_H
#define CATITPSUnitedFeatures_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSUnitedFeatures ;

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * <b>Role</b>: Interface to Manage United Features specification (typing interface valid from ISO 1101:2017 support).
 */

class CATITPSUnitedFeatures : public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};

CATDeclareHandler( CATITPSUnitedFeatures, CATBaseUnknown ) ;

#endif
