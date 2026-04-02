#ifndef CATPRINTDEVICE_H
#define CATPRINTDEVICE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATPrintImage.h"

class CATPrintGenerator;
class CATPrintParameters;
class CATPrintImage;

/**
 * Class to create print devices.
 * <br>
 * <b>Role</b>: This class is abstract, so you need to derive this class 
 * to build print devices.
 */
class ExportedByCATPrintBase CATPrintDevice : public CATBaseUnknown
{
  CATDeclareClass; 
  
public:

/**
 * Constructs a CATPrintDevice.
 */
    CATPrintDevice();
    virtual ~CATPrintDevice();

/**
 * Initializes the device.
 * <br> Pure virtual method.
 * @param iParameters
 *   The generator parameters made available through SetGenerator.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 if device initialization failed, 1 otherwise.
 */
    virtual int Begin(const CATPrintParameters& iParameter) = 0;

/**
 * Gets the generator associated to the device.
 * @return
 *   The generator associated to the device.
 */
    virtual CATPrintGenerator* GetGenerator(void) const;

/**
 * Ends the device.
 * <br> Pure virtual method.
 */
    virtual void End(void) = 0 ;
 
/**
 * Prints a printable object.
 * @param iObject
 *   The printable object.
 * @param iParameters
 *   The print parameters (see CATPrintParameters).
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
  virtual int Print(CATBaseUnknown* iObject, const CATPrintParameters& iParameters);
  	
/**
 * @nodoc
 */
  int Print(CATLISTP(CATPrintImage)* iImages, const CATPrintParameters& iParameters);

/**
 * @nodoc
 */
  int PrintCGMv4(CATPrintImage* iImage, const CATPrintParameters& iParameters);

protected:

/**
 * Defines the generator associated to the device.
 * @param iGenerator
 *   The generator associated to the device (see CATPrintGenerator).
 */
    virtual void SetGenerator(CATPrintGenerator* iGenerator);
	
/**
 * @nodoc
 */
    CATPrintGenerator *_deviceGenerator;        
};

#endif 


