/* -*-c++-*- */
#ifndef CATI2DTopologicalOperators_h
#define CATI2DTopologicalOperators_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
class CATListValCATI2DCurve_var;
class CATMathPoint2D;

/**
 * Topological Operators Interface on 2D Geometrical Features.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DTopologicalOperators;
#else
extern "C" const IID IID_CATI2DTopologicalOperators;
#endif

class ExportedByCATSketcherInterfaces CATI2DTopologicalOperators : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Breaks and relimits a monoparametric element, onto the next intersections with the other elements in the sketch.
   * @param <tt>iCurve</tt>
   * [in] Inputs the element to be broken.
   * @param <tt>iSelectedPoint</tt>
   * [in] Inputs the location where the iCurve element is selected.
   * The point makes it possible to find where iCurve has to be broken
   * and to find the part where iCurve has to be preserved and where iCurve has to be erased 
   * @param <tt>oNewCurve</tt>
   * [out] Outputs the created part(s) from the initial iCurve element:
   * <dl>
   * <dt> If iBreak = -1, *oNewCurve will reference the created curve.
   * A call to the Release() method will be necessary at the end of the process of this pointer.
   * It can be NULL if there is zero intersection of iCurve
   *  with any other element of the sketch. Thus iCurve is deleted.
   * It can be NULL if there is only one intersection of iCurve
   *  with any other element of the sketch. Thus iCurve is relimited.
   * <dt> If iBreak = 0, *oNewCurve is NULL because iCurve is relimited, but no extra curve is created.
   * <dt> If iBreak = 1, *oNewCurve will reference the two created curves, if they exist:
   * oNewCurve[0] is the first created curve (can be NULL if no curve is created).
   * oNewCurve[1] is the second created curve (can be NULL if no curve is created).
   * A call to the Release() method will be necessary at the end of the process of these 2 pointers.
   * Must be freeded by caller (delete [] oNewCurve).
   * </dl>
   * @param <tt>iBreak</tt>
   * [in] =  -1 : The selected part of the iCurve is removed.
   *      =   0 : The selected part of the iCurve is kept.
   *      =   1 : The iCurve is broken but no part is removed.
   * @param <tt>iCreateConstraint</tt>
   * [in] =   1 : (Default) The geometrical constraints will be created.
   *      =   0 : No geometrical constraint will be created.
   * @param <tt>iIgnoreConstructionElement</tt>
   * [in] =   0 : (Default) The contruction elements will be taken into account by the relimit operation
   *          1 : The contruction elements will be ignored
   * @return
   * A <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>   <dd> iCurve is modified, and oNewCurve is valuated.
   * <dt> <tt>S_FALSE</tt>  <dd> No intersection with any other element of the sketch:
   * The whole element is erased if iBreak=-1.
   * The whole element is kept if iBreak=0 or iBreak=1.
   * <dt> <tt>E_xxx</tt>  <dd> Problem ocurred.
   * </dl>
   */
  virtual HRESULT QuickRelimit(CATBaseUnknown* iCurve,const CATMathPoint2D& iSelectedPoint,
                               CATBaseUnknown** oNewCurve,int iBreak=-1,const int iCreateConstraint=1,const int iIgnoreConstructionElement=0) = 0;
  /**
   * Informs of the relimitation of two monoparametric elements.
   * To definitively relimit the elements, use SetStartPoint or SetEndPoints method (as indicated
   * with the value of the outputs oLim1 and oLim2). 
   * @param <tt>iElem1</tt>
   * [int] Inputs the 1rst element (not previously relimited) to study for the mutual relimitation.
   * @param <tt>iNo_Limit1</tt>
   * [int] : 0 if the relimitation of the 1rst element is to be studied.
   *         Non zero if the 1rst element has not to be studied in terms of relimitation.
   * @param <tt>oLim1</tt>
   *  [out] : -1 if the 1rst element should be relimited at its beginning
   *           1 if the 1rst element should be relimited at its end
   *           0 if the 1rst element cannot be relimited (if iNo_Limit1!=0 or any other raison)
   * @param <tt>iElem2</tt>
   * [in] Inputs the 2nd element (not previously relimited) to study for the mutual relimitation.
   * @param <tt>iNo_Limit2</tt>
   * [int] : 0 if the relimitation of the 2nd element is to be studied.
   *         Non zero if the 2nd element has not to be studied in terms of relimitation.
   * @param <tt>oLim2</tt>
   * [out] :  -1 if the 2nd element should be relimited at its beginning
   *           1 if the 2nd element should be relimited at its end
   *           0 if the 2nd element cannot be relimited (if iNo_Limit2!=0 or any other raison)
   * @param <tt>iIndicatePoint</tt>
   * [in] Inputs the location near the two elements to indicate the parts to keep.
   * @param <tt>ioRelimitPoint</tt>
   * [in/out] Inputs the previous relimitation point, if it exists. In this case, its coordinates will be modified.
   *          Returns the new relimitation point. It is created if it didn't exist previously, otherwise it has
   *           been modified.
   *          A call to the Release() method will be necessary at the end of the process of this pointer.
   */
  virtual HRESULT Relimit (CATBaseUnknown* iElem1,int iNo_Limit1,int &oLim1,
                  			   CATBaseUnknown* iElem2,int iNo_Limit2,int &oLim2,
			                     const CATMathPoint2D &iIndicatePoint,CATBaseUnknown** ioRelimitPoint) = 0;
  /**
   * Informs of the relimitation of two monoparametric elements.
   * To definitively relimit the elements, use SetStartPoint or SetEndPoints method (as indicated
   * with the value of the outputs oLim1 and oLim2). 
   * @param <tt>iElem1</tt>
   * [int] Inputs the 1rst element (not previously relimited) to study for the mutual relimitation.
   * @param <tt>iNo_Limit1</tt>
   * [int] : 0 if the relimitation of the 1rst element is to be studied.
   *         Non zero if the 1rst element has not to be studied in terms of relimitation.
   * @param <tt>oLim1</tt>
   *  [out] : -1 if the 1rst element should be relimited at its beginning
   *           1 if the 1rst element should be relimited at its end
   *           0 if the 1rst element cannot be relimited (if iNo_Limit1!=0 or any other raison)
   * @param <tt>iParam1</tt>
   * [in] Inputs the parameter around which the 1rst element will be kept.
   *      Must be initialized at 0.0 if useless (for example, not read for a point)
   * @param <tt>iElem2</tt>
   * [in] Inputs the 2nd element (not previously relimited) to study for the mutual relimitation.
   * @param <tt>iNo_Limit2</tt>
   * [int] : 0 if the relimitation of the 2nd element is to be studied.
   *         Non zero if the 2nd element has not to be studied in terms of relimitation.
   * @param <tt>oLim2</tt>
   * [out] :  -1 if the 2nd element should be relimited at its beginning
   *           1 if the 2nd element should be relimited at its end
   *           0 if the 2nd element cannot be relimited (if iNo_Limit2!=0 or any other raison)
   * @param <tt>iParam2</tt>
   * [in] Inputs the parameter around which the 2nd element will be kept.
   *      Must be initialized at 0.0 if useless (for example, not read for a point)
   * @param <tt>ioRelimitPoint</tt>
   * [in/out] Inputs the previous relimitation point, if it exists. In this case, its coordinates will be modified.
   *          Returns the new relimitation point. It is created if it didn't exist previously, otherwise it has
   *           been modified.
   *          A call to the Release() method will be necessary at the end of the process of this pointer.
   */
  virtual HRESULT Relimit (CATBaseUnknown* iElem1,int iNo_Limit1,int &oLim1, double iParam1,
			                     CATBaseUnknown* iElem2,int iNo_Limit2,int &oLim2, double iParam2,
			                     CATBaseUnknown** ioRelimitPoint) = 0;
  /**
   * Breaks a monoparametric element by a point.
   * @param <tt>iCurveToBreak</tt>
   * [in] Inputs the element to be broken
   * @param <tt>ioBreakPoint</tt>
   * [in/out] Inputs the breaking point: it will be projected on the curve. The result is used to break.
   *      The input pointer can be modified.
   *      A call to the AddRef() method is necessary before the use of this Break method.
   *      A call to the Release() method will be necessary after.
   * @param <tt>iToErase</tt>
   * [in] Inputs the possibility to erase the input point to create a new one.
   * @param <tt>oNewCurve</tt>
   * [out] Outputs the created curve, as the one in input.
   */
  virtual HRESULT Break(CATBaseUnknown* iCurveToBreak,
                  			CATBaseUnknown** ioBreakPoint,
                        const int iToErase,
                        CATBaseUnknown** oNewCurve) = 0;
  /**
   * Looks for the elements relimited by a input point (and the construction elements too).
   * @param <tt>iPoint</tt>
   * [in] Inputs the point
   * @param <tt>oCurves</tt>
   * [out] Outputs the list of curves relimited by this point and other (see next argument).
   * @param <tt>iOption</tt>
   * [in] Inputs the desired method to find relimited curves:
   *     = 1  :  (default) Looks for elements relimited by the input point only.
   *     = 2  :  Looks for elements relimited by the input point 
   *              and by all the logically coincident points to this point (linked by a coincidence constraint).
   *     = 3  :  Looks for elements relimited by the input point 
   *              and by all the geometrically identical points to this point.
   *     = 4  :  Looks for elements relimited and get through by the input point.
   *
   *     Remark: The elements output by option 1 are a part of the elements output by the option 2,
   *             which are a part of the elements output by the option 3.
   */
  virtual HRESULT GetIncidentCurves(CATBaseUnknown* iPoint,
                                    CATListValCATI2DCurve_var &oCurves,
                                    int iOption=1) = 0;
  /**
   * @nodoc
   */
  virtual HRESULT InsertCorner(CATBaseUnknown* iCircle,
                  			       CATBaseUnknown* iCurve1,int iTrim1,
                               CATBaseUnknown* iCurve2,int iTrim2) = 0;
  /**
   * @nodoc
   */
  virtual HRESULT InsertChamfer(CATBaseUnknown* iLine,
                        				CATBaseUnknown* iCurve1,int iTrim1,
                                CATBaseUnknown* iCurve2,int iTrim2) = 0;
  /**
   * Inserts a soon created corner between two curves and informs about their relimitations.
   * @param <tt>iCircle</tt>
   * [in] Inputs the previously created corner.
   * @param <tt>iCurve1</tt>
   * [in] Inputs the 1rst curve on wich the corner will eventually be relimited.
   * @param <tt>iTrim1</tt>
   * [in] Indicates if the 1rst curve has to be relimited or not.
   * @param <tt>oLim1</tt>
   * [out] :  -1 if the 1st element should be relimited at its beginning
   *           1 if the 1st element should be relimited at its end
   *           0 if the 1st element cannot be relimited (if iTrim1==0 or any other raison)
   * @param <tt>iCurve2</tt>
   * [in] Inputs the 2nd curve on wich the corner will eventually be relimited.
   * @param <tt>iTrim2</tt>
   * [in] Indicates if the 1rst curve has to be relimited or not.
   * @param <tt>oLim2</tt>
   * [out] :  -1 if the 2nd element should be relimited at its beginning
   *           1 if the 2nd element should be relimited at its end
   *           0 if the 2nd element cannot be relimited (if iTrim2==0 or any other raison)
   * @param <tt>iCreateConstraints</tt>
   * [in] :    0 if the software has not to create tangents, coincidents and mutuals relimitations constraints
   *           1 if the software has to create tangents, coincidents and mutuals relimitations constraints
   */
  virtual HRESULT InsertCorner(CATBaseUnknown* iCircle,
                               CATBaseUnknown* iCurve1,int iTrim1,int &oLim1,
                               CATBaseUnknown* iCurve2,int iTrim2,int &oLim2,
                               int iCreateConstraints=1) = 0;
  /**
   * Inserts a soon created chamfer between two curves and informs about their relimitations.
   * @param <tt>iLine</tt>
   * [in] Inputs the previously created chamfer.
   * @param <tt>iCurve1</tt>
   * [in] Inputs the 1rst curve on wich the chamfer will eventually be relimited.
   * @param <tt>iTrim1</tt>
   * [in] Indicates if the 1rst curve has to be relimited or not.
   * @param <tt>oLim1</tt>
   * [out] :  -1 if the 1st element should be relimited at its beginning
   *           1 if the 1st element should be relimited at its end
   *           0 if the 1st element cannot be relimited (if iTrim1==0 or any other raison)
   * @param <tt>iCurve2</tt>
   * [in] Inputs the 2nd curve on wich the chamfer will eventually be relimited.
   * @param <tt>iTrim2</tt>
   * [in] Indicates if the 1rst curve has to be relimited or not.
   * @param <tt>oLim2</tt>
   * [out] :  -1 if the 2nd element should be relimited at its beginning
   *           1 if the 2nd element should be relimited at its end
   *           0 if the 2nd element cannot be relimited (if iTrim2==0 or any other raison)
   * @param <tt>iCreateConstraints</tt>
   * [in] :    0 if the software has not to create coincidents and mutuals relimitations constraints
   *           1 if the software has to create coincidents and mutuals relimitations constraints
   */
  virtual HRESULT InsertChamfer(CATBaseUnknown* iLine,
                        				CATBaseUnknown* iCurve1,int iTrim1,int &oLim1,
                                CATBaseUnknown* iCurve2,int iTrim2,int &oLim2,
                                int iCreateConstraints=1) = 0;
};

CATDeclareHandler(CATI2DTopologicalOperators,CATBaseUnknown);

#endif
