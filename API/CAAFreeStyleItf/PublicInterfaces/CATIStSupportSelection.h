#ifndef CATIStSupportSelection_H
#define CATIStSupportSelection_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATIStSupportSelection :
//   Interface for retreiving supports from a CATPathElement
//   
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStSupportSelection  (CAAFreeStyleItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
// Nov. 02   Creation                                          Guillaume BOUDIER
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

class CATSO;
class CATCell;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStSupportSelection;
#else
extern "C" const IID IID_CATIStSupportSelection;
#endif


/**
 * @nodoc
 * Class for retrieving and selecting supports from an element selected. If the
 * selected element is n-Dimensionnal, the supports are (n+1)-Dimensionnal
 * <ul>
 * <li> Retrieve the interface on a <tt>CATPathElement</tt>
 * <li> Get all the support of the selected element with the <tt>GetAllSupports</tt> method
 * <li> Get all the support of one precise cell of the selected element
 * <li> Release this interface when it is not needed anymore.
 */ 
class ExportedByCAAFreeStyleItf CATIStSupportSelection : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
	 * @nodoc
     * Returns all the possible supports for all the
     * cells of the element
     * @param oSetOfSupports
     * The set of supports (an AddRef is done on it)
	 * A Release() must be done by the calling.
	 *
	 * Ex : CATSO * AllSupports = NULL;
	 *	    if (SuppSelectionItf)
	 *		{
	 *			SuppSelectionItf->GetAllSupport(AllSupports);
	 *		}
	 *		if(AllSupports)
	 *		{
	 *			...
	 *			AllSupports->Release();
	 *		}
     */
    virtual HRESULT GetAllSupports(CATSO *& oSetOfSupports) = 0;

    /**
	 * @nodoc
     * Gets the supports corresponding to the input Cell
     * @param iCellToAnalyse
     * The cell which one what to know its supports
     * @param ioSetOfSupports
     * The set of supports for the iCellToAnalyse. If iCellToAnalyse has no support, the 
     * returned CATSO's size is null.
	 * If ioSetOfSupport is input as NULL a new SO is returned and must be Released by the calling
	 * as soon as it is no more needed.
     */
    virtual HRESULT GetCorrespondingSupports(CATCell * iCellToAnalyse,
                                             CATSO   *& ioSetOfSupports) = 0;
};

CATDeclareHandler(CATIStSupportSelection, CATBaseUnknown);

#endif

