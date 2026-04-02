// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
#ifndef CATIMfgNavigateActivityView_h
#define CATIMfgNavigateActivityView_h

#include "CATINavigateObject.h"
#include "MfgItfEnv.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgNavigateActivityView;
#else
extern "C" const IID IID_CATIMfgNavigateActivityView;
#endif

/**
 * Interface to display the manufacturing model in the Manufacturing View
 * when sorted by activities.
 *
 * <b>Role</b>: interface to be implemented by any object to customize the way it is displayed 
 * (label and children nodes) in the Manufacturing View graph sorted by activities.
 *
 * @see CATINavigateObject
 **/
class ExportedByMfgItfEnv CATIMfgNavigateActivityView: public CATINavigateObject
{
  CATDeclareInterface ;

  public:
} ;

CATDeclareHandler( CATIMfgNavigateActivityView, CATINavigateObject);

#endif//CATIMfgNavigateActivityView_h
