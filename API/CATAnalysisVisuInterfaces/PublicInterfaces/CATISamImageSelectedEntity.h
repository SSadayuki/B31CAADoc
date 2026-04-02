#ifndef  CATISamImageSelectedEntity_h 
#define  CATISamImageSelectedEntity_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATSamVisuUUID.h"
#include "CATBaseUnknown.h"

// CATAnalysisVisuInterfaces
class CATISamImage_var;

// CATAnalysisBase
class CATAnalysisCharacCollector;

extern "C" const IID IID_CATISamImageSelectedEntity;

/**
 * Analysis Images entities selections.
 */ 

class ExportedByCATSamVisuUUID CATISamImageSelectedEntity : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
   /**
     * Retrieves the image to which the selected entity belongs.
     * The parent image.    
     */
  virtual HRESULT GetImage ( CATISamImage_var & oImage ) = 0;

  /**
    * Retrieves the characteristics providing the result values on the selected entity.
    * @param oCharacCollector
    *   A pointer to a <b>CATAnalysisCharacCollector</b> object.
    *   Release has to be called on the CATAnalysisCharacCollector object after use.
    */
  virtual HRESULT GetCharacCollector ( const CATAnalysisCharacCollector *& oCharacCollector ) = 0;

  /**
    * Retrieves the type of the selected entity.
    * @param oTypeIID
    *   The type of the selected mesh entity.
    *   Type can be IID_CATIMSHSelectedNode, IID_CATIMSHSelectedElement, 
    *   IID_CATIMSHSelectedFace or IID_CATIMSHSelectedEdge.
    */
  virtual HRESULT GetType ( IID & oTypeIID ) = 0;

  /**
    * Retrieves the sequential number of the selected entity.
    * @param oNumber
    *   The sequential number of the selected mesh entity.
    */
  virtual HRESULT GetSequentialNumber ( int & oNumber ) = 0;
};

CATDeclareHandler ( CATISamImageSelectedEntity , CATBaseUnknown );

#endif
