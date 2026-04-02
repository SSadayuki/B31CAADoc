/* -*-C++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
// Class CATAnalysisExplicitTypes
//-----------------------------------------------------------------------------
// Octobre 99   Creation                                                    LBK
//=============================================================================
// Usage Notes: Declaration of specific data and methods
//              in relation to analysis explicit types
//=============================================================================

#ifndef CATAnalysisExplicitTypes_H_
#define CATAnalysisExplicitTypes_H_

#include "CATSAM0Explicit.h"
#include "CATAnalysisExplicitDefinitions.h"
#include "CATUnicodeString.h"
#include "IUnknown.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Returns the size in bytes needed to store a value of a specified type.
 * @param iValue
 *   The type of value.
 * @param oSize
 *   The size in bytes of a value of type <tt>iValue</tt>.
 * @return
 *   <b>S_OK</b> upon success, <b>E_FAIL</b> upon failure.
 * @see CATSamValue
 */
ExportedByCATSAM0Explicit HRESULT CATSamValueSize(CATSamValue iValue, int &oSize) ;

/**
 * Returns the number of components of a mathematical type for a particular dimension.
 * @param iMathType
 *   The mathematical type.
 * @param iMathDimension
 *   The mathematical dimension (from 1 to 6).
 * @param oNbComponents
 *   The number of components of the mathematical type <tt>iMathType</tt> with dimension <tt>iMathDimension</tt>.
 * @return
 *   <b>S_OK</b> upon success, <b>E_FAIL</b> upon failure.
 * @see CATSamMathType
 */
ExportedByCATSAM0Explicit HRESULT CATSamMathTypeSize(CATSamMathType iMathType, int iMathDimension, int &oNbComponents) ;

/**
 * Conversion of enumerated types into identifiers.<br>
 * <tt>Type</tt> can be:
 * <ul>
 * <li>CATSamValue</li>
 * <li>CATSamMathType</li>
 * <li>CATSamListType</li>
 * <li>CATSamPosition</li>
 * <li>CATSamDataType</li>
 * <li>CATSamDof</li>
 * <li>CATSamStatus</li>
 * <li>CATSamCompareType</li>
 * <li>CATSamRefFrame</li>
 * <li>CATSamRefFrameType</li>
 * <li>CATSamApplyQualifier</li>
 * <li>CATSamAggregationMode</li>
 * <li>CATSamSpace1DType</li>
 * <li>CATSamSpace2DType</li>
 * <li>CATSamSpace3DType</li>
 * <li>CATSamSpaceVectorType</li>
 * <li>CATSamMeshType</li>
 * <li>CATSamSubType</li>
 * <li>CATSamComponent</li>
 * <li>CATSamBendingType</li>
 * <li>CATSamWallType</li>
 * <li>CATSamValuesDistributionMode</li>
 * </ul>
 * @param iEnum
 *   The enumerated value which must be converted (0 <= <tt>iEnum</tt> < <tt>Type</tt><b>Last</b>).
 * @return
 *   A string representing the enumerated value.<br>
 *   This string should be used for programming only.
 * @see CATSamValue, CATSamMathType, CATSamListType, CATSamPosition, CATSamDataType, CATSamDof, CATSamStatus, CATSamCompareType, CATSamRefFrame, CATSamRefFrameType, CATSamApplyQualifier, CATSamAggregationMode, CATSamSpace1DType, CATSamSpace2DType, CATSamSpace3DType, CATSamSpaceVectorType, CATSamMeshType, CATSamSubType, CATSamComponent, CATSamBendingType, CATSamWallType, CATSamValuesDistributionMode
 */
#ifdef Type
  #undef Type
  ExportedByCATSAM0Explicit const char *CATSamEnumIdentity(Type iEnum);
#endif

/**
 * Conversion of identifiers into enumerated types.<br>
 * <tt>Type</tt> can be:
 * <ul>
 * <li>CATSamValue</li>
 * <li>CATSamMathType</li>
 * <li>CATSamListType</li>
 * <li>CATSamPosition</li>
 * <li>CATSamDataType</li>
 * <li>CATSamDof</li>
 * <li>CATSamStatus</li>
 * <li>CATSamCompareType</li>
 * <li>CATSamRefFrame</li>
 * <li>CATSamRefFrameType</li>
 * <li>CATSamApplyQualifier</li>
 * <li>CATSamAggregationMode</li>
 * <li>CATSamSpace1DType</li>
 * <li>CATSamSpace2DType</li>
 * <li>CATSamSpace3DType</li>
 * <li>CATSamSpaceVectorType</li>
 * <li>CATSamMeshType</li>
 * <li>CATSamSubType</li>
 * <li>CATSamComponent</li>
 * <li>CATSamBendingType</li>
 * <li>CATSamWallType</li>
 * <li>CATSamValuesDistributionMode</li>
 * </ul>
 * @param iIdentity
 *   The identifier string representing the enumerated value.
 * @param oEnum
 *   The enumerated value or <tt>Type</tt><b>Last</b> if <tt>iIdentity</tt> is bad.
 * @return
 *   <b>S_OK</b> upon success, <b>E_FAIL</b> upon failure.
 * @see CATSamValue, CATSamMathType, CATSamListType, CATSamPosition, CATSamDataType, CATSamDof, CATSamStatus, CATSamCompareType, CATSamRefFrame, CATSamRefFrameType, CATSamApplyQualifier, CATSamAggregationMode, CATSamSpace1DType, CATSamSpace2DType, CATSamSpace3DType, CATSamSpaceVectorType, CATSamMeshType, CATSamSubType, CATSamComponent, CATSamBendingType, CATSamWallType, CATSamValuesDistributionMode
 */
#ifdef Type
  ExportedByCATSAM0Explicit HRESULT CATSamIdentityEnum(const char *iIdentity, Type &oEnum);
#endif

/**
 * Conversion of enumerated types into indices. <br>
 * <tt>Type</tt> can be:
 * <ul>
 * <li>CATSamValue</li>
 * <li>CATSamMathType</li>
 * <li>CATSamListType</li>
 * <li>CATSamPosition</li>
 * <li>CATSamDataType</li>
 * <li>CATSamDof</li>
 * <li>CATSamStatus</li>
 * <li>CATSamCompareType</li>
 * <li>CATSamRefFrame</li>
 * <li>CATSamRefFrameType</li>
 * <li>CATSamApplyQualifier</li>
 * <li>CATSamAggregationMode</li>
 * <li>CATSamSpace1DType</li>
 * <li>CATSamSpace2DType</li>
 * <li>CATSamSpace3DType</li>
 * <li>CATSamSpaceVectorType</li>
 * <li>CATSamMeshType</li>
 * <li>CATSamSubType</li>
 * <li>CATSamComponent</li>
 * <li>CATSamBendingType</li>
 * <li>CATSamWallType</li>
 * <li>CATSamValuesDistributionMode</li>
 * </ul>
 * @param iEnum
 *   The enumerated value.
 * @param oIndex
 *   The index of the enumerated value (-1 if iEnum is a bad enumerated value) </b>).
 * @return
 *   <b>S_OK</b> upon success, <b>E_FAIL</b> upon failure.
 * @see CATSamValue, CATSamMathType, CATSamListType, CATSamPosition, CATSamDataType, CATSamDof, CATSamStatus, CATSamCompareType, CATSamRefFrame, CATSamRefFrameType, CATSamApplyQualifier, CATSamAggregationMode, CATSamSpace1DType, CATSamSpace2DType, CATSamSpace3DType, CATSamSpaceVectorType, CATSamMeshType, CATSamSubType, CATSamComponent, CATSamBendingType, CATSamWallType, CATSamValuesDistributionMode
 */
#ifdef Type
  ExportedByCATSAM0Explicit HRESULT CATSamEnumIndex(Type iEnum, int &oIndex) ;
#endif

/**
 * Conversion of indices into enumerated types.<br>
 * <tt>Type</tt> can be:
 * <ul>
 * <li>CATSamValue</li>
 * <li>CATSamMathType</li>
 * <li>CATSamListType</li>
 * <li>CATSamPosition</li>
 * <li>CATSamDataType</li>
 * <li>CATSamDof</li>
 * <li>CATSamStatus</li>
 * <li>CATSamCompareType</li>
 * <li>CATSamRefFrame</li>
 * <li>CATSamRefFrameType</li>
 * <li>CATSamApplyQualifier</li>
 * <li>CATSamAggregationMode</li>
 * <li>CATSamSpace1DType</li>
 * <li>CATSamSpace2DType</li>
 * <li>CATSamSpace3DType</li>
 * <li>CATSamSpaceVectorType</li>
 * <li>CATSamMeshType</li>
 * <li>CATSamSubType</li>
 * <li>CATSamComponent</li>
 * <li>CATSamBendingType</li>
 * <li>CATSamWallType</li>
 * <li>CATSamValuesDistributionMode</li>
 * </ul>
 * @param iIndex
 *   The index of the enumerated value (0 <= <tt>iIndex</tt> < <tt>Type</tt><b>Last</b>).
 * @param oEnum
 *   The enumerated value or <tt>Type</tt><b>Last</b> if <tt>iIndex</tt> is bad.
 * @return
 *   <b>S_OK</b> upon success, <b>E_FAIL</b> upon failure.
 * @see CATSamValue, CATSamMathType, CATSamListType, CATSamPosition, CATSamDataType, CATSamDof, CATSamStatus, CATSamCompareType, CATSamRefFrame, CATSamRefFrameType, CATSamApplyQualifier, CATSamAggregationMode, CATSamSpace1DType, CATSamSpace2DType, CATSamSpace3DType, CATSamSpaceVectorType, CATSamMeshType, CATSamSubType, CATSamComponent, CATSamBendingType, CATSamWallType, CATSamValuesDistributionMode
 */
#ifdef Type
  ExportedByCATSAM0Explicit HRESULT CATSamIndexEnum(int iIndex, Type &oEnum) ;
#endif

/**
 * Conversion of enumerated types into strings (non NLS).<br>
 * <tt>Type</tt> can be:
 * <ul>
 * <li>CATSamValue</li>
 * <li>CATSamMathType</li>
 * <li>CATSamListType</li>
 * <li>CATSamPosition</li>
 * <li>CATSamDataType</li>
 * <li>CATSamDof</li>
 * <li>CATSamStatus</li>
 * <li>CATSamCompareType</li>
 * <li>CATSamRefFrame</li>
 * <li>CATSamRefFrameType</li>
 * <li>CATSamApplyQualifier</li>
 * <li>CATSamAggregationMode</li>
 * <li>CATSamSpace1DType</li>
 * <li>CATSamSpace2DType</li>
 * <li>CATSamSpace3DType</li>
 * <li>CATSamSpaceVectorType</li>
 * <li>CATSamMeshType</li>
 * <li>CATSamSubType</li>
 * <li>CATSamComponent</li>
 * <li>CATSamBendingType</li>
 * <li>CATSamWallType</li>
 * <li>CATSamValuesDistributionMode</li>
 * </ul>
 * @param iEnum
 *   The enumerated value which must be converted (0 <= <tt>iEnum</tt> < <tt>Type</tt><b>Last</b>).
 * @return
 *   An english string representing the enumerated value.<br>
 *   This string can be displayed to the user.
 * @see CATSamValue, CATSamMathType, CATSamListType, CATSamPosition, CATSamDataType, CATSamDof, CATSamStatus, CATSamCompareType, CATSamRefFrame, CATSamRefFrameType, CATSamApplyQualifier, CATSamAggregationMode, CATSamSpace1DType, CATSamSpace2DType, CATSamSpace3DType, CATSamSpaceVectorType, CATSamMeshType, CATSamSubType, CATSamComponent, CATSamBendingType, CATSamWallType, CATSamValuesDistributionMode
 */
#ifdef Type
  ExportedByCATSAM0Explicit const char *CATSamEnumString(Type iEnum) ;
#endif

/**
 * Conversion of enumerated types into NLS strings.<br>
 * <tt>Type</tt> can be:
 * <ul>
 * <li>CATSamValue</li>
 * <li>CATSamMathType</li>
 * <li>CATSamListType</li>
 * <li>CATSamPosition</li>
 * <li>CATSamDataType</li>
 * <li>CATSamDof</li>
 * <li>CATSamStatus</li>
 * <li>CATSamCompareType</li>
 * <li>CATSamRefFrame</li>
 * <li>CATSamRefFrameType</li>
 * <li>CATSamApplyQualifier</li>
 * <li>CATSamAggregationMode</li>
 * <li>CATSamSpace1DType</li>
 * <li>CATSamSpace2DType</li>
 * <li>CATSamSpace3DType</li>
 * <li>CATSamSpaceVectorType</li>
 * <li>CATSamMeshType</li>
 * <li>CATSamSubType</li>
 * <li>CATSamComponent</li>
 * <li>CATSamBendingType</li>
 * <li>CATSamWallType</li>
 * <li>CATSamValuesDistributionMode</li>
 * </ul>
 * @param iEnum
 *   The enumerated value which must be converted (0 <= <tt>iEnum</tt> < <tt>Type</tt><b>Last</b>).
 * @param oString
 *   An NLS string representing the enumerated value.<br>
 *   This string can be displayed to the user.
 * @see CATUnicodeString, CATSamValue, CATSamMathType, CATSamListType, CATSamPosition, CATSamDataType, CATSamDof, CATSamStatus, CATSamCompareType, CATSamRefFrame, CATSamRefFrameType, CATSamApplyQualifier, CATSamAggregationMode, CATSamSpace1DType, CATSamSpace2DType, CATSamSpace3DType, CATSamSpaceVectorType, CATSamMeshType, CATSamSubType, CATSamComponent, CATSamBendingType, CATSamWallType, CATSamValuesDistributionMode
 */
#ifdef Type
  ExportedByCATSAM0Explicit void CATSamEnumString(Type iEnum, CATUnicodeString &oString) ;
#endif

/**
  * @nodoc
  */
class CATAnalysisExplicitTypes {
  private:
    CATAnalysisExplicitTypes();
    #define _CATSamEnumIdentity(Type) ExportedByCATSAM0Explicit const char *CATSamEnumIdentity(Type iEnum);
    #define _CATSamIdentityEnum(Type) ExportedByCATSAM0Explicit HRESULT CATSamIdentityEnum(const char *iIdentity, Type &oEnum);
    #define _CATSamEnumIndex(Type) ExportedByCATSAM0Explicit HRESULT CATSamEnumIndex(Type iEnum, int &oIndex) ;
    #define _CATSamIndexEnum(Type) ExportedByCATSAM0Explicit HRESULT CATSamIndexEnum(int iIndex, Type &oEnum) ;
    #define _CATSamEnumString1(Type) ExportedByCATSAM0Explicit const char *CATSamEnumString(Type iEnum) ;
    #define _CATSamEnumString2(Type) ExportedByCATSAM0Explicit void CATSamEnumString(Type iEnum, CATUnicodeString &oString) ;
    #define DefineCATSamEnum(Type)\
      _CATSamEnumIdentity(Type) _CATSamIdentityEnum(Type) _CATSamEnumIndex(Type) _CATSamIndexEnum(Type) _CATSamEnumString1(Type) _CATSamEnumString2(Type)
    #define DefineAllEnumMethods \
      DefineCATSamEnum(CATSamValue);\
      DefineCATSamEnum(CATSamMathType);\
      DefineCATSamEnum(CATSamListType);\
      DefineCATSamEnum(CATSamPosition);\
      DefineCATSamEnum(CATSamDataType);\
      DefineCATSamEnum(CATSamDof);\
      DefineCATSamEnum(CATSamStatus);\
      DefineCATSamEnum(CATSamCompareType);\
      DefineCATSamEnum(CATSamCheckType);\
      DefineCATSamEnum(CATSamRefFrame);\
      DefineCATSamEnum(CATSamRefFrameType);\
      DefineCATSamEnum(CATSamApplyQualifier);\
      DefineCATSamEnum(CATSamAggregationMode);\
      DefineCATSamEnum(CATSamSpace1DType);\
      DefineCATSamEnum(CATSamSpace2DType);\
      DefineCATSamEnum(CATSamSpace3DType);\
      DefineCATSamEnum(CATSamSpaceVectorType);\
      DefineCATSamEnum(CATSamMeshType);\
      DefineCATSamEnum(CATSamSubType);\
      DefineCATSamEnum(CATSamComponent);\
      DefineCATSamEnum(CATSamBendingType);\
      DefineCATSamEnum(CATSamWallType);\
      DefineCATSamEnum(CATSamValuesDistributionMode);
};

/**
  * @nodoc
  */
DefineAllEnumMethods;

extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeGenCharac;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeGenEntity;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeGenSet;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeCharacCollectorPtr;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeEntityCollectorPtr;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeExpressionPtr;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeImportedMaterial;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeImportedAxis;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeImportedProperty;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeImportedRestraint;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeImportedLoad;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeImportedMass;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeIdentityNumber;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeUserNumber;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeCombinedRestraint;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeCombinedLoad;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeCombinedMass;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeLocalAxis;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeOffsetAxis;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeOrientationVector;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeOrientationPoint;
extern ExportedByCATSAM0Explicit const CATSamPhysicalType CATSamPhysicalTypeOrientationNode;


#endif
