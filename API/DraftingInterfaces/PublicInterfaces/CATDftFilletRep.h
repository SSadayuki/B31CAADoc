#ifndef CATDftFilletRep_H
#define CATDftFilletRep_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT DASSAULT SYSTEMES 1999
//--------------------------------------------------------------------------
// CATDftFilletRep Enum
// mmr - 04/99 
//--------------------------------------------------------------------------

    /**
     * Fillet representation mode
     *
     * @param NoFillet
     *   
     * @param BoundaryFillet
     *  
     * @param FilletOriginalEdge
     *  
     */
enum CATDftFilletRep
{ 
  NoFillet           = 0 , 
  BoundaryFillet     = 1 , 
  FilletOriginalEdge = 2 
};
                         
#endif
