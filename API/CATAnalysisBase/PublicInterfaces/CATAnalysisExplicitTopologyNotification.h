#ifndef CATAnalysisExplicitTopologyNotification_h
#define CATAnalysisExplicitTopologyNotification_h

// COPYRIGHT DASSAULT SYSTEMES 2002
//   
//===========================================================================
//  Abstract of the class:
//  ----------------------
// 
//===========================================================================
//  Inheritance:
//  ------------
//            CATNotification  ( System Framework)
//               CATBaseUnknown (System Framework).
//
//===========================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// System Framework
#include "CATNotification.h"    // Needed to derive from CATNotification
#include "CATSAM0Explicit.h"

/**
  * Class representing a notification send when the CATAnalysisExplicitTopology is not UpToDate.
  * <b>Role</b>: An instance of this class is sent by the ExplicitContainer when its topology is flagged not UpToDate.
  * @see CATAnalysisExplicitTopology
  */

class ExportedByCATSAM0Explicit CATAnalysisExplicitTopologyNotification : public CATNotification
{
  CATDeclareClass;
  
  public:

    CATAnalysisExplicitTopologyNotification();
    virtual ~CATAnalysisExplicitTopologyNotification();

  private:
    
    // Copy constructor, not implemented
    // Set as private to prevent from compiler automatic creation as public.
    CATAnalysisExplicitTopologyNotification(const CATAnalysisExplicitTopologyNotification &iObjectToCopy);

    // Assignment operator, not implemented
    // Set as private to prevent from compiler automatic creation as public.
    CATAnalysisExplicitTopologyNotification & operator = (const CATAnalysisExplicitTopologyNotification &iObjectToCopy);
};

#endif
