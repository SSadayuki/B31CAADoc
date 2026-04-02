#ifndef CATLPFKRemoteControl_H
#define CATLPFKRemoteControl_H 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATVisualization.h"

/**
* Class to manage the lights of a connected LPFK.
*/
                          
class ExportedByCATVisualization CATLPFKRemoteControl                          
{

public:
  /**
  * Lights and Unlights the lpfk buttons.
  * @param iLightIndex The index of the light your affecting.
  * @param iLighted     Whether or not the light is to be on or off.
  */
  static void SetLight( int iLightIndex, int iLighted);

  /**
  * Gets the status of a given light on the LPFK.
  * @param iLightIndex The index of the light you're querying.
  * @return Whether the light is On (1) or Off (0)
  */
  static int  GetLight( int iLightIndex);

  /**
  * Returns the status of all lights.
  * @return An unsigned int in which the i-eme light status
  * is stored as i order bit.
  */
  static unsigned int GetLights( void);

  /**
  * Set a number of lights.
  * @param iLights  An unsigned int in which the i-eme light status is stored as i order bit.
  */
  static void SetLights(unsigned int iLights);


protected:  
  static void Synchronize( void);

private:
  static unsigned int _lights;

};

#endif
