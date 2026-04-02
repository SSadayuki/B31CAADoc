/* -*-c++-*- */
#ifndef CATISampled_H_
#define CATISampled_H_

//======================================================================================
// CATIA Version 5 Release 1 Framework FittingSimulation
// Copyright   : Dassault Systemes 1997
//======================================================================================
// Description : C++ class header file for the class named "CATISampled"
//======================================================================================
// Usage : Domain Model for Sampled
//======================================================================================
// Inheritance : CATISampled 
//                 CATBaseUnknown
//======================================================================================


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


class CATSiFiXMLContext;
class DOM_Element;

#include "G60I0FIT.h"

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATListOfCATString.h"

class CATIShot;
class CATIInterpolater;
class CATString;
class CATSiFiSample;
class CATIContainer;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATISampled;
#else
extern "C" const IID IID_CATISampled;
#endif


/**
 * Enum for Shot Recording Modes.
 * <b>Role</b>: This enum is used to set what effect 
 *  recording a shot will have on the track.
 * @param CatFitSampledAppend
 *   Add the new shot to the end of the track.
 * @param CatFitSampledInsertAfter
 *   Insert the new shot after the current shot.
 * @param CatFitSampledInsertBefore
 *   Insert the new shot before the current shot.
 * @param CatFitSampledModify
 *   Modifiy the current shot's data to match the recorded shot.
 * @param CatFitSampledDelete
 *   Delete the current shot.
 */
enum CatFitSampledRecordMode
{
        CatFitSampledAppend,
        CatFitSampledInsertAfter,
        CatFitSampledInsertBefore,
        CatFitSampledModify,
        CatFitSampledDelete
};


// Used for the ModifySample method.
/**
 * @nodoc
 */
enum CatFitSampledModifyMode
{
        CatFitSampledLocalToObject,
        CatFitSampledObjectToLocal,
        CatFitSampledInterpolationPreProcess
};


/**
 * Used copying data from XML.
 * @param CatFitSAbsolute
 *    Use absolute mode.
 * @param CatFitSRelative
 *    Use relative mode.
 */
enum CatFitSampledRep
{
        CatFitSAbsolute,
        CatFitSRelative
};


// Used to initialize various items (including flags).
/**
 * @nodoc
 */
#define CatFitSampledUndefined            ((unsigned int)0)


// Flags
// 0-7 are reserved for internal use
/**
 * @nodoc
 */
#define CatFitSampledChangedFather        ((unsigned int)(1 << 0))


// The following does not seem to be used. 
/**
 * @nodoc
 */
#define CatFitSampledConstantSpeed        ((unsigned int)(1 << 1))


// Behaviour
// The following seems to be only used with behaviour.
/**
 * @nodoc
 */
#define CatFitSampledObjectDependentRep   ((unsigned int)(1 << 0))


    /**
     * Definition of the CATISampled object.
     * <b>Role:</b> The Sampled class defines characteristics for simulatable
     * tasks within DMU Fitting.  CATISampled is the parent class for tracks and
     * color actions.  Key samples are recorded (as shots or CATIShots) for an object
     * and then during simulation the object is interpolated with these samples.
     */

class ExportedByG60I0FIT CATISampled : public CATBaseUnknown
{
    
    CATDeclareInterface;
    
public :
    
     /**
      * Retrieve the type of the sampled.
      * <b>Role:</b> A Sampled is used on various types; this method returns the 
      * type of the sampled.
      * @param oType
      *     The type of the string.  For example 'Track' will be returned for track objects
      *     and 'Color' for Color Action objects
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */
    virtual HRESULT GetType (CATString &oType)                                                                  =0;
    
    
     /**
      * Assign an Object for the sampled.
      * <b>Role:</b> Sets the object that will be used in the sampled based simulation.
      * @param iObject
      *     Pointer to object to be assigned
      * @param iKeepAbsoluteDefinition
      *     Currently set to FALSE.
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */
    virtual HRESULT SetObject (CATBaseUnknown * iObject, boolean iKeepAbsoluteDefinition=FALSE)                 =0;


     /**
      * Retrieves the object for a sampled.
      * <b>Role:</b> Retrieves the object that is associated to a sampled.
      * @param oObject
      *     A pointer to the object that is used by the sampled.
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */
    virtual HRESULT GetObject (CATBaseUnknown *&oObject)                                                        =0;
    

     /**
      * Retrieves the Sampled's interpolater.
      * <b>Role:</b> Retrieves the interpolator used by the sampled during 
      * simulation.
      * @param oInterpolater
      *     A pointer to the interpolater used
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetInterpolater (CATIInterpolater *&oInterpolater)                                          =0;


     /**
      * Retrieves the Sampled's interpolater.
      * <b>Role:</b> Retrieves the interpolator used by the sampled during 
      * simulation.
      * @param oName
      *     A string containing the name of the interpolater used.
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetInterpolater (CATString &oName)                                                          =0;


     /**
      * Sets the Sampled's interpolater.
      * <b>Role:</b> Sets the interpolator used by the sampled during 
      * simulation.
      * @param oName
      *     A string containing the name of the interpolater used.
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT SetInterpolater (CATString &iName)                                                          =0;


     /**
      * Retrieves a list of the existing interpolators.
      * <b>Role:</b> Get the list of interpolators that are available to
      * the sampled.
      * @param oList
      *     A list containing strings of all available interpolators
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success
      *  <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetExistingInterpolaters (CATListOfCATString &oList)                                        =0;
    

     /**
      * Create a new shot in the sampled.
      * <b>Role:</b> Creates a new shot within the sampled object.  The created shot will
      * be empty, that is it has no data assigned to it (numerical data needs to be 
      * assigned once the shot is created).  Also, if other shots exist, then this shot will
      * be added to the end of the set of shots.
      * @param oNewShot
      *     The newly created shot.
      * @param iType
      *     the type of shot to create
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success, oNewShot has been created correctly
      *  <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT CreateShot (CATIShot *&oNewShot, const char *iType=NULL)                                    =0;


     /**
      * Adds a shot to the sampled.
      * <b>Role</b> Adds an already existing shot to the sampled.  
      * @param iShot
      *    A valid pointer to an already existing shot.
      * @param iMode
      *    Recommended values
      *    <ul>
      *         <li> CatFitSampledAppend <br>
      *              Used to add the shot at the end of the list of shots
      *         <li> CatFitSampledInsertAfter <br>
      *              Used to add the shot after the supplied index
      *    </ul>
      * @param iIndice
      *    Index of where to add the shot 
      * @return
      *  <br><b>Legal values</b>:
      *  <br><tt>S_OK :</tt>   on Success, iShot has been added correctly
      *  <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT AddShot (CATIShot *iShot, CatFitSampledRecordMode iMode=CatFitSampledAppend, int iIndice=0) =0;


     /**
      * Removes a shot.
      * <b>Role:</b>  Removes a shot contained in the current sampled.
      * @param iShot
      *    A valid pointer to a shot to be removed.
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success, iShot has removed
      *   <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT RemoveShot (CATIShot *iShot)                                                                =0;


     /**
      * Removes a shot.
      * <b>Role:</b>  Removes a shot contained in the current sampled.
      * @param iIndice
      *    A valid index to a shot to be removed.
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success, the shot at iIndice has been removed
      *   <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT RemoveShot (int iIndice)                                                                    =0;


     /**
      * Removes all shots.
      * <b>Role:</b> Removes all shot contained in the current sampled.
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK  :</tt>  on Success, all the shots have been removed
      *   <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT RemoveAllShots ()                                                                           =0;


     /**
      * Retrieves the number of shots.
      * <b>Role:</b> Retrieves the number of shots contained within the
      * current sampled object.
      * @param oNb
      *    An integer containing the number of shots.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetNbShots (int &oNb)                                                                       =0;


     /**
      * Retrieves a specific shot.
      * <b>Role:</b> Retrieves a specific shot from the current sampled
      * object.  The shot returned is based on the specified index, iShot.
      * @param iShot
      *    An integer specifing the index of the shot to return
      * @param oShot
      *    A pointer to a shot 
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, a shot is returned
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetShot (int iShot, CATIShot *&oShot)                                                       =0;


     /**
      * Retrieves the index of a shot.
      * <b>Role:</b> Retrieves the index associated to a specifed shot, 
      * that is contained within the current sampled object.
      * @param iShot
      *    A shot that is contained within the current sampled.
      * @param oIndice
      *    The returned index of the shot
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, a valid index is returned
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetIndice (CATIShot *iShot, int &oIndice)                                                   =0;


     /**
      * Changes the order of two shots.
      * <b>Role:</b> Changes the order of two shots specified by the values
      * of iIndex1 and iIndex2.  The two shots are swapped at those positions.
      * @param iIndex1
      *    The first shot used to change positions.
      * @param iIndex2
      *    The second shot used to change positions.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, the shots have been reordered.
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT ReorderShot (int iIndex1, int iIndex2)                                                      =0;


     /**
      * Retrieves internal time of the sampled.
      * <b>Role:</b> Retrieves the internal time associated to the current 
      * sampled object.  A sampled object is used for time based simulations,
      * and oTime is the time that the current sampled object is at.
      * @param oTime
      *    The current time of the sampled object.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, a valid time is returned
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetTime (double &oTime)                                                                     =0;


     /**
      * Set the internal time of the sampled.
      * <b>Role:</b> Set the internal time associated to the current 
      * sampled object.  A sampled object is used for time based simulations,
      * and the internal time can be set by 
      * @param iTime
      *    The time to set the sampled to.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, the time has been set
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT SetTime (double iTime)                                                                      =0;


     /**
      * Set the internal time of the sampled.
      * <b>Role:</b> Set the internal time associated to the current 
      * sampled object.  Unlike @href #SetTime, this method will also  
      * change the state of the model to the specified time.
      * @param iTime
      *    The time to set the sampled to.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, the time has been changed.
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT PlayTime (double iTime)                                                                     =0;


     /**
      * Check to see if it is possible to simulate an object.
      * <b>Role:</b> Used to check if it is possible to create a sampled
      * based simulation with the specified object.
      * @param iObject
      *    The time to set the sampled to.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, 
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT IsAuthorized (CATBaseUnknown *iObject=NULL)                                                 =0;


     // This seems to be only used internally and thus will not be exposed.
     /**
      * @nodoc
      */     
    virtual HRESULT SampleFactory (CATSiFiSample *&oSample)                                                     =0;


     // This does not seem to be used and thus should be removed.
     /**
      * @nodoc
      */ 
    virtual HRESULT ModifySample (CATSiFiSample *iSample, CatFitSampledModifyMode iMode)                        =0;


     /**
      * Retrieves the scaling value associated to the sampled.
      * <b>Role:</b> Used to alter the duration of a sampled based
      * simulation.  Initially the scaling is set to one, however
      * if the scaling is changed to 0.5 the sampled take one half
      * of its initial time.  Likewise, a scaling of two will cause
      * the duration to double.
      * @param oScaling
      *    The currently set value of the sampled's scaling value.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, 
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetScaling (double &oScaling)                                                               =0;


     /**
      * Stores the scaling value associated to the sampled.
      * <b>Role:</b> Used to alter the duration of a sampled based
      * simulation.  Initially the scaling is set to one, however
      * if the scaling is changed to 0.5 the sampled take one half
      * of its initial time.  Likewise, a scaling of two will cause
      * the duration to double.
      * @param iScaling
      *    The new scaling value to set the current sampled.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, 
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT SetScaling (double iScaling)                                                                =0;


     /**
      * Appends the shots of a sampled to the current sampled.
      * <b>Role:</b> Appends the shots of a specified sampled to the current
      * sampled.  Note that both the current sampled object and the specified 
      * sampled object (iSampled) need to be simulating the same item, otherwise
      * E_FAIL is returned.
      * @param iSampled
      *    A valid pointer to a sampled based object.
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success, the shots have been appended.
      *   <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT AppendSampled (CATISampled *iSampled)                                                       =0;


     // We are not exposing this function since other publicly exposed code 
     // (that is at a more higher level) makes use of it and thus making this redundant.
     // Please use/refer to CATIASampled::Split to split a sampled, since it will 
     // create two separate sampleds and rename them.
     /**
      * @nodoc
      */ 
    virtual HRESULT SplitSampled (CATISampled *iSampled, int iIndice, boolean iFromLeft, boolean iOnShot)       =0;


     /**
      * Reverse shots contained in the sampled.
      * <b>Role:</b> The order of the shots associated to the current sampled 
      * object is reversed, and thus the resulting simulation is effectively
      * backwards.
      * @return
      *    <br><b>Legal values</b>:
      *    <br><tt>S_OK  :</tt>  on Success, the shots have been reversed.
      *    <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT Reverse ()                                                                                  =0;
    

     /**
      * Add (bind) an analysis object to the current sampled.
      * <b>Role:</b> Adds an analysis object (such as clash, distance) to the current sampled
      * object.  During simulation this analysis object is then evaluated at each step.
      * @param iAnalysis
      *   The analysis to add (bind) to a Track
      * @param iAnalysisMode
      *   Indicates the analysis status for iAnalysis
      *   <ul>
      *       <li> 0 for Off
      *       <li> 1 for On
      *       <li> 2 for Stop
      *       <li> 3 for Verbose
      *   </ul>
      * @param iMonitorMode
      *   Indicates the monitor status for iAnalysis
      *   <ul>
      *       <li> 0 for Off
      *       <li> 1 for On
      *   </ul>
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success
      *   <br><tt>E_FAIL:</tt>  on failure
      */
    virtual HRESULT AddAnalysis (CATBaseUnknown *iAnalysis, int iAnalysisMode=2, int iMonitorMode=0)            =0;
    

     /**
      * Set the analyses settings for a sampled based object.
      * @param iActivated
      *   Indicates whether the analyses are On or Off
      * @param iState
      *   With iVerbose, indicates the state (On, Off, Stop, Verbose)
      * @param iVerbose
      *   With iState, indicates the state (On, Off, Stop, Verbose)
      * @param iMonitor
      *   Indicates whether the monitor is On or Off
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success
      *   <br><tt>E_FAIL:</tt>  on failure
      */    
    virtual HRESULT SetAnalysisStatus (unsigned int iActivated, unsigned int iState, unsigned int iVerbose, unsigned int iMonitor) =0;
    

     /**
      * Returns the analyses objects bound to a Track.
      * @param oNb
      *   The number of analyses bound to a Track
      * @param oAnalysis
      *   A list of analyses bound to a Track
      * @param oState
      *   A list of the analysis status for each analysis object - Off (0), On (1), Stop (2), Verbose (3)
      * @param oMonitor
      *   A list of the monitor status for each analysis object - Off (0) or On (1)
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success
      *   <br><tt>E_FAIL:</tt>  on failure
      */    
    virtual HRESULT GetAnalysis(int &oNb, CATBaseUnknown **&oAnalysis, int *&oState, int *&oMonitor)           =0;
    

     /**
      * Returns the analyses settings for a Track.
      * @param oActivated
      *   Indicates whether the analyses are On or Off
      * @param oState
      *   With oVerbose, indicates the state (On, Off, Stop, Verbose)
      * @param oVerbose
      *   With oState, indicates the state (On, Off, Stop, Verbose)
      * @param oMonitor
      *   Indicates whether the monitor is On or Off
      * @return
      *   <br><b>Legal values</b>:
      *   <br><tt>S_OK :</tt>   on Success
      *   <br><tt>E_FAIL:</tt>  on failure
      */    
    virtual HRESULT GetAnalysisStatus (unsigned int &oActivated, unsigned int &oState,  unsigned int &oVerbose, unsigned int &oMonitor) =0;


     // It is claimed that this is only used during an experiment and thus only 
     // used internally.  
     /**
      * @nodoc
      */
    virtual HRESULT SetAnalysisMode (int iAnalysisIndice, int iMode)                                            =0;


     /**
      * Removes all the analysis objects from the sampled.
      * <b>Role:</b> Removes all the assigned objects from the sampled.
      * @return
      *     <br><b>Legal values</b>:
      *     <br><tt>S_OK :</tt>   on Success; all analysis objects have been removed.
      *     <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT RemoveAllAnalysis ()                                                                        =0;


     /**
      * Removes a specified analysis object from the sampled.
      * <b>Role:</b> Removes a specified analysis object that has been 
      * assigned to the current sampled object.
      * @param iIndice
      *     An index to the associated analysis object.
      * @return
      *     <br><b>Legal values</b>:
      *     <br><tt>S_OK :</tt>   on Success; the analysis object has been removed.
      *     <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT RemoveAnalysis (int iIndice)                                                                =0;


     /**
      * Removes a specified analysis object from the sampled.
      * <b>Role:</b> Removes a specified analysis object that has been 
      * assigned to the current sampled object.
      * @param iAnalysis
      *     A valid pointer to an analysis object that is assigned to the
      *     current sampled.
      * @return
      *     <br><b>Legal values</b>:
      *     <br><tt>S_OK :</tt>   on Success; the analysis object has been removed.
      *     <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT RemoveAnalysis (CATBaseUnknown *iAnalysis)                                                  =0;


    // Used internally by track (updateShots).  Both GetSampleFromObject and 
    // SetSampleOnObject are lower level methods that shouldn't be exposed to 
    // the user.
    /**
     * @nodoc
     */
    virtual HRESULT GetSampleFromObject (CATBaseUnknown *iObject, CATSiFiSample &ioSample)                      =0;


    // Used internally when the Apply state is called.  Both GetSampleFromObject and 
    // SetSampleOnObject are lower level methods that shouldn't be exposed to 
    // the user.
    /**
     * @nodoc
     */
    virtual HRESULT SetSampleOnObject   (CATBaseUnknown *iObject, CATSiFiSample &iSample)                       =0;
    

    // Used internally by the track when switching objects in the sampled command 
    // (that is when changing objects for an already existing track).
    /**
     * @nodoc
     */
    virtual HRESULT GetBehaviour(unsigned int &oBehaviour)                                                     =0;


     /**
      * Retrieves the name of the sampled.
      * <b>Role:</b> Retrieves the name of the sampled.
      * @param oName
      *     The returned name of the sampled.
      * @return
      *     <br><b>Legal values</b>:
      *     <br><tt>S_OK :</tt>   on Success
      *     <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT GetName( CATUnicodeString &oName )                                                         = 0;


     /**
      * Sets the name of the sampled.
      * <b>Role:</b> Sets the name of the sampled.
      * @param iName
      *     The new name to sets the sampled to.
      * @return
      *     <br><b>Legal values</b>:
      *     <br><tt>S_OK :</tt>   on Success
      *     <br><tt>E_FAIL:</tt>  on failure
      */ 
    virtual HRESULT SetName( CATUnicodeString iName )                                                          = 0;


     // Will set the name on both the reference and instance objects.  This is 
     // a lower level method since it is used in append, split and mirror and thus
     // a user does not necessarily need it exposed.
     /**
      * @nodoc
      */
    virtual HRESULT SetRefandInstName ()                                                                       = 0;


     // This seems to only used in the path finder commands and thus it
     // will not be exposed.
     /**
      * @nodoc
      */
    virtual HRESULT NewSampled (CATISampled *&oNewSampled, CATIContainer *iInContainer=NULL)                    =0;
    

    /**
     * @nodoc
     */
    virtual HRESULT Duplicate (CATISampled *iSampled, boolean iWithShots=TRUE)                                  =0;
    

    /**
     * @nodoc
     */
    virtual HRESULT IsReference ()                                                                              =0;
    

     // This seems to be used when dealing with reference objects (specifically
     // with break link and ccp/lifecycle object).  Thus this will not be 
     // exposed.
     /**
      * @nodoc
      */
    virtual HRESULT HasBrothers (boolean iExcludeCliboard=TRUE)                                                 =0;


    /**
     * @nodoc
     */
    virtual HRESULT SetHandle(CATBaseUnknown * iHandle)                                                        =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT GetHandle(CATBaseUnknown *&oHandle)                                                        =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT GetMovingHandle(CATBaseUnknown *&oHandle)                                                  =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT SetReference (CATBaseUnknown * iReference)                                                  =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT GetReference (CATBaseUnknown *&oReference)                                                  =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT GetFlags(unsigned int &oFlags)                                                             =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT SetFlags(unsigned int  iFlags)                                                             =0;
  

    // Returns a CATSiFiTime object which is used internally and
    // thus not available to the customer.
    /**
     * @nodoc
     */
    virtual HRESULT GetTime(CATBaseUnknown *&oTime)                                                            =0;


    /**
    * @nodoc
    */
    virtual HRESULT GetTimeParam(CATBaseUnknown *&oTime)                                                       =0;
    

     // Only called from InstanciateFromReference.  
     /**
      * @nodoc
      */
    virtual HRESULT SetTimeParam(CATBaseUnknown *iTime)                                                        =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT AnalyseCurrentTime(int &oIndice, boolean &oIsOnShot, double &oTime)                        =0;
    
    /**
     * @nodoc
     */
    virtual HRESULT BeginEdition(unsigned int iMode=0)                                                         =0;
    
    /**
     * @nodoc
     */
    virtual HRESULT EndEdition()                                                                               =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT BeginUseObject(CATBaseUnknown *iObject)                                                    =0;
    
    /**
     * @nodoc
     */
    virtual HRESULT EndUseObject(CATBaseUnknown *iObject)                                                      =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT EstimateDuration(CATSiFiSample &iFrom, CATSiFiSample &iTo, double &oDuration)              =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT AppendWith(CATISampled **iSampleds, int iNb, CATISampled *&oNewSampled)                    =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT GetIgnoreVisuMode(boolean &oIgnore)                                                        =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT SetIgnoreVisuMode(boolean iIgnore)                                                         =0;
    
    /**
    * @nodoc
    * oIID MUST inherit from CATIASampled
    */
    virtual HRESULT GetAutomationIID (IID &oIID)                                                                =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordMode (CatFitSampledRecordMode iMode)                                                  =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordIndice (int iIndice)                                                                  =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordSample (CATSiFiSample *iSample)                                                       =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordShot (CATIShot *iShot)                                                                =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordDeltaTime (double iDeltaTime=0.)                                                      =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordNow (boolean iIsDangerousArea=FALSE)                                                  =0;
    
    /**
    * @nodoc
    */
    virtual HRESULT RecordRemove (int iIndice)                                                                  =0;
    
    /**
     * @nodoc
     */
    virtual HRESULT ConvertToXML(DOM_Element &iNode, CATSiFiXMLContext &iContext, CatFitSampledRep iMode)       =0;

};

CATDeclareHandler(CATISampled,CATBaseUnknown);

// CATISampled_H_
#endif
