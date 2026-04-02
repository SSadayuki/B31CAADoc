#ifndef CATIGSMThickness_H
#define CATIGSMThickness_H

// 
// COPYRIGHT DASSAULT SYSTEMES 2002-2004
//

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMThickness;
#else
extern "C" const IID IID_CATIGSMThickness;
#endif

/**
 * Interface of the thickness on a surface.
 * <b>Role</b>: Allows you to get and set the thickness of a surface: a surface,
 * an orientation, a thickness1 value and a thickness2 value.
 */

class ExportedByCATGitInterfaces CATIGSMThickness : public CATBaseUnknown
{

   CATDeclareInterface;

public:

  /**
   * Gets the first thickness value.
   *   @param oThickness1Value
   *      Thickness1 value
   */
 virtual    HRESULT   GetThickness1Value    (double & oThickness1Value)   = 0;
  /**
   * Gets the first thickness value.
   *   @param oThickness1Value
   *      Thickness1 value
   */
 virtual    HRESULT   GetCkeThickness1Value (CATICkeParm_var & oThickness1Value)      = 0;

  /**
   * Gets the second thickness value.
   *   @param oThickness2Value
   *      Thickness2 value
   */
 virtual    HRESULT   GetThickness2Value    (double & oThickness2Value)   = 0;
  /**
   * Gets the second thickness value.
   *   @param oThickness2Value
   *      Thickness2 value
   */
 virtual    HRESULT   GetCkeThickness2Value (CATICkeParm_var & oThickness2Value)      = 0;

 /**
  * Sets the first thickness value in MKS (meters).
  *   @param iThickness1Value
  *      Thickness1 value
  */
 virtual    HRESULT SetThickness1Value   (double iThickness1Value) = 0;

 /**
  * Sets the first thickness value.
  *   @param iThickness1Value
  *      Thickness1 value
  */
 virtual    HRESULT SetThickness1Value     (const CATICkeParm_var iThickness1Value) = 0;

 /**
  * Sets the second thickness value in MKS (meters).
  *   @param iThickness2Value
  *      Thickness2 value
  */
 virtual    HRESULT SetThickness2Value   (double iThickness2Value) = 0;

 /**
  * Sets the second thickness value.
  *   @param iThickness2Value
  *      Thickness2 value
  */
 virtual    HRESULT SetThickness2Value     (const CATICkeParm_var iThickness2Value) = 0;

  /**
   * Gets the orientation of the thickness.
   *  @Param oOrientation 
   *   Orientation = CATGSMInvertOrientation means that thickness is on the inside.
   * If no thickness attribute is stored on the object, the method returns E_FAIL and
   * oOrientation is equal to CATGSMKoOrientation.
   */
   virtual HRESULT GetOrientation(CATGSMOrientation & oOrientation) = 0;

  /**
   * Sets the orientation of the thickness.
   *  @Param iOrientation 
   * iOrientation = CATGSMInvertOrientation means that thickness is on the inside.
   */
   virtual HRESULT SetOrientation(const CATGSMOrientation iOrientation) = 0;

  /**
   * Inverts the orientation.
   */
   virtual HRESULT InvertOrientation() = 0;

};

CATDeclareHandler(CATIGSMThickness,CATBaseUnknown);

#endif // CATIGSMThickness_H
