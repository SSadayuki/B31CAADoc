#ifndef CATIMaterialFeature_h
#define CATIMaterialFeature_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMatItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

class CATIFamilyFeature_var;
class CATIFamilyFeature;
class CATPixelImage;
class CATISpecObject;
class CATISpecObject_var;
class CATUnicodeString;
class CATListValCATBaseUnknown_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMatItfCPP IID IID_CATIMaterialFeature;
#else
extern "C" const IID IID_CATIMaterialFeature;
#endif

/** 
  * Interface to manage material objects.
  * <b>Role</b>:The material object is a feature containing applicative data.
  * <br>
  * An applicative data is an applicative feature containing a set of parameters
  * specific to an application. 
  * @see CATIMaterialDocument, CATILibraryFeature, CATIFamilyFeature
  */


class ExportedByCATMatItfCPP CATIMaterialFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the name of a material object.
 */
    virtual CATUnicodeString    GetLabel() const = 0;

/**  @nodoc 
 *   Set material label
 */
    virtual void                SetLabel(const CATUnicodeString &label) = 0;


/**  @nodoc 
 *   Get material comment
 */
    virtual CATUnicodeString    GetComment() const = 0;

/**  @nodoc
 *   Set material comment
 */
    virtual void                SetComment(const CATUnicodeString &comment) = 0;

/**  @nodoc
 *   Set the material creation version number
 */    
    virtual void                SetVersionNumber(int number) = 0;

/**  @nodoc
 *   Set the material creation version number
 */ 
	  virtual int                 GetVersionNumber() const = 0;        

/**  @nodoc
 *   Get parent family
 */
    virtual CATIFamilyFeature * GetFamily() const = 0;

/**  @nodoc 
 *   Get icon image
 */
    virtual CATPixelImage *     GetIcon() const = 0;

/**  @nodoc  
 *   Change icon image
 */
    virtual void                SetIcon(const CATPixelImage& icon) = 0;

/**  @nodoc 
 *   Change icon position in viewer
 */
    virtual void                SetIconPosition(float x, float y) = 0;

/**  @nodoc 
 *   Read icon position in viewer
 */
    virtual void                GetIconPosition(float &x, float &y) = 0;

/**
 * Adds applicative data to the material.
 * @param iIdentifier
 *   The identifier of the applicative data.
 * @param iData
 *   The applicative data
 */
    virtual void             AddApplicativeSpec(const CATUnicodeString &iIdentifier, const CATISpecObject_var &iDdata) = 0;

/**
 * Returns the applicative data of a material from its identifier.
 * @param iIdentifier
 *   The identifier of the applicative data.
 * @return
 *   The applicative data
 */
    virtual CATISpecObject*  GetApplicativeSpec(const CATUnicodeString &iIdentifier) const = 0;

/**
 * Removes applicative data of a material.
 * @param iIdentifier
 *   The identifier of the applicative data to remove.
 * 
 */
    virtual void             RemoveApplicativeSpec(const CATUnicodeString &iIdentifier) = 0;

/**  
 * @nodoc 
 * Lists all applicative data of a material.
 * @return
 *   A list of applicative data
 */
    virtual CATListValCATBaseUnknown_var * ListApplicativeSpec() const = 0;

/**  
 * @nodoc 
 * Lists all applicative data identifier of a material.
 * @return
 *   A list of applicative data identifier
 */
    virtual CATListOfCATUnicodeString * ListApplicativeSpecId() const = 0;
};

/**  @nodoc */
CATDeclareHandler(CATIMaterialFeature, CATBaseUnknown);

#endif
