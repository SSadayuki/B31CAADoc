#ifndef CATIRmaShader_h
#define CATIRmaShader_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRmaItfCPP.h"
#include "CATBaseUnknown.h"
#include "sequence_CATBaseUnknown_ptr.h"


class CATString;
class CATUnicodeString;
class CATIRmaParameter;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRmaItfCPP IID IID_CATIRmaShader;
#else
extern "C" const IID IID_CATIRmaShader;
#endif

#define CATRdgUsageMaterial (1 << 0)
#define CATRdgUsageTexture  (1 << 1)

/** 
 * Interface for shaders.
 * <b>Role</b>:
 * This is the base interface for shaders.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRmaItfCPP CATIRmaShader : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the shader type.
 * @param oType
 *   The shader type.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetType(CATString &oType) = 0;

/**
 * Stes the shader output type.
 * @param iType
 *   The shader output type.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetOutputType(CATString &iType) = 0;

/**
 * Returns the shader output type.
 * @param oType
 *   The shader output type.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetOutputType(CATString &oType) = 0;

/**
 * Sets the shader possible usage.
 * @param iUsage
 *   The shader usage mask.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetUsage(unsigned int iUsage) = 0;

/**
 * Returns the shader possible usage.
 * @param oUsage
 *   The shader usage mask.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetUsage(unsigned int &oUsage) = 0;

/**
 * Sets the shader version.
 * @param iVersion
 *   The shader version.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetVersion(unsigned int iVersion) = 0;

/**
 * Returns the shader version.
 * @param oVersion
 *   The shader version.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetVersion(unsigned int &oVersion) = 0;

/**
 * Adds a new parameter from an existing type.
 * @param iName
 *   The parameter name.
 * @param iType
 *   The parameter type.
 *   <ul> parameter type.
 *   <li> CATRmaBoolean </li>
 *   <li> CATRmaInteger </li>
 *   <li> CATRmaScalar </li>
 *   <li> CATRmaColor </li>
 *   </ul>
 * @param oParameter
 *   The new parameter.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT AddParameter(CATString &iName, CATString &iType, CATIRmaParameter **oParameter) = 0;

/**
 * Adds a new parameter from a user type.
 * @param iParameter
 *   The new parameter.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT AddParameter(CATIRmaParameter *iParameter) = 0;

/**
 * Returns the shader parameters.
 * @param oParameters
 *   The parameter list. After use, a Release() must be made 
 *   on each element and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetParameters(CATLISTP(CATBaseUnknown) **oParameters) = 0;

/**
 * Adds a new shader node.
 * @param iNode
 *   The new node.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT AddNode(CATIRmaShader *iNode) = 0;

/**
 * Removes a shader node.
 * @param iNode
 *   The node to remove.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT RemoveNode(CATIRmaShader *iNode) = 0;

/**
 * Returns the shader nodes.
 * @param oNodes
 *   The node list. After use, a Release() must be made 
 *   on each element and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetNodes(CATLISTP(CATBaseUnknown) **oNodes) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRmaShader,CATBaseUnknown);

#endif
