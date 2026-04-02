#ifndef CATITPSFactoryAdvanced_H
#define CATITPSFactoryAdvanced_H

// COPYRIGHT DASSAULT SYSTEMES 2001 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIAV5Level.h"
#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATTPSNoaRepType.h"

class CATSO;
class CATMathPlane;
class CATUnicodeString;
class CATITPS;
class CATITPSText;
class CATITPSWeld;
class CATITPSNoa;
class CATI2DDitto;
class CATITPSFlagNote;

extern "C" const IID IID_CATITPSFactoryAdvanced;

/**
 * High level annotation factory interfaces.
 * The purpose of this interface is to encapsulate the generation of all
 * features and even containers which are needed to create a 3D annotation.
 * The 3D Annotations returned by the methods of this interface are fulfilled
 * and self-suficient. They can be seen and manipulated interactively by the
 * user.
 */
class CATITPSFactoryAdvanced: public IUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Creates a Text annotation on a geometrical selection.
     * In part document using this method result in a status To Update for
     * the part, this method does not manage part update.
     *   @param ipGeometrySelected [in ]
     *     This argument define the geometry or feature to which the created annotation
     *     will apply to. This CATSO must contain at least a valid 
     *     PathElement on a geometrical element or feature supported by 3D annotations.
     *     A valid PathElement means a PathElement identical to what is 
     *     obtained by interactive selection. If there are several PathElement
     *     the text will apply on all the geometry selected.
     *   @param ipPlane            [in ]
     *     Optionnal, can be used to specify a favorite plane for annotation
     *     3D visualization. If NULL, annotation plane is automaticaly defined.
     *     If favorite plane is not convenient for annotation an other plane
     *     will be used and specified favorite plane will be ignored.
     *   @param ipString           [in ]
     *     A pointer on a valid CATUnicodeString. If String is empty text won't
     *     be created.
     *   @param opiCreatedText     [out, IUnknown#Release]
     *     The created Text.
     *   @return
     *      S_OK if succeded, E_FAIL if creation failed.
     */
    virtual HRESULT CreateTextOnGeometry (CATSO * ipGeometrySelected,
                                          CATMathPlane * ipPlane,
                                          CATUnicodeString * ipString,
                                          CATITPSText ** opiCreatedText) = 0;

    /**
     * <br /><strong>Role</strong>: Creates a Text annotation on another annotation.
     * In part document using this method result in a status To Update for
     * the part, this method does not manage part update.
     *   @param ipiTPS         [in ]
     *     This argument define the annotation to which the created annotation
     *     will be grouped with.
     *   @param ipString       [in ]
     *     A pointer on a valid CATUnicodeString. If String is empty text won't
     *     be created.
     *   @param opiCreatedText [out, IUnknown#Release]
     *     The created Text.
     *   @return
     *      S_OK if succeded, E_FAIL if creation failed.
     */
    virtual HRESULT CreateTextOnAnnotation (CATITPS * ipiTPS,
                                            CATUnicodeString * ipString,
                                            CATITPSText ** opiCreatedText) = 0;

    /**
     * <br /><strong>Role</strong>: Creates a Weld annotation on a geometrical selection. 
     * In part document using this method result in a status To Update for 
     * the part, this method does not manage part update.
     *   @param ipGeometrySelected [in ]
     *     This argument define the geometry or feature to which the created annotation
     *     will apply to. This CATSO must contain at least a valid 
     *     PathElement on a geometrical element or feature supported by 3D annotations.
     *     A valid PathElement means a PathElement identical to what is 
     *     obtained by interactive selection. If there are several PathElement
     *     the weld will apply on all the geometry selected.
     *   @param ipPlane             [in ]
     *     Optionnal, can be used to specify a favorite plane for annotation
     *     3D visualization. If NULL, annotation plane is automaticaly defined.
     *     If favorite plane is not convenient for annotation an other plane
     *     will be used and specified favorite plane will be ignored.
     *   @param opiCreatedWeld      [out, IUnknown#Release]
     *     The created Weld 3D annotation.. 
     *   @return
     *      S_OK if succeded, E_FAIL if creation failed.
     */
    virtual HRESULT CreateWeldOnGeometry (CATSO * ipGeometrySelected,
                                          CATMathPlane * ipPlane,
                                          CATITPSWeld ** opiCreatedWeld) = 0;

    /**
     * <br /><strong>Role</strong>: Creates a NOA (either text or ditto) annotation on a geometrical selection.
     * In part document using this method result in a status To Update for
     * the part, this method does not manage part update.
     *   @param ipGeometrySelected [in ]
     *     This argument define the geometry or feature to which the created annotation
     *     will apply. This CATSO must contain at least a valid 
     *     PathElement on a geometrical element or feature supported by 3D annotations.
     *     A valid PathElement means a PathElement identical to what is 
     *     obtained by interactive selection. If there are several PathElement
     *     the NOA will apply on all the geometry selected.
     *   @param ipPlane            [in ]
     *     Optionnal, can be used to specify a favorite plane for annotation
     *     3D visualization. If NULL, annotation plane is automaticaly defined.
     *     If favorite plane is not convenient for annotation another plane
     *     will be used and specified favorite plane will be ignored.
     *   @param ipString           [in ]
     *     A pointer on a valid CATUnicodeString to set NOA Text.
     *   @param ipFilteringType    [in ]
     *     A pointer on a valid CATUnicodeString to set NOA Type used in filter command.
     *   @param opiCreatedNOA      [out, IUnknown#Release]
     *     The created NAO entity.
     *   @param ipiDitto           [in ]
     *     Optional, when given resulting NOA is a ditto NOA. The Drawing 2D
     *     Component used to build the NOA 3D display is expected.
     *   @param iNoaRep            [in ]
     *     Optional, mainly usefull when ipiDitto is provided. It will allow to distinguish 
     *     the ability to CATTPSNRTDittoOnGeometry from the CATTPSNRTDitto. In reminder this
     *     flag when equas to CATTPSNRTDittoOnGeometry indicates the factory that Stick Ditto
     *     perpendicularly to geometry option is selected. Consequently, the ditto is instantiated
     *     without frame or leader and its origin point is stuck and set on the selected geometry.
     *     In addition, the default anchor point position is the middle center.
     *     Possible value are given by CATTPSNoaRepType enum, @see CATTPSInterfaces.CATTPSNoaRepType.
     *   @return
     *      S_OK if succeeded, E_FAIL if creation failed.
     */
    virtual HRESULT CreateNOAOnGeometry( CATSO            *  ipGeometrySelected,
                                         CATMathPlane     *  ipPlane,
                                         CATUnicodeString *  ipString,
                                         CATUnicodeString *  ipFilteringType,
                                         CATITPSNoa       ** opiCreatedNOA,
                                         CATI2DDitto      *  ipiDitto = NULL,
                                         CATTPSNoaRepType    iNoaRep  = ::CATTPSNRTDitto ) = 0;

    /**
     * <br /><strong>Role</strong>: Creates a Flag Note on a geometrical selection.
     * In part document using this method result in a status To Update for
     * the part, this method does not manage part update.
     *   @param ipGeometrySelected [in ]
     *     This argument define the geometry or feature to which the created annotation
     *     will apply. This CATSO must contain at least a valid 
     *     PathElement on a geometrical element or feature supported by 3D annotations.
     *     A valid PathElement means a PathElement identical to what is 
     *     obtained by interactive selection. If there are several PathElement
     *     the Flag note will apply on all the geometry selected.
     *   @param ipPlane            [in ]
     *     Optionnal, can be used to specify a favorite plane for annotation
     *     3D visualization. If NULL, annotation plane is automaticaly defined.
     *     If favorite plane is not convenient for annotation another plane
     *     will be used and specified favorite plane will be ignored.
     *   @param ipString           [in ]
     *     A pointer on a valid CATUnicodeString to set Flag Note Text.
     *   @param opiCreatedFlagNote [out, IUnknown#Release]
     *     The created Flag Note.
     *   @return
     *      S_OK if succeeded, E_FAIL if creation failed.
     */
    virtual HRESULT CreateFlagNoteOnGeometry (CATSO             * ipGeometrySelected,
                                              CATMathPlane      * ipPlane,
                                              CATUnicodeString  * ipString,
                                              CATITPSFlagNote  ** opiCreatedFlagNote ) = 0;

    /**
    * <br /><strong>Role</strong>: Creates an ISO default specifications text.
    * <br /><strong>Precondition</strong>: Creation of the text is failing with old Annotation Set (before V5-6R2019).
    * <br />Creates a Text at bottom center position of the active View reporting the
    * ISO default specifications defined on the Annotation Set. Name of created text is
    * "ISO default specifications" (when regional setting language is english).
    * <br />This text is a multi-lines content using attribute link on the Set:
    * <br />  _ 1st line displays the default for linear size operator,
    * <br />  _ 2nd line displays the default for angular size operator,
    * <br />  _ 3rd line displays the default specification elements for form association,
    * <br />  _ next line(s) is(are) depending on GDT toleranced feature filtering options.
    *   @param opiCreatedText [ out, IUnknown#Release ]
    *     The mutli-lines created Text.
    *   @return
    *      S_OK if succeded, E_FAIL if creation failed or if ISO Standard not current.
    */
    virtual HRESULT CreateISODefaultSpecificationsText ( CATITPSText ** opiCreatedText ) = 0;
};
#endif
