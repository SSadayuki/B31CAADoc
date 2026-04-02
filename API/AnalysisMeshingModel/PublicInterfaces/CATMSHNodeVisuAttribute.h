#ifndef CATMSHNodeVisuAttribute_h
#define CATMSHNodeVisuAttribute_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATSymbolType.h"
#include "CATGraphicAttributeSet.h"

/**
 * Class to create a graphic attribute for a finite element node.
 * <b>Role</b>: This class permits to have a graphic attribute which define
 * the display properties of a finite element node.
 * @see CATIMSHMesh, CATMSHNode
 */
class ExportedByMSHModel CATMSHNodeVisuAttribute : protected CATGraphicAttributeSet
{

public:
/**
 * Constructs a default graphic attribute for a finite element node (black).
 * @param iSymbol
 * Symbol type to be used for node display.
 */
  CATMSHNodeVisuAttribute ( CATSymbolType iSymbol = DOT );
/*
 * Copy constructor.
 * @param iAttribute
 *   The graphic attribute to copy
 */
  CATMSHNodeVisuAttribute ( const CATMSHNodeVisuAttribute & Attribute );
/**
 * Equality operator.
 * @param iAttribute
 *   Graphic attribute to compare with
 * @return 
 *   boolean
 *   <br><b>Legal values</b>: <tt>0: False</tt> 
 *   the condition is not fullfilled, or <tt>Other: True</tt> 
 *   if the condition is fullfilled.
 */
  inline int operator == ( const CATMSHNodeVisuAttribute & Attribute ) const;
/**
 * Assignment operator.
 * @param iAttribute
 *   Graphic attribute to assign to the current one
 * @return 
 *   Graphic attribute resulting from the assignment
 */
  inline CATMSHNodeVisuAttribute & operator = ( const CATMSHNodeVisuAttribute & Attribute );
/** Sets the symbol type used for finite element nodes.
 * @param iSymbol
 * The symboltype.
 * <b>Legal values</b>: @href CATSymbolType
 */ 
  inline SymbolType GetSymbolType () const;
/** Returns the symbol type used for finite element nodes.
 * @see CATSymbolType
 */ 
  inline void SetSymbolType ( const SymbolType iSymbol );
/** Gets the red, green and blue components color.
 * @param iRed
 * The red component of the color.
 * <b>Legal values</b>: <tt>iRed</tt> ranges from 0 to 255.
 * @param iGreen
 * The green component of the color.
 * <b>Legal values</b>: <tt>iGreen</tt> ranges from 0 to 255.
 * @param iBlue
 * The blue component of the color.
 * <b>Legal values</b>: <tt>iBlue</tt> ranges from 0 to 255.
 */ 
  void GetColorRGB ( int& ioRed , int& ioGreen , int& ioBlue ) const;
/** Sets the red, green and blue components color.
 * @param iRed
 * The red component of the color.
 * <b>Legal values</b>: <tt>iRed</tt> ranges from 0 to 255.
 * @param iGreen
 * The green component of the color.
 * <b>Legal values</b>: <tt>iGreen</tt> ranges from 0 to 255.
 * @param iBlue
 * The blue component of the color.
 * <b>Legal values</b>: <tt>iBlue</tt> ranges from 0 to 255.
 */ 
   void SetColorRGB ( const int iRed , const int iGreen , const int iBlue );

/** @nodoc */
  void SetColor ( unsigned int Color );
/** @nodoc */
  CATGraphicAttributeSet GetAttribute () const;

private:
/** @nodoc */
  SymbolType                _Symbol;

};

//
// Implementations inline.
//

//
//==================================================
// Lecture du type de symbole.
//==================================================
//
inline SymbolType CATMSHNodeVisuAttribute::GetSymbolType () const
{
  return _Symbol;
}

//
//==================================================
// Ecriture du type de symbole.
//==================================================
//
inline void CATMSHNodeVisuAttribute::SetSymbolType ( const SymbolType Symbol )
{
  _Symbol = Symbol;
}

//
//==================================================
// Affectation.
//==================================================
//
inline CATMSHNodeVisuAttribute & CATMSHNodeVisuAttribute::operator = ( const CATMSHNodeVisuAttribute & Attribute )
{
  set.basic  = Attribute.set.basic;
  rvba.basic = Attribute.rvba.basic;
  _Symbol = Attribute._Symbol;

  return ( *this );
}

//
//==================================================
// Egalite.
//==================================================
//
inline int CATMSHNodeVisuAttribute::operator == ( const CATMSHNodeVisuAttribute & Attribute ) const
{
 return ( set.basic == Attribute.set.basic && rvba.basic == Attribute.rvba.basic && _Symbol == Attribute._Symbol );
}
#endif
