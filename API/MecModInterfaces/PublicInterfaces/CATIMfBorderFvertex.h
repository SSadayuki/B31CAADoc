#ifndef CATIMfBorderFvertex_h
#define CATIMfBorderFvertex_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfBorderFvertex;
#else
extern "C" const IID IID_CATIMfBorderFvertex;
#endif

/**
 * Interface to filter a selecting feature of BorderFvertex type.
 * <b>Role:</b>
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of BorderFvertex type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIBorderFVertex object.
 */
class ExportedByMecModItfCPP CATIMfBorderFvertex : public CATIMfBRep
{
  CATDeclareInterface;
  public:

};

CATDeclareHandler( CATIMfBorderFvertex, CATIMfBRep ) ;

#endif








