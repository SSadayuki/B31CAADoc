// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATSamDimension
//
//=============================================================================
//
// Usage Notes: dimension information of a collector characteristic
//
//=============================================================================
// Juin 99   Creation                                                  JND, LBK
//=============================================================================
#ifndef CATSamDimension_H_
#define CATSamDimension_H_

#include "CATSAM0Explicit.h"
#include "CATSamExplicitRoot.h"
#include "CATSamDimensionData.h"

// Acces a CATMath
#include "CATMath.h"

// Acces au ExplicitTypes
#include "CATAnalysisExplicitTypes.h"

// Acces au CATListOfCatUnicodeString
#include "CATListOfCATUnicodeString.h"

class CATSamStream ;
class CATSamDimensionData;
class CATSamDimensionHandler;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Dimension information of a collector characteristic.
 * The values in a CATAnalysisCharacCollector are stored as follows :
 * <dl><dd>Values[NbPositions][NbLamina][NbSMI][NbRepeat[IndexPosition][IndexLamina][IndexSmi]][NbComponents].<br></dl>
 * However NbRepeat can be variable with the Position, Lamina and SMI number.<br>
 * Let us assume NbPositions=2, NbLamina=1, NbSMI=2 and NbComponents=2, with NbRepeat configured as follows :
 * <dl><dd>NbRepeat[P1][L1][S1]=2, NbRepeat[P1][L1][S2]=1,<br>
 *     <dd>NbRepeat[P2][L1][S1]=0, NbRepeat[P2][L1][S2]=3.<br></dl>
 * The values in memory are stored as follows :
 * <dl><dd>V[P1,L1,S1,C1], V[P1,L1,S1,C2], V[P1,L1,S1,C1], V[P1,L1,S1,C2], V[P1,L1,S2,C1], V[P1,L1,S2,C2],<br>
 *     <dd>V[P2,L1,S2,C1], V[P2,L1,S2,C2], V[P2,L1,S2,C1], V[P2,L1,S2,C2], V[P2,L1,S2,C1], V[P2,L1,S2,C2].<br></dl>
 *   With :<br>
 *      <dl><dd>V[Pi,Lj,Sk,Cl]) : the Value of the set of Position, Lamina , SMI and Component (Pi,Lj,Sk,Cl).<br>
 *          <dd>Pi           : the Position index.<br>
 *          <dd>Lj           : the Lamina index.<br>
 *          <dd>Sk           : the SMI index.<br>
 *          <dd>Cl           : the Component index.<br></dl>
 */
class ExportedByCATSAM0Explicit CATSamDimension : public CATSamExplicitRoot
{
  public :
/**
 * Default constructor.
 */
    CATSamDimension() ;
/**
 * Copy constructor
 */
    CATSamDimension(const CATSamDimension& iDimension) ;
/**
 * Creates a <b>CATSamDimension</b> object and fills it with the supplied values.
 * @param iNbPositions
 *   The number of positions.
 * @param iNbLaminates
 *   The number of laminates.
 * @param iNbSMI
 *   The number of positions within each laminate.
 * @param iNbRepeats[NbGlobalPositions]
 *   The number of another form of repetition for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iNbRepeats</b> must be equal to <b>NbGlobalPositions</b>.<br>
 *   With <b>NbGlobalPositions</b> = iNbPositions*iNbLaminates*iNbSMI.<br>
 *   iNbRepeat is valued as follow :<br>
 *      <dl><dd>Nb(P0,L0,S0), Nb(P0,L0,S1), ..., Nb(P0,L0,Sk), Nb(P0,L1,S0), ......, Nb(P0,L1,Sk), ...., Nb(P0,Lj,S0), ......, Nb(P0,Lj,Sk)<br>
 *          <dd>Nb(P1,L0,S0), Nb(P1,L0,S1), ..., Nb(P1,L0,Sk), Nb(P1,L1,S0), ......, Nb(P1,L1,Sk), ...., Nb(P1,Lj,S0), ......, Nb(P1,Lj,Sk)<br>
 *          <dd>Nb(Pi,L0,S0), Nb(Pi,L0,S1), ..., Nb(Pi,L0,Sk), Nb(Pi,L1,S0), ......, Nb(Pi,L1,Sk), ...., Nb(Pi,Lj,S0), ......, Nb(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Nb(Pi,Lj,Sk) : the repeat number of the set of Position, Lamina and SMI (Pi,Lj,Sk).<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br></dl>
 * @param iValueType
 *   The type of value (to calculate <b>UnitaryValueSize</b>).
 * @param iMathType
 *   The mathematical type (to calculate <b>NbValues</b>).
 * @param iMathDimension
 *   The mathematical dimension (to calculate <b>NbValues</b>).
 * @see CATSamValue , CATSamMathType
 */
    CATSamDimension(int iNbPositions, int iNbLaminates, int iNbSMI, const int * const iNbRepeats,
                    CATSamValue iValueType, CATSamMathType iMathType, int iMathDimension) ;

/**
 * Creates a <b>CATSamDimension</b> object and fills it with the supplied values.
 * @param iNbPositions
 *   The number of positions.
 * @param iPositionsNumber[<b>iNbPositions</b>]
 *   The positions number.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iPositionsNumber</b> must be equal to <b>iNbPositions</b>.<br>
 *   If iPositionsNumber is NULL positions numbers are set to 0...iPositions-1.
 * @param iNbLaminates
 *   The number of laminates.
 * @param iLaminatesNumber[<b>iNbLamina</b>]
 *   The laminates number.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iLaminatesNumber</b> must be equal to <b>iNbLamina</b>.<br>
 *   If iLaminatesNumber is NULL laminates numbers are set to 0...iNbLamina-1.
 * @param iNbSMI
 *   The number of positions within each laminate.
 * @param iSMI[<b>iNbSMI</b>]
 *   The positions number within each laminate.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iSMI</b> must be equal to <b>iNbSMI</b>.<br>
 *   If iSMI is NULL SMI numbers are set to 0...iNbSMI-1.<br>
 *   <b>WARNING ::</b> SMI numbers must match to values of the enum <b>CATSamApplyQualifier</b>.
 * @param iNbRepeats[<b>NbGlobalPositions</b>]
 *   The number of another form of repetition for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iNbRepeats</b> must be equal to <b>NbGlobalPositions</b>.<br>
 *   With <b>NbGlobalPositions</b> = iNbPositions*iNbLaminates*iNbSMI.<br>
 *   iNbRepeat is valued as follow :<br>
 *      <dl><dd>Nb(P0,L0,S0), Nb(P0,L0,S1), ..., Nb(P0,L0,Sk), Nb(P0,L1,S0), ......, Nb(P0,L1,Sk), ...., Nb(P0,Lj,S0), ......, Nb(P0,Lj,Sk)<br>
 *          <dd>Nb(P1,L0,S0), Nb(P1,L0,S1), ..., Nb(P1,L0,Sk), Nb(P1,L1,S0), ......, Nb(P1,L1,Sk), ...., Nb(P1,Lj,S0), ......, Nb(P1,Lj,Sk)<br>
 *          <dd>Nb(Pi,L0,S0), Nb(Pi,L0,S1), ..., Nb(Pi,L0,Sk), Nb(Pi,L1,S0), ......, Nb(Pi,L1,Sk), ...., Nb(Pi,Lj,S0), ......, Nb(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Nb(Pi,Lj,Sk) : the repeat number of the set of Position, Lamina and SMI (Pi,Lj,Sk).<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br></dl>
 * @param iRepeatsNumber[<b>NbRepeatTotal</b>]
 *   The repetion number of another form of repetition for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iRepeatsNumber</b> must be equal to <b>NbRepeatTotal</b>.<br>
 *   With <b>NbRepeatTotal</b> = iNbRepeat[0]+iNbRepeat[1]+..+iNbRepeat[<b>NbGlobalPositions-1</b>].<br>
 *   iRepeatsNumber is valued as follow :<br>
 *      <dl><dd>R0(P0,L0,S0), R1(P0,L0,S0), ..., Rx(P0,L0,S0), R0(P0,L0,S1), ......, Rx(P0,L0,S1), ...., R0(P0,L0,Sk), ......, Rx(P0,L0,Sk)<br>
 *          <dd>R0(P0,L1,S0), R1(P0,L1,S0), ..., Rx(P0,L1,S0), R0(P0,L1,S1), ......, Rx(P0,L1,S1), ...., R0(P0,L1,Sk), ......, Rx(P0,L1,Sk)<br>
 *          <dd>R0(P0,Lj,S0), R1(P0,Lj,S0), ..., Rx(P0,Lj,S0), R0(P0,Lj,S1), ......, Rx(P0,Lj,S1), ...., R0(P0,Lj,Sk), ......, Rx(P0,Lj,Sk)<br>
 *          <dd>R0(P1,L0,S0), R1(P1,L0,S0), ..., Rx(P1,L0,S0), R0(P1,L0,S1), ......, Rx(P1,L0,S1), ...., R0(P1,L0,Sk), ......, Rx(P1,L0,Sk)<br>
 *          <dd>R0(P1,L1,S0), R1(P1,L1,S0), ..., Rx(P1,L1,S0), R0(P1,L1,S1), ......, Rx(P1,L1,S1), ...., R0(P1,L1,Sk), ......, Rx(P1,L1,Sk)<br>
 *          <dd>R0(P1,Lj,S0), R1(P1,Lj,S0), ..., Rx(P1,Lj,S0), R0(P1,Lj,S1), ......, Rx(P1,Lj,S1), ...., R0(P1,Lj,Sk), ......, Rx(P1,Lj,Sk)<br>
 *          <dd>R0(Pi,L0,S0), R1(Pi,L0,S0), ..., Rx(Pi,L0,S0), R0(Pi,L0,S1), ......, Rx(Pi,L0,S1), ...., R0(Pi,L0,Sk), ......, Rx(Pi,L0,Sk)<br>
 *          <dd>R0(Pi,L1,S0), R1(Pi,L1,S0), ..., Rx(Pi,L1,S0), R0(Pi,L1,S1), ......, Rx(Pi,L1,S1), ...., R0(Pi,L1,Sk), ......, Rx(Pi,L1,Sk)<br>
 *          <dd>R0(Pi,Lj,S0), R1(Pi,Lj,S0), ..., Rx(Pi,Lj,S0), R0(Pi,Lj,S1), ......, Rx(Pi,Lj,S1), ...., R0(Pi,Lj,Sk), ......, Rx(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Rx(Pi,Lj,Sk) : the sequential number of the Entities which contribute to the collected values.<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br>
 *          <dd><b>NB        :</b> Rx(Pi,Lj,Sk) = <b>-1</b> if collected values are combined or if their origin are unknown.<br></dl>
 *   If iRepeatsNumber is NULL repeat numbers are set to <b>-1</b>.
 * @param iAggregationMode[<b>NbRepeatTotal</b>]
 *   The AggregationMode of the Characteristic values for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iAggregationMode</b> must be equal to <b>NbRepeatTotal</b>.<br>
 *   With <b>NbRepeatTotal</b> = iNbRepeat[0]+iNbRepeat[1]+..+iNbRepeat[<b>NbGlobalPositions-1</b>].<br>
 *   iAggregationMode is valued as follow :<br>
 *      <dl><dd>A0(P0,L0,S0), A1(P0,L0,S0), ..., Ax(P0,L0,S0), A0(P0,L0,S1), ......, Ax(P0,L0,S1), ...., A0(P0,L0,Sk), ......, Ax(P0,L0,Sk)<br>
 *          <dd>A0(P0,L1,S0), A1(P0,L1,S0), ..., Ax(P0,L1,S0), A0(P0,L1,S1), ......, Ax(P0,L1,S1), ...., A0(P0,L1,Sk), ......, Ax(P0,L1,Sk)<br>
 *          <dd>A0(P0,Lj,S0), A1(P0,Lj,S0), ..., Ax(P0,Lj,S0), A0(P0,Lj,S1), ......, Ax(P0,Lj,S1), ...., A0(P0,Lj,Sk), ......, Ax(P0,Lj,Sk)<br>
 *          <dd>A0(P1,L0,S0), A1(P1,L0,S0), ..., Ax(P1,L0,S0), A0(P1,L0,S1), ......, Ax(P1,L0,S1), ...., A0(P1,L0,Sk), ......, Ax(P1,L0,Sk)<br>
 *          <dd>A0(P1,L1,S0), A1(P1,L1,S0), ..., Ax(P1,L1,S0), A0(P1,L1,S1), ......, Ax(P1,L1,S1), ...., A0(P1,L1,Sk), ......, Ax(P1,L1,Sk)<br>
 *          <dd>A0(P1,Lj,S0), A1(P1,Lj,S0), ..., Ax(P1,Lj,S0), A0(P1,Lj,S1), ......, Ax(P1,Lj,S1), ...., A0(P1,Lj,Sk), ......, Ax(P1,Lj,Sk)<br>
 *          <dd>A0(Pi,L0,S0), A1(Pi,L0,S0), ..., Ax(Pi,L0,S0), A0(Pi,L0,S1), ......, Ax(Pi,L0,S1), ...., A0(Pi,L0,Sk), ......, Ax(Pi,L0,Sk)<br>
 *          <dd>A0(Pi,L1,S0), A1(Pi,L1,S0), ..., Ax(Pi,L1,S0), A0(Pi,L1,S1), ......, Ax(Pi,L1,S1), ...., A0(Pi,L1,Sk), ......, Ax(Pi,L1,Sk)<br>
 *          <dd>A0(Pi,Lj,S0), A1(Pi,Lj,S0), ..., Ax(Pi,Lj,S0), A0(Pi,Lj,S1), ......, Ax(Pi,Lj,S1), ...., A0(Pi,Lj,Sk), ......, Ax(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Ax(Pi,Lj,Sk) : the AggregationMode of the Entities which contribute to the collected values.<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br>
 *          <dd><b>NB        :</b> Ax(Pi,Lj,Sk) = <b>CATSamAggregationModeAdd</b> if collected values are combined or if their origin are unknown.<br></dl>
 *   If iAggregationMode is NULL aggregation modes are set to <b>CATSamAggregationModeAdd</b>.
 * @param iValueType
 *   The type of value (to calculate <b>UnitaryValueSize</b>).
 * @param iMathType
 *   The mathematical type (to calculate <b>NbValues</b>).
 * @param iMathDimension
 *   The mathematical dimension (to calculate <b>NbValues</b>).
 * @see CATSamValue , CATSamMathType , CATSamAggregationMode , CATSamApplyQualifier
 */
    CATSamDimension(int iNbPositions, const int * const iPositionsNumber, int iNbLaminates, const int * const iLaminatesNumber, int iNbSMI, const int * const iSMI,
                    const int * const iNbRepeats, const int * const iRepeatsNumber, const CATSamAggregationMode * const iAggregationMode,
                    CATSamValue iValueType, CATSamMathType iMathType, int iMathDimension) ;
/**
 * Destructor.
 */
    virtual ~CATSamDimension() ;
/**
 * Copies the contents of another <b>CATSamDimension</b> object.
 * @param iDimension
 *   The object which is to be copied.
 */
    CATSamDimension &operator = (const CATSamDimension &iDimension) ;
/**
 * Compare the contents of another <b>CATSamDimension</b> object to the current instance.
 * @param iDimension
 *   The object which is to be compared.
 */
    CATBoolean operator == (const CATSamDimension &iDimension) ;

/**
 * Fills a <b>CATSamDimension</b> object with the supplied values.
 * @param iNbPositions
 *   The number of positions.
 * @param iNbLaminates
 *   The number of laminates.
 * @param iNbSMI
 *   The number of positions within each laminate.
 * @param iNbRepeats[NbGlobalPositions]
 *   The number of another form of repetition for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iNbRepeats</b> must be equal to <b>NbGlobalPositions</b>.<br>
 *   With <b>NbGlobalPositions</b> = iNbPositions*iNbLaminates*iNbSMI.<br>
 *   iNbRepeat is valued as follow :<br>
 *      <dl><dd>Nb(P0,L0,S0), Nb(P0,L0,S1), ..., Nb(P0,L0,Sk), Nb(P0,L1,S0), ......, Nb(P0,L1,Sk), ...., Nb(P0,Lj,S0), ......, Nb(P0,Lj,Sk)<br>
 *          <dd>Nb(P1,L0,S0), Nb(P1,L0,S1), ..., Nb(P1,L0,Sk), Nb(P1,L1,S0), ......, Nb(P1,L1,Sk), ...., Nb(P1,Lj,S0), ......, Nb(P1,Lj,Sk)<br>
 *          <dd>Nb(Pi,L0,S0), Nb(Pi,L0,S1), ..., Nb(Pi,L0,Sk), Nb(Pi,L1,S0), ......, Nb(Pi,L1,Sk), ...., Nb(Pi,Lj,S0), ......, Nb(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Nb(Pi,Lj,Sk) : the repeat number of the set of Position, Lamina and SMI (Pi,Lj,Sk).<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br></dl>
 * @param iValueType
 *   The type of value (to calculate <b>UnitaryValueSize</b>).
 * @param iMathType
 *   The mathematical type (to calculate <b>NbValues</b>).
 * @param iMathDimension
 *   The mathematical dimension (to calculate <b>NbValues</b>).
 * @see CATSamValue, CATSamMathType
 */
    HRESULT Fill(int iNbPositions, int iNbLaminates, int iNbSMI, const int * const iNbRepeats,
                 CATSamValue iValueType, CATSamMathType iMathType, int iMathDimension) ;

/**
 * Fills a <b>CATSamDimension</b> object with the supplied values.
 * @param iNbPositions
 *   The number of positions.
 * @param iPositionsNumber[<b>iNbPositions</b>]
 *   The positions number.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iPositionsNumber</b> must be equal to <b>iNbPositions</b>.<br>
 *   If iPositionsNumber is NULL positions numbers are set to 0...iPositions-1.
 * @param iNbLaminates
 *   The number of laminates.
 * @param iLaminatesNumber[<b>iNbLamina</b>]
 *   The laminates number.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iLaminatesNumber</b> must be equal to <b>iNbLamina</b>.<br>
 *   If iLaminatesNumber is NULL laminates numbers are set to 0...iNbLamina-1.
 * @param iNbSMI
 *   The number of positions within each laminate.
 * @param iSMI[<b>iNbSMI</b>]
 *   The positions number within each laminate.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iSMI</b> must be equal to <b>iNbSMI</b>.<br>
 *   If iSMI is NULL SMI numbers are set to 0...iNbSMI-1.<br>
 *   <b>WARNING ::</b> SMI numbers must match to values of the enum <b>CATSamApplyQualifier</b>.
 * @param iNbRepeats[<b>NbGlobalPositions</b>]
 *   The number of another form of repetition for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iNbRepeats</b> must be equal to <b>NbGlobalPositions</b>.<br>
 *   With <b>NbGlobalPositions</b> = iNbPositions*iNbLaminates*iNbSMI.<br>
 *   iNbRepeat is valued as follow :<br>
 *      <dl><dd>Nb(P0,L0,S0), Nb(P0,L0,S1), ..., Nb(P0,L0,Sk), Nb(P0,L1,S0), ......, Nb(P0,L1,Sk), ...., Nb(P0,Lj,S0), ......, Nb(P0,Lj,Sk)<br>
 *          <dd>Nb(P1,L0,S0), Nb(P1,L0,S1), ..., Nb(P1,L0,Sk), Nb(P1,L1,S0), ......, Nb(P1,L1,Sk), ...., Nb(P1,Lj,S0), ......, Nb(P1,Lj,Sk)<br>
 *          <dd>Nb(Pi,L0,S0), Nb(Pi,L0,S1), ..., Nb(Pi,L0,Sk), Nb(Pi,L1,S0), ......, Nb(Pi,L1,Sk), ...., Nb(Pi,Lj,S0), ......, Nb(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Nb(Pi,Lj,Sk) : the repeat number of the set of Position, Lamina and SMI (Pi,Lj,Sk).<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br></dl>
 * @param iRepeatsNumber[<b>NbRepeatTotal</b>]
 *   The repetion number of another form of repetition for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iRepeatsNumber</b> must be equal to <b>NbRepeatTotal</b>.<br>
 *   With <b>NbRepeatTotal</b> = iNbRepeat[0]+iNbRepeat[1]+..+iNbRepeat[<b>NbGlobalPositions-1</b>].<br>
 *   iRepeatsNumber is valued as follow :<br>
 *      <dl><dd>R0(P0,L0,S0), R1(P0,L0,S0), ..., Rx(P0,L0,S0), R0(P0,L0,S1), ......, Rx(P0,L0,S1), ...., R0(P0,L0,Sk), ......, Rx(P0,L0,Sk)<br>
 *          <dd>R0(P0,L1,S0), R1(P0,L1,S0), ..., Rx(P0,L1,S0), R0(P0,L1,S1), ......, Rx(P0,L1,S1), ...., R0(P0,L1,Sk), ......, Rx(P0,L1,Sk)<br>
 *          <dd>R0(P0,Lj,S0), R1(P0,Lj,S0), ..., Rx(P0,Lj,S0), R0(P0,Lj,S1), ......, Rx(P0,Lj,S1), ...., R0(P0,Lj,Sk), ......, Rx(P0,Lj,Sk)<br>
 *          <dd>R0(P1,L0,S0), R1(P1,L0,S0), ..., Rx(P1,L0,S0), R0(P1,L0,S1), ......, Rx(P1,L0,S1), ...., R0(P1,L0,Sk), ......, Rx(P1,L0,Sk)<br>
 *          <dd>R0(P1,L1,S0), R1(P1,L1,S0), ..., Rx(P1,L1,S0), R0(P1,L1,S1), ......, Rx(P1,L1,S1), ...., R0(P1,L1,Sk), ......, Rx(P1,L1,Sk)<br>
 *          <dd>R0(P1,Lj,S0), R1(P1,Lj,S0), ..., Rx(P1,Lj,S0), R0(P1,Lj,S1), ......, Rx(P1,Lj,S1), ...., R0(P1,Lj,Sk), ......, Rx(P1,Lj,Sk)<br>
 *          <dd>R0(Pi,L0,S0), R1(Pi,L0,S0), ..., Rx(Pi,L0,S0), R0(Pi,L0,S1), ......, Rx(Pi,L0,S1), ...., R0(Pi,L0,Sk), ......, Rx(Pi,L0,Sk)<br>
 *          <dd>R0(Pi,L1,S0), R1(Pi,L1,S0), ..., Rx(Pi,L1,S0), R0(Pi,L1,S1), ......, Rx(Pi,L1,S1), ...., R0(Pi,L1,Sk), ......, Rx(Pi,L1,Sk)<br>
 *          <dd>R0(Pi,Lj,S0), R1(Pi,Lj,S0), ..., Rx(Pi,Lj,S0), R0(Pi,Lj,S1), ......, Rx(Pi,Lj,S1), ...., R0(Pi,Lj,Sk), ......, Rx(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Rx(Pi,Lj,Sk) : the sequential number of the Entities which contribute to the collected values.<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br>
 *          <dd><b>NB        :</b> Rx(Pi,Lj,Sk) = <b>-1</b> if collected values are combined or if their origin are unknown.<br></dl>
 *   If iRepeatsNumber is NULL repeat numbers are set to <b>-1</b>.
 * @param iAggregationMode[<b>NbRepeatTotal</b>]
 *   The AggregationMode of the Characteristic values for each set of Position, Lamina and SMI.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iAggregationMode</b> must be equal to <b>NbRepeatTotal</b>.<br>
 *   With <b>NbRepeatTotal</b> = iNbRepeat[0]+iNbRepeat[1]+..+iNbRepeat[<b>NbGlobalPositions-1</b>].<br>
 *   iAggregationMode is valued as follow :<br>
 *      <dl><dd>A0(P0,L0,S0), A1(P0,L0,S0), ..., Ax(P0,L0,S0), A0(P0,L0,S1), ......, Ax(P0,L0,S1), ...., A0(P0,L0,Sk), ......, Ax(P0,L0,Sk)<br>
 *          <dd>A0(P0,L1,S0), A1(P0,L1,S0), ..., Ax(P0,L1,S0), A0(P0,L1,S1), ......, Ax(P0,L1,S1), ...., A0(P0,L1,Sk), ......, Ax(P0,L1,Sk)<br>
 *          <dd>A0(P0,Lj,S0), A1(P0,Lj,S0), ..., Ax(P0,Lj,S0), A0(P0,Lj,S1), ......, Ax(P0,Lj,S1), ...., A0(P0,Lj,Sk), ......, Ax(P0,Lj,Sk)<br>
 *          <dd>A0(P1,L0,S0), A1(P1,L0,S0), ..., Ax(P1,L0,S0), A0(P1,L0,S1), ......, Ax(P1,L0,S1), ...., A0(P1,L0,Sk), ......, Ax(P1,L0,Sk)<br>
 *          <dd>A0(P1,L1,S0), A1(P1,L1,S0), ..., Ax(P1,L1,S0), A0(P1,L1,S1), ......, Ax(P1,L1,S1), ...., A0(P1,L1,Sk), ......, Ax(P1,L1,Sk)<br>
 *          <dd>A0(P1,Lj,S0), A1(P1,Lj,S0), ..., Ax(P1,Lj,S0), A0(P1,Lj,S1), ......, Ax(P1,Lj,S1), ...., A0(P1,Lj,Sk), ......, Ax(P1,Lj,Sk)<br>
 *          <dd>A0(Pi,L0,S0), A1(Pi,L0,S0), ..., Ax(Pi,L0,S0), A0(Pi,L0,S1), ......, Ax(Pi,L0,S1), ...., A0(Pi,L0,Sk), ......, Ax(Pi,L0,Sk)<br>
 *          <dd>A0(Pi,L1,S0), A1(Pi,L1,S0), ..., Ax(Pi,L1,S0), A0(Pi,L1,S1), ......, Ax(Pi,L1,S1), ...., A0(Pi,L1,Sk), ......, Ax(Pi,L1,Sk)<br>
 *          <dd>A0(Pi,Lj,S0), A1(Pi,Lj,S0), ..., Ax(Pi,Lj,S0), A0(Pi,Lj,S1), ......, Ax(Pi,Lj,S1), ...., A0(Pi,Lj,Sk), ......, Ax(Pi,Lj,Sk)<br></dl>
 *   With :<br>
 *      <dl><dd>Ax(Pi,Lj,Sk) : the sequential number of the Entities which contribute to the collected values.<br>
 *          <dd>Pi           : the Position index (between 0 and iNbPositions-1).<br>
 *          <dd>Lj           : the Lamina index (between 0 and iNbLaminates-1).<br>
 *          <dd>Sk           : the SMI index (between 0 and iNbSMI-1).<br>
 *          <dd><b>NB        :</b> Ax(Pi,Lj,Sk) = <b>CATSamAggregationModeAdd</b> if collected values are combined or if their origin are unknown.<br></dl>
 *   If iAggregationMode is NULL aggregation modes are set to <b>CATSamAggregationModeAdd</b>.
 * @param iValueType
 *   The type of value (to calculate <b>UnitaryValueSize</b>).
 * @param iMathType
 *   The mathematical type (to calculate <b>NbValues</b>).
 * @param iMathDimension
 *   The mathematical dimension (to calculate <b>NbValues</b>).
 * @see CATSamValue, CATSamMathType, CATSamAggregationMode, CATSamApplyQualifier
 */
    HRESULT Fill(int iNbPositions, const int * const iPositionsNumber, int iNbLaminates, const int * const iLaminatesNumber, int iNbSMI, const int * const iSMI,
                 const int * const iNbRepeats, const int * const iRepeatsNumber, const CATSamAggregationMode * const iAggregationMode,
                 CATSamValue iValueType, CATSamMathType iMathType, int iMathDimension) ;

/**
 * Change the number of Positions of the <b>CATSamDimension</b> object with the supplied values and set the positions numbers.
 * @param iNbPositions
 *   The number of positions.
 * @param iPositionsNumber[<b>iNbPositions</b>]
 *   The positions number.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iPositionsNumber</b> must be equal to <b>iNbPositions</b>.<br>
 *   If iPositionsNumber is NULL positions numbers are set to 0...iPositions-1.
 *   If iPositions is NULL positions numbers are set to 0...iPositions-1.
 */
    HRESULT SetNbPositions(int iNbPositions, const int * const iPositionsNumber = NULL) ;

/**
 * Change the number of Laminates of the <b>CATSamDimension</b> object with the supplied values and set the Laminates numbers.
 * @param iNbLaminates
 *   The number of laminates.
 * @param iLaminatesNumber[<b>iNbLamina</b>]
 *   The laminates number.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iLaminatesNumber</b> must be equal to <b>iNbLamina</b>.<br>
 *   If iLaminatesNumber is NULL laminates numbers are set to 0...iNbLamina-1.
 */
    HRESULT SetNbLaminates(int iNbLaminates, const int * const iLaminatesNumber = NULL) ;

/**
 * Change the number of positions within each laminate of the <b>CATSamDimension</b> object with the supplied values and set the SMI numbers.
 * @param iNbSMI
 *   The number of positions within each laminate.
 * @param iSMI[<b>iNbSMI</b>]
 *   The positions number within each laminate.<br>
 *   <b>WARNING ::</b> The size of the Array <b>iSMI</b> must be equal to <b>iNbSMI</b>.<br>
 *   If iSMI is NULL SMI numbers are set to 0...iNbSMI-1.<br>
 *   <b>WARNING ::</b> SMI numbers must match to values of the enum <b>CATSamApplyQualifier</b>.
 */
    HRESULT SetNbSMI(int iNbSMI, const int * const iSMI = NULL) ;

/**
 * Change the number of Repeat of the <b>CATSamDimension</b> object for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex) with the supplied values and set the Repeat numbers.
 * @param iPositionIndex
 *   The Position number.
 * @param iLaminaIndex
 *   The Lamina index.
 * @param iSMIIndex
 *   The SMI number.
 * @param iNbRepeats
 *   The number of Repetition for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).
 * @param iRepeatsNumber[<b>iNbRepeats</b>]
 *   The repetion numbers for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).<br>
 *   <b>WARNING ::</b> The size of the Array <b>iRepeatsNumber</b> must be equal to <b>iNbRepeats</b>.<br>
 *   iRepeatsNumber is valued as follow :<br>
 *     <dl><dd>R0, R1, ..., Rx.<br></dl>
 *   with :<br>
 *     <dl><dd>Rx : the sequential number of the Entities which contribute to the collected values.<br>
 *         <dd><b>NB :</b> Rx = <b>-1</b> if collected values are combined or if their origin are unknown.<br></dl>
 *   If iRepeatsNumber is NULL repeat numbers are set to <b>-1</b>.<br>
 * @param iAggregationMode[<b>iNbRepeats</b>]
 *   The AggregationMode of the Characteristic values for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).<br>
 *   <b>WARNING ::</b> The size of the Array <b>iAggregationMode</b> must be equal to <b>iNbRepeats</b>.<br>
 *   iAggregationMode is valued as follow :<br>
 *     <dl><dd>A0, A1, ..., Ax.<br></dl>
 *   with :<br>
 *     <dl><dd>Ax : the aggregation mode of the Entities which contribute to the collected values.<br>
 *         <dd><b>NB :</b> Ax = <b>CATSamAggregationModeAdd</b> if collected values are combined or if their origin are unknown.<br></dl>
 *   If iAggregationMode is NULL aggregation modes are set to <b>CATSamAggregationModeAdd</b>.<br>
 * @see CATSamAggregationMode
 */
    HRESULT SetNbRepeat(int iPositionIndex, int iLaminaIndex, int iSMIIndex, int iNbRepeats, const int * const iRepeatsNumber = NULL, const CATSamAggregationMode * const iAggregationMode = NULL) ;

/**
 * Change the number of Components of the <b>CATSamDimension</b> object with the supplied values,
 * and set the Components numbers.
 * @param iNbComponents
 *   The number of Components.
 * @param iComponents[<b>iNbComponents</b>]
 *   The Components number.
 *   <b>WARNING ::</b> The size of the Array <b>iComponents</b> must be equal to <b>iNbComponents</b>.<br>
 *   If iComponents is NULL positions numbers are set to 0...iNbComponents-1.
 */
    HRESULT SetNbComponents(int iNbComponents, const int * const iComponents = NULL) ;

/**
 * Change the size of a single value.
 * and set the Components numbers.
 * @param iValueType
 *   The type of value (to calculate <b>UnitaryValueSize</b>).
 * @param iUnitaryValueSize
 *   The Size of each Component.
 */
    HRESULT SetUnitaryValueSize(CATSamValue iValueType) ;

/**
 * Change the value size of a Component.
 * and set the Components numbers.
 * @param iUnitaryValueSize
 *   The Size of each Component.
 */
    HRESULT SetUnitaryValueSize(int iUnitaryValueSize) ;

/**
 * Return the number of Positions of the <b>CATSamDimension</b> object.
 */
    int GetNbPositions() const ;

/**
 * Get the positions of the <b>CATSamDimension</b> object.
 */
    const int* GetPositions() const ;

/**
 * Return the number of Laminates of the <b>CATSamDimension</b> object.
 */
    int GetNbLaminates() const ;
              
/**
 * Get the Laminates of the <b>CATSamDimension</b> object.
 */
    const int* GetLaminates() const ;

/**
 * Return the number of positions within each laminate of the <b>CATSamDimension</b> object.
 */
    int GetNbSMI() const ;
              
/**
 * Get the positions within each laminate of the <b>CATSamDimension</b> object.
 */
    const int* GetSMI() const ;

/**
 * Get the whole number of Repeat of the <b>CATSamDimension</b> object.
 * @return
 *    The whole number of Repeat of the <b>CATSamDimension</b> object computed as folow :<br>
 *    <dl><dd><b>NbRepeatTotal</b> = NbRepeat[0]+NbRepeat[1]+..+NbRepeat[<b>NbGlobalPositions-1</b>].<br>
 *        <dd>with <b>NbGlobalPositions</b> = iNbPositions*iNbLaminates*iNbSMI.<br></dl>
 */
    int GetNbRepeatTotal() const ;

/**
 * Get the number of Repeat of the <b>CATSamDimension</b> object for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).
 * @param iPositionIndex
 *   The Position index.
 * @param iLaminaIndex
 *   The Lamina index.
 * @param iSMIIndex
 *   The SMI index.
 */
    int GetNbRepeat(int iPositionIndex, int iLaminaIndex, int iSMIIndex) const ;

/**
 * Get the Repeat of the <b>CATSamDimension</b> object for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).
 * @param iPositionIndex
 *   The Position index.
 * @param iLaminaIndex
 *   The Lamina index.
 * @param iSMIIndex
 *   The SMI index.
 */
    const int* GetRepeat(int iPositionIndex, int iLaminaIndex, int iSMIIndex) const ;

/**
 * Get the Aggregation Mode of the <b>CATSamDimension</b> object for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).
 * @param iPositionIndex
 *   The Position index.
 * @param iLaminaIndex
 *   The Lamina index.
 * @param iSMIIndex
 *   The SMI index.
 * @see CATSamAggregationMode
 */
    const CATSamAggregationMode* GetAggregationMode(int iPositionIndex, int iLaminaIndex, int iSMIIndex) const ;
   
/**
 * Obtain the Repeat configuration.<br>
 * Return True if Contain variable Repeat.
 */
    CATBoolean HadVariableRepeat() const ;
      
/**
 * Obtain the Repeat configuration.<br>
 * Return True if Contain negative NbRepeat.
 */
    CATBoolean HadNegativeRepeat() const ;

/**
 * Get the number of Components of the <b>CATSamDimension</b> object.
 */
    int GetNbComponents() const ;
              
/**
 * Get the Components of the <b>CATSamDimension</b> object.
 */
    const int* GetComponents() const ;

/**
 * Return the number of values of the <b>CATSamDimension</b> object.
 */
    int GetNbValues() const ;

/**
 * Return the size of values of the <b>CATSamDimension</b> object.
 */
    int GetSizeValues() const ;

/**
 * Return the number of collected values for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).
 * @param iPositionIndex
 *   The Position index.
 * @param iLaminaIndex
 *   The Lamina index.
 * @param iSMIIndex
 *   The SMI index.
 */
     int GetNbValues(int iPositionIndex, int iLaminaIndex, int iSMIIndex) const ;

/**
 * Return the size of collected values for the set of Position, Lamina and SMI (iPositionIndex, iLaminaIndex, iSMIIndex).
 * @param iPositionIndex
 *   The Position index.
 * @param iLaminaIndex
 *   The Lamina index.
 * @param iSMIIndex
 *   The SMI index.
 */
    int GetSizeValues(int iPositionIndex, int iLaminaIndex, int iSMIIndex) const ;

/**
 * Get the value size of a Component.
 */
    int GetUnitaryValueSize() const;

/**
 * Compute the offset on Values Pointer according to the definition of the <b>CATSamDimension</b> object.
 * @param iValuePointerBase
 *   The Pointer on Values.
 * @param iPositionIndex
 *   The Position Index.
 * @param iLaminaIndex
 *   The Lamina Index.
 * @param iSMIIndex
 *   The SMI Index.
 * @param iRepeatIndex
 *   The Repeat Index for the of Position and SMI [iPositionIndex, iSMIIndex].
 * @param iComponentIndex
 *   The Component Index.
 */
    const void* ValuesAddress(const void* iValuePointerBase, int iPositionIndex, int iLaminaIndex = 0, int iSMIIndex = 0, int iRepeatIndex = 0, int iComponentIndex = 0) const ;

/**
 * Dumps the contents of the <b>CATSamDimension</b> object.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(int iIndent = 0, int iLoopSize = 10) const ; 

/**
 * Dumps the contents of the <b>CATSamDimension</b> object.
 * @param oListOfString
 *   The List of CATUnicodeString.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(CATListValCATUnicodeString* oListOfString, int iIndent = 0, int iLoopSize = 10) const ;

/**
 * Test the type of the instance.
 * Return True if iType = CATSamDimension
 * @param iType
 *   The type to test.
 */
    CATBoolean IsAKindOf(const CATString & iType) const;

/**
 * Give a public access to the Work field.
 */
    int * const PublicWorkPtr ;

  private :
    // Friend Class for Private Methods
    friend class CATSamUVWAdaptor;
    friend class CATSamValuesAdaptor;
    friend class CATSamDimensionAdaptor;
    friend class CATAnalysisCharacCollector;
    friend class CATAnalysisCharacCollectorPacked;
    friend class CATSamCollectorBuilderForMeshSet;
    friend class CATSamCollectorBuilderForSetCharac;
    friend class CATSamCollectorBuilderForPreproEntity;
    friend class CATESamCharacCollectorForCombinedEntity;
    friend class CATESamCharacCollectorForProxyEntity;

    // GetHashCode
    unsigned int GetHashCode(unsigned int iHasherFactor);
    // Hash
    static unsigned int Hash(const void* iDimensionPtr, const void* iHasherFactor);
    static unsigned int SimpleHash(void* iDimensionPtr);
    // Compare
    static int Compare(const void* iDimension1Ptr, const void* iDimension2Ptr);
    static int SimpleCompare(void* iDimension1Ptr, void* iDimension2Ptr);
    // Set/GetValuesDistributionMode.
    inline CATSamValuesDistributionMode GetValuesDistributionMode() const;
    inline HRESULT SetValuesDistributionMode(CATSamValuesDistributionMode iValuesDistributionMode);
    // Stream the object.
    // @param ioStream : The streaming buffer.
    // @param iVersion : The version of stream.
    HRESULT Stream(CATSamStream &ioStream, int iVersion) const ;
    // Unstream the object.
    // @param iStream : The unstreaming buffer.
    // @param iVersion : The version of stream.
    HRESULT UnStream(CATSamStream &iStream, int iVersion) ;
    // Obtain the Repeat configuration.<br>
    // @Return True if Contain NbRepeat greater than 1.
    CATBoolean HadNbRepeatGreaterThanOne() const ;
    // Obtain the Repeat configuration.<br>
    // @Return True if Contain Repeat equal to 0.
    CATBoolean HadNullRepeat() const ;
    // Obtain the AgregationMode configuration.<br>
    // @Return True if Contain negative NbRepeat.
    CATBoolean HadReplaceAgregationMode() const ;
    // Combine
    HRESULT Combine(const CATSamDimension &iDimensionToCombine) ;
    // ApplyOffsetOnRepeatNumber
    HRESULT ApplyOffsetOnRepeatNumber(int iOffset) ;

  protected :
    /** Give access for CATSamAxis et CATSamDimensionHandler*/
    friend class CATSamAxis;
    friend class CATSamDimensionHandler;
    CATSamDimensionHandler* GetDimensionHandler();
    HRESULT SetDimensionHandler(CATSamDimensionHandler* iDimensionHandler);

    /** Compare the Structure of another CATSamDimension object to the current instance.*/
    CATBoolean CompareStructure(const CATSamDimension &iDimension) const;
    // GetNbRepeatTo
    HRESULT GetNbRepeatTo(int iPositionIndex, int iLaminaIndex, int iSMIIndex, int iRepeatIndex, int &oNbRepeatTo) const ;

    // DATA MEMBERS
    int                      Work ;
    CATSamDimensionData     _DimensionData;
    CATSamDimensionHandler* _DimensionHandler;
    unsigned int            _HashCode;

  private :
    // GetType
    virtual CATSamExplicitRoot::RootType GetType() const;
} ;

inline CATSamValuesDistributionMode CATSamDimension::GetValuesDistributionMode() const { return _DimensionData.GetValuesDistributionMode(); }
inline HRESULT CATSamDimension::SetValuesDistributionMode(CATSamValuesDistributionMode iValuesDistributionMode) { return _DimensionData.SetValuesDistributionMode(iValuesDistributionMode); }

#endif

