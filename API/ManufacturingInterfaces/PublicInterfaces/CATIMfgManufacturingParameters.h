/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgManufacturingParameters_H
#define CATIMfgManufacturingParameters_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#include "CATUnicodeString.h"

class CATIContainer_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingParameters;
#else
extern "C" const IID IID_CATIMfgManufacturingParameters;
#endif

/**
* Interface to manage manufacturing parameters.
* <br><b>Role</b>: CATIMfgManufacturingParameters has methods to
* manage manufacturing parameters.
* <br><b>Usage</b>:
* <br>CATIMfgManufacturingParameters* piMfgManufacturingParameters = NULL;
* <br>HRESULT RC = CATInstantiateComponent("CATMfgManufacturingParameters", CATIMfgManufacturingParameters::ClassId(), (void**) &piMfgManufacturingParameters);
* <br>.....................
* <br>RC = piMfgManufacturingParameters->AddStrategyParameterToActivity(iActivity, iName, iParm);
* <br>.....................
* <br>double valFeedrate = 150.0;
* <br>RC = piParm->AddFeedrateParameterToActivity(iActivity, iContainer, Mfg_FinishingFeedrate, Mfg_FinishingFeedrateMode Mfg_FinishingFeedrateValue, Mfg_LinearFeedrateMagnitude, valFeedrate, FALSE);
* see CATMfgFeedAndSpeedDefs.h
*/

class ExportedByMfgItfEnv CATIMfgManufacturingParameters: public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
    * Adds a strategy parameter to an activity.
    * <br><b>Role</b>: AddStrategyParameterToActivity adds a
    * strategy parameter to an activity. This method may be
    * used when building a new activity catalog.
    * @param iActivity
    * The manufacturing activity
    * @param iName
    * The parameter name
    * @param iParm
    * The parameter value modelized by a @href CATICkeParm
    */
    virtual HRESULT AddStrategyParameterToActivity(const CATBaseUnknown_var& iActivity, const CATUnicodeString& iName, const CATBaseUnknown_var& iParm) = 0;

    /**
    * Adds a feedrate parameter to an activity.
    * <br><b>Role</b>: AddFeedrateParameterToActivity adds a
    * feedrate parameter to an activity. This method may be
    * used when building a new activity catalog.
    * @param iActivity
    * The manufacturing activity
    * @param iContainer
    * The container in which is located the manufacturing activity
    * @param iTypeFeedrate
    * The pre-defined type of the feedrate (example : Mfg_FinishingFeedrate)
    * @param iTypeFeedrateMode
    * The pre-defined mode of the feedrate (example : Mfg_FinishingFeedrateMode)
    * @param iTypeFeedrateValue
    * The pre-defined value of the feedrate (example : Mfg_FinishingFeedrateValue)
    * @param iTypeFeedrateMagnitude
    * The manufacturing magnitude used to define the feedrate (example : Mfg_LinearFeedrateMagnitude)
    * @param iFeedrateValue
    * The default value for the feedrate
    * @param iIsRapidPossible
    * TRUE if Rapid value is available for the feedrate
    */
    virtual HRESULT AddFeedrateParameterToActivity(const CATBaseUnknown_var& iActivity,
                                                   const CATIContainer_var&  iContainer,
												   const CATUnicodeString&   iTypeFeedrate,
												   const CATUnicodeString&   iTypeFeedrateMode,
												   const CATUnicodeString&   iTypeFeedrateValue,
												   const CATUnicodeString&   iTypeFeedrateMagnitude,
												   const double              iFeedrateValue = 0.0,
												   const CATBoolean          iIsRapidPossible = FALSE) = 0;

    /**
    * Adds a spindle parameter to an activity.
    * <br><b>Role</b>: AddSpindleParameterToActivity adds a
    * spindle speed parameter to an activity. This method may be
    * used when building a new activity catalog.
    * @param iActivity
    * The manufacturing activity
    * @param iContainer
    * The container in which is located the manufacturing activity
    * @param iTypeSpindle
    * The pre-defined type of the spindle speed (example : Mfg_FinishingSpindleSpeed)
    * @param iTypeSpindleMode
    * The pre-defined mode of the spindle speed (example : Mfg_FinishingSpindleSpeedMode)
    * @param iTypeSpindleValue
    * The pre-defined value of the spindle speed (example : Mfg_FinishingSpindleSpeedValue)
    * @param iTypeSpindleMagnitude
    * The manufacturing magnitude used to define the spindle speed (example : Mfg_AngularFeedrateMagnitude)
    * @param iSpindleValue
    * The default value for the spindle speed
    */
    virtual HRESULT AddSpindleParameterToActivity(const CATBaseUnknown_var& iActivity,
                                                  const CATIContainer_var&  iContainer,
                                                  const CATUnicodeString&   iTypeSpindle,
                                                  const CATUnicodeString&   iTypeSpindleMode,
                                                  const CATUnicodeString&   iTypeSpindleValue,
                                                  const CATUnicodeString&   iTypeSpindleMagnitude,
                                                  const double              iSpindleValue) = 0;

};

CATDeclareHandler(CATIMfgManufacturingParameters, CATBaseUnknown);

#endif


