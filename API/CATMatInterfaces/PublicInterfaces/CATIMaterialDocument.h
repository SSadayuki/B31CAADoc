#ifndef CATIMaterialDocument_h
#define CATIMaterialDocument_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMatItfCPP.h"
#include "CATBaseUnknown.h"

class CATILibraryFeature;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMatItfCPP IID IID_CATIMaterialDocument;
#else
extern "C" const IID IID_CATIMaterialDocument;
#endif

/** 
  * Interface to retrieve the library of a material document.
  * <b>Role</b>: 
  * A material document (such document is stored in a file suffixed by CATMaterial) 
  * contains one material library. To retrieve it, use
  * the @href #GetMaterialLibrary method. 
  * <br> This material library contains itself several material families, that gather
  * material objects according to their types (for example wood,
  * metal or stone families). 
  * <br>To manage material families, use @href CATILibraryFeature.
  * <br>To manage materials inside a family, use  @href CATIFamilyFeature 
  * <br>To manage a material, use  @href CATIMaterialFeature
  */

class ExportedByCATMatItfCPP CATIMaterialDocument : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 *  Retrieves the material library of a material document.
 *  @param  oMaterialLibrary
 *    The unic material library object
 */
	virtual HRESULT         GetMaterialLibrary(CATILibraryFeature **oMaterialLibrary) = 0;

/**  @nodoc 
 *   Get first library feature
 */
    virtual CATBaseUnknown* GetRootFeature() = 0;
    
/**  @nodoc 
 *   Reset document contents
 */
    virtual void            Reset() = 0;
};

/**  @nodoc */
CATDeclareHandler(CATIMaterialDocument, CATBaseUnknown);

#endif
