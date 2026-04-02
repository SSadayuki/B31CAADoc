/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================
//
// CATICfgUEValidateEff
// Config User Exit Interface For Validating Effectivties.
//
//=============================================================================
// Usage Notes:
// Config User Exit Interface For Validating Effectivties.
//
//
//=============================================================================
// JUL 03                              Creation                             PSU
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
*   @CAA2Level L1
*   @CAA2Usage U5
*/

/**
 * Interface to validate effectivity expressions. 
 * <b>Role</b>: This interface can be implemented to validate effectivity expressions.
 * Any instance of a class implementing CATIVpmFactoryManager
 * ( @href CATIVpmFactoryManager ) a DS component. (like CATICfgManager can be used to query 
 * for the implementation of this interface. </p>
 * @see CATICfgManager.
*/

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

#ifndef CATICfgUEValidateEff_H_
#define CATICfgUEValidateEff_H_

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgUEValidateEff;
#else
extern "C" const IID IID_CATICfgUEValidateEff;
#endif

//
// -------------------------------
// Definition de la classe Interface
// -------------------------------
//


class CATUnicodeString;
class CATICfgNormalValue_var;
class CATICfgORExpression_var;
class CATICfgBasicEffectivity_var;
class CATIConfigurableObject_var;
#include "CATListOfCATILinkableObject.h"
//
// -----------------
// Interface Definition
// -----------------
//

class ExportedByGUIDVPMInterfaces  CATICfgUEValidateEff : public CATBaseUnknown
{
  //
  CATDeclareInterface;
  //

  public:

     /**
	  * Validates the Effectivity expression of the Confiruable Object.
      * @param iObject
      *    The NormalValue which holds the effectivity information.
      * @param iDomain
      *    The name of the domain for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iModName
      *    The name of the Modification(if any) for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iCV
      *    The ConfigurableObject  which holds the configuration of the object for which 
      *    the effectivity is being validated.
      * @return
      * <ul>
      *     <li>S_OK if the Validation was successful.</li>
      *     <li>S_FALSE if the Validation method was successful but the validation failed.</li>
      *     <li> E_FAIL if the Validation method failedl.</li>
      * </ul>
      */
     virtual HRESULT ValidateEffectivity(const CATICfgNormalValue_var& iObject, 
                                        const CATUnicodeString& iDomain, 
                                        const CATUnicodeString& iModName, 
                                        const CATIConfigurableObject_var iCV) = 0;

     /**
	  * Validates the Effectivity expression of the Confiruable Object.
      * @param iObject
      *    The ORExpression which holds the effectivity information   
      * @param iDomain
      *    The name of the domain for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iModName
      *    The name of the Modification(if any) for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iCV
      *    The ConfigurableObject  which holds the configuration of the object for which 
      *    the effectivity is being validated.
      * @return
      * <ul>
      *     <li>S_OK if the Validation was successful.</li>
      *     <li>S_FALSE if the Validation method was successful but the validation failed.</li>
      *     <li> E_FAIL if the Validation method failedl.</li>
      * </ul>
      */
     virtual HRESULT ValidateEffectivity(const CATICfgORExpression_var& iObject, 
                                         const CATUnicodeString& iDomain,
                                         const CATUnicodeString& iModName, 
                                         const CATIConfigurableObject_var iCV) = 0;

     /**
	  * Validates the Effectivity expression of the Confiruable Object.
      * @param iObject
      *    The BasicEffectivity object  which holds the effectivity information.
      * @param iDomain
      *    The name of the domain for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iModName
      *    The name of the Modification(if any) for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iCV
      *    The ConfigurableObject  which holds the configuration of the object for which 
      *    the effectivity is being validated.
      * @return
      * <ul>
      *     <li>S_OK if the Validation was successful.</li>
      *     <li>S_FALSE if the Validation method was successful but the validation failed.</li>
      *     <li> E_FAIL if the Validation method failedl.</li>
      * </ul>
      */
     virtual HRESULT ValidateEffectivity(const CATICfgBasicEffectivity_var& iObject, 
                                         const CATUnicodeString& iDomain,
                                         const CATUnicodeString& iModName, 
                                         const CATIConfigurableObject_var iCV) = 0;

     /** @nodoc
	  * Validates the Effectivity expression of the Confiruable Object.
      * @param iObjects
      *    The Objects on which the validate eff is asked.
      * @param iObject
      *    The BasicEffectivity object  which holds the effectivity information.
      * @param iDomain
      *    The name of the domain for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iModName
      *    The name of the Modification(if any) for which this effectivity is being validated.
      *     This arguement is available so the developers can get specific validation messages to trace.
      * @param iCV
      *    The ConfigurableObject  which holds the configuration of the object for which 
      *    the effectivity is being validated.
      * @return
      * <ul>
      *     <li>S_OK if the Validation was successful.</li>
      *     <li>S_FALSE if the Validation method was successful but the validation failed.</li>
      *     <li> E_FAIL if the Validation method failedl.</li>
      * </ul>
      */
     virtual HRESULT ValidateEffectivity(const CATListOfCATILinkableObject& iObjects,
					 const CATICfgBasicEffectivity_var& iObject, 
                                         const CATUnicodeString& iDomain,
                                         const CATUnicodeString& iModName, 
                                         const CATIConfigurableObject_var iCV) = 0;

};

CATDeclareHandler(CATICfgUEValidateEff,CATBaseUnknown);

//
// --------------------------------------------------------------
// Fin de la macro
// --------------------------------------------------------------

#endif
