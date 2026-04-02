#ifndef CATISIMAbsoluteClock_H
#define CATISIMAbsoluteClock_H
// COPYRIGHT Dassault Systemes 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

//===================================================================
// CATISIMAbsoluteClock.h
// Define the CATISIMAbsoluteClock interface
//===================================================================
#include "SIMItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySIMItfCPP IID IID_CATISIMAbsoluteClock ;
#else
extern "C" const IID IID_CATISIMAbsoluteClock;
#endif

class ExportedBySIMItfCPP CATISIMAbsoluteClock: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public:
    
    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
    // Require the absolute clock of the simulation to stop 
    /** @nodoc */
    virtual HRESULT Pause () = 0;
    
    // Get the current date of the absolute clock of the simulation (expressed in seconds)
    /** @nodoc */
    virtual HRESULT get_AbsoluteClock(double& oClockValue) = 0;

    // this method only changed the current date displayed but does not 
	// ensure an effective play to this date, use the PlayJump method of
	// CATISIMPlayer interface to have a coherent state of the simulation 
    /** @nodoc */
    virtual HRESULT put_AbsoluteClock(double  iClockValue)=0;

    // Update the duration of the simulation, if the agent is modified
    /** @nodoc */
    virtual HRESULT UpdateDuration() = 0;
  };

/** @nodoc */
CATDeclareHandler(CATISIMAbsoluteClock,CATBaseUnknown);

#endif
