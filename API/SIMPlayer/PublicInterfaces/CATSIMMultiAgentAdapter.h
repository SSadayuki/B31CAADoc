#ifndef CATSIMMultiAgentAdapter_H
#define CATSIMMultiAgentAdapter_H
// COPYRIGHT Dassault Systemes 2002
//===================================================================
// CATSIMMultiAgentAdapter.h
// Provide implementation to interface CATISIMAgent
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */
#include "CATSIMPlayerCommand.h"
#include "CATBaseObject.h"
#include "CatSIMPlayExitMode.h"
#include "CatSIMStepControlMode.h"
#include "CatSIMValidationStatusRequest.h"
#include "CATListOfInt.h"
#include "CATListOfDouble.h"
#include "CATLISTV_CATBaseUnknown.h"

#include "CATSIMAgentAdapter.h"

/**
* Adapter for MultiAgent
* <br>
* Use it implements the interfaces for Agent synchronizing several Agent with specified Start and End time:
*  <ol>
*  <li>@see CATISIMAgent
*  </ol>
*/

class CATISIMAgent;
class CATISIMAbsoluteClock;

class ExportedByCATSIMPlayerCommand CATSIMMultiAgentAdapter: public CATSIMAgentAdapter
  {
//  CATDeclareClass;
  
  public:
    
    // Standard constructors and destructors for an implementation class
    // -----------------------------------------------------------------
    CATSIMMultiAgentAdapter ();
    virtual ~CATSIMMultiAgentAdapter ();
    
    // Implement this method to populate the Multi-Agent
    // return 1 if OK
    // return 0 if KO
    virtual int GetTimeContent
      (double& oStart,
       double& oStop,
       CATListValCATBaseUnknown_var& oSubAgents,
       CATRawColldouble& oStarts,
       CATRawColldouble& oEnds) = 0;


    // Methods from the interface CATISIMAgent 
    HRESULT  Init (CATISIMAbsoluteClock * iSIMAbsoluteClock) ;
    HRESULT  Clean (CatSIMPlayExitMode iExitMode) ;
    HRESULT  Activate () ;
    HRESULT  Deactivate () ;
    HRESULT  GetStepControlAbility (CatSIMStepControlMode  iStepControlMode , int &  oStatus) ;
    HRESULT  SetStepControlMode (CatSIMStepControlMode  iStepControlMode) ;
    HRESULT  GetMinReqDeltaClock (double &  oDeltaClock) ;
    HRESULT  GetMaxReqDeltaClock (double &  oDeltaClock) ;
    HRESULT  GetDuration (double &  oDuration) ;
    HRESULT  GetBackwardAbility (int &  oStatus) ;
    HRESULT  GetJumpAbility (int &  oStatus) ;
    HRESULT  SetClock (double  iLocalClockValue) ;
    HRESULT  ApplyState () ;
    HRESULT  Validate (CatSIMValidationStatusRequest &  oStatus) ;
    HRESULT  GetFwdDeltaClock (double &  oDeltaClock) ;
    HRESULT  GetBwdDeltaClock (double &  oDeltaClock) ;
    HRESULT  Commit () ;
    HRESULT  Reset () ;
    
  private:
    // The copy constructor and the equal operator must not be implemented
    // -------------------------------------------------------------------
    CATSIMMultiAgentAdapter (CATSIMMultiAgentAdapter &);
    CATSIMMultiAgentAdapter& operator=(CATSIMMultiAgentAdapter&);
    
    void Load();
    
    enum TimeStatus {AtStart,AtStop,Pending};
    
    int                             _Loaded;
    int                             _BeginActivate;
    int                             _NbSubAgent;
    CATISIMAgent                  **_ArraySubAgent;
    TimeStatus                     *_ArrayStatus;
    double                         *_ArraySubAgentStart;
    double                         *_ArraySubAgentStop;
    double                          _Start; 
    double                          _Stop;   
    double                          _CurrentClock;
    
    // Activities Index Sorted by decreasing Start from Stop to Start within Sequence
    CATRawCollint                  _ListStart;
    // Activities Index Sorted by increasing Stop from Start to Stop within Sequence
    CATRawCollint                  _ListStop;

    // Backup of the Status of Analyses
    CATRawCollint                  _AnalysisStatus;
  };

#endif
