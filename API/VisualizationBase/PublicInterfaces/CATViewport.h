#ifndef CATViewport_H
#define CATViewport_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// CATIA Version 5 Release 1 Framework VISUALIZATION
// Copyright Dassault Systemes 1996
//------------------------------------------------------------------------------
// Abstract: 
//------------------------------------------------------------------------------
// Usage:    
//------------------------------------------------------------------------------
// Inheritance: 
//------------------------------------------------------------------------------
// Main Methods:
//------------------------------------------------------------------------------
#include "CATViz.h"
#include "CATBaseUnknown.h"
/**
 *  Class taht defines the clipping area.
 *
 *
 */
class ExportedByCATViz CATViewport : public CATBaseUnknown
{
  /** @nodoc */
 CATDeclareClass;

 public:

// Destructor
  /** @nodoc */
   virtual ~CATViewport();

// Operator = 
   /**
    *  Affectation operator.
    *  @param viewport  A reference to the CATViewport we want to copy  into this one.
    *  @return A reference to this CATViewport
    */
   CATViewport & operator = (const CATViewport &viewport);

// Duplicate the viewport
  /**
   *  Duplicate the Viewport.
   *  @return the copy of this CATViewport
   */
   virtual CATViewport * Clone() const = 0;
  /**
   * Duplicate a Viewport.
   * @param iViewport A pointer to the pointer on the CATViewport into wich we want to duplicate this CATViewport.
   * @return A pointer to the Duplicated CATviewport
   */
   virtual CATViewport * Clone(CATViewport **iViewport) const = 0;
  /** @nodoc */
   inline int IsMalloced();
  /** @nodoc */
   inline void IsMalloced(int);   

// Object size
  /** @nodoc */
   virtual int SizeOf() = 0;

//------------------------------------------------------------------------------
 protected : 

// Default constructor and copy constructor
  /** @nodoc */
   CATViewport ();
  /** @nodoc */
   CATViewport (const CATViewport &viewport);

 private : 

  /** @nodoc */
    int _IsMalloced;
};

inline int CATViewport::IsMalloced()
{
 return (_IsMalloced);
}

inline void CATViewport::IsMalloced(int n)
{
 _IsMalloced = n;
}

#endif 
