#ifndef CATISchGRR_H
#define CATISchGRR_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

extern "C" const IID IID_CATISchGRR ;

class CATISchAppConnectable;
class CATISchAppConnector;
class CATIUnknownList;
class CATICStringList;

/**
 * Interface to manage graphic representations for Schematic basic sets 
 * of objects. 
 * <b>Role</b>: To add or remove primitives (members) of a graphic 
 * representation of a schematic object.
 */
class CATISchGRR : public IUnknown
{

  public:  

  /**
  * Get the schematic object that owns this graphic representation.
  * @param oGRROwner
  *   A schematic object that owns this graphic representation.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSchObjOwner (CATISchAppConnectable **oGRROwner) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchGRR#GetGRRName2 instead.
  * Get current name of the GRR. 
  * @param oGRRName
  *   The name of this GRR. A component can be associated with more than one GRRs.
  *   Each GRR is identified by a specific name. Valid names are specified 
  *   by the application when building the component. Every component should have
  *   a GRR named "Primary". The GRR by this name is used in the catalog.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetGRRName (char **oGRRName) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchGRR#SetGRRName2 instead.
  * Set current name of the GRR. 
  * @param iGRRName
  *   The name of this GRR to be set. 
  *   @see #GetGRRName
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetGRRName (const char *iGRRName) = 0;

  /**
  * Get the schematic objects that own this connector graphic representation.
  * @param oCntrOwner
  *   A schematic connector that owns this connector graphic representation.
  * @param oGRROwner
  *   A component or route graphic representation that owns this
  *   connector graphic representation.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSchCntrOwners (CATISchAppConnector **oCntrOwner,
    CATISchGRR **oGRROwner) = 0;


  /**
  * Get a list of graphical objects that connects
  * to this graphic representation.
  * @param iGRROwner
  *   A CATISchAppConnectable that owns this graphic representation. In
  *   the case of GRRCntr (this object), iGRROwner is the owner
  *   <b>of the owner</b> of this graphic.
  * @param oLCntrClassFilter
  *   A list of all the class types for filtering the output application
  *   objects list.
  * @param oLCntbleGRRs
  *   A list of GRRs connected to this GRR.
  *   (members are CATISchGRR interface pointers). 
  * @param oLCntbles
  *   A list of application objects connected to this object.
  *   (members are CATISchAppConnectable interface pointers). 
  * @param oLCntrsOnThisObj
  *   A list of connectors on this object through which 
  *   the connection is made.
  *   (members are CATISchAppConnector interface pointers).
  * @param oLCntrsOnConnected
  *   A list of connectors on the connected objects through which 
  *   the connection is made.
  *   (members are CATISchAppConnector interface pointers).
  *   Members in this list corresponds to those in oLCntrsOnThisObj in
  *   making the corresponding connections.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListConnectedGRRs (CATISchAppConnectable *iGRROwner,
    CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbleGRRs,    
    CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj,
    CATIUnknownList **oLCntrsOnConnected) = 0;


  /**
  * Get current name of the GRR. 
  * @param oGRRName
  *   The name of this GRR. A component can be associated with more than one GRRs.
  *   Each GRR is identified by a specific name. Valid names are specified 
  *   by the application when building the component. Every component should have
  *   a GRR named "Primary". The GRR by this name is used in the catalog.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetGRRName2 (CATUnicodeString &oGRRName) = 0;

  /**
  * Set current name of the GRR. 
  * @param iGRRName
  *   The name of this GRR to be set. 
  *   @see #GetGRRName
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetGRRName2 (const CATUnicodeString &iGRRName) = 0;


};
#endif
