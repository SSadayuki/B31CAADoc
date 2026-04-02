/* -*-c++-*- */
#ifndef CATINewHole_H
#define CATINewHole_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include <PartItf.h>
#include <CATIShape.h>

class CATISpecObject_var;
class CATICkeParm_var;
class CATMathDirection;
class CATMathPoint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATINewHole;
#else
extern "C" const IID IID_CATINewHole;
#endif

/**
* Class to manage hole feature.
* <b>Role</b>: Class CATINewHole inherits from CATIShape. 
* Methods defined below are specifics to hole feature. They manage
* position, direction, type, diameter, anchorpoint of hole
* feature.
* @see CATIShape
*/
class ExportedByPartItf CATINewHole : public CATIShape
{
  CATDeclareInterface;

public: 

  /**
  * Returns hole type.
  * @param oHoleType
  *   hole type, can be :
  *<br>- Simple        
  *<br>- Tapered     
  *<br>- Counterbored
  *<br>- Countersunk 
  *<br>- Counterdrilled 
  */
  virtual void GetHoleType    (int & oHoleType)                          = 0;

  /**
  * Returns hole anchor mode.
  * This information is pertinent for Counterbored or Counterdrilled hole only.
  * @param oAnchorType
  *    Anchor mode, can be :
  *<br>- Extreme        = ExtPt 
  *<br>- Middle         = MidPt
  */
  virtual void GetAnchorType  (int & oAnchorType)                        = 0;

  /**
  * Returns hole bottom type.
  * @param oBottomType
  *    Hole bottom type, can be :
  *<br>- Flat     
  *<br>- VBottom 
  *<br>- Trimmed
  */
  virtual void GetBottomType  (int & oBottomType)                        = 0;

  /**
  * Returns hole threading mode.
  * @param oThreadMode
  *    Hole threading mode. 
  *<br>If threaded    : oThreadMode = Threaded.
  *<br>If not threaded: oThreadMode = Smooth
  */
  virtual void IsThreaded     (int & oThreadMode)                        = 0;

  /**
  * Returns hole origin point and hole direction.
  * @param oOrigin
  *    Origin of the hole.
  * @param oDirection
  *    Hole direction. Returned direction corresponds to drilling direction.
  */
  virtual void GetPosition    (CATMathPoint & oOrigin, CATMathDirection & oDirection)     = 0;

  /**
  * Returns hole direction.
  * @param oDirection
  *    Hole direction.
  *
  */  
  virtual void GetDirection   (CATISpecObject_var & oDirection)                   = 0;

  /**
  * Returns hole bottom limit.
  * @param oBottomLimit
  *    Hole bottom limit. The limit object controls hole bottom limit.
  */
  virtual void GetLimit       (CATISpecObject_var & oBottomLimit)                 = 0;

  /**
  * Returns parameter linked to hole diameter.
  * @param oDiameterParm
  *  Parameter linked to hole diameter. 
  */
  virtual void GetDiameter    (CATICkeParm_var & oDiameterParm)                   = 0;

  /**
  * Returns hole diameter.
  * @param oDiameter
  *   Hole diameter. 
  */
  virtual void GetDiameter    (double & oDiameter)                                = 0;


  /**
  * Sets hole type.
  * @param iHoleType
  *   Hole type, can be :
  *<br> - Simple        
  *<br> - Tapered     
  *<br> - Counterbored
  *<br> - Countersunk 
  *<br> - Counterdrilled 
  */
  virtual void SetHoleType    (const int iHoleType)                      = 0;

  /**
  * Sets hole anchor mode.
  * This information is pertinent for Counterbored or Counterdrilled hole only.
  * @param iAnchorType
  *    Anchor mode, can be :
  *<br>- Extreme        = ExtPt 
  *<br>- Middle         = MidPt
  */
  virtual void SetAnchorType  (const int iAnchorType)                    = 0;

  /**
  * Sets hole bottom type.
  * @param iBottomType
  *    Hole bottom type, can be :
  * <br>- Flat     
  * <br>- VBottom
  * <br>- Trimmed
  */
  virtual void SetBottomType  (const int iBottomType)                    = 0;

  /**
  * Sets hole threading mode.
  * @param iThreadMode
  *    Hole threading mode.
  *<br>If threaded    : iThreadMode = Threaded
  *<br>If not threaded: iThreadMode = Smooth
  */   
  virtual void SetThreaded    (const int iThreadMode)                    = 0;

  /**
  * Sets hole origin point.
  * @param iOrigin
  *    Origin of the hole.
  *
  */
  virtual void SetOrigin      (const CATMathPoint & iOrigin)             = 0;

  /**
  * Sets hole direction.
  * @param iDirection
  *    Hole direction.
  *
  */     
  virtual void SetDirection   (const CATISpecObject_var & iDirection)    = 0;

  /**
  * Inverts hole direction.
  *
  */     
  virtual void Reverse        ()                                         = 0;

  /**
  * Sets hole bottom limit.
  * @param iType.
  *    Type of the bottom limit, can be:
  * <br> - catOffsetLimit     : Shape is limited with an offset value.
  * <br> - catUpToNextLimit   : shape is limited with the next boundary encountered.
  * <br> - catUpToLastLimit   : shape is limited with the last boundary encountered.
  * <br> - catUpToPlaneLimit  : shape is limited with a selected plane.
  * <br> - catUpToSurfaceLimit: shape is limited with a selected surface.
  * <br> - catUpThruNextLimit : shape is limited with the next boundary encountered.
  *                             And relimiting body cuts the shape entirely once only.    
  * @param iBottomLimit
  *    Hole bottom limit. The limit object controls hole bottom limit.
  *
  */
  virtual void SetLimit       (const int iType, const CATISpecObject_var & iBottomLimit) = 0;

  /**
  * Sets hole diameter.
  * @param iDiameter
  *   Hole diameter. 
  */
  virtual void SetDiameter    (const double iDiameter)                           = 0;


  /** @nodoc */   
  virtual void GetNonPlanarData  (CATISpecObject_var &S, CATISpecObject_var &P) = 0;
  /** @nodoc */
  virtual void SetNonPlanarData  (const CATISpecObject_var &Surface,
    const CATISpecObject_var &Plane) = 0;


  /** @nodoc */
  virtual void CreateProfile  (CATISpecObject_var &S)                    = 0;
  /** @nodoc */
  virtual void AddCheckOnParameters ()                                   = 0;
  /** @nodoc */
  virtual void SetDepthCheckActivity (const int iA)                      = 0;

  // Migrated from CATIPrtHole

  //Methode a usage interne pour replace de plan et direction
  /**
  * Returns parameter linked to hole thread diameter.
  * @param oThreadDiameterParm
  *    Parameter linked to hole thread diameter 
  *
  */
  virtual void  GetThreadDiameter	(CATICkeParm_var & oThreadDiameterParm)	= 0;
  /**
  * Returns hole thread diameter.
  * @param oThreadDiameter
  *    Hole thread diameter
  *
  */
  virtual void  GetThreadDiameter	(double & oThreadDiameter)              = 0;
  /**
  * Sets hole thread diameter.
  * @param iThreadDiameter
  *    Hole thread diameter
  *
  */
  virtual void  SetThreadDiameter	(const double iThreadDiameter)          = 0;
  /**
  * Returns parameter linked to hole thread pitch.
  * @param oThreadPitchParm
  *   Parameter linked to hole thread pitch parameter
  *
  */
  virtual void  GetThreadPitch		(CATICkeParm_var & oThreadPitchParm)      = 0;
  /**
  * Returns hole thread pitch.
  * @param oThreadPitch
  *    Hole thread pitch
  *
  */
  virtual void  GetThreadPitch		(double & oThreadPitch)                   = 0;
  /**
  * Sets hole thread pitch.
  * @param iThreadPitch
  *    Hole thread pitch
  *
  */
  virtual void  SetThreadPitch		(const double iThreadPitch)               = 0;
  /**
  * Returns the value of the direction of the Thread Side.
  * @returns
  * <br> 0 : Right
  * <br> 1 : Left
  */
  virtual int   GetThreadSide		()                                      = 0;
  /**
  * Sets the value of the direction of the Thread Side.
  * @param iThreadSide
  * <br><b>Legal Values <\b>
  * <br> 0 : Right
  * <br> 1 : Left
  */
  virtual void  SetThreadSide		(const int iThreadSide)                 = 0;
  /**
  * Returns parameter linked to hole thread depth.
  * @param oThreadDepthParm
  *    Parameter linked to hole thread depth parameter
  *
  */
  virtual void  GetThreadDepth     (CATICkeParm_var & oThreadDepthParm)    = 0;
  /**
  * Returns hole thread Depth.
  * @param oThreadDepth
  *    Hole thread depth
  *
  */
  virtual void  GetThreadDepth    (double & oThreadDepth)                  = 0;
  /**
  * Sets hole thread depth.
  * @param iThreadDepth
  *    Hole thread depth
  *
  */
  virtual void  SetThreadDepth    (const double iThreadDepth)              = 0;

  // Migrated from CATIPrtHole
  /**
  * Returns hole context.
  * @param oContext
  *    Hole context
  *
  */
  virtual void  GetContext    (int &oContext)                  = 0;

  /**
  * Set hole context.
  * @param iContext
  *    Hole context
  *
  */
  virtual void  SetContext    (int &iContext)                  = 0;

  /**
  * Retrieves the hole thread bottom limit.
  * @param ohBottomLimit
  *    The hole thread bottom limit.
  *
  */ 
  virtual HRESULT GetThreadedBottomLimit(CATISpecObject_var & ohBottomLimit)        = 0;

  /**
  * Sets the hole thread bottom limit.
  * @param ihBottomLimit
  *    The hole thread bottom limit.
  *
  */
  virtual HRESULT SetThreadedBottomLimit(CATISpecObject_var & ihBottomLimit)        = 0;

  /**
  * Retrieves the hole thread bottom type.
  * @param oBottomType
  *   The hole thread bottom type can be : 
  *<br>- 0 - Dimension       
  *<br>- 1 - Support Depth   
  *<br>- 2 - Up-To-Plane
  */

  virtual HRESULT GetThreadedBottomType(int & oBottomType)                          = 0;
  /**
  * Sets the hole thread bottom type.
  * @param oBottomType
  *   The hole thread bottom type can be : 
  *<br>- 0 - Dimension       
  *<br>- 1 - Support Depth   
  *<br>- 2 - Up-To-Plane
  */
  virtual HRESULT SetThreadedBottomType(const int iBottomType)                      = 0;

};

CATDeclareHandler(CATINewHole, CATIShape);

#endif // CATINewHole_H
