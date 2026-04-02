#ifndef CATICstFactory_h
#define CATICstFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIBloc.h"
#include "CATICst.h"
#include "CATCke.h"
#include "CATICkeParm.h"
#include "CATMfPossibleCst.h"
#include "CATCstDefs.h"

#include "MF0CST.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMF0CST IID IID_CATICstFactory;
#else
extern "C" const IID IID_CATICstFactory;
#endif

/**
 * @deprecated V5R15
 * Use CATConstraintServices replacing APIs.
 * Interface for constraint creation.
 * <b>Role</b>: This interface is used for constraint creation. 
 * @see CATMfPossibleCst, CATICst
 */
class ExportedByMF0CST CATICstFactory: public CATBaseUnknown
{
   CATDeclareInterface;

public :

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as enumeration.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iValue
 * The first numerical value as literal.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateConstraint(
      const CATCstType iType,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const CATICkeParm_var& iValue,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained   
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as enumeration.
 * @param iElem1
 * The first element.
 * @param iValue
 * The first numerical value as double.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateStdConstraint(
      const CATCstType iType,
      const CATBaseUnknown_var& iElem1,   
      const double iValue = 0.,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained   
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as enumeration.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iValue
 * The first numerical value as double.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateStdConstraint(
      const CATCstType iType,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const double iValue = 0.,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained   
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as enumeration.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iElem3
 * The third element.
 * @param iValue
 * The first numerical value as double.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateStdConstraint(
      const CATCstType iType,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const CATBaseUnknown_var& iElem3,   
      const double iValue = 0.,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained   
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as CATICstData.
 * @param iElem1
 * The first element.
 * @param iValue
 * The first numerical value as literal.
 * @param iMode
 * The mode.
 */

   virtual CATICst_var CreateUserConstraint(
      const CATBaseUnknown_var& iType,
      const CATBaseUnknown_var& iElem1,   
      const CATICkeParm_var& iValue,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as CATICstData.
 * @param iElem1
 * The first element.
 * @param iValue
 * The first numerical value as double.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateUserConstraint(
      const CATBaseUnknown_var& iType,
      const CATBaseUnknown_var& iElem1,   
      const double iValue = 0.,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as CATICstData.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iValue
 * The first numerical value as literal.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateUserConstraint(
      const CATBaseUnknown_var& iType,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const CATICkeParm_var& iValue,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as CATICstData.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iValue
 * The first numerical value as double.
 * @param iMode 
 * The mode.
 */
   virtual CATICst_var CreateUserConstraint(
      const CATBaseUnknown_var& iType,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const double iValue = 0.,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType 
 * The type as CATISpecObject.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iElem3
 * The third element.
 * @param iValue
 * The first numerical value as literal.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateUserConstraint(
      const CATBaseUnknown_var& iType,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const CATBaseUnknown_var& iElem3,   
      const CATICkeParm_var& iValue,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Creates a constraint.
 * @param iType
 * The type as CATICstData.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element.
 * @param iElem3
 * The third element.
 * @param iValue
 * The first numerical value as double.
 * @param iMode
 * The mode.
 */
   virtual CATICst_var CreateUserConstraint(
      const CATBaseUnknown_var& iTtype,
      const CATBaseUnknown_var& iElem1,   
      const CATBaseUnknown_var& iElem2,   
      const CATBaseUnknown_var& iElem3,   
      const double iValue = 0.,   
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @deprecated V5R15
 * use CATConstraintServices::CreateConstraintIn.
 * Create a constraint.
 * @param iDef
 * The constraint definition.
 * @iMode
 * The mode.
 */
   virtual CATICst_var CreatePossibleConstraint(
      const CATMfPossibleCst* iDef,
      const CATCstMode iMode = CATCstVal_Mode_Constrained
      )=0;

/**
 * @nodoc
 */
   virtual CATIBloc_var BuildBloc(CATBaseUnknown_var elem)=0;

/**
 * @nodoc
 */
   virtual CATIBloc_var BuildBlocAncestry(CATBaseUnknown_var elem)=0;

/**
 * @nodoc
 */
   virtual CATIBloc_var BuildBlocs(
      int itype,
      CATBaseUnknown_var elem1,
      CATBaseUnknown_var elem2,
      CATBaseUnknown_var elem3,
      CATIBloc_var &bloc1,
      CATIBloc_var &bloc2,
      CATIBloc_var &bloc3
      )=0;

/**
 * @nodoc
 */
   virtual void LinkCst(
      CATICst_var cst,
      CATCstMode mode,
      CATBaseUnknown_var elem1,
      CATBaseUnknown_var elem2,
      CATBaseUnknown_var elem3
      )=0;

private:
};

CATDeclareHandler(CATICstFactory, CATBaseUnknown);

#endif
