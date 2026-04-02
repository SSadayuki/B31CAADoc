#ifndef CATITPSDefaultAnnotation_H
#define CATITPSDefaultAnnotation_H

// COPYRIGHT Dassault Systemes 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "IUnknown.h"

#include "CATTPSLinkWithGeomType.h"
#include "CATTPSSearchAlgoType.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATITPSDefaultAnnotation;

class CATSO;
class CATPathElement;
class CATITPSList;

/**
 * This interface is used to get information about default annotation.
 * Ther is two kinds of default annotation :
 *  - with a manual selection
 *  - with a selection automatic
 *
 * If you want to get TTRS list on a default annotation, used CATITPS::GetTTRS.
 * else used FindPathElemInAutoSelectionMode. In this case, you will get a list of
 * path element on all the faces pointing by the default annotation.
 */

class CATITPSDefaultAnnotation : public IUnknown
{

  public:
    /**
     * @nodoc
     * Set the type of link between the default annotation and the geometry.
     * Return E_FAIL if the annotation is not a default one.
     *   @param iLinkWiGeom
     *     Type of link.
     */
    virtual HRESULT SetLinkWiGeomType(
                                 const CATTPSLinkWithGeomType iLinkWiGeom) = 0;

    /**
     * Get the type of link between the default annotation and the geometry.
     * Return E_FAIL if the annotation is not a default one.
     *   @param oLinkWiGeom
     *     Type of link.
     */
    virtual HRESULT GetLinkWiGeomType(
                               CATTPSLinkWithGeomType * oLinkWiGeom) const = 0;

    /**
     * @nodoc
     * Set the type of search algo to find geometry on which the annotation
     * apply to.
     * Return E_FAIL if the annotation is not a default one.
     *   @param iAlgo
     *     Type of algo.
     */
    virtual HRESULT SetSearchAlgoType (const CATTPSSearchAlgoType iAlgo) = 0;

    /**
     * Get the type of search algo to find geometry on which the annotation
     * apply to.
     * Return E_FAIL if the annotation is not a default one.
     *   @param oAlgo
     *     Type of algo.
     *   @param oRadius
     *     Value of the fillet radius for the CATTPSSATFilletsFacesOfRadius algo.
     */
    virtual HRESULT GetSearchAlgoType (
                              CATTPSSearchAlgoType * oAlgo,
                              double               * oRadius = NULL) const = 0;

    /**
     * Find all the geometry on which the annotation apply to.
     * Return E_FAIL if the annotation is not a default one.
     *   @param opSO
     *     List of path element on all the geometry.
     *     It's an adress on a CATSO, you must have a valid pointer on a CATSO.
     */
    virtual HRESULT FindPathElemInAutoSelectionMode (CATSO * opSO) const = 0;

    /**
     * Is this default annotation pointing this geometry?.
     * Return E_FAIL if the annotation is not a default one.
     * Give a path element on the face, and methode find if the default
     * annotation applied on this face.
     *
     *   @param ipPath
     *     The path element of the geometry.
     *   @param obIsApplied
     *     The default annotation is applied on the geometry or not.
     *   @param iopiTPSList
     *     List of TPS which are pointing on the geometry by a TTRS link.
     *     this parameter is optional. If you don't give it, method find the
     *     list.
     */
    virtual HRESULT IsAppliedToPathElem(
                          const CATPathElement * ipPath,
                                CATBoolean     * obIsApplied,
                                CATITPSList    * iopiTPSList = NULL) const = 0;

    /**
     * @nodoc
     * Transform Annotation in a Classical Annotation.
     */
    virtual HRESULT TransformInRegularAnnot () = 0;

};

#endif
