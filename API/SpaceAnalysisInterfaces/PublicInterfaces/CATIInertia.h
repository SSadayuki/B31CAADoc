// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIInertia.h
//   This interface allows the query of inertia data.
//
//===================================================================
#ifndef CATIInertia_H
#define CATIInertia_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SpaceAnalysisItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySpaceAnalysisItf IID IID_CATIInertia ;
#else
extern "C" const IID IID_CATIInertia ;
#endif




//------------------------------------------------------------------

/**
 * Gets inertia data of a product controlling the density.
 * <p>
 * This interface enables to get the inertia data of a product:
 * <ul>
 * <li> mass
 * <li> position of the center of gravity
 * <li> inertia matrix
 * <li> components of principal axes
 * <li> principal moments values
 * </ul>
 * All the coordinates are expressed with respect to the product axis system.
 * <p>
 * The density is managed :
 * <ul>
 * <li> as input the density is not null : this value is used for the computation.
 * <li> as input the density is null and a density is attached to the product : it is used and ouput.
 * <li> as input the density is null and the product has no density : a default value is used and ouput.
 * </ul>
 * If the product is made of non homogeneous material the output density is set to -1.
 * <p>
 * UNITS : 
 * <ul>
 * <li> Mass                      Kg     ( Kilogram )
 * <li> InertiaWetArea            M^2    ( square meter )
 * <li> InertiaVolume             M^3    ( cubic meter )
 * <li> COGPosition               M      ( meter )
 * <li> InertiaMatrix             KgM2   ( square Kilogram meter )
 * <li> PrincipalMoments          KgM2   ( square Kilogram meter )
 * <li> Density                   Kg/M^3 ( kilogram per cubic meter )
 * </ul>
 */


//------------------------------------------------------------------------


//------------------------------------------------------------------------


class ExportedBySpaceAnalysisItf CATIInertia: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Gets inertia data of a product controlling the density.
     * @param ioDensity
     *    The density of the product.
     * @param oMass
     *    The mass of the product.
     * @param oPosition
     *    Position of the center of gravity with respect to the product axis system.
     * @param oMatrix
     *    Inertia matrix.
     * @param oComponents
     *    Components of principal axes.
     * @param oValues
     *    Principal moments values.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetInertia (double* ioDensity,
                                double* oMass,
                                double  oPosition[3],
                                double  oMatrix[9],
                                double  oComponents[9],
                                double  oValues[3] ) const=0;

    /**
     * Gets mass of a product controlling the density.
     * @param ioDensity
     *    The density of the product.
     * @param oMass
     *    The mass of the product.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMass (double* ioDensity, double* oMass) const=0;

    /**
     * Gets the position of the center of gravity of a product.
     * @param ioDensity
     *    The density of the product.
     * @param oPosition
     *    Position of the center of gravity with respect to the product axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetCOGPosition (double oPosition[3]) const=0;

    /**
     * Gets inertia matrix of a product controlling the density.
     * @param ioDensity
     *    The density of the product.
     * @param oMatrix
     *    Inertia matrix.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetInertiaMatrix (double* ioDensity, double oMatrix[9]) const=0;

    /**
     * Gets principal axes of a product.
     * @param oComponents
     *    Components of principal axes.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPrincipalAxes (double oComponents[9]) const=0;

    /**
     * Gets principal moments of a product controlling the density.
     * @param ioDensity
     *    The density of the product.
     * @param oValues
     *    Principal moments values.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPrincipalMoments (double* ioDensity, double oValues[3]) const=0;


    /**
     * Gets inertia volume of a product
     * @param oInertiaVolume
     *    The inertia volume of the product.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetInertiaVolume (double* oInertiaVolume) const=0;

    /**
     * Gets inertia area of a product
     * @param oInertiaArea
     *    The inertia area of the product.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetInertiaArea (double* oInertiaArea) const=0;

    /**
     * Gets inertia data ( with inertia volume and area) of a product controlling the density.
     * @param ioDensity
     *    The density of the product.
     * @param oMass
     *    The mass of the product.
     * @param oPosition
     *    Position of the center of gravity with respect to the product axis system.
     * @param oMatrix
     *    Inertia matrix.
     * @param oComponents
     *    Components of principal axes.
     * @param oValues
     *    Principal moments values.
     * @param oInertiaVolume
     *    The inertia volume of the product.
     * @param oInertiaArea
     *    The inertia area of the product.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetInertia (double* ioDensity,
                                double* oMass,
                                double  oPosition[3],
                                double  oMatrix[9],
                                double  oComponents[9],
                                double  oValues[3],
                                double* oInertiaVolume,
                                double* oInertiaArea) const=0;

    /**
     * Sets equivalent mode of a product
     * @param iEquivalentMode
     *    1 -- If a product have some Equivalent, the computation work with
     *    0 -- no equivalent in computation
     * @return
     *    HRESULT
     */

    virtual HRESULT SetEquivalentMode (int iEquivalentMode) const=0;

    /**
     * Gets equivalent mode of a product
     * @param oEquivalentMode
     *    1 -- If a product have some Equivalent, the computation work with
     *    0 -- no equivalent in computation
     * @return
     *    HRESULT
     */

    virtual HRESULT GetEquivalentMode (int * oEquivalentMode) const=0;

    /**
     * Gets equivalent of a product
     * @param oEquivalentMode
     *    1 -- If the computation of a product have some Equivalent
     *    0 -- no equivalent in computation
     * @return
     *    HRESULT
     */

    virtual HRESULT GetEquivalent (int * oIsEquivalent) const=0;

    /**
	 * @deprecated CXR29 SetInertiaParameters  
     * Sets granularity mode of a product ( with Part )
     * @param iGranularityMode
     *    0 -- Only the main body in Inertia computation
     *    1 -- All body for Inertia computation
     * @return
     *    HRESULT
     */

    virtual HRESULT SetGranularityMode (int iGranularityMode) const=0;

   /** 
	* Sets granularity mode of a product(with Part)
	* @param iGranularityMode
	*	 1 --All body for Inertia computation
	*	 0 --Only the main body for Inertia computation
	* @param iThinPartAttributeMode
	*	 0 --thin part attribute not taken into account for Inertia computation
	*	 1 --thin part attribute taken into account for Inertia computation
	* @return
	*	 HRESULT
	*/

	virtual HRESULT SetInertiaParameters(int iGranularityMode,
										 int iThinPartAttributeMode) const = 0;



};

//------------------------------------------------------------------

CATDeclareHandler( CATIInertia, CATBaseUnknown );

#endif
