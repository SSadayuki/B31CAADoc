#ifndef CATICfgXEff_H
#define CATICfgXEff_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//System
#include "CATBaseUnknown.h"

//Interface ID
#include "GUIDVPMInterfaces.h"

// Forward declarations
class CATUnicodeString;
class CATICfgEffectivity_var;
class CATListValCATICfgModification_var;
class CATListValCATICfgBasicEffectivity_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgXEff;
#else
extern "C" const IID  IID_CATICfgXEff;
#endif

/**
 * Interface to associate a Domain to an Effectivity expression.
 * <br><b>Role</b>:
 * The XEffectivity is a convenient way to associate one Domain to one Effectivity expression.
 * The Domain is set at the XEffectivity creation, using the @href CATICfgManager#CreateXEff
 * factory method.
 */
class ExportedByGUIDVPMInterfaces CATICfgXEff : public CATBaseUnknown
{
CATDeclareInterface;

public:
	/**
	 * Returns the Domain to which the Effectivity expression is associated.
	 * @param oName
	 *    The name of the Domain for this XEffectivity.
	 * @return
	 *   An  HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *       <dt>S_OK
	 *       <dd>The Domain name is successfully retrieved
	 *       <dt>E_FAIL
	 *       <dd>An error occured during the Domain name extraction
	 *   </dl>
	 */
	virtual HRESULT GetDomainName( CATUnicodeString& oName ) const = 0;
	
	/** @nodoc
	 * Returns the XStatus (??!) attribute of this XEffectivity.
	 */
	virtual HRESULT GetStatus( CATUnicodeString& oStatus ) const = 0;

	/**
	 * Returns the Effectivity expression as a list of Basic Effectivities.
	 * @param oList
	 *    The list of Basic Effectivities forming the Effectivity expression
	 * @return
	 *   An  HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *       <dt>S_OK
	 *       <dd>The Effectivity expression is successfully extracted and converted
	 *       <dt>E_FAIL
	 *       <dd>An error occured during the Effectivity expression extraction and/or conversion
	 *   </dl>
	 */
	virtual HRESULT GetListOfBasicEff( CATListValCATICfgBasicEffectivity_var& oListBasicEff ) const = 0;

	/**
	 * Returns the Effectivity expression.
	 * @param oEffectivity
	 *    The Effectivity expression
	 * @return
	 *   An  HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *       <dt>S_OK
	 *       <dd>The Effectivity expression is successfully extracted
	 *       <dt>E_FAIL
	 *       <dd>An error occured during the Effectivity expression extraction
	 *   </dl>
	 */
	virtual HRESULT GetEffectivity( CATICfgEffectivity_var& oEffectivity ) const = 0;

	/**
	 * Sets a new Effectivity expression.
	 * @param iEffectivity
	 *    The new Effectivity expression to set.
	 * @param iPersistent
	 *    A flag to make the new Effectivity expression persistent or not.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *       <dt><b>1</b>
	 *       <dd>The Effectivity expression is made persistent. This is the <b>default value</b>.
	 *       <dt>0
	 *       <dd>The Effectivity expression is left volatile.
	 *   </dl>
	 * @return
	 *   An  HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *       <dt>S_OK
	 *       <dd>The Effectivity expression is successfully changed
	 *       <dt>E_FAIL
	 *       <dd>An error occured during the Effectivity expression change
	 *   </dl>
	 */
	virtual HRESULT SetEffectivity( const CATICfgEffectivity_var& iEffectivity , const int iPersistent = 1 ) = 0;

	/** @nodoc
	 * Retrieve all Modifications pointing to this XEffectivity.
	 */
	virtual HRESULT GetRelatedMods( CATListValCATICfgModification_var& oList ) const = 0;

	/** @nodoc
	 * Checks if the two Milestones (identified by their names) are compliant with this
	 * XEffectivity, in regard to its Configurable View and the Milestone values.
	 *   An  HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *       <dt>S_OK
	 *       <dd>The Miletones are compliant
	 *       <dt>E_FAIL
	 *       <dd>The Milestones are not compliant
	 *   </dl>
	 */
	virtual HRESULT CheckMilestonesConsistency( const CATUnicodeString& iStartMilestoneName , const CATUnicodeString& iEndMilestoneName ) const = 0;
};

CATDeclareHandler( CATICfgXEff , CATBaseUnknown );

#endif
