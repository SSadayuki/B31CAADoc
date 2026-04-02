/* -*-c++-*- */
#ifndef CATI2DOperator_h
#define CATI2DOperator_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DOperatorType.h"
#include "CATBoolean.h"

class CATListValCATBaseUnknown_var;
class CATISpecObject;

#include "CATSketcherInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DOperator;
#else
extern "C" const IID IID_CATI2DOperator;
#endif

class ExportedByCATSketcherInterfaces CATI2DOperator : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  virtual HRESULT GetInParameters(CATListValCATBaseUnknown_var& oList) = 0;

  virtual HRESULT GetOutParameters(CATListValCATBaseUnknown_var& oList) = 0;

  virtual HRESULT Isolate(CATListValCATBaseUnknown_var *oList=NULL) = 0;

  virtual HRESULT GetNear(CATISpecObject **oNear) = 0;

  virtual HRESULT SetNear(CATBaseUnknown *iNear) = 0;
  
  virtual CAT2DOperatorType GetOperatorType() = 0;
  
  virtual HRESULT GetCanonicity(CATBoolean& oCanonicity) = 0;

  virtual HRESULT SetCanonicity(CATBoolean iCanonicity = TRUE) = 0;

/**
 * @nodoc
 */
  virtual HRESULT GetDetectCanonicity(CATBoolean& oDetectCanonicity) = 0;

/**
 * @nodoc
 */
  virtual HRESULT SetDetectCanonicity(CATBoolean iDetectCanonicity = TRUE) = 0;

/**
 * @nodoc
 */
  virtual HRESULT GetAllowCCV(CATBoolean& oAllowCCV) = 0;

/**
 * @nodoc
 */
  virtual HRESULT SetAllowCCV(CATBoolean iAllowCCV = TRUE) = 0;

/**
 * @nodoc
 */
  virtual HRESULT GetForceCCV(CATBoolean& oForceCCV) = 0;

/**
 * @nodoc
 */
  virtual HRESULT SetForceCCV(CATBoolean iForceCCV = TRUE) = 0;

/**
 * @nodoc
 */
  virtual HRESULT GetExtrapolPlanarFace(CATBoolean& oExtrapolPlanarFace) = 0;

/**
 * @nodoc
 */
  virtual HRESULT SetExtrapolPlanarFace(CATBoolean iExtrapolPlanarFace = TRUE) = 0;

/**
 * @nodoc
 */
  virtual HRESULT GetExtrapolationMode(int& oExtrapolationMode) = 0;

/**
 * @nodoc
 */
  virtual HRESULT SetExtrapolationMode(int iExtrapolationMode) = 0;
};

CATDeclareHandler(CATI2DOperator,CATBaseUnknown);

#endif
