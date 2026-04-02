/* -*-c++-*- */
#ifndef CATI2DConstraintFactory_h
#define CATI2DConstraintFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DCstType.h"
#include "CATSketcherInterfaces.h"

class CATISpecObject_var;
class CATIContainer_var;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DConstraintFactory;
#else
extern "C" const IID IID_CATI2DConstraintFactory;
#endif

class ExportedByCATSketcherInterfaces CATI2DConstraintFactory : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Creates a constraint.
   * @param <tt>iElem1</tt>
   * [in] Address of the first geometrical element.
   * @param <tt>iSelPt1</tt>
   * [in] If the geometry is a curve, pass the 2D selection coordinates of the curve
   * expressed according to the sketch system of reference.
	 * Else, pass NULL.
	 * (This entry serves as the initialization point of the resolution. If no information is passed, 
   * the system will evaluate one automatically. However, the returned solution (location where the 
   * constraint on the curve will be solved) can be unexpected for the user).
   * @param <tt>iElem2</tt>
   * [in] Address of the second geometrical element. 
   * Pass NULL if necessary (e.g. for a length constraint, only iElem1 should be valuated).
   * @param <tt>iSelPt2</tt>
   * [in] If the geometry is a curve, pass the 2D selection coordinates of the curve
   * expressed according to the sketch system of reference.
	 * Else, pass NULL.
	 * (This entry serves as the initialization point of the resolution. If no information is passed, 
   * the system will evaluate one automatically. However, the returned solution (location where the 
   * constraint on the curve will be solved) can be unexpected for the user).
   * @param <tt>iElem3</tt>
   * [in] Address of the third geometrical element. 
   * Pass NULL if necessary.
   * @param <tt>iSelPt3</tt>
   * [in] If the geometry is a curve, pass the 2D selection coordinates of the curve
   * expressed according to the sketch system of reference.
	 * Else, pass NULL.
	 * (This entry serves as the initialization point of the resolution. If no information is passed, 
   * the system will evaluate one automatically. However, the returned solution (location where the 
   * constraint on the curve will be solved) can be unexpected for the user).
   * @param <tt>iDirection</tt>
   * [in] Address of a geometrical element of the line type to create an oriented dimension.
   * (e.g. vertical if the V direction of the sketch absolute axis is passed, or horizontal if the 
   * H direction is passed).
   * @param <tt>iCstType</tt>
   * [in] Type of the constraint to create.
   * @param <tt>iDriven</tt>
   * [in] The default value 0 corresponds to a driving dimension. If <> 0, if will be a measured 
   * dimension (reference constraint).
   * @param <tt>iEvaluation</tt>
   * [in] The default value 1 implies a solver evaluation after the constraint is created. 
   * If several constraints must be created successively, you can run explicitly a final evaluation by 
   * setting the value to 0.
   * @returns a handler on the created constraint.
   */
  virtual CATISpecObject_var CreateConstraint(CATBaseUnknown *iElem1, const double *iSelPt1,
                                              CATBaseUnknown *iElem2, const double *iSelPt2,
                                              CATBaseUnknown *iElem3, const double *iSelPt3,
                                              CATBaseUnknown *iDirection,
                                              const CAT2DCstType iCstType,
                                              const int iDriven=0,const int iEvaluation=1) = 0;

  /**
   * @nodoc
   */
  virtual CATISpecObject_var CreateConstraint(CATBaseUnknown *iElem1, const double *iSelPt1,
                                              CATBaseUnknown *iElem2, const double *iSelPt2,
                                              CATBaseUnknown *iElem3, const double *iSelPt3,
                                              CATBaseUnknown *iDirection,
                                              const CATIContainer_var& iContainer, 
                                              const CAT2DCstType iCstType, 
                                              const int driven=0,const int evaluation=1) = 0;

  /**
   * @nodoc
   */
  virtual CATISpecObject_var CreateConstraint(CATListValCATBaseUnknown_var iElem1, const double *iSelPt1,
                                              CATListValCATBaseUnknown_var iElem2, const double *iSelPt2,
                                              const CAT2DCstType iCstType, 
                                              const int driven=0,const int evaluation=1) = 0;
};

CATDeclareHandler(CATI2DConstraintFactory,CATBaseUnknown);

#endif
