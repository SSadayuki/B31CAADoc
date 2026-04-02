// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenSRGeoReplText_H
#define CATIDftGenSRGeoReplText_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
class CATUnicodeString;
class CATGeometry;
class CATMathPoint2D;
class CATMathPoint;
class CATICkeParm;

#include "IUnknown.h"
#include "DraftingItfCPP.h"
#include "CATBoolean.h"
#include "CATDrwTextPropertiesEnum.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSRGeoReplText ;
#else
extern "C" const IID IID_CATIDftGenSRGeoReplText;
#endif

/**
 * Definition of interface which describes specific behaviors of 
 * Text symbolic representations (SR).
 * Text symbolic representation is returned by feature (e.g. Struct.)
 * when called on CATIDftGenRequest::GetSymbolicRep. Symbolic rep must be created by 
 * feature using CATIDftGenSRFactory provided by the caller.
 * SR is used as a receptacle to carry information computed by feature to
 * generative drafting process.
 * @see CATIDftGenRequest
 * @see CATIDftGenSRFactory
 */
class ExportedByDraftingItfCPP CATIDftGenSRGeoReplText: public IUnknown
{
  public:

    /**
     * Sets the text string.
     *   @param iString
     *     Text string.
     *   @return S_OK
     */
    virtual HRESULT SetString (const CATUnicodeString & iString) = 0;

    /**
     * Retrieves the text string.
     *   @param oString
     *     Text string.
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT GetString (CATUnicodeString * oString) = 0;

    /**
     * Inserts a formula in text specified above
     *   @param iCKEParm
     *     CKE parameter.
     *   @param iPos
     *     Position where to insert before (-1 for appending).
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT InsertCKEParm (CATICkeParm * iCKEParm, int iPos) = 0;

    /**
     * Retrieves a formula in text specified above
     *   @param oCKEParm
     *     CKE parameter.
     *   @param oPos
     *     Position where to insert before (-1 for appending).
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL if string does not contain any CKE,
     *           S_OK otherwise.
     */
    virtual HRESULT GetCKEParm (CATICkeParm ** oCKEParm, int * oPos) = 0;

	  /**
     * Sets the Geometry used to position the text.
     *   @param iGeom
     *     Geometry used to position the text.
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT SetGeometry (CATGeometry * iGeom) = 0;

    /**
     * Retrieves the Replacement Geometry used to position the text.
     *   @param oGeom
     *     Geometry used to position the text.
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL if geometry has not been set,
     *           S_OK otherwise.
     */
    virtual HRESULT GetGeometry (CATGeometry ** oGeom) = 0;

    /**
     * Sets the orientation of the text.
     *   @param iType
     *     =0: Absolute (angle from (1,0)) =1: Relative (angle from Geometry main direction)
     *   @param iAngle
     *     Text orientation angle in degrees from (1,0), default 0 is horizontal
     *   @return S_OK
     */
    virtual HRESULT SetOrientation (int iType, double iAngle) = 0;

    /**
     * Retrieves the orientation of the text
     *   @param oType
     *     =0: Absolute (angle from (1,0)) =1: Relative (angle from Geometry main direction)
     *   @param oAngle
     *     Text orientation angle in degrees
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT GetOrientation (int* oType, double * oAngle) = 0;

    /**
     * Sets the anchor point of the text (default is CG of all edge-end-points of projected geometry)
     *   @param iPoint
     *     Anchor point (2D)
     *   @return S_OK
     */
    virtual HRESULT SetAnchorPoint (const CATMathPoint2D & iPoint) = 0;

    /**
     * Sets the anchor point of the text (default is CG of all edge-end-points of projected geometry)
     *   @param iPoint
     *     Anchor point (3D)
     *   @return S_OK
     */
    virtual HRESULT SetAnchorPoint (const CATMathPoint & iPoint) = 0;

    /**
     * Retrieves the anchor point of the text
     *   @param oPoint
     *     Anchor point (2D)
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL anchor point was not set as 2D point,
     *           S_OK otherwise.
     */
    virtual HRESULT GetAnchorPoint (CATMathPoint2D * oPoint) = 0;

    /**
     * Retrieves the anchor point of the text
     *   @param oPoint
     *     Anchor point (3D)
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL anchor point was not set as 3D point,
     *           S_OK otherwise.
     */
    virtual HRESULT GetAnchorPoint (CATMathPoint * oPoint) = 0;

    /**
     * Sets leader flag
     *   @param iFlag
     *     =0: no leader, otherwise: leader
     *   @return S_OK
     */
    virtual HRESULT SetLeaderFlag (int iFlag) = 0;

    /**
     * Sets leader target point
     *   @param iPoint
     *     Target point (2D)
     *   @return S_OK
     */
    virtual HRESULT SetLeaderTarget (const CATMathPoint2D & iPoint) = 0;

    /**
     * Sets leader target point
     *   @param iPoint
     *     Target point (3D)
     *   @return S_OK
     */
    virtual HRESULT SetLeaderTarget (const CATMathPoint & iPoint) = 0;

    /**
     * Retrieves leader target point
     *   @param oPoint
     *     Target point (2D)
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL anchor point was not set as 2D point,
     *           S_OK otherwise.
     */
    virtual HRESULT GetLeaderTarget (CATMathPoint2D * oPoint) = 0;

    /**
     * Retrieves leader target point
     *   @param oPoint
     *     Target point (3D)
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL anchor point was not set as 3D point,
     *           S_OK otherwise.
     */
    virtual HRESULT GetLeaderTarget (CATMathPoint * oPoint) = 0;

    /**
     * Sets leader symbol
     *   @param iNumber
     *     Symbol number: -2: use default, -1: none, 0-n leader symbol
     *   @return S_OK
     */
    virtual HRESULT SetLeaderSymbol (int iNumber) = 0;

    /**
     * Retrieves leader symbol
     *   @param oNumber
     *     Symbol number: -2: use default, -1: none, 0-n leader symbol
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT GetLeaderSymbol (int* oNumber) = 0;
   /**
   * Gets the Mirroring style of the text.
   * @param oMirroring
   *    The Mirroring style of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwMirroringDefinition
   */
	virtual HRESULT GetMirroring( CATDrwMirroringDefinition & oMirroring ) = 0;
   /**
   * Sets the Mirroring style of the text.
   * @param iMirroring
   *    The Mirroring style of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwMirroringDefinition
   */
	virtual HRESULT SetMirroring( const CATDrwMirroringDefinition & iMirroring ) = 0;
   /**
   * Gets the blanking activity.
   * @param oBlankingMode
   *    The active mode on the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwUnitDisplayMode
   */
	virtual HRESULT GetBlankingMode( CATDrwBlankingMode & oBlankingMode ) = 0;
   /**
   * Sets the blanking activity.
   * @param iBlankingMode
   *    The mode to activate on the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwBlankingMode
   */
	virtual HRESULT SetBlankingMode( const CATDrwBlankingMode & iBlankingMode ) = 0;
   /**
   * Gets the scale behaviour of text.
   * @param oScaleMode
   *    The scale mode for the text (does the text follow the view scale ?)
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwScaleMode
   */
	virtual HRESULT GetScaleMode( CATDrwScaleMode & oScaleMode ) = 0;
   /**
   * Sets the scale behaviour of text.
   * @param iScaleMode
   *    The scale mode for the text (should the text follow the view scale ?)
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwScaleMode
   */
	virtual HRESULT SetScaleMode( const CATDrwScaleMode & iScaleMode ) = 0;
};
#endif
