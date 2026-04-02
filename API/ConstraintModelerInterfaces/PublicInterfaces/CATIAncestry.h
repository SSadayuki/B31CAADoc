#ifndef CATIAncestry_h
#define CATIAncestry_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATConstraintModelerItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATIAncestry_var;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATConstraintModelerItf IID IID_CATIAncestry;
#else
extern "C" const IID IID_CATIAncestry;
#endif

/**
 * Interface to retrieve the ancestries of a feature.
 * <b>Role</b>: This interface allows users to retrieve the ancestries of a feature.
 * <br> A feature named F can be the result of a computation named C of different inputs:
 * <br> &nbsp  F = C ( I1, I2, I3, ...)
 * <br> A feature's ancestries is the subset of inputs that satisfy the following criteria:
 * <br> applying a specified transformation to the feature's ancestries and the computation 
 * <br> which generates the feature returns the same result as applying the same transformation
 * <br> directly to the feature.
 * <br> This can be shown with the following formula: for a transformation named T,
 * <br> &nbsp  T(F) = C ( I1,T(I2),T(I3), ...)
 * <br> &nbsp  Here, I2 and I3 are the feature's ancestries.
 *
 * @see CATIMovable
 */

class ExportedByCATConstraintModelerItf CATIAncestry: public CATBaseUnknown
{
   CATDeclareInterface;

public :

/**
 * Returns the list of the current feature's ancestries.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetAncestry() const=0;

/**
 * Returns the list of the current feature's ancestries.
 */
   virtual HRESULT  GetAncestry(CATLISTV(CATBaseUnknown_var)& oList) const=0;
};

CATDeclareHandler(CATIAncestry, CATBaseUnknown);

#endif
