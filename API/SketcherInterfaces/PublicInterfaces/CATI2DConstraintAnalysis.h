/* -*-c++-*- */
#ifndef CATI2DConstraintAnalysis_h
#define CATI2DConstraintAnalysis_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
#include "CAT2DCstType.h"
#include "CAT2DImportMode.h"
class CATListValCATISpecObject_var;
class CATListValCATI2DWFGeometry_var;
class CATI2DWFGeometry;
class CATRawCollint;
class CATI2DConstraint;
class CATListValCATBaseUnknown_var;
class CATBody;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DConstraintAnalysis;
#else
extern "C" const IID IID_CATI2DConstraintAnalysis;
#endif


class ExportedByCATSketcherInterfaces CATI2DConstraintAnalysis : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Analyse given geometric elements (1, 2 or 3) and returns a list of POSSIBLE
   * constraint types on these elements.
   * The returned types are defined into CAT2DCstType.h.
   *
   * Input:
   *  iGeom1      : Geometric Element
   *  iGeom2      : Geometric Element (or NULL)
   *  iGeom3      : Geometric Element (or NULL if iGeom2 is NULL)
   *
   * Output:
   *  oCstTypes   : List of possible 2D constraint types on (iGeom1,iGeom2,iGeom3)
   *
   */
  virtual HRESULT Analyse(const CATI2DWFGeometry* iGeom1,
                          const CATI2DWFGeometry* iGeom2,
                          const CATI2DWFGeometry* iGeom3,
                          CATRawCollint& oCstTypes) = 0;

  /**
   * Analyse given geometric elements (1, 2 or 3) and returns a list of EXISTING
   * constraint types on these elements.
   * The returned types are defined into CAT2DCstType.h.
   *
   * Input:
   *  iGeom1      : Geometric Element
   *  iGeom2      : Geometric Element (or NULL)
   *  iGeom3      : Geometric Element (or NULL if iGeom2 is NULL)
   *
   * Output:
   *  oCstTypes   : List of 2D constraint types of existing constraints on (iGeom1,iGeom2,iGeom3)
   *
   */
  virtual HRESULT Find(const CATI2DWFGeometry* iGeom1,
                       const CATI2DWFGeometry* iGeom2,
                       const CATI2DWFGeometry* iGeom3,
                       CATRawCollint& oCstTypes) = 0;

  /**
   * Analyse given geometric elements (1, 2 or 3) and returns a list of EXISTING
   * constraint on these elements.
   *
   * Input:
   *  iGeom1      : Geometric Element
   *  iGeom2      : Geometric Element (or NULL)
   *  iGeom3      : Geometric Element (or NULL if iGeom2 is NULL)
   *
   * Output:
   *  oCsts       : List of existing constraints on (iGeom1,iGeom2,iGeom3)
   *
   */
  virtual HRESULT Find(const CATI2DWFGeometry* iGeom1,
                       const CATI2DWFGeometry* iGeom2,
                       const CATI2DWFGeometry* iGeom3,
                       CATListValCATISpecObject_var& oCsts) = 0;

  /**
   * Analyse given geometric elements and returns
   * the list of EXISTING constraints on these elements only
   * and the list of EXISTING constraints pointing on one of these elements.
   *
   * Input:
   *  iGeoms        : List of Geometric Elements.
   *
   * Output:
   *  oInternalCsts : List of existing constraints on these elements only.
   *  oExternalCsts : List of existing constraints pointing on one of these elements.
   *
   */
  virtual HRESULT Find(const CATListValCATI2DWFGeometry_var& iGeoms,
		       CATListValCATISpecObject_var& oInternalCsts,
		       CATListValCATISpecObject_var& oExternalCsts) = 0;

  /**
   * Verify if a constraint creation is compatible with elements types.
   *
   * Input:
   *  iGeom1        : Geometric Element
   *  iGeom2        : Geometric Element (or NULL)
   *  iGeom3        : Geometric Element (or NULL if iGeom2 is NULL)
   *  iCstType      : 2D constraint type
   *
   * Output:
   *  oCanBeCreated : Returns != 0 if the constraint can be created, 0 otherwise
   *  oExistingCst  : Returns the existing constraint when oCanBeCreated == 0 
   *
   */
  virtual HRESULT CheckDefinition(CATBaseUnknown *iGeom1,
                                  CATBaseUnknown *iGeom2,
                                  CATBaseUnknown *iGeom3,
                                  const CAT2DCstType iCstType,
                                  int *oCanBeCreated,
                                  CATI2DConstraint **oExistingCst=NULL) = 0;

  /**
   * Verify if a geometry can be imported.
   *
   * Input:
   *  iExternalGeom     : Geometric element to import
   *  iForConstraint    : address pointing a value <> 0 only to be constrained
   *  iImportMode       : mode of import see CAT2Dimport
   *  iNearExternalGeom : An optional external geometric element to keep the nearest solution
   *  iSel2DPt          : The optional 2D point coordinates to keep only the nearest solution of a canonical surface import.
   * Output:
   *  oNbSolutions   : Number of solutions 
   *  oResult : List Of Geometrical result
   *  oBody   : Body of result
   * Returns S_OK if the solution is associative, S_FALSE if not
   */
  virtual HRESULT CheckImport(CATBaseUnknown *iExternalGeom, 
                              int *oNbSolutions=NULL, 
                              int *iForConstraint=NULL,
                              CAT2DImportMode *iImportMode=NULL,
                              CATListValCATBaseUnknown_var *oResult=NULL,
                              CATBody** oBody =NULL,
                              CATBaseUnknown *iNearGeom=NULL,
                              const double *iSel2DPt=NULL) = 0;
};

CATDeclareHandler(CATI2DConstraintAnalysis,CATBaseUnknown);

#endif
