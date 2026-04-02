
#ifndef __CATFmAttributeName_h__
#define __CATFmAttributeName_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATUnicodeString;
#include "CATDataType.h" // CATUINTPTR
#include "IUnknown.h" // HRESULT


/**
 * Class representing an Attribute Name.
 */
class ExportedByFeatureModelerExt CATFmAttributeName
{
public:
  /**
   * Constructs an empty Attribute Name.
   */
  CATFmAttributeName();

  /**
   * Constructs an Attribute Name.
   * <br><b>Role</b>: Constructs an Attribute Name from a C string.
   */
  CATFmAttributeName(const char * iName);

  /**
   * Constructs an Attribute Name.
   * <br><b>Role</b>: Constructs an Attribute Name from a @href CATUnicodeString .
   */
  CATFmAttributeName(const CATUnicodeString & iName);

  /**
   * Destructor.
   */
  ~CATFmAttributeName();


  // Required standard C++ methods.

  /**
   * Copy constructor.
   */
  CATFmAttributeName(const CATFmAttributeName & iSource);

  /**
   * Assignment operator.
   */
  CATFmAttributeName & operator=(const CATFmAttributeName & iSource);

  /**
   * Equality operator.
   */
  int operator==(const CATFmAttributeName & iOther) const;

  /**
   * Inequality operator.
   */
  int operator!=(const CATFmAttributeName & iOther) const;


  // 1. Identity.

  /**
   * Retrieves the Attribute Name.
   * @param oName [out]
   *   A (caller provided) string in which the Attribute Name will be stored.
   *   <br>If the method fails, <tt>oName</tt> is not modified.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Attribute Name has been successfuly retrieved.</dd>
   *  </dl>
   */
  HRESULT GetName(CATUnicodeString & oName) const;

private:
  CATUINTPTR m_Data[1];
};


#endif // __CATFmAttributeName_h__
