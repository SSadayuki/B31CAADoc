/* -*-c++-*- */

#ifndef _CATIExchangeLoop_H
#define _CATIExchangeLoop_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002 - 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATListOfValCATIExchangeEdge.h"
#include "CATListOfValCATIExchangeEdgeUse.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeLoop;
#else
extern "C" const IID IID_CATIExchangeLoop;
#endif

/**
 * Interface to exchange loops.
 * <b>Role</b>: This interface is dedicated to get loops properties.
 * <br>A loop is a mono-dimensional closed edge-made contour.
 * <br>Available from CATIA V5R10.
 * <br>Modified CATIA V5R15.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeLoop : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves TRUE if the loop is an outer one.
 * @param oIsOuter
 *				TRUE if the loop is an outer one, FALSE otherwise.
 */
  virtual HRESULT IsOuterLoop(short *oIsOuter) const = 0;

/**
 * Returns a list of all edgeuses which make up the loop.
 */
  virtual CATLISTV(CATIExchangeEdgeUse_var)* EnumEdgeUses() const = 0;

/**
 * Returns a list of all edges which make up the loop.
 */ 
  virtual CATLISTV(CATIExchangeEdge_var)* EnumEdges() const = 0;

/**
 * Retrieves the preferred representation of the loop.
 * It can be 2D, 3D or unspecified according to sender's preference.
 * <br><b>To be called after <tt>AreThereTwoRepresentations</tt></b>
 * @param oChoice
 *				Get the preferred representation.
 * <br><b>Legal values</b>:
 * <br>						0 = not specified, indifferent.
 * <br>						1 = the 2D PCurve is preferred (method GetPCurve of the edgeuse).
 * <br>						2 = the 3D Curve  is preferred (method GetCurve of the edge).
 */ 
  virtual HRESULT GetPreferredRepresentation(int* oChoice) = 0;


/**
 * Checks if both representations (2D and 3D) are available.
 * (Method Available from CATIA V5R15.)
 *
 * @param oBothRepresentations
 *		Gives available representations for loops.
 * <br><b>Legal values</b>:
 * <br> <tt> TRUE   </tt>   2D and 3D Representations are available
 * <br> <tt> FALSE  </tt>   Only one Representation is available (given by GetPreferredRepresentation --> <tt>1</tt> for 2D or <tt>2</tt> for 3D).
 *
 * @return
 *      Returns the success of the computation.
 * <br><b>Legal values</b>:
 * <br> <tt> E_FAIL </tt>  if it is impossible to determinate available representations
 * 	                  (for ex: there is neither 2D nor 3D)
 * <br> <tt> S_OK   </tt>  otherwise (successful)
 */ 
  virtual HRESULT AreThereTwoRepresentations ( CATBoolean* oBothRepresentations ) = 0; 


};
CATDeclareHandler(CATIExchangeLoop,CATBaseUnknown);

#endif
