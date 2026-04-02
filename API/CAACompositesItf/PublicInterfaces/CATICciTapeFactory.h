//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//==============================================================================
//
// CATICciTapeFactory :
//   Interface to create tapes
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciTapeFactory (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciTapeFactory_H
#define CATICciTapeFactory_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATICciPly.h"
#include "CATICciTape.h"
#include "CATICciTapeStrategy.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciTapeFactory;
#else
extern "C" const IID IID_CATICciTapeFactory ;
#endif

//------------------------------------------------------------------

/**
 * Factory of all taper features of Composites workshop.
 * <b>Role</b>: Creation of all ply tapes and tape strategies.
 * @see CATICciTape, CATICciTapeStrategy
*/ 
class ExportedByCAACompositesItf CATICciTapeFactory: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
   /**
   * Gets the Tape created in the document.
   * @param iTapeName
   *     Name of the tape to be created.
   * @param iPly
   *     The ply under which the tape would be created.
   */
   virtual CATICciTape_var CreateTape( const CATUnicodeString &iTapeName,
      CATICciPly_var iPly ) = 0;

   /**
   * Gets the Tape strategy created in the document.
   * @param iPly
   *     The ply under which the tape strategy would be created.
   */
   virtual CATICciTapeStrategy_var CreateTapeStrategy( CATICciPly_var iPly ) = 0;
};
CATDeclareHandler( CATICciTapeFactory, CATBaseUnknown);

//------------------------------------------------------------------

#endif
