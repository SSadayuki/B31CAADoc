// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
//
// ENOVIBookingObject.h
// Check the contraints on an object.Book the object if there is no violated
// constraint.
//=============================================================================
//=============================================================================
// November 2000     Creation                  SMI
//=============================================================================
#ifndef ENOVIBookingObject_h
#define ENOVIBookingObject_h

class CATTimeSpan;
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIBookingObject;
#else
extern "C" const IID IID_ENOVIBookingObject;
#endif

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */ 

class ENOVIObjectInfo ;

class ExportedByGUIDVPMInterfaces ENOVIBookingObject : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
    
    enum BookState
      {
	BOOKED         = 1 ,   // the object is created in the database or
	                       // the object is booked for the user.
  
	BOOKABLE       = 2 ,   // the object is free to be booked or,
			       // the object has been booked in another session or,
			       // the object has been booked in another session but 
			       // the delay expired
      
	NOTBOOKABLE    = 3     // someone has booked the object or,
			       // another object has booked the constraints in your session.
      };
  
  // S_OK   : the object is booked
  // S_FALSE: the object has not been booked return the faulty object if exists
  // E_FAIL : system error
  virtual HRESULT bookObject (CATBaseUnknown_var& oObject       ,
			      const CATTimeSpan * tDelay = NULL)=0;
  
  // S_OK   : all booking are destroyed
  // S_FALSE: a booking can t be destroyed then no booking has been destroyed
  // E_FAIL : system error
  virtual HRESULT deleteObjectBooking()=0;
  
  // change the value of the expiration delay.
  virtual HRESULT setDefaultDelay(const CATTimeSpan * tDefaultDelay)=0;
  
  // get the BookState of the object.
  // if BookState is NOTBOOKABLE the ownerOfTheBooking (logical user) is valuated
  // if return code is E_FAIL then status and ownerOfTheBooking aren t valuated.
  virtual HRESULT isObjectBooked (BookState&        status           ,
				  CATUnicodeString& ownerOfTheBooking)=0;

  // S_OK   : The attribute iAttribute is valuated with a generated identifier (VPMIIdentifierGeneratorMgr)
  // S_FALSE: The attribute is already valuated, use iForce=1 if you want replace the value.
  // E_FAIL : system error
  virtual HRESULT SetIdentifierValue(const CATUnicodeString& iAttribute, const int iForce=0)=0;


  //-- JDC+ V5R11. ID GENERATION + BOOKING coupling. 
  /**
   * book the object with an already created Booking (see
   * VPMIBookingManager::CreateNBookingWithConsecutiveIDs).
   * @param iAssignee [in] the string owning the booking
   * @param iForce [in] to force the use of the booking
   * @return
   * S_OK: the object can use the booking
   * S_FALSE: the booking is in use or the booking doesn't exist
   * E_FAIL
   */
  virtual HRESULT UseBooking(const CATUnicodeString& iAssignee,
                             int                     iForce   =0)=0;
  
  //-- JDC- V5R11. ID GENERATION + BOOKING coupling. 
};
                                              
                                                
CATDeclareHandler(ENOVIBookingObject, CATBaseUnknown); 
#endif 







