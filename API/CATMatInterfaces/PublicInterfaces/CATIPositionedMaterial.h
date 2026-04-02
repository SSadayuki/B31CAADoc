#ifndef CATIPositionedMaterial_h
#define CATIPositionedMaterial_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
  * Interface to manage positioned material objects.
  * When a material is applied on a geometrical object, a positioned material 
  * object is aggregated to this object. This positioned material object 
  * contains a material object and contains some positioning properties.
  * Using this interface allows you to get the applied material object.
  * @see CATIMaterialSupport, CATIMaterialFeature
  */

#include "CATMatItfCPP.h"
#include "CATBaseUnknown.h"

class CATIMaterialFeature;
class CATMathTransformation;
class CATISpecObject;
class CATISpecObject_var;
class CATUnicodeString;
class CATListValCATBaseUnknown_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMatItfCPP IID IID_CATIPositionedMaterial;
#else
extern "C" const IID IID_CATIPositionedMaterial;
#endif

class ExportedByCATMatItfCPP CATIPositionedMaterial : public CATBaseUnknown
{
  CATDeclareInterface;

public:
	 
/**  @nodoc   
*  Get the version number.
*/
    virtual int                   GetVersionNumber() const = 0;
/**  @nodoc
*  Set the version number.
*/
    virtual void                  SetVersionNumber(int number) = 0;

/**  @nodoc 
*  Set associated material.
*/
    virtual void                  SetMaterial(const CATIMaterialFeature *material) = 0;

/**
 * Returns the material object.
 * @return
 *   The material object.
 */
    virtual CATIMaterialFeature * GetMaterial() = 0;

/**   
 * Sets the position matrix of an applied material.
 * @param iMatrix
 *   The position matrix of the positioned material.
 */
    virtual void                  SetPosition(const CATMathTransformation &matrix) = 0;

/**  @nodoc
*  Apply a transformation to the position matrix of a material (for textured materials)
*/
    virtual void                  ApplyTransformation(const CATMathTransformation &transfo) = 0;

/**  
 * Returns the position matrix of an applied material.
 * @return
 *   The position matrix of the positioned material.
 */
    virtual CATMathTransformation GetPosition() = 0;

/**  @nodoc   
*  Manage applicative data: add a new applicative spec.
*/
    virtual void                  AddApplicativeSpec(const CATUnicodeString &id, const CATISpecObject_var &spec) = 0;

/**  @nodoc
*  Manage applicative data: get an existing applicative spec.
*/
    virtual CATISpecObject *      GetApplicativeSpec(const CATUnicodeString &id) const = 0;

/**  @nodoc
*  Manage applicative data: remove an existing applicative spec.
*/
    virtual void                  RemoveApplicativeSpec(const CATUnicodeString &id) = 0;

/**  @nodoc
*  Manage applicative data: list all existing applicative spec.
*/
    virtual CATListValCATBaseUnknown_var * ListApplicativeSpec() const = 0;

/**  @nodoc  
*  Get inheritance mode.
*/
    virtual int                   GetInheritanceMode() const = 0;

/**  @nodoc
*  Set inheritance mode.
*/
    virtual void                  SetInheritanceMode(int mode) = 0;

/**  @nodoc  
*
*  Returns the material application type.
*  @return
*    An integer value. 
*    <br><b>Possible Values:</b>
*    <ul>
*    <li>0: The material is not applied as a link
*    </li>
*    <li>1: The material is applied as link.
*    </li>
*    <ul>
*    <br>
*/
    virtual int                   GetLinkMode() const = 0;

/**  @nodoc 
*   Manage link mode: Sets the link mode.
*/
    virtual void                  SetLinkMode(int link) = 0;
};

/**  @nodoc */
CATDeclareHandler(CATIPositionedMaterial, CATBaseUnknown);

#endif
