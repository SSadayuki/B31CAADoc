// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIAnthro_h
#define _SWKIAnthro_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//
//    SWKIAnthro interface.
//    This interface offers non-IDL anthropometry services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetInternalAnthro
//    GetManikin
//    GetNumberOfVariables
//    GetVariableAtIndex
//    GetVariableFromRefNumber
//    GetVariable
//    GetManikin
//    GetSex
//    SetSex
//    GetPopulationAccommodation
//    SetPopulationAccommodation
//    GetLimitBound
//    SetLimitBound
//    GetInterpolationMethod
//    SetInterpolationMethod
//    SetValueType
//    GetConstructionType
//    SetConstructionType
//    UpdateFailed
//    UseAnthroDB
//    Reset
//    SetAnthroDBFileName
//    GetAnthroDBFileName
//    InternalSettings
// *****************************************************************************
//  History
//  -------
//
//  Author: Sylvain MARIE
//  Date  : 00/02/22
//  Goal  : Creation
// *****************************************************************************

// --- DNBHumanModelingInterfaces
#include "SWKIManikinPart.h"
#include "SWKPostureSpec.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModeling
class SWAnthro;
class SWDBAnthro;
//
// --- DNBHumanModelingInterfaces
class SWKIManikin;
class SWKIAnthroVariable;
//
// --- ObjectModelerBase
class CATIContainer;
//
// --- ObjectSpecsModeler
class CATISpecObject;
//
// --- System
class CATString;

#ifndef SW_ANTHRO_USERVAR_NONE
#	define SW_ANTHRO_USERVAR_NONE		0x0		// The user variables are not interpolated
#endif

#ifndef SW_ANTHRO_USERVAR_NORMAL
#	define SW_ANTHRO_USERVAR_NORMAL		0x1		// The user variables use the multi-normal model
#endif

#ifndef SW_ANTHRO_VAR_VALUE
#	define SW_ANTHRO_VAR_VALUE			0x0		// Real-world format
#endif

#ifndef SW_ANTHRO_VAR_PERC
#	define SW_ANTHRO_VAR_PERC			0x1		// Percentile format
#endif

/* Sex of manikin */
#ifndef SW_ANTHRO_SEX_FEMALE
#	define SW_ANTHRO_SEX_FEMALE		0x0	/* female */
#endif

#ifndef SW_ANTHRO_SEX_MALE
#	define SW_ANTHRO_SEX_MALE		0x1	/* male */
#endif

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIAnthro;
#else
extern "C" const IID IID_SWKIAnthro;
#endif

/**
  *  This interface provides non-IDL anthropometry services.
  *  This interface is accessible from method <code>GetAnthro()</code>
  *  of interface <code>SWKIManikin</code>
  **/

class ExportedBySWKHumanModelingItf SWKIAnthro : public SWKIManikinPart
{
	CATDeclareInterface;

  public:

	/**
	  * Initialize the internal anthropometry.<br>
	  * <strong>This method is to be used by the system only.</strong>
	  **/
	virtual HRESULT SetInternalAnthro(SWKIManikin * piManikin,
									SWAnthro * piInternalAnthro) = 0;

	/**
	  * @return The number of anthropometric variables that can be<br>
	  * manually overriden.
	  **/
	virtual unsigned GetNumberOfVariables() const = 0;

	/**
	  * Return the variable at the specified index.
	  *
	  * @param piIndex The index of the desired variable.<br>
	  * First variable is at index 0.
	  * @param piUpdateLiteralAccess The literal access (read-only or user) will
	  * be updated if the value is TRUE.
	  *
	  * @return The variable at the specified index, or <code>NULL</code>,<br>
	  * if the index goes out of bounds.
	  **/
	virtual SWKIAnthroVariable * GetVariableAtIndex(unsigned piIndex, boolean piUpdateLiteralAccess = TRUE) = 0;

	/**
	  * Return the variable with the specified reference number.
	  *
	  * @param piRefNumber The reference number of the desired variable.<br>
	  * This reference number is taken from the
	  * <strong>US Army Natick</strong> database<br>
	  * (e.g. 2 for us2, 100 for us100, etc.).
	  **/
	virtual SWKIAnthroVariable * GetVariableFromRefNumber(unsigned piRefNumber) = 0;

	/**
	  * Return the variable with the given acronym.
	  *
	  * @param piAcronym The acronym of the variable to return.
	  *
	  * @return The desired variable, or <code>NULL</code>,<br>
	  * if no variable with the given acronym exists.<br>
	  * See document "<i>Managing SWManikin Databases</i>" for
	  * more information.
	  **/
	virtual SWKIAnthroVariable * GetVariable(const CATString & piAcronym) = 0;

	/**
	  * Return the manikin owning this anthropometry.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * Query the sex of the manikin.
	  * @return <code>SW_ANTHRO_SEX_MALE</code> if the manikin is male,<br>
	  * <code>SW_ANTHRO_SEX_FEMALE</code>, if the manikin is female.
	  **/
	virtual int GetSex() const = 0;

	/**
	  * Set the sex of the manikin.<br>
	  * When the sex of the manikin is set, all variables are<br>
	  * updated accordingly.
	  *
	  * @param piSex The sex of the manikin, which may be either<br>
	  * <code>SW_ANTHRO_SEX_MALE</code>, or <code>SW_ANTHRO_SEX_FEMALE</code>.<br>
	  * All other values are discarded.
	  **/
	virtual HRESULT SetSex(int piSex) = 0;

	/**
	  * Set the population accommodation.<br>
	  * <br>
	  * The population accommodation is used in the multi-normal<br>
	  * algorithm, to calculate the limits of the automatic variables<br>
	  * when a user-defined anthropometry is entered.<br>
	  * The greater the population accommodation is, the wider the limits<br>
	  * on the automatic variables will be.
	  *
	  * @param piPopulationAccommodation The population accommodation, in a
	  * percentile format.  The value of this parameter must le within the
	  * range [0.0, 100.0].
	  *
	  * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code>
	  * if the parameter goes out of bounds.
	  **/
	virtual HRESULT SetPopulationAccommodation(double piPopulationAccommodation) = 0;

	/**
	  * @return the population accommodation, in a percetile (0.0 to 100.0) format.
	  **/
	virtual double GetPopulationAccommodation() const = 0;

	/**
	  * Set the population accommodation in terms of a limit bound.<br>
	  * <br>
	  * The population accommodation is used in the multi-normal<br>
	  * algorithm, to calculate the limits of the automatic variables<br>
	  * when a user-defined anthropometry is entered.<br>
	  * The greater the population accommodation is, the wider the limits<br>
	  * on the automatic variables will be.
	  *
	  * @param piLimitBound The population accommodation, in a
	  * limit bound format.  The value of this parameter must le within the
	  * range [0.0, 4.0].
	  *
	  * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code>
	  * if the parameter goes out of bounds.
	  **/
	virtual HRESULT SetLimitBound(double piLimitBound) = 0;

	/**
	  * @return The limit bound reflecting the population accommodation.<br>
	  * The value returned will be within the range [0.0, 4.0].
	  **/
	virtual double GetLimitBound() const = 0;


	/**
	  * Return the behavior of the anthropometry.<br>
	  * This method returns either <code>SW_ANTHRO_USERVAR_NONE</code>
	  * or <code>SW_ANTHRO_USERVAR_NORMAL</code>.<br>
	  * See method <code>SetInterpolationMethod</code> for further details.
	  **/
	virtual int GetInterpolationMethod() const = 0;

	/**
	  * Set the behavior of the anthropometry.
	  *
	  * @param piMethod The interpolation method.
	  * This parameter can take one of the following<br>
	  * values: <code>SW_ANTHRO_USERVAR_NORMAL</code> or<br>
	  * <code>SW_ANTHRO_USERVAR_NONE</code>.
	  * <br>
	  * If the interpolation is set to <code>SW_ANTHRO_USERVAR_NORMAL</code>,<br>
	  * then each user-defined anthropometric value<br>
	  * (cf. SWKIAnthroVariable) is verified against the<br>
	  * statistical bounds to make sure that the variable's<br>
	  * value is within the proper range (i.e. remains realistic).<br>
	  * <br>
	  * If the interpolation is set to <code>SW_ANTHRO_USERVAR_NONE</code>,<br>
	  * then the anthropometric values (cf. SWKIAnthroVariable)<br>
	  * from the user input are not verified, and can go<br>
	  * beyond the statistical limits.  If it is the case that<br>
	  * the values are not realistic, <strong>the current anthropometry<br>
	  * may very well lead to an ill-formed or unusable manikin</strong>.
	  **/
	virtual HRESULT SetInterpolationMethod(int piMethod) = 0;

	/**
	  * Set the storage type of the values.
	  *
	  * @param piValueType If this parameter is
	  * <code>SW_ANTHRO_VAR_VALUE</code>,<br>
	  * the real-world values of the variables are stored and copied<br>
	  * If it is <code>SW_ANTHRO_VAR_PERC</code>, the percentile values
	  * are stored and copied.
	  **/
	virtual HRESULT SetValueType(int piValueType) = 0;

	/**
	  * Return the construction type of he manikin.<br>
	  * This method returns either <code>SWKPostureSpecStand</code>
	  * or <code>SWKPostureSpecSit</code>.<br>
	  * See method <code>SetConstructionType</code> for further details.
	  **/
	virtual SWKPostureSpec GetConstructionType() const = 0;

	/**
	  * Set the the construction type of he manikin.
	  *
	  * @param piConstructionType The posture definind the construction type.
	  * This parameter can take one of the following<br>
	  * values: <code>SWKPostureSpecStand</code> or<br>
	  * <code>SWKPostureSpecSit</code>.
	  * <br>
	  * If the construction is set to <code>SWKPostureSpecStand</code>,<br>
	  * then the manikin is constructed as of type 'standing'.<br>
	  * If the construction is set to <code>SWKPostureSpecStand</code>,<br>
	  * then the manikin is constructed as of type 'sitting'.<br>
	  * <br>
	  * The chosen construction type influences the way the manikin's hips,<br>
	  * thighs and knees are constructed to reflect the changes in those body<br>
	  * parts when a human changes from a standing to a sitting posture.
	  **/
	virtual HRESULT SetConstructionType(SWKPostureSpec piConstructionType) = 0;

	/**
	  * @return <code>TRUE</code> if the last update operation
	  * failed, <code>FALSE</code> otherwise.
	  **/
	virtual boolean UpdateFailed() const = 0;

	/**
	  * Reset the anthopometry.<br>
	  * This method resets each variable back to the automatic mode,
	  * then updates the anthropometry.
	  *
	  * @return <code>S_OK</code> on success, or <code>E_UNEXPECTED</code>
	  * if some error occurred.
	  **/
	virtual HRESULT Reset() = 0;

	/**
	  * Use the specified Anthropometry database.
	  *
	  * @param piAnthroDB A pointer to the new database.
	  **/
	virtual HRESULT UseAnthroDB(const SWDBAnthro * piAnthroDB) = 0;

	/**
	  * Initialize the file name of the current population.
	  **/
	virtual void SetAnthroDBFileName(const CATUnicodeString & piName) = 0;

	/**
	  * @return The file name of the current population.
	  **/
	virtual CATUnicodeString GetAnthroDBFileName() const = 0;

	/**
	  * @nodoc
	  */
	virtual SWAnthro * InternalSettings(SWAnthro * piInternalAnthro = NULL) = 0;

	/**
	  * @nodoc
	  **/
	virtual HRESULT UpdateInternalAnthro(unsigned piRefNumber) = 0;
};

CATDeclareHandler(SWKIAnthro, SWKIManikinPart);

#endif
