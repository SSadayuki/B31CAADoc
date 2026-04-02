// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
#ifndef CATIMfgSetup_H
#define CATIMfgSetup_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"
#include "CATIMfgActivity.h"
#include "CATBaseUnknown.h"
#include "CATILinkableObject.h"
#include "CATLISTV_CATBaseUnknown.h" 

class CATMathPoint;
class CATMathTransformation;
class CATMathAxis;
class CATMathPlane;
class CATMathVector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgSetup ;
#else
extern "C" const IID IID_CATIMfgSetup ;
#endif

/**
 * Interface to manage Part Operation (Setup).
 * <b>Role</b>: Manage the information related to the Part Operation object like associated
 * resource, product and machining axis system.
 */
class ExportedByMfgItfEnv CATIMfgSetup : public CATIMfgActivity
{
  CATDeclareInterface ;  

  public:

  /**
   * Associates a product to the Part Operation.
   * @param iProduct The product to be associated.
   *                 If iProduct is NULL_var, the previously associated product is removed.
   */
  virtual HRESULT SetProduct    (const CATBaseUnknown_var& iProduct) =0;

  /**
   * Retrieves the product associated to the Part Operation.
   * @param oProduct The associated product.
   *             If we are in File Based context, oProduct is a reference
   *             If we are in Manufacturing Hub context, oProduct is an instance
   */
  virtual HRESULT GetProduct    (CATBaseUnknown_var& oProduct) =0;

  /**
   * Retrieves the product associated to the Part Operation.
   * @param oProduct The associated product. It is an instance
   */
  virtual HRESULT GetProductInProductList (CATBaseUnknown_var& oProduct) =0;

  /**
   * Associates a Machining Axis System feature to the Part Operation.
   * @param iMachiningAxis The Machining Axis System to be associated
   */
  virtual HRESULT SetMachiningAxis    (const CATBaseUnknown_var& iMachiningAxis) =0;

  /**
   * Retrieves the Machining Axis System feature associated to the Part Operation.
   * @param oMachiningAxis The associated Machining Axis System
   * @param iSpindle Do not use this parameter: keep the default value.
   */
  virtual HRESULT GetMachiningAxis    (CATBaseUnknown_var& oMachiningAxis, const CATBaseUnknown_var &iSpindle=NULL_var) =0;

  /**
   * Retrieves the mathematical axis system associated to the Part Operation.
   * This is the mathematical definition of the Machining Axis System.
   * @param oMachiningAxis The associated mathematical axis system
   * @param iSpindle Do not use this parameter: keep the default value.
   * @see CATMathAxis
   */
  virtual HRESULT GetMachiningAxisDefinition    (CATMathAxis& oMachiningAxis, const CATBaseUnknown_var &iSpindle=NULL_var) =0;

  /**
   * Computes the mathematical transformations to switch from the machining axis system
   * to the absolute axis sytem and vice versa.
   * @param oFromAbsoluteToMachiningAxis The computed mathematical transformation to switch from
   *                                     the absolute axis system to the machining axis system
   * @param oFromMachiningAxisToAbsolute The computed mathematical transformation to switch from
   *                                     the machining axis system to the absolute axis system
   * @param iSpindle Do not use this parameter: keep the default value.
   * @see CATMathTransformation
   */
  virtual HRESULT GetMachiningContext (CATMathTransformation& oFromAbsoluteToMachiningAxis,
              				   CATMathTransformation& oFromMachiningAxisToAbsolute,
                                       const CATBaseUnknown_var &iSpindle=NULL_var)=0;

  /**
   * Retrieves the children of the product associated to the Part Operation.
   * @param iInterName To get only children answering to interface iInterName
   * @param oList The result list.
   */
  virtual HRESULT GetAllChildren (const CATClassId &iInterName,CATListValCATBaseUnknown_var& oList) =0;

  /** 
   * Do not use. Use @href #GetToolChangeLocation (CATMathPoint&,CATMathVector&,CATBoolean&,CATMathTransformation&) instead.
   */
  virtual HRESULT GetToolChangeLocation (CATMathPoint& oPoint) =0; 

  /**
   * Associates a resource to the Part Operation.
   * The previously associated resource is removed.
   * @param iResource The resource to be associated.
   * @return E_INVALIDARG if iResource is NULL_var or not a Delmia machine.
   */
  virtual HRESULT SetResource    (const CATBaseUnknown_var& iResource) =0;

  /**
   * Retrieves the resource on the Part Operation.
   * There can be only one resource per Part Operation.
   * @param oResource The resource associated to the Part Operation.
   * @return S_FALSE if no resource is associated to the Part Operation.
   */
  virtual HRESULT GetResource    (CATBaseUnknown_var& oResource) =0;
  
  /**
   * Removes the resource associated to the Part Operation.
   * The resource is also removed from the document.
   * @param iResource The removed resource.
   * @return E_INVALIDARG if iResource is NULL_var.
   */
  virtual HRESULT RemoveResource (const CATBaseUnknown_var& iResource) =0;

  /**
   * Associates a machine to the Part Operation.
   * The previously associated machine is removed.
   * @param iMachine The machine to be associated.
   * @return E_INVALIDARG if iMachine is NULL_var.
   */
  virtual HRESULT SetMachine    (const CATBaseUnknown_var& iMachine) =0;

  /**
   * Removes the machine associated to the Part Operation.
   * The machine is not removed from the document.
   * @param iMachine The removed machine.
   * @return E_FAIL if iMachine is NULL_var.
   */
  virtual HRESULT RemoveMachine (const CATBaseUnknown_var& iMachine) =0;

  /**
   * Retrieves the machine on the Part Operation.
   * There can be only one machine per Part Operation.
   * @param oMachine The machine associated to the Part Operation.
   * @return S_FALSE if no machine is associated to the Part Operation.
   */
  virtual HRESULT GetMachine    (CATBaseUnknown_var& oMachine) =0;

  /**
   * Retrieves the machine on the Part Operation and the transformation
   * to switch from the absolute axis system to the machining axis sytem.
   * @param oMachine The machine associated to the Part Operation.
   * @param oFromAbsoluteToSetup The computed mathematical transformation to switch from
   *                             the absolute axis system to the machining axis system
   * @return S_FALSE if no machine is associated to the Part Operation.
   */
  virtual HRESULT GetMachineAndContext (CATBaseUnknown_var& oMachine,
	                                  CATMathTransformation& oFromAbsoluteToSetup,
                                        const CATBaseUnknown_var &iSpindle=NULL_var) =0;

  /**
   * Computes the mathematical transformations to switch from the machining axis system
   * to the absolute axis sytem and vice versa.
   * @param oFromAbsoluteToSetup The computed mathematical transformation to switch from
   *                             the absolute axis system to the machining axis system
   * @param oFromSetupToAbsolute The computed mathematical transformation to switch from
   *                             the machining axis system to the absolute axis system
   * @param iSpindle Do not use this parameter: keep the default value.
   * @see CATMathTransformation
   */
  virtual HRESULT GetContext (CATMathTransformation& oFromAbsoluteToSetup,
              				  CATMathTransformation& oFromSetupToAbsolute,
                                       const CATBaseUnknown_var &iSpindle=NULL_var) =0;

  /**
   * Retrieves the safety plane associated to the Part Operation.
   * @param oSafetyPlane The safety plane.
   * @return E_FAIL if the safety plane is not defined.
   */
  virtual HRESULT GetSafetyPlane       (CATBaseUnknown_var& oSafetyPlane) =0;

  /**
   * Retrieves the mathematical definition of the safety plane associated to the Part Operation.
   * @param oPlane The mathematical safety plane.
   * @return E_FAIL if the safety plane is not defined.
   * @see CATMathPlane
   */
  virtual HRESULT GetSafetyPlaneResult (CATMathPlane& oPlane)=0;

  /**
   * Retrieves the traverse box planes associated to the Part Operation.
   * @param oTraverseBoxPlanes The traverse box planes.
   *        Use @href CATIMfgAgregate on oTraverseBoxPlanes to access each plane.
   * @return E_FAIL if the traverse box planes is not defined.
   */
  virtual HRESULT GetTraverseBoxPlanes  (CATBaseUnknown_var& oTraverseBoxPlanes) =0;

  /**
   * Retrieves the transition planes associated to the Part Operation.
   * @param oTransitionPlanes The transition planes.
   *        Use @href CATIMfgAgregate on oTransitionPlanes to access each plane.
   * @return E_FAIL if the transition planes is not defined.
   */
  virtual HRESULT GetTransitionPlanes   (CATBaseUnknown_var& oTransitionPlanes) =0;

  /**
   * Retrieves the rotary planes associated to the Part Operation.
   * @param oRotaryPlanes The rotary planes.
   *        Use @href CATIMfgAgregate on oRotaryPlanes to access each plane.
   * @return E_FAIL if the rotary planes is not defined.
   */
  virtual HRESULT GetRotaryPlanes       (CATBaseUnknown_var& oRotaryPlanes) =0;

  /** Use @href #SetIPMMainBodies instead. */
  //virtual HRESULT SetIPMMainBody (const CATILinkableObject_var& iBody) =0;

  /** Do not use. Use @href #GetIPMMainBodies instead. */
  virtual HRESULT GetIPMMainBody (CATILinkableObject_var& oBody) =0;

  /** Use @href #RemoveIPMMainBodies instead. */
  //virtual HRESULT RemoveIPMMainBody () =0;

  /**
   * Associates one In Process Model Body to the Part Operation.
   * Several In Process Bosies can be associated, they are stored in a list.
   * @param iBody The body to be added to the In Process Bodies list.
   * @param iIndex The position where iBody is to be added
   *        <br><b>Legal values</b>: This position must be between 0 and the number of
   *                                 bodies in the list.
   *                             <br>If 0 (default value), the body is appended at the end of the list.  
   */
  virtual HRESULT SetIPMMainBodies(const CATILinkableObject_var& iBody, int iIndex=0) =0;

  /**
   * Retrieves one In Process Model Body at a given position.
   * @param iBody The retrieved body.
   * @param iIndex The position where oBody is
   *        <br><b>Legal values</b>: This position must be between 1 and the number of
   *                                 bodies in the list.
   *                             <br>If 0, .  
   */
  virtual HRESULT GetIPMMainBodies (CATILinkableObject_var& oBody, int iIndex=0) =0;

  /**
   * Gets the number of In Process Model Bodies associated to the Part Operation.
   * @param oNumber The number of In Process Model Bodies
   */
  virtual HRESULT GetNumberOfIPMMainBodies(int &oNumber) = 0;

  /**
   * Removes an In Process Model Body at a given index.
   * @param iIndex The position at which the body is to be removed
   *        <br><b>Legal values</b>: This position must be between one and the number
   *                                 of bodies in the list. 
   */
  virtual HRESULT RemoveIPMMainBodies(int iIndex) = 0;

  /**
   * Removes an In Process Model Body.
   * @param ispIPMMainBodyToRemove The body to be removed
   * @return S_FALSE if there is no In Process Body, or if ispIPMMainBodyToRemove is not in the list.
   */
  virtual HRESULT RemoveIPMMainBodies(const CATILinkableObject_var &ispIPMMainBodyToRemove) = 0;

  /**
   * Removes all the In Process Model Bodies.
   */
  virtual HRESULT RemoveAllIPMMainBodies () =0;

  /**
   * Sets the actual stock computation mode.
   * @param iMode the actual stock mode.
   *        <br><b>Legal values</b>: 1 if the stock is to be recomputed automatically for each Machining Operation,
   *                                 0 otherwise.
   * @return E_INVALIDARG if iMode is different from 0 or 1.
   */
  virtual HRESULT SetActualStockMode (const int iMode) =0;

  /**
   * Gets the actual stock computation mode.
   * @param oMode the actual stock mode.
   *        <br><b>Legal values</b>: 1 if the stock is recomputed automatically for each Machining Operation,
   *                                 0 otherwise.
   */
  virtual HRESULT GetActualStockMode (int &oMode) =0;

  /**
   * Sets the top plane direction inversion value in order to determine the traverse box position
   * relatively to the top plane.
   * @param iMode 
   *        <br><b>Legal values</b>: 1 if the top plane direction is to be inverted, 0 otherwise
   * @return E_INVALIDARG if iMode is different from 0 or 1.
   */
  virtual HRESULT SetTopPlaneDirectionInversion (const int iMode) =0;

  /**
   * Gets the top plane direction inversion value.
   * @param oMode 
   *        <br><b>Legal values</b>: 1 if the top plane direction has been inverted, 0 otherwise
   */
  virtual HRESULT GetTopPlaneDirectionInversion (int &oMode) =0;

  /**
   * Gets the setup parameters defining the home point.
   * WARNING : The values of these parameters are defined in the Part Operation axis system.
   * @param oHomePointXYZListParms
   *            List of 3 @href CATICkeParm refering to the X, Y, Z coordinates
   *            of home point.     
   * @param oHomePointIJKListParms
   *            List of 3 @href CATICkeParm refering to the I, J, K coordinates
   *            of tool axis vector on the home point.     
   * @param oUseMachineHomePoint
   *            TRUE if the parameters have been copied from the machine, 
   *            FALSE otherwise.
   */
  virtual HRESULT GetHomePoint (CATListValCATBaseUnknown_var &oHomePointXYZListParms,
						        CATListValCATBaseUnknown_var &oHomePointIJKListParms, 
						        CATBoolean &oUseMachineHomePoint)  =0;

  /**
   * Gets the setup parameters defining the Tool Change point.
   * <br><b>WARNING</b> : The values of these parameters are defined in the Part Operation axis system.
   * @param oToolChangeXYZListParms
   *            List of 3 @href CATICkeParm refering to the X, Y, Z coordinates
   *            of tool change point.     
   * @param oFromMachine
   *            TRUE if the parameters have been copied from the machine.
   *            In this case the tool length is NOT take into account in the point definition.
   *     <br>   FALSE otherwise, and the tool change point is the tip point.
   */
  virtual HRESULT GetToolChangeLocation (CATListValCATBaseUnknown_var &oToolChangeXYZListParms,
						CATBoolean &oFromMachine)  =0;
  
  /**
   * Gets the mathematical definition of the Tool Change point.
   * <br><b>WARNING</b> : The values of these parameters are defined in absolute axis system.
   * Units are mm.
   * @param oTCPoint
   *            The mathematical tool change point. This is the tool mounting point if 
   *            oFromMachine is TRUE, the tool tip point otherwise.     
   * @param oTCAxis
   *            The tool axis vector on the tool change point.
   * @param oFromMachine
   *            TRUE if the parameters have been copied from the machine,
   *            The tool length is then NOT take into account in the point definition,
   *            and oTheLocXform is valuated.
   *     <br>   FALSE otherwise. The tool change point is then the tip point.
   * @param oTheLocXform
   *            Transformation in order to compute the tip point with the tool length.
   *            This is the Identity if oFromMachine is FALSE.
   * @param iToolChangeOperation
   *            Tool change operation defining the context (optional).
   *            Only used if oFromMachine is TRUE.
   *            If valued : the returned location takes the contextual position of the machine into account.
   */
  virtual HRESULT GetToolChangeLocation (CATMathPoint &oTCPoint, CATMathVector &oTCAxis,
						CATBoolean &oFromMachine, CATMathTransformation &oTheLocXform,
                        const CATBaseUnknown_var &iToolChangeOperation=NULL_var)  =0;

   /**
   * Retrieves the product associated to the Part Operation.
   * @param oProduct The associated product. It is a reference.
   */
  virtual HRESULT GetProductReference    (CATBaseUnknown_var& oProduct) =0;
  
  /**
   * Do not use this method. Prefer use method: GetProductInProductList
   */
  virtual HRESULT GetOldProductInProductList (CATBaseUnknown_var& oProduct) =0;

  /**
   * Creates and insert a Program in the Part Operation.
   * @param oProgram The new created Program
   * @param iInsertionLevel The Program after which the new program is inserted.
   *                        If NULL_var, the Program is inserted at the beginning of the Part Operation
   *                        (default behaviour).
   * @return E_FAIL If the insertion program does not belong to the Part Operation.<br>
   *         S_OK, if the program has been correctly created.
   */
  virtual HRESULT InsertNewProgram (CATBaseUnknown_var& oProgram, const CATBaseUnknown_var& iInsertionLevel=NULL_var) =0;

  /**
   * Moves a Program inside the Part Operation.
   * @param iProgramToMove The Program to be moved
   * @param iInsertionLevel The Program after which the program is moved.
   *                        If NULL_var, the Program is moved at the beginning of the Part Operation
   *                        (default behaviour).
   * @return E_FAIL If the program to move or the insertion program do not belong to the Part Operation.<br>
   *         S_OK, if the program has been correctly moved.
   */
  virtual HRESULT MoveProgramAfter (CATBaseUnknown_var& iProgramToMove, const CATBaseUnknown_var& iInsertionLevel=NULL_var) =0;

};

CATDeclareHandler(CATIMfgSetup, CATIMfgActivity) ;

#endif

