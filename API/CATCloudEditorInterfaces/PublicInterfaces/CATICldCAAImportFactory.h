//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2009
//==============================================================================================================
// File: CATICldCAAImportFactory.h
//==============================================================================================================
// 03-Jun-2009 - JLH - Creation
//==============================================================================================================

#ifndef CATICldCAAImportFactory_H
#define CATICldCAAImportFactory_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAAImportFactory ;
#else
extern "C" const IID IID_CATICldCAAImportFactory ;
#endif

class CATIPrtPart_var ;
class CATICldCAAImportManager_var ;

class ExportedByCATCloudEditorInterfaces CATICldCAAImportFactory: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Creates a CATICldCAAImportManager operator.
   * @param iPart
   * The MechanicalPart in which files will be imported as a CLDGeom feature thanks to the Import manager.<br>
   * This CLDGeom feature will be inserted under a GeometricalSet, a OrderedGeometricalSet or an HybridBody:<br>
   * <ul>
   * <li>If the current tool is a GeometricalSet, a OrderedGeometricalSet or an HybridBody, it inserts the feature in it.
   * <li>If not, it will search for the last GeometricalSet, OrderedGeometricalSet or HybridBody in the part to insert the feature in it.
   * <li>If there is no GeometricalSet, OrderedGeometricalSet or HybridBody, it creates a GeometricalSet to insert the feature in it.
   * </ul>
   */
  virtual CATICldCAAImportManager_var CreateImportManager (CATIPrtPart_var & iPart) = 0 ;
};

CATDeclareHandler (CATICldCAAImportFactory, CATBaseUnknown) ;

#endif
