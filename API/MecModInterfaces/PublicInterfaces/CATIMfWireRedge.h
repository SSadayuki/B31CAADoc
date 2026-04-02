#ifndef CATIMfWireRedge_h
#define CATIMfWireRedge_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/** 
 * @CAA2Level L1 
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfWireRedge;
#else
extern "C" const IID IID_CATIMfWireRedge;
#endif

/**
 * Interface to filter a selecting feature of WireRedge type.
 * <b>Role:</b>
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of WireRedge type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIWireREdge object.
 */
class ExportedByMecModItfCPP CATIMfWireRedge : public CATIMfBRep
{
  CATDeclareInterface;
  public:
  
};

CATDeclareHandler( CATIMfWireRedge, CATIMfBRep ) ;

#endif

