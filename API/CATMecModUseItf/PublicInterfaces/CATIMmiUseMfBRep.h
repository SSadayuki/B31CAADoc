#ifndef CATIMmiUseMfBRep_H 
#define CATIMmiUseMfBRep_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#include "CATMfBRepDefs.h"
#include "CATBoolean.h"

class CATBody_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseMfBRep;
#else
extern "C" const IID IID_CATIMmiUseMfBRep ;
#endif


/**
 * Interface to manage BRep features.
 * @href CATIMmiUseBRepAccess, CATIMmiUseBRep, CATIMmiUseTopoAccess.
 */

class ExportedByCATMecModUseItf CATIMmiUseMfBRep: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/** 
 * Tests if the BRep feature is an intersection BRep.
 * <br><b>Role</b>: this method tests if the BRep feature is an intersection BRep.
 * @param oIsIntersection [out]
 * a list of Features used to define the BRep.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT IsAIntersectionBRep(CATBoolean& oIsIntersection) const = 0;

/** 
 * Returns the build type.
 * <br><b>Role</b>: this method returns the build type.
 * @param oBuildType [out]
 * The build type.
* <b>Legal values</b>:
 * <tt>MfWithTemporaryBody</tt>, <tt>MfWithPermanentBody</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetBRepBuildType(CATMfBRepBuildType& oBuildType) const = 0;

/** 
 * Returns the body associated with BRep feature.
 * <br><b>Role</b>: this method returns the body associated with BRep feature.
 * @param oBody [out]
 * The body.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetBody(CATBody_var& oBody) const = 0;


};

CATDeclareHandler(CATIMmiUseMfBRep,CATBaseUnknown);

//------------------------------------------------------------------

#endif
