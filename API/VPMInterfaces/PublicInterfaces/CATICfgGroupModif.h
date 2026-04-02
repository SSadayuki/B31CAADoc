//COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================   

#ifndef CATICfgGroupModif_H
#define CATICfgGroupModif_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Interface to  define common effectivity expressions.
 * <b>Role</b>: This interface can be used to create or query effectivity expressions that are common across all modifications.
 * Any instance of a class implementing CATIVpmFactoryManager
 * ( @href CATIVpmFactoryManager ) a DS component. (like CATICfgManager can be used to query
 * for the implementation of this interface. </p>
 * @see CATICfgManager.
*/

// -- System

#include "CATBaseUnknown.h"
// -- VPM2 Infrastructure Config
#include "GUIDVPMInterfaces.h"
#include "CATIAV5Level.h"

// -- forward declaration
class CATListValCATICfgModification_var;
class CATListValENOVISubScribeGroupMod_var;
class CATUnicodeString;
class CATListValCATUnicodeString;
class CATICfgModification_var;
class CATICfgNormalValue_var;
class CATICfgORExpression_var;
class ENOVISubScribeGroupMod_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgGroupModif ;
#else
extern "C" const IID IID_CATICfgGroupModif ;
#endif


//-----------------------------------------------------------------------------

class ExportedByGUIDVPMInterfaces CATICfgGroupModif: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public:

/** @nodoc */
	virtual HRESULT SetCondition(CATICfgNormalValue_var &iVal)=0;


//IR 421865 - Exposed GetCondition for Volvo 

     /**
      * Returns the Common Condition Effectivity expression of the Group Mod.
      * @param Val
      *    The NormalValue which holds the common condition effectivity information.
      * @return
      * <ul>
      *     <li> S_OK if the method execution was successful.</li>
      *     <li> E_FAIL if the method failedl.</li>
      *     <li> Common Condition Effectivity expression, if defined.</li>
      * </ul>
      */

	virtual HRESULT GetCondition(CATICfgNormalValue_var &oVal)=0;
    	
/**
 * Adds a modification.
 *  @param iMod
 *    The modification to be added to the GroupModif.
 *
 *  @param iCheckOnly
 *    Keep the default value.
 */
	virtual HRESULT AddModification(CATICfgModification_var &iMod, int iCheckOnly = 0)=0;

/**
 * Removes a modification.
 *  @param iMod
 *    The modification to be removed from the GroupModif.
 *
 *  @param iCheckOnly
 *    Keep the default value.
 */
	virtual HRESULT RemoveModification(CATICfgModification_var &iMod, int iCheckOnly = 0)=0;

/**
 * Retrieves a modification list.
 *  @param oModList
 *    The retrieved modification list.
 */
	virtual HRESULT GetModificationList(CATListValCATICfgModification_var & oModList)=0;

/** @nodoc */
	virtual HRESULT AddSubScriber(ENOVISubScribeGroupMod_var &iSuscriber)=0;

/** @nodoc */
	virtual HRESULT RemoveSubScriber(ENOVISubScribeGroupMod_var &iSuscriber)=0;

/** @nodoc */
	virtual HRESULT GetSubScriberList(CATListValENOVISubScribeGroupMod_var & oSuscriberList)=0;

/** @nodoc */
        virtual HRESULT Dump() = 0;

/** @nodoc */
	virtual HRESULT SetOrExp(CATICfgORExpression_var &iOrExp)=0;

/** @nodoc */
	virtual HRESULT GetOrExp(CATICfgORExpression_var &iOrExp)=0;

/** @nodoc */
        virtual HRESULT GetSubScriberNames(CATListValCATUnicodeString &oNames)=0;

/** @nodoc */
        virtual HRESULT IsModificationAlreadyIn(const CATICfgModification_var& iMod) = 0;
		
#if defined(CATIAV5R11)
/** @nodoc */
	virtual HRESULT SetCondition(const CATUnicodeString 			&iDomain,
						 const CATICfgNormalValue_var 		&iVal) = 0;
    
/** @nodoc */
	virtual HRESULT GetCondition(const CATUnicodeString 	&iDomain,
						 CATICfgNormalValue_var 	&oVal) = 0;
#endif
  };
  //-----------------------------------------------------------------
  // Handler definition 
  //-----------------------------------------------------------------
  CATDeclareHandler(CATICfgGroupModif, CATBaseUnknown);
//
#endif
