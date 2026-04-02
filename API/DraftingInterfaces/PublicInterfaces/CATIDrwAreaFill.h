// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwAreaFill_h 
#define CATIDrwAreaFill_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTP_CATMathPoint2D.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwAreaFill ;
#else
extern "C" const IID IID_CATIDrwAreaFill ;
#endif

/**
 * Interface of the Areafill object.
 */
class ExportedByDraftingItfCPP CATIDrwAreaFill : public CATBaseUnknown
{  
   CATDeclareInterface;
   public :
/**
 * Set the pattern used for Areafill representation.
 * @param iPattern
 *		Pattern reference.
 * @see CATIDftPattern, CATIDftHatchingPattern, CATIDftColoringPattern, CATIDftDottingPattern
 */
   virtual void SetPattern(CATISpecObject_var iPattern)=0;
/**
 * Get the pattern used for Areafill representation.
 * @return
 *		the pattern reference.
 * @see CATIDftPattern, CATIDftHatchingPattern, CATIDftColoringPattern, CATIDftDottingPattern
 */
   virtual CATISpecObject_var GetPattern()=0;
 /**
 * Define the internal contour of the Areafill.
 * @param iList
 *		list of CATIBreakElem, intersecting them 2 by 2 and defining a closed contour.
 *    After defining all internal contours of the areafill, you have to run an event of
 *    modifcation. The external contour is defined by the factory of Areafill.
 * @return
    * An <tt>HRESULT</tt> value.
    * <br><b>Legal values</b>:
    * <dl>
    * <dt> <tt>S_OK</tt>  <dd> contour addition succeeds.
    * <dt> <tt>E_XXX</tt> <dd> Created CATIBreakElem must be removed.
 * @see CATIDrwBreakElem, CATIDrwAnnotationFactory
 */
   virtual HRESULT AddContour(CATLISTV( CATISpecObject_var ) &iList)=0;
 /**
 * @nodoc
 * Define area fill on points.
 */
   virtual HRESULT AddContour(CATLISTP( CATMathPoint2D ) &iList)=0;
 /**
 * Get the external contour of the Areafill.
 * @return
 *		the list of CATIDrwBreakElem defining this external contour.
 * @see CATIDrwBreakElem
 */
   virtual CATLISTV(CATISpecObject_var) GetExternalContour()=0;
 /**
 * Get the number of internal contours of the Areafill.
 * @return
 *		this number.
 */
   virtual int GetNumberOfInternalContour()=0;
 /**
 * Get an internal contour of the Areafill.
 * @param iIndex
 *		number indicating the internal contour you get.
 *    This number respects the order of contour set by AddContour.
 * @return
 *		the list of CATIDrwBreakElem defining this internal contour, with that index.
 * @see CATIDrwBreakElem
 */
   virtual CATLISTV(CATISpecObject_var) GetInternalContour(int iIndex)=0;
   
  /**
   * Remove the referenced objects from an areafill.
   * @param iReference
   *   Reference object to remove.
   *   <br>This object must implement IDMLine2D
   * @see IDMLine2D
   */
   virtual void RemoveReference(const CATISpecObject_var & iReference = NULL_var) = 0;   
   
 /**
 * @nodoc
 * Gets if the area fill is on points or on curves.
 */
   virtual const int GetAreaFillType() = 0;
};

CATDeclareHandler(CATIDrwAreaFill,CATBaseUnknown);


#endif 
