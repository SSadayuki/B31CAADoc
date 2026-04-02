/* -*-c++-*- */
#ifndef CATICounterDrilledHole_H
#define CATICounterDrilledHole_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include <PartItf.h>
#include <CATINewHole.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATICounterDrilledHole;
#else
extern "C" const IID IID_CATICounterDrilledHole;
#endif

/**
 * Class to manage CounterDrilled hole feature.
 * <b>Role</b>: This class inherits from CATINewHole. It is
 * used to manage angle, depth and diameter of a CounterDrilled hole.
 * @see CATINewHole
 */
class ExportedByPartItf CATICounterDrilledHole : public CATINewHole
{
   CATDeclareInterface;

   public: 
/**
 * Returns CounterDrilled hole diameter.
 * @param oDiameter
 *   Value of CounterDrilled diameter. 
 */
      virtual void GetCDDiameter (double & oDiameter)             = 0;

/**
 * Returns value of CounterDrilled angle.
 * @param oAngle
 *  Value of CounterDrilled angle. 
 */
      virtual void GetCDAngle    (double & oAngle)             = 0;

/**
 * Returns value of CounterDrilled depth.
 * @param oDepth
 *  Value of CounterDrilled depth. 
 */
      virtual void GetCDDepth    (double & oDepth)             = 0;
      
/**
 * Returns parameter linked to CounterDrilled diameter.
 * @param oDiameterParm
 *  Parameter linked to CounterDrilled diameter. 
 */
	  virtual void GetCDDiameter (CATICkeParm_var & oDiameterParm)    = 0;

/**
 * Returns parameter linked to CounterDrilled angle.
 * @param oAngleParm
 *  Parameter linked to CounterDrilled angle. 
 */
      virtual void GetCDAngle    (CATICkeParm_var & oAngleParm)    = 0;

/**
 * Returns parameter linked to the CounterDrilled depth.
 * @param oDepthParm
 *  Parameter linked to the CounterDrilled depth. 
 */
      virtual void GetCDDepth    (CATICkeParm_var & oDepthParm)    = 0;

/**
 * Sets value of CounterDrilled diameter.
 * @param iDiameter
 *   Value of CounterDrilled diameter. 
 */
      virtual void SetCDDiameter (const double iDiameter)        = 0;

/**
 * Sets value of CounterDrilled angle.
 * @param iAngle
 *  Value of CounterDrilled angle. 
 */   
      virtual void SetCDAngle    (const double iAngle)        = 0;
 
/**
 * Sets value of CounterDrilled depth.
 * @param iDepth
 *   Value of CounterDrilled depth. 
 */   
	  virtual void SetCDDepth    (const double iDepth)        = 0;

    /** @nodoc */
   virtual void SetDiameterCheckActivity (const int iA)      = 0;
};

CATDeclareHandler(CATICounterDrilledHole, CATINewHole);

#endif // CATICounterDrilledHole_H
