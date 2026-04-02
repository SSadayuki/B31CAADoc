#ifndef CAT3DCompassTypedefs_H
#define CAT3DCompassTypedefs_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/** 
 * Possible Compass State.
 * @param CatGlider Compass is located in the 3D scene and can manipulate objects.
 * @param CatCompass Compass is docked on window top right corner and manipulates 3D viewpoint.
 */
enum CATCompassState{CatGlider, CatCompass};

/** @nodoc */
enum CATCompassTransformationType{
  CatCTTUnknown, CatCTTTranslation, CatCTTTranslationX, CatCTTTranslationY,
  CatCTTTranslationZ, CatCTTTranslationXY, CatCTTTranslationYZ, CatCTTTranslationZX,
  CatCTTRotation, CatCTTRotationX, CatCTTRotationY, CatCTTRotationZ, CatCTTRotationCenter,
  CatCTTTranslationXYZ };

/** @nodoc */
enum CATCompassLook{CatNoManipulation, CatObjectManipulation,
                    CatViewpointManipulation, CatStrainedManipulation};

#endif
