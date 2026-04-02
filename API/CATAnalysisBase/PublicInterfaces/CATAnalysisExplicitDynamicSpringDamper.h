// COPYRIGHT LMS International 2003
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
// CATAnalysisExplicitDynamicSpringDamper.h
// Header definition of CATAnalysisExplicitDynamicSpringDamper
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATAnalysisExplicitDynamicSpringDamper_H
#define CATAnalysisExplicitDynamicSpringDamper_H
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATAnalysisExplicitEntity.h"
#include "CATAnalysisExplicitTypes.h"
#include "CATListOfCATString.h"

class CATSamIExpression;
class CATAnalysisExplicitModel;
class CATAnalysisExplicitParent;
//-----------------------------------------------------------------------

/**
 * Define a frequency variable spring damper element.
 * <p>
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitDynamicSpringDamper: public CATAnalysisExplicitEntity
{
  public:

/**
 * Default constructor.
 */
      CATAnalysisExplicitDynamicSpringDamper() ;

/**
 * Destructor.
 */
      virtual ~CATAnalysisExplicitDynamicSpringDamper() ;

/**
 * Creates a dynamic spring damper property in the field model.
 * @param iModel
 *   A pointer to the field model into which the entity will be created.
 * @see CATAnalysisExplicitModel
 */
      HRESULT CreateDynamicSpringDamper(const CATAnalysisExplicitModel  *iModel);

/**
 * Creates a dynamic spring damper property in the field model as the child of a property set.
 * @param iPropertySet
 *   The property set of the entity which will be created.
 * @see CATAnalysisExplicitParent
 */
	   HRESULT CreateDynamicSpringDamper(CATAnalysisExplicitParent &iPropertySet);

/**
 * Copy constructor.
 */
      CATAnalysisExplicitDynamicSpringDamper(const CATAnalysisExplicitDynamicSpringDamper &iExpression) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitDynamicSpringDamper(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitDynamicSpringDamper &operator = (const CATAnalysisExplicitDynamicSpringDamper &iExpression) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitDynamicSpringDamper &operator = (const CATAnalysisExplicitData &iData) ;


/**
 * Gets an Array of stiffness values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param oNbValues
 *    The number of stiffness values returned.
 * @param opStiffnessValues[oNbValues]
 *    The array of stiffness values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param opFrequencyValues[oNbValues]
 *    The array of frequency values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
	  HRESULT GetStiffnessValues (CATSamDof iDofA, CATSamDof iDofB, int & oNbValues, double *& opStiffnessValues,double *& opFrequencyValues) const;

/**
 * Gets an expression of stiffness values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param opStiffnessExpression
 *    The expression of stiffness values.
 *    This parameter must be equal to NULL when this method is called.
 *    The caller is reponsible for calling Release() on the expression if finished usage.
 */
	  HRESULT GetStiffnessValues (CATSamDof iDofA, CATSamDof iDofB, CATSamIExpression  *& opStiffnessExpression) const;

/**
 * Gets an Array of viscous damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param oNbValues
 *    The number of viscous damping values returned.
 * @param opViscousDampingValues[oNbValues]
 *    The array of viscous damping values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param opFrequencyValues[oNbValues]
 *    The array of frequency values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
	  HRESULT GetViscousDampingValues (CATSamDof iDofA, CATSamDof iDofB, int & oNbValues ,double *& opViscousDampingValues,double *& opFrequencyValues) const;

/**
 * Gets an expression of viscous damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param opViscousDampingExpression
 *    The expression of viscous damping values.
 *    This parameter must be equal to NULL when this method is called.
 *    The caller is reponsible for calling Release() on the expression if finished usage.
 */
	  HRESULT GetViscousDampingValues (CATSamDof iDofA, CATSamDof iDofB, CATSamIExpression  *& opViscousDampingExpression) const;

/**
 * Gets an Array of structural damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param oNbValues
 *    The number of structural damping values returned.
 * @param opStructuralDampingValues[oNbValues]
 *    The array of structural damping values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param opFrequencyValues[oNbValues]
 *    The array of frequency values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
	  HRESULT GetStructuralDampingValues (CATSamDof iDofA, CATSamDof iDofB, int & oNbValues, double *& opStructuralDampingValues,double *& opFrequencyValues) const;

/**
 * Gets an expression of structural damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param opStructuralDampingExpression
 *    The expression of structural damping values.
 *    This parameter must be equal to NULL when this method is called.
 *    The caller is reponsible for calling Release() on the expression if finished usage.
 */
	  HRESULT GetStructuralDampingValues (CATSamDof iDofA, CATSamDof iDofB, CATSamIExpression  *& opStructuralDampingExpression) const;

/**
 * Gets an Array of force deflection values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param oNbValues
 *    The number of force deflection values returned.
 * @param opForceDeflectionValues[oNbValues]
 *    The array of force deflection values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @param opFrequencyValues[oNbValues]
 *    The array of frequency values.
 *    This parameter must be equal to NULL when this method is called.
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
	  HRESULT GetForceDeflectionValues (CATSamDof iDofA, CATSamDof iDofB, int & oNbValues, double *& opForceDeflectionValues,double *& opFrequencyValues) const;

/**
 * Gets an expression of force deflection values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param opForceDeflectionExpression
 *    The expression of force deflection values.
 *    This parameter must be equal to NULL when this method is called.
 *    The caller is reponsible for calling Release() on the expression if finished usage.
 */
	  HRESULT GetForceDeflectionValues (CATSamDof iDofA, CATSamDof iDofB, CATSamIExpression  *& opForceDeflectionExpression) const;

	  
/**
 * Sets an Array of stiffness values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param iNbValues
 *    The number of stiffness values to set.
 * @param ipStiffnessValues[iNbValues]
 *    The array of stiffness values.
 *    A copy of the contents of the table will be made.
 * @param ipFrequencyValues[iNbValues]
 *    The array of frequency values.
 *    A copy of the contents of the table will be made.
 */
	  HRESULT SetStiffnessValues (CATSamDof iDofA, CATSamDof iDofB, int iNbValues ,const double * ipStiffnessValues,const double * ipFrequencyValues);

/**
 * Sets an expression of stiffness values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param ipStiffnessExpression
 *    The expression of stiffness values.
 *    A reference to the argument and result vectors of the expression will be internally kept.
 */
	  HRESULT SetStiffnessValues (CATSamDof iDofA, CATSamDof iDofB,const  CATSamIExpression * ipStiffnessExpression);

/**
 * Sets an Array of viscous damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param iNbValues
 *    The number of viscous damping values to set.
 * @param ipViscousDampingValues[iNbValues]
 *    The array of viscous damping values.
 *    A copy of the contents of the table will be made.
 * @param ipFrequencyValues[iNbValues]
 *    The array of frequency values.
 *    A copy of the contents of the table will be made.
 */
	  HRESULT SetViscousDampingValues (CATSamDof iDofA, CATSamDof iDofB, int iNbValues, const double * ipViscousDampingValues,const double * ipFrequencyValues);

/**
 * Sets an expression of viscous damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param ipViscousDampingExpression
 *    The expression of viscous damping values.
 *    A reference to the argument and result vectors of the expression will be internally kept.
 */
	  HRESULT SetViscousDampingValues (CATSamDof iDofA, CATSamDof iDofB,const  CATSamIExpression  * ipViscousDampingExpression);

/**
 * Sets an Array of structural damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param iNbValues
 *    The number of structural damping values to set.
 * @param ipStructuralDampingValues[iNbValues]
 *    The array of structural damping values.
 *    A copy of the contents of the table will be made.
 * @param ipFrequencyValues[iNbValues]
 *    The array of frequency values.
 *    A copy of the contents of the table will be made.
 */
	  HRESULT SetStructuralDampingValues (CATSamDof iDofA, CATSamDof iDofB, int iNbValues, const double * ipStructuralDampingValues,const double * ipFrequencyValues);

/**
 * Sets an expression of structural damping values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param ipStructuralDampingExpression
 *    The expression of structural damping values.
 *    A reference to the argument and result vectors of the expression will be internally kept.
 */
	  HRESULT SetStructuralDampingValues (CATSamDof iDofA, CATSamDof iDofB,const  CATSamIExpression  * ipStructuralDampingExpression);

/**
 * Sets an Array of force deflection values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param iNbValues
 *    The number of force deflection values to set.
 * @param ipForceDeflectionValues[iNbValues]
 *    The array of force deflection values.
 *    A copy of the contents of the table will be made.
 * @param ipFrequencyValues[iNbValues]
 *    The array of frequency values.
 *    A copy of the contents of the table will be made.
 */
	  HRESULT SetForceDeflectionValues (CATSamDof iDofA, CATSamDof iDofB, int iNbValues ,const double * ipForceDeflectionValues,const double * ipFrequencyValues);

/**
 * Sets an expression of force deflection values.
 * @param iDofA
 *    The Dof at the A side of the Element.
 * @param iDofB
 *    The Dof at the B side of the Element.
 * @param ipForceDeflectionExpression
 *    The expression of force deflection values.
 *    A reference to the argument and result vectors of the expression will be internally kept.
 */
	  HRESULT SetForceDeflectionValues (CATSamDof iDofA, CATSamDof iDofB,const  CATSamIExpression  * ipForceDeflectionExpression);


  private :
    CATSamExplicitPtr  _ExpExpression;
	  CATListOfCATString _ExprTypeList;

	  HRESULT SetValues (CATString& iExprType,CATSamDof iDofA, CATSamDof iDofB, int iNbValues ,const double * ipValues,const double * ipFrequencyValues);
    HRESULT SetValues (CATString& iExprType,CATSamDof iDofA, CATSamDof iDofB,const  CATSamIExpression  * ipExpression);
    HRESULT GetValues (CATString& iExprType,CATSamDof iDofA, CATSamDof iDofB, int & oNbValues, double *& opValues,double *& opFrequencyValues) const;
    HRESULT GetValues (CATString& iExprType,CATSamDof iDofA, CATSamDof iDofB, CATSamIExpression  *& opExpression) const;

	  int GetExprTypeIndex(CATString& iExprType,CATSamDof iDofA, CATSamDof iDofB) const;

   protected :
    void    Reset() ;
    HRESULT Init(const CATAnalysisExplicitData &iData) ;

};

//-----------------------------------------------------------------------

#endif
