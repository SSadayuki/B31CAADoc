#ifndef CATGraphicAttributeSet_H
#define CATGraphicAttributeSet_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"
#include "CATIAV5Level.h"

// Explicit Color
#include "CATColorName.h"


/** @nodoc */
typedef union
{
 int basic;
 struct
 {
#ifdef _ENDIAN_LITTLE
  unsigned no_pick     : 1; 
  unsigned highlight   : 1; 
  unsigned lowlight    : 1; 
  unsigned no_show     : 1; 

  unsigned type        : 2;
  unsigned showfree    : 1;
  unsigned transparent : 1;

  unsigned priority    : 4;
  unsigned thickness   : 6;
  unsigned linetype    : 6;

  unsigned color       : 8;
#else
  unsigned color       : 8;

  unsigned linetype    : 6;
  unsigned thickness   : 6;
  unsigned priority    : 4;

  unsigned transparent : 1;
  unsigned showfree    : 1;
  unsigned type        : 2;

  unsigned no_show     : 1; 
  unsigned lowlight    : 1; 
  unsigned highlight   : 1; 
  unsigned no_pick     : 1; 
#endif
 } extend ;
} AttributStruct;

/** @nodoc */
typedef union
{
 int basic;
 struct
 {
#ifdef _ENDIAN_LITTLE
  unsigned alpha : 8;
  unsigned blue  : 8;
  unsigned green : 8;
  unsigned red   : 8;
#else
  unsigned red   : 8;
  unsigned green : 8;
  unsigned blue  : 8;
  unsigned alpha : 8;
#endif
 } extend ;
} RGBAStruct;

/** @nodoc */
#define DEFAULT_VISU_PRIORITY 4
 
/** @nodoc */
#define COLOR_MASK     0xFF000000
/** @nodoc */
#define LINETYPE_MASK  0x003F0000
/** @nodoc */
#define PRIORITY_MASK  0x0000F000
/** @nodoc */
#define THICKNESS_MASK 0x00000F00
/** @nodoc */
#define OTHER_MASK     0x000000FF

/**
 * Class to create a graphic attribute.
 * <b>Role</b>: This class permits to have a graphic attribute which define
 * the display properties of an element. Always associated to a rep or a
 * graphic primitive.
 */
class ExportedByCATViz CATGraphicAttributeSet
{
 public:

   /** Construct a graphic attribute.
    * @param iAtt
    * The value coresponding to set.basic.<br>
    * The default value is:<br><ul>
    * <li>set.extend.color       : FOREGROUND  ( 253, @see CATColorName ).
    * <li>set.extend.linetype    : 1 (Solid).
    * <li>set.extend.thickness   : 0 .
    * <li>set.extend.type        : 0 (none, no participation to ZBuffer). 
    * <li>set.extend.transparent : 0 (No transparency).
    * <li>set.extend.no_show     : 0 (Shown).
    * <li>set.extend.lowlight    : 0 (Not under intensified).
    * <li>set.extend.highlight   : 0 (Not intensified).
    * <li>set.extend.no_pick     : 0 (Pickable)
    * <li>set.extend.showFree    : 0 (Show/NoShow taken into account). 
    * <li>set.extend.priority    : 4 (default slection priority).</ul>
    * @param iRGBA
    * The red, green, blue and alpha component corresponding to rvba.basic.<br>
    * The default value is 255 (black and not transparent).<br>
    * Used only if set.extend.color = TRUECOLOR ( 255, @see CATColorName ).
    */

   inline CATGraphicAttributeSet ( unsigned int iAtt = 0xFD040400, unsigned int iRGBA = 0x000000FF); 


   /** Retrieves the indexed color.<br>
    * (Corresponding to set.extend.color)
    */
   inline unsigned int GetColor()       const;
   /** Retrieves the red, green,blue and alpha color components.<br>
    * (Corresponding to rvba.basic)
    */
   inline unsigned int GetColorRGBA()   const;
   /** Retrieves the red, green, blue and alpha color components.
    * @param oRed
    * The red component of the color.
    * <b>Legal values</b>: <tt>oRed</tt> ranges from 0 to 255.
    * @param oGreen
    * The green component of the color.
    * <b>Legal values</b>: <tt>oGreen</tt> ranges from 0 to 255.
    * @param oBlue
    * The blue component of the color.
    * <b>Legal values</b>: <tt>oBlue</tt> ranges from 0 to 255.
    * @param oAlpha
    * The alpha component of the color.
    * <b>Legal values</b>: <tt>oAlpha</tt> ranges from 0 to 255.
    */ 
   inline void GetColorRGBA(int* oRed, int* oGreen, int* oBlue, int* oAlpha)   const;
   /** Retrieves the line type.<br>
    * (Corresponding to set.extend.linetype)
    */
   inline unsigned int GetLineType()    const;
   /** Retrieves the selection priority.<br>
    * (Corresponding to set.extend.priority)
    */
   inline unsigned int GetPriority()   const;
   /** Retrieves the thickness.<br>
    * (Corresponding to set.extend.thickness)
    */
   inline unsigned int GetThickness()   const;
   /** Retrieves the type.<br>
    * (Corresponding to set.extend.type)
    */
   inline unsigned int GetType()        const;
   /** Retrieves the show mode.<br>
    * (Corresponding to set.extend.no_show)
    */
   inline unsigned int IsHidden()       const;
   /** Retrieves the transparent mode.<br>
    * (Corresponding to set.extend.transparent)
    */
   inline unsigned int IsTransparent()  const;
   /** Retrieves the lowlight mode.<br>
    * (Corresponding to set.extend.lowlight)
    */
   inline unsigned int IsLowlighted()   const;
   /** Retrieves the highlight mode.<br>
    * (Corresponding to set.extend.highlight)
    */
   inline unsigned int IsHighlighted()  const;
   /** Retrieves the pick mode.<br>
    * (Corresponding to set.extend.no_pick)
    */
   inline unsigned int IsNotPickable()  const;
   /** Retrieves the showfree mode.<br>
    * (Corresponding to set.extend.showfree)
    */
   inline unsigned int IsShowFree()  const;

   /** 
    * Sets the indexed color.
    * @param iColor
    * The index of the color.
    * <b>Legal values</b>: <tt>iColor</tt> ranges from 0 to 255.
    * <br>See @href CATPredefinedColorName to have predefined color. 
    */
   inline void SetColor(const unsigned int iColor = FOREGROUND);
   /** Sets the red, green, blue and alpha components color.
    * @param iRGBA
    * The components of the color.
    */
   inline void SetColorRGBA(const unsigned int iRGBA = 255);
   /** Sets the red, green, blue and alpha components color.
    * @param iRed
    * The red component of the color.
    * <b>Legal values</b>: <tt>iRed</tt> ranges from 0 to 255.
    * @param iGreen
    * The green component of the color.
    * <b>Legal values</b>: <tt>iGreen</tt> ranges from 0 to 255.
    * @param iBlue
    * The blue component of the color.
    * <b>Legal values</b>: <tt>iBlue</tt> ranges from 0 to 255.
    * @param iAlpha
    * The alpha component of the color.
    * <b>Legal values</b>: <tt>iAlpha</tt> ranges from 0 to 255.
    */ 
   inline void SetColorRGBA(const int iRed, const int iGreen, const int iBlue, const int iAlpha= 255);
   /** Sets the line type.
    * @param iLinetype
    * The line type.
    * <b>Legal values</b>: <tt>iLinetype</tt> ranges from 0 to 63.<ul>
    * <li>0 or 1 = Solid.
    * <li>2 = Dotted.
    * <li>3 = Dashed. 
    * <li>4 = Dot-dashed.
    * <li>5 = Phantom.
    * <li>6 = Small-dotted.
    * <li>7 = JIS Axis.
    * <li>8 to 63 = Solid or application dependant.</ul>
    */
   inline void SetLineType(const unsigned int iLinetype = 1);

    /** Sets the thickness.
     * @param iThickness
     * The thickness index.
     * <b>Legal values</b>: <tt>iThickness</tt> range from 1 to 55.
     */
   inline void SetThickness(const unsigned int iThickness = 1);

    /** Sets the thickness.
     * @param iThickness
     * The thickness index.
     * <b>Legal values</b>: <tt>iThickness</tt> range from 1 to 8.
     */
   inline void SetFixedThickness(const unsigned int iThickness = 1);

   /** Sets the graphic element type.
    * @param itype
    * The type of the graphic element.
    * <b>Legal values</b>: <tt>iType</tt> ranges from 0 to 3.<ul>
    * <li>0 = None (no participation to ZBuffer).
    * <li>1 = Edge (participation to ZBuffer).
    * <li>2 = Skin (participation to ZBuffer + two-sided lighting).
    * <li>3 = Volume (participation to ZBuffer).</ul>
    */
   inline void SetType(const unsigned int iType = 0);
   /** Sets the transparency participation.
    * @param iMode
    * The transparency participation.
    * <b>Legal values</b>: <tt>iMode</tt> ranges from 0 to 1.<ul>
    * <li>0 = No transparency.
    * <li>1 = Transparency.</ul>
    */
   inline void SetTransparentMode(const unsigned int iMode = 0);
   /** Sets the show mode.
    * @param iMode
    * The show mode.
    * <b>Legal values</b>: <tt>iMode</tt> ranges from 0 to 1.<ul>
    * <li>0 = Shown.
    * <li>1 = Not shown.</ul>
    */
   inline void SetShowMode(const unsigned int iMode = 0);
   /** Sets the lowlight mode.
    * @param iMode
    * The lowlight mode.
    * <b>Legal values</b>: <tt>iMode</tt> ranges from 0 to 1.<ul>
    * <li>0 = No lowlight (Not under intensified).
    * <li>1 = lowlight (Under intensified).</ul>
    */
   inline void SetLowlightMode(const unsigned int iMode = 0);
   /** Sets the highlight mode.
    * @param iMode
    * The highlight mode.
    * <b>Legal values</b>: <tt>iMode</tt> ranges from 0 to 1.<ul>
    * <li>0 = No highlight (Not intensified).
    * <li>1 = Highlight (Intensified).</ul>
    */
   inline void SetHighlightMode(const unsigned int iMode = 0);
   /** Sets the pick mode.
    * @param iMode
    * The pick mode.
    * <b>Legal values</b>: <tt>iMode</tt> ranges from 0 to 1.<ul>
    * <li>0 = Pickable.
    * <li>1 = Not pickable.</ul>
    */
   inline void SetPickMode(const unsigned int iMode = 0);
   /** Increase the selection priority.
    * @param iStep
    * The increasing step.
    * <b>Legal values</b>: <tt>iStep</tt> ranges from 1 to n,
    * but set.extend.priority ranges from 0 to 15.
    */
   inline void IncreasePriority(const unsigned int iStep = 1);
   /** Decrease the selection priority.
    * @param iStep
    * The decreasing step.
    * <b>Legal values</b>: <tt>iStep</tt> ranges from 1 to n,
    * but set.extend.priority ranges from 0 to 15.
    */
   inline void DecreasePriority(const unsigned int iStep = 1);
   /** Sets the showfree mode.
    * @param iMode
    * The showfree mode.
    * <b>Legal values</b>: <tt>iMode</tt> ranges from 0 to 1.<ul>
    * <li>0 = Show/Noshow is taken into account.
    * <li>1 = Show/Noshow is not taken into account.</ul>
    */
   inline void SetShowFreeMode(const unsigned int iMode = 0);

   /**
    * @nodoc
    */
   inline CATGraphicAttributeSet& operator = (const CATGraphicAttributeSet &);
   /**
    * @nodoc
    */
   inline int operator == (const CATGraphicAttributeSet &);
   /**
    * @nodoc
    */
   inline int operator != (const CATGraphicAttributeSet &);
   /**
    * @nodoc
    */
   inline void SetPriority(const unsigned int iPriority = 4);

/** @nodoc */
   AttributStruct set;
/** @nodoc */
   RGBAStruct     rvba;   
};

//------------------------------------------------------------------------------

inline CATGraphicAttributeSet::CATGraphicAttributeSet ( unsigned int valeur, unsigned int rgba )
{ 
 set.basic  = valeur;
 rvba.basic = rgba;
}

// Get Attributes
inline unsigned int CATGraphicAttributeSet::GetColor()      const { return (set.extend.color); }
inline unsigned int CATGraphicAttributeSet::GetColorRGBA()  const { return (rvba.basic); }
inline unsigned int CATGraphicAttributeSet::GetPriority()   const { return (set.extend.priority); }
inline unsigned int CATGraphicAttributeSet::GetThickness()  const { return (set.extend.thickness); }
inline unsigned int CATGraphicAttributeSet::GetLineType()   const { return (set.extend.linetype); }
inline unsigned int CATGraphicAttributeSet::GetType()       const { return (set.extend.type); }
inline unsigned int CATGraphicAttributeSet::IsHidden()      const { return (set.extend.no_show); }
inline unsigned int CATGraphicAttributeSet::IsTransparent() const { return (set.extend.transparent); }
inline unsigned int CATGraphicAttributeSet::IsLowlighted()  const { return (set.extend.lowlight); }
inline unsigned int CATGraphicAttributeSet::IsHighlighted() const { return (set.extend.highlight); }
inline unsigned int CATGraphicAttributeSet::IsNotPickable() const { return (set.extend.no_pick); }
inline unsigned int CATGraphicAttributeSet::IsShowFree() const { return (set.extend.showfree); }


// Set Attributes
inline void CATGraphicAttributeSet::SetColor ( const unsigned int color )
{
 if ( color > 255 ) set.extend.color = FOREGROUND;
 else               set.extend.color = color;
}

inline void CATGraphicAttributeSet::SetColorRGBA ( const unsigned int color )
{
 rvba.basic = color;
}

inline void CATGraphicAttributeSet::SetColorRGBA ( const int red, const int green, const int blue, const int alpha )
{
 if ( red   < 256 ) rvba.extend.red   = red;
 else rvba.extend.red   = 0;
 if ( green < 256 ) rvba.extend.green = green;
 else rvba.extend.green = 0;
 if ( blue  < 256 ) rvba.extend.blue  = blue;
 else rvba.extend.blue  = 0;
 if ( alpha < 256 ) rvba.extend.alpha = alpha;
 else rvba.extend.alpha = 255;
}

inline void CATGraphicAttributeSet::GetColorRGBA(int* oRed, int* oGreen, int* oBlue, int* oAlpha) const
{
  if (oRed)
    *oRed   = rvba.extend.red;
  if (oGreen)
    *oGreen = rvba.extend.green;
  if (oBlue)
    *oBlue  = rvba.extend.blue;
  if (oAlpha)
    *oAlpha = rvba.extend.alpha;
}

inline void CATGraphicAttributeSet::SetThickness ( const unsigned int thickness )
{

 if ( thickness > 55 ) set.extend.thickness = 1;
 else                  set.extend.thickness = thickness;
}

inline void CATGraphicAttributeSet::SetFixedThickness ( const unsigned int thickness )
{

 if ( thickness > 8 ) set.extend.thickness = 55;
 else                 set.extend.thickness = thickness+55;
}

inline void CATGraphicAttributeSet::SetLineType ( const unsigned int linetype )
{
 if ( linetype > 63 ) set.extend.linetype = 1;
 else                 set.extend.linetype = linetype;
}

inline void CATGraphicAttributeSet::SetType ( const unsigned int type )
{
 if ( type > 3 ) set.extend.type = 0;
 else            set.extend.type = type;
}

inline void CATGraphicAttributeSet::SetTransparentMode ( const unsigned int transparent )
{
 set.extend.transparent = transparent;
 if (transparent == 1 && rvba.extend.alpha >= 255) rvba.extend.alpha = 179;
}

inline void CATGraphicAttributeSet::SetShowMode ( const unsigned int no_show )
{
 set.extend.no_show = no_show;
}

inline void CATGraphicAttributeSet::SetLowlightMode ( const unsigned int lowlight )
{
 set.extend.lowlight = lowlight;
}

inline void CATGraphicAttributeSet::SetHighlightMode( const unsigned int highlight )
{
 set.extend.highlight = highlight;
}

inline void CATGraphicAttributeSet::SetPickMode( const unsigned int no_pick )
{
 set.extend.no_pick = no_pick;
}

inline void CATGraphicAttributeSet::SetShowFreeMode( const unsigned int show_free )
{
  set.extend.showfree = show_free;
}

inline void CATGraphicAttributeSet::IncreasePriority ( const unsigned int priority )
{
 if ((set.extend.priority + priority) > 15) set.extend.priority = 15;
 else set.extend.priority += priority;
}

inline void CATGraphicAttributeSet::DecreasePriority ( const unsigned int priority )
{
 if ((set.extend.priority - priority) < 0) set.extend.priority = 0;
 else set.extend.priority -= priority;
}

inline void CATGraphicAttributeSet::SetPriority ( const unsigned int priority )
{
 if (priority > 15) set.extend.priority = 15;
 else set.extend.priority = priority;
}

// Operators
inline CATGraphicAttributeSet& CATGraphicAttributeSet::operator=(const CATGraphicAttributeSet &attribut)
{
 set.basic  = attribut.set.basic;
 rvba.basic = attribut.rvba.basic;

 return ( *this );
}

inline int CATGraphicAttributeSet::operator==(const CATGraphicAttributeSet &attribut)
{
 return ( set.basic == attribut.set.basic && rvba.basic == attribut.rvba.basic);
}

inline int CATGraphicAttributeSet::operator!=(const CATGraphicAttributeSet &attribut)
{
 return ( set.basic != attribut.set.basic || rvba.basic != attribut.rvba.basic);
}

#endif


