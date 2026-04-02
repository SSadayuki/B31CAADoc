#ifndef CatVisuBackgroundMode_H
#define CatVisuBackgroundMode_H
// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Background  Visu Mode.
 * @param catNoBackground
 *  Hide visu background.
 * @param catPick
 *  Background is shown and pickable 
 * @param catNoPick
 *  Background is shown and not pickable 
 * @param catLowIntPick
 *  Background is shown in low intensity and pickable 
 * @param catLowIntNoPick
 *  Background is shown in low intensity and not pickable 
 */
enum CatVisuBackgroundMode 
{	
  catNoBackground, 
  catPick        ,
  catNoPick      , 
  catLowIntPick  ,
  catLowIntNoPick   
};

#endif


