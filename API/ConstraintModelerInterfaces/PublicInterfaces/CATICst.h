#ifndef CATICst_h
#define CATICst_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATIBloc.h"

#include "CATCke.h"
#include "CATICkeParm.h"

#include "CATListOfDouble.h"

#include "CATCstDefs.h"

class CATICst_var;
class CATIBloc_var;
class CATUnicodeString;

#include "CATConstraintModelerItf.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATConstraintModelerItf IID IID_CATICst;
#else
extern "C" const IID IID_CATICst;
#endif


/**
 * Interface to manage a constraint.
 * <b>Role</b>: This interface is used to manage a constraint.
 * Each constraint is linked to a solving bloc.
 * @see CATIBloc, CATICstFactory, CATMfPossibleCst 
 */
class ExportedByCATConstraintModelerItf CATICst: public CATBaseUnknown
{
   CATDeclareInterface;

public :

/**
 * @deprecated V5R15
 * do not use
 * Returns the solving bloc.
 */
   virtual CATIBloc_var GetRootBloc() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Unsets the solving bloc.
 */
   virtual void UnsetRootBloc() =0;

/**
 * Returns the type as an enumeration.
 */
   virtual CATCstType GetCstType() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Returns the type as a CATICstData interface.
 */

   virtual CATBaseUnknown_var GetCstObjectType() const =0;

/**
 * Returns the list of specifications.
 */
   virtual CATCkeListOf(Parm) ListCstAttr() const =0;

/**
 * @deprecated V5R15
 * use GetCstAttrValue( iName ) or GetCstAttrRealValue( iName )
 * and SetCstAttrValue( iName ) or SetCstAttrRealValue( iName )
 * Returns a specification as a literal.
 * @param iName
 * The specification type.
 */
   virtual CATICkeParm_var GetCstAttr(const CATCstAttrType& iName) const =0;

/**
 * Returns the value of a specification.
 * @param iName
 * The specification type.
 * <br><b>Legal values</b>: 
 * <table border=1 width="100%">
 *  <tr>
 *   <td> <b>Legal values for iName</b></td>
 *   <td> <b>Returns one of the values</b></td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Reference</td>
 *   <td> CATCstVal_Reference_Absolute<br>
 *        CATCstVal_Reference_Relative</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Side</td>
 *   <td> CATCstVal_Side_Positive<br>
 *        CATCstVal_Side_Negative<br>
 *        CATCstVal_Side_Undefined<br>
 *        CATCstVal_Side_Signed_FromValue<br>
 *        CATCstVal_Side_Signed_FromOppositeValue</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Orient</td>
 *   <td> CATCstVal_Orient_Same<br>
 *        CATCstVal_Orient_Opposite<br>
 *        CATCstVal_Orient_Undefined</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Parallelism</td>
 *   <td> CATCstVal_Parallelism_Same<br>
 *        CATCstVal_Parallelism_Opposite<br>
 *        CATCstVal_Parallelism_Parallel<br>
 *        CATCstVal_Parallelism_NoParallel</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_RefAxis</td>
 *   <td> CATCstVal_RefAxis_1<br>
 *        CATCstVal_RefAxis_2<br>
 *        CATCstVal_RefAxis_3</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Dimension</td>
 *   <td> CATCstVal_Dimension_x1<br>
 *        CATCstVal_Dimension_x2</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_DimensionAxis</td>
 *   <td> CATCstVal_DimensionAxis_1<br>
 *        CATCstVal_DimensionAxis_2</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Direction</td>
 *   <td> CATCstVal_DirectionNone<br>
 *        CATCstVal_Direction_1<br>
 *        CATCstVal_Direction_2<br>
 *        CATCstVal_Direction_3</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_AngSector</td>
 *   <td> CATCstVal_AngSector_1<br>
 *        CATCstVal_AngSector_2<br>
 *        CATCstVal_AngSector_3<br>
 *        CATCstVal_AngSector_4</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_FsContinuity</td>
 *   <td> CATCstVal_FsContinuity_1,<br>
 *        CATCstVal_FsContinuity_2,</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_FsType</td>
 *   <td> CATCstVal_FsType_1<br>
 *        CATCstVal_FsType_2</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_FsModifiedElement</td>
 *   <td> CATCstVal_FsModifiedElement_1<br>
 *        CATCstVal_FsModifiedElement_2</td>
 *  </tr>
 * </table>
 */
   virtual CATCstAttrVal GetCstAttrValue(const CATCstAttrType& iName)
      const =0;

/**
 * Returns the value of a specification as double.
 * @param iName
 * The specification type.
 * <br><b>Legal values</b>: 
 *   CATCstAttr_Crv1Param,
 *   CATCstAttr_Crv2Param,
 *   CATCstAttr_FsPercentage,
 *   CATCstAttr_FsGlobalTension,
 *   CATCstAttr_FsTension,
 *   CATCstAttr_FsCurvatureVariation.
 */
   virtual double GetCstAttrRealValue(const CATCstAttrType& iName) const =0;

/**
 * Sets a specification value.
 * @param iName
 * The specification type.
 * @param iValue
 * The specification value.
 * <table border=1 width="100%">
 *  <tr>
 *   <td> <b>Legal values for iName</b></td>
 *   <td> <b>Legal values for iValue</b></td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Reference</td>
 *   <td> CATCstVal_Reference_Absolute<br>
 *        CATCstVal_Reference_Relative</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Side</td>
 *   <td> CATCstVal_Side_Positive<br>
 *        CATCstVal_Side_Negative<br>
 *        CATCstVal_Side_Undefined<br>
 *        CATCstVal_Side_Signed_FromValue<br>
 *        CATCstVal_Side_Signed_FromOppositeValue</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Orient</td>
 *   <td> CATCstVal_Orient_Same<br>
 *        CATCstVal_Orient_Opposite<br>
 *        CATCstVal_Orient_Undefined</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Parallelism</td>
 *   <td> CATCstVal_Parallelism_Same<br>
 *        CATCstVal_Parallelism_Opposite<br>
 *        CATCstVal_Parallelism_Parallel<br>
 *        CATCstVal_Parallelism_NoParallel</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_RefAxis</td>
 *   <td> CATCstVal_RefAxis_1<br>
 *        CATCstVal_RefAxis_2<br>
 *        CATCstVal_RefAxis_3</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Dimension</td>
 *   <td> CATCstVal_Dimension_x1<br>
 *        CATCstVal_Dimension_x2</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_DimensionAxis</td>
 *   <td> CATCstVal_DimensionAxis_1<br>
 *        CATCstVal_DimensionAxis_2</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_Direction</td>
 *   <td> CATCstVal_DirectionNone<br>
 *        CATCstVal_Direction_1<br>
 *        CATCstVal_Direction_2<br>
 *        CATCstVal_Direction_3</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_AngSector</td>
 *   <td> CATCstVal_AngSector_1<br>
 *        CATCstVal_AngSector_2<br>
 *        CATCstVal_AngSector_3<br>
 *        CATCstVal_AngSector_4</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_FsContinuity</td>
 *   <td> CATCstVal_FsContinuity_1,<br>
 *        CATCstVal_FsContinuity_2,</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_FsType</td>
 *   <td> CATCstVal_FsType_1<br>
 *        CATCstVal_FsType_2</td>
 *  </tr>
 *  <tr>
 *   <td> CATCstAttr_FsModifiedElement</td>
 *   <td> CATCstVal_FsModifiedElement_1<br>
 *        CATCstVal_FsModifiedElement_2</td>
 *  </tr>
 * </table>
 * @param iDispatch
 * Equals to 1, the method dispatchs an event, nothing otherwise.
 */
   virtual void SetCstAttrValue(const CATCstAttrType& iName,
      const CATCstAttrVal& iValue, const int iDispatch = 1) =0;

/**
 * Sets a real specification value.
 * @param iName
 * The specification type.
 * <br><b>Legal values</b>: 
 *  CATCstAttr_Crv1Param,
 *  CATCstAttr_Crv2Param,
 *  CATCstAttr_FsPercentage,
 *  CATCstAttr_FsGlobalTension,
 *  CATCstAttr_FsTension,
 *  CATCstAttr_FsCurvatureVariation.</td>
 * @param iValue
 * The specification value.
 * @param iDispatch
 * Equals to 1, the method dispatchs an event, nothing otherwise.
 */

   virtual void SetCstAttrRealValue(const CATCstAttrType& iName,
      const double iValue, const int iDispatch = 1) =0;

/**
 * Returns the mode.
 */
   virtual CATCstMode GetCstMode() const =0;

/** 
 * Sets the mode.
 * @param iMode
 * The mode.
 */
   virtual void SetCstMode(const CATCstMode iMode) =0;

/**
 * @deprecated V5R15
 * use GetElement(1)
 * Returns the first element.
 */
   virtual CATBaseUnknown_var GetElement1() const =0;

/**
 * @deprecated V5R15
 * use GetElement(2)
 * Returns the second element, equal to NULL_var if not defined.
 */
   virtual CATBaseUnknown_var GetElement2() const =0;

/**
 * @deprecated V5R15
 * use GetElement(3)
 * Returns the third element, equal to NULL_var if not defined.
 */
   virtual CATBaseUnknown_var GetElement3() const =0;

/**
 * Returns an element.
 * @param iNum
 * The number of the element, from 1 to 3.
 */
   virtual CATBaseUnknown_var GetElement(const int iNum) const =0;

/**
 * @deprecated V5R15
 * use GetElement(1), GetElement(2), GetElement(3)
 * Retrieves the elements.
 * @param oElem1
 * The first element.
 * @param oElem2
 * The second element.
 * @param oElem3
 * The third element.
 */
   virtual void GetElements(CATBaseUnknown_var& oElem1,
      CATBaseUnknown_var& oElem2, CATBaseUnknown_var& oElem3) const =0;

/**
 * @deprecated V5R15
 * use a loop for i=1 to 3 on GetElement(int i)
 * Returns the list of elements.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetElements() const =0;

/**
 * Sets an element.
 * @param iNum
 * The number of the element, from 1 to 3.
 * @param iElem
 * The element.  
 * @return
 * Error code of function.
 */
   virtual HRESULT SetElement(const int iNum, const CATBaseUnknown_var& iElem) =0;

/**
 * @deprecated V5R15
 * do not use
 * Returns first influence bloc.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetBloc1() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Returns second influence bloc.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetBloc2() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Retrieves influence blocs.
 * @param iInfl1
 * The first influence bloc.
 * @param iInfl2
 * The second influence bloc.
 * @param iInfl3
 * The third influence bloc.
 */
   virtual void GetBlocs(CATLISTV(CATBaseUnknown_var) &iInfl1,
			 CATLISTV(CATBaseUnknown_var) &iInfl2,
			 CATLISTV(CATBaseUnknown_var) &iInfl3) const =0;

/**
 * @deprecated V5R15
 * do not use
 * Returns second influence bloc.
 */
   virtual CATLISTV(CATBaseUnknown_var) GetBloc(const int& inf) const =0;

/**
 * @deprecated V5R15
 * do not use
 * Sets the first influence bloc.
 * @param iInfl
 * The bloc.
 */
   virtual void SetBloc1(CATIBloc_var iInfl) =0;

/**
 * @deprecated V5R15
 * do not use
 * Sets the second influence bloc.
 * @param iInfl
 * The bloc.
 */
   virtual void SetBloc2(CATIBloc_var iInfl) =0;

/**
 * @deprecated V5R15
 * use GetRealValue( 1 )
 * Returns the first numerical value as literal.
 */
   virtual CATICkeParm_var GetValue() const =0;

/**
 * @deprecated V5R15
 * use GetRealValue( num )
 * Returns a numerical value as literal.
 * @param iNum
 * The number of the numerical value.
 */
   virtual CATICkeParm_var GetValue(const int num) const =0;

/** 
 * @deprecated V5R15
 * use a loop on GetRealValue( int num )
 * Returns the list of numerical values as literal.
 */
   virtual CATCkeListOf(Parm) GetValues() const =0;

/** 
 * @deprecated V5R15
 * use GetRealValue( 1 )
 * Returns the first numerical value as double.
 */
   virtual double GetRealValue() const =0;

/**
 * Returns the numerical value as double.
 * @param iNum
 * The number of the numerical value.
 */
   virtual double GetRealValue(const int num) const =0;

/** 
 * @deprecated V5R15
 * use a loop on GetRealValue( int num )
 * Returns the list of numerical values as double.
 */
   virtual CATListOfDouble GetRealValues() const =0;

/**
 * @deprecated V5R15
 * use SetRealValue( 1, value )
 * Sets the first numerical value. 
 * @param iValue
 * The value.
 */
   virtual void SetValue(const CATICkeParm_var& iValue) =0;

/**
 * @deprecated V5R15
 * use SetRealValue( iNum, value )
 * Sets a numerical value as literal. 
 * @param iNum
 * The number of the numerical value.
 * @param iValue
 * The value.
 */
   virtual void SetValue(const int iNum, const CATICkeParm_var& iValue) =0;

/**
 * @deprecated V5R15
 * use SetRealValue( 1, value )
 * Sets the first numerical value as double.
 * @param iValue
 * The value.
 */
   virtual void SetRealValue(const double iValue) =0;

/**
 * Sets a numerical value as double. 
 * @param iNum 
 * The number of the numerical value.
 * @param iValue
 * The value.
 */
   virtual void SetRealValue(const int iNum, const double iValue) =0;

/**
 * Reads the status.
 */
   virtual CATCstStatus ReadStatus() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Reads the first distance.
 */ 
   virtual double ReadDistance() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Reads a distance.
 * @param iNum
 * The number of the distance.
 */ 
   virtual double ReadDistance(const int iNum) const =0;

/**
 * @deprecated V5R15
 * do not use
 * Reads the first angle.
 */ 
   virtual double ReadAngle() const =0;

/**
 * @deprecated V5R15
 * do not use
 * Reads an angle.
 * @param iNum
 * The number of the angle.
 */ 
   virtual double ReadAngle(const int iNum) const =0;

/**
 * Changes the angular sector.
 * @param iSector
 * The angular sector from 1 to 4.
 */
   virtual void ChangeSector(int iSector) =0;

/**
 * Reads the angular sector.
 * @returns 
 * The angular sector from 1 to 4.
 */
   virtual int ReadSector() const =0;
   
/**
 * @nodoc
 */
   virtual void Subscribe() =0;

/**
 * @nodoc
 */
   virtual void UnSubscribe() =0;

private:
};

CATDeclareHandler(CATICst, CATBaseUnknown);

#endif
