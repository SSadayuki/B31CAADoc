#ifndef CATIRmaShaderSupport_h
#define CATIRmaShaderSupport_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRmaItfCPP.h"
#include "CATBaseUnknown.h"


class CATIRmaShader;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRmaItfCPP IID IID_CATIRmaShaderSupport;
#else
extern "C" const IID IID_CATIRmaShaderSupport;
#endif


/** 
 * Interface for shader supports.
 * <b>Role</b>:
 * This is the interface for object that can have shaders.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRmaItfCPP CATIRmaShaderSupport : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Changes the shader attached.
 * @param iShader
 *   The new shader (NULL if none).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetShader(CATIRmaShader *iShader) = 0;

/**
 * Returns the shader attached.
 * @param oShader
 *   The attached shader.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShader(CATIRmaShader **oShader) = 0;

/**
 * WARNING: DO NOT USE (INTERNAL USE ONLY)
 * Method dedicated to cleaner to migrate a shader pointing a dynamic startup
 * towards a shader pointing a static startup (in a feat catalog)
 */
    virtual HRESULT ChangeShaderSU() = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRmaShaderSupport,CATBaseUnknown);

#endif
