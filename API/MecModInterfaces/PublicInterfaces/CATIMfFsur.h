#ifndef CATIMfFsur_h
#define CATIMfFsur_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"
#include "CATLISTV_CATInterfaceObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfFsur;
#else
extern "C" const IID IID_CATIMfFsur;
#endif

/**
 * Interface to filter a selecting feature of Fsur (for functional surface) type.
 * <b>Role:</b>
 * This interface allows you to filter a selecting feature ( @href CATIMfBRep ) of Fsur type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIRSur object.
 * This featurization from the CATIRSur has to be done in <tt>MfFunctionalFeaturization</tt> mode to create
 * a CATIMfFsur. See @href CATMfFeaturizeMode for featurization modes. 
 */
class ExportedByMecModItfCPP CATIMfFsur : public CATIMfBRep
{
  CATDeclareInterface;
  public:

/**
 * @nodoc
 */
  virtual CATListValCATInterfaceObject_var GetSketchElement()=0;

};

CATDeclareHandler( CATIMfFsur, CATIMfBRep ) ;

#endif








