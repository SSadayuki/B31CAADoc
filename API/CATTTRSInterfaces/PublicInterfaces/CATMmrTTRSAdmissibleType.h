#ifndef CATMmrTTRSAdmissibleType_H
#define CATMmrTTRSAdmissibleType_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Typedef to describe the kind of admissible type for TTRS.
 */

typedef unsigned long CATMmrTTRSAdmissibleType;
/**
 * The TTRS type is unknown.
 */
#define CATMmrTTRSTypeUnknown                        (0)

/**
 * The TTRS type is undefined.
 */
#define CATMmrTTRSTypeUndefined                      (1 << 1)

/**
 * The TTRS is a profile.
 */
#define CATMmrTTRSTypeProfile                        (1 << 2)

/**
 * The TTRS is a pattern of spheres.
 */
#define CATMmrTTRSTypePatternOfSpheres               (1 << 3)

/**
 * The TTRS is a pattern of planes.
 */
#define CATMmrTTRSTypePatternOfPlanes                (1 << 4)

/**
 * The TTRS is a pattern of tabs/slots.
 */
#define CATMmrTTRSTypePatternOfTabsSlots             (1 << 6)

/**
 * The TTRS is a pattern of cylindrical pins/holes.
 */
#define CATMmrTTRSTypePatternOfCylPinsHoles          (1 << 7)

/**
 * The TTRS is a pattern of not cylindrical pins/holes.
 */
#define CATMmrTTRSTypePatternOfNotCylPinsHoles       (1 << 8)

/**
 * The TTRS is a pattern of threads.
 */
#define CATMmrTTRSTypePatternOfThreads               (1 << 9)

/**
 * The TTRS is a pattern of cylinders.
 */
#define CATMmrTTRSTypePatternOfCylinders             (1 << 10)

/**
 * The TTRS is a pattern of angular tabs/slots.
 */
#define CATMmrTTRSTypePatternOfAngularTabsSlots      (1 << 11)

/**
 * The TTRS is a pattern of circles.
 */
#define CATMmrTTRSTypePatternOfCircles               (1 << 12)

/**
 * The TTRS is a related one.
 */
#define CATMmrTTRSTypeRelated01                      (1 << 13)

/**
 * The TTRS is a support one.
 */
#define CATMmrTTRSTypeSupport                        (1 << 14)

/**
 * The TTRS is a general one.
 */
#define CATMmrTTRSTypeGeneral                        (1 << 15)

/**
 * The TTRS is a pattern of cylindrical tab slots
 */
#define CATMmrTTRSTypePatternOfCylTabsSlots          (1 << 16)

/**
 * The TTRS is a pattern of holes
 * (Elongated/Rectangular/Rectangular Round)
 */
#define CATMmrTTRSTypePatternOfHoles                 (1 << 17)

/**
 * The TTRS is a pattern of Cones.
 */
#define CATMmrTTRSTypePatternOfCones                 (1 << 18)

 /**
 * The TTRS is a pattern of Tori.
 */
#define CATMmrTTRSTypePatternOfTori                 (1 << 19)

#endif
