/* -*-c++-*- */
#ifndef CATIConnector_h
#define CATIConnector_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "AC0SPBAS.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
class CATILinkableObject_var;
class CATIConnectable_var;
class CATMathTransformation;
class CATListValCATBaseUnknown_var;


extern ExportedByAC0SPBAS IID IID_CATIConnector ;

/**
* Interface to manage connectors.
* <br><b> Role :</b> a connector is a handler on an object in 
* the context of an instance of product.
*/

class ExportedByAC0SPBAS CATIConnector : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Returns the connectable object exposing the connector.
   * <br><b>Role:</b> To use every time you need much more than the position
   * of the connectable object.
   */
  virtual CATIConnectable_var            GiveAssociatedConnectable() = 0;


  /**
   * @nodoc internal.
   * Used by the connectable to initialize the connector.
   * Sets the element referenced by the connector.
   * @param obj 
   *     Persistent object referenced by the connector.
   */
  virtual void                           SetConnectorElement(CATILinkableObject_var obj) = 0;

  /** 
    * @nodoc 
    * get type of connector ( V5R3: there is 2 kinds of connectors : connectors and light-connectors ).
    */
  virtual CATUnicodeString               GiveConnectorType() = 0;

  /** 
    * @nodoc 
    * Gives connection uses (NULL result means not used).
    */
  virtual CATListValCATBaseUnknown_var*  ListConnections() = 0;

  /** 
    * @nodoc 
    * Give Families of connector
    */
  virtual CATListOfCATUnicodeString*     ListFamilies()    = 0;


  /**
   * Returns the position ( absolute matrix ) of the connectable object ( context ).
   * <br><b>Note:</b> If the referenced element is a geometric one, this method allows to find the
   * transformation matrix to apply to have the element in the context.
   */
  virtual CATMathTransformation*         GiveContext()     = 0;


  /**
   * Returns a list of elements ( geometry ) referenced by the connector within a positionning context.
   *<br><b>Note:</b>The list always have one element.
   * @param iIntfName
   *     Name of the interface choosen to handle the geometry.
   * @param iMatrix
   *     This input parameter has to be valuated if matrix has to be applied to geometry.
   * <br>This matrix comes from GiveContext(). 
   */
  virtual CATLISTV(CATBaseUnknown_var) Evaluate( CATClassId iIntfName, CATMathTransformation* iMatrix = NULL) = 0;

  /**
   * Returns the referenced element outside the Evaluate context ( ie without any positionning matrix ).
   */
  virtual CATILinkableObject_var          GiveReferenceObject()  = 0;  
  
};

CATDeclareHandler(CATIConnector,CATBaseUnknown);

#endif 
