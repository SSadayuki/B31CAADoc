// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIOptValuesAndDerivativesAccess.h
//
//===================================================================

#ifndef CATOptValuesAndDerivativesAdapter_H
#define CATOptValuesAndDerivativesAdapter_H
/** 
 * @CAA2Level L1
 * @CAA2Usage U2 
 */

// OptimizationInterfaces
#include "CATIOptValuesAndDerivativesAccess.h"
#include "CATListOfInt.h"
#include "CATListOfCATString.h"

/**   
 * CAA Adapter to CATIOptValuesAndDerivativesAccess Interface.
 * <b>Role</b>: This class should be derived to implement features extension to CATIOptValuesAndDerivativesAccess.<br>
 * CATIOptValuesAndDerivativesAccess is the interface used by the algorithms of PEO to indentify and use features that provide an access to their derivatives.<br>
 * @see CATIOptValuesAndDerivativesAccess
 */
class ExportedByOptimizationItfCPP CATOptValuesAndDerivativesAdapter : public CATBaseUnknown
{

  public:

	CATOptValuesAndDerivativesAdapter();
	virtual ~CATOptValuesAndDerivativesAdapter();

	/**
	* Retreives the values output by the feature.
	* @param oOutputList The list of values output by the feature. Note that the size of the list is given by the method @href #GetNumberOfValues.
	* @return SUCCEEDED when all values are meaningful.
	*/
	virtual HRESULT  GetOutputValues( double*& oOutputList);

	/**
	* Retrieves the status of each output.
	* @param oListThe list of status.
	* @return SUCCEEDED when all values are meaningful.
	*/
	virtual HRESULT  GetOutputErrors( CATListOfInt& oList);

	/**
	* Specifies if the feature implementing this interface may output a different number of values after each call to GetOutputValues().
	* By default returns yes since it is the most secure mode of using the lists of results.
	* @result 0 No, 1 yes, 2 unknown. 
	* @return oAnswer 
	*/
	virtual HRESULT IsNumberOfOutputsVariable(int& oAnswer);


	/**
	* Specifies the parameters with respect to the derivatives of the object (local sensor or else) are calculated.
	* @param iParamList The list of parameters (variables of the derivative).
	* @returns SUCCEEDED when all derivatives CAN BE COMPUTED, E_FAIL if at least one derivative CANNOT BE COMPUTED, E_NOTIMPL if derivatives are not supported.
	*/
	virtual HRESULT  SetParameters( CATLISTV(CATBaseUnknown_var) *  iParamList);
	

	/**
	* Tests the existence of the derivatives of the feature implementing this interface with respect to the parameters passed in argument.
	* Used to test which derivative is missing in case of E_FAIL return by the previous method.
	* @param oExistence A list of int (0 for no existence, 1 for existence).
	* @param oNumberOfSucceededTests Number of 1 in the returned list.
	* @returns SUCCEEDED when all derivatives CAN BE COMPUTED, E_FAIL if one derivative CANNOT BE COMPUTED, E_NOTIMPL if derivatives are not supported.
	*/
	virtual HRESULT TestDerivativesExistence(CATListOfInt& oExistence, int& oNumberOfSucceededTests) const;
	
	/**
	* Returns the first order derivatives with respect to the variables.
  * Those variables are specified with the @href #SetParameters method of the feature implementing this interface.
	* Note that since a local sensor can output many different values (one for each node of the mesh covered by the sensor)
	* each corresponding to a constraint, the derivatives are output in a list of list. Each sub list correspond to the gradient
	* of one constraint with respect to all the variables.   
	* @param oFirstOrderDerivatives  { {dLSNode1/dx1, dLSNode2/dx1,...}, {dLSNode1/dx2, dLSNode2/dx2,...}, ...., }
	* If there is one node in the local area of the sensor { {dLSNode1/dx1}, {dLSNode1/dx2}, . . . , {dLSNode1/dxn} }.
	* Where x1, . . . , xn are the parameterswith respcet to which the derivatives are calculated (passed through the SetParameters method).
	* @return SUCCEEDED when all derivatives where computed correctly, E_FAIL when one derivative fails, E_NOTIMPL if derivatives are not supported.
	*/	
	virtual HRESULT  GetFirstOrderDerivative(double*& oFirstOrderDerivatives) const; 
	
	/**
	* Returns the second order derivatives with respect to the variables.
  * Those variables are specified with the @href #SetParameters method of the feature implementing this interface.
	* Note that since a local sensor can output many different values (one for each node of the mesh covered by the sensor)
	* each corresponding to a constraint, the derivatives are output in a list of list. Each sub list correspond to the  
	* Hessian matrix stored row by row. 
	* @param oSecondOrderDerivatives. A pointer toward a vector :
	* { { {dLSNode1/dx1dx1, dLSNode1/dx1dx2,...}, 
	*	{dLSNode1/dx2dx1, dLSNode1/dx2dx2,...}, ...., },
	* { {dLSNode2/dx1dx1, dLSNode2/dx1dx2,...}, {dLSNode2/dx2dx1, dLSNode2/dx2dx2,...}, ...., }, .... }.
	* @return SUCCEEDED when all derivatives where computed correctly, E_FAIL when one derivative fails, E_NOTIMPL if derivatives are not supported.
	*/
	virtual HRESULT GetSecondOrderDerivative(double*& oSecondOrderDerivatives) const;

	/**
	* Sets the first order derivatives with respect to the variables.
  * Those variables are specified with the @href #SetParameters method of the feature implementing this interface.
	* of the feature implementing this interface.
	* Note that since a local sensor can output many different values (one for each node of the mesh covered by the sensor)
	* each corresponding to a constraint, the derivatives are output in a list of list. Each sub list correspond to the gradient
	* of one constraint with respect to all the variables.   
	* @param iFirstOrderDerivatives  a pointer toward a vector { {dLSNode1/dx1, dLSNode2/dx1,...}, {dLSNode1/dx2, dLSNode2/dx2,...}, ...., }
	* If there is one node in the local area of the sensor { {dLSNode1/dx1}, {dLSNode1/dx2}, . . . , {dLSNode1/dxn} }.
	* Where x1, . . . , xn are the parameters with respect to which the derivatives are calculated (passed through the @href #SeParameters method).
	* @return SUCCEEDED when all derivatives where computed correctly, E_FAIL when one derivative fails, E_NOTIMPL if derivatives are not supported.
	*/	
	virtual HRESULT  SetFirstOrderDerivative(double* iFirstOrderDerivatives) const; 
	
	/**
	* Sets the second order derivatives with respect to the variables.
  * Those variables are specified with the @href #SetParameters method) of the feature implementing this interface.
	* of the feature implementing this interface.
	* Note that since a local sensor can output many different values (one for each node of the mesh covered by the sensor)
	* each corresponding to a constraint, the derivatives are output in a list of list. Each sub list correspond to the  
	* Hessian matrix stored row by row. 
	* @param oSecondOrderDerivatives. A pointer toward a vector :
	* { { {dLSNode1/dx1dx1, dLSNode1/dx1dx2,...}, 
	*	{dLSNode1/dx2dx1, dLSNode1/dx2dx2,...}, ...., },
	* { {dLSNode2/dx1dx1, dLSNode2/dx1dx2,...}, {dLSNode2/dx2dx1, dLSNode2/dx2dx2,...}, ...., }, .... }.
	* @return SUCCEEDED when all derivatives where computed correctly, E_FAIL when one derivative fails, E_NOTIMPL if derivatives are not supported.
	*/
	virtual HRESULT SetSecondOrderDerivative(double* iSecondOrderDerivatives) const;
	/**
	* Returns the second order derivatives with respect to the variables.
  *(Given by the @href #SetParameters method).
	* of the feature implementing this interface.
	* @return SUCCEEDED when all derivatives where computed correctly, E_FAIL when one derivative fails, E_NOTIMPL if derivatives are not supported.
	* @param oNthOrderDerivatives a one dim array of values.
	* @param iOrder the order of the derivatives (> 2).
	*/		
	HRESULT GetNthOrderDerivative(double*& oNthOrderDerivatives, int iOrder) const;

	/**
	* Returns the parameters involved in the calculus of the derivative.
  *(Given by the @href #SetParameters method).
	* @return SUCCEEDED when the parameters has been set. E_FAIL when the list is empty.
	*/
	virtual HRESULT  GetParameters( CATLISTV(CATBaseUnknown_var) *&  oParamList) const; 
	
	/**
	* Specifies the parameters variations for the calculus of the derivative.
	* If nothing is specified it is set to 1/1000 of the current values of the parameter.
	* @return SUCCEEDED if the delta is accepted, E_FAIL otherwise.
	*/
	virtual HRESULT  SetParametersDelta(const CATListOfDouble& iDeltas);

	/**
	* Gets the parameters variations for the calculus of the derivative.
	* @return S_OK if the list has been filled for each parameter, E_FAIL otherwise.
	*/
	virtual HRESULT  GetParametersDelta( CATListOfDouble& oDeltas) const;

	/**
	* Returns the number of values actually output by this sensor. Beware: this number can change anytime if the model is remeshed.
	* Hence the number of list of values output by GetFirstOrderDerivatives and GetSecondOrderDerivatives can vary accordingly. However the number
	* of values inside each sub-list is definitely set when the function SetParameters is called and correspond to the number of parameters passed
	* in argument.
	*/
	virtual int GetNumberOfValues( ) const;  

	/**
	* Returns the number of parameters involved in the calculus of the derivative. 
	* @param oNumberOfParameters The number of parameters with respect to which the deirvatives must be calculated.
	* @return S_OK when the parameters has been set. E_FAIL when the list is empty.
	*/
	virtual HRESULT  GetNumberOfParameters( int& oNumberOfParameters) const; 

	/**
	* Returns the name of the magnitude used by the underlying contraint.
	* MASS, LENGTH, ENERGY, ...
	*/
	virtual void GetMagnitude(CATUnicodeString& oNameOfTheMagnitude ) const;

	/**
	* Returns an error message if the tests of the existence of the derivatives has failed.
	* @param oErrorMessages A list of CATString that contains the error messages.
	* @returns SUCCEEDED when at least one message exists.  E_FAIL if the list is empty.
	*/
	virtual HRESULT GetDerivativeErrorMessages(CATListOfCATString& oErrorMessages) const;

	/**
	* Returns an error message if the method GetOutputValues has failed.
	* @param oErrorMessages A list of CATString that contains the error messages.
	* @returns SUCCEEDED when at least one message exists.  E_FAIL if the list is empty.
	*/
	virtual HRESULT GetOutputErrorMessages(CATListOfCATString& oErrorMessages) const;

};
#endif
