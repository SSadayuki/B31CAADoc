// COPYRIGHT DASSAULT SYSTEMES  1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATSamDimensionData
//
//=============================================================================
//
// Usage Notes: dimension information of a collector characteristic
//
//=============================================================================
// Juin 99   Creation                                                  JND, LBK
//=============================================================================
#ifndef CATSamDimensionData_H_
#define CATSamDimensionData_H_

// Acces au Model Explicit
#include "CATSAM0Explicit.h"
#include "CATAnalysisExplicitTypes.h"

// Acces au CATListOfCatUnicodeString
#include "CATListOfCATUnicodeString.h"

class CATSamAxis;
class CATSamDimension;
class CATSamDimensionDataExtension;

/**
 * Dimension information of a collector characteristic.
 * The values in a CATAnalysisCharacCollector are stored as follows :<br>
 * Pointer[NbPositions][NbLamina][NbSMI][NbRepeat[IndexPosition][IndexLamina][IndexSmi]][NbComponents]<br>
 * However NbRepeat can be variable with the position number, lamina number and SMI number.<br>
 * Let us assume NbPositions=2, NbLamina=1, NbSMI=2, NbRepeat[P1][L1][S1]=2, NbRepeat[P1][L1][S2]=1,
 *                                                   NbRepeat[P2][L1][S1]=0, NbRepeat[P2][L1][S2]=3
 *                                               and NbComponents=2.
 * The values in memory are stored as follows :<br>
 * <tt>
 * P1 L1 S1 R11-1 C1<br>
 * "" "" "" """"" C2<br>
 * "" "" "" R11-2 C1<br>
 * "" "" "" """"" C2<br>
 * "" "" S2 R12-1 C1<br>
 * "" "" "" """"" C2<br>
 * P2 L1 S2 R22-1 C1<br>
 * "" "" "" """"" C2<br>
 * "" "" "" R22-2 C1<br>
 * "" "" "" """"" C2<br>
 * "" "" "" R22-3 C1<br>
 * "" "" "" """"" C2<br>
 * </tt>
 */
class ExportedByCATSAM0Explicit CATSamDimensionData
{
  public :
    // Default constructor.
    CATSamDimensionData();
    // Copy constructor
    CATSamDimensionData(const CATSamDimensionData& iDimensionData);

    // Destructor
    virtual ~CATSamDimensionData();

    // operators
    CATSamDimensionData &operator = (const CATSamDimensionData &iDimensionData);
    CATBoolean operator == (const CATSamDimensionData &iDimensionData) ;

    // Fill methods
    HRESULT Fill(const int& iNbPositions, const int * const iPositionsNumber, const int& iNbLaminates, const int * const iLaminatesNumber, const int& iNbSMI, const int * const iSMINumber,
                 const int * const iNbRepeats, const int * const iRepeatsNumber, const CATSamAggregationMode * const iAggregationMode,
                 const int& iNbComponents, const int * const iComponentsNumber, const int& iUnitaryValueSize) ;

    HRESULT Fill(const int& iNbPositions, const int * const iPositionsNumber, const int& iNbLaminates, const int * const iLaminatesNumber, const int& iNbSMI, const int * const iSMINumber,
                 const int * const iNbRepeats, const int * const iRepeatsNumber, const CATSamAggregationMode * const iAggregationMode,
                 CATSamValue iValueType, CATSamMathType iMathType, const int& iMathDimension) ;

    // SetDataInformations
    HRESULT SetDataInformations(CATSamValue iValueType, CATSamMathType iMathType, const int& iMathDimension) ;

    // SetNbPositions
    HRESULT SetNbPositions(const int& iNbPositions, const int * const iPositionsNumber = NULL) ;

    // SetNbLaminates
    HRESULT SetNbLaminates(const int& iNbLaminates, const int * const iLaminatesNumber = NULL) ;

    // SetNbSMI
    HRESULT SetNbSMI(const int& iNbSMI, const int * const iSMINumber = NULL) ;

    // SetNbRepeat
    HRESULT SetNbRepeat(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex, const int& iNbRepeats, const int * const iRepeatsNumber = NULL, const CATSamAggregationMode * const iAggregationMode = NULL);

    // SetNbComponents
    HRESULT SetNbComponents(const int& iNbComponents, const int * const iComponentNumber = NULL) ;

    // SetUnitaryValueSize
    HRESULT SetUnitaryValueSize(CATSamValue iValueType) ;
    HRESULT SetUnitaryValueSize(const int& iUnitaryValueSize) ;

    // Get/SetValuesDistributionMode
    inline CATSamValuesDistributionMode GetValuesDistributionMode() const;
    inline HRESULT SetValuesDistributionMode(CATSamValuesDistributionMode iValuesDistributionMode);

    // Get Positions
    int GetNbPositions() const ;
    const int* GetPositions() const ;

    // Get Laminates
    int GetNbLaminates() const ;
    const int* GetLaminates() const ;

    // Get SMI
    int GetNbSMI() const ;
    const int* GetSMI() const ;

    // Get Repeat && AggregationMode
    int GetNbRepeatTotal() const ;
    int GetNbRepeat(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex) const;
    const int* GetRepeat(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex) const;
    const CATSamAggregationMode* GetAggregationMode(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex) const;
    HRESULT GetNbRepeatTo(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex, const int& iRepeatIndex, int &oNbRepeatTo) const;
    inline CATBoolean HadNegativeNbRepeat() const;
    CATBoolean HadNbRepeatGreaterThanOne() const;
    HRESULT ApplyOffsetOnRepeatNumber(int iOffset);

    // GetComponents
    int GetNbComponents() const ;
    const int* GetComponents() const ;

    // Get Size & NbValues
    int GetSizeValuesTotal() const ;
    int GetNbValuesTotal() const ;
    int GetSizeValues(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex) const ;
    int GetNbValues(const int& iPositionIndex, const int& iLaminaIndex, const int& iSMIIndex) const ;
    int GetUnitaryValueSize() const;

    // Compute the offset on Values Pointer according to the definition of the object.
    // @param iValuePointerBase : The Pointer on Values.
    // @param iPositionIndex : The Position Index.
    // @param iLaminaIndex : The Lamina Index.
    // @param iSMIIndex : The SMI Index.
    // @param iRepeatIndex : The Repeat Index for [iPositionIndex, iLaminaIndex, iSMIIndex].
    // @param iComponentIndex : The Component Index.
    const void* ValuesAddress(const void* iValuePointerBase, const int& iPositionIndex, int iLaminaIndex = 0, int iSMIIndex = 0, int iRepeatIndex = 0, int iComponentIndex = 0) const ;

    // Dump the contents of the object.
    void Dump(int iIndent = 0, int iLoopSize = 10) const ; 
    void Dump(CATListValCATUnicodeString* oListOfString, int iIndent = 0, int iLoopSize = 10) const ;

  protected :
    // Give access for CATSamAxis et CATSamDimension
    friend class CATSamAxis;
    friend class CATSamDimension;

    // Compare the Structure of another CATSamDimensionData object to the current instance.
    CATBoolean CompareStructure(const CATSamDimensionData &iDimensionData) const;
  
    // Init Data Members
    HRESULT InitSMI();
    HRESULT InitRepeats();
    HRESULT InitLaminates();
    HRESULT InitPositions();
    HRESULT InitComponents();

    // Reset Data Members
    HRESULT ResetAll();
    HRESULT ResetSMI();
    HRESULT ResetRepeats();
    HRESULT ResetPositions();
    HRESULT ResetLaminates();
    HRESULT ResetComponents();
    HRESULT ResetDataInformations();
    HRESULT ResetValuesInformations();

    // Data Members
    int*                          _Positions ;
    int*                          _Components ;
    int                           _NbPositions ;
    int                           _NbComponents ;
    int                           _NbValues ;
    int                           _SizeValues ;
    int                           _UnitarySizeValue ;
    CATSamValuesDistributionMode  _ValuesDistributionMode ;
    CATSamDimensionDataExtension* _DataExtensionPtr;
} ;

/*****************************************************************/
/* Implementation of inline Methods                              */
/*****************************************************************/
inline int CATSamDimensionData::GetNbPositions() const {return _NbPositions;}
inline const int* CATSamDimensionData::GetPositions() const {return (const int*)_Positions;}
inline int CATSamDimensionData::GetNbComponents() const {return _NbComponents;}
inline const int* CATSamDimensionData::GetComponents() const { return (const int*)_Components;}
inline HRESULT CATSamDimensionData::ResetDataInformations() {_NbValues = _SizeValues = _UnitarySizeValue = 0; _ValuesDistributionMode = CATSamValuesDistributionModePositive; return S_OK;}
inline HRESULT CATSamDimensionData::ResetValuesInformations() {_NbValues = _SizeValues = 0; return S_OK;}
inline CATBoolean CATSamDimensionData::HadNegativeNbRepeat() const { return FALSE; }
inline CATSamValuesDistributionMode CATSamDimensionData::GetValuesDistributionMode() const { return _ValuesDistributionMode; }
inline HRESULT CATSamDimensionData::SetValuesDistributionMode(CATSamValuesDistributionMode iValuesDistributionMode) { _ValuesDistributionMode = iValuesDistributionMode; return S_OK; }
#endif
