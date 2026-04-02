#ifndef CATPrdLinkType_H
#define CATPrdLinkType_H
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * Describes type of link between 2 parts.
 */
enum CATPrdLinkType
{
  CATPrdLTNotDefined = -1,
  CATPrdLTRefInst    = 0,
  CATPrdLTRefRef     = 1
};

#endif
