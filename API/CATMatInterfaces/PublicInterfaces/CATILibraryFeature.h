#ifndef CATILibraryFeature_h
#define CATILibraryFeature_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMatItfCPP.h"
#include "CATBaseUnknown.h"

class CATIFamilyFeature_var;
class CATIFamilyFeature;
class CATILibraryFeature_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMatItfCPP IID IID_CATILibraryFeature;
#else
extern "C" const IID IID_CATILibraryFeature;
#endif

/** 
  * Interface to manage families of materials.
  * <b>Role</b>: A material document (such document is stored in a file suffixed by CATMaterial)
  * contains one material library,
  * which contains itself several material families. A library contains at least one
  * family.
  * @see CATIMaterialDocument, CATIFamilyFeature, CATIMaterialFeature
  */

class ExportedByCATMatItfCPP CATILibraryFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the count of families in the material document.
 * <br>
 * <b>Note</b>: A material document can't be empty and this value is therefore greater than 0.
 */
    virtual int                GetFamilyCount() const = 0;

/**  @nodoc */
    virtual void               SetFamily(const CATIFamilyFeature_var& family,int index=0) = 0;

/**  @nodoc */
    virtual void               RemoveFamily(const CATIFamilyFeature_var& family) = 0;

/**
 * Returns a family using its index.
 * @param iIndex
 *   The index of the family. This value ranges from 1 to  @href #GetFamilyCount
 * @return
 *   The material family object if iIndex is valid and NULL otherwise.
 */
    virtual CATIFamilyFeature* GetFamily(int iIndex=0) const = 0;

/**  @nodoc */
    virtual int                GetDisplayMode() const = 0;

/**  @nodoc */
    virtual void               SetDisplayMode(int mode) = 0;
};

/**  @nodoc */
CATDeclareHandler(CATILibraryFeature, CATBaseUnknown);

#endif
