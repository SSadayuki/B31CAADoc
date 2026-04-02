#ifndef CATVRDeviceEvent_H
#define CATVRDeviceEvent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/


#include "CATVisVR.h"
#include "CATLib.h"
#include "CATString.h"

class CATDeviceGenericField;
class CATDeviceField;
class CATDeviceBox;
class CATInfoDeviceEvent;
class CATMutex;

/**
* Class that contains all the data about one event of  any device.
*  <br><b>Role</b>: this class represents one event that is emitted by the drivers of peripherals.
*/
class ExportedByCATVisVR CATVRDeviceEvent 
{
public:
  
  /**
  * Returns the name of the device event.
  */
  CATString GetEventName();
  
  /**
  * Returns the ID of the device driver that had emitted this DeviceEvent.
  */
  int GetDeviceDriverID();
  
  /** 
  * Returns the time when the event was generated.
  */
  CATTimeValue GetTimestamp();
  
  
  
  /** 
  * Returns the number of integers contained in this event. 
  */
  int GetIntegerSize();
  
  /** 
  * Returns an array containing all integers contained in this event.
  * The length of this array can be retrieved through @href #GetIntegerSize
  */
  int* GetIntegerValue();
  
  /** 
  * Returns the number of booleans  contained in this event. 
  */
  int GetBooleanSize();
  
  /**
  *  Returns an array containing all booleans contained in this event.
  *  The length of this array can be retrieved through @href #GetBooleanSize()
  */
  int* GetBooleanValue();
  
  /** 
  * Returns the number of doubles contained in this event. 
  */
  int GetDoubleSize();
  
  /** 
  * Returns an array containing all doubles contained in this event.
  * The length of thi sarray can be retrieved through @href #GetDoubleSize()
  */
  double* GetDoubleValue();
  

  



  /**
   * Destructor non iteratif.
   */
  virtual ~CATVRDeviceEvent();  
  
  /** 
  * @nodoc
  * Returns a pointer to the next emitted device event.
  * <br><b>Role</b>: 
  * Use the @href CATVRNotification and @href CATVREventIterator
  * More than one event could have been generated during the current event processing.
  * In that case the others are listed in a chained list.
  * The first event in that list is the more recent, and so on for the others. 
  * this method  returns the next event in the list.
  * If there isn't any event, it returns NULL.
  */
  CATVRDeviceEvent* NextEvent();
  
  /** 
  * @nodoc
  * Returns a pointer to the previous emitted device event.
  * <br><b>Role</b>: 
  * Deprecated. Use the @href CATVRNotification and @href CATVREventIterator
  * this method  returns the previous event in the list.
  * If there isn't any event, it returns NULL.
  */
  CATVRDeviceEvent* PreviousEvent();
  
  /** 
  * @nodoc
  * Returns a pointer to the event at the end of the chained list.
  * <br><b>Role</b>: 
  * Use the @href CATVRNotification and @href CATVREventIterator
  * @href #TailEvent method  returns the event at the end of the chained list.
  */
  CATVRDeviceEvent* TailEvent();
  
  /**
  * @nodoc 
  * Returns the event number. 
  * <br><b>Role</b>: for example during the initialization phase, two events
  * can have the same name but can be identitified by their number which are 
  * different.
  */
  int GetNumber();
  
  
  /** @nodoc 
  */
  CATVRDeviceEvent(
    int deviceBoxID,
    int numero,
    CATTimeValue ts,
    CATDeviceGenericField* DeviceField,
    CATInfoDeviceEvent* info);

  /**
  * @nodoc
  * Copy constructor. Iteratif.
  */
  CATVRDeviceEvent(CATVRDeviceEvent* iDeviceEvent);
  
  /**
  * @nodoc Copy constructor. Non Iteratif.
  */
  CATVRDeviceEvent(const CATVRDeviceEvent& iDeviceEvent);
  
  /** @nodoc */
  CATVRDeviceEvent* CloneChainedList();

  /** @nodoc */
  void ApplyDeleteToFollowers();
  
  /** @nodoc */
  void Copy(CATVRDeviceEvent* iDeviceEvent);
  
  /** @nodoc */
  CATVRDeviceEvent* AddEvent(CATVRDeviceEvent* DeviceEvent);
  
  /** @nodoc */
  void SetNextEvent(CATVRDeviceEvent* DeviceEvent);
  
  /** @nodoc */
  void SetPreviousEvent(CATVRDeviceEvent* DeviceEvent);
  
  /** @nodoc */
  int IsMoreRecent(CATVRDeviceEvent* de);
  
  /** @nodoc */
  int IsSynchrone(CATVRDeviceEvent* DeviceEvent);
  
  /** @nodoc */
  long GetEventID();
  
  /** @nodoc */
  CATInfoDeviceEvent* GetInfo();
  
  /** @nodoc */
  void SetInfo(CATInfoDeviceEvent* info);
 
 /**
  * @nodoc
  * Returns the data enclosed into the current device event.
  * If there is no data, NULL is returned.
  */
  CATDeviceField* GetDeviceField();
  
  /** @nodoc */
  void SetDeviceField(CATDeviceGenericField* DeviceField);
  
  /** @nodoc */
  int GetReference();
  
  /** @nodoc */
  void ResetTimeStamp(CATTimeValue* t=NULL);
  
  
  private :

    /** @nodoc */
    void Clean();
    
    /** @nodoc the priority number. */
    int _Priority;
    /** @nodoc */
    int _Reference;
    
    /** @nodoc the device box which has emitted the current device event. */
    int _deviceBoxID;
    
    /** @nodoc the pointer to the next emitted device event. */
    CATVRDeviceEvent* _NextEvent;
    
    /** @nodoc the pointer to the previous device event. */
    CATVRDeviceEvent* _PreviousEvent;
    
    /** @nodoc */
    CATInfoDeviceEvent* _Info;
    
    /** @nodoc the data enclosed into the current event. */
    CATDeviceGenericField *_DeviceField;
    
    /** @nodoc the time when the event has been emitted. */
    CATTimeValue _Timestamp;
    
    /** @nodoc */
    static long _CountDeviceEvent;
    static CATMutex* _countLock;
    /** @nodoc */
    long _eID;
};

#endif


