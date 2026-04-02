
/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

// --------------------------------------------------------
////////////////////////////////////////////////////////////////////////////
//
// COPYRIGHT DASSAULT SYSTEMES  2009
//                                          
//
/////////////////////////////////////////////////////////////////////////////
#ifndef CATV4iV4Attributes_H
#define CATV4iV4Attributes_H

#include "ExportedByCATV4iServices.h"
#include "CATUnicodeString.h"

/**
 * Type of V4 attribute.
 * <br>This type is used by @href CATV4iV4Attribute class
 * @param Char
 *  The V4 attribute is a character
 * @param Dis
 *  The V4 attribute is a discrete value
 * @param Rea
 *  The V4 attribute is a real value
 * @param Bool
 *  The V4 attribute is a boolean value
 * @param Int
 *  The V4 attribute is an integer value
 */
enum AttributeFormat { Char=0, Dis=1 ,Rea=2, Bool=3, Int=4 } ;
/**
 * Class representing a V4 attribute.
 * <p>
 * <b>Role</b>: This class gives access to some informations of a V4 attributes
 */
class ExportedByCATV4iServices CATV4iV4Attribute
{
  public :
   /**
     * Default constructor of the V4 attribute.
     */
   CATV4iV4Attribute();
   virtual ~CATV4iV4Attribute() ;

    /**
     * Copy constructor.
     * @param CATV4iV4Attribute [in]
     *   The CATV4iV4Attribute to copy
     */
   CATV4iV4Attribute(const CATV4iV4Attribute *);

    /**
     * name of the V4 attribute.
     */
   CATUnicodeString  Name ;

    /**
     * value of the V4 attribute.
     */
   CATUnicodeString  Value ;

    /**
     * type of the V4 attribute.
     */
   AttributeFormat      Format ;
 } ;

#endif
