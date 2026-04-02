#ifndef CATESamImageDeformation_h 
#define CATESamImageDeformation_h

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

/**
 * @CAA2Level L1 
 * @CAA2Usage U2 
 */

// System prereqs
#include "CATBaseUnknown.h"

// prereqs SAM
#include "CATSamCharacVersion.h"

// CATAnalysisVisuInterfaces prereqs
#include "CATSamVisuImpl.h"

/**
 * Adapter for the implementation of CATISamImageDeformation interface.
 * @see CATISamImageDeformation
 */

class ExportedByCATSamVisuImpl CATESamImageDeformation : public CATBaseUnknown
{
  CATDeclareClass;
  
  public:
  
    /**
     * Default constructor.
     */
    CATESamImageDeformation();

    /**
     * Destructor.
     */
    virtual ~CATESamImageDeformation();    

    /**
      * Retrieves the physical type for deformation.
      * @param oPhysicalType.
      * The physical type to choose for deformation.
      */
    virtual HRESULT GetPhysicalType ( CATSamPhysicalType & oPhysicalType ) const;

    /**
      * Retrieves the version for deformation.
      * @param oVersion.
      * The version to choose for deformation.
      */
    virtual HRESULT GetVersion ( CATSamCharacVersion & oVersion) const;

};
#endif
