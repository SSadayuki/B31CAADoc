/* -*-c++-*- */
#ifndef CATContourDefs_h
#define CATContourDefs_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// La classe permet de specifier le type d'utilisation et par 
// consequence les criteres d'integrite du contour
//
// ex. la classe ContourClass_Revolution teste la non intersection
//     du contour avec son axe
//
// ATTENTION : A la creation les contours portent par defaut la classe 
//             Undefined

enum CATContourClass
{
  ContourClass_Undefined  = 255,
  ContourClass_Extrusion  = 1,
  ContourClass_Revolution = 2,
  ContourClass_Spine      = 3
};

//------------------------------------------------------------------
// Specifie le type de definition d'un contour
//
// ContourType_Through  
//
//  Contour passant par N elements non obligatoirement jointifs et 
//  non ordonnes
//
// ContourType_FromTo   
//
//  Contour dont les extremites sont imposees et eventuellement 
//  certains elements de passage
//
// ContourType_OneLimit   
//
//  Contour dont une extremite est imposee et eventuellement certains 
//  elements de passage
//
// ContourType_Complete  
//
//  permet de definir un contour en explicitant de maniere ordonnee 
//  ses elements (jointifs 2 a 2).
//

enum CATContourType
{
  ContourType_Through  = 1,
  ContourType_FromTo   = 2,
  ContourType_OneLimit = 3,
  ContourType_Complete = 4           // for V4 profiles
};

//------------------------------------------------------------------
// Specifie les criteres de propagation de l'autosearch
//
// AutosearchMode_NoMultipleSolutions  
//
//  n'autorise pas de solutions multiples; Le cheminement est stopper  
//  lorsqu'il existe plusieurs possibilites sauf si un et un seul
//  chemin utilise un element THROUGH.
//
// AutosearchMode_MultipleSolutions
//
//  donne toujours une solution, meme en cas de solutions multiples.
//  Le cheminement n'est pas stopper lorsqu'il y a plusieurs possibi-
//  lites. La solution rendue respecte cependant les elements de
//  passages specifies (THROUGH)
//
// ATTENTION : Le mode par defaut est NoMultipleSolutions

enum CATAutosearchMode
{
  AutosearchMode_NoMultipleSolutions = 1,
  AutosearchMode_MultipleSolutions   = 2
};

#endif
