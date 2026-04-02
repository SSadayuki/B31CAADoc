/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 2000  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef CATIClientContainer_H
#define CATIClientContainer_H

#include "AC0SPBAS.h"
#include "CATBaseUnknown.h"

extern ExportedByAC0SPBAS IID IID_CATIClientContainer ;
class CATUnicodeString;
class CATListPtrCATBaseUnknown;

/**
 * Interface used to filter features inside a container. 
 * 
 */
class ExportedByAC0SPBAS CATIClientContainer: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Returns a list of features inside a container, filtered by interface and client id.
   * <br><b>Role:</b>On a Container, we can ask for objects adhering to a given interface
   * and belonging to a client identified by a string.
   * @param iIID 
   *   IID of the interface.
   * @param ClientID
   *   String identifying the Client. The names of its StartUps were suffixed at creation by this string.
   * @param oLst
   *   List containing the requested features.
   */
    virtual HRESULT ListMembers(const IID &iIID, const CATUnicodeString ClientID, CATListPtrCATBaseUnknown** oLst ) const =0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIClientContainer, CATBaseUnknown );

#endif
