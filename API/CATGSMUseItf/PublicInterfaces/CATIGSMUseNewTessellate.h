/* -*-c++-*- */
#ifndef CATIGSMUseNewTessellate_H
#define CATIGSMUseNewTessellate_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CATGSMUseItfExportedBy.h"
//KnowledgeInterfaces
class CATICkeParm_var;
//
class CATIMmiMechanicalFeature_var;
#include "CATBaseUnknown.h"
#include "CATTesselateUseDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseNewTessellate;
#else
extern "C" const IID IID_CATIGSMUseNewTessellate;
#endif

/**
 * Tessellate feature.
 * <b>Role</b>: allows to create polyhedral topologies from exact topologies
 * @see CATIGSMUsePolyhedralFactory#CreateTessellate
 */
class ExportedByCATGSMUseItf CATIGSMUseNewTessellate : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  virtual HRESULT SetFeatureToTessellate(const CATIMmiMechanicalFeature_var & ispFeatureToTessellate) = 0;

  virtual HRESULT GetFeatureToTessellate(CATIMmiMechanicalFeature_var & ospFeatureToTessellate) const = 0;

  virtual HRESULT SetSag(const CATICkeParm_var & ispSag) = 0;

  virtual HRESULT GetSag(CATICkeParm_var & ospSag) const = 0;

  virtual HRESULT SetSagMode(const CATTesselateUseSagMode &iSagMode) = 0;

  virtual HRESULT GetSagMode(CATTesselateUseSagMode &oSagMode) const = 0;
  
};
CATDeclareHandler (CATIGSMUseNewTessellate, CATBaseUnknown);
#endif // CATIGSMUseNewTessellate_H
