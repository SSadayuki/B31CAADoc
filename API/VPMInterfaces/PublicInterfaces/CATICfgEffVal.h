//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATICfgEffVal_h
#define CATICfgEffVal_h

#define EFFVALSIZE 5000

// Includes
//----------  
#include "sequence_octet.h"
#include "CATUnicodeString.h"
// System
//--------
#include "CATBaseUnknown.h"
// Interface ID
//--------------
#include "GUIDVPMInterfaces.h"
#include "CATICfgMileStone.h"
#include "CATIConfigurableObject.h"
#include "CATListOfCATIConfigurableObject.h"
#include "CATListOfCATICfgMileStone.h"
#include "CATListOfCATIConfigurable.h"
#include "CATListOfCATICfgORExpression.h"
#include "CATListOfCATICfgModification.h"

// Classes
//---------
class CATICfgEffVal_var;
class CATListValCATICfgMileStone_var;
class CATListValCATIConfigurable_var;
class CATListValCATICfgEffectivity_var;
class CATListValCATICfgSimpleSpecification_var;
class CATICfgInterval_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgEffVal ;
#else
extern "C" const IID IID_CATICfgEffVal ;
#endif

//=============================================================================

class ExportedByGUIDVPMInterfaces CATICfgEffVal : public CATBaseUnknown
{
CATDeclareInterface;

public:
/** @nodoc */
	virtual HRESULT Delete() = 0;
/** @nodoc */
	virtual HRESULT Dump() const = 0;

/** @nodoc 
 * Retrieve the UUID of an <b>EffVal</b> object 
 * @param outUid 
 */
	virtual HRESULT GetUid( SEQUENCE(octet)& outUid ) const = 0;


/** @nodoc 
 * Retrieve the CO of an <b>EffVal</b> object 
 * @param outCO
 */
	virtual HRESULT GetConfigurableObject( CATIConfigurableObject_var& outCO ) const = 0;


/** @nodoc 
 * Returns all the mods held by the EffVal
 * @param  outModificationList 
 */
	virtual HRESULT GetListOfMods( CATListOfCATICfgModification_var& outModificationList ) const = 0;


/** @nodoc 
 * Updates the OPTIMSTRING of an <b>EffVal</b>
 * @param   cZone
 * @param   butMod   updates the EffVal taking into account all mods but butMod
 */
	virtual HRESULT Update( const CATICfgModification_var& butMod = NULL_var ) = 0;

/** @nodoc 
 * Updates the OPTIMSTRING of an <b>EffVal</b> after an AttachMinus
 * @param  outModificationList 
 */
	virtual HRESULT AppendMinusMod( CATICfgModification_var& inMod ) = 0;

/** @nodoc 
 * Updates the OPTIMSTRING of an <b>EffVal</b> after an AttachExtension
 * @param  outModificationList 
 */
	virtual HRESULT AppendExtensionMod( CATICfgModification_var& inMod ) = 0;

/** @nodoc 
 * Updates the OPTIMSTRING of an <b>EffVal</b> after an AttachPlus
 * @param  outModificationList 
 */
     virtual HRESULT AppendPlusMod( CATICfgModification_var& inMod ) = 0;

/** @nodoc 
 * Updates the OPTIMSTRING of an <b>EffVal</b> after a Detach
 * @param  OptimString already allocated
 * @param   inMod 
 */
	virtual HRESULT RemoveMod( const CATICfgModification_var& inMod ) = 0;

/** @nodoc 
 * GetModByOid
 * given an oid, search for it in the mod list held bye the <b>EffVal</b>
 */
	virtual HRESULT GetModByOid( const SEQUENCE(octet)& inOid , CATICfgModification_var& outMod ) const = 0;
 
/** @nodoc */
	virtual HRESULT Migrate() = 0;

     /**
      *
      * Transform an OPTIMSTRING into a list of Domain and ORExp
      * @param oDomainList    : Domains list
      * @param oORExpList     : ORExp list
      *
      **/
	virtual HRESULT GetSolvedEffectivity( CATListOfCATUnicodeString& oDomainList , CATListOfCATICfgORExpression_var& oORExpList ) const = 0;

     /**
      *
      * Transform an OPTIMSTRING into a list of Xeff
      * @param oLOXEffs		  : list of Xeff
      *
      **/
	virtual HRESULT GetSolvedEffectivity( CATListValCATICfgXEff_var &oLOXEffs ) const = 0;

/** @nodoc */	
	virtual HRESULT GetEffectivity( const CATUnicodeString& iDomain , CATICfgEffectivity_var& oEffectivity ) const = 0;

     /**
      *
      * Returns solved operations in oOperations and their associated modificaions in oAssociatedModifs.
      * @param oOperations           : ouput operation list
      * @param oAssociatedModifs     : output associated modification list
      *
      **/
	virtual HRESULT GetSolvedOperations( CATListOfCATUnicodeString& oOperations , CATListOfCATICfgModification_var& oAssociatedModifs ) const = 0;

     /**
      *
      * Returns unsolved operations in oHistories as List of CATICfgHistory_var 
      * @param oHistories           : ouput operation list
      *
      **/
	virtual HRESULT GetUnsolvedOperations( CATListOfCATICfgHistory_var& oHistories ) const = 0;


/** @nodoc
 * Returns all the specs used in the EffVal
 * @param  outSpecList 
 */
	virtual HRESULT GetListOfSpecs( CATListOfCATICfgSimpleSpecification_var& outSpecList ) const = 0;
};

// Handler definition 
CATDeclareHandler(CATICfgEffVal, CATBaseUnknown);

#endif 
