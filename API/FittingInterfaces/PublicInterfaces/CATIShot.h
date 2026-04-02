/* -*-c++-*- */
#ifndef CATIShot_H_
#define CATIShot_H_
//
// CATIA Version 5 Release 1 Framework FittingSimulation
// Copyright   : Dassault Systemes 1997
//----------------------------------------------------------------
// Description : C++ class header file for the class named "CATIShot"
//----------------------------------------------------------------
// Usage : Domain Model for Shuttle
//----------------------------------------------------------------
// Inheritance : CATIShot 
//                 CATBaseUnknown
//----------------------------------------------------------------


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "G60I0FIT.h"

#include "CATBaseUnknown.h"
#include "booleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATIShot;
#else
extern "C" const IID IID_CATIShot;
#endif

class CATSiFiSample;

// No shot flags will be exposed to the user.
/** @nodoc */
#define CatFitShotUndefined         ((unsigned int)0)
/** @nodoc */
#define CatFitShotIsComputed        ((unsigned int)(1 << 0))
/** @nodoc */
#define CatFitShotIsViaPoint        ((unsigned int)(1 << 1))
/** @nodoc */
#define CatFitShotEstimatedDuration ((unsigned int)(1 << 2))
/** @nodoc */
#define CatFitShotDangerousArea     ((unsigned int)(1 << 3))


    /**
     * The interface to access a CATIShot.
     * <b>Role:</b> A CATIShot (or shot) is the base element that @href 
     * CATISampled objects are composed of.  For example, when considering a 
     * @href CATITrack, each recorded position is a shot.
     */


class ExportedByG60I0FIT CATIShot : public CATBaseUnknown
{

    CATDeclareInterface;

    public :

    /**
      * Retrieves the duration (in terms of distance) associated to a shot.  
      * The duration of a shot is the amount of time needed to travel from 
      * the previous shot to the current shot. 
      * However, this method retrieves the distance of the current shot
      * from that of the previous shot. It is left for the user to calculate
      * the Time using distance/speed Formula.
      *
      * 
      * Some key things to note are:
      * <ul>
      *     <li> The first shot should have a duration of zero.
      *     <li> The value of the duration is a positive real number.  Hence,
      *          0.454 & 1345 are legal while -18 is not.
      * </ul>
      * @param oTime
      *    The duration (distance) of a shot.
      */
   
    virtual HRESULT GetDuration (double &oTime)                                                  =0;

    /**
      * Sets the duration (in terms of distance) associated to a shot.  
      * The duration of a shot is the amount of time needed to travel from 
      * the previous shot to the current shot. 
      * However, this method sets the distance of the current shot
      * from that of the previous shot. It is left for the user to calculate
      * the distance that needs to be set for the shot using the Time*Speed Formula.
      *
      * 
      * Some key things to note are:
      * <ul>
      *     <li> The first shot should have a duration of zero.
      *     <li> The value of the duration is a positive real number.  Hence,
      *          0.454 & 1345 are legal while -18 is not.
      * </ul>
      * @param oTime
      *    The duration (distance) of a shot.
      */

    virtual HRESULT SetDuration (double  iTime)                                                  =0;


    /**
      * Resets the duration (time) associated to a shot.
      * <b>Role:</b> When reseting a shot's time, data values are unset (or deleted).
      * Then the next time GetDuration is called, the duration will be recalculated.
      *
      */
    virtual HRESULT ResetDuration ()                                                             =0;


    /**
     * @nodoc
     * For now we shall set to no doc since this seems only used within the path finder.
     *
     * Retrieves the flags associated to the shot.
     * <b>Role:</b> A shot sometimes uses a flag mechanism to describe different
     * conditions.  These conditions occur in different occasions such as when 
     * performing a pathfinder calculation.
     * @param oFlags
     *      We return a bitstring value where one can determine if:
     * <ul>
     *     <li> CatFitShotUndefined with a value of 0
     *     <li> CatFitShotIsComputed with a value of 1
     *     <li> CatFitShotIsViaPoint with a value of 2
     *     <li> CatFitShotEstimatedDuration with a value of 4
     *     <li> CatFitShotDangerousArea with a value of 8
     * </ul>
     */
    virtual HRESULT GetFlags (unsigned int &oFlags)                                              =0;

    /**
     * @nodoc
     */
    virtual HRESULT SetFlags (unsigned int  iFlags)                                              =0;


    // The following 2 APIs are the result of an attempted enhancement to link a 
    // object to a shot.  So that when the object(eg. product) is moved the 
    // shot is also modified accordingly and the gets updated. But this 
    // enhancement was never completed.  Usage: To create a track along a 
    // railing/conveyor.  Thus for now we shall set them as "no doc".

    /**
     * @nodoc
     */
    virtual HRESULT GetReference (CATBaseUnknown *&oRef)                                         =0;

    /**
     * @nodoc
     */
    virtual HRESULT SetReference (CATBaseUnknown * iRef)                                         =0;


     /**
     * Retrieves the compass position related to the shot
     * @param oDatas     
     *    <ul>
     *        <li> Compass (or Manipulator) Position; it is relative to the object
     *              position
     *    </ul>
     */
    virtual HRESULT GetDirectionalDatas (void *&oDatas)                                          =0;


    /**
     * Sets the compass position for the shot
     * @param iDatas
    *    <ul>
     *        <li> Compass Position is set, it is relative to the object position
     *    </ul>
     */
    virtual HRESULT SetDirectionalDatas (void *iDatas)                                           =0;

    /**
     * Retrieves the positional/directional information related to the shot.
     * This method doesnt return information for Generic Shots because the Generic shots 
     * do not cantain positional data. For ShotDouble we get 24 values for Shot Simple we get 12 values
     * and for Shot Points we get 9 values.
     * The caller should create an array of sufficient size
     * @param oPosDatas
     *    If the shot is for a Track then it returns the shot information.     
     *    <ul>
     *        <li> Compass (or Manipulator) Position which is relative to the object
     *              position and the Object Position that is relative to the start 
     *              of the track. 
     *    </ul>
     * @param oSize
     *    The size of the list of double that is returned
     */

    virtual HRESULT GetPositionData (double *oPosDatas, int &oSize )                              =0; 

     /**
     * Sets the positional/directional information related to the shot.
     * This method doesnt set information for Generic Shots because the Generic shots 
     * do not cantain positional data. For ShotDouble we get 24 values for Shot Simple 
     * we get 12 values and for Shot Points we get 9 values.
     * @param iPosDatas
     *    If the shot is for a Track then it sets the shot information.  
     *    <ul>
     *        <li> iPosDatas contains Compass Position which is relative to the object
     *              position and the Object Position that is relative to the start 
     *              of the track. 
     *    </ul>
     * @param iSize
     *   This is the size of double
     */
    virtual HRESULT SetPositionData (double *iPosDatas, int iSize )                              =0; 

    // These two methods handle low level calls to Simulation Infrastructure.
    // Ther are set as "no doc", since the information that they expose is handled
    // with other methods.

    /**
     * @nodoc
     */   
    virtual HRESULT GetSample (CATSiFiSample *iSample, boolean iWithTime=TRUE)                   =0;

     /**
     * @nodoc
     */
    virtual HRESULT SetSample (CATSiFiSample *iSample, boolean iWithTime=TRUE)                   =0;


    /**
      * Sets special characteristics for different objects when creating a
      * shot.  Again this is for different object types such as a camera.  It is 
      * recommended for it to be set so that the correct interpolation can be 
      * determined between shots.
      * @param iId
      *    The number of the id to set.
      */
    virtual HRESULT SetApplicativeId (unsigned int  iId)                                         =0;


    /**
      * Retrieves how special characteristics for different objects when creating a
      * shot.  Again this is for different objects such as a camera.  It is 
      * recommended for it to be set so that the correct interpolation can be 
      * determined between shots.
      * @param oId
      *    The value of the id
      */
    virtual HRESULT GetApplicativeId (unsigned int &oId)                                         =0;


    /**
      * Sets data to the related objects in the previous API.  For example: the zoom
      * for a camera.
      * @param iSize
      *    The size/number of elements contained in iDatas
      * @param iDatas
      *    A set of data values (stored as doubles) to be stored.
      */
    virtual HRESULT SetApplicativeDatas (int iSize, double *iDatas)                              =0;


    /**
      * Retrieves data to the related objects in the previous API.  For example: the zoom
      * for a camera.
      * @param oSize
      *    The size/number of elements contained in oDatas
      * @param iDatas
      *    A set of data values (stored as doubles) retrieved.
      */
    virtual HRESULT GetApplicativeDatas (int &oSize, double *&oDatas)                            =0;
};


CATDeclareHandler(CATIShot,CATBaseUnknown);


// CATIShot_H_

#endif
