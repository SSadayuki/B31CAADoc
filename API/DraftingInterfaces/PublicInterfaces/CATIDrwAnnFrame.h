#ifndef CATIDrwAnnFrame_H
#define CATIDrwAnnFrame_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT DASSAULT SYSTEMES 1999

#include "CATBaseUnknown.h"
#include "CATDrwUtility.h"
#include "CATDrwFrameData.h"
#include "CATUnicodeString.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwAnnFrame ;
#else
extern "C" const IID IID_CATIDrwAnnFrame ;
#endif

class ExportedByDraftingItfCPP CATIDrwAnnFrame : public CATBaseUnknown
{
  CATDeclareInterface;
  
  
public:
  /*
  * @deprecated V5R28
  */
  virtual int  GetFrameID () = 0;
  /*
  * @deprecated V5R28
  */
  virtual void SetFrameID (int FrameID) = 0;
  
  /*
  * @deprecated V5R28
  */
  virtual HRESULT GetFrameType(CATDrwFrameType & oType)=0;
  /*
  * @deprecated V5R28
  */
  virtual HRESULT SetFrameType(CATDrwFrameType iType)=0;

  /*
  * @nodoc Not yet implemented. Do not use
  */
  virtual HRESULT GetFrameName(CATUnicodeString & oNameFrame)=0;

  /*
  * @nodoc Not yet implemented. Do not use
  */
  virtual HRESULT SetFrameName(const CATUnicodeString &iNameFrame)=0;

  /*
  * @deprecated V5R28
  * Fill or unfill frame 
  * @param iFill [in]
  */
  virtual HRESULT SetFrameFill(const int &iFill)=0;

  /*
  * @deprecated V5R28
  * Fill or unfill frame 
  * @param oFill [out]
  */
  virtual HRESULT GetFrameFill(int &oFill)=0;

  /*
  * @deprecated V5R28
  * SetFrameMargin 
  * @param iMargin1 [in]
  * @param iMargin2 [in]
  */
  virtual HRESULT SetFrameMargin(const double &iMargin1, const double &iMargin2)=0;

  /*
  * @deprecated V5R28
  * GetFrameMargin 
  * @param oMargin1 [out]
  * @param oMargin2 [out]
  */
  virtual HRESULT GetFrameMargin(double &oMargin1, double &oMargin2)=0;

  /**
  * @deprecated V5R28
  * Get the dimensions of fix size frame.
  * @param
  * <dl>
  * <dt><tt>oData </tt> : frame data (height, length...)
  * @see CATDrwFrameData
  * </dl>
  * @return
  * <dl>
  * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
  * <dt><tt>S_UNDEFINED   </tt> <dd> if the frame is not a fixed size frame.
  * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
  * </dl>
  */
  virtual HRESULT GetFixFrameData(CATDrwFrameData &oData) = 0;
};
CATDeclareHandler(CATIDrwAnnFrame, CATBaseUnknown);
#endif
