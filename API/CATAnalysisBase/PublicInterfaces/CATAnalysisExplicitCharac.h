// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitCharac
//
//=============================================================================
//
// Usage Notes: Services linked to the field model characteristics.
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitCharac_H_
#define CATAnalysisExplicitCharac_H_

#include "CATAnalysisExplicitChild.h"
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model characteristic.
 * This object is used to provide services linked to the field model characteristics.
 */

class CATMathComplexf ;
class CATMathComplex ;

class ExportedByCATSAM0Explicit CATAnalysisExplicitCharac : public CATAnalysisExplicitChild
{
   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitCharac() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitCharac(const CATAnalysisExplicitCharac &iCharac) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitCharac(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitCharac &operator = (const CATAnalysisExplicitCharac &iCharac) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitCharac &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Creates a characteristic in the field model.
 * @param iModel
 *   A pointer to the field model into which the characteristic will be created.
 * @param iPhysicalType
 *   The physical type of the characteristic.<br>
 *   The mathematical definition is obtained from the rules of the field model.
 * @param iValueType
 *   The type of value.<br>
 *   If equal to <tt>CATSamValueLast</tt> then the default value from the rules file will be taken.
 * @see CATAnalysisExplicitModel, CATSamPhysicalType, CATSamValue
 */
      HRESULT CreateCharac(const CATAnalysisExplicitModel *iModel,
         CATSamPhysicalType iPhysicalType, CATSamValue iValueType = CATSamValueLast) ;

/**
 * Creates a characteristic in the field model as the child of an other set or entity.
 * @param iParent
 *   The parent of the characteristic which will be created.
 * @param iPhysicalType
 *   The physical type of the characteristic.
 *   The mathematical definition is obtained from the rules of the field model.
 * @param iValueType
 *   The type of value.<br>
 *   If equal to <tt>CATSamValueLast</tt> then the default value from the rules file will be taken.
 * @see CATAnalysisExplicitParent
 */
      HRESULT CreateCharac(const CATAnalysisExplicitParent &iParent,
         CATSamPhysicalType iPhysicalType, CATSamValue iValueType = CATSamValueLast) ;

/**
 * Creates a characteristic in the field model.
 * <font color="red"> WARNING since V5R15.
 *   Negative <tt>iRepeat</tt> is not allowed anymore. Use <tt>iDistributionMode</tt> parameter instead.
 * @param iModel
 *   A pointer to the field model into which the characteristic will be created.
 * @param iPhysicalType
 *   The physical type of the characteristic.
 * @param iMathematicalType
 *   The mathematical type.
 * @param iValueType
 *   The type of value.
 * @param iMathematicalDimension
 *   The mathematical dimension.
 * @param iRepeat
 *   The number of times the values are repeated. Must be positive. 
 * @param iDistributionMode
 *   The mode of distribution of the values.
 * @see CATAnalysisExplicitModel, CATSamPhysicalType, CATSamMathType, CATSamValue, CATSamValuesDistributionMode
 */
      HRESULT CreateCharac(const CATAnalysisExplicitModel *iModel,
         CATSamPhysicalType iPhysicalType, CATSamMathType iMathematicalType,
         CATSamValue iValueType, int iMathematicalDimension, int iRepeat = 1, 
         const CATSamValuesDistributionMode& iDistributionMode = CATSamValuesDistributionModeRepeated) ;

/**
 * Creates a characteristic in the field model as the child of an other set or entity.
 * <font color="red"> WARNING since V5R15.
 *   Negative <tt>iRepeat</tt> is not allowed anymore. Use <tt>iDistributionMode</tt> parameter instead.
 * @param iParent
 *   The parent of the characteristic which will be created.
 * @param iPhysicalType
 *   The physical type of the characteristic.
 * @param iMathematicalType
 *   The mathematical type.
 * @param iValueType
 *   The type of value.
 * @param iMathematicalDimension
 *   The mathematical dimension.
 * @param iRepeat
 *   The number of times the values are repeated. Must be positive. 
 * @param iDistributionMode
 *   The mode of distribution of the values.
 * @see CATAnalysisExplicitParent, CATSamPhysicalType, CATSamMathType, CATSamValue, CATSamValuesDistributionMode
 */
      HRESULT CreateCharac(const CATAnalysisExplicitParent &iParent,
         CATSamPhysicalType iPhysicalType, CATSamMathType iMathematicalType,
         CATSamValue iValueType, int iMathematicalDimension, int iRepeat = 1,
         const CATSamValuesDistributionMode& iDistributionMode = CATSamValuesDistributionModeRepeated) ;

/**
 * Changes the mathematical definition of a characteristic.<br>
 * The memory requirements to store the values must be identical.
 * @param iMathematicalType
 *   The mathematical type.
 * @param iValueType
 *   The type of value.
 * @param iMathematicalDimension
 *   The mathematical dimension.
 * @param iRepeat
 *   The number of times the values are repeated. Must be Positive.
 * @param iDistributionMode
 *   The values distribution mode.
 * @see CATSamMathType, CATSamValue, CATSamValuesDistributionMode
 */
      HRESULT SetDefinition(CATSamMathType iMathematicalType, CATSamValue iValueType,
         int iMathematicalDimension, int iRepeat, CATSamValuesDistributionMode iDistributionMode) const;

/**
 * Changes the mathematical type of a characteristic.<br>
 * The memory requirements to store the values must be identical.
 * @param iMathematicalType
 *   The mathematical type.
 * @see CATSamMathType
 */
      HRESULT SetMathematicalType(CATSamMathType iMathematicalType) const ;

/**
 * Changes the type of value of a characteristic.<br>
 * The memory requirements to store the values must be identical.
 * @param iValueType
 *   The type of value.
 * @see CATSamValue
 */
      HRESULT SetValueType(CATSamValue iValueType) const ;

/**
 * Obtains the size in bytes of the contents of the characteristic.
 */
      HRESULT GetSize(int &oSizeInBytes) const ;

/**
 * Obtains the size in bytes and the number of values of the contents of the characteristic.
 */
      HRESULT GetSize(int &oSizeInBytes, int &oNumberOfValues) const ;

/**
 * Obtains the mathematical definition of a characteristic.
 * @param oMathematicalType
 *   The mathematical type.
 * @param oValueType
 *   The type of value.
 * @param oMathematicalDimension
 *   The mathematical dimension.
 * @param oRepeat
 *   The number of times the values are repeated. Is always Positive.
 * @param oDistributionMode
 *   The values distribution mode.
 * @see CATSamMathType, CATSamValue, CATSamValuesDistributionMode
 */
      HRESULT GetDefinition(CATSamMathType &oMathematicalType, CATSamValue &oValueType,
         int &oMathematicalDimension, int &oRepeat, CATSamValuesDistributionMode &oDistributionMode) const ;

/**
 * Obtains the mathematical type of a characteristic.
 * @param oMathematicalType
 *   The mathematical type.
 * @see CATSamMathType
 */
      HRESULT GetMathematicalType(CATSamMathType &oMathematicalType) const ;

/**
 * Obtains the type of value of a characteristic.
 * @param oValueType
 *   The type of value.
 * @see CATSamValue
 */
      HRESULT GetValueType(CATSamValue &oValueType) const ;

/**
 * Obtains the mathematical dimension of a characteristic.
 * @param oMathematicalDimension
 *   The mathematical dimension.
 */
      HRESULT GetMathematicalDimension(int &oMathematicalDimension) const ;

/**
 * Obtains the repeat number of a characteristic and the values distribution mode.
 * @param oRepeat
 *   The number of times the values are repeated (absolute value).
 * @param oRepeat
 *   The mode of distribution of the values.
 * @see CATSamValuesDistributionMode
 */
      HRESULT GetRepeat(int &oRepeat, CATSamValuesDistributionMode& oDistributionMode) const ;

/**
 * Tells if the values stored are distributed or repeated.
 */
      CATBoolean HasRepeatedValues() const ;

/**
 * Tells if this characteristic is variable or not.
 */
      CATBoolean IsVariable() const;

/**
 * Gets one value.<br>
 * <tt>type</tt> can be:
 * <ul>
 * <li>char
 * <li>short
 * <li>int
 * <li>float
 * <li>double
 * <li>void const *
 * <li>CATSamExplicitPtr
 * <li>CATMathComplexf
 * <li>CATMathComplex
 * </ul>
 * @param oValue
 *   The value stored in the object.
 */
      #define _GetValues1(type) \
         HRESULT GetValues(type &oValue) const;

/**
 * Gets an array of values.<br>
 * <tt>type</tt> can be:
 * <ul>
 * <li>char
 * <li>short
 * <li>int
 * <li>float
 * <li>double
 * <li>void const *
 * <li>CATSamExplicitPtr
 * <li>CATMathComplexf
 * <li>CATMathComplex
 * </ul>
 * @param oValues
 *   A pointer to a memory area where the values will be copied.<br>
 *   <tt>oValues</tt> must point to a memory area big enough to store the values.
 */
      #define _GetValues2(type) \
         HRESULT GetValues(type * oValues) const;

/**
 * Gets an array of values.<br>
 * <tt>type</tt> can be:
 * <ul>
 * <li>char
 * <li>short
 * <li>int
 * <li>float
 * <li>double
 * <li>void const *
 * <li>CATSamExplicitPtr
 * <li>CATMathComplexf
 * <li>CATMathComplex
 * </ul>
 * @param oValues
 *   A pointer to the array of values stored in the object.
 */
      #define _GetValues3(type) \
         HRESULT GetValues(type const *(&oValues)) const;

/**
 * Stores one value.<br>
 * <tt>type</tt> can be:
 * <ul>
 * <li>char
 * <li>short
 * <li>int
 * <li>float
 * <li>double
 * <li>void const *
 * <li>CATSamExplicitPtr
 * <li>CATMathComplexf
 * <li>CATMathComplex
 * </ul>
 * @param iValue
 *   The value to store.
 */
      #define _SetValues1(type) \
         HRESULT SetValues(type iValue) const;

/**
 * Stores an array of values.<br>
 * <tt>type</tt> can be:
 * <ul>
 * <li>char
 * <li>short
 * <li>int
 * <li>float
 * <li>double
 * <li>void const *
 * <li>CATSamExplicitPtr
 * <li>CATMathComplexf
 * <li>CATMathComplex
 * </ul>
 * @param iValues
 *   A pointer to the array of values to store.
 */
      #define _SetValues2(type) \
         HRESULT SetValues(type const *iValues) const;

  private : 
    #define _SetAndGetValues(type) \
      public : _SetValues1(type) _SetValues2(type) _GetValues1(type) _GetValues2(type) _GetValues3(type)
    _SetAndGetValues(char)
    _SetAndGetValues(short)
    _SetAndGetValues(int)
    _SetAndGetValues(float)
    _SetAndGetValues(double)
    _SetAndGetValues(void const *)
    _SetAndGetValues(CATSamExplicitPtr)
    _SetAndGetValues(CATMathComplexf)
    _SetAndGetValues(CATMathComplex)

  private :
    // Friend Class for Private Methods
    friend class CATAnalysisExplicitServices;

    // Reset
    virtual void Reset() ;
    // Init
    virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

    HRESULT GetReferencingAxisPhysicalTypeInContext(const CATAnalysisExplicitEntity &iContext, CATSamPhysicalType& oReferencingAxis) const;
} ;
#endif

