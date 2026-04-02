//
// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMIBookingManager.h
// Check the contraints on an object.Book the object if there is no violated
// constraint.
// trace             : BOOKINGMANAGER 
//=============================================================================
//=============================================================================
// November 2000     Creation                  JDC
//=============================================================================
#include "GUIDVPMInterfaces.h"

#ifndef VPMIBookingManager_h
#define VPMIBookingManager_h

class CATListPtrSdaiAppInstance;
class CATTimeSpan   ;
class SdaiAppInstance  ;

#include "CATUnicodeString.h"
#include "CATCollec.h"
#include "ENOVIObjectInfo.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_VPMIBookingManager;
#else
extern "C" const IID IID_VPMIBookingManager;
#endif
/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */ 
class ExportedByGUIDVPMInterfaces VPMIBookingManager : public CATBaseUnknown
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
  
  //
  //methods called by the VPMSession
  //
  //
  virtual HRESULT init(int mode = 0)=0 ;
  virtual HRESULT end()=0           ;
  // 
  
public:
  // try to book a list of instances. if tDelay is not set,then use the default delay
  // value for the expiration date
  //
  // S_OK   : all objects are booked
  // S_FALSE: an object can't be booked then no object has been booked
  // E_FAIL : system error
  virtual HRESULT bookObjects(const CATListPtrSdaiAppInstance * lObjects     ,
			      const CATTimeSpan *              tDelay = NULL)=0;
  // S_OK   : the object is booked
  // S_FALSE: the object has not been booked return the faulty object if exists
  // E_FAIL : system error
  virtual HRESULT bookObject (SdaiAppInstance *  iObject       ,
			      SdaiAppInstance *& oObject       ,
			      const CATTimeSpan * tDelay = NULL)=0;
  
  // S_OK   : all booking are destroyed
  // S_FALSE: a booking can't be destroyed then no booking has been destroyed
  // E_FAIL : system error
  virtual HRESULT deleteObjectsBooking(const  CATListPtrSdaiAppInstance* lObjects)=0;
  
  //
  // change the value of the expiration delay.
  //
  virtual HRESULT setDefaultDelay(const CATTimeSpan * tDefaultDelay)=0;

  //
  // get the BookState of the object.
  // 
  // if BookState is NOTBOOKABLE the ownerOfTheBooking (logical user) is valuated
  // if return code is E_FAIL then status and ownerOfTheBooking aren't valuated.
  virtual HRESULT isObjectBooked (SdaiAppInstance * iObject          ,
				  BookState*        status           ,
				  CATUnicodeString& ownerOfTheBooking)=0;

  //-- JDC+ V5R11. ID GENERATION + BOOKING coupling. 
 
  virtual HRESULT UseBooking(SdaiAppInstance  * iObject       ,
                             const CATUnicodeString& iAssignee,
                             int                     iForce   =0)=0;
  //-- JDC- V5R11. ID GENERATION + BOOKING coupling.
  /**
   * Create n line in Database to book the generated IDs for a given type.
   * @param iObjectInfo [in] the object info of the type.
   * @param iAssignee [in] the string that owns the booking
   * @param iNbBookingToCreate [in] the number of identifier to book.
   * @param iPrefix [in] the prefix of the generated identifier.
   * @param iSeparator [in] the separator of the generated identifier.
   * @param iPadding [in] the padding to use to generate the identifier.
   * @param iMaxSize [in] the max size of the generated identifier.
   * @param iDelay [in] the delay of availability of the booking.
   * @return 
   * S_OK : the booking are created.
   * E_FAIL: cannot book these IDs
   */
  virtual HRESULT CreateNBookingWithConsecutiveIDs(ENOVIObjectInfo_var&       iObjectInfo,
                                                   const CATUnicodeString& iAssignee ,
                                                   int iNbBookingToCreate            ,
                                                   const CATUnicodeString& iPrefix   ,
                                                   const CATUnicodeString& iSeparator,
                                                   int iPadding                      ,
                                                   int iMaxSize                      ,
                                                   const CATTimeSpan * tDelay = NULL) = 0;
  /**
   * get the list of the free IDs
   *
   * @param iObjectInfo [in] the object info of the type.
   * @param iAssignee [in] the string that owns the booking.
   * @param olFreeIds[out] the values of the availale booked IDs.
   * @param olFreeButInUse [out] a list of int (0/1) to known which one are in use
   * @return
   * S_OK
   * E_FAIL
   */
  virtual HRESULT GetFreeBookedIDs(ENOVIObjectInfo_var&           iObjectInfo   ,
                                   const CATUnicodeString&     iAssignee     ,
                                   CATListOfCATUnicodeString&  olFreeIDs     ,
                                   CATListOfInt&               olFreeButInUse) = 0;
};

CATDeclareHandler(VPMIBookingManager, CATBaseUnknown); 

ExportedByGUIDVPMInterfaces HRESULT GetVPMIBookingManager(VPMIBookingManager *& oiBookManager   );

#endif 







