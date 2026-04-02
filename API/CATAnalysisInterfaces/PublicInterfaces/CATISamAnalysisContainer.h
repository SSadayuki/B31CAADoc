#ifndef CATISamAnalysisContainer_h
#define CATISamAnalysisContainer_h
/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"

class CATISamAnalysisManager_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisContainer;
#else
extern "C" const IID IID_CATISamAnalysisContainer;
#endif

/**
 * Interface for Analysis Container behavior.
 * <b>Role</b>: Retrieves the Analysis Manager from the Analysis container .
 * @see CATISamAnalysisManager
 */

class ExportedByCATAnalysisInterface CATISamAnalysisContainer : public CATBaseUnknown
{
	CATDeclareInterface;

	public:
/**
 * Retrieves the Analysis Manager from the Analysis Container.
 * @param oManager Analysis Manager feature.
 */

		virtual HRESULT GetAnalysisManager(CATISamAnalysisManager_var& ospManager) = 0;
};

CATDeclareHandler(CATISamAnalysisContainer,CATBaseUnknown);

#endif
