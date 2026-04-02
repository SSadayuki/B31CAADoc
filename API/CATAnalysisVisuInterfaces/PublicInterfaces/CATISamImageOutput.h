#ifndef CATISamImageOutput_H
#define CATISamImageOutput_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
//
// CATISamImageOutput : interface designed to get the result data of the image.
//
//=============================================================================
// Avril 2003 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

// CATAnalysisBase
class CATAnalysisCharacCollector;

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageOutput;

/**
 * Analysis Images outputs.
 * <b>Role: </b> Analysis <i>Images</i> is the result visualization of 
 * the collector characteristics.
 * Query this interface in order to get the collector characteristics of an existing <i>Image</i>.
 */ 

class ExportedByCATSamVisuUUID CATISamImageOutput : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
  /**
    * Retrieves the collector characteristics for each entity dimensions (1D,2D,3D).
    * @param oCharacCollectors.
    *   A pointer to the collector characteristics. 
    *   The number of CATAnalysisCharacCollector is 3, one per dimension.
	  *   The charac collector for one given dimension can be NULL.
  	*   The charac collector will be filtered whith the entities corresponding whith the given dimension.
	  *   The CATISamImage must be uptodate.
    *   Release has to be called on each CATAnalysisCharacCollector object.
    */
  virtual HRESULT GetCharacCollectors ( const CATAnalysisCharacCollector ** & oCharacCollectors ) = 0;
};

CATDeclareHandler(CATISamImageOutput, CATBaseUnknown);

#endif

