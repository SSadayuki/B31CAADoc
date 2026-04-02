#ifndef CATIHeaderSpecialize_H
#define CATIHeaderSpecialize_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// COPYRIGHT DASSAULT SYSTEMES 2013

#include "CATBaseUnknown.h"
#include "CD0FRAME.h"
class CATCmdStarter;
class CATDialog;
class CATCmdRep;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCD0FRAME IID IID_CATIHeaderSpecialize ;
#else
extern "C" const IID IID_CATIHeaderSpecialize ;
#endif

/**
  * Interface for managing callbacks associated to command headers.
  * <b>Role</b>:Command headers can implement this interface to set callbacks when then command headers get activated, 
  * and override the command header availability status.
  * @see CATCommandHeader
  */
class ExportedByCD0FRAME CATIHeaderSpecialize : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
    * Sets callbacks.
    * Set callback(s) in order to intercept events as soon as the command header is activated. 
    */  
    virtual HRESULT StartCallback ()  = 0 ;

  /**
    * Removes callbacks.
    * Remove all callbacks when the command header is deactivated. 
    */  
    virtual HRESULT CleanCallback ()  = 0 ;

  /**
    * Command header availability.
    * Tells whether the command header is available or not. 
    * @return
    * <ul>
    * <li>1: The command header is available. </li>
    * <li>0: The command header is unavailable.</li>
    * </ul>
    */  
    virtual int GetStatus ()  = 0 ;

    /** @nodoc */
    virtual HRESULT CreateSpecializedMenuRep (CATCmdStarter* MyCmdStarter, 
					      CATDialog* Mydialog, 
					      CATCmdRep*& MyCmdRep )  = 0 ;
    /** @nodoc */
    virtual HRESULT DeleteSpecializedMenuRep (CATCmdStarter* MyCmdStarter)  = 0 ;

};

CATDeclareHandler(CATIHeaderSpecialize, CATBaseUnknown ) ;

#endif
