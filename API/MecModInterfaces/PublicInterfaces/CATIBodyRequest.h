#ifndef CATIBodyRequest_h
#define CATIBodyRequest_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"

class CATUnicodeString;
class CATListValCATBaseUnknown_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIBodyRequest;
#else
extern "C" const IID IID_CATIBodyRequest;
#endif

/**
 * Interface to retrieve the result of a geometrical feature set.
 * <b>Role</b>:This interface enables you to retrieve the result of a geometrical set. 
 * This interface is available for all kind of geometrical features sets.
 * <ul>
 * <li><b>Surfacic features sets</b>: 
 * <ul>
 * <br>    <li><b>Geometrical Set</b> (or <b>GS</b>) (startup: GSMTool)</li>
 * <br>    <li><b>Ordered Geometrical Set</b> (or <b>OGS</b>) (startup: GSMTool)</li></li>
 * </ul>
 * <br> <li><b>Bodies</b>:
 * <ul>
 * <br>    <li><b>Solid features set</b> (user name: <b>Body</b>) (startup: MechanicalTool)</li>
 * <br>    <li><b>Solid and Surfacic features set</b> (user name: <b>Body</b>) (startup: HybridBody)</li></li>
 * </ul>
 * </ul>
 * <p>The unique method, @href #GetResults , enables you to retrieve the result of a geometrical feature set.
 * <br>The result of a geometrical feature set is made from all the geometrical features that are aggregated in 
 * this geometrical set and that are not absorbed. 
 * <br>It can be directly aggregated (a Point under the the geometrical feature set),
 * or indirectly (a Point under a Line that is under the geometrical feature set). 
 * <br>This method works for nearly any kind of geometrical features sets.
 * <br>In particular, this method works for a Body operated by a boolean operation.
 * <br>This method does not work for sub-Body and sub-OGS (Body or OGS aggregated directly in an OGS or in a Body).
 * <br>
 * <p>The method of this interface needs a <b>context</b> (It is a difference between 
 * the @href CATIDescendants interface). The context is the means to have for the same
 * design several representations. There is a default context represented by 
 * the <tt>MfDefault3DView</tt> string value.
 * <br>
 * <br> In all cases, the result list contains features implementing the @href CATI3DGeometricalElement interface. 
 * Once you have the resulting feature(s), use the @href CATIGeometricalElement#GetBodyResult 
 * method  to retrieve the associated <tt>CATBody</tt>. 
 * Be aware that you can retrieve deactivated features in the list (see the @href CATIMechanicalProperties interface).
 * In that case, it can happen that the associated  <tt>CATBody</tt> does not exist.</p>  
 * @see CATIPartRequest
 */
class ExportedByMecModItfCPP CATIBodyRequest : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Retrieves the result of a geometrical feature set.
   * <ul>
   * <p> <li> For a <b>Geometrical Set</b> or a <b>Solid features set</b></li>
   * <p> Retrieves the list of geometrical features directly aggregated by the geometrical feature set.
   * For instance, Geometric elements that are in a GS (GS2) under GS1 are not retrieved.
   * To retrieve them, you have to call @href CATIBodyRequest on GS2. <br>
   * For a Solid feature set, GetResults also takes into consideration the sketches located inside the
   * possible operated Solid feature sets.
   * <br>
   * <p> <li> For a <b>Ordered Geometrical Set</b> or a <b>Solid and Surfacic features set</b></li>
   * <p> Retrieves the list of geometrical features aggregated by the OGS (OGS1) and sub-geometrical feature set.
   * Contrary to Geometrical Set, Geometric elements that are in a OGS (OGS2) under OGS1 are also retrieved.
   * On this example, @href CATIBodyRequest on OGS2 doesn't work.
   * If the geometrical feature set contains Solid feature, the resulting Solid feature is the first element of the list. Next features in the list
   * are Surfacic features. Note that the resulting Solid feature can be a feature not displayed to the user (internal feature).</p> 
   * </ul>
   * @param iViewContext
   * The context of view:
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded 
   *  view in Sheet Metal applications,</li>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li>otherwise: the default 3D view.</li>
   *  </ul>
   * @param oResults
   * A list of geometrical features.
   *
   */
  virtual HRESULT GetResults(const CATUnicodeString& iViewContext, CATListValCATBaseUnknown_var& oResults)=0;
};

CATDeclareHandler( CATIBodyRequest, CATBaseUnknown );

#endif
