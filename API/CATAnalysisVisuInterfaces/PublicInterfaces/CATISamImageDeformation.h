#ifndef CATISamImageDeformation_H
#define CATISamImageDeformation_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
//
// CATISamImageDeformation : interface designed to define physical type and version
//                           to take into account for deformation
//
//=============================================================================
// Mars 2003 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U4	CATESamImageDeformation
  */

#include "CATBaseUnknown.h"

// prereqs SAM
#include "CATSamCharacVersion.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageDeformation;

/**
 * Analysis Images deformation.
 * <b>Role: </b> Analysis <i>Images</i> deformation definition.<br> 
 * Query this interface in order to define the physical type and the version
 * to take into account for <i>Image</i> deformation.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 */ 

class ExportedByCATSamVisuUUID CATISamImageDeformation : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
  /**
    * Retrieves the physical type for deformation.
    * @param oPhysicalType.
    * The physical type to choose for deformation.
    */
  virtual HRESULT GetPhysicalType ( CATSamPhysicalType & oPhysicalType ) const = 0;

  /**
    * Retrieves the version for deformation.
    * @param oVersion.
    * The version to choose for deformation.
    */
  virtual HRESULT GetVersion ( CATSamCharacVersion & oVersion) const = 0;

};

CATDeclareHandler(CATISamImageDeformation, CATBaseUnknown);

#endif

