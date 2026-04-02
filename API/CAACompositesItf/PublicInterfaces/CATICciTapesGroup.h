//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//==============================================================================
//
// CATICciTapesGroup :
//   Interface to manage the composites ply tape group
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciTapesGroup (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciTapesGroup_H
#define CATICciTapesGroup_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATICciTapeStrategy.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciTapesGroup;
#else
extern "C" const IID IID_CATICciTapesGroup ;
#endif

//------------------------------------------------------------------

/**
 * Interface toTape group.
 * <b>Role</b>: Creation of all ply tapes and tape strategies.
 * This interface can be got from the ply interface.
 * @see CATICciPly, CATICciTapeStrategy
*/ 
class ExportedByCAACompositesItf CATICciTapesGroup: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:

   /**
   * Gets the tape strategy under this tape group.
   * @param ospStrategy
   *   The strategy.
   */
   virtual HRESULT GetTapeStrategy( CATICciTapeStrategy_var &ospStrategy ) = 0;

   /**
   * Gets the list of tapes that are in this tape group.
   * @param oTapesList
   *   The list of tapes (CATICciTape).
   */
   virtual HRESULT GetTapes( CATLISTV(CATBaseUnknown_var)& oTapesList ) = 0;

   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------
};
CATDeclareHandler(CATICciTapesGroup, CATBaseUnknown);

//------------------------------------------------------------------

#endif
