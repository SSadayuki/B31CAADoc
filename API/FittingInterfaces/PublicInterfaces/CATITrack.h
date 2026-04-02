/* -*-c++-*- */
#ifndef CATITrack_H_
#define CATITrack_H_
//
// CATIA Version 5 Release 1 Framework FittingSimulation
// Copyright   : Dassault Systemes 1997
//----------------------------------------------------------------
// Description : C++ class header file for the class named "CATITrack"
//----------------------------------------------------------------
// Usage : Domain Model for Shuttle
//----------------------------------------------------------------
// Inheritance : CATITrack 
//                 CATISampled
//                   CATBaseUnknown
//----------------------------------------------------------------


/**
 * @CAA2Level L1  
 * @CAA2Usage U1
 */


#include "G60I0FIT.h"

#include "CATBaseUnknown.h"
#include "CATISampled.h"
#include "CATBooleanDef.h"

class CATMathPoint;
class CATMathVector;
class CATMathTransformation;
class CATSiFiPosition;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATITrack;
#else
extern "C" const IID IID_CATITrack;
#endif

// Move modes associated with this track.
/**
 * Enum for Track speed and time modes.
 * <b>Role</b>: This enum is used to set whether the track's speed 
 * and total time will be calculated using the input speed or 
 * input total time.
 * @param CATFitSpeedMode
 *   The input speed should be used to determine how long it takes 
 *  to traverse the track.
 * @param CATFitTimeMode
 *   The input total time should be used to determine how the speed 
 *  that the part traverses the track.
 */
enum CATFitTrackMoveMode 
{
    CATFitSpeedMode,    // Speed based
    CATFitTimeMode      // Time based
};


// Does not seem to be used anywhere.  Therefore we are removing it for now.
//#define CatFitTrackKeepAbsolutePosition ((unsigned int)(1 << 2))


    /**
     * Definition of the CATITrack object.
     * A track defines the motion of an object along a trajectory.  
     * Some key characteristics with tracks are:
     * <ul>
     *      <li> A trajectory is a set of points (specifically @href CATIShot#),
     *           that define positions of where the object will move
     *           through.
     *      <li> The object a track moves includes parts, products 
     *           (CATIProducts), shuttles (CATISiShuttle) and cameras, among
     *           others.
     *      <li> Objects move at a speed which can be specified.
     *      <li> Also, one can change the position of a track after its 
     *           creation.
     * </ul>
     */

class ExportedByG60I0FIT CATITrack : public CATISampled
{

    CATDeclareInterface;

    public :

    // Both of these SetOrigin/GetOrigin functions are related to where
    // the starting location of the track visualization is drawn.  
    /**
     * @nodoc
     */
    virtual HRESULT SetOrigin (CATMathVector  &iOrigin)                                                     =0;
    /**
     * @nodoc
     */
    virtual HRESULT GetOrigin (CATMathVector  &oOrigin)                                                     =0;


    /**
      * Sets the track's base location.
      * <b>Role:</b> Matrix All is defined as the base location of a track.
      * Each shot is then defined relative to this base location.  When a track
      * is first created, the value of Matrix All is determined from the object
      * that is to be moved.
      * @return 
      *     <br> S_OK   : if MatrixAll was correctly set
      *     <br> E_FAIL : if MatrixAll was not correctly set
      */

    virtual HRESULT SetMatrixAll (CATMathTransformation  &iAll)                                             =0;


    /**
      * Retrieves the track's Matrix All (base location.)
      * <b>Role:</b> Matrix All is defined as the base location of a track.
      * Each shot is then defined relative to this base location.  When a track
      * is first created, the value of matrix all is determined from the object
      * that is to be moved.
      * @return 
      *     <br> S_OK   : if MatrixAll was correctly retrieved
      *     <br> E_FAIL : if MatrixAll was not correctly retrieved
      */

    virtual HRESULT GetMatrixAll (CATMathTransformation  &oAll)                                             =0;


    /**
      * Sets the track's Global Transformation.
      * <b>Role:</b> The global transformation is a transformation applied that affects
      * the global position of the track.  This is for the case when a track is moved. 
      * This transformation is then stored as part of Matrix All.  It is relative to 
      * the world origin.
      * @param iGlobalTransfo
      *    A transformation that will affect the track on a global basis.
      * @return 
      *     <br> S_OK   : if the global transformation was correctly set
      *     <br> E_FAIL : if the global transformation was not correctly set
      */

    virtual HRESULT SetGlobalTransfo (CATMathTransformation  &iGlobalTransfo)                               =0;


    /**
      * Retrieves the track's Global Transformation.
      * <b>Role:</b> The global transformation is a transformation applied that affects
      * the global positioning of the track.  This is for the case when a track is moved. 
      * This transformation is then stored as part of matrix all.  It is relative to the
      * world origin.
      * @param oGlobalTransfo
      *    The transformation of how much the track has moved.
      * @return 
      *     <br> S_OK   : if the global transformation was correctly retrieved
      *     <br> E_FAIL : if the global transformation was not correctly retrieved
      */
    
    virtual HRESULT GetGlobalTransfo (CATMathTransformation  &oGlobalTransfo)                               =0;


    /**
      * Sets the track's First Position.
      * <b>Role:</b> The first position is the location of the object the first time the
      * track is created.  It is relative to world origin, and once it is set it is stored as
      * part of Matrix All.
      * @param iFirstPos
      *    The transformation of the first position of the object.
      * @return 
      *     <br> S_OK   : if the first position was correctly set
      *     <br> E_FAIL : if the first position was not correctly set
      */

    virtual HRESULT SetFirstPosition (CATMathTransformation  &iFirstPos)                                    =0;


    /**
      * Retrieves the track's First Position.
      * <b>Role:</b> The first position is the location of the object the first time the
      * track is created.  It is relative to world origin, and once it is set it is stored as
      * part of Matrix All.
      * @param iFirstPos
      *    The transformation of the first position of the object.
      * @return 
      *     <br> S_OK   : if the first postion was correctly retrieved
      *     <br> E_FAIL : if the first position was not correctly retrieved
      */

    virtual HRESULT GetFirstPosition (CATMathTransformation  &oFirstPos)                                    =0;


    /**
      * Sets the track's Guaranteed Position.
      * <b>Role:</b> The guaranteed position is a transformation used to move the track 
      * relative to the track's starting position (ie. First Position).  It is a relative
      * transformation designed to only affect the trajectory information.
      * @param iGuaranteedPosition
      *    A transformation relative to the object's first position
      * @return 
      *     <br> S_OK   : if the guaranteed position was correctly set
      *     <br> E_FAIL : if the guaranteed position was not correctly set
      */

    virtual HRESULT SetGuaranteedPosition (CATMathTransformation  &iGuaranteedPosition)                     =0;


    /**
      * Retrieves the track's Guaranteed Position.
      * <b>Role:</b> The guaranteed position is a transformation used to move the track 
      * relative to the track's starting position (ie. First Position).  It is a relative
      * transformation designed to only affect the trajectory information.
      * @param oGuaranteedPosition
      *    A transformation relative to the object's first position
      * @return 
      *     <br> S_OK   : if the guaranteed position was correctly retrieved
      *     <br> E_FAIL : if the guaranteed position was not correctly retrieved
      */

    virtual HRESULT GetGuaranteedPosition (CATMathTransformation  &oGuaranteedPosition)                     =0;


    /**
      * Retrieves the speed of the track.
      * <b>Role:</b> A track defines the motion of an object along a trajectory.  The 
      * rate at which the object moves is specified by the speed.
      * @param oSpeed
      *    The value of the speed of the track.  It should be greater than zero.
      * @return 
      *     <br> S_OK   : if the Speed value was correctly obtained
      *     <br> E_FAIL : if the Speed Mode value was not correctly obtained
      */

    virtual HRESULT GetSpeed (double &oSpeed)                                                               =0;


    /**
      * Sets the speed of the track.
      * <b>Role:</b> A track defines the motion of an object along a trajectory.  The 
      * rate at which the object moves is specified by the speed.
      * @param iSpeed
      *    The value of the speed of the track.  It should be greater than zero 
      * @return 
      *     <br> S_OK   : if the Speed value was correctly set
      *     <br> E_FAIL : if the Speed Mode value was not correctly set
      */
    
    virtual HRESULT SetSpeed (double  iSpeed)                                                               =0;


    // The following methods are only used in one place (CATSiFiPointContainer).
    // They are to be used internally, for path finding calculations and therefore we are 
    // setting them as no doc.

    /** @nodoc */
    virtual HRESULT GetTranslation (double &oTranslation)                                                   =0;

    /** @nodoc */
    virtual HRESULT SetTranslation (double  iTranslation)                                                   =0;

    /** @nodoc */
    virtual HRESULT GetRotation (double &oRotation)                                                         =0;

    /** @nodoc */
    virtual HRESULT SetRotation (double  iRotation)                                                         =0;


    /**
      * Retrieves the current position of the object along the track.
      * <b>Role:</b> Gets the current position of the object along the track.  This
      * position is absolute.
      * @param oPosition
      *    Information for the position
      * @return 
      *     <br> S_OK   : if the position information was correctly retrieved
      *     <br> E_FAIL : if the position information was not correctly retrieved
      */

    virtual HRESULT GetCurrentPosition (CATSiFiPosition &oPosition)                                         =0;


    /**
      * Retrieves the current position of the object along the track.
      * <b>Role:</b> Gets the current position of the object along the track.  This
      * position is absolute.
      * @param oPosition
      *    A transformation for the position
      * @return 
      *     <br> S_OK   : if the position information was correctly retrieved
      *     <br> E_FAIL : if the position information was not correctly retrieved
      */

    virtual HRESULT GetCurrentPosition (CATMathTransformation &oPosition)                                   =0;


    /**
      * Produces a "mirror image" of the track.  
      * <b>Role:</b> Determines the "mirror image" of a track.  The "mirror" is
      * a 3d plane specified by a point on the plane and the normal to the surface
      * of the plane.  The mirror calculation involves going through each shot
      * and projecting it in the space on the other side of the mirror plane.  The 
      * projection "reflects" the point perpendicularly to the plane.
      * @param iPoint
      *    A point on the plane that will be used to define the mirror.
      * @param iNormal
      *    A normal to the plane that will be used to define the mirror.
      * @return 
      *     <br> S_OK   : if the mirror function was performed correctly 
      *     <br> E_FAIL : if the mirror function was not performed correctly
      */

    virtual HRESULT Mirror (CATMathPoint &iPoint, CATMathVector &iNormal)                                   =0;


    // We are setting this as no doc since it does nothing.  The method once updated
    // a track depending on the value of a specific variable, r.  Currently
    // r is set to a value that does not allow the update to occur.

    /** @nodoc */
    virtual HRESULT ScanForUpdate ()                                                                        =0;


    /**
      * Retrieves the move mode.
      * <b>Role:</b> There are two different modes related to track creation/definition. 
      * These are speed based mode and time based mode.  
      * <ul>
      *      <li> In speed based mode, the speed is held constant and the track time is 
      *           calculated (time = (total distance) / speed).  Since a speed of zero
      *           produces an undefined result, it must be positive and non-zero.
      *      <li> In time based mode, the time is held constant and the track speed is 
      *           calculated (speed = (total distance) / time).  The time must be positive
      *           and non-zero.
      * </ul>
      * @param oMode
      *    The move mode for the track.
      *    <b>Legal values</b>:
      *     <br><tt>CATFitSpeedMode</tt> for speed based mode
      *     <br><tt>CATFitTimeMode</tt> for time based mode
      * @return
      *     <br> S_OK   : if the Move Mode value was correctly obtained
      *     <br> E_FAIL : if the Move Mode value was not correctly obtained
      */

    virtual HRESULT GetMoveMode (CATFitTrackMoveMode &oMode)                                                =0;


    /**
      * Sets the move mode.
      * <b>Role:</b> There are two different modes related to track creation/
      * definition. These are speed based mode and time based mode.  
      * <ul>
      *      <li> In speed based mode, the speed is held constant and the track time is 
      *           determined (time = (total distance) / speed).  Since a speed of zero
      *           produces an undefined result, it must be positive and non-zero.
      *      <li> In time based mode, the time is held constant and the track speed is 
      *           determined (speed = (total distance) / time).  The time must be positive
      *           and non-zero.
      * </ul>
      * @param iMode
      *    The move mode for the track.
      *    <b>Possible returned values</b>:
      *     <br><tt>CATFitSpeedMode</tt> for speed based mode
      *     <br><tt>CATFitTimeMode</tt> for time based mode
      * @return
      *     <br> S_OK   : if the Move Mode value was correctly set
      *     <br> E_FAIL : if the Move Mode value was not correctly set
      */

    virtual HRESULT SetMoveMode (CATFitTrackMoveMode iMode)                                                 =0;


    /**
      * @nodoc
      * Get the list of sections.
      * <b>Role:</b> Retrieves the list of sections associated to the track 
      * @param sectionList
      *     A list of section objects.
      * @return 
      *     <br> S_OK   : if there were no problems retrieving the section list
      *     <br> E_FAIL : if there were problems retrieving the section list, thus
      *                   the returned values should no be used.
      */

    virtual HRESULT GetSectionList (CATListValCATBaseUnknown_var & sectionList)                             =0;


    /**
      * @nodoc
      * Set the list of sections.
      * <b>Role:</b> Sets the list of sections associated to the track 
      * @param sectionList
      *     A list of section objects to be assigned to the track.
      * @return 
      *     <br> S_OK   : if there were no problems storing the section list
      *     <br> E_FAIL : if there were problems storing the section list
      */

    virtual HRESULT SetSectionList (CATListValCATBaseUnknown_var & sectionList)                             =0;


};


CATDeclareHandler (CATITrack,CATBaseUnknown);


// CATITrack_H_
#endif
