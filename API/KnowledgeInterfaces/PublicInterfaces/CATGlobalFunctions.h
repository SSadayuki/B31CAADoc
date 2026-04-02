#ifndef CATGlobalFunctions_h
#define CATGlobalFunctions_h

// COPYRIGHT DASSAULT SYSTEMES 2000


/** 
* @CAA2Level L1
* @CAA2Usage U1 
*/

#include "CATLifSpecs.h"

#include "CATUnicodeString.h"
#include "CATIForwardsDecl.h"

class CATIInstanciation;

/**
* Internal Use.
*/
typedef HRESULT (*CATInstanciationFunction) ( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, CATIInstance_var& oInstanciated/*, CATIInstanciation*
											 iInstanciator*/);
											 
/**   
 * Class dedicated to the acquisition of the type dictionary.
 * <b>Role</b>: This class is used to get a handler on the type dictionary.<br>
 * @see CATIType
 * @see CATITypeDictionary
   */
#include "CATITypeDictionary.h"

class ExportedByCATLifSpecs CATGlobalFunctions {
public:

	  /**
	  * Returns the type dictionary.<br> 
	  */
	static CATITypeDictionary_var GetTypeDictionary();

  /**
   * Frees the dictionary. Necessary fro MLK clean-up from both
   * CATIA and ENOVIA.
   */
  static void FreeDictionary();

  /** @nodoc */
  static CATUnicodeString InstanciatorFromStartup (); 

  /** @nodoc */
  static CATUnicodeString InstanciatorFromContainer (); 

  /** @nodoc */
  static CATUnicodeString InstanciatorFromFather (); 

private:
	static CATITypeDictionary_var theGlobalDico;
	friend class CATCkeDictionary;
};

#endif 
