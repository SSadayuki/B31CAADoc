#ifndef CATMSHElementVisuAttribute_h
#define CATMSHElementVisuAttribute_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATGraphicAttributeSet.h"

/**
 * Class to create a graphic attribute for a finite element.
 * <b>Role</b>: This class permits to have a graphic attribute which define
 * the display properties of a finite element.
 * @see CATIMSHMesh, CATMSHElement.
 */
class ExportedByMSHModel CATMSHElementVisuAttribute : public CATGraphicAttributeSet
{

  friend class CATMSHNodeVisuAttribute;

public:
/**
 * Constructs a default graphic attribute for a finite element (black).
 */
  CATMSHElementVisuAttribute ();
/*
 * Copy constructor.
 * @param iAttribute
 *   The graphic attribute to copy
 */
  CATMSHElementVisuAttribute ( const CATMSHElementVisuAttribute & iAttribute );
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
  inline int operator == ( const CATMSHElementVisuAttribute & iAttribute ) const;
/**
 * Assignment operator.
 * @param iAttribute
 *   Graphic attribute to assign to the current one
 * @return 
 *   Graphic attribute resulting from the assignment
 */
  inline CATMSHElementVisuAttribute & operator = ( const CATMSHElementVisuAttribute & iAttribute );
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
  CATGraphicAttributeSet GetAttribute () const;
/** @nodoc */
  void SetColor ( unsigned int Color );

private:
/** @nodoc */
  static unsigned int          _MeshColorTable[144];
};

//
// Implementations inline.
//

//
//==================================================
// Affectation.
//==================================================
//
inline CATMSHElementVisuAttribute & CATMSHElementVisuAttribute::operator = ( const CATMSHElementVisuAttribute & Attribute )
{
  set.basic  = Attribute.set.basic;
  rvba.basic = Attribute.rvba.basic;

  return ( *this );
}

//
//==================================================
// Egalite.
//==================================================
//
inline int CATMSHElementVisuAttribute::operator == ( const CATMSHElementVisuAttribute & Attribute ) const
{
 return ( set.basic == Attribute.set.basic && rvba.basic == Attribute.rvba.basic );
}
#endif
