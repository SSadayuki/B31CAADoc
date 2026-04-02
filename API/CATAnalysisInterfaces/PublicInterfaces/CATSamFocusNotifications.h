// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATSamFocusNotifications.h
// Header definition of CATSamFocusNotifications
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//===================================================================
#ifndef CATSamFocusNotifications_H
#define CATSamFocusNotifications_H

#include "CATAnalysisToolkit.h"
#include "CATNotification.h"
class CATDialogAgent;

/**
 * Query type mode for CATSamQuerySelectFocusNotification.
 * @param GetFocus
 * Command activates the Focus.
 * @param ReleaseFocus
 * Command releases the Focus.
 * @see CATSamQuerySelectFocusNotification
 */

enum CATSamTypeQuery 
{
  GetSamFocus, 
  ReleaseSamFocus 
};     

/**
 * Base class for notifications related to Dialog agent acquisition.
 * <b>Role</b>: This modification is linked with the @href CATISamEditionCmd implementation.
 * It is dedicated to warn the Edition Command of the Analysis Entity
 * when it must delegate the selection management to the implementing command and when this
 * delegation is ended.
 * @see CATISamEditionCmd 
 */

// notif envoye par une command pour demander l'activation d'un agent de dialogue
class ExportedByCATAnalysisToolkit CATSamQuerySelectFocusNotification: public CATNotification
{
  CATDeclareClass;

  public:

/**
 * Constructs a notification.
 * @param iAgent Dialog agent that will manage the selection.
 */
     CATSamQuerySelectFocusNotification (CATDialogAgent *iAgent = NULL);
     virtual ~CATSamQuerySelectFocusNotification ();

/**
 * Returns the active DialogAgent.
 * @param iAgent DialogAgent
 */
  	 CATDialogAgent * GetAgent();
/**
 * Sets the active DialogAgent.
 * @param iAgent DialogAgent
 */
	   void SetAgent(CATDialogAgent *iAgent);
/**
 * Returns the current TypeQuery status.
 * @return CATSamTypeQuery.
 */

	  CATSamTypeQuery GetTypeQuery();
/**
 * Sets the current TypeQuery.
 * @param iTypeQuery TypeQuery status.
 */
	  void SetTypeQuery(CATSamTypeQuery iTypeQuery);

  private:
	  CATDialogAgent  * _Agent;
	  CATSamTypeQuery   _TypeQuery;
};
//-----------------------------------------------------------------------
#endif
