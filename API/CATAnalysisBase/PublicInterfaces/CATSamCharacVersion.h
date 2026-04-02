// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATSamCharacVersion
//
//=============================================================================
//
// Usage Notes: version information of a collector characteristic
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//=============================================================================
#ifndef CATSamCharacVersion_H_
#define CATSamCharacVersion_H_

#include "CATSAM0Explicit.h"
#include "CATSamExplicitRoot.h"
#include "CATAnalysisExplicitTypes.h"

#include "CATListOfCATUnicodeString.h"

class CATAnalysisExplicitParent ;
class CATSamStream ;


/**
 * Version information of a collector characteristic.<br>
 * @see CATSamValue, CATSamMathType, CATSamRefFrame
 */
class ExportedByCATSAM0Explicit CATSamCharacVersion : public CATSamExplicitRoot
{
  public :
  /**
  * The type of value.  .
  */
    CATSamValue      ValueType ;
  /**
  * The mathematical type.  .
  */
    CATSamMathType   MathType ;
  /**
  * The mathematical dimension.  .
  */
    int              MathDimension ;
  /**
  * The type of reference frame..  .
  */
    CATSamRefFrame   RefFrame ;
  /**
  * The category of the objects for which the collector characteristic has values.
  */
    CATSamValue      Category ;
  /**
  * The components of the mathematical type.
  */
    CATSamComponent  Components;
  /**
  * The combination of the Values.
  */
    CATBoolean       ValuesAreCombined ;
  /**
  * The subtype.
  */
    CATString        SubType ;

/**
 * Default constructor.
 */
  CATSamCharacVersion() ;

/**
 * Destructor
 */
  virtual ~CATSamCharacVersion() ;

/**
 * Copy constructor.
 */
    CATSamCharacVersion(const CATSamCharacVersion &iVersion) ;

/**
 * Assignment operator.
 */
    CATSamCharacVersion &operator = (const CATSamCharacVersion &iVersion) ;

/**
 * Dumps the contents of the object.
 * @param oListOfString
 *   The List of CATUnicodeString.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 */
    void Dump(CATListValCATUnicodeString* oListOfString, int iIndent = 0) const ;

/**
 * Dumps the contents of the object.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 */
    void Dump(int iIndent = 0) const ;

/**
 * Equality operator. Used to check if two <b>CATSamCharacVersion</b> objects contain the same information.
 * @param iVersion
 *   A reference to the <b>CATSamCharacVersion</b> object to compare with.
 */
    CATBoolean operator==(const CATSamCharacVersion &iVersion) const ;

/**
 * Inequality operator. Used to check if two <b>CATSamCharacVersion</b> objects do not contain the same information
 * @param iVersion
 *   A reference to the <b>CATSamCharacVersion</b> object to compare with.
 */
    CATBoolean operator!=(const CATSamCharacVersion &iVersion) const ;

/**
 * Checks if the contents of the <b>CATSamCharacVersion</b> are compatible with
 * a given mathematical description.
 * @param iValueType
 *   The type of value.
 * @param iMathType
 *   The mathematical type.
 * @param iMathDimension
 *   The mathematical dimension.
 * @see CATSamValue, CATSamMathType
 */
    CATBoolean IsValid(CATSamValue iValueType, CATSamMathType iMathType,
                    int iMathDimension) const ;

/**
 * Combine the values of the collector (if possible) for entities which support repetitions.
 * The CombineValues is possible for a Type of Value : Real (exept for differents Local Axis),
 *                                                     Double,
 *                                                     Complex and
 *                                                     ComplexDouble.
 * AND the RefFrame must be a CATSamRefFrameGlobal.
 */
    CATBoolean CombineValues() const ;

/**
 * Test the type of the instance.
 * Return True if iType = CATSamCharacVersion
 * @param iType
 *   The type to test.
 */
    CATBoolean IsAKindOf(const CATString & iType) const;

/**
 * Test the category of the objects for which the collector characteristic has values.
 * Return True if Category equal CATSamValueNode, CATSamValueVirtualNode, CATSamValueElement or CATSamValueVirtualElement
 */
    CATBoolean IsMeshEntitiesCategory() const;

/**
 * Conversion of enumerated types CATSamComponent into strings (non NLS).<br>
 * @param iVersion
 *   The Context Version for the enumerated value which must be converted.
 * @param iComponent
 *   The enumerated value which must be converted (0 <= <tt>iComponent</tt> < <b>CATSamComponentLast</b>).
 * @return
 *   A string representing the enumerated value.<br>
 *   This string can be displayed to the user.
 * @see CATSamComponent
 */
static const char* ComponentString(CATSamCharacVersion &iVersion, CATSamComponent iComponent);

/**
 * Conversion of enumerated types CATSamComponent into strings (non NLS).<br>
 * @param iVersion
 *   The Context Version for the enumerated value which must be converted.
 * @param iComponent
 *   The enumerated value which must be converted (0 <= <tt>iComponent</tt> < <b>CATSamComponentLast</b>).
 * @param oString
 *   A <b>CATUnicodeString</b> representing the enumerated value.<br>
 *   This <b>CATUnicodeString</b> can be displayed to the user.
 * @see CATUnicodeString, CATSamComponent
 */
static void ComponentString(CATSamCharacVersion &iVersion, CATSamComponent iComponent, CATUnicodeString &oString);

  private :
    // Friend Class for Private Methods
    friend class CATAnalysisCharacCollector;
    friend class CATAnalysisExplicitServices;

    // Stream the object.
    // @param ioStream : The streaming buffer.
    // @param iVersion : The version of stream.
    HRESULT Stream(CATSamStream &ioStream, int iVersion) const ;

    // Unstream the object.
    // @param iStream : The unstreaming buffer.
    // @param iVersion : The version of stream.
    HRESULT UnStream(CATSamStream &iStream, int iVersion) ;

    // GetType
    virtual CATSamExplicitRoot::RootType GetType() const;
} ;

#endif
