#ifndef CATIRmaParameter_h
#define CATIRmaParameter_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRmaItfCPP.h"
#include "CATBaseUnknown.h"


class CATString;
class CATIRmaShader;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRmaItfCPP IID IID_CATIRmaParameter;
#else
extern "C" const IID IID_CATIRmaParameter;
#endif

/** 
 * Interface for shader parameters.
 * <b>Role</b>:
 * This is the base interface for shader parameters.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRmaItfCPP CATIRmaParameter : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Sets the parameter name.
 * @param iName
 *   The parameter name.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetName(CATString &iName) = 0;

/**
 * Returns the parameter name.
 * @param oName
 *   The parameter name.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetName(CATString &oName) = 0;

/**
 * Returns the parameter type.
 * @param oType
 *   The parameter type.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetType(CATString &oType) = 0;

/**
 * Changes the parameter value.
 * @param iValue
 *   The parameter value.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetValue(void *iValue) = 0;

/**
 * Returns the parameter value.
 * @param oValue
 *   The parameter value. Value is allocated
 *   if caller did not allocate it (in that case
 *   value must be deleted after use).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetValue(void *oValue) = 0;

/**
 * Connects the parameter to a shader node.
 * @param iShader
 *   The shader to connect to (Use NULL to disconnect).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetConnection(CATIRmaShader *iShader) = 0;

/**
 * Returns the connected shader node if any.
 * @param oShader
 *   The connected shader.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetConnection(CATIRmaShader **oShader) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRmaParameter,CATBaseUnknown);

#endif
