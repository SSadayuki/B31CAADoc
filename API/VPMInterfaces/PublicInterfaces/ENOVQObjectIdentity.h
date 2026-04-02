// -*- c++ -*-
#ifndef _ENOVQObjectIdentity_H
#define _ENOVQObjectIdentity_H
// COPYRIGHT DASSAULT SYSTEMES 2003-2013

 /**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "CATDbBinary.h"
#include "GUIDVPMInterfaces.h"
#include "CATCollec.h"

class ExportedByGUIDVPMInterfaces ENOVQObjectIdentity
{
public:

   /**
   * Default constructor 
   * @nodoc
   */
   ENOVQObjectIdentity();

   /**
   * Copy constructor 
   */
  ENOVQObjectIdentity(const ENOVQObjectIdentity&);

  /**
   * Equality operator
   */
  ENOVQObjectIdentity& operator=(const ENOVQObjectIdentity&);
  
  /**
   * Standard constructor, with hashing Type and DataDomain for factorisation
   */
  ENOVQObjectIdentity(const CATDbBinary& iOID,
                      const CATDbBinary& iTYPE,
                      const CATDbBinary& iDATADOMAIN);
  /**
   * Standard constructor,
   * @nodoc
   */
  ENOVQObjectIdentity(const CATDbBinary& iOID,
                      const CATDbBinary *iTYPE,
                      const CATDbBinary *iDATADOMAIN);
  /**
   * Destructor
   */
  ~ENOVQObjectIdentity();

  /**
   * @nodoc
   */
  static const CATDbBinary *intern_type (const CATDbBinary& iTYPE);

  /**
   * @nodoc
   */
  static const CATDbBinary *intern_datadomain (const CATDbBinary& iDATADOMAIN);


  /**
   * Get the OID of the object
   * Do not delete the result
   */
  const CATDbBinary *GetOID() const
  {
     return &_bOID; // non modifiable.
  }

  /**
  * Get the TYPE of the object
   * Do not delete the result
  */
  const CATDbBinary *GetTYPE() const 
  {
     return _bTYPE;
  }

  /**
  * Get the datadomain of the object
   * Do not delete the result
  */
  const CATDbBinary *GetDATADOMAIN() const 
  {
     return _bDATADOMAIN;
  }
  
  /**
   * @nodoc
   */
  //returns 0 if there are = else -1 or 1 
  static int CompareByTYPE (const ENOVQObjectIdentity * iO1,
                            const ENOVQObjectIdentity * iO2);
  
  /**
    * @nodoc
    */
  //returns 0 if there are = else -1 or 1 
  static int CompareByDATADOMAIN ( const ENOVQObjectIdentity * iO1,
                                   const ENOVQObjectIdentity * iO2);
  
  // equal and different operators are 'const'
  /** @nodoc */
  int operator == (const ENOVQObjectIdentity& iOther) const ;
  /** @nodoc */
  int operator != (const ENOVQObjectIdentity& iOther) const ;

  /** @nodoc */
  int operator !() const;
  /** @nodoc */
  unsigned char IsNull() const;
  
private:
  CATDbBinary _bOID ;
  const CATDbBinary *_bTYPE;
  const CATDbBinary *_bDATADOMAIN;
  
};

// a trick to minimize impact of separated listOf : I always include the list 
#include "CATListOfENOVQObjectIdentity.h"

#endif
