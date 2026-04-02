// COPYRIGHT DASSAULT SYSTEMES 2000
#ifndef CATICkeSetOfEquationsFactory_H
#define CATICkeSetOfEquationsFactory_H

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "KnowledgeItf.h"
#include "CATBaseUnknown.h"
#include "CATIParmPublisher.h"
#include "CATCke.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKnowledgeItf IID IID_CATICkeSetOfEquationsFactory ;
#else
extern "C" const IID IID_CATICkeSetOfEquationsFactory ;
#endif

/**
 * Interface dedicated to the creation of Set of Equation features.
 */
class ExportedByKnowledgeItf CATICkeSetOfEquationsFactory
: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
  * Create a set of equations between parameters 
  * (example : x+y=z and x*2=y).
  * 
  * if a syntax error occurs, NULL_var is returned and a 
  * CATCkeParseException exception is raised<br>
  * 
  * @param iRelationName     = set of equations' name
  * @param iComment          = comment
  * @param iListOfParameters = (pointer on list of CATBaseUnknown_var) 
  *                            contains literal used in inputs or outputs 
  *                            (x, y and z in our example)  
  * @param iBody             = contains the string describing the set of 
  *                            equations ("x+y=z and x*2=y" in our example)
  * @param iRoot             = (CATIParmPublisher) used to name parameters with 
  *                            RelativeName (root) method and so to be able to 
  *                            recognize parameters by their name
  *                            Not used in realnames = false mode
  * @param iRealnames  = 2 possibilities to name a parameter in the body. 
  * <tt>CATCke::True</tt>  names used are the one returned by RelativeName 
  *                        (root) and we try to recognize names used in the 
  *                        body with parameters of iListParameters..
  * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
  *                        a1 meaning the first parameter of iListParameters, 
  *                        a2, the second one, etc....<br>
  * We advise you strongly to use this second method in your application to 
  * avoid NLS problems .  
  *  
  * @return = Set of equations created or NULL_var if syntax error
  */
  virtual CATICkeRelation_var CreateSetOfEquations(
    const CATUnicodeString      &iSetOfEquationsName,
    const CATUnicodeString      &iComment,
    const CATCkeListOfParm       iListOfParameters,
    const CATUnicodeString      &iBody,
    const CATIParmPublisher_var &ispRoot = NULL_var,
    const CATCke::Boolean       &iRealnames = 1,
	const CATCke::Boolean       &iImmediateSolving = 1  ) = 0;

 /**
 * @nodoc
  * Create a set of equation expression from a text string.
  */
  virtual CATICkeExpression_var CreateSetOfEquations( 
    const CATUnicodeString &iName,
    const CATUnicodeString &iComment,
    const CATUnicodeString &iParam,
    const CATUnicodeString &iBody ) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATICkeSetOfEquationsFactory, CATBaseUnknown );

#endif
