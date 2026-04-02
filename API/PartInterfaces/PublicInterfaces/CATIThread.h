/* -*-c++-*- */
#ifndef CATIThread_H
#define CATIThread_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include <PartItf.h>
#include <CATIShape.h>

class CATISpecObject_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIThread;
#else
extern "C" const IID IID_CATIThread;
#endif

/**
* Class to manage the thread feature.
* <b>Role</b>: CATIThread inherits from CATIShape. 
* Methods defined below are specifics to the thread feature. They manage
* Diameter ,Depth , Pitch , Thread direction ,limit and support face 
* feature.
* @see CATIShape
*/
class ExportedByPartItf CATIThread : public CATIShape
{
  CATDeclareInterface;

public: 

  /**
  * Retrieves parameter linked to the thread/tap diameter.
  * @param oDiameterParm
  *  The parameter linked to thread/tap diameter. 
  */
  virtual void GetDiameter    (CATICkeParm_var & oDiameterParm)                   = 0;

  /**
  * Retrieves the thread/tap diameter.
  * @param oDiameter
  *   The thread/tap diameter. 
  */
  virtual void GetDiameter    (double & oDiameter)                                = 0;

  /**
  * Sets the thread/tap diameter.
  * @param iDiameter
  *   The thread/tap diameter. 
  */
  virtual void SetDiameter    (const double iDiameter)                           = 0;

  /**
  * Retrieves parameter linked to the thread/tap depth.
  * @param oDepthParm
  *  the parameter linked to thread/tap depth. 
  */
  virtual void GetDepth     (CATICkeParm_var & oDepthParm)                   = 0;

  /**
  * Retrieves the thread/tap depth.
  * @param oDepth
  *   The thread/tap depth. 
  */
  virtual void GetDepth    (double & oDepth)                                = 0;

  /**
  * Sets the thread/tap depth.
  * @param iDepth
  *   The thread/tap depth. 
  */
  virtual void SetDepth    (const double iDepth)                           = 0;

  /**
  * Retrieves parameter linked to the thread/tap pitch.
  * @param oPitchParm
  *  The parameter linked to thread/tap pitch. 
  */
  virtual void GetPitch     (CATICkeParm_var & oPitchParm)                   = 0;

  /**
  * Retrieves the thread/tap pitch.
  * @param oPitch
  *   The thread/tap pitch. 
  */
  virtual void GetPitch    (double & oPitch)                                = 0;

  /**
  * Sets the thread/tap pitch.
  * @param iPitch
  *   The thread/tap pitch. 
  */
  virtual void SetPitch    (const double iPitch)                           = 0;

  /**
  * Retrieves the thread/tap direction.
  * @param oThreadSide
  *   The thread/tap direction can be : 
  *<br>- Right_threaded        
  *<br>- Left_threaded     
  */
  virtual void GetThreadSide    (int & oThreadSide)                                = 0;

  /**
  * Sets the thread/tap direction.
  * @param iThreadType
  *   The thread/tap direction can be : 
  *<br>- Right_threaded        
  *<br>- Left_threaded     
  */
  virtual void SetThreadSide    (const int iThreadType)                      = 0;

  /**
  * Retrieves the thread/tap support.
  * @param oSupport
  *    The thread/tap support.
  *
  */  
  virtual void GetSupport   (CATISpecObject_var & oSupport)                   = 0;

  /**
  * Sets the thread/tap support.
  * @param iSupport
  *    The thread/tap support.
  *
  */  
  virtual void SetSupport   (CATISpecObject_var & iSupport)                   = 0;

  /**
  * Retrieves the thread/tap limit.
  * @param oLimit
  *    The thread/tap limit.
  *
  */  
  virtual void GetLimit   (CATISpecObject_var & oLimit)                   = 0;

  /**
  * Sets the thread/tap limit.
  * @param iLimit
  *    The thread limit.
  *
  */  
  virtual void SetLimit   (CATISpecObject_var & iLimit)                   = 0;
  /**
  * Retrieves the thread/tap direction in regards with limit face orientation.
  * @param oThreadDirection
  *   The thread/tap direction can be : 
  *<br>- Normal_limit        
  *<br>- Inverse_normal_limit     
  */
  virtual void GetThreadDirection    (int & oThreadDirection)              = 0;

  /**
  * Sets the thread/tap direction.in regards with limit face orientation.
  * @param iThreadDirection
  *   The thread/tap direction can be : 
  *<br>- Normal_limit        
  *<br>- Inverse_normal_limit     
  */
  virtual void SetThreadDirection    (const int iThreadDirection)                      = 0;

  /**
  * Retrieves the thread polarity.
  * @param oPolarity
  *   The thread polarity can be : 
  *<br>- 0 - Thread        
  *<br>- 1 - Tap     
  */
  virtual void GetPolarity    (int & oPolarity)                                = 0;

  /**
  * Sets the thread polarity.
  * @param iPolarity
  *   The thread polarity can be : 
  *<br>- 0 - Thread        
  *<br>- 1 - Tap     
  */
  virtual void SetPolarity    (const int iPolarity)                      = 0;

  /**
  * Retrieves the thread/tap bottom limit.
  * @param ohBottomLimit
  *    The thread/tap bottom limit.
  *
  */ 
  virtual HRESULT GetBottomLimit(CATISpecObject_var & ohBottomLimit)        = 0;

  /**
  * Sets the thread/tap bottom limit.
  * @param ihBottomLimit
  *    The thread bottom limit.
  *
  */
  virtual HRESULT SetBottomLimit(CATISpecObject_var & ihBottomLimit)        = 0;

  /**
  * Retrieves the thread/tap bottom type.
  * @param oBottomType
  *   The thread bottom type can be : 
  *<br>- 0 - Dimension       
  *<br>- 1 - Support Depth   
  *<br>- 2 - Up-To-Plane
  */
  virtual HRESULT GetBottomType(int & oBottomType)                          = 0;
  /**
  * Sets the thread/tap bottom type.
  * @param oBottomType
  *   The thread bottom type can be : 
  *<br>- 0 - Dimension       
  *<br>- 1 - Support Depth   
  *<br>- 2 - Up-To-Plane
  */
  virtual HRESULT SetBottomType(const int iBottomType)                      = 0;

};

CATDeclareHandler(CATIThread, CATIShape);

#endif // CATIThread_H
