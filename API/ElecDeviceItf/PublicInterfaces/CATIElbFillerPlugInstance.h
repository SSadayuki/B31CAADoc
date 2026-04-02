/* -*-c++ -*- */
#ifndef CATIElbFillerPlugInstance_H
#define CATIElbFillerPlugInstance_H
// COPYRIGHT DASSAULT SYSTEMES 2006

#include "CATBaseUnknown.h"
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATListValCATBaseUnknown_var;
class CATIElbCavity;

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbFillerPlugInstance;
#else
extern "C" const IID IID_CATIElbFillerPlugInstance;
#endif

  /**
   * Interface to manage FillerPlug instance.
   **/

class ExportedByCATElbInterfaces CATIElbFillerPlugInstance : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
   * Connect the FillerPlug to a target object.
   *
   * @param ipElecCavity
   *   Cavity used to connect.
   *
   * @param StatusOfGeometricalConstraint
   *   Value is:	0 if all geometrical constraint are correctly created.
   *	            1 if a geometrical constraint is  over constraint.
   *	            2 if no geometrical constraint was defined to constraint the device between them.
   * @return
   *   Return code.
   */
   virtual HRESULT Connect(CATIElbCavity * ipElecCavity,
                               int & StatusOfGeometricalConstraint) = 0;
 
  /**
   * Get the connected object.
   *
   * @param opElecObject
   *   The Device where current instance is connected to.
   *
   * @return
   *   Return code.
   */
  virtual HRESULT GetConnectedObject (	CATBaseUnknown *& opElecObject)= 0;

};

CATDeclareHandler(CATIElbFillerPlugInstance, CATBaseUnknown);
#endif
