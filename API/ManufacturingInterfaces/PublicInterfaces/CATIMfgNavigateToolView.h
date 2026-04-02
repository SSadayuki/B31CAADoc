// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
#ifndef CATIMfgNavigateToolView_h
#define CATIMfgNavigateToolView_h

#include "CATINavigateObject.h"
#include "MfgItfEnv.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgNavigateToolView;
#else
extern "C" const IID IID_CATIMfgNavigateToolView;
#endif


/**
 * Interface to display the manufacturing model in the Manufacturing View
 * when sorted by tools.
 * <b>Role</b>: interface to be implemented by any object to customize the way it is displayed 
 * (label and children nodes) in the Manufacturing View graph sorted by tools.
 * @see CATINavigateObject
 **/
class ExportedByMfgItfEnv CATIMfgNavigateToolView: public CATINavigateObject
{
  CATDeclareInterface ;

  public:
} ;

CATDeclareHandler( CATIMfgNavigateToolView, CATINavigateObject);

#endif//CATIMfgNavigateToolView_h
