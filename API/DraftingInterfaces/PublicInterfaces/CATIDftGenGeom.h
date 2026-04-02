// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIDftGenGeom_H
#define CATIDftGenGeom_H

#include "IUnknown.h"
#include "CATDraftingInterfaces.h"
#include "CATBooleanDef.h"

#include "CATCollec.h"
class CATCell;
class CATLISTP(CATCell);
class CATCurve;
class CATMathPlane;
class CATBody;
class CATIProduct;
class CATMathTransformation;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenGeom ;
#else
extern "C" const IID IID_CATIDftGenGeom ;
#endif

/**
* Visualisation mode of the generated geometry.
* The geometry can be : 
* @param HIDDEN
*       Edge of a part hidden behind an other one.
* @param VISIBLE       
* 	Standard mode.
* @param OVERLOADED
* 	Some of the edges can have their graphic properties predefined.
* @param NOT_DISPLAYED
* 	For example the edge joining the two side surfaces on a cylinder.
*/
enum DftGenShowMode{ HIDDEN, VISIBLE, OVERLOADED, NOT_DISPLAYED };

/**
 * Interface to manage generated geometry in a generative View.
 */
class ExportedByDraftingItfCPP CATIDftGenGeom : public IUnknown
{

public:

   /** 
   * Gets the underlying 2D geometry.
   * @param oCurve
	 *		Don't forget to RELEASE the resulting curve after use
   */
   virtual HRESULT GetUnderlyingGeometry(CATCurve ** oCurve) const = 0;


   /**
   * @nodoc
   */
   virtual HRESULT SetUnderlyingGeometry(CATCurve * iCurve) const = 0;


   /**
   * Gets the 3D geometry of origin.
   * @param oListPtrCATCell
   *    List of pointers on CATCells.
   *    After use, it must be DELETED and each cell RELEASED.
   */  
   virtual HRESULT GetGeometryOfOrigin(CATLISTP(CATCell) ** oListPtrCATCell) const = 0;

   /**
   * @nodoc
   */ 
   virtual HRESULT SetGeometryOfOrigin(CATLISTP(CATCell) * iListPtrCATCell) const = 0;

   /** 
   * Gets the body of origin.
   * @param oBody
   *    The "coming from" body in the part.
	 *		Don't forget to RELEASE the resulting body after use.
   */
   virtual HRESULT GetBody(CATBody ** oBody) const = 0;
   
   /**
   * @nodoc
   */
   virtual HRESULT SetBody(CATBody * iBody) const = 0;
   
   /** 
   * Gets the product of origin.
   * @param iIID
   *     the IID of the returned interface
   * @param oProduct
   *		the "coming from" product in the assembly.
   *		Don't forget to RELEASE the resulting product after use.		
   */
   virtual HRESULT GetProduct(const IID & iIID, IUnknown ** oProduct) const = 0;
   
   /**
   * @nodoc
   */
   virtual HRESULT SetProduct(CATIProduct * iProduct) const = 0;

   /**
   * @nodoc
   */
   virtual HRESULT GetFeature(const IID & iIID, IUnknown ** oFeature)=0;

   /** 
   * Gets the mode of visualisation.
   * @param oShowMode
   *    see above for definition of ShowMode
   */
   virtual HRESULT GetShowMode(DftGenShowMode & oShowMode) const = 0;
   
   /** 
   * Sets the mode of visualisation.
   * @param iShowMode
   *    see above for definition of ShowMode
   */
   virtual HRESULT SetShowMode(const DftGenShowMode iShowMode) const = 0;

   /**
   * Gets the transformation of the generated geometry.
   * It takes into account all the 3D transformations from the original geometry
   * to the resulting geometry. 
   * @param oTransformation
   *    Mathematical transformation made up of translations and rotations.
	 *		After use, it must be DELETED.
   */  
   virtual HRESULT GetTransformation(CATMathTransformation ** oTransformation) const = 0;

   /**
   * @nodoc
   */
   virtual HRESULT SetTransformation(CATMathTransformation * iTransformation) const = 0;

   /**
   * Used to know if the generated geometry is cut by the section plane.
   * @param oCutInfo
   *   <br>  TRUE = The genItem is cut by the section plane
   *   <br>  FALSE = The genItem is not cut by the section plane
   * @return
   * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
   * <dt><tt>E_INVALIDARG</tt> <dd>if argument pointer NULL,
   * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure occurred.
   * </dl>
   */
   virtual HRESULT IsCut(CATBoolean *oCutInfo) const = 0;

};
#endif

