#ifndef CATISamImageGroup_H
#define CATISamImageGroup_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
//
// CATISamImageGroup : interface designed to get the result data of the image.
//
//=============================================================================
// Avril 2003 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "CATBaseUnknown.h"

// System
#include "CATBooleanDef.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageGroup;

/**
 * Images groups.
 * <b>Role: </b> Analysis <i>Images</i> groups availability.
 * Query this interface in order to authorize or not a <i>group</i> to be used as a selection group for an image.
 */ 

class ExportedByCATSamVisuUUID CATISamImageGroup : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
  /**
    * Specify if the group is authorized as a selection group for an image.
    * @param oIsAvailable.
    * The authorization flag.
    */
    virtual HRESULT IsAuthorized ( CATBoolean& oIsAuthorized ) = 0;
};

CATDeclareHandler(CATISamImageGroup, CATBaseUnknown);

#endif

