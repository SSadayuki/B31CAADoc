#ifndef  CATPrsWorkModeServices_H  
#define  CATPrsWorkModeServices_H

// COPYRIGHT Dassault Systemes 2008
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h"
#include "AS0STARTUP.h"
  
class CATIProduct_var;
  
/**
 * Class to retrieve and assign a work mode of/on a Product.
 * <b>Role:</b> The work mode is a loading mode which can vary according to the 
 * selective loading context.
 */  
  
class  ExportedByAS0STARTUP CATPrsWorkModeServices  
{
  public:

    /**
    * Role of this enumeration type.
    *
    * @param WM_VISUALIZATION
    *     The Visualization work mode, also named AuthoringVisu mode.
    * @param WM_PRODUCT
    *     The Product work mode.
    * @param WM_BREP
    *     The BRep mode, also named Linkable bmode.
    * @param WM_DESIGN
    *     The Design mode, also named Edit mode.
    *
    */
    enum WorkMode
    {
      WM_VISUALIZATION,
      WM_PRODUCT,
      WM_BREP,
      WM_DESIGN
    };
    
  /** 
    * Retrieves the work mode of the Product.
    *
    * @param iProduct [in]
    *   The current Product.
    * @param oCurrentMode [out]
    *   The returned mode.
    *
    * @return
    *   <code>S_OK</code> the work mode is successfully retrieved. <br>
    *   <code>E_FAIL</code> no suitable work mode was retrieved on iProduct.    
    */
    static HRESULT GetWorkMode(const CATIProduct_var& iProduct,WorkMode& oCurrentMode);
    
  /** 
    * Defines the work mode of the Product.
    *
    * @param iProduct [in]
    *   The current Product.
    * @param iNewMode [in]
    *   The desired mode.
    *
    * @return
    *   <code>S_OK</code> the work mode is successfully affected. <br>
    *   <code>E_FAIL</code> the work mode is not successfully affected.
    */
    static HRESULT SetWorkMode(const CATIProduct_var& iProduct,WorkMode iNewMode);
    
  private:  
    CATPrsWorkModeServices();  
    ~CATPrsWorkModeServices();     
};  

#endif
