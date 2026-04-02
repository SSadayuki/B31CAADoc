#ifndef CATCafCenterGraph_h
#define CATCafCenterGraph_h

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT DASSAULT SYSTEMES 2006

#include "CATBaseUnknown.h"
#include "SELECT.h"

class CATString;
class CATNavigBox;

/**
 * Class to visually center a graph on some element.
 * <b>Role</b>: Instanciate this class to center a graph. It
 * can be centered on:
 * <ul>
 *   <li> the selection (see @href CATCSO ). If the selection
 *   contains more than one element, the result is not specified.</li>
 *   <li> the highlighted object (see @href CATHSO ). If the current HSO
 *   contains more than one element, the result is not specified.</li>
 *   <li> the object under mouse when contextual menu is displayed.</li>
 * </ul>
 * For example, to center a graph on the current selection use
 * the following code:
 * <pre>
 *   CATCafCenterGraph MyObj;
 *   MyObj->CenterGraph("OnCSO",MyNavigBox);
 * </pre>
 */ 
class ExportedBySELECT CATCafCenterGraph : public CATBaseUnknown
{
  public:

  /**
   * Constructs an instance of CATCafCenterGraph class.
   */
  CATCafCenterGraph();
  virtual ~CATCafCenterGraph();
  
  /** Centers a graph.
   * @param iType
   * A string to specify on which element to center the graph.
   * <br><b>Legal values</b>
   * <ul>
   * <li><tt>"OnCSO"</tt> to center the graph on selection.</li>
   * <li><tt>"OnHSO"</tt> to center the graph on highlighted object.</li>
   * <li><tt>"OnCtxMenu"</tt> to center the graph on the object under mouse when contextual menu is displayed.</li>
   * </ul>
   * @param iNavigBox
   * A pointer to the instance of @href CATNavigBox class that owns the graph to center.
   * @return
   * Always returns S_OK.
   */
  HRESULT CenterGraph( const CATString & iType, CATNavigBox * iNavigBox );

};

#endif
