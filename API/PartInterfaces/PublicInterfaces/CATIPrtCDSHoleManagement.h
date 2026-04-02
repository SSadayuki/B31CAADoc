#ifndef CATIPrtCDSHoleManagement_H
#define CATIPrtCDSHoleManagement_H

//
// COPYRIGHT DASSAULT SYSTEMES 2016
//=============================================================================
//
// Class CATIPrtCDSHoleManagement:
//
//
//=============================================================================
// Usage Notes:
//    Hole private access interfaces created for counter drilled new mode hole Management.
//
//=============================================================================
//  Oct 2016 - Creation: APL3

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include <PartItf.h>
#include <CATINewHole.h>

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtCDSHoleManagement;
#else
extern "C" const IID IID_CATIPrtCDSHoleManagement;
#endif
class ExportedByPartItf CATIPrtCDSHoleManagement : public CATINewHole
{
    CATDeclareInterface;

public:
    /**
    * Sets value of Counterdrilled mode.
    * @param iMode
    *   Value of Counterdrilled Mode can be:
    *<br>- 0 - No Countersunk Diameter
    *<br>- 1 - Countersunk Diameter
    */
    virtual HRESULT SetCDMode (int &iMode) = 0;

    /**
    * Sets value of CounterSunkdiameter.
    * @param iCDSDiameter
    *  Value of CounterSunk diameter. 
    */
    virtual HRESULT SetCDSDiameter (double &iCDSDiameter) = 0;

    /**
    * Returns  value of Counterdrilled mode.
    * @param oMode
    *   Value of Counterdrilled Mode can be:
    *<br>- 0 - No Countersunk Diameter
    *<br>- 1 - Countersunk Diameter
    */
    virtual HRESULT GetCDMode (int &oMode) = 0;

    /**
    * Returns parameter linked to CounterSunk diameter for counterdrilled hole.
    * @param hCDSDiam
    *  Parameter linked to CounterSunk diameter. 
    */
    virtual HRESULT GetCDSDiameter (CATICkeParm_var & hCDSDiam) = 0;

    /**
    * Returns value of CounterSunk diameter for counterdrilled hole.
    * @param oCDSDiameter
    *  Value of CounterSunk diameter. 
    */
    virtual HRESULT GetCDSDiameter (double &oCDSDiameter) = 0;
}; 

CATDeclareHandler(CATIPrtCDSHoleManagement, CATINewHole);

#endif // CATIPrtCDSHoleManagement_H
