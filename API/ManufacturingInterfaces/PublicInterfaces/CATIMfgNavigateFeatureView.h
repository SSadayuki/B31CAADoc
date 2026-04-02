// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================

#ifndef CATIMfgNavigateFeatureView_h
#define CATIMfgNavigateFeatureView_h

/**
 * @CAA2Level L1
 * @CAA2Usage U5
*/

#include "CATINavigateObject.h"
#include "MfgItfEnv.h"


/**
 * Interface to display the manufacturing model in the Manufacturing View
 * when sorted by features.
 *
 * <b>Role</b> : This interface is to implemented by manufacturing features to customize
 * the way they are displayed (label and children nodes) in the Manufacturing View sorted
 * by features.
 *
 **/


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgNavigateFeatureView;
#else
extern "C" const IID IID_CATIMfgNavigateFeatureView;
#endif


class ExportedByMfgItfEnv CATIMfgNavigateFeatureView: public CATINavigateObject
{
  CATDeclareInterface ;

  public:
} ;

CATDeclareHandler( CATIMfgNavigateFeatureView, CATINavigateObject);

#endif//CATIMfgNavigateFeatureView_h
