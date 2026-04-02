#ifndef CATITPSRetrieveServices_H
#define CATITPSRetrieveServices_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATListOfInt.h"

class CATITPS;
class CATPathElement;
class CATIProduct;
class CATITPSList;
class CATBaseUnknown;
class CATLISTV(CATBaseUnknown_var);
class CATIUnknownList;
class CATPickPath;

extern "C" const IID IID_CATITPSRetrieveServices;

/**
 * Interface for services related to retrieving TPSs.
 */
class CATITPSRetrieveServices : public IUnknown
{
  public:

    /**
     * Retrieves all the TPSs that are linked to a geometry selected.
     *   @param ipPath
     *     Selection Path.
     *   @param ipiProd
     *     A product that appears in the path element ipPath.
     *     Used to limits research of TPSs to the level of product structure
     *     defined by ipiProd.
     *     If NULL search of TPSs is done at all level of the product struture.
     *   @param opiTPSList
     *     List of TPSs linked to selection path.
     *     Warning: the TPSs can belongs to different tolerancing Set.
     */
    virtual HRESULT RetrieveTPSsFromPath (
                                 const CATPathElement *  ipPath,
                                 const CATIProduct    *  ipiProd,
                                       CATITPSList    ** opiTPSList) const = 0;

    /**
     * @nodoc
     * Retrieves all the TPSs that are linked to a featue ( Hole, Pad,...)
     *   @param ipFeature
     *     Feature.
     *   @param opiTPSList
     *     List of TPSs linked to selection path.
     *     Warning: the TPSs can belongs to different tolerancing Set.
     */
    virtual HRESULT RetrieveTPSsFromFeature ( CATBaseUnknown    *  ipFeature,
                                              CATITPSList       ** opiTPSList) const = 0;

    /**
     * @nodoc
     * Retrieves all the TPSs that are linked to a featue if a setting is activate ( Hole, Pad,...)
     *   @param ipFeature
     *     Feature.
     *   @param opTPSList
     *     List of TPSs linked to selection path.
     *     Warning: the TPSs can belongs to different tolerancing Set.
     */
    virtual HRESULT RetrieveTPSsFromFeature ( CATBaseUnknown    *  ipFeature,
                                      CATLISTV(CATBaseUnknown_var)** opTPSList) const = 0;

    /**
     * @nodoc
     * Retrieves all the geometrical feature that are linked to the TPS
     *   @param ipiTPS
     *     TPS Feature.
     *   @param opListe
     *     List of geometrical feature linked to the TPS.
     */
    virtual HRESULT RetrieveFeatureLinkedToTPS( const CATITPS* ipiTPS, 
                                        CATLISTV(CATBaseUnknown_var)** opListe) const = 0;

    /**
     * @nodoc
     * Retrieves all the elements( TPS and Geometrical ) that help to describe
     * the semantic representation.
     *   @param ipFeature
     *     The Feature is a TPS or a Geometrical.
     *   @param opiTPSList
     *     List of TPSs feature.
     *   @param opiGeomList
     *     List of Geometrical feature.
     */
    virtual HRESULT RetrieveAddRepresentation( 
                                    CATBaseUnknown* ipFeature, 
                                    CATITPSList** opiTPSList, 
                                    CATIUnknownList** opiGeomList ) = 0;

    /**
     * @nodoc
     * Retrieves a graphical path within a graphical tree.
     *   @param ipPathContext
     *     The context.
     *   @param ipiTPSList
     *     The TPS.
     *   @param opPickPath
     *     The graphical path within a graphical tree.
     */
    virtual HRESULT RetrievePickPathElement( CATPickPath** opPickPath, 
                                             CATBaseUnknown* ipRGE, 
                                             const CATPathElement* ipPathContext = NULL, 
                                             CATITPS* ipiTPS = NULL ) = 0;

    /**
     * @nodoc
     * Retrieves a graphical path within a graphical tree.
     *   @param ipPathContext
     *     The context.
     *   @param ipiTPSList
     *     The TPS.
     *   @param opPickPath
     *     The graphical path within a graphical tree.
     */
    virtual HRESULT RetrievePickPathElement( CATPickPath** opPickPath,
                                             CATListOfInt* ipGeom, 
                                             CATListOfInt* ipPathGeom, 
                                             CATBaseUnknown* ipiProd ) = 0;
};
#endif

