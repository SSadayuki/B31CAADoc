/* -*-c++-*- */
#ifndef CATIConnectable_h
#define CATIConnectable_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "AC0SPBAS.h"
#include "CATILinkableObject.h"
class CATListValCATBaseUnknown_var;


extern ExportedByAC0SPBAS IID IID_CATIConnectable ;

/**
* Interface to manage external view of objects suporting connectors.
*/	

class ExportedByAC0SPBAS CATIConnectable : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Lists connectors of a given type.
   * @param iRequestedConnectorsTypes
   *      list of types to filter the request.
   *      <br> if NULL then all connectors of this product will be listed.
   */
  virtual CATListValCATBaseUnknown_var*      GiveRequestedConnectors(CATListOfCATUnicodeString* iRequestedConnectorsTypes) = 0;

  /**
   * @nodoc
   * List of chosen connectors
   */
  virtual CATListValCATBaseUnknown_var*      GiveSelectedConnectors(CATListOfCATUnicodeString* RequestedConnectorsTypes) = 0;
  
  /** 
   * @nodoc
   */
    virtual CATDocument    * GetDocument ()=0 ;
};

CATDeclareHandler(CATIConnectable,CATBaseUnknown);

#endif 
