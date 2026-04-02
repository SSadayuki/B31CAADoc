#ifndef CATIStmBending_H
#define CATIStmBending_H

// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATIStmTechnologicalProcess.h"
#include "CATTopDefine.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmBending;
#else
extern "C" const IID IID_CATIStmBending ;
#endif

//------------------------------------------------------------------

class CATMathLine;

/**
 * Interface holding the technological data of bending process.
 * <b>Role</b>:This interface is available for the technological feature
 * dedicated for Sheetmetal application. You can retrieve these features
 * thanks to the @href CATIStmTechnologicalRequest interface.
 */
class ExportedByCATSmInterfaces CATIStmBending: public CATBaseUnknown
{
    CATDeclareInterface;

public:
    
    /**
     * Gets the main axis of this bending process. This axis depends on the view.
     * @param   iView
     *      A reference to <tt>CATUnicodeString</tt> instance.
     *      <br><b>Legal values</b>: 
     *      <ul>
     *      <li><b>"MfUnfoldedView"</b> or <b>"Unfolded"</b>: for an unfolded,</li>
     *      <li><b>"MfDefault3DView"</b>: for the default 3D view,</li>
     *      <li>otherwise: the default 3D view.</li>
     *      </ul>
     * @param   oAxis
     *      A reference to <tt>CATMathLine</tt> instance.
     * @return <tt>S_OK</tt>.
     *      The main axis is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The main axis cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetAxis( const CATUnicodeString & iView,
                                       CATMathLine & oAxis ) const = 0;

    /**
     * Gets the Inner Mold Line (IML) of this bending process.
     * @param   iView
     *      A reference to <tt>CATUnicodeString</tt> instance.
     * @param   oIML
     *      A reference to <tt>CATMathLine</tt> instance.
     * @return <tt>S_OK</tt>.
     *      The IML is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The IML cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetIML( const CATUnicodeString & iView, 
                                      CATMathLine & oIML ) const = 0;

    /**
     * Gets the Outer Mold Line (OML) of this bending process.
     * @param   iView
     *      A reference to <tt>CATUnicodeString</tt> instance.
     * @param   oIML
     *      A reference to <tt>CATMathLine</tt> instance.
     * @return <tt>S_OK</tt>.
     *      The OML is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The OML cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetOML( const CATUnicodeString & iView, 
                                      CATMathLine & oOML ) const = 0;

    /**
     * Gets the angular value of this bending process.
     * @param   oAngle
     *      The open angle of bend.
     * @return <tt>S_OK</tt>.
     *      The open angle is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The open angle cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetAngle( double & oAngle ) const = 0;

    /**
     * Gets the two values of radius of this bending process. Two values are 
     * necessary to taken into account the conical bending process. For a 
     * cylindrical bend the two values are the same. The radius is the inside 
     * radius of the bend section.
     * @param   oRadius1
     *      The first radius of bend.
     * @param   oRadius2
     *      The second radius of bend.
     * @return <tt>S_OK</tt>.
     *      The two radius are successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The two radius cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetRadius( double & oRadius1, double & oRadius2 ) const = 0;

    /**
     * Gets the K Factor value of this bending process.
     * @param   oKFactor
     *      The K Factor value ranging between 0 and 1.
     * @return <tt>S_OK</tt>.
     *      The K Factor is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The K Factor cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetKFactor( double & oKFactor ) const = 0;
    
    /**
     * Gets the relative orientation of stamping compared to the reference plane.
     * @param   oUpDown
     *      A reference to <tt>CATOrientation</tt> instance.
     *      <br><b>Legal values</b>: 
     *      <ul>
     *      <li><b>CATOrientationNegative</b>: The orientations are opposite,</li>
     *      <li><b>CATOrientationPositive</b>: The orientations are the same,</li>
     *      <li><b>CATOrientationUnknown</b>: The orientation is unknown,</li>
     *      </ul>
     * @return <tt>S_OK</tt>.
     *      The relative orientation is successfully valuated.
     * @return <tt>E_FAIL</tt>.
     *      The orientation cannot be valuated. Use CATError::CATGetLastError()
     *      to retrieve the error by the <tt>HRESULT</tt> value. @see CATError.
     */
    virtual HRESULT __stdcall GetOrientation( CATOrientation & oUpDown ) const = 0;
};

CATDeclareHandler( CATIStmBending, CATBaseUnknown );

//------------------------------------------------------------------

#endif
