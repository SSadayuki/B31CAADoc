#ifndef CATIDftStandard_h
#define CATIDftStandard_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "DraftingItfCPP.h"
#include "CATCollec.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftStandard ;
#else
extern "C" const IID IID_CATIDftStandard;
#endif

#include "CATDftStandardEnum.h"

class CATUnicodeString ;
class CATIAnnotationStandard;
class CATIStandardValue;
class CATUnicodeChar;

/**
 * Interface which describes the object Standard. This object is 
 * responsible for the management of the standard used for annotations
 * creations in a drawing documentview and a 3D model.
 */

class ExportedByDraftingItfCPP CATIDftStandard : public IUnknown
{	
public:

  /**
   * Gets the name of the standard.
   * @param wchar_t **oName
   * Name of the standard
   */  
  virtual HRESULT GetName ( wchar_t **oName ) = 0;


  /**
   * Gets the fundamental standard from which the standard is derived.
   * @param wchar_t **oName
   * Name of the fundamental standard: ANSI, DIN, JIS, ASME, ISO
   */  
  virtual HRESULT GetParentName ( wchar_t **oName ) = 0;
  
  
  /**
   *  @nodoc
   */
  virtual HRESULT SetName ( const wchar_t *iName ) = 0;
  
  /**
   *  @nodoc
   */
  virtual HRESULT SetParentName ( const wchar_t *iName ) = 0;
  
  // Get the type of a standard value
  /**
   *  @nodoc
   */
  virtual HRESULT GetValueType(const char *iName, CATDftStandardValueType *oType, int *oSize=0) = 0;
  
  /**
   * Read a standard value as an int (array).
   * @param const char *iName
   * Name of the parameter to read. Ex: "Dimension.DIMLUnderline"
   * @param int *oValue
   * The array in which values will be put
   * @param int *oSize
   * The number of element write in oValue.
   */  
  virtual HRESULT GetValue(const char *iName, int *oValue, int *oSize=0) = 0;

  /**
   * Read a standard value as an int (single).
   * @param const char *iName
   * Name of the parameter to read. Ex: "Dimension.DIMLUnderline"
   * @param int iIndex
   * The index of the value to read in the tab
   * @param int & oValue
   * a int in which value will be put.
   */  
  virtual HRESULT GetValue(const char *iName, int iIndex, int & oValue) = 0;
  
  /**
   * Read a standard value as a double (array).
   * @param const char *iName
   * Name of the parameter to read. Ex: "Dimension.DIMLFlippedOverrun"
   * @param double *oValue
   * The array in which values will be put
   * @param int *oSize
   * The number of element write in oValue.
   */  
  virtual HRESULT GetValue(const char *iName, double *oValue, int *oSize=0) = 0;
  
  /**
   * Read a standard value as a double (single).
   * @param const char *iName
   * Name of the parameter to read. Ex: "Dimension.DIMLFlippedOverrun"
   * @param int iIndex
   * The index of the value to read in the tab
   * @param double & oValue
   * a double in which value will be put.
   */  
  virtual HRESULT GetValue(const char *iName, int iIndex, double & oValue) = 0;
  
  /**
   * Read a standard value as a CATUnicodeString (array).
   * @param const char *iName
   * Name of the parameter to read. Ex: "General.DefaultToleranceFormat"
   * @param CATUnicodeString **oValue
   * The array adrdess in which values will be put
   * @param int *oSize
   * The number of element write in oValue.
   */  
  virtual HRESULT GetValue(const char *iName, CATUnicodeString **oValue, int *oSize=0) = 0;
  
  /**
   * Read a standard value as a CATUnicodeString (single).
   * @param const char *iName
   * Name of the parameter to read. Ex: "General.DefaultToleranceFormat"
   * @param int iIndex
   * The index of the value to read in the tab
   * @param CATUnicodeString & oValue
   * a CATUnicodeString in which value will be put.
   */  
  virtual HRESULT GetValue(const char *iName, int iIndex, CATUnicodeString & oValue) = 0;
  
  // Tests if a standard value is locked (=Read Only)
  /**
   *  @nodoc
   */
  virtual HRESULT IsLocked(const char *iName, int &oLock)=0;
  
  // List All Parameters
  /**
   *  @nodoc
   */
  virtual HRESULT ListParameters(CATListOfCATUnicodeString *oList)=0;
  
  // give the index of the thickness 
  /**
   *  @nodoc
   */
  virtual HRESULT ConvertThickness ( double iMMThickness, int & oIndexThickness)=0;
  
  //-------------------------------------------------------------------------
  // Access to the Descriptions (complex types or user defined types)
  //-------------------------------------------------------------------------
  
  // Get the User-defined type name of a "complex" type (for DftStdComplex parameters)
  /**
   *  @nodoc
   */
  virtual HRESULT GetDescriptionType(const char *iName, CATUnicodeString *oDescType) = 0;
  
  // Get the User-defined type name of a "complex" type (for DftStdComplex parameters)
  /**
   *  @nodoc
   */
  virtual HRESULT GetDescriptionAttributes(const char *iName, CATListOfCATUnicodeString *oDescAttr) = 0;
  
  // List All descriptions
  /**
   *  @nodoc
   */
  virtual HRESULT ListDescriptions(const char *iType, CATListOfCATUnicodeString *oList)=0;
  
  
  //-------------------------------------------------------------------------
  // Private methods
  //-------------------------------------------------------------------------
  
  // Read Standard Access information
  /**
   *  @nodoc
   */
  virtual HRESULT GetImplementationStandard(CATIAnnotationStandard ** ostd) = 0;
  // Read Standard Access information
  /**
   *  @nodoc
   */
  virtual HRESULT GetImplementationStandard(CATIStandardValue ** ostd) = 0;


  //-------------------------------------------------------------------------
  // Internal methods - to be used for Test
  //-------------------------------------------------------------------------
  
  // Internal dump method
  /**
   *  @nodoc
   */
  virtual HRESULT Output()=0;

  // Convert a standard value to a CATUnicodeString (array)
  /**
   *  @nodoc
   */
  virtual HRESULT GetValueAsUnicodeString(const char *iName, CATUnicodeString **oValue, int *oSize=0) = 0;

  // Convert a standard value to a CATUnicodeString (single element)
  /**
   *  @nodoc
   */
  virtual HRESULT GetValueAsUnicodeString(const char *iName, int iRank, CATUnicodeString *oValue) =0;

  // Reads the version number of the standard element
  /**
   *  @nodoc
   */
  virtual int GetVersion()=0; 

  /**
   *  @nodoc
   */
  virtual void UpdateCache()=0;
  
  /** 
    * Retrieves the font name and the char-code value for a symbol with given <SYMBOL NAME>
    * from the standard. 
    *
    * @param iSymbolName [in]
    *   The name of the engineering symbol whose font name and char-code value have to be retrieved.
    * @param oFontName [out]
    *   Font name for the requested symbol.
    * @param oSymbolUnicode [out]
    *   Symbol unicode value in the above font file.
    *
    * @precondition iSymbolName should not be an empty string
    * @postcondition oFontName should be installed on the current system
    *
    * @return
    *   <code>S_OK</code> if the given symbol name is found in the standard (version greater or equal to V5R17)
    *                     and its font name and are successfuly retrieved.
    *   <code>S_FALSE</code> if the given symbol name is found in the standard and its font is not installed
    *                        on the current system but this symbol corresponds to a basic symbol (default symbols
    *                        delivered in standard by Dassault Systemes). In this case, oFontName and oSymbolUnicode
    *                        are valuated with default values specified in standard.
    *   <code>E_INVALIDARG</code> iSymbolName is an empty string or not defined in the standard
    *   <code>E_FAIL</code> Standard is lower than V5R17 or something fails
    */
    virtual HRESULT GetEngineeringSymbolDetails(const CATUnicodeString &iSymbolName, CATUnicodeString &oFontName,
                                                CATUnicodeChar &oSymbolUnicode) = 0;
};

#endif
