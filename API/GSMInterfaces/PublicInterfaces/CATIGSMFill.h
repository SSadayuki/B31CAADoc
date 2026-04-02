/* -*-c++-*- */
#ifndef CATIGSMFill_H
#define CATIGSMFill_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATGSMContinuityDef.h"
#include "CATICkeParm.h"
#include "CATListOfInt.h"
#include "CATGSMCanonicalDetectionDef.h"
#include "CATGSMFillDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMFill;
#else
extern "C" const IID IID_CATIGSMFill;
#endif
/**
* Interface to surface fill feature.
* <b>Role</b>: Allows you to access data of the Fill feature created by using 
* boundaries (curves, lines), supports, and a continuity value
* @see CATIGSMFactory#CreateFill
*/
class ExportedByCATGitInterfaces CATIGSMFill : public CATBaseUnknown
{
  CATDeclareInterface;
public: 

  /**
  * Adds a boundary to the Fill.
  * The boundary is added at the end of the list.
  *   @param iBoundary
  *      curve boundary
  */
  virtual HRESULT AddBound(CATISpecObject_var & iBoundary) = 0;

  /**
  *  Inserts a boundary after another at a given position.
  *   @param iBoundary
  *      curve boundary
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT InsertBoundAfterPosition(CATISpecObject_var & iBoundary,int iPos) = 0;

  /**
  * Inserts a boundary before another at a given position.
  *   @param iBoundary
  *      curve boundary
  *   @param Pos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT InsertBoundBeforePosition(CATISpecObject_var & iBoundary,int iPos) = 0;


  /**
  *  Gets the position of a boundary in the list.
  *   @param oBoundary
  *      curve boundary
  *   @param Pos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT GetBoundPosition(CATISpecObject_var & oBoundary,int & Pos) = 0;

  /**
  * Gets the boundary which is at the given position.
  *   @param oBoundary
  *      curve boundary
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT GetBoundAtPosition(CATISpecObject_var & oBoundary,int iPos) = 0;


  /**
  * Removes the boundary at the given position.
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT RemoveBoundAtPosition(int iPos) = 0;

  /**
  * Removes all elements in the list of boundaries.
  */
  virtual HRESULT RemoveAllBound() = 0;


  /**
  * Replaces a boundary in the list at the given position.
  *   @param iBoundary
  *      curve boundary
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT ReplaceBoundAtPosition(CATISpecObject_var & iBoundary,int iPos) = 0;


  /**
  * Gets the size of the list (number of boundaries).
  *   @param oSize
  *      size of the list of boundaries
  */
  virtual HRESULT GetBoundSize(int & oSize) = 0;


  /**
  * Gets all elements in the list of boundaries.
  *   @param CATLISTV oBoundary
  *      list of boundaries
  *   @param CATLISTV oSupport
  *      list of supports
  */
  virtual HRESULT GetAllBoundaries(CATLISTV(CATISpecObject_var) & oBoundary,
    CATLISTV(CATISpecObject_var) & oSupport) =0;


  /**
  * Adds a support to the Fill. 
  * <br>The support is added at the end of the list.
  *   @param iBoundary
  *      boundary
  *   @param iSupport
  *      support
  */
  virtual HRESULT AddSupport(CATISpecObject_var & iBoundary, CATISpecObject_var & iSupport) = 0;

  /**
  * Gets the Support which is at the given position.
  *   @param oSupport 
  *      support 
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT GetSupportAtPosition(CATISpecObject_var & oSupport,int iPos) = 0;

  /**
  * Removes the Support at the given position.
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT RemoveSupportAtPosition(int iPos) = 0;

  /**
  * Replaces the Support at the given position.
  *   @param iSupport 
  *      support
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT ReplaceSupportAtPosition(CATISpecObject_var & iSupport,int iPos) = 0;

  /**
  * Gets the continuity mode.
  *   @param oContinuity
  *      continuity between the support and the fill
  */
  virtual HRESULT GetContinuity(enum CATGSMContinuity & oContinuity) = 0;

  /**
  * Gets the continuity mode for a particular boundary.
  *   @param oContinuity
  *      continuity between the support and the fill
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT GetBoundaryContinuity(enum CATGSMContinuity & oContinuity,int iPos) = 0;

  /**
  * Sets the continuity mode.
  *   @param iContinuity
  *      continuity between the support and the fill
  */
  virtual HRESULT SetContinuity(const enum CATGSMContinuity iContinuity) = 0;

  /**
  * Sets the continuity mode for a particular boundary.
  *   @param iContinuity
  *      continuity between the support and the fill
  *   @param iPos
  *      position of the curve boundary in the list of boundaries
  */
  virtual HRESULT SetBoundaryContinuity(const enum CATGSMContinuity iContinuity,int iPos) = 0;

  /**
  * Gets the constraint element.
  *   @param oConstraint
  *      new constraint element
  */ 
  virtual HRESULT GetConstraint(CATISpecObject_var & oConstraint) = 0;

  /**
  * Sets the constraint elementt.
  *   @param iConstraint
  *      new constraint element
  */ 
  virtual HRESULT SetConstraint(const CATISpecObject_var iConstraint)  = 0;

  /**
  * Gets the list of constraint elements.
  *   @param CATLISTV oSpecObjectsList
  *      list of new constraint elements
  * ======== ONLY USE IN FSS ==============
  */ 
  virtual HRESULT GetConstraints(CATLISTV(CATISpecObject_var)& oSpecObjectsList)=0;

  /**
  * Append a constraint
  *   @param ihSpecObject
  *      the constraint to append
  * ======== ONLY USE IN FSS ==============
  */ 
  virtual HRESULT AppendConstraint(const CATISpecObject_var ihSpecObject)=0;

  /**
  * Remove a constaint
  *   @param i
  *      the position of the constraint to remove
  * ======== ONLY USE IN FSS ==============
  */ 
  virtual HRESULT RemoveConstraint(int i)=0;

  /**
  * Replace a constraint
  *   @param i
  *      the position of the constraint to replace
  *   @param ihSpecObject
  *      the new constraint 
  * ======== ONLY USE IN FSS ==============
  */ 
  virtual HRESULT ReplaceConstraint(int i, const CATISpecObject_var& ihSpecObject)=0;

  /**
  * Gets the Plane Only mode. 
  *   @param oPlaneOnly
  *      Fill type if planar boundaries
  */
  virtual HRESULT GetPlaneOnlyMode(CATBoolean & oPlaneOnly) = 0;

  /**
  * Sets the Plane Only mode. 
  *   @param PlaneOnly
  *      Fill type if planar boundaries
  */ 
  virtual HRESULT SetPlaneOnlyMode(CATBoolean PlaneOnly) = 0;

  /**
  * @deprecated CXR26 CATIGSMFill#SetAdvancedTolerantMode
  * Sets the tolerant fill Mode.
  *   @param iMode
  *     Tolerant Mode - TRUE/FALSE
  */
  virtual HRESULT SetTolerantMode(CATBoolean iMode) = 0;

  /**
  * @deprecated CXR26 CATIGSMFill#GetAdvancedTolerantMode
  * Gets the tolerant fill Mode.
  *   @param oMode
  *     Current status of Tolerant Mode TRUE/FALSE
  */
  virtual HRESULT GetTolerantMode(CATBoolean & oMode) = 0;

  /**
  * Sets the deviation value. This value is used only if tolerant mode is set to TRUE. The value
  * of this parameter should lie within resolution and 100*resolution.
  *   @param ihDeviation
  *     The deviation value
  */
  virtual HRESULT SetDeviation(const CATICkeParm_var & ihDeviation) = 0;

  /**
  * Gets the deviation value.
  *   @param ohDeviation
  *     The deviation value
  */
  virtual HRESULT GetDeviation(CATICkeParm_var & ohDeviation) = 0;
  /**
  * Gets all continuities set on the boundaries.
  *   @param CATListOfInt oContinuity
  *      list of continuites
  */
  virtual HRESULT GetAllBoundaryContinuites(CATListOfInt & oContinuity) = 0; 

  /**
  * Remove all constraints
  */
  virtual HRESULT RemoveAllConstraints() = 0;

  /**
  * Adds a wire on the 'Inner Boundary' of the Fill.
  * The wire is added on the specified Inner Boundary at the end of the list.
  *   @param iWire
  *      wire for inner boundary
  *   @param iBoundaryNo
  *      The inner boundary number
  *      If iBoundNo is not specified, the wire is added to the last location of 
  *      the last Inner Boundary.
  */
  virtual HRESULT AddWireOnInnerBoundary(CATISpecObject_var & iWire, int iBoundaryNo = -1) = 0;

  /**
  *  Inserts a wire after another wire at a given position on the 'Inner Boundary'.
  *   @param iWire
  *      wire to insert in the inner boundary
  *   @param iBoundNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of wires of an 'Inner Boundary'
  */ 
  virtual HRESULT InsertWireAfterPosOnInnnerBoundary(CATISpecObject_var & iWire, int iBoundaryNo, int iPos) = 0;

  /**
  *  Gets the number of Inner Boundaries.
  *   @param ioNbInnerBoundaries
  *      The total number of Inner Boundaries
  *      Each Inner Boundary will have inner wire/s which defines a closed contour.
  */
  virtual HRESULT GetNbInnerBoundaries(int & ioNbInnerBoundaries) = 0;

  /**
  *  Inserts a wire before another wire at a given position on the 'Inner Boundary'.
  *   @param iWire
  *      wire to insert in the inner boundary
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of wires of an 'Inner Boundary'
  */
  virtual HRESULT InsertWirBeforePosOnInnnerBoundary(CATISpecObject_var & iWire, int iBoundaryNo, int iPos) = 0;

  /**
  *  Gets the position of a wire in the list of wires belonging to an Inner Boundary.
  *   @param iWire
  *      wire in the Inner boundary      
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param oPos
  *      Position of the wire in the list of wires of an 'Inner Boundary'
  */
  virtual HRESULT GetWirePosOnInnerBoundary(CATISpecObject_var & iWire, int &iBoundaryNo, int & oPos) = 0;

  /**
  *  Gets the the wire in the list of wires belonging to an Inner Boundary at a position.
  *   @param oWire
  *      wire at iPos on the Inner boundary
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of wires of an 'Inner Boundary'
  */
  virtual HRESULT GetWireAtPosOnInnerBoundary(CATISpecObject_var & oWire, int &iBoundaryNo, int & iPos) = 0;

  /**
  * Removes the wire from an Inner Boundary at the given position.
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of wires of an 'Inner Boundary'
  */
  virtual HRESULT RemoveWireAtPositionOnInnerBoundary(int iBoundaryNo, int iPos) = 0;

  /**
  * Removes all wires from an Inner Boundary.
  *   @param iBoundaryNo
  *      The inner boundary number
  */
  virtual HRESULT RemoveInnerBoundary(int iBoundaryNo) = 0;

  /**
  * Replaces a wire in the list of wires of an Inner Boundary.
  *   @param iWire
  *      wire to replace
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of wires of an 'Inner Boundary'
  */
  virtual HRESULT ReplaceWireAtPosOnInnerBoundary(CATISpecObject_var & iWire, int iBoundaryNo, int iPos) = 0;

  /**
  * Gets the number of wires in an Inner Boundary.
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param oSize
  *      Size of the list of wires in an Inner Boundary
  */
  virtual HRESULT GetSizeOfInnerBoundary(int iBoundaryNo, int & oSize) = 0;

  /**
  * Gets all elements (wires/supports) in an Inner Boundary.
  *   @param CATLISTV oWires
  *      List of wires of the inner boundary
  *   @param CATLISTV oSupports
  *      List of supports of the inner boundary
  *   @param iBoundaryNo
  *      The inner boundary number
  */
  virtual HRESULT GetAllWiresOnInnerBoundary(CATLISTV(CATISpecObject_var) & oWires,
    CATLISTV(CATISpecObject_var) & oSupports, int iBoundaryNo) =0;

  /**
  * Adds a support to a wire of an Inner Boundary.
  * <br>The support is added at the end of the list.
  *   @param iWire
  *      Wire on which support is added
  *   @param iSupport
  *      Support
  *   @param iBoundaryNo
  *      The inner boundary number
  */
  virtual HRESULT AddSupportOnInnerWire(CATISpecObject_var & iWire, CATISpecObject_var & iSupport, int iBoundaryNo) = 0;

  /**
  * Gets the Support at a given position, of an inner boundary.
  *   @param oSupport 
  *      Support 
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of boundaries of an Inner Boundary
  */
  virtual HRESULT GetSupportAtPosOnInnerBoundary(CATISpecObject_var & oSupport, int iBoundaryNo, int iPos) = 0;

  /**
  * Removes the Support at the given position from an Inner Boundary.
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of boundaries of an Inner Boundary
  */
  virtual HRESULT RemoveSupportAtPosOnInnerBoundary(int iBoundaryNo, int iPos) = 0;

  /**
  * Replaces the Support at the given position from an Inner Boundary.
  *   @param iSupport 
  *      the support to replace
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of boundaries of an Inner Boundary
  */
  virtual HRESULT ReplaceSupportAtPosOnInnerBoundary(CATISpecObject_var & iSupport, int iBoundaryNo, int iPos) = 0;

  /**
  * Gets the continuity mode between the wire and the support from an Inner Boundary.
  *   @param oContinuity
  *      Continuity between the support and the fill
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of boundaries of an Inner Boundary
  */
  virtual HRESULT GetWireContOnInnerBoundary(enum CATGSMContinuity &iContinuity, int iBoundaryNo, int iPos) = 0;

  /**
  * Sets the continuity mode between the wire and the support from an Inner Boundary.
  *   @param iContinuity
  *      Continuity between the support and the fill
  *   @param iBoundaryNo
  *      The inner boundary number
  *   @param iPos
  *      Position of the wire in the list of boundaries of an Inner Boundary
  */
  virtual HRESULT SetWireContOnInnerBoundary(const enum CATGSMContinuity iContinuity, int iBoundaryNo, int iPos) = 0;

  /**
  * Adds an Inner Boundary to the Fill.
  * User can add wires to this Inner Boundary later on.
  */
  virtual HRESULT AddInnerBoundary() = 0;

  /**
  * Sets information about detection of canonical surfaces of the output surface.
  *   @param iDetection
  *     If canonical surfaces are detected or not;
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual HRESULT SetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection iDetection = CATGSMNoDetection) = 0;

  /**
  * Gets information about detection of canonical surfaces of the output surface.
  *   @param oDetection
  *     If canonical surfaces are detected or not;
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual HRESULT GetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection & oDetection) = 0;

  /** 
  * Sets the tolerant mode.
  *   @param iMode
  *      The tolerant mode taken into account during fill construction.
  */
  virtual HRESULT SetAdvancedTolerantMode(const CATGSMFillTolerantMode &iMode) = 0;

  /** 
  * Gets the tolerant mode.
  *   @param oMode
  *      The tolerant mode taken into account during fill construction.
  */
  virtual HRESULT GetAdvancedTolerantMode(CATGSMFillTolerantMode &oMode) = 0;

  /**
  * Sets the check trim mode.
  *   @param iCheckTrimMode
  *      Defines if a popup window will appear in case the fill construction required a trim.
  */
  virtual HRESULT SetCheckTrimMode(const CATBoolean & ibCheckTrimMode) = 0;

  /**
  * Gets the check trim mode.
  *   @param oCheckTrimMode
  *      Defines if a popup window will appear in case the fill construction required a trim.
  */
  virtual HRESULT GetCheckTrimMode(CATBoolean & obCheckTrimMode) = 0;

};
CATDeclareHandler (CATIGSMFill, CATBaseUnknown);
#endif // CATIGSMFill_H
