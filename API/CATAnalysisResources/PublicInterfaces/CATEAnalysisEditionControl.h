// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisEditionControl.h Provide adaptor to interface CATISamEditionControl
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisEditionControl_H
#define CATEAnalysisEditionControl_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisResources.h"
#include "CATISamEditionControl.h"
//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamEditionControl interface.
 * It can be used for AnalysisEntity or AnalysisSet.<br>
 * This adapter allow a BOA implementation.      
 * @see CATISamEditionControl
 */

class ExportedByCATAnalysisResources CATEAnalysisEditionControl: public CATISamEditionControl
{

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     CATEAnalysisEditionControl ();
     virtual ~CATEAnalysisEditionControl ();

/**
 * Controls the feature edition.
 * @param oBoolean: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> if edition is allowed.
 * <tt>FALSE</tt> if edition is not allowed, for error management returns also E_FAIL as HRESULT.
 */
     virtual HRESULT AllowEdition(CATBoolean & oBoolean);

  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEAnalysisEditionControl (CATEAnalysisEditionControl &);
  CATEAnalysisEditionControl& operator=(CATEAnalysisEditionControl&);

};

//-----------------------------------------------------------------------

#endif
