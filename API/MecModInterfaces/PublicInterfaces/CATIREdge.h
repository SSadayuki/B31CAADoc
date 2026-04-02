#ifndef CATIREdge_h
#define CATIREdge_h
// COPYRIGHT DASSAULT SYSTEMES 2007
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIREdgeAccess.h"
#include "CATMfBRepDefs.h"
#include "CATListOfCATIBRepAccess.h"
#include "MecModItfCPP.h"
#include "CATIAV5Level.h"
class CATLISTP(CATEdge);
class CATIRSur_var;
class CATIREdge_var;
class CATISpecObject_var;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIREdge;
#else
extern "C" const IID IID_CATIREdge;
#endif

/**
 * Interface to manage a selecting object of IREdge type.
 * <b>Role:</b> This interface allows to manage a selecting object ( @href CATIBRepAccess )<br>
 * of IREdge type. A <tt>IREdge</tt> is a set of internal edges on a 2D or 3D topological object
 * ( @href CATBody ). It is an edge between two @href CATIRSur .
 * When all the edges lying between the two surfaces are considered, the selecting object is similar to a FEdge
 * (Functional Edge). An IREdge (Internal Relimited Edge) is a connex part of a FEdge. At body's creation time, a FEdge
 * is equal to one IREdge. It can afterwards be splitted into several IREdges through topological relimitations.<br>
 * For selection facilities, only one kind of selecting element is available, since the FEdge can be obtained from 
 * each IREdge. The difference is made during Featurization ( @ref CATIFeaturize ) according to application's needs.<br>
 * To create a @href CATIMfRedge , featurization has to be done in <tt>MfRelimitedFeaturization</tt> mode.<br>
 * To create a @href CATIMfFedge , featurization has to be done in <tt>MfFunctionalFeaturization</tt> mode.<br>
 * The faces a IREdge lies between can be retrieved by the @href #GetRSur method.
 */

class ExportedByMecModItfCPP CATIREdge: public CATIREdgeAccess
{
  CATDeclareInterface;

public: 

/**
 * Returns the geometrical edges associated with the selecting object.
 */
  virtual CATLISTP(CATEdge) GetEdges() const = 0;

/**
 * Returns the adjacent surface selecting object associated with the edge selecting object.
 * @param i
 * The ith surface selecting object is returned, i can be equal to 1 or 2.
 */
  virtual CATIRSur_var GetRSur(int i) const = 0;

/**
 * Returns 1 if the edge is sharp.
 */
  virtual CATMfSharpnessType IsSharp() const = 0;

/**
 * Returns 1 if the edge is sharp.
 * @param iResolutionFeature
 * Search is performed in the topological body associated with <tt>iResolutionFeature</tt>.
 */
  virtual CATMfSharpnessType IsSharp(const CATISpecObject_var &iResolutionFeature) const = 0; 

/**
 * Returns True if the selecting object is an intersection edge.
 * @param iMode
 * Mode of Featurization, it may change result for edges internal to some features such as Join.
 * (in this case, answer may be False if Join has more than 2 operands)
 */
  virtual CATBoolean IsAIntersectionREdge(const CATMfFeaturizeMode iMode = 0) const = 0; 
};

CATDeclareHandler( CATIREdge, CATIREdgeAccess) ;

#endif
