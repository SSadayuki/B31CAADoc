#ifndef CATIRmaShaderFactory_h
#define CATIRmaShaderFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRmaItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"


class CATString;
class CATUnicodeString;
class CATIRmaShader;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRmaItfCPP IID IID_CATIRmaShaderFactory;
#else
extern "C" const IID IID_CATIRmaShaderFactory;
#endif

/** 
 * Interface for shader factories.
 * <b>Role</b>:
 * This is the base interface for shader factories.
 * It is used to create new shaders.
 */

class ExportedByCATRmaItfCPP CATIRmaShaderFactory : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns all the shaders made available by the factory.
 * @param oType
 *   The list of shader types. 
 * @param oOutputTypes
 *   The list of shader return types. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT ListAvailableShaders(CATListOfCATString &oType, CATListOfCATString &oOutputTypes) = 0;

/**
 * Creates parameters in the shader for a given name.
 * @param iShader
 *   The shader to initialize.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT InitShader(CATIRmaShader *iShader) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRmaShaderFactory,CATBaseUnknown);

#endif
