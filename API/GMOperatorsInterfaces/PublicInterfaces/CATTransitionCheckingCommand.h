#ifndef CATTransitionCheckingCommand_H
#define CATTransitionCheckingCommand_H

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/
// COPYRIGHT DASSAULT SYSTEMES  1999

#include "CATDataType.h"

class CATPoint ;

typedef CATLONG32  CATTransitionCheckingCommand;

const CATTransitionCheckingCommand CATCheck = 0;
const CATTransitionCheckingCommand CATPtDev = 1;
const CATTransitionCheckingCommand CATNormalDev = 2;
const CATTransitionCheckingCommand CATCrossTgDev = 4;
const CATTransitionCheckingCommand CATCurvatureDev = 8;
const CATTransitionCheckingCommand CATRCurvatureDev = 16;

struct CATTransitionDeviationResult
{
  double  PtDev;   
  double  NormalDev;
  double  CrossTgDev;
  double  CurvatureDev;
  double  RCurvatureDev;
} ;

struct CATTransitionPositionResult
{
  CATPoint* PtDev1;   
  CATPoint* PtDev2;
     
  CATPoint* NormalDev1;
  CATPoint* NormalDev2;

  CATPoint* CrossTgDev1;
  CATPoint* CrossTgDev2;

  CATPoint* CurvatureDev1;
  CATPoint* CurvatureDev2;

  CATPoint* RCurvatureDev1;
  CATPoint* RCurvatureDev2;
} ;

#endif
