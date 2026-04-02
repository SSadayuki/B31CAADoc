#ifndef CATIMmiUseLinearBodyServices_h
#define CATIMmiUseLinearBodyServices_h

// COPYRIGHT DASSAULT SYSTEMES 2008

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATMecModUseItf.h"

#include "CATBaseUnknown.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseLinearBodyServices;
#else
extern "C" const IID IID_CATIMmiUseLinearBodyServices;
#endif

/**
* Interface to manage Ordered Geometrical Set.
* Use CATMmiUseServicesFactory::CreateMmiUseLinearBodyServices to get the services component.
* <b>Role:</b>This class contains methods for Ordered Geometrical Set (OGS) features.
* An OGS is a specific GSMTool feature. Refer to the @href CATIGSMTool interface 
* for details.
*/
class ExportedByCATMecModUseItf CATIMmiUseLinearBodyServices: public CATBaseUnknown
{
  CATDeclareInterface;

public :

  /**
  * Manages the linearity inside the Ordered Geometrical Set.
  * <br><b>Role:</b> An Ordered Geometrical Set is a GSMTool where a linearity 
  * must be respected. Consequently, after an aggregation or an reorder
  * inside an OGS or whenever are modified the inputs of a feature inside a OGS,
  * you must call this method to ensure the linearity inside the surfacic body. 
  * Important thing : the feature must be updated before calling Insert.
  * @param iObject
  *   The geometrical feature newly integrated, moved or modified inside an 
  *   Ordered Geometrical Set. 
  *   This feature must implement @href CATIInputDescription 
  *  
  */
  virtual HRESULT Insert(const CATBaseUnknown_var& iObject) = 0;

};

CATDeclareHandler(CATIMmiUseLinearBodyServices, CATBaseUnknown);

#endif


