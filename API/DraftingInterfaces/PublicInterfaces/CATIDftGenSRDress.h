// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenSRDress_H
#define CATIDftGenSRDress_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "IUnknown.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSRDress ;
#else
extern "C" const IID IID_CATIDftGenSRDress ;
#endif

class CATDftGen3DCurveWithProvenance;
//------------------------------------------------------------------

/**
 * Interface which describes a type of Symbolic Representation which allows to
 * dress generated geometry.
 * @see CATIDftGenSymbolicRep.h
 */
class ExportedByDraftingItfCPP CATIDftGenSRDress: public IUnknown
{
  public:

      /**
      * Adds a Geometry among those which will be used to dress 2D geometry.
      * CATDftGen3DCurveWithProvenance are computed in the order of addition.
      * @param iProv
      *     A CATDftGen3DCurveWithProvenance which contains a NULL curve, a 3D Geometry and valuated
      *     graphic attributes
      */
      virtual HRESULT AddProvGeomToDress(CATDftGen3DCurveWithProvenance * iProv) = 0;

      /**
      * Removes all the geometries to dress of the CATIDftGenSRDress object.
      */
      virtual HRESULT RemoveAllProvGeom() = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
