#ifndef CATIMfWireFvertex_h
#define CATIMfWireFvertex_h

// COPYRIGHT DASSAULT SYSTEMES 2004 

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfWireFvertex;
#else
extern "C" const IID IID_CATIMfWireFvertex;
#endif

/**
 * Interface to filter a selecting feature of WireFVertex type.
 * <b>Role:</b>
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of WireFVertex type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIWireFVertex object.
 */
class ExportedByMecModItfCPP CATIMfWireFvertex : public CATIMfBRep
{
  CATDeclareInterface;
  public:
  
};

CATDeclareHandler( CATIMfWireFvertex, CATIMfBRep ) ;

#endif

