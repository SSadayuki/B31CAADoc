#ifndef CATIMaterialSupport_h
#define CATIMaterialSupport_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMatItfCPP.h"
#include "CATBaseUnknown.h"

class CATIMaterialFeature;
class CATIPositionedMaterial;
class CATIPositionedMaterial_var;
class CATDocument;
class CATIProduct;
class CATIProduct_var;
class CATIContainer_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMatItfCPP IID IID_CATIMaterialSupport;
#else
extern "C" const IID IID_CATIMaterialSupport;
#endif

/** 
  * Interface to support material mapping.
  * <b>Role</b>: Use this interface to map materials on objects. See the 
  * @href ApplyMaterialOnSupport global function.
  * <br>
  * Use also this interface to retrieve a mapped material on an object. 
  * <br>
  * Product, part, body and surface objects implement this interface.
  * @see CATIMaterialDocument, CATIMaterialFeature, CATIPositionedMaterial
  */

class ExportedByCATMatItfCPP CATIMaterialSupport : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**  @nodoc 
 *   Set positioned material
 */
    virtual int                      SetMaterial(CATIPositionedMaterial *material) = 0;

/**
 *  Returns positioned material applied on support.
 *  @return
 *    The positioned material object.
 * <br>
 *    Returns NULL if no material is applied on support.
 */
    virtual CATIPositionedMaterial * GetMaterial() = 0;

/**  @nodoc 
 *   Get inherited positioned material
 * 
 *  Output:
 *  -------
 * 
 *  int IsInherited : allow to know if the returned material is inherited or not
 *                    = 0 : material returned is not an inherited material
 *                    = 1 : material returned is an inherited material
 * 
 *  CATIMaterialSupport *support : support of the inherited material
 *                                (CAUTION: support = NULL if IsInherited = 0)
 */
    virtual CATIPositionedMaterial * GetInheritedMaterial(int &oIsInherited,
				                                          CATIMaterialSupport* &osupport) = 0;

/**  @nodoc 
 *   Get inherited positioned material
 */
    virtual CATIPositionedMaterial * GetInheritedMaterial(CATIProduct *iProduct, int &oIsInherited,
				                                          CATIMaterialSupport* &osupport) = 0;

/**  @nodoc */
    virtual CATDocument * GetDocument() = 0;
};

/**  @nodoc */
CATDeclareHandler(CATIMaterialSupport, CATBaseUnknown);

#endif
