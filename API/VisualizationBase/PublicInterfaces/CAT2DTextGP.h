#ifndef CAT2DTextGP_H
#define CAT2DTextGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"
#include "CATDynamicGP.h"

class CATFont;
class CATUnicodeString;
class CATStreamer;


/**
* Class to create a dynamic graphic primitive of 2D text.
*/
class ExportedByCATViz CAT2DTextGP : public CATDynamicGP
{
 CATDeclareClass;
  
public:
  
    /**
   *@nodoc
   */
    virtual void Stream(CATStreamer& oStr,int iSavetype=0);

  /**
   * @nodoc
   */
    virtual void UnStream(CATStreamer& iStr);

  protected:
    
/**
* Constructs a 2D text Graphic primitive.
* @param iPoint
*	the position of the 2D text (XY).
* @param iString
*	the string of characters which composed the text of the 2D text Graphic primitive.
* @param iFont
*	the font used for the text.
*/
    CAT2DTextGP (const float iPoint[2], const CATUnicodeString &iString, const CATFont* iFont=NULL);
    virtual ~CAT2DTextGP();

/**
* Constructs a default 2D text Graphic primitive.
*/
    CAT2DTextGP ();

/**
* @nodoc
*/
    float _Point[2];
    

/**
* @nodoc
*/
    int _CharCount;
    

/**
* @nodoc
*/
    unsigned short* _String;
    

/**
* @nodoc
*/
    CATFont* _Font;
};


#endif
