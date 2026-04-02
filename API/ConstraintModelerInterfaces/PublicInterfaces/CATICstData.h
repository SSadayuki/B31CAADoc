#ifndef CATICstData_h
#define CATICstData_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATISpecObject.h"

#include "CATFeatureType.h"
#include "CATListOfCATUnicodeString.h"

#include "CATCstDefs.h"

class CATICst_var;
class CATUnicodeString;

#include "CATConstraintModelerItf.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATConstraintModelerItf IID IID_CATICstData;
#else
extern "C" const IID IID_CATICstData;
#endif



/**
 * @deprecated V5R15
 * do not use
 * Interface for constraint type.
 * <b>Role</b>: This interface is used to manage types of constraint.
 * @see CATICst, CATICstFactory
 */
class ExportedByCATConstraintModelerItf CATICstData: public CATBaseUnknown
{
   CATDeclareInterface;

public :

/**
 * @nodoc
 */
   virtual CATISpecObject_var GetObjectPrimaryType() const=0;

/**
 * Returns the number of elements.
 */
   virtual int GetNbParents() const=0;

/**
 * Returns the list of specification attributes.
 * @param iType1
 * The type of the first element.
 * @param iType2
 * The type of the second element.
 */
   virtual CATListOfCATUnicodeString ListAttrNames(CATFeatureType iType1,
              CATFeatureType iType2) const =0;

/**
 * Returns the list of magnitudes of the numerical values.
 */
   virtual CATListOfCATUnicodeString ListLiteralMagnitudes() const =0;

/**
 * Returns the list of names of the numerical values.
 */
   virtual CATListOfCATUnicodeString ListLiteralNames() const =0;

/**
 * @nodoc
 */
   virtual CATCstElemValidity ValidElements(
      const CATLISTV(CATBaseUnknown_var) liste,
      const int solve) const =0;

private:
};

CATDeclareHandler(CATICstData, CATBaseUnknown);

#endif
