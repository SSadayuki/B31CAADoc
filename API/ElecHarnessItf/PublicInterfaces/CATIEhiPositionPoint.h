#ifndef CATIEhiPositionPoint_H
#define CATIEhiPositionPoint_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATEhiInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiPositionPoint;
#else
extern "C" const IID IID_CATIEhiPositionPoint ;
#endif

/**
 * Interface to manage bundle segment position point.
 */

class  CATUnicodeString;
class  CATICkeInst;

class ExportedByCATEhiInterfaces CATIEhiPositionPoint: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Retrieve bundle segment position point type. 
  * @param iPointType 
  *  .The point type 
  * <br> "Straight"   : straight segment.
  * <br> "LocalSlack" : extra length is added from this point to next point. 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while managing point</dd>
  *   </dl>
  */
  virtual HRESULT GetType ( CATUnicodeString & oPointType )  = 0;


  /**
  * Enable to create straight segment from this point to next point. 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured </dd>
  *   </dl>
  */
  virtual HRESULT Straighten()=0;


  /**
  * Set extra length value. 
  * @param ipValue 
  *  .The value 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured</dd>
  *   </dl>
  */
  virtual HRESULT SetLocalSlack ( CATICkeInst * ipValue = NULL )  = 0;


  /**
  * Retrieve extra length value. 
  * @param opValue 
  *  .The value 
  * <br> for "Straight" type , value returned is NULL. 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured</dd>
  *   </dl>
  */
  virtual HRESULT GetLocalSlack ( CATICkeInst ** opValue ) = 0;

};


#endif

