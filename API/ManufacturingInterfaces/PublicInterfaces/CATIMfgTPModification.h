// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIMfgTPModification.h
// Define the CATIMfgTPModification interface
// Only for TPMultipleMotion traject's type
//===================================================================
//
// Usage notes:
//   New interface: Cut or Translate a zone of the Tool Path
//
//===================================================================
//
//  Janvier 2000  Creation: 
//===================================================================
#ifndef CATIMfgTPModification_H
#define CATIMfgTPModification_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATListOfDouble.h"
#include "CATListOfInt.h"

class CATMathPoint;
class CATMathVector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPModification;
#else
extern "C" const IID IID_CATIMfgTPModification;
#endif

/**
* Interface usefull to manage local modifications on tool path objects.
* <b>Role</b>: All modifications described in this interface provide access to points.<br>
*
*/

//------------------------------------------------------------------
class ExportedByMfgItfEnv CATIMfgTPModification : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
	*   Insert a list of points.<br>
	*   The point is inserted two times in the tool path.<br>
	*   If you want that each point is inserted only one time, please use InsertPoints.
	*   @param iXTipCuttingPoint
	*      the list of X coordinates to add
	*   @param iYTipCuttingPoint
	*      the list of Y coordinates to add
	*   @param iZTipCuttingPoint
	*      the list of Z coordinates to add
	*   @param iIndexList
	*      the list of Index (in Tip Lists) where to add points
	*/
	virtual HRESULT InsertPoint( const CATListOfDouble *iXTipCuttingPoint,
								 const CATListOfDouble *iYTipCuttingPoint,
								 const CATListOfDouble *iZTipCuttingPoint,
								 const CATListOfInt *iIndexList)=0;

/**
	*   Insert a list of points.<br>
	*   Each point is copied N times in the tool path.<br>
	*   @param iXTipCuttingPoint
	*      the list of X coordinates to add
	*   @param iYTipCuttingPoint
	*      the list of Y coordinates to add
	*   @param iZTipCuttingPoint
	*      the list of Z coordinates to add
	*   @param iIndexList
	*      the list of Index (in Tip Lists) where to add points
	*   @param iNumberOfCopy
	*      the number of copy of each inserted point in the tool path
	*/
	virtual HRESULT InsertPoints(const CATListOfDouble *iXTipCuttingPoint,
								 const CATListOfDouble *iYTipCuttingPoint,
								 const CATListOfDouble *iZTipCuttingPoint,
								 const CATListOfInt *iIndexList,
								 int iNumberOfCopy=1)=0;

/**
	*   Cut a list of  points.<br>
	*   @param iIndexList
	*      the list of index point (in Tip Lists) to be cutted
	* 
	* The tool path is opened after CutArea
	* 
	*/
	virtual HRESULT CutArea (const CATListOfInt *iIndexList)=0;

/**
	*   Translate a list of points.<br>
	*   @param iIndexList
	*      the list of index point (in Tip Lists) to be Translated
	*   @param iDx
	*      the translation along X axis.
	*   @param iDy
	*      the translation along Y axis.
	*   @param iDz
	*      the translation along Z axis.
	* 
	*/
	virtual HRESULT TranslateArea (const CATListOfInt *iIndexList,
										  double iDx, double iDy, double iDz) = 0;

/**
	*   Remove a list of point.<br>
	*   @param iPointList
	*      the list of index point (in Tip Lists) to be cutted
	* 
	* The tool path is closed after RemovePoint
	* 
	*/
	virtual HRESULT RemovePoint (const CATListOfInt *iPointList)=0;

/**
* @nodoc
*/     
	virtual HRESULT MovePoint (const CATListOfInt *iPointList,
									 double iDx, double iDy, double iDz)=0;

/**
  *   Insert a polyline at a given position.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param iTrajectType
  *      the type of the traject
  *   @param iFeedrateType
  *      the type of the feedrate.
  *   @param X
  *      the list of X coordinates of the points to insert
  *   @param Y
  *      the list of Y coordinates of the points to insert
  *   @param Z
  *      the list of Z coordinates of the points to insert
  */
	virtual CATBoolean InsertPolyline(int numbloc,
											const CATUnicodeString& iTrajectType,
											const CATUnicodeString& iFeedrateType,
											const CATListOfDouble& X,
											const CATListOfDouble& Y,
											const CATListOfDouble& Z) = 0;

/**
  *   Insert a polyline at a given position. The first point is given.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param iTrajectType
  *      the type of the traject
  *   @param iFeedrateType
  *      the type of the feedrate.
  *   @param X
  *      the X coordinate of the first point to insert
  *   @param Y
  *      the Y coordinate of the first point to insert
  *   @param Z
  *      the Z coordinate of the first point to insert
  */
  virtual CATBoolean InsertPolyline( int numbloc,
											 const CATUnicodeString& iTrajectType,
											 const CATUnicodeString& iFeedrateType,
											 double X,double Y,double Z) = 0;

/**
  *   Insert a point at a given position in a polylone of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the X coordinate of the point to insert
  *   @param Y
  *      the Y coordinate of the point to insert
  *   @param Z
  *      the Z coordinate of the point to insert
  */
  virtual CATBoolean InsertTipPointInPolyline ( int numbloc,
															double X,double Y,double Z) = 0;

/**
  *   Insert a contact point at a given position in a polylone of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the X coordinate of the contact point to insert
  *   @param Y
  *      the Y coordinate of the contact point to insert
  *   @param Z
  *      the Z coordinate of the contact point to insert
  */
  virtual CATBoolean InsertContactPointInPolyline( int numbloc,
																double X,double Y,double Z) = 0;

/**
  *   Insert a normal at a given contact point in a polylone of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the X normal coordinate to insert
  *   @param Y
  *      the Y normal coordinate to insert
  *   @param Z
  *      the Z normal coordinates to insert
  */
  virtual CATBoolean InsertContactNormalInPolyline(int numbloc,
																double X,double Y,double Z) = 0;

/**
  *   Insert a tool axis at a given point in a polylone of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the X tool axis coordinate to insert
  *   @param Y
  *      the Y tool axis coordinate to insert
  *   @param Z
  *      the Z tool axis coordinate to insert
  */
  virtual CATBoolean InsertToolAxisInPolyline ( int numbloc,
															double X,double Y,double Z) = 0;

/**
  *   Insert a list of contact points at a given position in a polyline of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the list of X coordinates to insert
  *   @param Y
  *      the list of Y coordinates to insert
  *   @param Z
  *      the list of Z coordinates to insert
  */
  virtual CATBoolean InsertContactPointsInPolyline(int numbloc,
																const CATListOfDouble& X,
	                                             const CATListOfDouble& Y,
																const CATListOfDouble& Z) = 0; 

/**
  *   Insert a list of normals at a given contact point in a polyline of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the list of X normal coordinates to insert
  *   @param Y
  *      the list of Y normalcoordinates to insert
  *   @param Z
  *      the list of Z normalcoordinates to insert
  */
  virtual CATBoolean InsertContactNormalsInPolyline ( int numbloc,
																	const CATListOfDouble& X,
																	const CATListOfDouble& Y,
																	const CATListOfDouble& Z) = 0;

/**
  *   Insert a list of tool axis at a given position in a polyline of a tool path.<br>
  *   @param numbloc
  *      the position of insertion
  *   @param X
  *      the list of X tool axis coordinates to insert
  *   @param Y
  *      the list of Y tool axis coordinates to insert
  *   @param Z
  *      the list of Z tool axis coordinates to insert
  */
  virtual CATBoolean InsertToolAxisInPolyline ( int numbloc,
															const CATListOfDouble& X,
															const CATListOfDouble& Y,
															const CATListOfDouble& Z) = 0;


/**
*   Remove a polyline from a tool path.<br>
*   @param numbloc
*      the index of the polyline
*/
  virtual CATBoolean RemovePolyline                (int numbloc) = 0;

/**
*   Insert a circle arc.<br>
*   @param numbloc
*      the index where to insert the circle arc
*   @param iTrajectType
*      The type of traject
*   @param iFeedrateType
*      The type of feedrate
*   @param iX,iY,iZ
*     The coordinates of tip points (discretization of the circle arc)
*   @param iNormale
*     The oriented normal to the plane containing the circle arc
*   @param iCenter
*     The center of the circle arc
*    @param iRadius
*     The radius of the circle arc.
*/
  virtual CATBoolean InsertCircleArc(int numbloc,
						     	     const CATUnicodeString& iTrajectType,
	 		                         const CATUnicodeString& iFeedrateType,
				                     const CATListOfDouble& X,
				                     const CATListOfDouble& Y,
				                     const CATListOfDouble& Z,
				                     const CATMathVector& iNormal,
				                     const CATMathPoint& iCenter,
		                             double iRadius)       = 0;

/**
*   Remove a circle arc.<br>
*   @param numbloc
*      the index of the circle arc
*/
  virtual CATBoolean RemoveCircleArc                (int numbloc) = 0;

/**
* @nodoc
*/     
  virtual CATBoolean DeleteDatas                   () = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMfgTPModification, CATBaseUnknown );

#endif
