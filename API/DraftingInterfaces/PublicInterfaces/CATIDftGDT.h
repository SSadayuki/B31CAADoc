#ifndef CATIDftGDT_H
#define CATIDftGDT_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 2002
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
//==============================================================================

#include "CATDftTextParameters.h"
#include "CATIDftAnnotation.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#include "CATDrwTextPropertiesEnum.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGDT ;
#else
extern "C" const IID IID_CATIDftGDT ;
#endif

class CATIDftTextRange;
/** 
* This interface give access to GDT parameters.
*/
class ExportedByDraftingItfCPP CATIDftGDT : public CATIDftAnnotation
{
    
public:

  /**
  * Returns the number of lines in the GDT.
  */
  virtual HRESULT GetRowNumber( int *oRowNumber ) = 0;

  /**
  * Returns the number of references in a row of the GDT.
  * @param iRowNumber
  *   The number of the row to analyse.
  * @param oRefNumber
  *   The number of references in this row.
  */
  virtual HRESULT GetReferenceNumber( const int iRowNumber, int *oRefNumber ) = 0;

  /**
  * Returens the symbol used in the row of the GDT.
  * @param iRowNumber
  *   The number of the row to analyze.
  * @param oSymbol
  *   The symbol in this row.
  * See also DftGDTSymbol
  */
  virtual HRESULT GetToleranceType( const int iRowNumber, DftGDTSymbol *oSymbol )  = 0;

  /**
  * Sets the symbol used in the row of the GDT.
  * @param iRowNumber
  *   The number of the row analyse.
  * @param iGDTSymbol
  *   The symbol to use in this row.
  * See also DftGDTSymbol
  */
  virtual HRESULT SetToleranceType( const int iRowNumber, DftGDTSymbol iGDTSymbol )  = 0;

  /**
  * Returns the CATIDftTextRange of tolerance value and reference value.
  * @param iRowNumber
  *   The number of the row to analyse
  *   If iRowNumber equals 0 to analyse upper text or lower text.
  *   If iRowNumber is greater than 0 analyse tolerance value or reference value.
  * @param iNumber
  *   The modifier to analyse in this row:
  *   If iRowNumber equals 0 and iNumber = 0 represent upper text 
  *   If iRowNumber equals 0 and iNumber = 1 represent lower text 
  *   If iRowNumber is greater than 0 and iNumber equals 0 to analyse tolerance value
  *   If iRowNumber is greater than 0 and iNumber is greater than 0 to analyse reference value.
  * @param oValue
  *   The string which is specified.
  *	  If there is no textrange which is corresponded above, then NULL is given back.
  * See also CATIDftTextRange
  */
  virtual HRESULT GetTextRange( const int iRowNumber, const int iNumber, CATIDftTextRange **oValue )  = 0;

  /**
  * Returns the CATIDftTextRange of tolerance value.
  * @param iRowNumber
  *   The number of the row to analyse
  * @param oValue
  *   The string of the tolerance value.
  * See also CATIDftTextRange
  */
  virtual HRESULT AddToleranceValue( const int iRowNumber, CATIDftTextRange **oValue )  = 0;

  /**
  * Returns the CATIDftTextRange of reference value.
  * @param iRowNumber
  *   The number of the row to analyse
  * @param iReferenceNumber
  *   The modifier to analyse in this row.
  * @param oValue
  *   The string of the reference value.
  * See also CATIDftTextRange
  */
  virtual HRESULT AddReferenceValue( const int iRowNumber, const int iReferenceNumber, CATIDftTextRange **oValue )  = 0;

  /**
  * Deletes a reference box on a GDT row.
  * @param iRowNumber
  *   The number of the row
  * @param iReferenceNumber
  *   The modifier to delete in this row.
  */
  virtual HRESULT RemoveReference( const int iRowNumber, const int iReferenceNumber )  = 0;

  /**
  * @nodoc
  *  This method is now replaced by @href CATIDrwTextProperties#GetAnchorPoint
  *
  * Get Anchor point.
  * @param oAnchorPoint
  *   AnchorPoint
  */
  virtual HRESULT GetAnchorPoint( CATDrwAnchorPoint *oAnchorPoint )  = 0;

  /**
  * @nodoc
  *  This method is now replaced by @href CATIDrwTextProperties#SetAnchorPoint
  *
  * Get Anchor point.
  * @param oAnchorPoint
  *   AnchorPoint
  */
  virtual HRESULT SetAnchorPoint( const CATDrwAnchorPoint iAnchorPoint )  = 0;

};

#endif
