#ifndef CATIMfRsur_h
#define CATIMfRsur_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"
#include "CATLISTV_CATInterfaceObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfRsur;
#else
extern "C" const IID IID_CATIMfRsur;
#endif

/**
 * Interface to filter a selecting feature of Rsur (for relimited surface) type.
 * <b>Role:</b> 
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of Rsur type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIRSur object.
 * This featurization from the CATIRSur has to be done in <tt>MfRelimitedFeaturization</tt>
 * mode to create a CATIMfRsur. See @href CATMfFeaturizeMode for featurization modes.
 */
class ExportedByMecModItfCPP CATIMfRsur : public CATIMfBRep
{
  CATDeclareInterface;
  public:

/** 
 * @nodoc
 */
  virtual CATListValCATInterfaceObject_var GetSketchElement()=0;

};

CATDeclareHandler( CATIMfRsur, CATIMfBRep ) ;

#endif
