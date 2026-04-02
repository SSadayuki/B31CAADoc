#ifndef CATIMfBorderRedge_h
#define CATIMfBorderRedge_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfBorderRedge;
#else
extern "C" const IID IID_CATIMfBorderRedge;
#endif

/**
 * Interface to filter a selecting feature of BorderRedge type.
 * <b>Role:</b>
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of BorderRedge type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIBorderREdge object.
 */
class ExportedByMecModItfCPP CATIMfBorderRedge : public CATIMfBRep
{
  CATDeclareInterface;
  public:

};

CATDeclareHandler( CATIMfBorderRedge, CATIMfBRep ) ;

#endif








