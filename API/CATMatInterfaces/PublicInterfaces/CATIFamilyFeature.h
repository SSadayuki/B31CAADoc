#ifndef CATIFamilyFeature_h
#define CATIFamilyFeature_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMatItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATIMaterialFeature_var;
class CATIMaterialFeature;
class CATILibraryFeature_var;
class CATILibraryFeature;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMatItfCPP IID IID_CATIFamilyFeature;
#else
extern "C" const IID IID_CATIFamilyFeature;
#endif

/**
  * Interface to manage a family of material objects.
  * <b>Role</b>: A family of material objects enables you to sort 
  * material objects according to their types (for example wood, metal or
  * stone are material families).
  * <br>
  * Using this interface allows you to get or add material objects in a material family.
  * @see CATIMaterialDocument, CATILibraryFeature, CATIMaterialFeature
  */

class ExportedByCATMatItfCPP CATIFamilyFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the label of a family.
 */
    virtual CATUnicodeString     GetLabel() const = 0;

/**  @nodoc */
//  Set family label
    virtual void                 SetLabel(const CATUnicodeString &label) = 0;

/**  @nodoc */
//  Get parent library
    virtual CATILibraryFeature*  GetLibrary() const = 0;

/**
 * Returns the count of materials in the family.
 * @return
 *   An integer value. 
 *   <br>
 *   A family can be empty and this value can therefore be 0.
 */
    virtual int                  GetMaterialCount() const = 0;

/**
 * Adds a new material in the family.
 * <br><b>Note</b>: The material should be created previously, using 
 * @href CreateNewMaterial
 * @param iMaterial 
 *   The new material to add
 * @param iIndex
 *   This value is the position of the material in the family. 
 *   <br><b>Legal Values:</b>
 *   <ul>
 *   <li>if iIndex is 0, <b>the default value</b>, the material is added in the end of the family
 *   </li>
 *   <li>if IIndex ranges from 1 to @href #GetMaterialCount(), iMaterial replaces a material.
 *   </li>
 *   <li>otherwise, it's an error </li>
 *   <ul>
 */
	virtual void                 SetMaterial(const CATIMaterialFeature *iMaterial, int iIndex=0) = 0;

/**  @nodoc */
// Remove material from family
    virtual void                 RemoveMaterial(const CATIMaterialFeature_var& material) = 0;

/**
 * Retrieves a material in the family using its index.
 * @param iIndex
 *   The index of the material. This value ranges from 1 to @href #GetMaterialCount()
 * @return
 *   The material object if iIndex is valid, and NULL otherwise .
 */
    virtual CATIMaterialFeature* GetMaterial(int iIndex=0) const = 0;
};

/**  @nodoc */
CATDeclareHandler(CATIFamilyFeature, CATBaseUnknown);

#endif
