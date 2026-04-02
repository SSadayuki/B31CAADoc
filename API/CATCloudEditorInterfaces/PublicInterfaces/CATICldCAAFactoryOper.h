// COPYRIGHT Dassault Systemes 2008
//===================================================================
//
// CATICldCAAFactoryOper.h
// Define the CATICldCAAFactoryOper interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
#ifndef CATICldCAAFactoryOper_H
#define CATICldCAAFactoryOper_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAAFactoryOper;
#else
extern "C" const IID IID_CATICldCAAFactoryOper ;
#endif

class CATICldCAATessellateOper_var ;
class CATICldCAABooleanOper_var ;
class CATGeoFactory ;
class CATTopData ;

class ExportedByCATCloudEditorInterfaces CATICldCAAFactoryOper: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Creates a CATICldCAATessellateOper operator.
   * @param iGeoFactory
   * The pointer to the factory of the geometry.
   * @param iTopData
   * The pointer to the data defining the software configuration.
   */
  virtual CATICldCAATessellateOper_var CreateTessellateOper (CATGeoFactory * iGeoFactory, CATTopData * iTopData) = 0 ;

  /**
   * Creates a CATICldCAABooleanOper operator.
   * @param iGeoFactory
   * The pointer to the factory of the geometry.
   * @param iTopData
   * The pointer to the data defining the software configuration.
   */
  virtual CATICldCAABooleanOper_var CreateBooleanOper (CATGeoFactory * iGeoFactory, CATTopData * iTopData) = 0 ;

};

CATDeclareHandler (CATICldCAAFactoryOper, CATBaseUnknown) ;

#endif
