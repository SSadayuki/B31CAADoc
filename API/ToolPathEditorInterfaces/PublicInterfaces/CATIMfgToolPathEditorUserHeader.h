// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
#ifndef CATIMfgToolPathEditorUserHeader_H
#define CATIMfgToolPathEditorUserHeader_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "TPEItfEnv.h"

#include "CATIMfgToolPathEditorHeader.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByTPEItfEnv IID IID_CATIMfgToolPathEditorUserHeader ;
#else
extern "C" const IID IID_CATIMfgToolPathEditorUserHeader ;
#endif

//------------------------------------------------------------------

/**
 * Interface to add user command to the sub-menu of the tool path in the PPR Tree.
 */
class ExportedByTPEItfEnv CATIMfgToolPathEditorUserHeader: public CATIMfgToolPathEditorHeader
{
  CATDeclareInterface;
  public:

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIMfgToolPathEditorUserHeader, CATIMfgToolPathEditorHeader );

#endif
