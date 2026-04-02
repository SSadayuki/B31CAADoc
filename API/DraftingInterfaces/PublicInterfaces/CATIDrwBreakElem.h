#ifndef CATIDrwBreakElem_h
#define CATIDrwBreakElem_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "DraftingItfCPP.h"
class CATI2DCurve_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwBreakElem;
#else
extern "C" const IID IID_CATIDrwBreakElem;
#endif
/**
 * Interface of the breakElem object.
 * <b>Role</b>:  breakElem objects are necessary to defined the profile on which an areafill will be built.
 * @see CATIDrwAnnotationFactory#CreateDrwAreaFill
 */
class ExportedByDraftingItfCPP CATIDrwBreakElem: public CATBaseUnknown
{ 
  public :
  CATDeclareInterface;
 /**
 * Set the comment.
 * @param iComment
 *		String to define what you want to identify.
 */
  virtual void SetComment(CATUnicodeString iComment)=0;
/**
 * Get the first parameter.
 *		This parameter is the one of sketch element where there is a relevant intersection 
 *     of one contour of the Areafill it defines.
 * @return
 *		the double corresponding to the first intersection it has.
 * @see CATIDrwAreaFill
 */
  virtual double GetParameter1()=0;
/**
 * Get the second parameter.
 *		This parameter is the one of sketch element where there is a relevant intersection 
 *     of one contour of the Areafill it defines.
 * @return
 *		the double corresponding to the second intersection it has.
 * @see CATIDrwAreaFill
 */
  virtual double GetParameter2()=0;
  /**
 * Get the shetch element.
 *		This sketch element is one element of one contour, intersected in the parameters 
 *     described before.
 * @return
 *		the CATI2DCurve  corresponding to the skecth element referenced.
 * @see CATIDrwAreaFill, CATI2DCurve
 */
virtual CATI2DCurve_var GetCurve()=0;  

};
CATDeclareHandler(CATIDrwBreakElem,CATBaseUnknown);











#endif
