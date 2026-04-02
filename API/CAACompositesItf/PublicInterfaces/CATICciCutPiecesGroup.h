//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciCutPiecesGroup :
//   Interface to manage the composites ply Cut Piece group
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciCutPiecesGroup (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciCutPiecesGroup_H
#define CATICciCutPiecesGroup_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATICciCutPiece.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciCutPiecesGroup;
#else
extern "C" const IID IID_CATICciCutPiecesGroup ;
#endif

//------------------------------------------------------------------

/**
 * Interface to Cut Piece group.
 * <b>Role</b>: Allows to manage a Composites Cut Piece group feature, obtained from a Composites ply.
 * @see CATICciPly
 */
class ExportedByCAACompositesItf CATICciCutPiecesGroup: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:

   /**
   * Gets the list of CutPieces that are in this cut-piece group.
   * @param oCutPiecesList
   *   The list of CutPieces. Each element adheres to @href CATICciCutPiece.
   */
   virtual HRESULT GetCutPieces( CATLISTV(CATICciCutPiece_var)& oCutPiecesList ) = 0;
   
   /**
   * @deprecated V5R26 
   * Use @see #GetCutPieces(CATLISTV(CATICciCutPiece_var)&) method instead.
   * Gets the list of CutPieces that are in this cut-piece group.
   * @param oCutPiecesList
   *   The list of CutPieces. Each element adheres to @href CATICciCutPiece.
   */
   virtual HRESULT GetCutPieces( CATLISTV(CATISpecObject_var)& oCutPiecesList ) = 0;
   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------
};
CATDeclareHandler(CATICciCutPiecesGroup, CATBaseUnknown);

//------------------------------------------------------------------

#endif
