#ifndef CATIMechanicalCCP_h
#define CATIMechanicalCCP_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include <CATISpecObject.h>
 
class CATPathElement; 
class CATMathPoint; 
class CATPlane_var;
class CATMathDirection;

class CATListValCATISpecObject_var;
#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByMecModItfCPP IID IID_CATIMechanicalCCP;
#else
extern "C" const IID IID_CATIMechanicalCCP;
#endif


/**
 * Interface for copy, paste, delete, drag and drop operations.
 * <b>Role</b>: This interface allows users to know if a feature:
 * <ul><li>can be copied,
 * <li>can be pasted,
 * <li>can be deleted.</ul>
 */
class ExportedByMecModItfCPP CATIMechanicalCCP : public CATBaseUnknown
{
  CATDeclareInterface;

 public:
  
/**
 * Returns the main specifications.
 */
  virtual CATLISTV(CATISpecObject_var) GiveMeYourFavoriteSpecifications() const = 0 ;
  
/**
 * Returns if an element is valid for a paste operation on a selected element.<br>
 * <b>Role</b>: This method is integrated to the Drag and Drop engine but not to the Copy Paste engine. <br>
 * @param iPath
 *   Path of the selected element.
 * @return
 *  An integer value.
 *   <br><b>Legal values</b>: 
 *   <ul><li><b>1</b> the current feature is valid for a paste operation on the selected element.
 *   <li><b>0</b> the current feature is not valid for a paste operation on the selected element.</ul>
 */
  virtual int IsElementValidForPaste(CATPathElement* iPath) const = 0 ;

/**
 * Returns the anchor point.
 * @see CATICharacteristicGeomElem
 */
  virtual CATMathPoint GetAnchorPoint() const = 0 ;

/**
 * Returns the reference normal.
 * @see CATICharacteristicGeomElem
 */
  virtual CATMathDirection GetReferenceNormal() const = 0;
	
/**
 * Returns if a feature can be deleted.
 * @param iList
 * The features that define the deletion context.
 * @return
 *  An integer value.
 *   <br><b>Legal values</b>: 
 *   <ul><li><b>1</b> the current feature can be deleted.
 *   <li><b>0</b> the current feature can not be deleted.</ul>
 */
  virtual int CanBeDeleted(CATLISTV(CATISpecObject_var) iList) const = 0; 

/**
 * Returns if a feature can be copied in "As specified in Part document" format.
 * @return
 *  An integer value.
 *   <br><b>Legal values</b>: 
 *   <ul><li><b>1</b> the current feature can be copied.
 *   <li><b>0</b> the current feature can not be copied.</ul>
 */
  virtual int CanBeCopied() const = 0 ; 
  
};

CATDeclareHandler(CATIMechanicalCCP,CATBaseUnknown);

#endif
