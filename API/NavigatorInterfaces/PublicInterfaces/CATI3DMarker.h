// COPYRIGHT DASSAULT SYSTEMES 2001
//===================================================================
//
// CATIInertia.h
//   This interface allows the edition of a 3D Marker.
//
//===================================================================
#ifndef CATI3DMarkerImpl_H
#define CATI3DMarkerImpl_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATNavigatorItf.h"
#include "CATBaseUnknown.h"

#include "CATUnicodeString.h"
#include "CATListOfDouble.h"

class CATListValCATISpecObject_var;
class CATISpecObject_var;

// Deprecated includes and forward declarations
#include "CATILinkableObject.h"

enum CAT3DMarkerType
{
  Marker_Text3D,
  Marker_Pen3D,
  Marker_URLLink,
  Marker_Arrow3D
};

extern ExportedByCATNavigatorItf IID IID_CATI3DMarker;

/**
 * Represents 3D marker object.
 * <p>
 * The 3D marker object enables the user to annotate the mockup in 3D. These annotations can be:
 * <ul>
 * <li>text attached to different components
 * <li>arrow pointing a point of interest
 * </ul>
 * All the coordinates are expressed with respect to the absolute axis system.
 */
class  ExportedByCATNavigatorItf CATI3DMarker : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves the 3D marker Type.
     * @param oType
     *    The type of 3D marker (only Marker_Text3D and Marker_Arrow3D are supported by this version).
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerType(CAT3DMarkerType & oType) = 0;

    /**
     * Sets the 3D marker Type.
     * @param iType
     *    The type of 3D marker (only Marker_Text3D and Marker_Arrow3D are supported by this version).
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerType(CAT3DMarkerType & iType) = 0;

    /**
     * Retrieves the coordinates of the positions of a 3D marker.
     * <p>The number and the meaning of positions depend on the type of the 3D marker :
     *    <ul>
     *    <li>a text has one position for its anchor point (bottom-left corner) and several others for each anchor point on linked components
     *    <li>an arrow has two positions, one for the head point and one for the tail point
     *    </ul>
     * @param oPosition
     *    The coordinates of the positions:
     *    <ul>
     *    <li>text
     *       <ul>
     *       <li>oPosition[0] is the X coordinate of the text anchor point
     *       <li>oPosition[1] is the Y coordinate of the text anchor point
     *       <li>oPosition[2] is the Z coordinate of the text anchor point
     *       <li>oPosition[3] is the X coordinate of the anchor point on the first linked component
     *       <li>oPosition[4] is the Y coordinate of the anchor point on the first linked component
     *       <li>oPosition[ 5] is the Z coordinate of the anchor point on the first linked component
     *       <li>...
     *       <li>oPosition[3*n+0] is the X coordinate of the anchor point on the n-th linked component
     *       <li>oPosition[3*n+1] is the Y coordinate of the anchor point on the n-th linked component
     *       <li>oPosition[3*n+2] is the Z coordinate of the anchor point on the n-th linked component
     *       </ul>
     *    <li>arrow
     *       <ul>
     *       <li>oPosition[0] is the X coordinate of the head point
     *       <li>oPosition[1] is the Y coordinate of the head point
     *       <li>oPosition[2] is the Z coordinate of the head point
     *       <li>oPosition[3] is the X coordinate of the tail point
     *       <li>oPosition[4] is the Y coordinate of the tail point
     *       <li>oPosition[5] is the Z coordinate of the tail point
     *       </ul>
     *    </ul>
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerPosition(CATListOfDouble *& oPosition) = 0;

    /**
     * Sets the coordinates of the positions of a 3D marker.
     * <p>The number and the meaning of positions depend on the type of the 3D marker :
     *    <ul>
     *    <li>a text has one position for its anchor point (bottom-left corner) and several others for each anchor point on linked components
     *    <li>an arrow has two positions, one for the head point and one for the tail point
     *    </ul>
     * @param iPosition
     *    The coordinates of the positions:
     *    <ul>
     *    <li>text
     *       <ul>
     *       <li>oPosition[0] is the X coordinate of the text anchor point
     *       <li>oPosition[1] is the Y coordinate of the text anchor point
     *       <li>oPosition[2] is the Z coordinate of the text anchor point
     *       <li>oPosition[3] is the X coordinate of the anchor point on the first linked component
     *       <li>oPosition[4] is the Y coordinate of the anchor point on the first linked component
     *       <li>oPosition[ 5] is the Z coordinate of the anchor point on the first linked component
     *       <li>...
     *       <li>oPosition[3*n+0] is the X coordinate of the anchor point on the n-th linked component
     *       <li>oPosition[3*n+1] is the Y coordinate of the anchor point on the n-th linked component
     *       <li>oPosition[3*n+2] is the Z coordinate of the anchor point on the n-th linked component
     *       </ul>
     *    <li>arrow
     *       <ul>
     *       <li>oPosition[0] is the X coordinate of the head point
     *       <li>oPosition[1] is the Y coordinate of the head point
     *       <li>oPosition[2] is the Z coordinate of the head point
     *       <li>oPosition[3] is the X coordinate of the tail point
     *       <li>oPosition[4] is the Y coordinate of the tail point
     *       <li>oPosition[5] is the Z coordinate of the tail point
     *       </ul>
     *    </ul>
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerPosition(const CATListOfDouble & iPosition) = 0;

    /**
     * Retrieves the text for a text 3D marker.
     * @param oText
     *    The text.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerText(CATUnicodeString & oText) = 0;

    /**
     * Sets the text for a text 3D marker.
     * @param iText
     *    The text.
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerText(CATUnicodeString & iText) = 0;

    /**
     * Retrieves the list of components which are linked to a text 3D marker.
     * @param ioComponentList
     *    The list of components.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerLink(CATListValCATISpecObject_var & ioComponentList) = 0;

    /**
     * Adds a link between a component and a text 3D marker.
     * @param iComponent
     *    The component.
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerLink(const CATISpecObject_var iComponent) = 0;

    /**
     * Removes the link between a component and a text 3D marker.
     * @param iComponent
     *    The component.
     * @param iPosition
     *    The position of the component in the list (if it exists more than one link between the 3D marker and the component).
     * @return
     *    HRESULT
     */
    virtual HRESULT RemoveMarkerLink(const CATISpecObject_var iComponent, int iPosition) = 0;

    /**
     * Retrieves the text's font for a text 3D marker.
     * @param oFont
     *    The font.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerFont(CATUnicodeString & oFont) = 0;

    /**
     * Sets the text's font for a text 3D marker.
     * @param iFont
     *    The font.
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerFont(const CATUnicodeString & iFont) = 0;

    /**
     * Retrieves the text's properties for a text 3D marker.
     * <p>The text's properties are :
     *    <ul>
     *    <li>filling status : text is filled or not
     *    <li>framing status : text is framed or not
     *    <li>size of the text
     *    <li>orientation of the text
     *    </ul>
     * @param oProperties
     *    The properties.
     *    <ul>
     *    <li>oProperties[10] : filling and framing status (= 0. Nothing, =1. Framed, = 2. Filled, =3. Framed + Filled)
     *    <li>oProperties[ 1] : size
     *    <li>oProperties[ 5] : orientation (= 0. Right, =1. Up, = 2. Left, =3. Down)
     *    </ul>
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerTextProperties(CATListOfDouble *& oProperties) = 0;

    /**
     * Sets the text's properties for a text 3D marker.
     * <p>The text's properties are :
     *    <ul>
     *    <li>filling status : text is filled or not
     *    <li>framing status : text is framed or not
     *    <li>size of the text
     *    <li>orientation of the text
     *    </ul>
     * @param oProperties
     *    The properties. Warning : not documented values must NOT be modified.
     *    <ul>
     *    <li>oProperties[10] : filling and framing status (= 0. Nothing, =1. Framed, = 2. Filled, =3. Framed + Filled)
     *    <li>oProperties[ 1] : size
     *    <li>oProperties[ 5] : orientation (= 0. Right, =1. Up, = 2. Left, =3. Down)
     *    </ul>
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerTextProperties( const CATListOfDouble & iProperties) = 0;

    /**
     * Retrieves the path of a file linked with an arrow 3D marker.
     * @param oPath
     *    The path of the file.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetMarkerPath(CATUnicodeString & oPath) = 0;

    /**
     * Sets the path of a file to be linked with an arrow 3D marker.
     * @param iPath
     *    The path of the file.
     * @return
     *    HRESULT
     */
    virtual HRESULT SetMarkerPath(const CATUnicodeString & iPath) = 0;

    /**
     * Updates the the marker 3D: that is to take into account all modifications which occur since last update.
     * @return
     *    HRESULT
     */
    virtual HRESULT Update() = 0;

    /**
     * Retrieves the parent of the 3D marker : it can be a document, a section, a distance or a clash.
     * @param oParent
     *    The parent.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetParent(CATBaseUnknown *& oParent) = 0;


    // Deprecated methods : DO NOT USE

    /** @nodoc */
    virtual CAT3DMarkerType        GetMarkerType() = 0;
    /** @nodoc */
    virtual CATListOfDouble      * GetMarkerPosition() = 0;
    /** @nodoc */
    virtual CATUnicodeString       GetMarkerText() = 0;
    /** @nodoc */
    virtual double                 GetMarkerBoundSphere() = 0;
    /** @nodoc */
    virtual CATILinkableObject   * GetMarkerRoot() = 0;
    /** @nodoc */
    virtual void SetMarkerBoundSphere(const double& rad) = 0;
    /** @nodoc */
    virtual void SetMarkerRoot(const CATILinkableObject_var root) = 0;
};

CATDeclareHandler(CATI3DMarker,CATBaseUnknown);

#endif
