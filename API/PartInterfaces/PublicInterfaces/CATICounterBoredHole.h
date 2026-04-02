/* -*-c++-*- */
#ifndef CATICounterBoredHole_H
#define CATICounterBoredHole_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATINewHole.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATICounterBoredHole;
#else
extern "C" const IID IID_CATICounterBoredHole;
#endif

/**
 * Class to manage CounterBored hole feature.
 * <b>Role</b>: This class inherits from CATINewHole. It is
 * used to manage depth and diameter of a CounterBored hole.
 * @see CATINewHole
 */
class ExportedByPartItf CATICounterBoredHole : public CATINewHole
{
   CATDeclareInterface;

   public: 

/**
 * Returns value of CounterBored diameter.
 * @param oDiameter
 *   Value of CounterBored diameter. 
 */
	   virtual void GetCBDiameter (double & oDiameter)             = 0;

/**
 * Returns value of CounterBored depth.
 * @param oDepth
 *  Value of CounterBored depth. 
 */
	   virtual void GetCBDepth    (double & oDepth)             = 0;

/**
 * Returns parameter linked to CounterBored diameter.
 * @param oDiameterParm
 *  Parameter linked to CounterBored diameter. 
 */
	   virtual void GetCBDiameter (CATICkeParm_var & oDiameterParm)    = 0;
 
/**
 * Returns parameter linked to CounterBored depth.
 * @param oDepthParm
 *  Parameter linked to CounterBored depth. 
 */	   
	   virtual void GetCBDepth    (CATICkeParm_var & oDepthParm)    = 0;

/**
 * Sets value of CounterBored diameter.
 * @param iDiameter
 *   Value of CounterBored diameter. 
 */
      virtual void SetCBDiameter (const double iDiameter)        = 0;

/**
 * Sets value of CounterBored depth.
 * @param iDepth
 *  Value of CounterBored depth. 
 */   
      virtual void SetCBDepth    (const double iDepth)        = 0;

      /** @nodoc */
   virtual void SetDiameterCheckActivity (const int iA)    = 0;
};

CATDeclareHandler(CATICounterBoredHole, CATINewHole);

#endif // CATICounterBoredHole_H
