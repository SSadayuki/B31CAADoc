#ifndef CATIQsrCAAPowerFit_H
#define CATIQsrCAAPowerFit_H

// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */ 

#include "CATCldQsrCAAItfCPP.h"
#include "CATBooleanDef.h"
#include "CATBaseUnknown.h"
#include "ListPOfCATCell.h"
#include "ListPOfCATEdge.h"
#include "ListPOfCATFace.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCldQsrCAAItfCPP IID IID_CATIQsrCAAPowerFit;
#else
extern "C" const IID IID_CATIQsrCAAPowerFit ;
#endif

class CATGeoFactory ;
class CATSurface ;
class CATCell ;
class CATFace ;
class CATBody ;

/**
 * Interface defining a PowerFit.
 * <br><b>Role</b>: The PowerFit's algorithm is used to create :
 * <br> - An untrimmed surface supported by one cloud of points and/or curves.
 * <br> - A surface supported or not by one cloud of points and trimmed by an external boundary. 
 * <br>A CATIQsrCAAPowerFit is created through the <tt>CreatePowerFit</tt> method
 * of the <tt>CATIQsrCAAFactory</tt> interface and deleted with the <tt>Remove</tt> method.
 */

class ExportedByCATCldQsrCAAItfCPP CATIQsrCAAPowerFit: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Sets the cloud of points.
 * @param iPoints 
 *   The coordinates (in float) of the points, 3 coordinates by point.
 * @param iNbPoints 
 *   Number of points. The minimum size of <tt>iPoints</tt> is (3 * <tt>iNbPoints</tt>).
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iPoints</tt> is not valid or that <tt>iNbPoints</tt> is smaller than zero.
 *       <dt>2<dd>Means that the allocation of <tt>iPoints</tt> is not possible.</dl>
 */    

	virtual HRESULT SetCloudOfPoints (float * iPoints, const int iNbPoints, int &oStatus) = 0;

/**
 * Sets the initial surface.
 * <br>If this method is not used, the default for the computation is the median plane.
 * @param iInitSurface 
 *   The initial surface. The parameterization of the result surface is the same as <tt>iInitSurface</tt>.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iInitSurface</tt> is not valid.</dl>
 */    

	virtual HRESULT SetSurfaceInit (CATSurface * iInitSurface, int &oStatus) = 0;

/**
 * Sets the tolerance on the points.
 * <br>If this method is not used, the default value for the computation is 0.5.
 * @param iTolG0 
 *   The tolerance. It is the acceptable mean error between the points and the result surface.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iTolG0</tt> is smaller than zero.</dl>
 */    

	virtual HRESULT SetG0Points (const double iTolG0, int &oStatus) = 0;	

/**
 * Sets the maximum spans number of the NUBS result surface.
 * <br>If this method is not used, the default value for the computation is 64.
 * @param iNbSpans 
 *   The maximum number of spans.
 *   <br><b>Note :</b> The result is a Bezier patch if the maximum number of spans is equal to 1.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iNbSpans</tt> is smaller than zero.</dl>
 */    

	virtual HRESULT SetNbSpans (const int iNbSpans, int &oStatus) = 0;

/**
 * Sets the span degree.
 * <br>The degree is the same for each span.
 * <br>If this method is not used, the default value for the computation is 5 (minimum value for NUBS C2).
 * @param iDgSpans 
 *   The span degree.
 *   <br><b>Legal values </b>:
 *   <dl><dt> 3 <= <tt>iDgSpans</tt> <= 12.</dl>
 *   <br><b>Note :</b> If the maximum number of spans is equal to 1, the span degree could be equal to 3 or 4.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iDgSpans</tt> is smaller than 2 or higher than 13.</dl>
 */    

  virtual HRESULT SetDgSpans (const int iDgSpans, int &oStatus) = 0;

/**
 * Sets the constrained curves.
 * <br>These curves determine the boundary of the result face.
 * <br>Only the points inside the boundary are used to compute the surface result.
 * <br>Important : See CurveUse for more information on the boundary's use.
 * @param iListOfEdge 
 *   The list of the constrained edges.
 *   <br><b>Note :</b> The edge's order in the <tt>iListOfEdge</tt> is not important.
 * @param iListOfFace
 *   In regard with <tt>iListOfEdge</tt>, the list of associated faces, NULL if you have no face.
 * @param iListOfContact
 *   In regard with <tt>iListOfEdge</tt>, the nature of contact. 
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>If you want a simple passage with the Edge.
 *       <dt>1<dd>If you want a tangency with the mandatory corresponding Face.</dl>
 * @param oGapG0
 *   The biggest hole G0 continuity computed on the <tt>iListOfEdge</tt>
 * @param oStatus
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that there are no edges or that one edge is equal to NULL.
 *       <dt>2<dd>Means that there is only one edge. A boundary of a face with one edge is not possible.
 *       <dt>3<dd>Means that one of the contact values is neither equal to 0 nor equal to 1.
 *       <dt>4<dd>Means that a contact is equal to 1 and there is no Face corresponding.</dl>
 */    

	virtual HRESULT SetCurves (const CATLISTP(CATCell) & iListOfEdge,
              							 const CATLISTP(CATCell) & iListOfFace,
							               const CATListOfInt		   & iListOfContact,
								             double					         & oGapG0,
                						 int						         & oStatus) = 0;

/**
 * Sets the tolerance G0 on each Edge.
 * <br>If this method is not used, the default value for the computation is 0.1.
 * @param iTolG0 
 *   The acceptable mean error between the Edge and its image on the result surface.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iTolG0</tt> is smaller than 0.</dl>
 */    

  virtual HRESULT SetG0GlobalCurves (const double iTolG0, int &oStatus) = 0;

/**
 * Sets the tolerance G1 on each Edge if the tangency constraint is required.
 * <br>If this method is not used, the default value for the computation is 2.5 Degree.
 * @param iTolG1 
 *   The acceptable mean error between the Edge and its image on the result surface.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iTolG1</tt> is smaller than 0.</dl>
 */    

	virtual HRESULT SetG1GlobalCurves (const double iTolG1, int &oStatus) = 0;	
	
/**
 * Sets the curves'use for the computation.
 * <br>If this method is not used, the default value for the computation is 0.
 * @param iCurveUse 
 *   The use of the boundary loaded by SetCurves.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>The surface is computed on the points and the curves. The curves become the edges of the surface.
 *       <dt>1<dd>The surface is computed on the points. The curves are then projected on the surface to trim it. 
 *       <dt>1<dd>The surface is computed on the points located inside the curves. The surface is not trimmed.</dl>
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that <tt>iCurveUse</tt> is not equal to 0, 1 or 2.</dl>
 */    

	virtual HRESULT SetCurveUse (const int iCurveUse, int &oStatus) = 0;

/**
 * Sets the radius of the pipe.
 * <br>The points inside a circular pipe centered on each curve and defined by its radius are deleted
 * in order to minimize the risk of undulations.
 * <br>If this method is not used, the default value for the computation is -1.
 * @param iRadius 
 *   The radius of the pipe.
 *   If its value is -1, the algorithm, using a heuristic, computes the radius automatically.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.</dl>
 */    
 
	virtual HRESULT SetPipeRadius (const double iRadius, int &oStatus) = 0;

/**
 * Runs the algorithm.
 * <br>It computes the filling face.
 * @param oBody 
 *   The body that contains the result face.
 * @param oFace 
 *   The result face.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that the discontinuity G0 in the boundary is greater than the curves tolerance.
 *       <dt>2<dd>Means that there are not enough constraints, points or curves.
 *       <dt>3<dd>Means that some points are in counter draft.
 *       <dt>4<dd>Means that a PlateFe error occurred.
 *       <dt>5<dd>Means that the quality of the surface is too poor (high frequency). There are probably some bad points in the set of points or some points may be in a not detected counter draft.
 *       <dt>10<dd>Means that a precedent error occurred while using other methods of this interface.
 *       <dt>Other<dd>Means that an internal error occurred, no significance for the user.</dl>
 */    

	virtual HRESULT MakeFace (CATBody * &oBody, CATFace * &oFace, int &oStatus) = 0;
	
/**
 * Gets the maximum error, the mean error and the standard deviation.
 * <br>The error on one point is the distance between the point and its orthogonal projection on the surface.
 * @param oMaxErr 
 *   The maximum error.
 * @param oMeanErr 
 *   The mean error.
 * @param oStdDev 
 *   The standard deviation.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that there was an error in the MakeFace method (no face is computed).</dl>
 */    

	virtual HRESULT GetStatisticError(double & oMaxErr,
                                    double & oMeanErr,
                                    double & oStdDev,
                                    int    & oStatus) = 0;

/**
 * Gets the points the error of which is greater than a given value.
 * <br>Use the GetDistanceFace method in a loop from 0 to (<tt>oNbPoints</tt> - 1) to get the coordinates of each point before and after.
 * @param iValue 
 *   The threshold value of the error.
 * @param oIdPoints 
 *   The pointer for the result array.
 * @param oNbPoints 
 *   The number of points of <tt>oIdPoints</tt>.
 * @param oPercent 
 *   The ratio between <tt>oNbPoints</tt> and the original number of points.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that there was an error in the MakeFace method (no face is computed).</dl>
 */    

	virtual HRESULT GetErrorAboveValue (const double iValue,
                                      int      * & oIdPoints,
                                      int        & oNbPoints,
                                      double     & oPercent,
                                      int        & oStatus) = 0;

/**
 * Gets the description of a point and its orthogonal projection on the result face.
 * @param iNumero 
 *   The point number.
 *   <br><b>Legal values </b>:
 *   <dl><dt> 0 <= <tt>iNumero</tt> <= Number of points - 1.</dl>
 * @param oPtInput 
 *   The coordinates of the original point.
 * @param oPtOutput 
 *   The coordinates of the orthogonal projection of <tt>oPtInput</tt> on the result face.
 * @param oDirection 
 *   The error's direction.
 *   <br><b>Legal values </b>:
 *   <dl><dt> <tt>TRUE</tt> means that the direction (<tt>oPtOutput</tt> -> <tt>oPtInput</tt>) is the same as the normal direction of the result face.</dl>
 * @param oDistance 
 *   The distance between the two points.
 * @param oStatus 
 *   Information.
 *   <br><b>Legal values </b>:
 *   <dl><dt>0<dd>Means that everything is OK.
 *       <dt>1<dd>Means that there was an error in the MakeFace method (no face is computed).</dl>
 */    

	virtual HRESULT GetDistanceFace (const int iNumero,
                                   float   * oPtInput,
                                   float   * oPtOutput,
                                   boolean & oDirection,
                                   float   & oDistance,
                                   int     & oStatus) = 0;													
};

CATDeclareHandler( CATIQsrCAAPowerFit, CATBaseUnknown );

#endif
