#ifndef CATDrwPictureParameters_H
#define CATDrwPictureParameters_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 2004
//------------------------------------------------------------------------------
// FILENAME    :    CATDrwPictureParameters.h
// LOCATION    :    DraftingInterfaces\PublicInterfaces
// AUTHOR      :    FLR
// DATE        :    01.04.13
//------------------------------------------------------------------------------
// DESCRIPTION :    Enums for Picture
//
//------------------------------------------------------------------------------
// COMMENTS    :    
//                  
//------------------------------------------------------------------------------
// MODIFICATIONS    user       date      purpose
//------------------------------------------------------------------------------

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
* Picture format parameters.
* Enum used to specified picture format parameters.
* @param DrwPictureNONE
* @param DrwPicturePNG
* @param DrwPictureJPEG
* @param DrwPictureCCITTG3
*/
enum DrwPictureFormat { 
  DrwPictureNONE = 0, 
  DrwPicturePNG  = 1, 
  DrwPictureJPEG = 2,
  DrwPictureCCITTG3 = 3 }; 

#endif
