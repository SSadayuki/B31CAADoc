#ifndef CATISIMPlayer_H
#define CATISIMPlayer_H
// COPYRIGHT Dassault Systemes 2001
//===================================================================
// CATISIMPlayer.h
// Define the CATISIMPlayer interface
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */
#include "SIMItfCPP.h"
#include "CATBaseUnknown.h"
#include "CatSIMLoopMode.h"
#include "CatSIMPlayExitMode.h"

extern ExportedBySIMItfCPP IID IID_CATISIMPlayer ;

class CATISIMAgent;

/**
 * Describe the functionality of your interface here
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 */
class ExportedBySIMItfCPP CATISIMPlayer: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
    // No constructors or destructors on this pure virtual base class

	// Methods common with the CATIASIMPlayer interface
	// ------------------------------------------------
    /** @nodoc */
    virtual HRESULT LoadAgent(CATISIMAgent * iAgent)=0;
    /** @nodoc */
    virtual HRESULT GetLoadedAgent(CATISIMAgent *& oAgent)=0;

    /** @nodoc */
    // virtual HRESULT __stdcall SetClockInterval(double iLowerBound, double iUpperBound, long & oIndex)=0;
    // virtual HRESULT __stdcall UnSetClockInterval(long iIndex)=0;
    // virtual HRESULT __stdcall GetClockLowerBound(double & oLowerBound)=0;
    // virtual HRESULT __stdcall GetClockUpperBound(double & oUpperBound)=0;

    /** @nodoc */
    virtual HRESULT get_LoopMode(CatSIMLoopMode & oMode)=0;
    /** @nodoc */
    virtual HRESULT put_LoopMode(CatSIMLoopMode iMode)=0;

    /** @nodoc */
    virtual HRESULT get_ClockStep(double & oClockStep)=0;
    /** @nodoc */
    virtual HRESULT put_ClockStep(double iClockStep)=0;

    /** @nodoc */
    virtual HRESULT get_Tempo(double & oTempo)=0;
    /** @nodoc */
    virtual HRESULT put_Tempo(double iTempo)=0;

    /** @nodoc */
    virtual HRESULT get_PlayExitMode(CatSIMPlayExitMode & oPlayExitMode)=0;
    /** @nodoc */
    virtual HRESULT put_PlayExitMode(CatSIMPlayExitMode iPlayExitMode)=0;

    /** @nodoc */
    virtual HRESULT PlayBegin()=0;
    /** @nodoc */
    virtual HRESULT PlayEnd()=0;
    /** @nodoc */
    virtual HRESULT PlayForward()=0;
    /** @nodoc */
    virtual HRESULT PlayBackward()=0;
    /** @nodoc */
    virtual HRESULT PlayStepForward()=0;
    /** @nodoc */
    virtual HRESULT PlayStepBackward()=0;
    /** @nodoc */
    virtual HRESULT Pause()=0;
    /** @nodoc */
    virtual HRESULT PlayJump(double iClockValue)=0;

    /** @nodoc */
    // this method will be removed, use the CATISIMAbsoluteClock interface
    virtual HRESULT get_AbsoluteClock(double & oClockValue)=0;

	// Specific methods
	// ------------------------------------------------
    /** @nodoc */
    virtual HRESULT AddExternalReporter(CATISIMAgent * iAgent)=0;
    /** @nodoc */
    virtual HRESULT RemoveExternalReporter(CATISIMAgent * iAgent)=0;

    /** @nodoc */
  	virtual HRESULT get_DialogUII (int & oDialogUI)=0;
    /** @nodoc */
    virtual HRESULT put_DialogUII (int iDialogUI)= 0;

    /** @nodoc */
    virtual HRESULT get_DialogSensitivity (int & oSensitivity)=0;
    /** @nodoc */
    virtual HRESULT put_DialogSensitivity (int iSensitivity)=0;

    /** @nodoc */
    virtual HRESULT get_TimeShowStatus (int & oShowStatus)=0;
    /** @nodoc */
    virtual HRESULT put_TimeShowStatus (int iShowStatus)=0;

};

CATDeclareHandler(CATISIMPlayer,CATBaseUnknown);

#endif
