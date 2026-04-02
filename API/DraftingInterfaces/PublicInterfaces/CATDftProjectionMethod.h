#ifndef CATDftProjectionMethod_h
#define CATDftProjectionMethod_h
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// FILENAME    :    CATDftProjectionMethod.h
// LOCATION    :    DraftingInterfaces\PublicInterfaces
// AUTHOR      :    MMR
// DATE        :    April 1999
//------------------------------------------------------------------------------
// DESCRIPTION :    Enums for Projection method
//
//------------------------------------------------------------------------------
// COMMENTS    :    
//                  
//------------------------------------------------------------------------------
// MODIFICATIONS    user       date      purpose
//------------------------------------------------------------------------------

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
    /**
     * Sheet projection Method.
     * @param CATFirstAngle
     *   The views are created using first angle standard
     * @param CATThirdAngle
     *   The views are created using third angle standard
     */
enum CATDftProjectionMethod
{
  CATFirstAngle,
  CATThirdAngle
};

#endif
