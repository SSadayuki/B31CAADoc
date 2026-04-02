#ifndef CATIEhiFactory_H
#define CATIEhiFactory_H
// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATEhiInterfaces.h"
#include "CATBaseUnknown.h"

class CATIGSMPoint;
class CATBaseUnknown;
class CATIEhiGeoBundle;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiFactory ;
#else
extern "C" const IID IID_CATIEhiFactory ;
#endif

/**
 * Interface to create geometrical bundle.
 * <br><b>Role</b>:A geometrical bundle federates a group  
 * of bundle segments and/or devices.
 */

class ExportedByCATEhiInterfaces CATIEhiFactory: public CATBaseUnknown
{
  CATDeclareInterface;
  
  public:
  
  /**
  * Create Geometrical Bundle. 
  * @param oGeoBundle
  *  The geometrical bundle or NULL if no creation failed. 
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>No error occured while creating geometrical bundle. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error. </dd>
  *   </dl>
  */  
  virtual HRESULT CreateGeometricalBundle ( CATIEhiGeoBundle ** opGeoBundle ) = 0; 

  /**
    * @nodoc
    */
  virtual HRESULT CreatePositionPoint (CATIGSMPoint* Point) = 0;
  /**
    * @nodoc
    */  
  virtual HRESULT CreatePositionPoint (CATBaseUnknown* iPoint) = 0;
  /**
    * @nodoc
    */ 
  virtual HRESULT CreateGeometricalBundle () = 0; 
  
};

//------------------------------------------------------------------
CATDeclareHandler(CATIEhiFactory, CATBaseUnknown);
#endif
