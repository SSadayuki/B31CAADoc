#ifndef CATICciPartnerProdDlgCtrl_H
#define CATICciPartnerProdDlgCtrl_H
//===================================================================
// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATICciPartnerProdDlgCtrl.h
//
//===================================================================
//
// Usage notes:

//
//===================================================================
//
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */


#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciPartnerProdDlgCtrl;
#else
extern "C" const IID IID_CATICciPartnerProdDlgCtrl;
#endif

class CATUnicodeString;

/**
 * Interface to propagate to producibility dialog modifications that impact producibility displayed results.   
 * <b>Role:</b> push partner's parameters value modification info to producibility command and dialog  
 * <br/>Here under is an example on how to retrieve a pointer to this interface:
 * <code><pre>
 * // Compositespublic header 
 * #include "CATCciCreatePartnerProdDlgCtrl.h"
 * #include "CATICciPartnerProdDlgCtrl.h"  
 * 
 *  ...
 *   CATICciPartnerProdDlgCtrl * pPartnerProdDlgCtrl =NULL; 
 *   ::CATCciCreatePartnerProdDlgCtrl (pPartnerProdDlgCtrl);   
 *   if ( NULL!= pPartnerProdDlgCtrl) { 
 *     // To re-draw analyse result impacted by parameter change 
 *      pPartnerProdDlgCtrl->SetAnalysisDraw();
 *  ...
 *     // To inform producibility dialog command re-run fiber propagation is required 
 *     // ( Note - it does not re-run automatically fiber propagatin , but hust allow to tag and feedback  in producibility command 
 *     //  that the fiber propagation need to be re-run)  
 *     pPartnerProdDlgCtrl->SetComputeRequired();
 *  ...
 *     <b>//insert your code here</b>
 *      pPartnerProdDlgCtrl->Release(); pPartnerProdDlgCtrl=NULL;
 *    }
 *  ...
 *  }
 * </pre></code>
 */
class ExportedByCAACompositesItf CATICciPartnerProdDlgCtrl: public CATBaseUnknown
{
  /**
   * Macro for interface declaration.
   */
  CATDeclareInterface;

public:

    /** 
     * Sent notification producibility analysis result is  to be redraw.
     */ 
    virtual HRESULT SetAnalysisDraw() = 0;

    /** 
     * Sent notification producibility propagation has to be computed. 
     * <b>(User has to push "RunProducibility") 
     */ 
    virtual HRESULT SetComputeRequired() = 0;
   
};

CATDeclareHandler(CATICciPartnerProdDlgCtrl,CATBaseUnknown);
#endif
