#ifndef CATIAddLibrary_h
#define CATIAddLibrary_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U5 
 */

// inherited from
#include <CATBaseUnknown.h>

// Module
#include "KnowledgeItf.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATIAddLibrary;
#else
extern "C" const IID IID_CATIAddLibrary;
#endif


/**   
 * Interface to implement to add libraries.
 * <b>Role</b>: This interface helps us to find your specific user functions that you would like to add to our language.
 * <br>
 * Usage:    
 *   If you want to customise the Knowledge tools (by adding functions, measures,etc...)<br>
 * 
 * <li>Implement this interface on one class that we call XX for example (that
 * will also implement CATICreateInstance).</li>
 * <li>In the Add method create all the functions, measures, etc... and add them to CATParmDictionary.</li>
 * <li>Create an Object Modeler dictionary (.dico file) explaining that XX implements CATICreateInstance and CATIAddLibrary in
 your shared library</li><br>
 * <br>Those methods will be called by our product at its initialisation <br> 
 * <br>For example, you may want to create a max(double,double) function that could then be used in formulas, checks or programs<br>
 * <br>
 * The algorithm to find all functions is the following :<br>
 * We scan the Object Modeler Dictionnaries to find all objects implementing CATIAddLibrary and CATICreateInstance :
 * <br> for each object, we create it with CATICreateInstance, then get the
 * CATIAddLibrary interface on it and call the Add Method.<br>
 * In the Add method, you can use the CreateFunction method. <br>
 * @see CATICkeSignature, CATICkeArg
 */
class ExportedByKnowledgeItf CATIAddLibrary : public CATBaseUnknown
{
public :

/**
 * Add your own user functions here.
 */
virtual void Add ()  = 0;

private:

  // to define ClassName
  CATDeclareInterface;


}; 

CATDeclareHandler(CATIAddLibrary,CATBaseUnknown);

#endif


