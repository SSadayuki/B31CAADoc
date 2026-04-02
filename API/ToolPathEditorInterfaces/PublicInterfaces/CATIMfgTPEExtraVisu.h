//===================================================================
// COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// CATIMfgTPEExtraVisu.h
// Define the CATIMfgTPEExtraVisu interface
//
//===================================================================
//  Mar 2004  Creation GVS
//===================================================================
#ifndef CATIMfgTPEExtraVisu_H
#define CATIMfgTPEExtraVisu_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "TPEItfEnv.h"
#include "CATIVisu.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByTPEItfEnv IID IID_CATIMfgTPEExtraVisu;
#else
extern "C" const IID IID_CATIMfgTPEExtraVisu ;
#endif

//------------------------------------------------------------------

/**   
 * Interface to customize tool path editor visualization.
 * <b>Role</b>: You can implement this interface to add a specific graphical representation in the tool path editor functions.<br>
 * 
 * @see CATI3DGeoVisu
 */

class ExportedByTPEItfEnv CATIMfgTPEExtraVisu : public CATIVisu
{
  CATDeclareInterface;

  public:

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIMfgTPEExtraVisu, CATIVisu );

#endif
