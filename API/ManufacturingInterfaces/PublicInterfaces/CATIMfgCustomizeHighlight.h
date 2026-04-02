/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIMfgCustomizeHighlight_H
#define CATIMfgCustomizeHighlight_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATIMfgCustomizeRep.h"

#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCustomizeHighlight ;
#else
extern "C" const IID IID_CATIMfgCustomizeHighlight;
#endif

/**
 * This interface is used in highlight mechanism.<br>
 * Any object that needs highlight services is intended to implement this interface.<br>
 * The interface methods describe what is supposed to be highlighted when the object is
 * selected. There are 2 possibilities :<br>
 * <ol>
 *  <li>Highlight Design Features, like Hole, Pocket, but also Point, Face, or vertex</li>    
 *  <li>Highlight Manufacturing features</li>
 * </ol>
 * The mechanism can be recursive. For instance, a Manufacturing Operation can ask to highlight
 * a Manufacturing Feature that itself asks to highlight a Design Feature.
 *
 */
class ExportedByMfgItfEnv CATIMfgCustomizeHighlight: public CATIMfgCustomizeRep
{
    CATDeclareInterface;

public :

    /**
     * Method to retrieve the Design Features to be highlighted when the object is selected.
     * Design Features are Mechanical Features (Pad, Hole, Face, Edge, Point, ...).
     * @return oDFList List of Design Features.
     */

    virtual HRESULT GetDesignFeatures (CATListValCATBaseUnknown_var& oDFList) = 0;

    /**
     * Method to retrieve the Manufacturing Features (with a Rep ot not) to be highlighted
     * when the object is selected.
     * @return oMfgFeatureList The Manufacturing Features list.
     */

    virtual HRESULT GetManufacturingFeatures (CATListValCATBaseUnknown_var& oMfgFeatureList) = 0;
};

CATDeclareHandler( CATIMfgCustomizeHighlight, CATIMfgCustomizeRep) ;

#endif
