#ifndef CATISIMAgent_H
#define CATISIMAgent_H
// COPYRIGHT Dassault Systemes 2000

/**
* @CAA2Level L0
* @CAA2Usage U4 CATSIMAgentAdapter
*/

//===================================================================
// CATISIMAgent.h
// Define the CATISIMAgent interface
//===================================================================

#include "SIMItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIAV5Level.h"

#include "CatSIMPlayExitMode.h"
#include "CatSIMStepControlMode.h"
#include "CatSIMValidationStatusRequest.h"
#include "CATISIMAbsoluteClock.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySIMItfCPP IID IID_CATISIMAgent ;
#else
extern "C" const IID IID_CATISIMAgent;
#endif

#include "CatSIMLoopMode.h"
#include "CATBoolean.h"
#include "CATListOfDouble.h"
#include "CATSIMParameterCharacteristics.h"
#include "CATSIMPlayContext.h"

class CATDlgFrame;
class CATUnicodeString;


class ExportedBySIMItfCPP CATISIMAgent: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    

// WARNING : This interface is evoluting!
// the first comment block gives its specifications before CXR10
// the second comment block illustrates the specifications available in CXR10 and after.

    /**  
    * The interface to access and animate a CATISIMAgent (version before CXR10)
    * <p>The Agent can be in following states OUT / READY / PLAY
    *  
    * +-------+
    * |  OUT  |  Out of Simulation Session
    * +-------+
    *     A
    *     |  
    *     |  Init / Clean
    *     |  
    *     V
    * +-------+
    * | READY |  Simulable in Simulation Session but not yet playing
    * +-------+--> GetMinReqDeltaClock, GetMaxReqDeltaClock, GetDuration, 
    *     A        GetStepControlAbility, GetBackwardAbility, GetJumpAbility.
    *     |  
    *     |  Activate / Deactivate
    *     |  
    *     V
    * +-------+
    * |  PLAY |  Playing in Simulation Session
    * +-------+--> SetClock, ApplyState, Validate, Commit, Reset, 
    *              GetFwdDeltaClock, GetBwdDeltaClock.
    *
    * <p> Clock values and Duration are expressed in seconds and
    * should always be zero or positive.
    * Otherwise it is assumed the called method is not applicable for
    * the Agent with respect to its specificities. More particularly
    * if return value should be considered as Inifnity or undefined
    * return a negative value with a HRESULT equal to E_FAIL.
    *
    * <p> Otherwise, HRESULT set to E_FAIL leads to abort the simulation.
    */
    
   /**  
    * The interface to access and animate a CATISIMAgent  (available since CXR10)
    * <p>The Agent can be in following states OUT / READY / PLAY
    *  
    * +-------+
    * |  OUT  |  Out of Simulation Session
    * +-------+
    *     A
    *     |  
    *     |  Init / Clean
    *     |  
    *     V
    * +-------+
    * | READY |  Simulable in Simulation Session but not yet playing
    * +-------+--> GetNumberOfParameters,
    *              GetCurrentParameter, SetCurrentParameter,
    *              GetTimeBasedParameter, GetCharacteristicsOfParameter
    *              GetInputFieldForParameter, GetNameOfParameter,
    *              IsOnExactValue
    *              SetPlayerCustomUI
    *              GetPlayContext, SetPlayContext.
    *     A        
    *     |  
    *     |  Activate / Deactivate
    *     |  
    *     V
    * +-------+
    * |  PLAY |  Playing in Simulation Session
    * +-------+--> SetClock, ApplyState, Validate, Commit, Reset, 
    *              GetFwdDeltaClock, GetBwdDeltaClock.
    *
    * <p> Clock values and Duration are expressed in seconds and should
    * always be zero or positive.
    * Otherwise it is assumed the called method is not applicable for
    * the Agent with respect to its specificities. More particularly
    * if return value should be considered as Inifnity or undefined
    * return a negative value with a HRESULT equal to E_FAIL.
    *
    * <p> Otherwise, HRESULT set to E_FAIL leads to abort the simulation.
    */
        
    
    /////////////////////////////////////////////////////////////////////
    // METHODS MANAGING THE PLAY PROTOCOL:
    /////////////////////////////////////////////////////////////////////

    /**  
    * Permits the Agent to pass from OUT to READY state
    */
    /** @nodoc */
    virtual HRESULT Init
        (CATISIMAbsoluteClock * iSIMAbsoluteClock) = 0;
    
    /**  
    * Permits the Agent to pass from READY to OUT state, 
    * and if required to restore the scene in its initial state
    */
    /** @nodoc */
    virtual HRESULT Clean
        (CatSIMPlayExitMode iExitMode) = 0;
    
    /**  
    * Permits the Agent to pass from READY to PLAY state
    */
    /** @nodoc */
    virtual HRESULT Activate
        () = 0;
    
    /**  
    * Permits the Agent to pass from PLAY to READY state
    */
    /** @nodoc */
    virtual HRESULT Deactivate
        () = 0;
    
    /**
    * Get the duration of the scenario undelying beneath the Agent
    * This Method applies in READY state  
    */
    /** @nodoc */
    virtual HRESULT GetDuration
        (double & oDuration) = 0; 
    

    /**
    * Set the Current Value of the Local Clock of the Agent
    *    (value between 0 and Duration)
    * Provide a zero or positive value
    * This Method applies in PLAY state  
    */
    /** @nodoc */
    virtual HRESULT SetClock
        (double iLocalClockValue) = 0;
        
    /**  
    * Compute the Current State of the Agent
    * This Method applies in PLAY state
    * This Method is called after SetClock Method 
    */
    /** @nodoc */
    virtual HRESULT ApplyState
        () = 0; 
    
    /**  
    * Validation by the Agent of its computed State  
    * oStatusRequest = catSIMValidationOK means everything is fine
    * oStatusRequest = catSIMValidationKOContinue means a problem is detected, 
    *                  but the simulation play can continue
    * oStatusRequest = catSIMValidationKOStop means a problem is detected, 
    *                  the simulation play must be stopped
    * oStatusRequest = catSIMValidationKOStopAndReset means a problem is
    *                  detected, the simulation play must be stopped 
    *                  and the agent(s) resetted [using the Reset method]
    * oStatusRequest = catSIMValidationKOResetAndGo means a problem is
    *                  detected, the agent(s) must be resetted
    *                  [using the Reset method] before the 
    *                  simulation play can continue.
    *                  Usefull for the optimization of GetFwdDeltaClock 
    *                  in case of catSIMStepAgentControlMode Step Control.
    * This Method applies in PLAY state  
    * This Method is called after ApplyState Method 
    */
    /** @nodoc */
    virtual HRESULT Validate
        (CatSIMValidationStatusRequest & oStatusRequest) = 0; 
    
    /**  
    * Get request of the optimal increase of the clock value, as far
    * as the Agent is concerned, to define the next current time
    * After a Validate with iStatus = 0 the returned value must be positive
    * or zero
    * After a Validate with iStatus = 1 the returned value must be negative
    * or zero
    * This Method applies in PLAY state  
    * This Method is called after Validate Method 
    */
    /** @nodoc */
    virtual HRESULT GetFwdDeltaClock
        (double & oDeltaClock) = 0; 
    
    /**  
    * Get request of the optimal increase of the clock value, provided
    * the Agent can be played backward
    * This Method applies in PLAY state  
    * This Method is called after Validate Method if play backward is
    * possible and effective in substitution to GetFwdDeltaClock Method
    */
    /** @nodoc */
    virtual HRESULT GetBwdDeltaClock
        (double & oDeltaClock) = 0; 
    
    /**  
    * Indicate that the computed state was globally validated 
    * This Method applies in PLAY state  
    * This Method is called after Validate and GetXXXDeltaClock Methods
    */
    /** @nodoc */
    virtual HRESULT Commit
        () = 0; 
    
    /**  
    * Indicate that the computed state was globally unvalidated 
    * The Agent must reset its state to the former valid state
    * (cf Commit method)
    * This Method applies in PLAY state  
    * This Method is called after Validate and GetXXXDeltaClock Methods
    */
    /** @nodoc */
    virtual HRESULT Reset
        () = 0; 

    
    
    /**
    * Indicate that the Agent can be played in a given Step Control Mode
    * Status = 0 if not able
    * Status = 1 if able
    * This Method applies in READY state  
    */
    /** @nodoc */
    virtual HRESULT GetStepControlAbility
        (CatSIMStepControlMode iStepControlMode, int & oStatus) = 0; 
    
    /**
    * Indicate to the Agent the Step Control Mode used to play it
    * This Method applies in READY and PLAY states  
    */
    /** @nodoc */
    virtual HRESULT SetStepControlMode
        (CatSIMStepControlMode iStepControlMode) = 0; 

    /**
    * Get required lowest static clock step for clock evolution
    * applying within PLAY
    * This Method applies in READY state
    */
    /** @nodoc */
    virtual HRESULT GetMinReqDeltaClock
        (double & oDeltaClock) = 0;
    
    /**
    * Get required highest static clock step for clock evolution
    * applying within PLAY
    * This Method applies in READY state  
    */
    /** @nodoc */
    virtual HRESULT GetMaxReqDeltaClock
        (double & oDeltaClock) = 0;

    /**
    * Indicate that the Agent can be played with a decreasing clock
    * Status = 0 if not able
    * Status = 1 if able
    * This Method applies in READY state  
    */
    /** @nodoc */
    virtual HRESULT GetBackwardAbility
        (int & oStatus) = 0; 

    /**
    * Indicate that the Agent can be played with a random access clock
    * Status = 0 if not able
    * Status = 1 if able
    * This Method applies in READY state  
    */
    /** @nodoc */
    virtual HRESULT GetJumpAbility
        (int & oStatus) = 0; 


    //////////////////////////////////////////////////////////////////////////
    // METHODS DEALING WITH THE DESCRIPTION OF THE AGENT AND ITS PARAMETERS:
    //////////////////////////////////////////////////////////////////////////
    
    /**
    * Returns the number of linked parameters handled by the Agent.
    * One can set/get the current parameter with the Get/SetCurrentParameter
    * method.
    * The characteristics of each parameter are given by the 
    * method GetCharacteristics.
    *
    * For instance, a track can have 3 different parameters : 
    *     #1 : time.
    *     #2 : curvilinear coordinates.
    *     #3 : rank of the next point in the construction order.
    * NB: Those three parameters are linked because one cannot have them
    * evolving independantly at the same time.
    */
    /** @nodoc */
    virtual HRESULT GetNumberOfParameters
        (int& oNbOfParameters) = 0;
    /** @nodoc */
    virtual HRESULT GetCurrentParameter
        (int& oCurrentParameterNumber) = 0;
    /** @nodoc */
    virtual HRESULT SetCurrentParameter
        (int  iCurrentParameterNumber, double& oClockForNewParam) = 0;
        
    /**
    * The sequence works with AGENTS, but only with agents ruled by a time
    * based parameters.
    * The method GetTimeBasedParameter gives the index of the parameter based
    * on time.
    * This parameter ensure compatibility between all the agents in sequence.
    * If an agent has no time based parameter, it returns -1 to
    * GetTimeBasedParameter, and won't be handled by the sequence.
    */
    /** @nodoc */
    virtual HRESULT GetTimeBasedParameter
        (int& oTimeParamIndex) = 0;
       
    /**
    * Get the characteristics of the parameter number iParameterIndex.
    * Characteristics are stored in the bare class
    * CATSIMParameterCharacteristics
    * N.B.: class CATSIMParameterCharacteristics contains
    *                       CATSIMParameterType  _ParamType;
    *                       CATBoolean           _BackwardAbility;
    *                       double               _StartValue;
    *                       double               _EndValue;
    *                       CATListOfDouble      _Steps;
    */
    /** @nodoc */
    virtual HRESULT GetCharacteristicsOfParameter
        (int iParameterIndex,
        CATSIMParameterCharacteristics& oCharacteristic) = 0;  
    
    
    //////////////////////////////////////////////////////////////////////////
    // METHODS DEALING WITH PARAMETER DEPENDANT UI:
    //////////////////////////////////////////////////////////////////////////
    
    
    /**
    * This method enables the agent to give the label it wants to have
    * displayed in the input field of the combo box in the toolbar of the
    * player.
    * This label represent the value of the current parameter played.
    *
    * if CATSIMExclusiveLabel mode is selected: the only thing displayed
    *          in the field is the content of iLabel. The agent totally  
    *          controls what's displayed.
    *
    * if CATSIMUnitsLabel mode is selected: the string contains the 
    *          abbreviation to use as a unit. 
    *          The player displays the value of its own internal counter 
    *          followed by the string iLabel containing the unit.
    * 
    * if CATSIMMagnitudeName mode is selected: the string oLabel contains nothing.
    *          The player displays the value of its own internal counter
    *          followed by the current unit corresponding to the magnitude
    *          given in GetNameOfMagnitudeForParameter
    *
    * if CATSIMNone is selected : no Input Fied in the player toolbar.
    */
    /** @nodoc */
    virtual HRESULT GetInputFieldForParameter
        (int iParameterIndex, CATUnicodeString& oLabel,
        CATSIMLabellingMode& oUseMode) = 0;
    
    /**
    * This method enables the agent to give the name of the parameter 
    * with index iParameterIndex.
    * This name is used in the drop down list to select the current parameter.
    * Most of the time, it is the magnitude of the parameter.
    * If the agent puts an empty string in oLabel, the magnitude returned by
    * the GetMagnitudeOfParameter method is used.
    */
    /** @nodoc */
    virtual HRESULT GetNameOfParameter
        (int iParameterIndex, CATUnicodeString& oLabel) = 0;
    
    /**
    * This method enables the agent to give the name of the magnitude 
    * of its parameter.
    * This can be usefull to get the names and units to display (if they're not
    * supplied with the GetInputFieldForParameter method).
    * It is also used in the experiment command to log parameters evolution.
    * 
    * The streing returned will turned into CATICkeMagnitude with the
    * method CATParmDictionnary::FindMagnitude(...).
    */
    /** @nodoc **/
    virtual HRESULT GetMagnitudeOfParameter
        (int iParameterIndex, CATUnicodeString& oMagnitudeName) = 0;
    
    /**
    * This method is used when switching between two different parameters.
    * For example, if switching from a continuous parameter to a discreet one,
    * it is possible that the current value of the parametre has no equivalent
    * in the new parameter. 
    * In this case, the method IsOnExactValue(newParameterIndex, outValue)
    * will put false in outValue, and this will appear on the player's GUI.
    */
    /** @nodoc */
    virtual HRESULT IsOnExactValue
        (int iParameterIndex, CATBoolean& oValue) = 0;
    
    
    //////////////////////////////////////////////////////////////////////////
    // METHODS DEALING WITH AGENT DEPENDANT UI:
    //////////////////////////////////////////////////////////////////////////
    
    /**
    * This method tells whether the Agent wishes to display things 
    * in a dedicated frame.
    */
    /** @nodoc */
    virtual HRESULT HasACustomUI
        (CATBoolean& oHasCustomUI) = 0;

    /**
    * This method gives access to iFatherFrame of the player UI:
    * The Player hosts the iFatherFrame frame in his own UI. When required 
    * by the Agent, a custom frame can be built inside it. The agent
    * therefore access the "Player Parameter" dialog box, where it can
    * display whatever it needs to access parameters of the object it handles.
    *
    * The Agent can request the delayed destruction of the current widgets
    * in the frame to build new ones on the fly.
    *
    * If the player destroys it's UI, the Agent is warn with a call to
    * SetPlayerCustomUI whose argument is NULL.
    */
    /** @nodoc */
    virtual HRESULT SetPlayerCustomUI
        (CATDlgFrame* iFatherFrame) = 0;
    
    
    //////////////////////////////////////////////////////////////////////////
    // METHODS FOR CONTEXT HANDLING.
    //////////////////////////////////////////////////////////////////////////
        
    /**
    * These methods handle the context of the player.
    * They are usefull to give the default state of an agent on load, or to 
    * recover the state of an agent previously played in the current session.
    * These methods are called by the player on loading and unloadings of
    * the agent.
    * The class CATSIMPlayContext is used for the data exchange.
    * N.B.: the class CATSIMPlayContext contains : 
    *            int                 _DefaultParameterIndex;
    *            double              _DefaultClockValue;
    *            double              _DefaultStepValue;
    *            double              _DefaultTempoValue;
    *            CatSIMLoopMode      _DefaultLoopMode;   
    */
    /** @nodoc */
    virtual HRESULT GetPlayContext
        (CATSIMPlayContext& oContextValue) = 0;
    virtual HRESULT SetPlayContext
        (CATSIMPlayContext& iContextValue) = 0;
    
};

/** @nodoc */
CATDeclareHandler(CATISIMAgent,CATBaseUnknown);

#endif
