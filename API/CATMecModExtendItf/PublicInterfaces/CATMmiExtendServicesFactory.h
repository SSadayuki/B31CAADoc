#ifndef CATMmiExtendServicesFactory_H
#define CATMmiExtendServicesFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModExtendItf.h"
#include "CATBaseUnknown.h"
#include "CATIAV5Level.h"

class CATIMmiAlgoConfigServices;
class CATIMmiFeatureAttributes;
class CATIMmiMechanicalSetServices;
class CATIMmiErrUpdate; 
class CATIMmiAutoServices;
//-----------------------------------------------------------------------

/**
* Class to access services components.
*
* <br><b>Role</b>: this class give access to basic Mechanical Modeler services.
* For details about behavior of these services, see directly 
* documentation of the service.
*
*/
class ExportedByCATMecModExtendItf CATMmiExtendServicesFactory
{
public:

  /** 
  * Creates a pointer on a CATIMmiAlgoConfigServices.
  * @param oAlgoConfigServices 
  *   a <tt>CATIMmiAlgoConfigServices</tt> pointer.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT CreateAlgoConfigServicesAccess(CATIMmiAlgoConfigServices*& oAlgoConfigServices);

    /** 
  * Creates a pointer on a CATIMmiFeatureAttributes.
  * @param oFeatureAttributes 
  *   a <tt>CATIMmiFeatureAttributes</tt> pointer.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT CreateFeatureAttributesAccess(CATIMmiFeatureAttributes*& oFeatureAttributes);

  /** 
  * Creates a pointer on a CATIMmiMechanicalSetServices.
  * @param oMechanicalSetServices 
  *   a <tt>CATIMmiMechanicalSetServices</tt> pointer.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT CreateMechanicalSetServicesAccess(CATIMmiMechanicalSetServices*& oMechanicalSetServices);

   /** 
  * Creates a pointer on a CATIMmiErrUpdate.
  * @param oErrUpdate 
  *   a <tt>CATIMmiErrUpdate</tt> pointer.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT CreateUpdateErrorAccess(CATIMmiErrUpdate*& oErrUpdate);

#ifdef CATIAR214 
   /** 
  * @nodoc 
  * This interface has not been backported from V6 
  * Creates a pointer on a CATIMmiAutoServices.
  * @param oErrUpdate 
  *   a <tt>CATIMmiAutoServices</tt> pointer.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */

  static HRESULT CreateAutoServicesAccess(CATIMmiAutoServices*& oAutoServices);
#endif

private:
  // Standard constructors and destructors
  // -------------------------------------
  CATMmiExtendServicesFactory ();
  virtual ~CATMmiExtendServicesFactory ();

  // Copy constructor and equal operator
  // -----------------------------------
  CATMmiExtendServicesFactory (CATMmiExtendServicesFactory &);
  CATMmiExtendServicesFactory& operator=(CATMmiExtendServicesFactory&);

};

//-----------------------------------------------------------------------

#endif
