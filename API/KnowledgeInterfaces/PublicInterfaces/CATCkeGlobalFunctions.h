// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U1 
 */

#ifndef CATCkeGlobalFunctions_h
#define CATCkeGlobalFunctions_h

#include "KnowledgeItf.h"
#include "CATBaseUnknown.h"
#include "CATICkeParmFactory.h"
#include "CATIParmDictionary.h"
#include "CATICkeFunctionFactory.h"

//-------------------------------------------------------------------
/**   
 * Returns global dictionnaries and factories.
 * <p>
 * @see CATIParmDictionary, CATICkeParmFactory
 */
//-----------------------------------------------------------------------
class  ExportedByKnowledgeItf CATCkeGlobalFunctions
{

public :

/** 
 * Returns the volatile factory of values.
 */
static CATICkeParmFactory_var GetVolatileFactory ();

/** 
 * Returns the dictionary of types.
 */
static CATIParmDictionary_var GetParmDictionary ();

/** 
 * Returns the factory of functions.
 */
static CATICkeFunctionFactory_var GetFunctionFactory ();

/**
 * Initialize Literals environment.
 */
static void InitializeLiteralsEnvironment();

};
   
#endif
