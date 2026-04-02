// COPYRIGHT Dassault Systemes 2003

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIDrwGenDrawShape_H
#define CATIDrwGenDrawShape_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATLISTP_CATMathPoint2D.h"
#include "CATListOfInt.h"

class CATBody;
class CATIProduct_var;
class CATIDftPattern;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwGenDrawShape;
#else
extern "C" const IID IID_CATIDrwGenDrawShape ;
#endif

  /**
  * Interface to manage a drawing generated shape.
  * <b>Role</b>: A generated shape is a shape created in generative section  view.
  */
class ExportedByDraftingItfCPP CATIDrwGenDrawShape: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /** 
  * Returns the charateristics of the generated shape.
  * <b>Role</b>: Returns the geometrical characteristics of contour(s) composing the generated shape.
  * @param oNbContour
  *     Number of contours.
  * @param oListOfNbPtPerContour
  *     List of number of points for each contour.
  * @param oListOfPoints
  *     List of coordinates of points.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> At least one contour was found
  * <dt> <tt>E_FAIL</tt>   <dd> No contour found.
  * </dl>
  */
    virtual HRESULT GetDescription(int &oNbContour, CATListOfInt &oListOfNbPtPerContour, CATListPtrCATMathPoint2D & oListOfPoints) = 0;
  
  /** 
  * Gets the body of origin.
  * <b>Role</b>: Gets the body from which section view as been created.
  * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oBody after use.
  * @param oBody
  *    The "coming from" body in the part.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Body has been found
  * <dt> <tt>E_FAIL</tt>   <dd> No Body found.
  * </dl>
  */
  
    virtual HRESULT GetBody(CATBody ** oBody) const = 0;
  
  /** 
  * Gets the product of origin
  * <b>Role</b>: Gets the product including CATPart.
  * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oProduct after use.
  * @param iIID
  *     the IID of the returned interface
  * @param oProduct
  *		the "coming from" product in the assembly.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> a product has been found
  * <dt> <tt>E_FAIL</tt>   <dd> No product found.
  * </dl>
  */
    virtual HRESULT GetProduct(const IID & iIID, IUnknown ** oProduct) const = 0;
  
  /** 
  * Returns the Pattern associated to the generated shape.
  * <b>Role</b>: Gets the Pattern associated to the generated shape.
  * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oPattern after use.
  * @param oPattern
  * oPattern.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> A pattern has been found
  * <dt> <tt>E_FAIL</tt>   <dd> No pattern found.
  * </dl>
  */
    virtual HRESULT GetPattern (CATIDftPattern ** oPattern) const = 0;
};

CATDeclareHandler(CATIDrwGenDrawShape, CATBaseUnknown);

//------------------------------------------------------------------

#endif
