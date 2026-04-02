// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATEAnalysisEntityPreproSubscriber.h
// Provide default implementation to interface CATISamMeshSubscriber
//
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
//===================================================================
#ifndef CATEAnalysisEntityPreproSubscriber_H
#define CATEAnalysisEntityPreproSubscriber_H

#include "CATISamMeshSubscriber.h"
#include "CATAnalysisResources.h"

//-----------------------------------------------------------------------

/**
 * Class Adapter for CATISamMeshSubscriber.
 * <br>
 * @see CATISamMeshSubscriber
 */
class ExportedByCATAnalysisResources CATEAnalysisEntityPreproSubscriber: public CATISamMeshSubscriber
{

	public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
		CATEAnalysisEntityPreproSubscriber ();
		virtual ~CATEAnalysisEntityPreproSubscriber ();

/**
 * Reaction to mesh changes.
 * Default implementation sets the feature Not Up ToDate.
 */
		virtual HRESULT Clean () ;
/**
 * Overload the default behavior.
 * Default implementation returns FALSE is feature is in the meshing container. TRUE Otherwise. 
 */
    virtual CATBoolean CheckIfNeedToSubScribe() const ;

	private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
		CATEAnalysisEntityPreproSubscriber (CATEAnalysisEntityPreproSubscriber &);
		CATEAnalysisEntityPreproSubscriber& operator=(CATEAnalysisEntityPreproSubscriber&);
};

//-----------------------------------------------------------------------

#endif
