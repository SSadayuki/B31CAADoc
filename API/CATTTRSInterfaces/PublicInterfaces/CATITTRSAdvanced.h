#ifndef CATITTRSAdvanced_H
#define CATITTRSAdvanced_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTTRSItf.h"
#include "CATBaseUnknown.h"
#include "CATITTRS.h"
#include "CATMmrTTRSFeatureOfSize.h"
#include "CATMmrTTRSAssociationCase.h"
#include "CATMmrTTRSSurfaceCanonicity.h"
#include "CATMmrTTRSAdmissibleType.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTTRSItf IID IID_CATITTRSAdvanced;
#else
extern "C" const IID IID_CATITTRSAdvanced;
#endif

/**
 * Interface dedicated to manage some additional informations about TTRS.
 */
class ExportedByCATTTRSItf CATITTRSAdvanced: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves the count of relative positional parameters.
     * Applicable only when the TTRS has two components.
     *   @param oLinearParamCount
     *     The count of linear parameters.
     *   @param oAngularParamCount
     *     The count of angular parameters.
     *   @param oExplicitLinearParamCount
     *     The count of explicite linear parameters.
     *   @param oExplicitAngularParamCount
     *     The count of explicite angular parameters.
     */
    virtual HRESULT GetRelativePositionalParameterCount (
                                   int * oLinearParamCount,
                                   int * oAngularParamCount,
                                   int * oExplicitLinearParamCount,
                                   int * oExplicitAngularParamCount) const = 0;

    /**
     * Retrieves the association case of the TTRS 
     * Applicable only when the TTRS has two components.
     *   @param oAssocCase
     *     Association case.
     */
    virtual HRESULT GetAssociationCase (
                              CATMmrTTRSAssociationCase * oAssocCase) const = 0;

    /**
     * Retrieves the surface canonicity of the surfaces referenced by the TTRS.
     *   @param oSurfCanon
     *     The returned surface canonicity.
     */
    virtual HRESULT GetSurfaceCanonicity (
                           CATMmrTTRSSurfaceCanonicity * oSurfCanon) const = 0;

    /**
     * Retrieves the Feature Of Size status of TTRS.
     * Used to known if the surfaces referenced by the TTRS can be seen as 
     * a inner or outer measurable item (container or content). If yes the
     * TTRS is a Feature Of Size.
     *   @param oFOS
     *     The feature of size status of TTRS.
     */
    virtual HRESULT GetFeatureOfSize (CATMmrTTRSFeatureOfSize* oFOS) const = 0;


    /**
     * Retrieves the admissible type of TTRS.
     * Used to known what kind of TTRS organisation can fit the TTRS structure.
     *   @param oType
     *     The feature of size status of TTRS.
     */
    virtual HRESULT GetAdmissibleType (
                                    CATMmrTTRSAdmissibleType* oType) const = 0;

    /**
     * Validates the new TTRS class as the reference for the next evaluations
     * of TTRS status.
     */
    virtual HRESULT ValidateNewTTRSClass () = 0;

    /**
     * Validates the new count of relative positional parameters as the 
     * reference for the next evaluations of TTRS status.
     */
    virtual HRESULT ValidateNewPositionalParamCount () = 0;

    /**
     * Validates the new association case as the reference for the next 
     * evaluations of TTRS status.
     */
    virtual HRESULT ValidateNewAssociationCase () = 0;

    /**
     * Validates the new surface canonicity as the reference for the next 
     * evaluations of TTRS status.
     */
    virtual HRESULT ValidateNewSurfaceCanonicity () = 0;

    /**
     * Validates the new feature of size state as the reference for the next 
     * evaluations of TTRS status.
     */
    virtual HRESULT ValidateNewFeatureOfSize () = 0;

    /**
     * Validates the new admissible type as the reference for the next 
     * evaluations of TTRS status.
     */
    virtual HRESULT ValidateNewAdmissibleType () = 0;

};
#endif
