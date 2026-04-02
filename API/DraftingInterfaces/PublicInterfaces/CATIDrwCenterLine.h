// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwCenterLine_H
#define CATIDrwCenterLine_H


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// ObjectModeler
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATBoolean.h"

// Collections
#include "CATLISTV_CATISpecObject.h"
#include "CATListOfDouble.h"

#include "CATErrors.h"  

class CATIProduct_var;
class CATFace_var;
class CATBody_var;
class CATMathPoint2D;
class CATIProduct;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwCenterLine ;
#else
extern "C" const IID IID_CATIDrwCenterLine ;
#endif

/**
* Interface to manage a center lines or thread.
*/

class ExportedByDraftingItfCPP CATIDrwCenterLine : public CATBaseUnknown
{
  CATDeclareInterface;

   public:
   
   /**
   * Add a reference object to the axis line. 
   * @param iReference
   *   Reference object.
   *   <br>This object must implement IDMCircle2D.
   * @see IDMCircle2D
   */
   virtual void AddReference(CATISpecObject_var iReference) = 0;

   /**
   * Remove a reference object from an axis line. 
   * @param iReference
   *   Reference object to remove.
   *   <br>This object must implement IDMCircle2D.
   * @see IDMCircle2D
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
   * GetCenterLineInfo.
   * <br>Internal use only.
   */
   virtual void GetCenterLineInfo(CATFace_var & oFace, CATBody_var & oBody, CATIProduct_var & oProd,
                                  CATMathPoint2D * &opt, double * &oRadius) = 0;
   
   /**
   * @nodoc
   * Replace reference.
   * <br>Internal use only.
   */
   virtual void ReplaceReference(const CATFace_var & iFace, const CATBody_var & iBody, 
                                 const CATIProduct_var & iProd, CATMathPoint2D * ipt, double * iRadius,
                                 const CATISpecObject_var & iSpec = NULL_var) = 0;
   
   /**
   * Set direction reference.
   * @param iDirRef
   *   Direction reference.
   *   <br>This object must implement IDMLine2D or IDMCircle2D.
   * @see IDMLine2D, IDMCircle2D
   */
   virtual void SetDirectionRef(CATBaseUnknown_var iDirRef) = 0;

   /**
   * Get direction reference.
   * @return
   *   Direction reference.
   *   <br>This object implements IDMLine2D or IDMCircle2D.
   * @see IDMLine2D, IDMCircle2D
   */
   virtual CATISpecObject_var GetDirectionRef() const = 0;

   /**
   * @nodoc
   * Set center line geometry.
   */
   virtual void SetCoordAndVectList(CATListOfDouble &X, CATListOfDouble &Y,
				                            CATListOfDouble &Ux, CATListOfDouble &Uy,
				                            CATListOfDouble &Length, CATListOfDouble &Curvature) const = 0;
   /**
   * @nodoc
   * Get center line geometry.
   */
   virtual void GetCoordAndVectList(CATListOfDouble &X, CATListOfDouble &Y,
                        				    CATListOfDouble &Ux, CATListOfDouble &Uy,
				                            CATListOfDouble &Length, CATListOfDouble &Curvature) const = 0;
   
   /**
   * @nodoc
   * Get center line geometry.
   * this method computes the extremities of the centerline and gets 5 points (origine + extrems) if no curvature.
   * In case of curvature it gets 6 points with the reference points
   */
   virtual void GetPoints(double * & pts, int & onbPoints) = 0;
   
   /**
   * @nodoc
   * Get center line validity.
   */
   virtual HRESULT GetValidity() const = 0;

   /**
   * @nodoc
   * Get reference point position.
   */
   virtual void GetRefPointsList(double &X, double &Y) const = 0;

   /**
   * Set over run values.
   * @param iOverruns
   *   Over run values.
   *   <br>Remark : It must be a four element list.
   */
   virtual void SetOverRuns(CATListOfDouble & iOverruns) const = 0;

   /**
   * Get over run values.
   * @param oOverruns
   *   Over run values.
   *   <br>Remark : It's a four element list.
   */
   virtual void GetOverRuns(CATListOfDouble & oOverruns) const = 0;

   /**
   * @nodoc
   * Get the CATIProduct.
  * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oProduct after use.
   */
   virtual HRESULT GetProduct(const IID iid, CATIProduct **oProduct) const = 0;

   /**
   * @nodoc
   * IsGenerated.
   * <br>Internal use only.
   */
   virtual CATBoolean IsGenerated() const = 0;
};
CATDeclareHandler(CATIDrwCenterLine, CATBaseUnknown);
#endif
