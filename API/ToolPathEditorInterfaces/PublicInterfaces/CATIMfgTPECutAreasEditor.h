// COPYRIGHT Dassault Systemes 2002
//===================================================================
#ifndef CATIMfgTPECutAreasEditor_H
#define CATIMfgTPECutAreasEditor_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "TPEItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATRep.h"
#include "CATListOfDouble.h"
#include "CATMathVector.h"

class CATIMfgToolPath_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByTPEItfEnv IID IID_CATIMfgTPECutAreasEditor;
#else
extern "C" const IID IID_CATIMfgTPECutAreasEditor ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage commands in the cut areas tool bar of the tool path editor. 
 *
 * <br><b>Role</b> This interface is intended to provide to users a way to add their
 * own command in the tool bar of "cut area" modification in the tool path editor.
 * @see CATIMfgTPECutAreasUserHeader
 **/

class ExportedByTPEItfEnv CATIMfgTPECutAreasEditor: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Gives to the cut area editor a list of points to cut the tool path like in the 
	 * action "Cut by a polygon".
     * @param XCoord
     *   The X coordinates of the cutting points.
     * @param YCoord
     *   The Y coordinates of the cutting points.
     * @param ZCoord
     *   The X coordinates of the cutting points.
     */
		virtual HRESULT LoadCuttingGeometry(CATListOfDouble* XCoord,
														CATListOfDouble* YCoord,
														CATListOfDouble* ZCoord) = 0 ;

    /**
     * Gives to the cut area editor a points which belongs to the tool path to split it in two.
     * @param iPoint
     *   The points
     */
		virtual HRESULT LoadOnePoint(const CATMathPoint &iPoint) = 0 ;

    /**
     * Gives to the cut area editor a points which is on a trajectory to split the tool path in two.
     * @param iPoint
     *   The point
     */
		virtual HRESULT LoadOneCuttingPoint(const CATMathPoint &iPoint) = 0 ;

    /**
     * Gives to the cut area editor two points to split the tool path between these two points.
     * @param iFirstPoint
     *   The first point
     * @param iSecondPoint
     *   The second point
     */
		virtual HRESULT LoadTwoPoints(const CATMathPoint &iFirstPoint,
												const CATMathPoint &iSecondPoint) = 0 ;

    /**
     * Indicates to the cut area editor that designation of polyline  begin.
     */
		virtual HRESULT BeginPolylineToCut() = 0;

    /**
     * Indicates to the cut area editor the list of polyline to cut. 
     * @param iListOfPolyline
     *   The list of polyline
     */
		virtual HRESULT LoadPolylineToCut(CATListOfInt* iListOfPolyline) = 0;

    /**
     * Indicates to the cut area editor that designation of polyline end.
     */
		virtual HRESULT EndPolylineToCut() = 0;

    /**
     * Indicates to the direction of projection to the algorithm of cut.
     * @param iAxis
     *   the direction of projection 
     */
		virtual HRESULT SetProjectionAxis (CATMathVector iAxis) = 0 ;

    /**
     * Hides the representation of the tool path. Usefull to display your 
	 * own representation.
     */
		virtual HRESULT HideToolPathRep() = 0;

    /**
     * Shows the representation of the tool path. Usefull to display the standard 
	 * representation of the tool path at the end of your command.
     */
		virtual HRESULT ShowToolPathRep() = 0;

    /**
     * Gets the representation of points of the tool path.
     */
		virtual CATRep* GetPointsToolPathRep () = 0;

    /**
     * Gets the representation of the tool path.
     */
		virtual CATRep* GetToolPathRep () = 0;

    /**
     * Gets the tool path.
     * @param oToolPath
     *   The tool path.
     */
		virtual HRESULT GetToolPath (CATIMfgToolPath_var& oToolPath) = 0;


    /**
     * Destroys all representations of last command.
     */
		virtual HRESULT ClearAll() = 0;
};

CATDeclareHandler( CATIMfgTPECutAreasEditor, CATBaseUnknown );

//------------------------------------------------------------------

#endif
