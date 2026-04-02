// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
// class CATExtIVisuChildren 
//=============================================================================
// adapter for CATIVisuChildren adhesion
//=============================================================================

#ifndef CATExtIVisuChildren_h
#define CATExtIVisuChildren_h

// L1 U2
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "MecModItfCPP.h"
#include "CATIVisuChildren.h"
#include "CATUnicodeString.h"
#include "CATMfViewDefs.h"

class CATListValCATBaseUnknown_var;

/**
*  Base class.
*  <b>Role :</b>
*  for adapters for the implementation of CATIVisuChildren interface.
*/
class ExportedByMecModItfCPP CATExtIVisuChildren : public CATIVisuChildren
{
  CATDeclareClass;
  
public:

  CATExtIVisuChildren();  
  virtual ~CATExtIVisuChildren();

  /** @nodoc */
  virtual HRESULT GetChildrenToVisualizeBeforeAndAfterMyRep(CATListValCATBaseUnknown_var** oBefore, 
                                                            CATListValCATBaseUnknown_var** oAfter,
                                                            const CATUnicodeString& iView = MfDefault3DView);

  /** @nodoc */
  virtual HRESULT GetChildrenToVisualizeUnderMyRep(CATListValCATBaseUnknown_var** oUnder,
                                                   const CATUnicodeString& iView = MfDefault3DView);

    /** @nodoc */
  virtual HRESULT GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints,
                                                        const CATUnicodeString& iView = MfDefault3DView);

private:
   // NOT implemented, to prevent default
  CATExtIVisuChildren(const CATExtIVisuChildren&);
  CATExtIVisuChildren& operator=(const CATExtIVisuChildren&);
};

#endif
