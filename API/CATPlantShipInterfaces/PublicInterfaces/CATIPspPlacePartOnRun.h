#ifndef CATIPspPlacePartOnRun_H
#define CATIPspPlacePartOnRun_H

//	COPYRIGHT DASSAULT SYSTEMES 2007
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
// System
#include "IUnknown.h"
#include "CATListOfDouble.h"
#include "CATIPspPlacePart.h"

class CATIUnknownList;
class CATUnicodeString;
class CATMathDirection;
class CATMathPoint;

extern "C" const IID IID_CATIPspPlacePartOnRun ;

/**
 * Interface to place physical parts on runs.
 * <b>Role</b>: Equipment and Systems applications are used to layout 3D AEC designs. 
 * Fluid flow routes are defined using runs. Further detail is provided by adding
 * parts to runs. This interface is used to perform the placement of parts on runs.
 */

class CATIPspPlacePartOnRun : public CATIPspPlacePart
{
  public:  
  
  /**
  * Fetches the catalog description that matches the input part number.
  * <br><b>Role</b>: The part placement routines derive a part instance from an input reference.
  * This method can be used to provide that reference.
  * It gets the catalog description for a part with the given catalog part number 
  * from the part catalog defined in the Equipment and Systems environment.
  *   @param iuStandard
  *      Standard for application attribute values.
  *   @param iuSpecName
  *      Name of spec catalog. Null string uses full part catalog.
  *   @param iuPartType
  *     The part type under which to search for the part.
  *   @param iuPartNumber
  *     The catalog part number of the desired part.
  *   @param ipiPhysicalParentProduct
  *     In design model, the parent of the part that will be placed.
  *     Having this object helps with efficiency. It may be set to <tt>NULL</tt> and 
  *     the method will still function correctly.
  *   @param opiReferencePart
  *     The reference part.
  *   @return
  *       <ul><li>S_OK catalog descruption successfully retrieved.</li> 
  *       <li>E_FAIL otherwise.</li>
  */
    virtual HRESULT GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, 
                                                const CATUnicodeString &iuSpecName, 
                                                const CATUnicodeString &iuPartType, 
                                                const CATUnicodeString &iuPartNumber, 
                                                const IUnknown *ipiPhysicalParentProduct, 
                                                IUnknown *&opiReferencePart) = 0;

 /**
  * Fetches the catalog part that matches the input part number.
  * <br><b>Role</b>: The part placement routines derive a part instance from an input reference.
  * This method can be used to provide that reference.
  * It gets the catalog part with the given catalog part number 
  * from the part catalog defined in the Equipment and Systems environment.
  *   @param iuStandard [in]
  *      Standard for application attribute values.
  *   @param iuSpecName [in]
  *      Name of spec catalog. Null string uses full part catalog.
  *   @param iuPartType [in]
  *     The part type under which to search for the part.
  *     A null string will search the entire catalog.
  *   @param iuPartNumber [in]
  *     The catalog part number of the desired part.
  *   @param ipiPhysicalParentProduct [in]
  *     In design model, the parent of the part that will be placed.
  *     Having this object helps with efficiency. It may be set to NULL and 
  *     the method will still function correctly.
  *   @param opiReferencePart [out CATBaseUnknown]
  *     The reference part.
  *   @param ouCatalogPartName [out]
  *     The catalog part name of the reference part.
  *   @return HRESULT
  *     <ul>
  *       <li>S_OK: Reference part successfully retrieved.</li>
  *       <li>E_FAIL: Otherwise.</li>
  *     </ul>
  */
    virtual HRESULT GetReferencePartFromCatalog(const CATUnicodeString &iuStandard, 
                                                const CATUnicodeString &iuSpecName, 
                                                const CATUnicodeString &iuPartType, 
                                                const CATUnicodeString &iuPartNumber, 
                                                const IUnknown *ipiPhysicalParentProduct, 
                                                IUnknown *&opiReferencePart, 
                                                CATUnicodeString &ouCatalogPartName) = 0;

 /**
  * Places a part on a segment of a run.
  * <br><b>Role</b>: A part instance is derived from the given reference and placed on the given run segment.
  * The Part Placement engine will search for neighgoring parts on the run (or any connected runs)
  * and adjust the placement location and connect as needed. 
  * Part is placed non-spec.
  *   @param iuStandard
  *      The standard for application attribute values.
  *   @param iuFunctionType
  *      The type of function (e.g. block valve, branch).
  *   @param ipiReferencePart
  *      The reference part from which to derive the instance part.
  *   @param ipiRunSegment
  *      The run segment on which the part will be placed.
  *   @param ipiLogicalLine
  *      The logical line (e.g. piping line) which contains the instance part.
  *      If <tt>NULL</tt> the part is put in the logical line of the run.
  *   @param iuPlacedPartID
  *      The name of the placed part in the design model. 
  *      <tt>NULL</tt> uses the standard ID generated by the part placement engine.
  *   @param iPosition
  *      The position of the part on the segment.
  *      The list has three values which represent the x, y and z values of a position in space.
  *      Value is relative to the parent of the run and is in millimeters.
  *   @param opiInstancePart
  *      The placed instance part.
  *   @return
  *       <ul><li>S_OK part successfully placed.</li> 
  *       <li>E_FAIL otherwise.</li>
  */

    virtual HRESULT PlacePartOnRunSegment (const CATUnicodeString &iuStandard, 
                                           const CATUnicodeString &iuFunctionType, 
                                           const IUnknown *ipiReferencePart, 
                                           const IUnknown *ipiRunSegment, 
                                           const IUnknown *ipiLogicalLine, 
                                           const CATUnicodeString &iuPlacedPartID, 
                                           const CATMathPoint &iPosition, 
                                           IUnknown *&opiInstancePart) = 0;

  /**
  * Places a non-string part on a node of a run.
  * <br><b>Role</b>: A part instance is derived from the given reference and placed on the given run node.
  * The Part Placement engine will search for neighgoring parts on the run (or any connected runs)
  * and connect as needed. 
  * Part is placed non-spec.
  *   @param iuStandard
  *      The standard for application attribute values.
  *   @param iuFunctionType
  *      The type of function (e.g. block valve, branch).
  *   @param ipiReferencePart
  *      The reference part from which to derive the instance part.
  *   @param ipiRunNode
  *      The run node on which the part will be placed.
  *   @param ipiLogicalLine
  *      The logical line (e.g. piping line) which contains the instance part.
  *      If <tt>NULL</tt> the part is put in the logical line of the run.
  *   @param iuPlacedPartID
  *      The name of the placed part in the design model. 
  *      Null string uses the standard ID generated by the part placement engine.
  *   @param opiInstancePart
  *      The placed instance part.
  *   @return
  *       <ul><li>S_OK reference .</li> 
  *       <li>E_FAIL otherwise.</li>
  */

    virtual HRESULT PlacePartOnRunNode (const CATUnicodeString &iuStandard, 
                                        const CATUnicodeString &iuFunctionType, 
                                        const IUnknown *ipiReferencePart, 
                                        const IUnknown *ipiRunNode, 
                                        const IUnknown *ipiLogicalLine, 
                                        const CATUnicodeString &iuPlacedPartID, 
                                        IUnknown *&opiInstancePart) = 0;

  /**
  * Places a non-string part on a part connector.
  * <br><b>Role</b>: A part instance is derived from the given reference and placed on the given part connector.
  * The Part Placement engine will search for neighgoring parts on the run (or any connected runs)
  * and connect as needed. 
  * Part is placed non-spec.
  *   @param iuStandard
  *      The standard for application attribute values.
  *   @param iuFunctionType
  *      The type of function (e.g. block valve, branch).
  *   @param ipiReferencePart
  *      The reference part from which to derive the instance part.
  *   @param ipiPartConnector
  *      The run node on which the part will be placed.
  *   @param ipiLogicalLine
  *      The logical line (e.g. piping line) which contains the instance part.
  *      If <tt>NULL</tt> the part is put in the logical line of the run.
  *   @param iuPlacedPartID
  *      The name of the placed part in the design model. 
  *      Null string uses the standard ID generated by the part placement engine.
  *   @param opiInstancePart
  *      The placed instance part.
  *   @param iReconnectRun
  *      0 If a run is connected to ipiPartConnector, place the part on the connector. Do not alter the run connection.
  *      1 Position the part at the connector as a free space part. If a run is connected to ipiPartConnector, constrain
  *        the two parts and reconnect the run to the other connector of the newly placed part. If a run is not connected
  *        to ipiPartConnector, break and trim the run around the part and connect the two parts.
  *   @return
  *       <ul><li>S_OK part successfully placed.</li> 
  *       <li>E_FAIL otherwise.</li>
  */

    virtual HRESULT PlacePartOnPartConnector (const CATUnicodeString &iuStandard, 
                                              const CATUnicodeString &iuFunctionType, 
                                              const IUnknown *ipiReferencePart, 
                                              const IUnknown *ipiPartConnector, 
                                              const IUnknown *ipiLogicalLine, 
                                              const CATUnicodeString &iuPlacedPartID, 
                                              IUnknown *&opiInstancePart,
                                              int iReconnectRun = 0 ) = 0;

  /**
  * Flip an instance part which has been placed using the Part Placement Engine.
  * <br><b>Role</b>: When a part is placed on a part connector or on a run there is
  * often more than one possible way to connect the part being placed. When there 
  * is more than one such connection geometry the PP engine attempts to pick the 
  * best one. This method allows the part to "flip" between the possible connection
  * geometries when more than one exists.
  * Part is placed non-spec.
  *   @param ipiPlacedInstancePart
  *      The placed instance part to be flipped.
  *   @return
  *       <ul><li>S_OK part successfully flipped.</li> 
  *       <li>E_FAIL otherwise.</li>
  */

    virtual HRESULT FlipPlacedPart (const IUnknown *ipiPlacedInstancePart) = 0;

 /**
  * Set catalog part name on an instance part.
  * <br><b>Role</b>: During interactive part placement the catalog part name
  * is stored with the instance part. The place methods in this interface
  * do not set it because they were designed to be able to use any reference
  * part, whether or not it came from a catalog. Use the override of GetReferencePartFromCatalog
  * that returns catalog part name and then use this method to set the returned value
  * after the part is placed.
  *   @param ipiPlacedInstancePart [in]
  *      The placed instance part on which to set the catalog part name.
  *   @param iuCatalogPartName [in]
  *     The catalog part name to set on the instance part.
  *   @return HRESULT
  *     <ul>
  *       <li>S_OK: part successfully flipped.</li>
  *       <li>E_FAIL: Otherwise.</li>
  *     </ul>
  */

    virtual HRESULT SetCatalogPartName (const IUnknown *ipiPlacedInstancePart, 
                                        const CATUnicodeString &iuCatalogPartName) = 0;

 /**
  * Breakes the Run at the placed part ipiPartToSplitRun.
  * <br><b>Role</b>:
  *   Breakes the Run at the placed part.
  *   @param ipiPartToSplitRun [in]
  *      The placed instance part where the run (underneath) to be splitted.
  *   @param opiRun1 [out]
  *      The resulting splitted first run.
  *   @param opiRun2 [out]
  *      The resulting splitted second run.
  *   @return HRESULT
  *     <ul>
  *       <li>S_OK: Run successfully splitted.</li>
  *       <li>E_FAIL: Otherwise.</li>
  *     </ul>
  */
    virtual HRESULT BreakAndTrimRuns ( const IUnknown *ipiPartToSplitRun, 
                                       IUnknown *&opiRun1,
                                       IUnknown *&opiRun2)  = 0;

 /**
  * Connect Run ipiRun to the part ipiPart
  * <br><b>Role</b>:
  *   Connect Run to the part.
  *   @param ipiRun [in]
  *      Run to connect.
  *   @param ipiPart [in]
  *      Part to connect. 
  *   @return HRESULT
  *     <ul>
  *       <li>S_OK: Run successfully connected to the part.</li>
  *       <li>E_FAIL: Otherwise.</li>
  *     </ul>
  */
    virtual HRESULT ConnectRunToPart ( const IUnknown *ipiRun,
                                       IUnknown *ipiPart)  = 0;
 
 /**
  * Places a string (bendable or stretchable) part on a run.
  * <br><b>Role</b>: A part instance is derived from the given reference and placed on the run.
  * Multiple string parts will be placed if parts are already placed on the run. The Part  
  * Placement engine will:
  *   - connect the string parts to its neighboring parts on the run as needed.
  *   - generate the string part IDs.
  *   - add the string parts to the same logical line as the run.
  * No auto parts will be placed between the string part and its neighboring part.
  * The ID of the string part is generated by the part placement engine.
  *   @param iuStandard
  *      The standard for application attribute values.
  *   @param iuFunctionType
  *      The type of function.
  *   @param iuPartNumber
  *     The catalog part number of the desired part.
  *   @param ipiReferencePart
  *      The reference part from which to derive the instance part.
  *   @param ipiRun
  *      The run on which the part will be placed.
  *   @param iopiInstanceParts [out CATBaseUnknown]
  *      The placed instance parts
  *   @param iSpecFromLocation
  *      1: Get specification from run. 0: String is placed non-spec.
  *      Spec must be provided for HVAC
  *   @return
  *       <ul><li>S_OK reference placed</li> 
  *       <li>E_FAIL otherwise.</li>
  */

    virtual HRESULT PlaceStringsOnRun (const CATUnicodeString &iuStandard, 
                                      const CATUnicodeString &iuFunctionType, 
                                      const CATUnicodeString &iuPartNumber,
                                      const IUnknown *ipiReferencePart, 
                                      const IUnknown *ipiRun, 
                                      CATIUnknownList *&iopiInstanceParts,
                                      int iSpecFromLocation=1) = 0;

};
#endif
