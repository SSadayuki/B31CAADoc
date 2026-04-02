// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwAxisLine_H
#define CATIDrwAxisLine_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// ObjectModeler
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"

// Collections
#include "CATLISTV_CATISpecObject.h"
#include "CATListOfDouble.h"

// Mathematics
#include "CATLISTP_CATMathLine2D.h"

class CATIProduct_var;
class CATFace_var;
class CATBody_var;
class CATIProduct;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwAxisLine ;
#else
extern "C" const IID IID_CATIDrwAxisLine ;
#endif

/**
* Interface to manage an axis lines.
*/

class ExportedByDraftingItfCPP CATIDrwAxisLine : public CATBaseUnknown
{
  CATDeclareInterface;

   public:
   
   /**
   * Add a reference object to the axis line. 
   * @param iReference
   *   Reference object.
   *   <br>This object must implement IDMLine2D
   * @see IDMLine2D
   */
   virtual void AddReference(CATISpecObject_var iReference) = 0;

   /**
   * Remove a reference object from an axis line. 
   * @param iReference
   *   Reference object to remove.
   *   <br>This object must implement IDMLine2D
   * @see IDMLine2D
   */
   virtual void RemoveReference(const CATISpecObject_var & iReference = NULL_var) = 0;

   /**
   * Get reference object list.
   * @return
   *   List of reference objects.
   */
   virtual CATLISTV(CATISpecObject_var) GetReferences() const = 0;
   
   /**
   * @nodoc
   * Replace reference
   * <br>Internal use only
   */
   virtual void ReplaceReference(const CATFace_var & iFace, const CATBody_var & iBody, 
                                 const CATIProduct_var & iProd, CATMathLine2D * iLine) = 0;

   /**
   * @nodoc
   * Get axis line informations
   * <br>Internal use only
   */
   virtual void GetAxisLineInfo(CATFace_var & iFace, CATBody_var & iBody, CATIProduct_var & iProd,
                                  CATMathLine2D * &oLine, char *oHaveOneRef=NULL) = 0;
   
   /**
   * @nodoc
   * Get axis line geometric informations
   */
   virtual void GetAxisLines(CATLISTP(CATMathLine2D) & oAxisLines,
                             CATListOfDouble & oStartOffset,
                             CATListOfDouble & oEndOffset) const = 0;
   
   /**
   * Get over run values.
   * @param oStartOverruns
   *   Over run first extremity value.
   *   <br>Remark : List is limited to one element for now.
   * @param oEndOverruns
   *   Over run second extremity value.
   *   <br>Remark : List is limited to one element for now.
   */
   virtual void GetOverruns(CATListOfDouble & oStartOverruns,
                            CATListOfDouble & oEndOverruns) const = 0;

   /**
   * Set over run values.
   * @param iStartOverruns
   *   Over run first extremity value.
   *   <br>Remark : List is limited to one element for now.
   * @param iEndOverruns
   *   Over run second extremity value.
   *   <br>Remark : List is limited to one element for now.
   */
   virtual void SetOverruns(CATListOfDouble & iStartOverruns,
                            CATListOfDouble & iEndOverruns) const = 0;

   /**
   * @nodoc
   * Get center line validity.
   */
   virtual HRESULT GetValidity() const = 0;

   
   /**
   * @nodoc
   * Modify the line.
   */
   virtual HRESULT ModifyLine(CATMathLine2D *iMathLine) = 0;

   /**
   * @nodoc
   * Get the CATIProduct.
   * @param oProduct[out, CATBaseUnknown#Release]
   */
   virtual HRESULT GetProduct(const IID iid, CATIProduct **oProduct) const = 0;

   /**
   * @nodoc
   * Gets the 3D pointed feature if it has been specified for this axis line.
   * @param oFeat[out, CATBaseUnknown#Release]
   */
   virtual HRESULT Get3DFeature(const IID iid, IUnknown **oFeat) const = 0;
};
CATDeclareHandler(CATIDrwAxisLine, CATBaseUnknown);
#endif
