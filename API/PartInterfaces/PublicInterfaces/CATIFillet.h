/* -*-c++-*- */
#ifndef CATIFillet_H
#define CATIFillet_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */



#include <PartItf.h>
#include <CATIShape.h>
#include <CATPrtEnum.h>
#include <CATListOfInt.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIFillet;
#else
extern "C" const IID IID_CATIFillet;
#endif


/**
 * Interface to represent the fillet shape.
 * <b>Role</b>: base interface for each kind of fillets : 
 * edge fillets, face fillet, tritangent fillet.
 */
class ExportedByPartItf CATIFillet : public CATIShape
{
  CATDeclareInterface;

  public:

  /** @nodoc */
  virtual void ModifyBoundariesRelimitation(CATPrtBoundariesRelimitationMode iBoundariesRelimitation) = 0;

  /** @nodoc */
  virtual CATPrtBoundariesRelimitationMode GetBoundariesRelimitation() const= 0;

  /** @nodoc */  
  virtual void ModifyTransitionalCorner(CATPrtTransitionalCornerMode iTransitionalCorner) = 0;
  
  /** @nodoc */
  virtual CATPrtTransitionalCornerMode GetTransitionalCorner() const= 0;

  /** @nodoc */  
  virtual HRESULT ModifyTrimSupport(CATPrtTrimSupportMode iTrimSupport) = 0;
  
  /** @nodoc */
  virtual HRESULT GetTrimSupport(CATPrtTrimSupportMode& oTrimSupport) const= 0;

  /** @nodoc */
  virtual CATLISTV(CATISpecObject_var)* GetPartingList() = 0;

  /** @nodoc */
  virtual void AddPartingElement(CATISpecObject_var hParting) = 0;
  
  /** @nodoc */
  virtual void RemovePartingElement(int index) = 0;

  /** @nodoc */
  virtual CATRawCollint * GetOrientationList() = 0;

  /** @nodoc */
  virtual void AddOrientationParting(int orientation) = 0;

  /** @nodoc */
  virtual void RemoveOrientationParting(int index) = 0;

  /** @nodoc */
  virtual void ModifyOrientationParting(int index, int orientation) = 0;

  /** @nodoc */
  virtual HRESULT ModifyWorkshop(int iWorkshop) = 0;

    /** @nodoc */
  virtual HRESULT GetWorkshop(int & oWorkshop) = 0;

};

CATDeclareHandler (CATIFillet, CATIShape); 

#endif // CATIFillet_H
