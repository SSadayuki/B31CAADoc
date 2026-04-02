#ifndef CATIMmiUseBodyContent_h
#define CATIMmiUseBodyContent_h

// COPYRIGHT DASSAULT SYSTEMES 2008
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATMecModLiveUseItf.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;
class CATListValCATBaseUnknown_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModLiveUseItf IID IID_CATIMmiUseBodyContent;
#else
extern "C" const IID IID_CATIMmiUseBodyContent;
#endif

/**
 * Interface to retrieve the elements of a geometrical feature set.
 * <b>Role</b>:This interface enables you to retrieve the elements of a geometrical set. 
 * This interface is available for all kinds of geometrical features sets.
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
 * <p>The unique method, @href #GetMechanicalFeatures , enables you to retrieve the elements of a geometrical feature set :
 * <br>all the geometrical features that are aggregated in 
 * this geometrical set (first level), excluding feature sets
 * <br> Features aggregated indirectly are not retrieved (e.g. a Point under a Line that is under the geometrical feature set). 
 * <br>This method works for any kind of geometrical features sets.
 * <br>
 */
class ExportedByCATMecModLiveUseItf CATIMmiUseBodyContent : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Retrieves the elements of a geometrical feature set.
   * <p> Retrieves the list of mechanical features directly aggregated by the geometrical feature set (excluding aggregated feature sets)
   * For instance, Geometric elements that are in a GS (GS2) under GS1 are not retrieved.
   * @param oFeatures
   * A list of geometrical features.
   *
   */
  virtual HRESULT GetMechanicalFeatures(CATListValCATBaseUnknown_var& oFeatures)=0;

};

CATDeclareHandler( CATIMmiUseBodyContent , CATBaseUnknown );

#endif
