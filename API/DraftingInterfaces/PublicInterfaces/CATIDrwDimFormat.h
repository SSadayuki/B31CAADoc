// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwDimFormat_H
#define CATIDrwDimFormat_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimFormat ;
#else
extern "C" const IID IID_CATIDrwDimFormat ;
#endif

class CATUnicodeString;

/**
 * Manages the dimension value format.
 */

class ExportedByDraftingItfCPP CATIDrwDimFormat : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

     /** 
     * Gets the format name.
     *
     * @param oDescr [out]
     *   Name of the format
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>S_UNDEFINED</code></dt><dd> if the property isn't set,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT GetFormatName (CATUnicodeString &oDescr) const = 0;

     /** 
     * Gets the unit.
     *
     * @param oUnit [out]
     *    The Unit
     *    <br>Legal values are: (see define definition file)
     *    <ol>
     *    <li><u><i>Length units</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimUnitNone</tt> <dd>None unit.</dd>
     *    <dt><tt>CATDrwDimUnitMM</tt> <dd>Millimeter.</dd>
     *    <dt><tt>CATDrwDimUnitINCH</tt> <dd>Inch.</dd>
     *    <dt><tt>CATDrwDimUnitMETER</tt> <dd>Meter.</dd>
     *    <dt><tt>CATDrwDimUnitCM</tt> <dd>Centimeter.</dd>
     *    <dt><tt>CATDrwDimUnitKM</tt> <dd>Kilometer.</dd>
     *    <dt><tt>CATDrwDimUnitFOOT</tt> <dd>Foot.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_F64</tt> <dd>Feet Inch Fraction 1/64.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_F16</tt> <dd>Feet Inch Fraction 1/16.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_DEC</tt> <dd>Feet Inch decimal.</dd>
     *    </dl>
     *    <li><u><i>Angle units</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimUnitDEGREE</tt> <dd>Degree.</dd>
     *    <dt><tt>CATDrwDimUnitMINUTE</tt> <dd>Minute.</dd>
     *    <dt><tt>CATDrwDimUnitSECOND</tt> <dd>Second.</dd>
     *    <dt><tt>CATDrwDimUnitRADIAN</tt> <dd>Radian.</dd>
     *    <dt><tt>CATDrwDimUnitGRADE</tt> <dd>Grade.</dd>
     *    </dl>
     *    </ol>
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>S_UNDEFINED</code></dt><dd> if the property isn't set,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     */
     virtual HRESULT GetFormatUnit (int & oUnit) const = 0;

     /** 
     * Gets the display unit.
     *
     * @param oDisplayUnit [out]
     *   The dsiplay Unit
     *    <br>Legal values are: (see define definition file)
     *    <ol>
     *    <li><u><i>Length units</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimUnitNone</tt> <dd>None unit.</dd>
     *    <dt><tt>CATDrwDimUnitMM</tt> <dd>Millimeter.</dd>
     *    <dt><tt>CATDrwDimUnitINCH</tt> <dd>Inch.</dd>
     *    <dt><tt>CATDrwDimUnitMETER</tt> <dd>Meter.</dd>
     *    <dt><tt>CATDrwDimUnitCM</tt> <dd>Centimeter.</dd>
     *    <dt><tt>CATDrwDimUnitKM</tt> <dd>Kilometer.</dd>
     *    <dt><tt>CATDrwDimUnitFOOT</tt> <dd>Foot.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_F64</tt> <dd>Feet Inch Fraction 1/64.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_F16</tt> <dd>Feet Inch Fraction 1/16.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_DEC</tt> <dd>Feet Inch decimal.</dd>
     *    </dl>
     *    <li><u><i>Angle units</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimUnitDEGREE</tt> <dd>Degree.</dd>
     *    <dt><tt>CATDrwDimUnitMINUTE</tt> <dd>Minute.</dd>
     *    <dt><tt>CATDrwDimUnitSECOND</tt> <dd>Second.</dd>
     *    <dt><tt>CATDrwDimUnitRADIAN</tt> <dd>Radian.</dd>
     *    <dt><tt>CATDrwDimUnitGRADE</tt> <dd>Grade.</dd>
     *    </dl>
     *    </ol>
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>S_UNDEFINED</code></dt><dd> if the property isn't set,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT GetFormatDisplayUnit (int & oDisplayUnit)  const = 0;

    /**
     * Gets the precision.
     *
     * @param oPrecision [out]
     *    Precision value.
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>S_UNDEFINED</code></dt><dd> if the property isn't set,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT GetFormatPrecision(double & oPrecision) const = 0;

    /**
     * Gets the type.
     *
     * @param oType [out]
     *   Format Type
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFormatDec</tt> <dd>Decimal.</dd>
     *    <dt><tt>CATDrwDimFormatFrac</tt> <dd>Fractional.</dd>
     *    </dl>
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>S_UNDEFINED</code></dt><dd> if the property isn't set,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT GetFormatType(int & oType) const = 0;

    /**
     * Gets the level of factor to be displayed.
     *
     * @param oDisplayFactor [out]
     *   Display factor
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>S_UNDEFINED</code></dt><dd> if the property isn't set,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT GetFormatDisplayFactor (int & oDisplayFactor) const = 0;

    /**
     * Gets the maximun level of factor available to be displayed. It may vary according to the name of the format.
     *
     * @param oMaxDisplayFactor [out]
     *   Maximum level of display factor.
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT GetAvailableFormatDisplayFactor (int & oMaxDisplayFactor) const = 0;

    /**
     * Sets the format name.
     *
     * @param name [inout]
     *    Name of the format
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>E_INVALIDARG</code></dt><dd> if the description isn't avaliable,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT SetFormatName (const CATUnicodeString & name ) = 0;

    /**
     * Sets the unit.
     *   @param iUnit
     *    Unit.
     *    <br>Legal values are: (see define definition file)
     *    <ol>
     *    <li><u><i>Length units</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimUnitNone</tt> <dd>None unit.</dd>
     *    <dt><tt>CATDrwDimUnitMM</tt> <dd>Millimeter.</dd>
     *    <dt><tt>CATDrwDimUnitINCH</tt> <dd>Inch.</dd>
     *    <dt><tt>CATDrwDimUnitMETER</tt> <dd>Meter.</dd>
     *    <dt><tt>CATDrwDimUnitCM</tt> <dd>Centimeter.</dd>
     *    <dt><tt>CATDrwDimUnitKM</tt> <dd>Kilometer.</dd>
     *    <dt><tt>CATDrwDimUnitFOOT</tt> <dd>Foot.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_F64</tt> <dd>Feet Inch Fraction 1/64.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_F16</tt> <dd>Feet Inch Fraction 1/16.</dd>
     *    <dt><tt>CATDrwDimUnitF_I_DEC</tt> <dd>Feet Inch decimal.</dd>
     *    </dl>
     *    <li><u><i>Angle units</i></u>:
     *    <dl>
     *    <dt><tt>CATDrwDimUnitDEGREE</tt> <dd>Degree.</dd>
     *    <dt><tt>CATDrwDimUnitMINUTE</tt> <dd>Minute.</dd>
     *    <dt><tt>CATDrwDimUnitSECOND</tt> <dd>Second.</dd>
     *    <dt><tt>CATDrwDimUnitRADIAN</tt> <dd>Radian.</dd>
     *    <dt><tt>CATDrwDimUnitGRADE</tt> <dd>Grade.</dd>
     *    </dl>
     *    </ol>
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>E_INVALIDARG</code></dt><dd> if the property couldn't be set for compatibilty reasons,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     */
     virtual HRESULT SetFormatUnit( const int& iUnit ) = 0;

    /**
     * Sets the precision.
     *
     * @param iPrecision [in]
     *    Precision value.
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>E_INVALIDARG</code></dt><dd> if the property couldn't be set for compatibilty reasons,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     */
     virtual HRESULT SetFormatPrecision( const double &iPrecision ) = 0;

    /**
     * Sets the type.
     *
     * @param iType [in]
     *    Type.
     *    <br>Legal values are: (see define definition file)
     *    <dl>
     *    <dt><tt>CATDrwDimFormatDec</tt> <dd>Decimal.</dd>
     *    <dt><tt>CATDrwDimFormatFrac</tt> <dd>Fractional.</dd>
     *    </dl>
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>E_INVALIDARG</code></dt><dd> if the property couldn't be set for compatibilty reasons,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT SetFormatType( const int & iType ) = 0;

    /**
     * Sets the level of factor to be displayed.
     *
     * @param iFact [in]
     *   Display factor
     *
     * @return
     *   <dl>
     *    <dt><code>S_OK</code></dt><dd> if everything ran ok,</dd>
     *   <dt><code>E_INVALIDARG</code></dt><dd> if the property couldn't be set for compatibilty reasons,</dd>
     *   <dt><code>E_FAIL</code></dt><dd> if a problem occured.</dd>
     *   </dl>
     *
     */
     virtual HRESULT SetFormatDisplayFactor (const int & iFact ) = 0;

     /**
     * @deprecated V5R18 use #GetFormatName
     */
     virtual int GetLabel (CATUnicodeString &oDescr) = 0;

     /**
     * @deprecated V5R18 use #GetFormatUnit
     */
     virtual int GetUnit () const = 0;

     /**
     * @deprecated V5R18 use #GetFormatDisplayUnit
     */
     virtual int GetDisplayUnit () const = 0;

     /**
     * @deprecated V5R18 use #GetFormatPrecision
     */
     virtual double GetPrecision() const = 0;

     /**
     * @deprecated V5R18 use #GetFormatType
     */
     virtual int GetType() const = 0;

     /**
     * @deprecated V5R18 use #GetFormatDisplayFactor
     */
     virtual int GetDisplayFactor () = 0;

     /**
      * @deprecated V5R18 use #SetFormatName
      */
     virtual void SetLabel(CATUnicodeString Name) =0;

     /**
      * @deprecated V5R18 use #SetFormatDisplayFactor
      */
     virtual void SetDisplayFactor ( int iFact ) = 0;

     /**
      * @deprecated V5R18 use #SetFormatType
      */
     virtual void SetType( const int iType ) = 0;

     /**
      * @deprecated V5R18 use #SetFormatPrecision
      */
     virtual void SetPrecision( const double iPrecision ) = 0;

     /**
      * @deprecated V5R18 use #SetFormatUnit
      */
     virtual void SetUnit( const int iUnit ) = 0;
};
CATDeclareHandler(CATIDrwDimFormat, CATBaseUnknown);
#endif

