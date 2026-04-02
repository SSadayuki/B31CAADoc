#ifndef CATISchGRRCntr_H
#define CATISchGRRCntr_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

// CATSchPlatformInterfaces

#include "CATSchGeneralEnum.h"

class CATISchGRR;

extern "C" const IID IID_CATISchGRRCntr ;

/**
 * Interface to manage the representation of Schematic connector
 * graphic objects.
 * <b>Role</b>: To modify or query a connector's symbol 
 * or graphic representation.
 */
class CATISchGRRCntr : public IUnknown
{
  public:  
  
  /**
  * Set the symbol or graphics used to represent a connector.
  * @param iGRRSymbol
  *   The graphical primitive (detail) to be used as the connector's symbol.
  *   iGRRSymbol can be NULL if iESymbolType is a point or point/vector.
  * @param iESymbolType
  *   Connector symbol type such as: point, point/vector,
  *   OnOffSheet, LineBoundary.
  *   @see CATSchCntrSymbolType
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetSymbol (CATISchGRR *iGRRSymbol,
    CATSchCntrSymbolType iESymbolType) = 0;

  /**
  * Remove the graphical primitive used as the connector's symbol.
  * The default connector's symbol type will be set to point.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT RemoveSymbol () = 0;

  /**
  * Get the graphical primitive of a connector.
  * @param oGRR
  *   The graphical primitive (ditto) used to represent a connector.
  * @param oESymbolType
  *   Connector symbol type such as: point, point/vector,
  *   OnOffSheet, LineBoundary.
  *   @see CATSchCntrSymbolType
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSymbol (CATISchGRR **oGRR,
    CATSchCntrSymbolType *oESymbolType) = 0;
};
#endif
