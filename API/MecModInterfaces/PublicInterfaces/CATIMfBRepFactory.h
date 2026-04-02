#ifndef CATIMfBRepFactory_h
#define CATIMfBRepFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATMfBRepDefs.h"
#include "CATMfBRepInternalDefs.h"
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATISpecObject.h"

class CATIBRepAccess_var;
class CATIRSur_var;
class CATIREdge_var;
class CATICharacteristicAxis_var;
class CATICharacteristicExtremity_var;
class CATICharacteristicPlanarSubElement_var;
class CATIMfBRep_var;
class CATIFVertex_var;
class CATIMfVolume_var;
class CATIMfDomain_var;
class CATIMfFsur_var;
class CATIMfRsur_var;
class CATIMfFedge_var;
class CATIMfRedge_var;
class CATIMfFvertex_var;
class CATIMfAxis_var;
class CATIMfExtremity_var;
class CATIMfPlanarSubElement_var;
class CATIMfBRepFeature_var;
class CATIMfPointOnEdge_var;
class CATIMfBoundingPlane_var;
class CATMathPoint;
class CATNamingReference;
class CATIMfBorderFvertex_var;
class CATIMfWireFvertex_var;
class CATIMfBorderRedge_var;
class CATIMfWireRedge_var;
class CATIBorderFVertex_var;
class CATIWireFVertex_var;
class CATIBorderREdge_var;
class CATIWireREdge_var;
class CATIFVertexAccess_var;
class CATISpecObject_var;
class CATIMfSuperBRepFeature_var;
class CATIMfPropagation_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfBRepFactory;
#else
extern "C" const IID IID_CATIMfBRepFactory;
#endif

/**
 * Interface to create BRep features.
 * <b>Role</b>:
 * A BRep feature can be created from symbolic information:
 * the source shape feature <tt>iPrint</tt>, 
 * a key word <tt>iKey</tt> and, if needed, 
 * a profile element <tt>iProfileElement</tt> of a sketch.
 * <br>For example, the face BRep feature associated with the lateral face of Pad.3 
 * extruded from Line.7 is created with 
 * <tt>iPrint=Pad.3</tt>, 
 * <tt>iKey=MfKeyExtrudedFrom</tt>,
 * <tt>iProfileElement=Line.7</tt>.
 * <br>Another example, the face BRep feature associated with the top face of Pad.6 is created with
 * <tt>iPrint=Pad.6</tt>,
 * <tt>iKey=MfKeyTop</tt>,
 * <tt>iProfileElement=NULL_var</tt>.
 * <br>The edge BRep feature is specified with symbolic information related to its two adjacent faces.
 * <br>The vertex BRep feature is specified with symbolic information related to all its adjacent faces.
 * <br><b>Legal values</b>: Key words are:
 * <ul><li><tt>MfKeyNone</tt>,
 * <li><tt>MfKeyTop</tt> available for pad, pocket, rib, slot, stiffener,
 * <li><tt>MfKeyBottom</tt> available for pad, pocket, rib, slot, stiffener,
 * <li><tt>MfKeyExtrudedFrom</tt> available for pad, pocket, rib, slot, stiffener, shaft, groove,
 * <li><tt>MfKeyStart</tt> available for shaft, groove,
 * <li><tt>MfKeyEnd</tt> available for shaft, groove,
 * <li><tt>MfKeyOutsideThickness</tt> available for shell,
 * <li><tt>MfKeyInsideThickness</tt> available for shell.</ul>
 * @example
 * <pre>
 * +-----------+-----------------------------------------------------------+
 * ! Output    !                       Input                               !   
 * +-----------+-----------------+------------------------+----------------+
 * ! BRep type ! print           ! key                    !  profil        !   
 * +===========+=================+========================+================+
 * ! Face      ! Pad.1           ! MfKeyTop               !  NULL          !  
 * !           +-----------------+------------------------+----------------+
 * !           ! Pad.1           ! MfKeyTop               !  NULL          !  
 * !           +-----------------+------------------------+----------------+
 * !           ! Pad.1           ! MfKeyExtrudedFrom      !  Line.1        !
 * !           +-----------------+------------------------+----------------+
 * !           ! Revol.1         ! MfKeyExtrudedFrom      !  Line.1        !
 * !           +-----------------+------------------------+----------------+
 * !           ! Revol.1         ! MfKeyEnd               !  Line.1        !
 * !           +-----------------+------------------------+----------------+
 * !           ! Revol.1         ! MfKeyStart             !  Line.1        !
 * !           +-----------------+------------------------+----------------+
 * !           ! Sweep.1         ! MfKeyExtrudedFrom      !  Line.1        !
 * !           ! Sweep.1         ! MfKeyExtrudedFrom      !  Line.2        !
 * !           +-----------------+------------------------+----------------+   
 * !           ! Fillet.1        ! MfKeyNone              !  NULL          !
 * !           ! Edge.1          ! MfKeyNone              !  NULL          !
 * !           +-----------------+------------------------+----------------+
 * !           ! Draft.1         ! MfKeyNone              !  NULL          !
 * !           ! Face.1          ! MfKeyNone              !  NULL          !
 * !           +-----------------+------------------------+----------------+
 * !           ! Fillet.1        ! MfKeyNone              !  NULL          !
 * !           ! Face.1          ! MfKeyNone              !  NULL          !
 * !           ! Face.2          ! MfKeyNone              !  NULL          !
 * !           +-----------------+------------------------+----------------+
 * !           ! Fillet.1        ! MfKeyNone              !  NULL          !
 * !           ! Face.1          ! MfKeyNone              !  NULL          !
 * !           ! Face.2          ! MfKeyNone              !  NULL          !
 * !           ! FaceToRemove.3  ! MfKeyNone              !  NULL          !
 * !           +-----------------+------------------------+----------------+         
 * !           ! Shell.1         ! MfKeyNone              !  NULL          !
 * !           ! face.1          ! MfKeyInsideThickness   !  NULL          !
 * !           +-----------------+------------------------+----------------+
 * !           ! Shell.1         ! MfKeyNone              !  NULL          !
 * !           ! face.1          ! MfKeyOutsideThickness  !  NULL          !
 * +-----------+-----------------+------------------------+----------------+
 * ! Edge      ! Pad.1           ! MfKeyTop               !  NULL          !  
 * !           ! Pad.1           ! MfKeyExtrudedFrom      !  Line.1        !  
 * !           +-----------------+------------------------+----------------+
 * !           ! Pad.1           ! MfKeyBottom            !  NULL          !  
 * !           ! Pad.2           ! MfKeyExtrudedFrom      !  Line.3        !  
 * +-----------+-----------------+------------------------+----------------+
 * ! Vertex    ! Pad.1           ! MfKeyTop               !  NULL          !  
 * !           ! Pad.1           ! MfKeyExtrudedFrom      !  Line.3        !  
 * !           ! Pad.1           ! MfKeyExtrudedFrom      !  Line.4        !  
 * !           +-----------------+------------------------+----------------+
 * !           ! Pad.1           ! MfKeyTop               !  NULL          !  
 * !           ! Pad.2           ! MfKeyBottom            !  NULL          !  
 * !           ! Pad.3           ! MfKeyExtrudedFrom      !  Line.4        !  
 * +-----------+-----------------+------------------------+----------------+
 * </pre>
 * @see CATIFeaturize
 *
 */
class ExportedByMecModItfCPP CATIMfBRepFactory : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfFsur_var CreateMfFsur(const CATIRSur_var &rsur,
                                      const CATIContainer_var &WorkCont=NULL_var,
                                      const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATIRSur_var&rsur,
                                             const CATISpecObject_var &feat=NULL_var,
                                             const CATIContainer_var  &WorkCont=NULL_var,
                                             const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfFedge_var CreateMfFedge(const CATIREdge_var &redge,
                                        const CATIContainer_var &WorkCont=NULL_var,
                                        const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfBRepFeature_var CreateMfRedge(const CATIREdge_var &redge,
                                              const CATISpecObject_var &feat=NULL_var,
                                              const CATIContainer_var  &WorkCont=NULL_var,
                                              const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfFvertex_var CreateMfFvertex(const CATIFVertex_var &vertex,
                                            const CATIContainer_var &WorkCont=NULL_var,
                                            const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfBorderFvertex_var CreateMfBorderFvertex(const CATIBorderFVertex_var &borderFVertex,
                                                        const CATMfFeaturizeMode mode=0) = 0;

/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfWireFvertex_var CreateMfWireFvertex(const CATIWireFVertex_var &wireFVertex,
                                                    const CATMfFeaturizeMode mode=0) = 0;

/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfBorderRedge_var CreateMfBorderRedge(const CATIBorderREdge_var &borderRedge,
                                                    const CATISpecObject_var  &feat=NULL_var,
                                                    const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfWireRedge_var CreateMfWireRedge(const CATIWireREdge_var &wireREdge,
                                                const CATISpecObject_var &feat=NULL_var,
                                                const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfAxis_var CreateMfFAxis(const CATICharacteristicAxis_var &axis ,
                                       const CATIContainer_var &WorkCont=NULL_var,
                                       const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfAxis_var CreateMfRAxis(const CATICharacteristicAxis_var &axis,
                                       const CATIContainer_var &WorkCont=NULL_var,
                                       const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfExtremity_var CreateMfFExtremity(const CATICharacteristicExtremity_var &Extremity ,
                                                 const CATIContainer_var &WorkCont=NULL_var,
                                                 const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfExtremity_var CreateMfRExtremity(const CATICharacteristicExtremity_var &Extremity ,
                                                 const CATIContainer_var &WorkCont=NULL_var,
                                                 const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfPlanarSubElement_var CreateMfFPlanarSubElement(const CATICharacteristicPlanarSubElement_var &PlanarSubEle,
                                                               const CATIContainer_var &WorkCont=NULL_var,
                                                               const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Old method.
 */
  virtual CATIMfPlanarSubElement_var CreateMfRPlanarSubElement(const CATICharacteristicPlanarSubElement_var &PlanarSubEle,
                                                               const CATIContainer_var &WorkCont=NULL_var,
                                                               const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfBRep_var CreateMfBRep(CATNamingReference *MfJournalingStructure,
                                      const CATBaseUnknown_var &Support=NULL_var) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfFsur_var CopyMfFsur(const CATIMfBRep_var &brep) = 0;

/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfRsur_var CopyMfRsur(const CATIMfBRep_var &brep,
                                    const CATBaseUnknown_var &Support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfFedge_var CopyMfFedge(const CATIMfBRep_var &brep) = 0;

/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfRedge_var CopyMfRedge(const CATIMfBRep_var &brep,
                                      const CATBaseUnknown_var &Support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfFvertex_var CopyMfFvertex(const CATIMfBRep_var &brep) = 0;

/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfBorderRedge_var CopyMfBorderRedge(const CATIMfBRep_var &brep,
                                                  const CATBaseUnknown_var &Support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfBorderFvertex_var CopyMfBorderFvertex(const CATIMfBRep_var &brep) = 0;

/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfWireRedge_var CopyMfWireRedge(const CATIMfBRep_var &brep,
                                              const CATBaseUnknown_var &Support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize with MfDuplicate.
 */
  virtual CATIMfWireFvertex_var CopyMfWireFvertex(const CATIMfBRep_var &brep) = 0;
  
/**
 * Creates a face, edge or vertex functional BRep feature from symbolic information.
 * <br><b>Note:</b>The three first list must have the same size.
 * @param iPrint
 * List of source shape features.
 * @param iKeys
 * List of key words.
 * <br><b>Legal values</b>:
 * <tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>, <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>.
 * @param iProfileElements
 * List of profile elements.
 * @param iSupport
 * Support.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */ 
  virtual CATIMfBRep_var CreateMfFBRep(CATLISTV(CATISpecObject_var) &iPrint, 
                                       CATListOfCATUnicodeString    &iKeys,
                                       CATLISTV(CATISpecObject_var) &iProfileElements,
                                       const CATISpecObject_var     &iSupport,
                                       const CATIContainer_var      &iWorkCont=NULL_var) = 0;
/**
 * Creates a face, edge or vertex relimited BRep feature from symbolic information.
 * <br><b>Note:</b>The three first list must have the same size.
 * @param iPrint
 * List of source shape features.
 * @param iKeys
 * List of key words.
 * <br><b>Legal values</b>:
 * <tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>, <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>.
 * @param iElementsDeProfil
 * List of profile elements.
 * @param iSupport
 * Support.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */
  virtual CATIMfBRep_var CreateMfRBRep(CATLISTV(CATISpecObject_var) &iPrint, 
                                       CATListOfCATUnicodeString    &iKeys,
                                       CATLISTV(CATISpecObject_var) &iElementsDeProfil,
                                       const CATISpecObject_var     &iSupport,
                                       const CATIContainer_var      &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face functional BRep feature from symbolic information.
 * @param iPrint
 * Source shape feature.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>, <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iPrint,
                                      const CATUnicodeString   &iKey, 
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Source shape feature is undefined when the sketch is shared.
 */
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &ProfileElement,
                                      const CATIContainer_var  &WorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face functional BRep feature from symbolic information.
 * @param iPrint
 * Source shape feature.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement
 * Profile element.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */  
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iPrint, 
                                      const CATUnicodeString   &iKey, 
                                      const CATISpecObject_var &iProfileElement, 
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face functional BRep feature from symbolic information.
 * @param iPrint
 * Source shape feature (a rib or a slot) built on two sketches.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement1
 * Profile element in the first sketch.
 * @param iProfileElement2
 * Profile element in the second sketch.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iPrint, 
                                      const CATUnicodeString   &iKey, 
                                      const CATISpecObject_var &iProfileElement1, 
                                      const CATISpecObject_var &iProfileElement2, 
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face functional BRep feature from symbolic information.
 * @param iPrint 
 * Source shape feature: an edge fillet, a chamfer, a draft angle or a thickness.
 * @param iMfBRep
 * BRep feature defining the source shape feature: an edge or a face.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iFeature,
                                      const CATIMfBRep_var     &iMfBRep,
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face functional BRep feature from symbolic information.
 * @param iFeature 
 * Source shape feature: a face-face fillet.
 * @param iMfBRep1
 * First face of fillet.
 * @param iMfBRep2
 * Second face of fillet.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */  
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iFeature,
                                      const CATIMfBRep_var     &iMfBRep1,
                                      const CATIMfBRep_var     &iMfBRep2,
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face functional BRep feature from symbolic information.
 * @param iFeature 
 * Source shape feature: a tritangent fillet.
 * @param iMfBRep1
 * First face of fillet.
 * @param iMfBRep2
 * Second face of fillet.
 * @param iMfBRep3
 * Removed face of fillet.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */  
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iFeature,
                                      const CATIMfBRep_var     &iMfBRep1,
                                      const CATIMfBRep_var     &iMfBRep2,
                                      const CATIMfBRep_var     &iMfBRep3,
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize. 
 * Creates a face functional BRep feature from symbolic information.
 * @param iFeature
 * Source shape feature: a shell.
 * @param iMfBRep
 * Face BRep feature on the solid before the shell.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyOutsideThickness</tt>, <tt>MfKeyInsideThickness</tt>.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var &iFeature,
                                      const CATIMfBRep_var     &iMfBRep,
                                      const CATUnicodeString   &iKey, 
                                      const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfFBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates an edge functional BRep feature from symbolic information.
 * @param iPrint1 
 * First source shape feature.
 * @param iKey1
 * Key word.
 * @param iProfileElement1
 * Profile element in the sketch of <tt>iPrint1</tt>.
 * @param iPrint2 
 * Second source shape feature.
 * @param iKey2
 * Key word.
 * @param iProfileElement2
 * Profile element in the sketch of <tt>iPrint2</tt>.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */    
  virtual CATIMfFedge_var CreateMfFedge(const CATISpecObject_var &iPrint1,
                                        const CATUnicodeString   &iKey1,
                                        const CATISpecObject_var &iProfileElement1,
                                        const CATISpecObject_var &iPrint2,
                                        const CATUnicodeString   &iKey2,
                                        const CATISpecObject_var &iProfileElement2,
                                        const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face relimited BRep feature from symbolic information.
 * Support is implicit.
 * @param iPrint
 * Source shape feature.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>, <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATISpecObject_var &iPrint,
                                             const CATUnicodeString   &iKey,
                                             const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Source shape feature is undefined when the sketch is shared.
 * OLD METHOD, DO NOT USE
 * Use instead : 
 * virtual CATIMfBRepFeature_var CreateMfRsur(const CATISpecObject_var &iPrint, 
 *                                            const CATUnicodeString   &iKey,
 *                                            const CATISpecObject_var &iProfileElement,
 *                                            const CATIContainer_var  &iWorkCont=NULL_var) = 0;
 */  
  virtual CATIMfRsur_var CreateMfRsur(const CATISpecObject_var &iProfileElement,
                                      const CATIContainer_var  &iWorkCont) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face relimited BRep feature from symbolic information.
 * Support is implicit.
 * @param iPrint
 * Source shape feature.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement
 * Profile element.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */  
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATISpecObject_var &iPrint, 
                                             const CATUnicodeString   &iKey,
                                             const CATISpecObject_var &iProfileElement,
                                             const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face relimited BRep feature from symbolic information.
 * Support is implicit.
 * @param iPrint 
 * Source shape feature: an edge fillet, a chamfer, a draft angle or a thickness.
 * @param iMfBRep
 * BRep feature defining the source shape feature: an edge or a face.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATISpecObject_var &iFeature,
                                             const CATIMfBRep_var     &iMfBRep,
                                             const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates an edge relimited BRep feature from symbolic information.
 * Support is implicit.
 * @param iPrint1 
 * First source shape feature.
 * @param iKey1
 * Key word.
 * @param iProfileElement1
 * Profile element in the sketch of <tt>iPrint1</tt>.
 * @param iPrint2 
 * Second source shape feature.
 * @param iKey2
 * Key word.
 * @param iProfileElement2
 * Profile element in the sketch of <tt>iPrint2</tt>.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */ 
  virtual CATIMfBRepFeature_var CreateMfRedge(const CATISpecObject_var &iPrint1,
                                              const CATUnicodeString   &iKey1,
                                              const CATISpecObject_var &iProfileElement1,
                                              const CATISpecObject_var &iPrint2,
                                              const CATUnicodeString   &iKey2,
                                              const CATISpecObject_var &iProfileElement2,
                                              const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face relimited BRep feature from symbolic information.
 * Support is an input parameter.
 * @param iPrint
 * Source shape feature.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement
 * Profile element.
 * @param iSupport
 * Support.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */ 
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATISpecObject_var &iPrint,
                                             const CATUnicodeString   &iKey,
                                             const CATISpecObject_var &iProfileElement,
                                             const CATISpecObject_var &iSupport,
                                             const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates a face relimited BRep feature from symbolic information.
 * Support is an input parameter.
 * @param iPrint 
 * Source shape feature: an edge fillet, a chamfer, a draft angle or a thickness.
 * @param iMfBRep
 * BRep feature defining the source shape feature: an edge or a face.
 * @param iSupport
 * Support.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */    
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATISpecObject_var &iFeature,
                                             const CATIMfBRep_var     &iMfBRep,
                                             const CATISpecObject_var &iSupport,
                                             const CATIContainer_var  &iWorkCont) = 0;
/**
 * @nodoc
 * Deprecated: use CreateMfRBRep method or GetBReps of CATIMfGeometryAccess and FeaturizeR of CATIFeaturize.
 * Creates an edge relimited BRep feature from symbolic information.
 * Support is an input parameter.
 * @param iPrint1 
 * First source shape feature.
 * @param iKey1
 * Key word.
 * @param iProfileElement1
 * Profile element in the sketch of <tt>iPrint1</tt>.
 * @param iPrint2 
 * Second source shape feature.
 * @param iKey2
 * Key word.
 * @param iProfileElement2
 * Profile element in the sketch of <tt>iPrint2</tt>.
 * @param iSupport
 * Support.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfBRepFeature_var CreateMfRedge(const CATISpecObject_var &iPrint1,
                                              const CATUnicodeString   &iKey1,
                                              const CATISpecObject_var &iProfileElement1,
                                              const CATISpecObject_var &iPrint2,
                                              const CATUnicodeString   &iKey2,
                                              const CATISpecObject_var &iProfileElement2,
                                              const CATISpecObject_var &iSupport,
                                              const CATIContainer_var  &iWorkCont) = 0;
/**
 * @nodoc
 * Old method.
 */  
  virtual CATIMfFsur_var CreateMfFsur(const CATISpecObject_var Print, 
                                      const CATUnicodeString   Key, 
                                      const CATUnicodeString   AliasDProfileElement, 
                                      const CATIContainer_var  WorkCont) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfVolume_var CreateMfVolume (const CATUnicodeString   &etiquette,
                                             const CATISpecObject_var &feat,
                                             const CATIContainer_var  &WorkCont=NULL_var,
                                             const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfDomain_var CreateMfDomain (const CATUnicodeString   &etiquette,
                                             const CATISpecObject_var &feat,
                                             const CATIContainer_var  &WorkCont=NULL_var,
                                             const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfFsur_var CreateMfFsur(const CATUnicodeString   &etiquette,
                                      const CATISpecObject_var &feat,
                                      const CATIContainer_var  &WorkCont=NULL_var,
                                      const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfBRepFeature_var CreateMfRsur(const CATUnicodeString   &etiquette,
                                             const CATISpecObject_var &feat,
                                             const CATIContainer_var  &WorkCont=NULL_var,
                                             const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfFedge_var CreateMfFedge(const CATUnicodeString   &etiquette,
                                        const CATISpecObject_var &feat,
                                        const CATIContainer_var  &WorkCont=NULL_var,
                                        const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfBRepFeature_var CreateMfRedge (const CATUnicodeString   &etiquette,
                                               const CATISpecObject_var &feat,
                                               const CATIContainer_var  &WorkCont=NULL_var,
                                               const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfFvertex_var CreateMfFvertex(const CATUnicodeString   &etiquette,
                                            const CATISpecObject_var &feat,
                                            const CATIContainer_var  &WorkCont=NULL_var,
                                            const CATMfFeaturizeMode mode=0) = 0;
  
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfBorderRedge_var CreateMfBorderRedge (const CATUnicodeString   &etiquette,
                                                     const CATISpecObject_var &feat,
                                                     const CATIContainer_var  &WorkCont=NULL_var,
                                                     const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfBorderFvertex_var CreateMfBorderFvertex (const CATUnicodeString   &etiquette,
                                                         const CATISpecObject_var &feat,
                                                         const CATIContainer_var  &WorkCont=NULL_var,
                                                         const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfWireRedge_var CreateMfWireRedge (const CATUnicodeString   &etiquette,
                                                 const CATISpecObject_var &feat,
                                                 const CATIContainer_var  &WorkCont=NULL_var,
                                                 const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfWireFvertex_var CreateMfWireFvertex (const CATUnicodeString   &etiquette,
                                                     const CATISpecObject_var &feat,
                                                     const CATIContainer_var  &WorkCont=NULL_var,
                                                     const CATMfFeaturizeMode mode=0) = 0;
/**
 * @nodoc
 * Next version.
 */
//  virtual CATIMfRedge_var CopyMfIntersectionRedge(const CATIMfRedge_var& brep,
//                                                  const CATBaseUnknown_var &Support) = 0;
/**
 * Creates a point on edge BRep feature.
 * @param iEdge
 * Edge BRep feature.
 * @param iRatio
 * Ratio.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfPointOnEdge_var CreateMfPointOnEdge(const CATISpecObject_var& iEdge, 
                                                    const double              iRatio, 
                                                    const CATIContainer_var&  iWorkCont=NULL_var) = 0;
/**
 * Creates a point on edge BRep feature.
 * @param iEdge
 * Edge BRep feature.
 * @param iPoint
 * Point.
 * @param iWorkCont
 * BRep feature is created in <tt>iWorkCont</tt> container.
 */   
  virtual CATIMfPointOnEdge_var CreateMfPointOnEdge(const CATISpecObject_var &iEdge, 
                                                    const CATMathPoint       &iPoint, 
                                                    const CATIContainer_var  &iWorkCont=NULL_var) = 0;
/**
 * @nodoc
 * Internal use.
 */  
  virtual CATIMfPointOnEdge_var CreateMfPointOnEdge(const CATNamingReference* iNamingReference, 
                                                    const CATBaseUnknown_var& iSupport=NULL_var) = 0;
/**
 * @nodoc
 * Internal use.
 */ 
  virtual CATIMfBoundingPlane_var CreateMfBoundingPlane(const CATISpecObject_var &Feature, 
                                                        const CATUnicodeString   &Type, 
                                                        const CATIContainer_var  &WorkCont) = 0;
/**
 * @nodoc
 * Internal use.
 */
  virtual CATIMfSuperBRepFeature_var CreateMfSuperBRepFeature(const CATIMfBRep_var&        brep,
                                                              const CATIMfPropagation_var& Propagation) = 0;
/**
 * @nodoc
 * Internal use.
 * CATMfSuperBRepType = MfWithoutSecoursInit | MfWithAutomaticSecoursInits | MfWithAutomaticSecondaryInits| MfMonoBody | MfMultiBody
 * 
 * MfWithAutomaticSecoursInits: "help inits" are computed from BRep resolution and propagation at creation time.
 * 
 * MfWithAutomaticSecondaryInits: Automatic use of "help inits" in case of first init vanish.
 *
 * MfMonoBody: only one scope on the BRep feature, resolution returns all the cells.
 *  
 * MfMultiBody: one resolution scope on the BRep feature, one resolution scope with propagation on the super BRep feature.
 * 
 * CATIMfBRep: simple resolution.
 * 
 * CATIMfSuperBRep: simple resolution.    
 */
  virtual CATIMfSuperBRepFeature_var CreateMfSuperBRepFeature(const CATIMfBRep_var         &brep,
                                                              const CATIMfPropagation_var  &Propagation,
                                                              const CATMfSuperBRepType  SuperBReptype) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfVolume_var CreateMfVolume(const CATIBRepAccess_var &vol,
                                      const CATMfFeaturizeMode mode,
                                      const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfDomain_var CreateMfDomain(const CATIBRepAccess_var &dom,
                                      const CATMfFeaturizeMode mode,
                                      const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfFsur_var CreateMfFsur(const CATIBRepAccess_var &rsur,
                                      const CATMfFeaturizeMode mode,
                                      const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfRsur_var CreateMfRsur(const CATIBRepAccess_var &rsur,
                                      const CATMfFeaturizeMode mode,
                                      const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfFedge_var CreateMfFedge(const CATIBRepAccess_var &redge,
                                        const CATMfFeaturizeMode mode,
                                        const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfRedge_var CreateMfRedge(const CATIBRepAccess_var &redge,
                                        const CATMfFeaturizeMode mode,
                                        const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfFvertex_var CreateMfFvertex(const CATIBRepAccess_var &vertex,
                                            const CATMfFeaturizeMode mode,
                                            const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfBorderFvertex_var CreateMfBorderFvertex(const CATIBRepAccess_var &borderFVertex,
                                                        const CATMfFeaturizeMode mode,
                                                        const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfWireFvertex_var CreateMfWireFvertex(const CATIBRepAccess_var &wireFVertex,
                                                    const CATMfFeaturizeMode mode,
                                                    const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfBorderRedge_var CreateMfBorderRedge(const CATIBRepAccess_var &borderRedge,
                                                    const CATMfFeaturizeMode mode,
                                                    const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfWireRedge_var CreateMfWireRedge(const CATIBRepAccess_var  &wireREdge,
                                                const CATMfFeaturizeMode mode,
                                                const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfAxis_var CreateMfFAxis(const CATIBRepAccess_var &axis ,
                                       const CATMfFeaturizeMode mode,
                                       const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfAxis_var CreateMfRAxis(const CATIBRepAccess_var &axis,
                                       const CATMfFeaturizeMode mode,
                                       const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfExtremity_var CreateMfFExtremity(const CATIBRepAccess_var &Extremity ,
                                                 const CATMfFeaturizeMode mode,
                                                 const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfExtremity_var CreateMfRExtremity(const CATIBRepAccess_var &Extremity ,
                                                 const CATMfFeaturizeMode mode,
                                                 const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfPlanarSubElement_var CreateMfFPlanarSubElement(const CATIBRepAccess_var &PlanarSubElement ,
                                                               const CATMfFeaturizeMode mode,
                                                               const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. Use CATIFeaturize.
 */
  virtual CATIMfPlanarSubElement_var CreateMfRPlanarSubElement(const CATIBRepAccess_var &PlanarSubElement ,
                                                               const CATMfFeaturizeMode mode,
                                                               const CATBaseUnknown_var &support) = 0;
/**
 * @nodoc
 * Internal use. 
 */
  virtual CATIMfPointOnEdge_var CreateMfPointOnEdge(const CATISpecObject_var& Edge, 
                                                   const CATIFVertexAccess_var& vertex)  = 0;
/**
 * Creates an intersection edge BRep Feature.
 * @param iSelectingObject
 * The possible values are: <ul>
 * <li> NULL_var for an empty intersection edge which afterwards must be set with appropriate attributes using @href CATIMfIntersectionEdge services.</li>
 * <li> a selecting object corresponding to an edge, and this kind of creation is then equivalent to @href CATIFeaturize#FeaturizeR.</li></ul>
 * @param imode
 * Featurization mode, which should be, at least:<ul>
 * <li><tt>MfFeaturizeIntersection</tt></li>
 * <li><tt>MfFeaturizeC1Intersection</tt></li> 
 * <li><tt>MfFeaturizeC1Intersection|MfFeaturizeSubElement</tt></li></ul>
 * @param isupport
 * The explicit support, e.g. the feature of resolution
 * @return
 * The @href CATIMfIntersectionEdge BRep Feature.
 */
  virtual CATIMfBRep_var CreateMfIntersectionEdge(const CATIBRepAccess_var& iSelectingObject,
                                                  const CATMfFeaturizeMode imode,
                                                  const CATBaseUnknown_var &isupport)=0;
/**
 * @nodoc
 * Internal use. 
 */
  virtual CATIMfBRep_var CreateMfInitialEdge(const CATIBRepAccess_var& redge,
                                             const CATMfFeaturizeMode mode,
                                             const CATBaseUnknown_var &support)=0;
};

CATDeclareHandler (CATIMfBRepFactory, CATBaseUnknown); 

#endif



















