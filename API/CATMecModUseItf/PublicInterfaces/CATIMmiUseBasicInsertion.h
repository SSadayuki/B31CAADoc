#ifndef CATIMmiUseBasicInsertion_h
#define CATIMmiUseBasicInsertion_h

// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATMecModUseItf.h"
#include "CATSysErrorDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseBasicInsertion;
#else
extern "C" const IID IID_CATIMmiUseBasicInsertion ;
#endif

class CATIMmiMechanicalFeature_var; 

/**
 * Interface to insert a Mechanical Feature into a Part or a Set.
 * <b>Role</b>:  It enables to insert a feature or a Set into a Set or a Part.
 * It is implemented on MechanicalFeature.
 * It does not deal with attributes or plug-ins.
 * For a Solid feature, it is mandatory to use "CATIMmiUseSolidInsertion" instead.
 * For a gsd feature (derived from GSMGeom) it is mandatory to use "CATIGSMProceduralView" instead.
 * This interface is designed for non-solid CAA features deriving from MechanicalElement , GeometricalElement3D , MechanicalSet 
 * as well as Geometrical Sets.
 * This interface does not make any checks regarding linearity rules or aggregation rules.
 */
class ExportedByCATMecModUseItf CATIMmiUseBasicInsertion  : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

 /**
 * Inserts a feature into a Set.
 * <br><b>Role:</b>This method is used to insert a feature or a Set into a Set. 
 * @param iDestination
 * The Set where the feature will be inserted in last position.
 * @return 
 * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
 */
  virtual HRESULT InsertInside( const CATIMmiMechanicalFeature_var&  iDestination ) =0 ;

 /**
 * Inserts a feature after another feature .
 * <br><b>Role:</b>This method is used to insert a feature (or Set) after another feature (or Set).
 * @param iDestination
 * The Set after which the feature will be inserted.
 * @return 
 * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
 */
  virtual HRESULT InsertAfter( const CATIMmiMechanicalFeature_var&  iDestination ) =0 ;
};

CATDeclareHandler(CATIMmiUseBasicInsertion,CATBaseUnknown);

#endif
