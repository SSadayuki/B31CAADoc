//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//==============================================================================
//
// CATICciTapeStrategy :
//   Interface to manage the composites ply strategy
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciTapeStrategy (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciTapeStrategy_H
#define CATICciTapeStrategy_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciTapeStrategy;
#else
extern "C" const IID IID_CATICciTapeStrategy ;
#endif

//------------------------------------------------------------------

enum StrategyType {
    GEODESIC_PATH,
        NATURAL_PATH,
        PARALLEL_PATH
};
/**
* Interface to manage a tape strategy.
* <ul>
* <li> Release this interface when it is no longer needed.
*/ 
class ExportedByCAACompositesItf CATICciTapeStrategy: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:

	/**
	* Sets the strategy point of the strategy.
	* @param ispPoint
	* The point.
    */
    virtual HRESULT SetStrategyPoint( CATIMmiMechanicalFeature_var ispPoint ) = 0;

	/**
	* Gets the strategy point of the strategy.
	* @param ospPoint
	* The point.
    */
    virtual HRESULT GetStrategyPoint( CATIMmiMechanicalFeature_var &ospPoint ) = 0;

	/**
	* Sets the strategy typeof the strategy.
    * The type can be GEODESIC_PATH, NATURAL_PATH and PARALLEL_PATH
	* @param iType
	* The type
    */
    virtual HRESULT SetStrategyType( StrategyType iType ) = 0;

	/**
	* Gets the strategy typeof the strategy.
    * The type can be GEODESIC_PATH, NATURAL_PATH and PARALLEL_PATH
	* @param oType
	* The type
    */
    virtual HRESULT GetStrategyType( StrategyType &oType ) = 0;

	/**
	* Sets the strategy typeof the strategy.
    * The type is CATUnicodeString
	* @param iType
	* The type
    */
    virtual HRESULT SetStrategyType (CATUnicodeString  iType  ) = 0;

    /**
	* Gets the strategy typeof the strategy.
    * The type is CATUnicodeString
	* @param oType
	* The type
    */
    virtual HRESULT GetStrategyType (CATUnicodeString & oType  ) = 0;

	/**
	* Sets the nominal width of the strategy.
	* @param iWidth
	* The nominal width.
    */
    virtual HRESULT SetNominalWidth( double iWidth ) = 0;

	/**
	* Gets the nominal width of the strategy.
	* @param oWidth
	* The nominal width.
    */
    virtual HRESULT GetNominalWidth( double &oWidth ) = 0;

	/**
	* Sets the laying direction of the strategy.
	* @param iX
	* The X component of laying direction.
	* @param iY
	* The Y component of laying direction.
	* @param iZ
	* The Z component of laying direction.
    */
    virtual HRESULT SetLayingDirection (double  iX, double  iY, double  iZ  ) = 0;

    /**
	* Gets the laying direction of the strategy.
	* @param oX
	* The X component of laying direction.
	* @param oY
	* The Y component of laying direction.
	* @param oZ
	* The Z component of laying direction.
    */
    
    virtual HRESULT GetLayingDirection (double  & oX, double  & oY, double  & oZ  ) = 0;
	/**
	* Sets the nominal gap of the strategy.
	* @param iGap
	* The nominal gap
    */
    virtual HRESULT SetNominalGap( double iGap ) = 0;

	/**
	* Gets the nominal gap of the strategy.
	* @param oGap
	* The nominal gap
    */
    virtual HRESULT GetNominalGap( double &oGap ) = 0;

	/**
	* Sets the maximum gap of the strategy.
	* @param iGap
	* The maximum gap
    */
    virtual HRESULT SetMaxGap( double iGap ) = 0;

	/**
	* Gets the maximum gap of the strategy.
	* @param oGap
	* The maximum gap
    */
    virtual HRESULT GetMaxGap( double &oGap ) = 0;

	/**
	* Sets the manimum gap of the strategy.
	* @param iGap
	* The manimum gap
    */
    virtual HRESULT SetMinGap( double iGap ) = 0;

	/**
	* Gets the manimum gap of the strategy.
	* @param iGap
	* The manimum gap
    */
    virtual HRESULT GetMinGap( double &oGap ) = 0;

	/**
	* Sets the angle of the strategy.
	* @param iAngle
	* The angle
    */
    virtual HRESULT SetAngle( double iAngle ) = 0;

	/**
	* Gets the angle of the strategy.
	* @param oAngle
	* The angle
    */
    virtual HRESULT GetAngle( double &oAngle ) = 0;

    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed soon ---------------------------
    //--------------------------------------------------------------------------------------------------
    
	/**
	* @deprecated V5R26 
	* Use @see #SetStrategyPoint(CATIMmiMechanicalFeature_var&) method instead.
	* Sets the strategy point of the strategy.
	* @param ispPoint
	* The point.
    */
    virtual HRESULT SetStrategyPoint( CATISpecObject_var ispPoint ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetStrategyPoint(CATIMmiMechanicalFeature_var&) method instead.
	* Gets the strategy point of the strategy.
	* @param ospPoint
	* The point.
    */
    virtual HRESULT GetStrategyPoint( CATISpecObject_var &ospPoint ) = 0;

	/**
    * Deprecated
	* Sets the laying direction of the strategy.
	* @param iDir
	* The laying direction.
    */
    virtual HRESULT SetLayingDirection( double iDir ) = 0;

	/**
    * Deprecated
	* Gets the laying direction of the strategy.
	* @param oDir
	* The laying direction.
    */
    virtual HRESULT GetLayingDirection( double &oDir ) = 0;
};
CATDeclareHandler(CATICciTapeStrategy, CATBaseUnknown);

//------------------------------------------------------------------

#endif
