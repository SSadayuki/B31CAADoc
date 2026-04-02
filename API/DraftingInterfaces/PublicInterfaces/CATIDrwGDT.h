#ifndef CATIDrwGDT_H
#define CATIDrwGDT_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIDrwAnnotationComponent.h"
#include "CATDrwGDTDef.h"

class CATUnicodeString;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwGDT ;
#else
extern "C" const IID IID_CATIDrwGDT ;
#endif

/**
* Interface on GDT objects.
*/
class ExportedByDraftingItfCPP CATIDrwGDT : public CATIDrwAnnotationComponent
{
  CATDeclareInterface;
  
public:
  
  /**
  * Returns the number of row of the GDT.
  */
  virtual int GetGDTRowNumber() = 0;
  /**
  * Returns the number of reference boxes in a row of the GDT.
  * @param iRowNumber
  *   The row to analyse.
  */
  virtual int GetGDTReferenceNumber(int iRowNumber) = 0;
  
  /**
  * Set the symbol of a row in a GDT.
  * @param iRowNumber
  *   The row to set.
  * @param iGDTSymbol
  *   The symbol to use.
  * See definition in CATDrwGDTDef
  */
  virtual void SetGDTToleranceType(int iRowNumber, CATDrwGDTSymbol iGDTSymbol)  = 0;

  /**
  * Set the GDT tolerance box.
  * <br>The tolerance box is the first box after the symbol box.
  * @param iRowNumber
  *   The row to set.
  * @param iValueType
  *   The type of the tolerance value (unspec/diameter/radius).
  * @param iValue
  *   The tolerance value.
  * @param iModifier
  *   The modifier on the value (least material, etc...).
  * See definition in CATDrwGDTDef
  */
  virtual void SetGDTTolerance(int iRowNumber, CATDrwGDTValueType iValueType, CATUnicodeString iValue, CATDrwGDTModifier iModifier )  = 0;

  /**
  * Add a reference box at the end of a row of a GDT.
  * @param iRowNumber
  *   The row to set.
  * @param iDatum
  *   The reference text.
  * @param iModifier
  *   The modifier on the datum (least material, etc...).
  * See definition in CATDrwGDTDef
  */
  virtual void AddGDTReference(int iRowNumber, CATUnicodeString iDatum, CATDrwGDTModifier iModifier)  = 0;
  /**
  * Set an existing reference box in a row of a GDT.
  * @param iRowNumber
  *   The row to set.
  * @param iReferenceNumber
  *   The reference to modify.
  * @param iDatum
  *   The new reference text.
  * @param iModifier
  *   The new modifier on the datum (least material, etc...).
  * See definition in CATDrwGDTDef
  */
  virtual void SetGDTReference(int iRowNumber, int iReferenceNumber, CATUnicodeString &iDatum, CATDrwGDTModifier &iModifier)=0;
  /**
  * Remove an existing reference box in a row of a GDT.
  * @param iRowNumber
  *   The row number.
  * @param iReferenceNumber
  *   The reference to delete.
  */
  virtual void DelGDTReference(int iRowNumber, int iReferenceNumber)=0;
  
  /**
  * Get the symbol of a row in a GDT.
  * @param iRowNumber
  *   The row to set.
  * @return 
  *   The symbol in use.
  * See definition in CATDrwGDTDef
  */
  virtual CATDrwGDTSymbol   GetGDTToleranceType(int iRowNumber)  = 0;
  /**
  * Get the GDT tolerance box.
  * <br>The tolerance box is the first box after the symbol box.
  * @param iRowNumber
  *   The row to set.
  * @param oValueType
  *   The type of the tolerance value (unspec/diameter/radius).
  * @param oValue
  *   The tolerance value.
  * @param oModifier
  *   The modifier on the value (least material, etc...).
  * See definition in CATDrwGDTDef
  */
  virtual void GetGDTTolerance(int iRowNumber, CATDrwGDTValueType &oValueType, CATUnicodeString &oValue, CATDrwGDTModifier &oModifier )  = 0;
  /**
  * Get a reference box in a row of a GDT.
  * @param iRowNumber
  *   The row to set.
  * @param iReferenceNumber
  *   The reference to modify.
  * @param oDatum
  *   The new reference text.
  * @param oModifier
  *   The new modifier on the datum (least material, etc...).
  * See definition in CATDrwGDTDef
  */
  virtual void GetGDTReference(int iRowNumber, int iReferenceNumber, CATUnicodeString & oDatum, CATDrwGDTModifier &oModifier)  = 0;
  
  /**
  * @nodoc
  */
  virtual void GetHVPosition (int& HPosition, int& VPosition) = 0;
  /**
  * @nodoc
  */
  virtual void SetHVPosition (int HPosition, int VPosition) = 0;
};

CATDeclareHandler ( CATIDrwGDT, CATIDrwAnnotationComponent);
#endif
