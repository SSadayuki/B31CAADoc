// COPYRIGHT Dassault Systemes 2002


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATMmrLinearBodyServices_H
#define CATMmrLinearBodyServices_H

#include "CATMechanicalModeler.h" 

#include "CATBaseUnknown.h"

/**
  * Class to manage Ordered Geometrical Set.
  * <b>Role:</b>This class contains methods for Ordered Geometrical Set (OGS) features.
  * An OGS is a specific GSMTool feature. Refer to the @href CATIGSMTool interface 
  * for details.
  */
class ExportedByCATMechanicalModeler CATMmrLinearBodyServices
{

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
  static HRESULT Insert(const CATBaseUnknown_var& iObject);

};    
#endif
