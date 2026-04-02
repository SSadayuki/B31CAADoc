#ifndef CATIMfFvertex_h
#define CATIMfFvertex_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfFvertex;
#else
extern "C" const IID IID_CATIMfFvertex;
#endif

/**
 * Interface to filter a selecting feature of FVertex type.
 * <b>Role:</b>
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of FVertex type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIFVertex object.
 */
class ExportedByMecModItfCPP CATIMfFvertex : public CATIMfBRep
{
  CATDeclareInterface;
  public:
 
};

CATDeclareHandler( CATIMfFvertex, CATIMfBRep ) ;

#endif
