// COPYRIGHT Dassault Systemes 2013


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATMmrGraphicPropertiesModes_H
#define CATMmrGraphicPropertiesModes_H

#include "MecModItfCPP.h" 

/**
  * Class to manage modes or options for GraphicProperties.
  * <b>Role:</b>This class contains tools to set modes or options to manage
  * the graphics properties.
  */
class ExportedByMecModItfCPP CATMmrGraphicPropertiesModes
{

public :
 
  /*
  *
  *   The graphic properties concerned by an operation.
  *   Graphic properties are color, opacity [and effect].
  *   <br><b>Role:</b><br> Defines the graphic properties that can be reported.
  *
  *   NONE_GP                         : Graphic properties is not copied<br>
  *   ALL_GP                          : Graphic properties of feature and graphic properties of faces seen in 3D is copied.
  *   FEATURE_GP                      : Graphic properties of feature is copied<br>
  *   FACES_OVERLOADED_GP             : Graphic properties of faces overloaded is copied
  *   FEATURE_AND_FACES_OVERLOADED_GP : Graphic properties of feature and ONLY graphic properties of faces overloaded are copied<br>
  */
  enum MmrGraphicPropertiesReportMode
  {
    NONE_GP,
    ALL_GP,
    FEATURE_GP,
    FACES_OVERLOADED_GP,
    FEATURE_AND_FACES_OVERLOADED_GP
  };

};    
#endif
