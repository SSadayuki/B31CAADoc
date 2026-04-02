#ifndef CATIRenderingMaterial_h
#define CATIRenderingMaterial_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRmaItfCPP.h"
#include "CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRmaItfCPP IID IID_CATIRenderingMaterial;
#else
extern "C" const IID IID_CATIRenderingMaterial;
#endif


class CATIRmaShader;


/**
  * Interface to manage mapping parameters of a material object.
  * <b>Role</b>:A material object is a feature aggregating several applicative data.
  * <br>
  * Each applicative data is an applicative feature containing a set of parameters
  * specific to an application. 
  * <br>
  * For rendering applicative data, this interface allows to read some parameters
  * concerning the mapping characteristics of the texture of a material object.
  * @see CATIMaterialFeature
  */

class ExportedByCATRmaItfCPP CATIRenderingMaterial : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**  @nodoc 
 *   Get preview type of the material
 *   (0=plane, 1=sphere, 2=cylinder, 3=cube, 4=auto adaptive, 5=manual adaptive)
 */
    virtual int    GetPreviewType() const = 0;  

/**  @nodoc 
 *   Set preview type of the material
 *   (0=plane,1=sphere,2=cylinder,3=cube,4=auto, 5=manual)
 */
    virtual void   SetPreviewType(int type) = 0;

/**  @nodoc 
 *   Get preview size of the material
 *
 */
    virtual double GetPreviewSize() const = 0;

/**  @nodoc 
 *   Set preview size of the material
 *
 */
    virtual void   SetPreviewSize(double size) = 0;

/**  @nodoc 
 *   Get the adaptive coefficient for manual adaptive mapping
 *
 */
    virtual int    GetAdaptiveCoeff() const = 0;  

/**  @nodoc 
 *   Set the adaptive coefficient for manual adaptive mapping
 *
 */
    virtual void   SetAdaptiveCoeff(int coeff) = 0;

/**  @nodoc 
 *   Set the material shader if any.
 *
 */
    virtual void SetShader(CATIRmaShader *iShader) = 0;

/**  @nodoc 
 *   Get the material shader
 *
 */
    virtual CATIRmaShader * GetShader() const = 0;  
};

CATDeclareHandler(CATIRenderingMaterial, CATBaseUnknown);

#endif
