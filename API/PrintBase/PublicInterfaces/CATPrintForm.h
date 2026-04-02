#ifndef CATPRINTFORM_H
#define CATPRINTFORM_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATLISTV_Declare.h"

class CATLISTV(CATPrintForm);

//--- Available units

/**
 * Available form units.
 *  @param CATPRINTUNIT_MM
 *   The form unit is the milimeter.
 *  @param CATPRINTUNIT_METER
 *   The form unit is the meter.
 *  @param CATPRINTUNIT_CM,
 *   The form unit is the centimeter.
 *  @param CATPRINTUNIT_KM
 *   The form unit is the kilometer.
 *  @param CATPRINTUNIT_FOOT
 *   The form unit is the foot.
 *  @param CATPRINTUNIT_F_I_F64
 *   The form unit is the feet Inch Fraction 1/64.
 *  @param CATPRINTUNIT_F_I_F16
 *   The form unit is the feet Inch Fraction 1/16.
 *  @param CATPRINTUNIT_F_I_DEC
 *   The form unit is the feet Inch decimal.
 * @param CATPRINTUNIT_INCH
 *   The form unit is the inch.
 */
enum CATPrintUnit
{
    CATPRINTUNIT_MM,
    CATPRINTUNIT_METER,
    CATPRINTUNIT_CM,
    CATPRINTUNIT_KM,
    CATPRINTUNIT_FOOT,
    CATPRINTUNIT_INCH,
    CATPRINTUNIT_F_I_F64,
    CATPRINTUNIT_F_I_F16,
    CATPRINTUNIT_F_I_DEC
}; 

//--- Available orientations

/**
 * Available form orientations.
 * @param CATPRINTORIENTATION_PORTRAIT
 *   The form orientation is portrait.
 * @param CATPRINTORIENTATION_LANDSCAPE
 *   The form orientation is landscape.
 * @param CATPRINTORIENTATION_BESTFIT
 *   The form orientation is calculated from the image to be printed.
 */ 
enum CATPrintOrientation
{
    CATPRINTORIENTATION_PORTRAIT,
    CATPRINTORIENTATION_LANDSCAPE,
    CATPRINTORIENTATION_BESTFIT
};

/**
 * Class to describe a form (paper format).
 * <br><b>Role</b>: A form is described by its name, its width & height, its
 * unit (in which width & height are usually expressed), and its orientation 
 * ( portrait/landscape ). Notes that sizes are stored in mm.
 */
class ExportedByCATPrintBase CATPrintForm : public CATBaseUnknown
{
    CATDeclareClass;
    friend class CATMarshalPrintForm;

public:

/**
 * Constructs a CATPrintForm.
 */
    CATPrintForm();

/**
 * Constructs a CATPrintForm.
 * @param iName
 *   The name of the form.
 * @param iWidth
 *   The width of the form expressed in the param iUnit unit.
 *   <br><b>Legal values</b>: The default is 0.
 * @param iHeight
 *   The height of the form expressed in the param iUnit unit.
 *   <br><b>Legal values</b>: The default is 0.
 * @param iUnit 
 *   The unit for the width and the height of the form.
 *   <br><b>Legal values</b>: The default is mm.
 * @param iOrientation
 *   The orientation of the form. 
 *   <br><b>Legal values</b>: The default is CATPRINTORIENTATION_PORTRAIT.
 */
    CATPrintForm( const char* iName,
                  float iWidth = 0.0, float iHeight = 0.0,
                  CATPrintUnit iUnit = CATPRINTUNIT_MM,
                  CATPrintOrientation iOrientation = CATPRINTORIENTATION_PORTRAIT );

/**
 * Copy constructor.
 * param iForm
 *  The form to be copied.
 */
    CATPrintForm( const CATPrintForm& form );
    virtual ~CATPrintForm();

/**
 * @nodoc
 */
    CATPrintForm& operator=(const CATPrintForm &iForm);

/**
 * @nodoc
 */
    int operator==( const CATPrintForm &iForm ) const;

/**
 * @nodoc
 */
    int operator!=( const CATPrintForm &iForm ) const;

/**
 * Returns the name of the form.
 * @return
 *   The name of the form.
 */
    const CATString& GetName(void) const;

/**
 * Returns the unicode name of the form.
 * @return
 *   The unicode name of the form.
 */
    CATUnicodeString GetUnicodeName(void) const;

/**
 * Returns the description of the form.
 * @return
 *   The description of the form.
 */
    CATUnicodeString GetUnicodeDescription(void) const;

/**
 * Returns the code of the form.
 * @return
 *   The code of the form. See standard format code.
 */
    int GetCode(void) const;

/**
 * Retrieves the size of the form expressed in certain unit.
 * @param oWidth
 *   The width of the form in iUnit unit.
 * @param oHeight
 *   The height of the form in iUnit unit.
 * @param iUnit
 *   The unit in which the width and height will be returned. 
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 */
    void  GetSize( float& oWidth, float& oHeight, CATPrintUnit iUnit = CATPRINTUNIT_MM ) const;

/**
 * Defines the size of the form expressed in certain unit.
 * @param iWidth
 *   The width of the form in iUnit unit.
 * @param iHeight
 *   The height of the form in iUnit unit.
 * @param iUnit
 *   The unit in which the width and height are defined. 
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 */
    void  SetSize( float iWidth, float iHeight, CATPrintUnit iUnit = CATPRINTUNIT_MM );

/**
 * Returns the width of the form.
 * @param iUnit
 *   The unit in which the width is returned.
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 * @return
 *   The width of the form.
 */
    float GetWidth ( CATPrintUnit iUnit = CATPRINTUNIT_MM ) const;

/**
 * Returns the height of the form.
 * @param iUnit
 *   The unit in which the height is returned.
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 * @return
 *   The height of the form.
 */
    float GetHeight( CATPrintUnit iUnit = CATPRINTUNIT_MM ) const;

/**
 * Returns the unit of the form.
 * @return
 *   The unit of the form.
 */
    CATPrintUnit GetUnit(void) const;

/**
 * Returns the orientation of the form.
 * @return
 *   The orientation of the form.
 */
    CATPrintOrientation GetOrientation(void) const;
    
/**
 * Returns the roll status of the form.
 * @return
 *   The roll status of the form.
 *   <br><b>Legal values</b>: 1 -> roll form, 0 -> no roll form.
 */
    int IsARoll(void) const;

/**
 * Returns the envelope status of the form.
 * @return
 *   The envelope status of the form. See standard format code.
 */
    int IsAnEnvelope(void) const;

/**
 * Defines the name of the form.
 * @param iName
 *   The name of the form. Giving a standard name to a form (ex: "A4 ISO")
 *   automatically resets its characterictis to standard values 
 *   (ie: 210x297 mm). The only non-standard name allowed is "USER".
 */
    void SetName( const CATString& iName );

/**
 * Defines the unicode name of the form.
 * @param iName
 *   The unicode name of the form. Giving a standard name to a form 
 *   (ex: "A4 ISO") automatically resets its characterictis to standard values 
 *   (ie: 210x297 mm). The only non-standard name allowed is "USER".
 */
    void SetUnicodeName(const CATUnicodeString& iName);

/**
 * Defines the code of the form.
 * @param iCode
 *   The code of the form. See standard format code.
 */
    void SetCode(int iCode);

/**
 * Defines the width of the form.
 * @param iWidth
 *   The width of the form.
 * @param iUnit
 *   The unit in which the width is defined.
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 */  
    void SetWidth ( float iWidth, CATPrintUnit iUnit = CATPRINTUNIT_MM );

/**
 * Defines the height of the form.
 * @param iHeight
 *   The height of the form.
 * @param iUnit
 *   The unit in which the height is defined.
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 */ 
    void SetHeight( float iHeight, CATPrintUnit iUnit = CATPRINTUNIT_MM );

/**
 * Defines the unit of the form.
 * @param iUnit
 *   The unit of the form.
 */
    void SetUnit( CATPrintUnit iUnit );

/**
 * Defines the orientation of the form.
 * @param iOrientation
 *   The orientation of the form. 
 */
    void SetOrientation(CATPrintOrientation iOrientation);

/**
 * Returns the standard count.
 * @return
 *   The standard count. It allows to retrieve standard characteristics.
 */
    static int GetStandardCount(void);

/**
 * Returns the standard format code from its index.
 * @param iIndex
 *   The index in the standard format table.
 */
    static int GetStandardCode(int iIndex);

/**
 * Returns the standard format name from its index.
 * @param iIndex
 *   The index in the standard format table. 
 */
    static CATString GetStandardName(int iIndex);

/**
 * Returns the default format name.
 * @return
 *   The default format name.
 */
    static const CATString& GetDefaultForm(void);

/**
 * Returns the list of standard format.
 * @return
 *   The list of standard format.
 */
    static const CATLISTV(CATPrintForm)& GetStandardForms(void);

/**
 * @nodoc
 */
    static void GetSimilarFormat(CATPrintForm& ioForm, const CATLISTV(CATPrintForm)& iForms);

private:

    float ConvertFromMM( float ivalue, CATPrintUnit iUnit ) const;
    float ConvertToMM  ( float ivalue, CATPrintUnit iUnit ) const;
    
    // Attributes
    CATString	     _name;
    CATUnicodeString _unicodeName;
    float            _width, _height; // always in mm
    CATPrintUnit     _unit;           // default = mm
    int              _standardIndex, _code;

    CATPrintOrientation _orientation;	

};

#endif





