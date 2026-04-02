#ifndef CATEArrAppProductAdapter_H
#define CATEArrAppProductAdapter_H
// COPYRIGHT DASSAULT SYSTEMES  2000 +
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */
//=============================================================================
//
// CATEArrAppProductAdapter.
// Base class to be used when implementing  CATIArrAppProduct.
//
//=============================================================================

#include "CATArrangementItf.h"
#include "CATIArrAppProduct.h"

class CATUnicodeString;

/**
 * Class CATEArrAppProductAdapter .
 * <b>Role:</b>
 * Base class to be used when implementing  CATIArrAppProduct
 */

class ExportedByCATArrangementItf CATEArrAppProductAdapter : public CATIArrAppProduct                           
{
  public:

  CATEArrAppProductAdapter();
  virtual ~CATEArrAppProductAdapter();

  /**
  * Called after an Arrangement object sets the nomenclature. This allows users to insert
  * attributes or do other calculations when the Arrangement object is created or the type is modified.
  * The nomenclature corresponds to the type displayed in the panel.
  * @param iOldType
  *   Old Type/Nomenclature.  Blank if creating object for the first time.
  * @param iNewType
  *   New Type/Nomenclature being set (name in the panel).
  */
  virtual HRESULT NomenclatureWasModified ( const CATUnicodeString& iOldType, const CATUnicodeString& iNewType );

  private:

  CATEArrAppProductAdapter (const CATEArrAppProductAdapter &);
  CATEArrAppProductAdapter &operator = (const CATEArrAppProductAdapter &);

}; 
#endif
