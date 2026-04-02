#ifndef CATIPartRequest_h
#define CATIPartRequest_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h" 
#include "MecModItfCPP.h"
#include "CATEventSubscriber.h"

class CATUnicodeString;
class CATListValCATBaseUnknown_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIPartRequest;
#else
extern "C" const IID IID_CATIPartRequest;
#endif

/**
 * Interface to retrieve the geometrical features sets of the Part document.
 * <b>Role</b>:With this interface and the @href CATIPrtPart
 * interface, you have all the methods to manage the Part feature. 
 * <br>
 * This interface enables you to retrieve the geometrical features sets aggregated directely or indirectly
 * by the Part feature. 
 * <br>
 * <br>These geometrical features sets can be:
 * <ul>
 * <li><b>Surfacic features sets</b>: 
 * <ul>
 * <br>    <li><b>Geometrical Set</b> (or <b>GS</b>) (startup: GSMTool)</li>
 * <br>    <li><b>Ordered Geometrical Set</b> (or <b>OGS</b>) (startup: GSMTool)</li></li>
 * </ul>
 * <br> <li><b>Bodies</b>:
 * <ul>
 * <br>    <li><b>Solid features set</b> (user name: <b>Body</b>) (startup: MechanicalTool)</li>
 * <br>    <li><b>Solid and Surfacic features sets</b> (user name: <b>Body</b>) (startup: HybridBody)</li></li>
 * </ul>
 * </ul>
 * <br> Refer to @href CATIMechanicalRootFactory interface for explanation about geometrical features sets creation rules.
 * <ul>
 * <li>Retrieving the <b>Surfacic features sets (OGS or GS)</b> </li>
 * <p>Refer to @href CATIMechanicalRootFactory for description of aggregation rules of Surfacic features sets.
 * <br>With @href #GetSurfBodies you retrieve all the Surfacic features sets of the Part document
 * except sub-OGS (OGS aggregated by antoher geometrical features set). It means that for OGS,
 * you retrieve only the root-OGS (OGS aggregated at the Part level) </p>
 *
 * <li>Retrieving the <b>Bodies (startup: MechanicalTool or HybridBody)</b></li>
 * <p>Refer to @href CATIMechanicalRootFactory for description of aggregation rules of Bodies.
 * <br> However, in the specification tree, a Body can appear under another Body but this is through a boolean operation.
 * In that case, the Body is said as being operated by the boolean operation.
 * An <b>operated body</b> is the second operand of a boolean operation between two Bodies.
 * Refer to the <tt>CATIPrtBooleanFactory</tt> or <tt>CATIPrtTrimFactory</tt> interfaces 
 * of the PartInterfaces framework to have more details about the boolean operations. 
 * The @href #GetSolidBodies method
 * allows you to retrieve all the Bodies that you see at the Part level (or root Bodies).
 * You don't retrieve operated Bodies and Bodies aggregated in an OGS with this method.</p>
 * </ul>
 * <p>All the methods of this interface need a <b>context</b> (It is a difference between 
 * the @href CATIDescendants interface). The context is the means to have for the same
 * design several representations. There is a default context represented by 
 * the <tt>MfDefault3DView</tt> string value.
 *
 * <p>This interface is implemented on the Part feature that you retrieve by using the 
 * @href CATIPrtContainer#GetPart method on the
 * specification container (see @href CATIContainerOfDocument )
 *
 * @see CATIBodyRequest, CATIMechanicalRootFactory
 */
class ExportedByMecModItfCPP CATIPartRequest : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Retrieves the main Body. The main Body is unique in a Part document.
   * The default created Body after creation of a Part document is the main Body.
   * It can be changed afterwards thanks to the "Change Part Body" command. 
   * @param iViewContext
   * The context of view:
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded 
   *  view in Sheet Metal applications,</li>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li>otherwise: the default 3D view.</li>
   *  </ul>
   * @param oPartBody
   * The Body which is the main Body.
   */
  virtual HRESULT GetMainBody   (const CATUnicodeString &iViewContext, CATBaseUnknown_var &oPartBody)=0; 

  /**
   * Retrieves all root Bodies.
   * @param iViewContext
   * The context of view:
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded 
   *  view in Sheet Metal applications,</li>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li>otherwise: the default 3D view.</li>
   *  </ul>
   * @param oBodies
   * The list of root Bodies.
   */
  virtual HRESULT GetSolidBodies(const CATUnicodeString &iViewContext, CATListValCATBaseUnknown_var &oBodies)=0;

  /**
   * Retrieves all GS and all root OGS.
   * @param iViewContext
   * The context of view:
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded 
   *  view in Sheet Metal applications,</li>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li>otherwise: the default 3D view.</li>
   *  </ul>
   * @param oBodies
   * The list of all all GS and all root OGS features contained in the Part document.
  */
  virtual HRESULT GetSurfBodies (const CATUnicodeString &iViewContext, CATListValCATBaseUnknown_var &oBodies)=0;

  /**
   * Retrieves all root Bodies, all GS and all root OGS.
   * @param iViewContext
   * The context of view:
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded 
   *  view in Sheet Metal applications,</li>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li>otherwise: the default 3D view.</li>
   *  </ul>
   * @param oBodies
   * The list = list of @href #GetSurfBodies + list of @href #GetSolidBodies
   */
  virtual HRESULT GetAllBodies  (const CATUnicodeString &iViewContext, CATListValCATBaseUnknown_var &oBodies)=0;


  /**
   * Retrieves all root geometrical feature sets (all root Bodies,all root OGS and all root GS).
   * @param iViewContext
   * The context of view:
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded 
   *  view in Sheet Metal applications,</li>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li>otherwise: the default 3D view.</li>
   *  </ul>
   * @param oBodies
   * A list containing the root geometrical feature sets.
   */
  virtual HRESULT GetDirectBodies  (const CATUnicodeString &iViewContext, CATListValCATBaseUnknown_var &oBodies)=0;

  /**
   * Retrieves the event that is dispatched when the list of root geometrical feature sets change.
   * <br><b>Example:</b>Here is an example of subscription the DirectBodiesChange event. <tt>pPartRequestonPart</tt> is a @href CATIPartRequest interface pointer
   * on the Part feature and <tt>"this"</tt> is the object that wants to subscribe to the event.
   * <pre>
   * <br>CATBaseUnknown* pBUOnPart = NULL;
   * <br>pPartRequestOnPart->QueryInterface(IID_CATBaseUnknown,(void**)&pBUOnPart);
   * <br>...
   * <br>::AddCallback(this,pBUOnPart,pPartRequestOnPart->GetDirectBodiesChangeEvent(),(CATSubscriberMethod)&MfClass::MyMethodCB)
   * <br>...
   * </pre>
   * Don't forget to unsubscribe.
  */
  virtual CATCallbackEvent GetDirectBodiesChangeEvent() = 0;
};


CATDeclareHandler( CATIPartRequest, CATBaseUnknown );

#endif
