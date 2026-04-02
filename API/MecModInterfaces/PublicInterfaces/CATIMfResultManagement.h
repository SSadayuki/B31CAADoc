// COPYRIGHT Dassault Systemes 2002

#ifndef CATIMfResultManagement_H
#define CATIMfResultManagement_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIAV5Level.h"
#include "CATLISTP_Declare.h"
class CATCell;
class CATLISTP(CATCell); 
class CATBody;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfResultManagement;
#else
extern "C" const IID IID_CATIMfResultManagement ;
#endif

//------------------------------------------------------------------


/**
 * Interface to create a generic naming scope without a procedural report.
 * <b>Role:</b> This advanced interface is useful to create the genering naming scope (the result) of 
 * a new geometrical feature without input specification. To compute the result of a geometrical feature, there are two interfaces:
 *  <ul>
 *  <li>@href CATIMfProcReport </li>
 *   <p>A procedural report is used to create the scope</p>
 *  <li>CATIMfResultManagement </li>
 *   <p>The scope is created without the procedural report</p>
 * </ul>
 * This interface will be used in the @href CATIBuild interface implementation.
 * <tt>CATIBuild</tt> enables you to build the result of the feature. The result consists in two 
 * parts:
 *  <ul>
 *   <li>The topological result:</li>
 *    <p>There is a <tt>CATBody</tt>. It will be created by topological
 *       operators. Refer to the NewTopologicalOperators framework.</p>
 *    <li><b>A scope</b>: </li>
 *    <p>It is an object which manages a stable access to the cells of the <tt>CATBody</tt>. It 
 *     contains nodes for each following cells. A following cell is:
 *     <ul>
 *      <li>The faces of a solid,</li>
 *      <li>The boundary edges and the faces of a shell,</li>
 *      <li>The extremity vertices and the edges of a wire.</li>
 *     </ul>
 *   </ul>
 *  This interface allows you to create this scope by two means:
 *     <ul>
 *       <li>The naming of the following cells is automatically computed</li>
 *       <li>You associate yourself the name of the following cells</li>
 *     </ul>
 */
class ExportedByMecModItfCPP CATIMfResultManagement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Creates result of geometrical feature.
  * <br><b>Role:</b> This method creates a scope for the feature. The naming associated with 
  * each following cell is automatically computed.</b>
  * @param iBody
  *  The <tt>CATBody</tt> to associate with the geometrical feature.
  */ 
  virtual HRESULT CreateScopeResult(CATBody* iBody) = 0;

  /**
  * Creates result of the geometrical feature.
  * <br><b>Role:</b> This method creates a scope for the feature. The naming associated with 
  * each following cell (iGNUserCells) is given by a key (iUserKeys).</b>
  * @param iBody
  *  The <tt>CATBody</tt> to associate with the geometrical feature.
  * @param iGNUserCells
  *  The list of following cells to associate with key.
  * @param iUserKeys
  *  The list of corresponding key. Only number key are authorised. 
  */
  virtual HRESULT CreateScopeResult(CATBody* iBody,CATLISTP(CATCell) *iGNUserCells,CATListOfCATUnicodeString *iUserKeys) = 0;

  /**
  * Deletes result of the geometrical feature.
  * <br><b>Role:</b>You should use this method only used when the scope has been created 
  * and an error occurs in the @href CATIBuild#Build method. Before leaving the method, and in case of
  * error, the scope must be deleted.
  */ 
  virtual HRESULT DeleteScopeResult() = 0;  
};


CATDeclareHandler( CATIMfResultManagement, CATBaseUnknown ) ;

//------------------------------------------------------------------

#endif
