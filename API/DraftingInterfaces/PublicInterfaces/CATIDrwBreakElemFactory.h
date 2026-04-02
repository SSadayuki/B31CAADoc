#ifndef CATIDrwBreakElemFactory_h
#define CATDrwBreakElemFactory_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "DraftingItfCPP.h"
class CATIDrwBreakElem_var;
class CATI2DCurve_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwBreakElemFactory ;
#else
extern "C" const IID IID_CATIDrwBreakElemFactory ;
#endif

/**
* Interface to create BreakElem.
* <b>Role</b>: Use this interface to create BreakElem in the objet which  
* implements this interface (i.e. a view).
*/

class ExportedByDraftingItfCPP CATIDrwBreakElemFactory : public CATBaseUnknown
{
  public :
  CATDeclareInterface;
  
 /**
 * Creates a CATIDrwBreakElem.
 * @param iCurve
 *		This sketch element is one element of one contour, intersected in the parameters 
 *     described below.
 * @param iCoordx
 *		Parameter of the first intersection.
 * @param iCoordy
 *		Parameter of the second intersection.
 * @param iName
 *		String containing a comment or its identifier.
 * @param iIndex
 *		number to index it in the contour it belongs.
 * @param iCreation
 *		Status of creation or modification.
 * @param iContainment
 *		Index of containment.
 * @return 
 *    the new CATIBreakElem.
 * @see CATIDrwAreaFill, CATI2DCurve, CATIDrwBreakElem
 */
  virtual CATIDrwBreakElem_var CreateBreakElem(CATI2DCurve_var iCurve,double iCoordx,double iCoordy,CATUnicodeString iName,int iIndex,int iCreation,int icontainment)=0;
  
};

CATDeclareHandler(CATIDrwBreakElemFactory,CATBaseUnknown);


#endif
