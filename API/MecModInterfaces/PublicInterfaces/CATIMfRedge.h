#ifndef CATIMfRedge_h
#define CATIMfRedge_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfInt.h"

class CATIGeometricalElement_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfRedge;
#else
extern "C" const IID IID_CATIMfRedge;
#endif

/**
 * Interface to manage a selecting feature of Redge (for relimited edge) type.
 * <b>Role:</b>
 * This interface allows you to manage a selecting feature ( @href CATIMfBRep ) of Redge type.<br>
 * This is the featurization ( @href CATIFeaturize ) of a @href CATIREdge object.
 * This featurization from the CATIREdge has to be done in <tt>MfRelimitedFeaturization</tt>
 * mode to create a CATIMfRedge. See @href CATMfFeaturizeMode for featurization modes.
 */
class ExportedByMecModItfCPP CATIMfRedge : public CATIMfBRep
{
  CATDeclareInterface;
public:

/**
 * Returns the geometrical edges associated with the BRep feature.
 * @param oOrientations
 * <tt>oOrientations[i]</tt> is equal to 1 if the ith <tt>CATEdge</tt> has the same orientation as the BRep feature, 
 * otherwise equal to -1.
 */
  virtual CATLISTV(CATBaseUnknown_var) GetEdges(CATListOfInt &oOrientations) const =0;

/**
 * Returns the geometrical edges associated with the BRep feature.
 * @param iScopeAccess
 * Search is performed in <tt>iScopeAccess</tt>.
 * @param oOrientations
 * <tt>oOrientations[i]</tt> is equal to 1 if the ith <tt>CATEdge</tt> has the same orientation as the BRep feature, 
 * otherwise equal to -1.
 */
  virtual CATLISTV(CATBaseUnknown_var) GetEdges(const CATIGeometricalElement_var &iScopeAccess,
                                                CATListOfInt &oOrientations) const =0;

/**
 * Returns the sharpness of the geometrical edge associated with the BRep feature.
 * @param iFeat
 * Search is performed in <tt>iFeat</tt> solid.
 * @return
 * <b>Legal values</b>:
 * <tt>MfNoSharp</tt>, <tt>MfSharp</tt>, <tt>MfUnknownSharpness</tt>
 */
  virtual CATMfSharpnessType IsSharp(const CATIGeometricalElement_var &iFeat=NULL_var) const = 0; 

};

CATDeclareHandler( CATIMfRedge, CATIMfBRep ) ;

#endif








