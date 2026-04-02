#ifndef CATIGSMFactoryGeo_Temp_H
#define CATIGSMFactoryGeo_Temp_H

// COPYRIGHT DASSAULT SYSTEMES 2022

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSoiInterfacesExportedBy.h"
#include "CATIGSMAutomaticFillGeo.h"

class CATListPtrCATBody;

class CATGeoFactory;
class CATTopData;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSoiInterfaces IID IID_CATIGSMFactoryGeo_Temp;
#else
extern "C" const IID IID_CATIGSMFactoryGeo_Temp;
#endif



/**
* Class defining the topological operator that fills  a space defined by a set of wires.
* The use of this factory will always invoke the sorting of input wire list algorithm
* <br> The wires must define a closed area and be connected.
* Continuity criteria can be precised: G0, G1 if the supporting surfaces of the wire
* are given, G0 otherwise. The supporting surfaces must be coherent to allow the operator to
* compute a G1 continuity.
* If the given continuity constraints are not compatible, the fill result could not
* not satisfy the continuity contraints.
* if the given continuity constraints define a too scattered set of normals, the shape of
* fill result could not be correct.It is also possible to have no result.
*
* <br>The CATIGSMFactoryGeoFill operator creates the resulting filling skin body
* separately from the inputs: the wires of the input bodies are not used to define the topology
* of the resulting fill body.
*<ul>
* <li>A CATIGSMFactoryGeoFill operator is created with the <tt>CreateTopologicalAutomaticFill</tt> global function.
* It must be directly deleted with the usual C++ <tt>delete</tt> operator. It is is not streamable.
*<li>Options can be precised with the <tt>SetXxx</tt> methods, before
* asking for the computation with the <tt>Run</tt> method
*<li>The result is accessed with the <tt>GetResult</tt> method. If you do not want
* to keep the resulting body, use the @href CATICGMContainer#Remove method to remove it from the
* geometric factory.
* <li>The journal corresponding to the fill operation is not yet implemented.
*</ul>
*/
//-----------------------------------------------------------------------------


class ExportedByCATSoiInterfaces CATIGSMFactoryGeo_Temp : public CATBaseUnknown
{

  CATDeclareInterface;


public:



  // =============================================================================================
  // POWER FILL - Topological Operator Creation 
  // =============================================================================================
   // ============================================================
   // Create Automatic Gill 
   // ============================================================

   /**
   * Creates a topological operator that fills a closed area defined by a set of wires.
   * @param iFactory
   * The pointer to the factory of the geometry.
   * @param iListOfWires
   * The list of pointers to the wire bodies, each containing only one wire.
   * The set of wires must defined a closed area and connected.
   * @param iFillType
   * Type of the fill to compute. iFillType can have three values.
   * CATTopologicalFill::analytic:
   * The edges of the domain to fill are isoparametric  curves of the final surfaces. The number
   * of generated faces is depending on the number of wires.
   * Use it for simple domain to fill, as rectangular area.
   * CATTopologicalFill::power
   * The area is filled with a single surface. This allows you to manage wires which describe
   * a complex topology.
   * CATTopologicalFill::autofill_level1
   * Automatically determines the most suitable method according to the input topology.
   * @param iJournal
   * The pointer to the journal corresponding to the operation. If <tt>NULL</tt>, the journal is not filled in.
   * @return
   * The pointer to the created operator. To <tt>delete</tt> afer use.
   * @see CATTopologicalFill
   */

  virtual CATIGSMAutomaticFillGeo* CATGSMCreateTopologicalAutomaticFillAdvanced(CATGeoFactory* iFactory,
    CATTopData* iData,
    CATListPtrCATBody const& iListOfWires,
    const  CATIGSMAutomaticFillGeo::CATGSMAutomaticFillGeoType  iFillType = CATIGSMAutomaticFillGeo::Analytic) = 0;



  /**
   * Creates a topological operator that fills a closed area defined by a set of wires.
   * @param iFactory
   * The pointer to the factory of the geometry.
   * @param iListOfWires
   * The list of pointers to the wire bodies, each containing only one wire.
   * The set of wires must defined a closed area and be connected.
   * @param iListOfSupports
   * The list of pointers to the supporting bodies of the wires, thus allowing you to define G1 continuity
   * criteria.
   * @param iFillType
   * Type of the fill to compute. iFillType can have three values.
   * CATTopologicalFill::analytic:
   * The edges of the domain to fill are isoparametric  curves of the final surfaces. The number
   * of generated faces is depending on the number of wires.
   * Use it for simple domain to fill, as rectangular area.
   * CATTopologicalFill::power
   * The area is filled with a single surface. This allows you to manage wires which describe
   * a complex topology.
   * CATTopologicalFill::autofill_level1
   * Automatically determines the most suitable method according to the input topology.
   * @param iJournal
   * The pointer to the journal corresponding to the operation. If <tt>NULL</tt>, the journal is not filled in.
   * @return
   * The pointer to the created operator. To <tt>delete</tt> afer use.
   */


  virtual CATIGSMAutomaticFillGeo* CATGSMCreateTopologicalAutomaticFillAdvanced(CATGeoFactory* iFactory,
    CATTopData* iData,
    CATListPtrCATBody const& iListOfWires,
    CATListPtrCATBody const& iListOfSupports,
    const  CATIGSMAutomaticFillGeo::CATGSMAutomaticFillGeoType  iFillType = CATIGSMAutomaticFillGeo::Analytic) = 0;


};

CATDeclareHandler(CATIGSMFactoryGeo_Temp, CATBaseUnknown);
#endif



