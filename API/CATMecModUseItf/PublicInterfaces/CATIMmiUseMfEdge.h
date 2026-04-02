#ifndef CATIMmiUseMfEdge_H
#define CATIMmiUseMfEdge_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATIMmiUseMfBRep.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfInt.h"
#include "CATMfBRepDefs.h"
#include "CATIMmiMechanicalFeature.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseMfEdge;
#else
extern "C" const IID IID_CATIMmiUseMfEdge ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage a brep feature of Fedge (for functional edge) type.
 * <b>Role:</b>
 * This interface allows you to manage a brep feature ( @href CATIMmiUseMfBRep ) of edge type.<br>
 */

class ExportedByCATMecModUseItf CATIMmiUseMfEdge: public CATBaseUnknown
{
  CATDeclareInterface;
  public:
   
/**
 * Gets the geometrical edges associated with the BRep feature.
 * @param oEdges [out]
 * The geometrical edges.
 * @param oOrientations [out]
 * <tt>oOrientations[i]</tt> is equal to 1 if the ith <tt>CATEdge</tt> has the same orientation as the BRep feature, 
 * otherwise equal to -1.
 * @param iScopeAccess [in]
 * Search is performed in <tt>iScopeAccess</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetEdges(CATLISTV(CATBaseUnknown_var)& oEdges, CATListOfInt &oOrientations, const CATIMmiMechanicalFeature_var &iScopeAccess = NULL_var) const =0;

/**
 * Returns the sharpness of the geometrical edge associated with the BRep feature.
 * @param oSharpness [out]
 * The Sharpness of the edge.
 * <b>Legal values</b>:
 * <tt>MfNoSharp</tt>, <tt>MfSharp</tt>, <tt>MfUnknownSharpness</tt>
 * @param iFeat [in]
 * Search is performed in <tt>iFeat</tt> solid.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successfull.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetSharpness(CATMfSharpnessType& oSharpness, const CATIMmiMechanicalFeature_var &iFeat=NULL_var) const =0; 
};
CATDeclareHandler( CATIMmiUseMfEdge, CATIMmiUseMfBRep ) ;

//------------------------------------------------------------------

#endif
