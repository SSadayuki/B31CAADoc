//COPYRIGHT DASSAULT SYSTEMES 1998

#ifndef ENOVISubScribeGroupMod_H
#define ENOVISubScribeGroupMod_H

/**
 *   @CAA2Level L1
 *   @CAA2Usage U5
 */


// -- Version
#include "CATIAV5Level.h"
// -- Systeme
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "sequence_octet.h"

#include "GUIDVPMInterfaces.h"
#include "CATICfgModification.h"

// -- forward declaration
class CATICfgGroupModif_var;
class CATICfgORExpression_var;
class CATIConfigurableObject_var;
class CATILinkableObject_var;
class CATICfgEffectivity_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVISubScribeGroupMod ;
#else
extern "C" const IID IID_ENOVISubScribeGroupMod ;
#endif


/**
 *  Interface to subscribe to some configuration's events.
 * <br><b>Role</b>:Class to be implemented by a client who wants to subscribe 
 * to events raised in Configuration.
 */
class ExportedByGUIDVPMInterfaces ENOVISubScribeGroupMod: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public:

    /**
	 * Event triggered before modifying behavior attribute of a GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iBehavior
	 * The value to modify.
	 */
    virtual HRESULT EventBehaviorBefore(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior)=0;

    /**
	 * Event triggered after having modified behavior attribute of a GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iBehavior
	 * The modified value.
	 */
    virtual HRESULT EventBehaviorAfter(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior)=0;

    /**
	 * Event triggered before setting OR-Expression on modifications of this GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iOrExp
	 * The Or-Expression object.
	 */
    virtual HRESULT EventValueBefore(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp)=0;

    /**
	 * Event triggered after setting OR-Expression on modifications of this GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iOrExp
	 * The Or-Expression object.
	 */
    virtual HRESULT EventValueAfter(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp)=0;

    /**
	 * Event triggered before adding a modification to a GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iMod
	 * The modification to add.
	 */
    virtual HRESULT EventAddModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod)=0;

    /**
	 * Event triggered after adding a modification to a GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iMod
	 * The added modification.
	 */
    virtual HRESULT EventAddModAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod)=0;

    /**
	 * Event triggered before removing a modification from a GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iMod
	 * The modification to remove.
	 */
    virtual HRESULT EventRemoveModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod)=0;

    /**
	 * Event triggered after removing a modification from a GroupMod.
	 * @param iGroupMod
	 * The GroupMod.
	 * @param iMod
	 * The removed modification.
	 */
    virtual HRESULT EventRemoveMadAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod)=0;

    /**
	 * Event triggered before a configuration's operation is performed.
	 * @param iOperation
	 * The configuration's operation to perform.
	 * @param iCV
	 * CV used.
	 * @param iObj1
	 * First Operand.
	 * @param iObj2
	 * Second Operand (may be none).
	 * @param iFather
	 * Object's parent.
	 */
    virtual HRESULT EventModifyBefore(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather) =0;
	
    /**
	 * Event triggered after a configuration's operation is performed.
	 * @param iOperation
	 * The performed configuration's operation.
	 * @param iCV
	 * CV used.
	 * @param iObj1
	 * First Operand.
	 * @param iObj2
	 * Second Operand (may be none).
	 * @param iFather
	 * Object's parent.
	 */
    virtual HRESULT EventModifyAfter(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather) =0;

    /**
	 * Event triggered before an effectivity change.
	 * @param iMod
	 * The CATICfgModification on which the effectivity change occurs.
	 * @param iName
	 * The configuration's domain name on which is applied iEffectivity.
	 * @param
	 * The effectivity applied to iMod on iName domain.
	 */
    virtual HRESULT EventSetValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity) =0;

    /**
	 * Event triggered after an effectivity change.
	 * @param iMod
	 * The CATICfgModification on which the effectivity change occurs.
	 * @param iName
	 * The configuration's domain name on which is applied iEffectivity.
	 * @param
	 * The effectivity applied to iMod on iName domain.
	 */
    virtual HRESULT EventSetValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity) =0;

    /**
	 * Event triggered before an effectivity removal.
	 * @param iMod
	 * The CATICfgModification on which the effectivity is removed.
	 * @param iName
	 * The configuration's domain name on which effectivity is removed.
	 */
    virtual HRESULT EventRemoveValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName) =0;

    /**
	 * Event triggered after an effectivity removal.
	 * @param iMod
	 * The CATICfgModification on which the effectivity is removed.
	 * @param iName
	 * The configuration's domain name on which effectivity is removed.
	 */
    virtual HRESULT EventRemoveValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName) =0;

  };

  CATDeclareHandler(ENOVISubScribeGroupMod, CATBaseUnknown);
#endif
