/* -*-c++-*- */
#ifndef CATISketchEditor_h
#define CATISketchEditor_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATI2DWFGeometry.h"
#include "CAT2DSolvingMode.h"
#include "CATSketcherInterfaces.h"
class CATMathTransformation2D;

/**
 * The methods of this interface provide the client with the functionality
 * for handling the sketch's geometry.
 * <b>Role</b>: This interface is used to manage the geometry with the
 * variational constraint solver.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchEditor;
#else
extern "C" const IID IID_CATISketchEditor;
#endif

class ExportedByCATSketcherInterfaces CATISketchEditor : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Open edition.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT OpenEdition(const int iValuateAttr=0) = 0;
  /**
   * Save edition.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SaveEdition() = 0;
  /**
   * Close edition.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT CloseEdition(const int iUnload=0,const int iValuateAttr=0) = 0;
  /**
   * Tells if edition is opened.
   * @return <tt>int</tt>
   * <dl>
   * <dt> <tt>1</tt>  <dd> The shetch is in edition.
   * <dt> <tt>0</tt>  <dd> The sketch is not in edition.
   * </dl>
   */
  virtual int InEdition() = 0;
  /**
   * Set the current group of geometric elements.
   * @param <tt>const CATLISTV(CATI2DWFGeometry_var) &iGeoms</tt>
   * [in] The list of handlers corresponding to the elements to be manipulated.
   * @param <tt>const int iContext</tt>
   * [in] The manipulation mode.
   * <dl>
   * <dt> <tt>0</tt>  <dd> The movable geometric elements are considered.
   * <dt> <tt>1</tt>  <dd> The end-points of movable curves are automatically added.
   * </dl>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetGroup(const CATListValCATI2DWFGeometry_var& iGeoms,
                           const int iContext=1,
                           const double* iDragPoint=NULL ) = 0;
  /**
   * Transformation of the current group of geometric elements under constraints.
   * @param <tt>CATMathTransformation2D &ioTransfo</tt>
   * [inout] The 2D transformation to apply if possible.
   * @param <tt>const CAT2DSolvingMode iSolvingMode</tt>
   * [in] The solving mode.
   * This argument is optional.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT TransformGroup(CATMathTransformation2D& ioTransfo,
                                 const CAT2DSolvingMode iSolvingMode=Solving2DMode_MinimumMove,
                                 const double *iRadius=NULL) = 0;
  /**
   * Reset the current group of geometric elements.
   * @param <tt>const int iContext</tt>
   * [in] The manipulation ending mode.
   * <dl>
   * <dt> <tt>0</tt>  <dd> The manipulation ends as usual.
   * </dl>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT ResetGroup(const int iContext=0) = 0;
  /**
   * Evaluation of geometric elements with respect to constraints.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT Evaluate() = 0;
  /**
   * @nodoc
   */
  virtual HRESULT Evaluate(const CATI2DWFGeometry_var& iGeom) = 0;
  /**
   * Geometry evaluation with soft reference.
   * @param <tt>const CATLISTV(CATI2DWFGeometry_var) &iSoftReference</tt>
   * [in] The list of handlers corresponding to the soft reference elements. The solver
   * tries to keep fixed these elements (the first one is the more prioritary).
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT Evaluate(const CATListValCATI2DWFGeometry_var& iSoftReferences) = 0;
  /**
   * Transformation and evaluation of a group of geometric element.
   * @param <tt>const CATLISTV(CATI2DWFGeometry_var) &iGeoms</tt>
   * [in] The list of handlers corresponding to geometric elements to transform.
   * @param <tt>CATMathTransformation2D *ioTransfos</tt>
   * [in] The array of transformations to apply to geometric elements (same size than the list).
   * @param <tt>double *iRadiiX</tt>
   * [in] The array of (major-)radii to modify on circles and ellipses (same size than the list).
   * This argument is optional.
   * @param <tt>double *iRadiiY</tt>
   * [in] The array of minor-radii to modify on ellipses (same size than the list).
   * This argument is optional.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT Transform(const CATListValCATI2DWFGeometry_var &iGeoms,
                            CATMathTransformation2D *pTransfos,
                            double *iRadiiX=NULL,double *iRadiiY=NULL) = 0;
};

CATDeclareHandler(CATISketchEditor,CATBaseUnknown);

#endif
