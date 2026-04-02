// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenSRSymbol_H
#define CATIDftGenSRSymbol_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
class CATI2DDetail;
class CATMathPoint;
class CATMathVector;
class CATVisPropertiesValues;
class CATILinkableObject;

#include "IUnknown.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSRSymbol ;
#else
extern "C" const IID IID_CATIDftGenSRSymbol;
#endif

/**
 * Definition of interface which describes specific behaviors of Graphic Symbol
 * symbolic representations (SR).
 * Graphic Symbol symbolic representation is returned by feature (e.g. Struct.)
 * when called on CATIDftGenRequest::GetSymbolicRep. Symbolic rep must be created by 
 * feature using CATIDftGenSRFactory provided by the caller.
 * SR is used as a receptacle to transport informations computed by feature to
 * generative drafting process.
 * @see CATIDftGenRequest
 * @see CATIDftGenSRFactory
 */
class ExportedByDraftingItfCPP CATIDftGenSRSymbol: public IUnknown
{
  public:

    /**
     * Sets the detail which contains the symbol drawing
     *   @param iDetail
     *     Detail 2D.
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT SetDetail (CATI2DDetail* iDetail) = 0;

    /**
     * Retrieves the detail which contains the symbol drawing
     *   @param oDetail
     *     Detail 2D.
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL if detail has not been set,
     *           S_OK otherwise.     
     */
    virtual HRESULT GetDetail (CATI2DDetail** oDetail) = 0;

    /**
     * Sets the symbol anchor point
     *   @param iPoint
     *     3D Point
     *   @return S_OK
     */
    virtual HRESULT SetAnchorPoint (const CATMathPoint& iPoint) = 0;

    /**
     * Retrieves the symbol anchor point
     *   @param oPoint
     *     3D Point
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL if anchor point has not been set,
     *           S_OK otherwise.
     */
    virtual HRESULT GetAnchorPoint (CATMathPoint* oPoint) = 0;

    /**
     * Sets the symbol orientation
     *   @param iVecX
     *     3D Vector for X direction
     *   @param iVecY
     *     3D Vector for Y direction
     *   @return S_OK
     */
    virtual HRESULT SetOrientation (const CATMathVector& iVecX, const CATMathVector& iVecY) = 0;

    /**
     * Retrieves the symbol orientation
     *   @param oVecX
     *     3D Vector for X direction
     *   @param oVecY
     *     3D Vector for Y direction
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL if orientation has not been set,
     *           S_OK otherwise.
     */
    virtual HRESULT GetOrientation (CATMathVector* oVecX, CATMathVector* oVecY) = 0;

    /**
     * Sets the scaling policy of the symbol
     *   @param iNumber
     *     Policy number: =0: Paper size =1:Model size
     *   @return S_OK
     */
    virtual HRESULT SetScalingPolicy (int iNumber) = 0;

    /**
     * Retrieves the scaling policy of the symbol
     *   @param oNumber
     *     Policy number: =0: Paper size =1:Model size
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT GetScalingPolicy (int* oNumber) = 0;

    /**
     * Sets the scale to apply on ditto
     *   @param iScale
     *     Scale value
     *   @return E_INVALIDARG if scale less than 1.0e-9
     *           S_OK otherwise.
     */
    virtual HRESULT SetScale (double iScale) = 0;

    /**
     * Retrieves the scale to apply on ditto
     *   @param oScale
     *     Scale value
     *   @return E_INVALIDARG if argument pointer NULL,
     *           S_OK otherwise.
     */
    virtual HRESULT GetScale (double* oScale) = 0;

    /**
     * Sets graphic properties
     *   @param iProp
     *     Set of graphic properties
     *   @return S_OK
     */
    virtual HRESULT SetGraphicProperties (const CATVisPropertiesValues& iProp) = 0;
    
    /**
     * Retrieves graphic properties
     *   @param oProp
     *      Set of graphic properties
     *   @return E_INVALIDARG if argument pointer NULL,
     *           E_FAIL if graphic properties have not been set,
     *           S_OK otherwise.
     */
    virtual HRESULT GetGraphicProperties (CATVisPropertiesValues* oProp) = 0;
    
};
#endif


