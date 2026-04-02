#ifndef CATVREventIterator_H
#define CATVREventIterator_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATVisVR.h"
#include "CATListOfCATVRDeviceEvent.h"

class CATVRClientIterator;
class CATVRDeviceEvent;
class CATDeviceManager;
class CATCleanManager;

/**
  * Class to directly access the device driver events in the event set structure.
  * <b>Role</b> : Whereas the @href CATVRDispatcherOnIdle gives you access to the event
  * on every idle, the CATVREventIterator allows you to directly access the event set
  * structure anytime. 
  * The iterator also acts as a filter so that you can only access the events whose types
  * were specifified at the object construction. 
  * You iterate on a frozen event set. Call @href #Synchronize to update that frozen set
  * with the newly arrived events.
  * You may access the event set from any thread.
  */
class ExportedByCATVisVR CATVREventIterator
{
public :

  /**
  * Construct a CATVREventIterator
  * <br>Do not use the created instance in a thread different from the one
  * used for creation.
  * @param iEventsToParse 
  *   iEventsToParse refers to the event types you are interested in.
  *   You will then iterate on these event types only.
  */
  CATVREventIterator(CATListOfCATVRDeviceEvent iEventsToParse);

  ~CATVREventIterator();

  /** 
  * Return the current pointed event.
  */  
  CATVRDeviceEvent* Current();

  /** 
  * Return the newest event you may access in the event set.
  */
  CATVRDeviceEvent* Newest();

  /** 
  * Return the oldest event you may access in the event set.
  */
  CATVRDeviceEvent* Oldest();
  
  /** 
  * Return the event immediatly more recent than the last pointed event.
  * <br><b>Legal values</b>: The returned event pointer may be NULL.
  */
  CATVRDeviceEvent* Newer();

  /** 
  * Return the event immediatly older than the last pointed event.
  * <br><b>Legal values</b>: The returned event pointer may be NULL.
  */
  CATVRDeviceEvent* Older();

  /**
  * Update the frozen iteration event set on the dynamic event set.
  * <br>At anytime, you may only access the events posted between the two last 
  * calls to Synchronize. This call is time consuming. You should not
  * use it at a frequency high above the draw rate.
  */
  void Synchronize();

private:

  CATVRClientIterator*    _iterator;
  CATDeviceManager*       _deviceManager;
  CATCleanManager*        _cleanManager;

};

#endif
