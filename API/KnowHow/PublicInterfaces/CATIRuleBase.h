/* -*-c++-*- */
#ifndef CATIRuleBase_H
#define CATIRuleBase_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "Rule.h"
#include "CATUnicodeString.h"
#include "CATISpecObject.h"
#include "CATIInstance.h"
#include "CATIRuleSet.h"
#include "CATExpertSolveModeEnum.h"

class CATListValCATISpecObject_var;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATIRuleBase ;
#else
extern "C" const IID IID_CATIRuleBase ;
#endif


/**
* Interface dedicated to the rulebase behaviour.
*
* <b>Role</b> Entry point to the inference engine of Knowledge Expert.
* This interface defines methods to feed the inference engine with facts objects, or roots of facts objects.
* A fact is an object seen through the interface @href CATIInstance.
* A root of facts is an entry point to scan a hierarchy of objects providing facts (it has to implement CATIInstancesProvider).
* The rulebase can either update or query the root of facts for facts. This interface also
* provides methods for being solved i.e. checking the checks and executing the rules.
* It also provides methods for importing external rulesets, rules and checks.
*/

class ExportedByRule CATIRuleBase: public CATIRuleSet
{
	CATDeclareInterface;
	
public:
	/**
	* Adds a list of facts to the rule base.
	*
	* @param ilFacts a list of facts.
	*
	* @return true if the add was successfully made.
	*/
	virtual int             AddListOfInstances(CATListValCATBaseUnknown_var& ilFacts)=0 ;

	/** @nodoc */
	virtual int             AddListOfFacts(CATListValCATISpecObject_var& ilFacts)=0 ;

	/**
	* Adds a fact.
	*
	* @param spFact a fact.
	*
	* @return true if this function was successfully performed.
	*/
	virtual int             AddFact(const CATIInstance_var& spFact)=0 ;

	/** @nodoc */
	virtual int             AddFact(const CATISpecObject_var& spFact)=0 ;

	/**
	* Removes a fact.
	*
	* @param spFact a fact.
	*/
	virtual void            RemoveFact(const CATIInstance_var& spFact)=0 ;

	/** @nodoc */
	virtual void            RemoveFact(const CATISpecObject_var& spFact)=0 ;

	/**
	* Reloads a fact.
	*
	* Forces the inference engine to take again a fact into account (removes it and
	* adds it a second time).
	*
	* @param spFact a fact.
	*/
	virtual void            ReloadFact(const CATIInstance_var& spFact)=0 ;

	/** @nodoc */
	virtual void            ReloadFact(const CATISpecObject_var& spFact)=0 ;

	/**
	* Solves the rule base.
	*
	* This method first solves the checks and then applies the rules of the rule base over
	* the set of facts known by the rule base.
	*
	* @param iIsSolveNonOptimized true for the non optimized mode, else false.
	*
	* @return number of rules triggered.
	*/
	virtual int             Solve (int iIsSolveNonOptimized = 0)=0 ;

	/** @nodoc */
	virtual int             SolveBackward (const CATIRuleBaseComponent_var& spRule)=0 ;

	/**
	* Solves the rule base.
	*
	* This method first solves the checks and then applies the rules of the rule base over
	* the set of facts known by the rule base.
	* This method doesn't make a geometrical update.
	*
	* @param iIsSolveNonOptimized true for the non optimized mode, else false.
	*
	* @return number of rules triggered.
	*/
	virtual int             SolveWithoutUpdate(int iIsSolveNonOptimized = 0)=0 ;

	/**
	* Returns the owner of the relation set the rulebase belongs to.
	*
	* @return a spec object.
	*/
	virtual CATISpecObject* GetRuleBaseOwner() = 0;

	/**
	* Sets the owner of the rulebase.
	*
	* The owner is a spec object that provides for a container.
	*
	* @param spSpecObject a spec object.
	*/
	virtual void            SetOwner(CATBaseUnknown_var spSpecObject) = 0;

	/**
	* Adds a root for the search of the facts.
	*
	* @param spRootfacts a facts root.
	*/
	virtual void			AddRootOfFacts(CATBaseUnknown_var spRootfacts) = 0;

	/**
	* Gets a copy of the set of facts roots.
	*
	* @return a facts root.
	*/
	virtual CATListValCATBaseUnknown_var* GetRootsOfFacts() = 0;

	/**
	* Removes a facts root.
	*
	* @param spRootfacts a facts root.
	*/
	virtual void			RemoveRootOfFacts(CATBaseUnknown_var spRootfacts) = 0;
	
	/**
	* Sets the solve mode of the rulebase.
	*
	* @param iSolveMode solve mode (@href CATExpertSolveModeEnum#SolveModeEnum ).
	*/
	virtual void			SetSolveMode(CATExpertSolveModeEnum::SolveModeEnum iSolveMode)=0;

	/**
	* Gets the solve mode of the rulebase.
	*
	* @return solve mode (@href CATExpertSolveModeEnum#SolveModeEnum ).
	*/
	virtual CATExpertSolveModeEnum::SolveModeEnum GetSolveMode()=0;

	/**
	* Imports in the rulebase, the contents of the rulebase of another document.
	*
	* @param iPath  full name of the document.
	* @param iForce true if the import should replace objects with the same name.
	*/
	virtual void			 Import(const CATUnicodeString& iPath, boolean iForce = TRUE)=0;


	/**
	* Imports from the rulebase, the contents of this rulebase to another document.
    * Creates a linked rulebase.
	*
	* @param spRootfacts  Root of the document.
	* @param iForce true if the import should replace objects with the same name.
	*/
	virtual void			 ImportWithLink(CATBaseUnknown_var spRootfacts, boolean iForce = TRUE)=0;

	/**
	* Imports in the rulebase the content of another rulebase.
	*
	* @param spImportedRulebase a rulebase.
	* @param iFonction a function triggered on the conflicting object.
	*/
	virtual void              ImportRuleBase(const CATIRuleBase_var& spImportedRulebase,
		conflictingImportFunctionPtr iFonction = NULL)=0;

	/**
	* Returns a volatile (not persistent), non changeable copy of the current rulebase.
	*
	* @return A volatile copy.
	*/
	virtual CATIRuleBase_var VolatileCopy()=0;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIRuleBase, CATIRuleSet) ;

#endif
